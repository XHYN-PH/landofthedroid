#include "recomp.h"
#include "rec_mod.h"

void f_9883fd(void) {
  LOAD_REGS();
L_9883fd: /* 9883fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_988400: /* 988400: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* 988404: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 988408: xor ecx, ecx */
  ecx = 0;
/* 98840a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98840c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 988410: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 988414: jbe 0x98873e */
  if ((cf | zf)) goto L_98873e;
L_98841a: /* 98841a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_988420: /* 988420: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 988424: cmp eax, 0x29 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x29u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 988427: jg 0x988470 */
  if ((!zf && sf == of)) goto L_988470;
L_988429: /* 988429: je 0x98845b */
  if (zf) goto L_98845b;
L_98842b: /* 98842b: add eax, -0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98842e: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 988431: ja 0x9884b5 */
  if ((!cf && !zf)) goto L_9884b5;
L_988437: /* 988437: jmp dword ptr [eax*4 + 0x988754] */
  switch (R32((uint32_t)(eax*4 + 0x988754u))) {
    case 0x98843eu: goto L_98843e;
    case 0x988448u: goto L_988448;
    case 0x988452u: goto L_988452;
    default: guest_badjump(0x988437, R32((uint32_t)(eax*4 + 0x988754u))); return;
  }
L_98843e: /* 98843e: mov edi, esi */
  edi = esi;
/* 988440: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 988443: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 988446: jmp 0x9884b1 */
  goto L_9884b1;
L_988448: /* 988448: mov eax, esi */
  eax = esi;
/* 98844a: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 98844d: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 988450: jmp 0x9884b1 */
  goto L_9884b1;
L_988452: /* 988452: mov edi, esi */
  edi = esi;
/* 988454: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 988457: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 988459: jmp 0x9884b1 */
  goto L_9884b1;
L_98845b: /* 98845b: mov edi, esi */
  edi = esi;
/* 98845d: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 988460: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988462: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 988466: jne 0x9884b5 */
  if (!zf) goto L_9884b5;
L_988468: /* 988468: add edi, 0x400 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98846e: jmp 0x9884b1 */
  goto L_9884b1;
L_988470: /* 988470: cmp eax, 0x33545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 988475: jg 0x988492 */
  if ((!zf && sf == of)) goto L_988492;
L_988477: /* 988477: je 0x988487 */
  if (zf) goto L_988487;
L_988479: /* 988479: cmp eax, 0x31545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x31545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98847e: je 0x98848e */
  if (zf) goto L_98848e;
L_988480: /* 988480: cmp eax, 0x32545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x32545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 988485: jne 0x9884b5 */
  if (!zf) goto L_9884b5;
L_988487: /* 988487: mov edx, 0x100 */
  edx = 0x100u;
/* 98848c: jmp 0x9884a5 */
  goto L_9884a5;
L_98848e: /* 98848e: xor edx, edx */
  edx = 0;
/* 988490: jmp 0x9884a5 */
  goto L_9884a5;
L_988492: /* 988492: cmp eax, 0x34545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 988497: je 0x9884a0 */
  if (zf) goto L_9884a0;
L_988499: /* 988499: cmp eax, 0x35545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98849e: jne 0x9884b5 */
  if (!zf) goto L_9884b5;
L_9884a0: /* 9884a0: mov edx, 0x200 */
  edx = 0x200u;
L_9884a5: /* 9884a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9884a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9884a7: call 0x9876c0 */
  esp -= 4; W32(esp, 0x9884acu); SPILL(); f_9876c0(); if (g_unwind) return; RELOAD();
/* 9884ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9884af: mov edi, eax */
  edi = eax;
L_9884b1: /* 9884b1: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
L_9884b5: /* 9884b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9884b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9884b8: call 0x99cf54 */
  esp -= 4; W32(esp, 0x9884bdu); SPILL(); f_99cf54(); if (g_unwind) return; RELOAD();
/* 9884bd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9884c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9884c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9884c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9884c3: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 9884c7: call 0x9855d0 */
  esp -= 4; W32(esp, 0x9884ccu); SPILL(); f_9855d0(); if (g_unwind) return; RELOAD();
/* 9884cc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9884cf: mov cl, byte ptr [eax + 0x237c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x237cu))) & 0xffu);
/* 9884d5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9884d8: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9884da: jne 0x9884f6 */
  if (!zf) goto L_9884f6;
L_9884dc: /* 9884dc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9884e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 9884e2: jbe 0x9884f6 */
  if ((cf | zf)) goto L_9884f6;
L_9884e4: /* 9884e4: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9884e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9884e9: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9884eeu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9884ee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9884f1: jmp 0x98871f */
  goto L_98871f;
L_9884f6: /* 9884f6: xor eax, eax */
  eax = 0;
/* 9884f8: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 9884fd: lea edi, [esp + 0xc8] */
  edi = (uint32_t)(esp + 0xc8u);
/* 988504: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 988506: cmp dword ptr [esp + 0x18], 0x29 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x29u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98850b: mov dword ptr [esp + 0xc8], 0x7c */
  W32((uint32_t)(esp + 0xc8u), 0x7cu);
/* 988516: mov dword ptr [esp + 0xcc], 0x1806 */
  W32((uint32_t)(esp + 0xccu), 0x1806u);
/* 988521: mov dword ptr [esp + 0xd4], ebx */
  W32((uint32_t)(esp + 0xd4u), ebx);
/* 988528: mov dword ptr [esp + 0xd0], esi */
  W32((uint32_t)(esp + 0xd0u), esi);
/* 98852f: jne 0x98855b */
  if (!zf) goto L_98855b;
L_988531: /* 988531: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 988535: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988537: jne 0x98855b */
  if (!zf) goto L_98855b;
L_988539: /* 988539: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 98853d: mov esi, eax */
  esi = eax;
/* 98853f: mov ecx, 0x100 */
  ecx = 0x100u;
/* 988544: lea edi, [esp + 0x1c8] */
  edi = (uint32_t)(esp + 0x1c8u);
/* 98854b: add eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 988550: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 988552: mov dword ptr [esp + 0xec], eax */
  W32((uint32_t)(esp + 0xecu), eax);
/* 988559: jmp 0x988566 */
  goto L_988566;
L_98855b: /* 98855b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98855f: mov dword ptr [esp + 0xec], edx */
  W32((uint32_t)(esp + 0xecu), edx);
L_988566: /* 988566: mov al, byte ptr [esp + 0x13] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 98856a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98856c: jne 0x988585 */
  if (!zf) goto L_988585;
L_98856e: /* 98856e: mov ecx, 8 */
  ecx = 0x8u;
/* 988573: lea esi, [esp + 0x90] */
  esi = (uint32_t)(esp + 0x90u);
/* 98857a: lea edi, [esp + 0x110] */
  edi = (uint32_t)(esp + 0x110u);
/* 988581: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 988583: jmp 0x9885a9 */
  goto L_9885a9;
L_988585: /* 988585: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 98858c: mov dword ptr [esp + 0x114], 4 */
  W32((uint32_t)(esp + 0x114u), 0x4u);
/* 988597: mov dword ptr [esp + 0x118], 0xdeadbabe */
  W32((uint32_t)(esp + 0x118u), 0xdeadbabeu);
/* 9885a2: mov dword ptr [esp + 0x11c], eax */
  W32((uint32_t)(esp + 0x11cu), eax);
L_9885a9: /* 9885a9: lea ecx, [esp + 0xc8] */
  ecx = (uint32_t)(esp + 0xc8u);
/* 9885b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9885b1: call 0x98ba70 */
  esp -= 4; W32(esp, 0x9885b6u); SPILL(); f_98ba70(); if (g_unwind) return; RELOAD();
/* 9885b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9885b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9885b9: call 0x99cf54 */
  esp -= 4; W32(esp, 0x9885beu); SPILL(); f_99cf54(); if (g_unwind) return; RELOAD();
/* 9885be: mov esi, eax */
  esi = eax;
/* 9885c0: xor eax, eax */
  eax = 0;
/* 9885c2: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 9885c7: lea edi, [esp + 0x154] */
  edi = (uint32_t)(esp + 0x154u);
/* 9885ce: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9885d0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9885d4: lea edx, [esp + 0x1d4] */
  edx = (uint32_t)(esp + 0x1d4u);
/* 9885db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9885dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9885dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9885de: lea ecx, [esp + 0x160] */
  ecx = (uint32_t)(esp + 0x160u);
/* 9885e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9885e6: lea edx, [esp + 0xe4] */
  edx = (uint32_t)(esp + 0xe4u);
/* 9885ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9885ee: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 9885f2: mov dword ptr [esp + 0x168], 0x7c */
  W32((uint32_t)(esp + 0x168u), 0x7cu);
/* 9885fd: call 0x98be50 */
  esp -= 4; W32(esp, 0x988602u); SPILL(); f_98be50(); if (g_unwind) return; RELOAD();
/* 988602: mov al, byte ptr [0xcf3076] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf3076u))) & 0xffu);
/* 988607: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98860a: xor edi, edi */
  edi = 0;
/* 98860c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98860e: mov eax, dword ptr [esp + 0x150] */
  eax = R32((uint32_t)(esp + 0x150u));
/* 988615: jne 0x988689 */
  if (!zf) goto L_988689;
L_988617: /* 988617: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 988619: jbe 0x9886fc */
  if ((cf | zf)) goto L_9886fc;
L_98861f: /* 98861f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 988623: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 988626: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98862a: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98862e: mov edi, edi */
  edi = edi;
L_988630: /* 988630: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 988634: mov esi, dword ptr [0xcf2ff0] */
  esi = R32((uint32_t)(0xcf2ff0u));
/* 98863a: mov eax, edi */
  eax = edi;
/* 98863c: imul eax, dword ptr [0xcf3004] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xcf3004u)));
  eax = (uint32_t)r;
  }
/* 988643: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 988645: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 988649: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98864b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98864d: jbe 0x98866a */
  if ((cf | zf)) goto L_98866a;
L_98864f: /* 98864f: mov esi, ebx */
  esi = ebx;
L_988651: /* 988651: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 988653: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 988655: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 988658: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 988659: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98865a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98865c: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 98865f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 988660: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 988661: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 988663: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 988664: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 988667: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 988668: jne 0x988651 */
  if (!zf) goto L_988651;
L_98866a: /* 98866a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98866e: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 988675: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 988677: mov eax, dword ptr [esp + 0x150] */
  eax = R32((uint32_t)(esp + 0x150u));
/* 98867e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98867f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988681: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 988685: jb 0x988630 */
  if (cf) goto L_988630;
L_988687: /* 988687: jmp 0x9886fc */
  goto L_9886fc;
L_988689: /* 988689: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98868b: jbe 0x9886fc */
  if ((cf | zf)) goto L_9886fc;
L_98868d: /* 98868d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 988691: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 988695: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 98869c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
L_9886a0: /* 9886a0: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 9886a4: mov ecx, dword ptr [0xcf2ff0] */
  ecx = R32((uint32_t)(0xcf2ff0u));
/* 9886aa: mov eax, edi */
  eax = edi;
/* 9886ac: imul eax, dword ptr [0xcf3004] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xcf3004u)));
  eax = (uint32_t)r;
  }
/* 9886b3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9886b5: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9886b7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 9886b9: mov ecx, esi */
  ecx = esi;
/* 9886bb: jbe 0x9886e7 */
  if ((cf | zf)) goto L_9886e7;
L_9886bd: /* 9886bd: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
L_9886c1: /* 9886c1: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 9886c3: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9886c5: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 9886c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9886c9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9886ca: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9886cc: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 9886cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9886d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9886d1: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9886d3: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 9886d6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9886d7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9886d8: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9886da: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9886de: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9886df: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9886e0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9886e1: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 9886e5: jne 0x9886c1 */
  if (!zf) goto L_9886c1;
L_9886e7: /* 9886e7: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 9886ee: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9886f0: mov eax, dword ptr [esp + 0x150] */
  eax = R32((uint32_t)(esp + 0x150u));
/* 9886f7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9886f8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9886fa: jb 0x9886a0 */
  if (cf) goto L_9886a0;
L_9886fc: /* 9886fc: add dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 988700: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 988704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988705: call 0x99cf5a */
  esp -= 4; W32(esp, 0x98870au); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 98870a: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98870f: call 0x99cf5a */
  esp -= 4; W32(esp, 0x988714u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 988714: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 988718: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98871c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98871f: /* 98871f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 988723: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 988727: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 988728: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 988729: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98872b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98872c: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 98872e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988730: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 988734: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 988738: jb 0x988420 */
  if (cf) goto L_988420;
L_98873e: /* 98873e: dec dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 988742: jne 0x988400 */
  if (!zf) goto L_988400;
L_988748: /* 988748: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 98874c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98874d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98874e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98874f: mov esp, ebp */
  esp = ebp;
/* 988751: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 988752: ret  */
  esp += 4; SPILL(); return;
}

void f_988770(void) {
  LOAD_REGS();
L_988770: /* 988770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 988771: mov ebp, esp */
  ebp = esp;
/* 988773: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 988776: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98877c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98877f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988780: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988781: mov esi, eax */
  esi = eax;
/* 988783: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 988787: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988788: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98878a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98878b: mov dword ptr [esp + 0x18], 0x20534444 */
  W32((uint32_t)(esp + 0x18u), 0x20534444u);
/* 988793: call 0x9855b0 */
  esp -= 4; W32(esp, 0x988798u); SPILL(); f_9855b0(); if (g_unwind) return; RELOAD();
/* 988798: xor eax, eax */
  eax = 0;
/* 98879a: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 98879f: lea edi, [esp + 0x1c] */
  edi = (uint32_t)(esp + 0x1cu);
/* 9887a3: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9887a5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9887a8: mov dx, word ptr [eax + 0x237e] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x237eu))) & 0xffffu);
/* 9887af: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9887b2: cmp dx, 0x21 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x21u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 9887b6: mov dword ptr [esp + 0x10], 0x7c */
  W32((uint32_t)(esp + 0x10u), 0x7cu);
/* 9887be: mov dword ptr [esp + 0x14], 0x81007 */
  W32((uint32_t)(esp + 0x14u), 0x81007u);
/* 9887c6: je 0x9887d0 */
  if (zf) goto L_9887d0;
L_9887c8: /* 9887c8: mov dword ptr [esp + 0x14], 0xa1007 */
  W32((uint32_t)(esp + 0x14u), 0xa1007u);
L_9887d0: /* 9887d0: cmp word ptr [eax + 0x23a8], 0x51 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x23a8u))); uint16_t b = (uint16_t)(0x51u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 9887d8: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 9887db: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 9887df: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 9887e3: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 9887e7: jne 0x9887f1 */
  if (!zf) goto L_9887f1;
L_9887e9: /* 9887e9: or dword ptr [esp + 0x7c], 0xfe00 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu))); uint32_t b = (uint32_t)(0xfe00u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + 0x7cu), r);
  }
L_9887f1: /* 9887f1: cmp dx, 0x21 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x21u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 9887f5: jne 0x988801 */
  if (!zf) goto L_988801;
L_9887f7: /* 9887f7: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 9887ff: jmp 0x98884b */
  goto L_98884b;
L_988801: /* 988801: xor ecx, ecx */
  ecx = 0;
/* 988803: cmp dx, 0x1f */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x1fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 988807: jne 0x98882d */
  if (!zf) goto L_98882d;
L_988809: /* 988809: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98880b: movsx edi, word ptr [eax + 0x2380] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x2380u)));
/* 988812: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 988816: mov eax, ebx */
  eax = ebx;
/* 988818: jg 0x98881c */
  if ((!zf && sf == of)) goto L_98881c;
L_98881a: /* 98881a: mov eax, esi */
  eax = esi;
L_98881c: /* 98881c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98881e: je 0x988827 */
  if (zf) goto L_988827;
L_988820: /* 988820: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 988822: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 988823: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988825: jne 0x988820 */
  if (!zf) goto L_988820;
L_988827: /* 988827: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 988829: jbe 0x98884b */
  if ((cf | zf)) goto L_98884b;
L_98882b: /* 98882b: jmp 0x988847 */
  goto L_988847;
L_98882d: /* 98882d: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98882f: mov eax, ebx */
  eax = ebx;
/* 988831: jg 0x988835 */
  if ((!zf && sf == of)) goto L_988835;
L_988833: /* 988833: mov eax, esi */
  eax = esi;
L_988835: /* 988835: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988837: je 0x988847 */
  if (zf) goto L_988847;
L_988839: /* 988839: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_988840: /* 988840: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 988842: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 988843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988845: jne 0x988840 */
  if (!zf) goto L_988840;
L_988847: /* 988847: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
L_98884b: /* 98884b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 98884e: add eax, -0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 988851: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 988854: mov dword ptr [esp + 0x58], 0x20 */
  W32((uint32_t)(esp + 0x58u), 0x20u);
/* 98885c: ja 0x9888ad */
  if ((!cf && !zf)) goto L_9888ad;
L_98885e: /* 98885e: jmp dword ptr [eax*4 + 0x988900] */
  switch (R32((uint32_t)(eax*4 + 0x988900u))) {
    case 0x988865u: goto L_988865;
    case 0x98886cu: goto L_98886c;
    case 0x988873u: goto L_988873;
    case 0x98887au: goto L_98887a;
    case 0x988881u: goto L_988881;
    case 0x988888u: goto L_988888;
    case 0x98888fu: goto L_98888f;
    case 0x988896u: goto L_988896;
    case 0x98889du: goto L_98889d;
    default: guest_badjump(0x98885e, R32((uint32_t)(eax*4 + 0x988900u))); return;
  }
L_988865: /* 988865: mov esi, 0xa218c0 */
  esi = 0xa218c0u;
/* 98886a: jmp 0x9888a2 */
  goto L_9888a2;
L_98886c: /* 98886c: mov esi, 0xa218a0 */
  esi = 0xa218a0u;
/* 988871: jmp 0x9888a2 */
  goto L_9888a2;
L_988873: /* 988873: mov esi, 0xa21900 */
  esi = 0xa21900u;
/* 988878: jmp 0x9888a2 */
  goto L_9888a2;
L_98887a: /* 98887a: mov esi, 0xa21880 */
  esi = 0xa21880u;
/* 98887f: jmp 0x9888a2 */
  goto L_9888a2;
L_988881: /* 988881: mov esi, 0xa218e0 */
  esi = 0xa218e0u;
/* 988886: jmp 0x9888a2 */
  goto L_9888a2;
L_988888: /* 988888: mov esi, 0xa21920 */
  esi = 0xa21920u;
/* 98888d: jmp 0x9888a2 */
  goto L_9888a2;
L_98888f: /* 98888f: mov esi, 0xa21960 */
  esi = 0xa21960u;
/* 988894: jmp 0x9888a2 */
  goto L_9888a2;
L_988896: /* 988896: mov esi, 0xa21940 */
  esi = 0xa21940u;
/* 98889b: jmp 0x9888a2 */
  goto L_9888a2;
L_98889d: /* 98889d: mov esi, 0xa21980 */
  esi = 0xa21980u;
L_9888a2: /* 9888a2: lea edi, [esp + 0x58] */
  edi = (uint32_t)(esp + 0x58u);
/* 9888a6: mov ecx, 8 */
  ecx = 0x8u;
/* 9888ab: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_9888ad: /* 9888ad: xor eax, eax */
  eax = 0;
/* 9888af: cmp dx, 0x21 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x21u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 9888b3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9888b6: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9888b9: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9888bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9888be: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 9888c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9888c1: mov dword ptr [esp + 0x8c], 0x58534444 */
  W32((uint32_t)(esp + 0x8cu), 0x58534444u);
/* 9888cc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9888cd: and eax, 0xffbffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffbffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9888d2: add eax, 0x401008 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x401008u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9888d7: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 9888de: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9888e1: mov dword ptr [esp + 0x90], eax */
  W32((uint32_t)(esp + 0x90u), eax);
/* 9888e8: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 9888ef: call 0x9855b0 */
  esp -= 4; W32(esp, 0x9888f4u); SPILL(); f_9855b0(); if (g_unwind) return; RELOAD();
/* 9888f4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9888f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9888f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9888f9: mov esp, ebp */
  esp = ebp;
/* 9888fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9888fc: ret  */
  esp += 4; SPILL(); return;
}

void f_988930(void) {
  LOAD_REGS();
L_988930: /* 988930: mov eax, ecx */
  eax = ecx;
/* 988932: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988940(void) {
  LOAD_REGS();
L_988940: /* 988940: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 988943: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 988947: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 988949: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988950(void) {
  LOAD_REGS();
L_988950: /* 988950: mov eax, ecx */
  eax = ecx;
/* 988952: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988960(void) {
  LOAD_REGS();
L_988960: /* 988960: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 988962: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 988966: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 988969: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98896d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 98896f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_988980(void) {
  LOAD_REGS();
L_988980: /* 988980: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 988983: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 988987: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 988989: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988990(void) {
  LOAD_REGS();
L_988990: /* 988990: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 988992: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 988996: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 988999: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98899d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 98899f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9889b0(void) {
  LOAD_REGS();
L_9889b0: /* 9889b0: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9889b4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9889b8: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 9889bb: jb 0x9889c7 */
  if (cf) goto L_9889c7;
L_9889bd: /* 9889bd: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 9889c0: mov byte ptr [ecx + eax], 0 */
  W8((uint32_t)(ecx + eax), 0x0u);
/* 9889c4: ret 4 */
  esp += 8; SPILL(); return;
L_9889c7: /* 9889c7: mov byte ptr [ecx + eax + 4], 0 */
  W8((uint32_t)(ecx + eax + 0x4u), 0x0u);
/* 9889cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9889d0(void) {
  LOAD_REGS();
L_9889d0: /* 9889d0: mov eax, 0x3fffffff */
  eax = 0x3fffffffu;
/* 9889d5: ret  */
  esp += 4; SPILL(); return;
}

void f_9889e0(void) {
  LOAD_REGS();
L_9889e0: /* 9889e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9889e4: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 9889eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9889ec: call 0x6c242d */
  esp -= 4; W32(esp, 0x9889f1u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9889f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9889f4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_988a00(void) {
  LOAD_REGS();
L_988a00: /* 988a00: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 988a05: ret  */
  esp += 4; SPILL(); return;
}

void f_988a10(void) {
  LOAD_REGS();
L_988a10: /* 988a10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 988a14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988a15: call 0x6c242d */
  esp -= 4; W32(esp, 0x988a1au); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 988a1a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 988a1d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_988a20(void) {
  LOAD_REGS();
L_988a20: /* 988a20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988a30(void) {
  LOAD_REGS();
L_988a30: /* 988a30: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 988a33: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 988a37: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 988a3a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988a40(void) {
  LOAD_REGS();
L_988a40: /* 988a40: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 988a43: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 988a47: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 988a4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988a50(void) {
  LOAD_REGS();
L_988a50: /* 988a50: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 988a54: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 988a56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988a57: mov esi, ecx */
  esi = ecx;
/* 988a59: je 0x988a6d */
  if (zf) goto L_988a6d;
L_988a5b: /* 988a5b: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988a5f: jb 0x988a6d */
  if (cf) goto L_988a6d;
L_988a61: /* 988a61: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 988a64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988a65: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x988a6au); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 988a6a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_988a6d: /* 988a6d: mov dword ptr [esi + 0x18], 0xf */
  W32((uint32_t)(esi + 0x18u), 0xfu);
/* 988a74: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* 988a7b: mov byte ptr [esi + 4], 0 */
  W8((uint32_t)(esi + 0x4u), 0x0u);
/* 988a7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988a80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988a90(void) {
  LOAD_REGS();
L_988a90: /* 988a90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 988a91: mov ebp, esp */
  ebp = esp;
/* 988a93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 988a95: push 0x9da300 */
  { uint32_t v = 0x9da300u; esp -= 4; W32(esp, v); }
/* 988a9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 988aa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988aa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 988aa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 988aab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 988aae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 988aaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988ab0: mov esi, eax */
  esi = eax;
/* 988ab2: or esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 988ab5: cmp esi, -2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 988ab8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988ab9: mov ebx, ecx */
  ebx = ecx;
/* 988abb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 988abe: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 988ac1: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 988ac4: jbe 0x988acb */
  if ((cf | zf)) goto L_988acb;
L_988ac6: /* 988ac6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 988ac9: mov esi, eax */
  esi = eax;
L_988acb: /* 988acb: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 988ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988acf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 988ad6: call 0x6c242d */
  esp -= 4; W32(esp, 0x988adbu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 988adb: mov edx, eax */
  edx = eax;
/* 988add: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 988ae0: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 988ae3: jmp 0x988b0e */
  goto L_988b0e;
L_988b0e: /* 988b0e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 988b11: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 988b13: jbe 0x988b39 */
  if ((cf | zf)) goto L_988b39;
L_988b15: /* 988b15: cmp dword ptr [ebx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988b19: jb 0x988b20 */
  if (cf) goto L_988b20;
L_988b1b: /* 988b1b: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 988b1e: jmp 0x988b23 */
  goto L_988b23;
L_988b20: /* 988b20: lea esi, [ebx + 4] */
  esi = (uint32_t)(ebx + 0x4u);
L_988b23: /* 988b23: mov eax, ecx */
  eax = ecx;
/* 988b25: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 988b28: mov edi, edx */
  edi = edx;
/* 988b2a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 988b2c: mov ecx, eax */
  ecx = eax;
/* 988b2e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 988b31: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 988b33: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 988b36: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_988b39: /* 988b39: cmp dword ptr [ebx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988b3d: jb 0x988b51 */
  if (cf) goto L_988b51;
L_988b3f: /* 988b3f: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 988b42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988b43: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x988b48u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 988b48: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 988b4b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 988b4e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_988b51: /* 988b51: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988b54: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 988b57: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* 988b5a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 988b5c: mov dword ptr [ebx + 0x18], esi */
  W32((uint32_t)(ebx + 0x18u), esi);
/* 988b5f: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 988b62: jb 0x988b66 */
  if (cf) goto L_988b66;
L_988b64: /* 988b64: mov eax, edx */
  eax = edx;
L_988b66: /* 988b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988b67: mov byte ptr [eax + ecx], 0 */
  W8((uint32_t)(eax + ecx), 0x0u);
/* 988b6b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 988b6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988b6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 988b76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 988b77: mov esp, ebp */
  esp = ebp;
/* 988b79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 988b7a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_988ae5(void) {
  LOAD_REGS();
L_988ae5: /* 988ae5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 988ae8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 988aeb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 988aec: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 988aef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988af0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 988af4: call 0x6c242d */
  esp -= 4; W32(esp, 0x988af9u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 988af9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 988afc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 988aff: mov eax, 0x988b05 */
  eax = 0x988b05u;
/* 988b04: ret  */
  esp += 4; SPILL(); return;
}

void f_988b05(void) {
  LOAD_REGS();
L_988b05: /* 988b05: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 988b08: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 988b0b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 988b0e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 988b11: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 988b13: jbe 0x988b39 */
  if ((cf | zf)) goto L_988b39;
L_988b15: /* 988b15: cmp dword ptr [ebx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988b19: jb 0x988b20 */
  if (cf) goto L_988b20;
L_988b1b: /* 988b1b: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 988b1e: jmp 0x988b23 */
  goto L_988b23;
L_988b20: /* 988b20: lea esi, [ebx + 4] */
  esi = (uint32_t)(ebx + 0x4u);
L_988b23: /* 988b23: mov eax, ecx */
  eax = ecx;
/* 988b25: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 988b28: mov edi, edx */
  edi = edx;
/* 988b2a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 988b2c: mov ecx, eax */
  ecx = eax;
/* 988b2e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 988b31: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 988b33: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 988b36: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_988b39: /* 988b39: cmp dword ptr [ebx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988b3d: jb 0x988b51 */
  if (cf) goto L_988b51;
L_988b3f: /* 988b3f: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 988b42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988b43: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x988b48u); SPILL(); f_6c58d0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x988b05u: guest_unwind_done(); RELOAD(); goto L_988b05; } return; } RELOAD();
/* 988b48: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 988b4b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 988b4e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_988b51: /* 988b51: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988b54: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 988b57: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* 988b5a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 988b5c: mov dword ptr [ebx + 0x18], esi */
  W32((uint32_t)(ebx + 0x18u), esi);
/* 988b5f: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 988b62: jb 0x988b66 */
  if (cf) goto L_988b66;
L_988b64: /* 988b64: mov eax, edx */
  eax = edx;
L_988b66: /* 988b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988b67: mov byte ptr [eax + ecx], 0 */
  W8((uint32_t)(eax + ecx), 0x0u);
/* 988b6b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 988b6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988b6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 988b76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 988b77: mov esp, ebp */
  esp = ebp;
/* 988b79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 988b7a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_988b7d(void) {
  LOAD_REGS();
L_988b7d: /* 988b7d: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 988b80: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988b84: jb 0x988b92 */
  if (cf) goto L_988b92;
L_988b86: /* 988b86: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 988b89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988b8a: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x988b8fu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 988b8f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_988b92: /* 988b92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 988b94: mov dword ptr [esi + 0x18], 0xf */
  W32((uint32_t)(esi + 0x18u), 0xfu);
/* 988b9b: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* 988ba2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 988ba4: mov byte ptr [esi + 4], 0 */
  W8((uint32_t)(esi + 0x4u), 0x0u);
/* 988ba8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x988badu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_988bad: guest_badaddr(0x988bad); return;
}

void f_988bb0(void) {
  LOAD_REGS();
L_988bb0: /* 988bb0: ret  */
  esp += 4; SPILL(); return;
}

void f_988bf0(void) {
  LOAD_REGS();
L_988bf0: /* 988bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988bf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988bf2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 988bf6: cmp edi, -2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 988bf9: mov esi, ecx */
  esi = ecx;
/* 988bfb: jbe 0x988c02 */
  if ((cf | zf)) goto L_988c02;
L_988bfd: /* 988bfd: call 0x99d1c7 */
  esp -= 4; W32(esp, 0x988c02u); SPILL(); f_99d1c7(); if (g_unwind) return; RELOAD();
L_988c02: /* 988c02: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 988c05: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988c07: jae 0x988c42 */
  if (!cf) goto L_988c42;
L_988c09: /* 988c09: mov al, byte ptr [esp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 988c0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 988c0f: je 0x988c29 */
  if (zf) goto L_988c29;
L_988c11: /* 988c11: xor eax, eax */
  eax = 0;
/* 988c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988c14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988c15: mov ecx, esi */
  ecx = esi;
/* 988c17: call 0x988a90 */
  esp -= 4; W32(esp, 0x988c1cu); SPILL(); f_988a90(); if (g_unwind) return; RELOAD();
/* 988c1c: xor eax, eax */
  eax = 0;
/* 988c1e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988c20: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 988c22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988c23: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 988c25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988c26: ret 8 */
  esp += 12; SPILL(); return;
L_988c29: /* 988c29: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 988c2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988c2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988c2e: mov ecx, esi */
  ecx = esi;
/* 988c30: call 0x988a90 */
  esp -= 4; W32(esp, 0x988c35u); SPILL(); f_988a90(); if (g_unwind) return; RELOAD();
/* 988c35: xor eax, eax */
  eax = 0;
/* 988c37: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988c39: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 988c3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988c3c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 988c3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988c3f: ret 8 */
  esp += 12; SPILL(); return;
L_988c42: /* 988c42: mov cl, byte ptr [esp + 0x10] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 988c46: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 988c48: je 0x988c7f */
  if (zf) goto L_988c7f;
L_988c4a: /* 988c4a: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988c4d: jae 0x988c7f */
  if (!cf) goto L_988c7f;
L_988c4f: /* 988c4f: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988c52: jb 0x988c60 */
  if (cf) goto L_988c60;
L_988c54: /* 988c54: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 988c57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988c58: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x988c5du); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 988c5d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_988c60: /* 988c60: xor eax, eax */
  eax = 0;
/* 988c62: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988c64: mov dword ptr [esi + 0x18], 0xf */
  W32((uint32_t)(esi + 0x18u), 0xfu);
/* 988c6b: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* 988c72: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 988c74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988c75: mov byte ptr [esi + 4], 0 */
  W8((uint32_t)(esi + 0x4u), 0x0u);
/* 988c79: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 988c7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988c7c: ret 8 */
  esp += 12; SPILL(); return;
L_988c7f: /* 988c7f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988c81: jne 0x988ca4 */
  if (!zf) goto L_988ca4;
L_988c83: /* 988c83: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988c86: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 988c89: jb 0x988c9e */
  if (cf) goto L_988c9e;
L_988c8b: /* 988c8b: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 988c8e: xor eax, eax */
  eax = 0;
/* 988c90: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988c92: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 988c94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988c95: mov byte ptr [esi], 0 */
  W8((uint32_t)(esi), 0x0u);
/* 988c98: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 988c9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988c9b: ret 8 */
  esp += 12; SPILL(); return;
L_988c9e: /* 988c9e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 988ca1: mov byte ptr [esi], 0 */
  W8((uint32_t)(esi), 0x0u);
L_988ca4: /* 988ca4: xor eax, eax */
  eax = 0;
/* 988ca6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988ca8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 988caa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988cab: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 988cad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988cae: ret 8 */
  esp += 12; SPILL(); return;
}

void f_988cc0(void) {
  LOAD_REGS();
L_988cc0: /* 988cc0: ret  */
  esp += 4; SPILL(); return;
}

void f_988cd0(void) {
  LOAD_REGS();
L_988cd0: /* 988cd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988cd1: mov esi, ecx */
  esi = ecx;
/* 988cd3: mov dword ptr [esi], 0xa21c50 */
  W32((uint32_t)(esi), 0xa21c50u);
/* 988cd9: cmp dword ptr [esi + 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988cdd: jb 0x988ceb */
  if (cf) goto L_988ceb;
L_988cdf: /* 988cdf: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 988ce2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988ce3: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x988ce8u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 988ce8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_988ceb: /* 988ceb: xor eax, eax */
  eax = 0;
/* 988ced: mov dword ptr [esi + 0x24], 0xf */
  W32((uint32_t)(esi + 0x24u), 0xfu);
/* 988cf4: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 988cf7: mov byte ptr [esi + 0x10], al */
  W8((uint32_t)(esi + 0x10u), (eax & 0xffu));
/* 988cfa: mov ecx, esi */
  ecx = esi;
/* 988cfc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988cfd: jmp 0x99d020 */
  goto L_99d020;
L_99d020: /* 99d020: jmp dword ptr [0xcfb130] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_988d10(void) {
  LOAD_REGS();
L_988d10: /* 988d10: cmp dword ptr [ecx + 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x24u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988d14: jb 0x988d1a */
  if (cf) goto L_988d1a;
L_988d16: /* 988d16: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 988d19: ret  */
  esp += 4; SPILL(); return;
L_988d1a: /* 988d1a: lea eax, [ecx + 0x10] */
  eax = (uint32_t)(ecx + 0x10u);
/* 988d1d: ret  */
  esp += 4; SPILL(); return;
}

void f_988d20(void) {
  LOAD_REGS();
L_988d20: /* 988d20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988d21: mov esi, ecx */
  esi = ecx;
/* 988d23: call 0x988cd0 */
  esp -= 4; W32(esp, 0x988d28u); SPILL(); f_988cd0(); if (g_unwind) return; RELOAD();
/* 988d28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 988d2d: je 0x988d38 */
  if (zf) goto L_988d38;
L_988d2f: /* 988d2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988d30: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x988d35u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 988d35: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_988d38: /* 988d38: mov eax, esi */
  eax = esi;
/* 988d3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988d3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988d40(void) {
  LOAD_REGS();
L_988d40: /* 988d40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 988d41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 988d42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988d43: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 988d47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988d48: mov edi, ecx */
  edi = ecx;
/* 988d4a: cmp dword ptr [edi + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988d4d: jae 0x988d54 */
  if (!cf) goto L_988d54;
L_988d4f: /* 988d4f: call 0x99d16f */
  esp -= 4; W32(esp, 0x988d54u); SPILL(); f_99d16f(); if (g_unwind) return; RELOAD();
L_988d54: /* 988d54: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 988d57: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 988d5b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 988d5d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988d5f: jae 0x988d63 */
  if (!cf) goto L_988d63;
L_988d61: /* 988d61: mov ebx, eax */
  ebx = eax;
L_988d63: /* 988d63: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 988d65: jbe 0x988dd0 */
  if ((cf | zf)) goto L_988dd0;
L_988d67: /* 988d67: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 988d6a: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988d6d: lea ebp, [edi + 4] */
  ebp = (uint32_t)(edi + 0x4u);
/* 988d70: jb 0x988d77 */
  if (cf) goto L_988d77;
L_988d72: /* 988d72: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 988d75: jmp 0x988d79 */
  goto L_988d79;
L_988d77: /* 988d77: mov edx, ebp */
  edx = ebp;
L_988d79: /* 988d79: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988d7c: jb 0x988d83 */
  if (cf) goto L_988d83;
L_988d7e: /* 988d7e: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 988d81: jmp 0x988d85 */
  goto L_988d85;
L_988d83: /* 988d83: mov ecx, ebp */
  ecx = ebp;
L_988d85: /* 988d85: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 988d87: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 988d89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988d8a: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 988d8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 988d8d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 988d8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 988d90: call 0x99d01a */
  esp -= 4; W32(esp, 0x988d95u); SPILL(); hle_memcpy(); RELOAD();
/* 988d95: mov esi, dword ptr [edi + 0x14] */
  esi = R32((uint32_t)(edi + 0x14u));
/* 988d98: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 988d9a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 988d9d: cmp esi, -2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 988da0: jbe 0x988da9 */
  if ((cf | zf)) goto L_988da9;
L_988da2: /* 988da2: mov ecx, edi */
  ecx = edi;
/* 988da4: call 0x99d1c7 */
  esp -= 4; W32(esp, 0x988da9u); SPILL(); f_99d1c7(); if (g_unwind) return; RELOAD();
L_988da9: /* 988da9: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 988dac: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988dae: jae 0x988dd9 */
  if (!cf) goto L_988dd9;
L_988db0: /* 988db0: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 988db3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988db4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988db5: mov ecx, edi */
  ecx = edi;
/* 988db7: call 0x988a90 */
  esp -= 4; W32(esp, 0x988dbcu); SPILL(); f_988a90(); if (g_unwind) return; RELOAD();
/* 988dbc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
L_988dbe: /* 988dbe: jbe 0x988dd0 */
  if ((cf | zf)) goto L_988dd0;
L_988dc0: /* 988dc0: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988dc4: mov dword ptr [edi + 0x14], esi */
  W32((uint32_t)(edi + 0x14u), esi);
/* 988dc7: jb 0x988dcc */
  if (cf) goto L_988dcc;
L_988dc9: /* 988dc9: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
L_988dcc: /* 988dcc: mov byte ptr [esi + ebp], 0 */
  W8((uint32_t)(esi + ebp), 0x0u);
L_988dd0: /* 988dd0: mov eax, edi */
  eax = edi;
/* 988dd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988dd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988dd4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 988dd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 988dd6: ret 8 */
  esp += 12; SPILL(); return;
L_988dd9: /* 988dd9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 988ddb: jne 0x988dbe */
  if (!zf) goto L_988dbe;
L_988ddd: /* 988ddd: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988de0: mov dword ptr [edi + 0x14], esi */
  W32((uint32_t)(edi + 0x14u), esi);
/* 988de3: jb 0x988de8 */
  if (cf) goto L_988de8;
L_988de5: /* 988de5: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
L_988de8: /* 988de8: mov eax, edi */
  eax = edi;
/* 988dea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988deb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988dec: mov byte ptr [ebp], 0 */
  W8((uint32_t)(ebp), 0x0u);
/* 988df0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 988df1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 988df2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_988e00(void) {
  LOAD_REGS();
L_988e00: /* 988e00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 988e01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 988e02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988e03: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 988e07: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 988e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988e0b: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 988e0f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988e11: mov ebx, ecx */
  ebx = ecx;
/* 988e13: jae 0x988e1a */
  if (!cf) goto L_988e1a;
L_988e15: /* 988e15: call 0x99d16f */
  esp -= 4; W32(esp, 0x988e1au); SPILL(); f_99d16f(); if (g_unwind) return; RELOAD();
L_988e1a: /* 988e1a: mov ebp, dword ptr [esi + 0x14] */
  ebp = R32((uint32_t)(esi + 0x14u));
/* 988e1d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 988e21: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 988e23: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988e25: jae 0x988e29 */
  if (!cf) goto L_988e29;
L_988e27: /* 988e27: mov ebp, eax */
  ebp = eax;
L_988e29: /* 988e29: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 988e2b: mov ecx, ebx */
  ecx = ebx;
/* 988e2d: jne 0x988e4c */
  if (!zf) goto L_988e4c;
L_988e2f: /* 988e2f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 988e31: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 988e33: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 988e34: call 0x988d40 */
  esp -= 4; W32(esp, 0x988e39u); SPILL(); f_988d40(); if (g_unwind) return; RELOAD();
/* 988e39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988e3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 988e3c: mov ecx, ebx */
  ecx = ebx;
/* 988e3e: call 0x988d40 */
  esp -= 4; W32(esp, 0x988e43u); SPILL(); f_988d40(); if (g_unwind) return; RELOAD();
/* 988e43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988e44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988e45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 988e46: mov eax, ebx */
  eax = ebx;
/* 988e48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 988e49: ret 0xc */
  esp += 16; SPILL(); return;
L_988e4c: /* 988e4c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 988e4e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 988e4f: call 0x988bf0 */
  esp -= 4; W32(esp, 0x988e54u); SPILL(); f_988bf0(); if (g_unwind) return; RELOAD();
/* 988e54: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 988e56: je 0x988e9d */
  if (zf) goto L_988e9d;
L_988e58: /* 988e58: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 988e5b: mov eax, 0x10 */
  eax = 0x10u;
/* 988e60: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988e62: jb 0x988e69 */
  if (cf) goto L_988e69;
L_988e64: /* 988e64: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 988e67: jmp 0x988e6c */
  goto L_988e6c;
L_988e69: /* 988e69: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_988e6c: /* 988e6c: cmp dword ptr [ebx + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988e6f: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 988e72: jb 0x988e78 */
  if (cf) goto L_988e78;
L_988e74: /* 988e74: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 988e76: jmp 0x988e7a */
  goto L_988e7a;
L_988e78: /* 988e78: mov edx, eax */
  edx = eax;
L_988e7a: /* 988e7a: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 988e7c: mov ecx, ebp */
  ecx = ebp;
/* 988e7e: mov edi, edx */
  edi = edx;
/* 988e80: mov edx, ecx */
  edx = ecx;
/* 988e82: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 988e85: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 988e87: mov ecx, edx */
  ecx = edx;
/* 988e89: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 988e8c: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 988e8e: cmp dword ptr [ebx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988e92: mov dword ptr [ebx + 0x14], ebp */
  W32((uint32_t)(ebx + 0x14u), ebp);
/* 988e95: jb 0x988e99 */
  if (cf) goto L_988e99;
L_988e97: /* 988e97: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_988e99: /* 988e99: mov byte ptr [eax + ebp], 0 */
  W8((uint32_t)(eax + ebp), 0x0u);
L_988e9d: /* 988e9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988e9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988e9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 988ea0: mov eax, ebx */
  eax = ebx;
/* 988ea2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 988ea3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_988eb0(void) {
  LOAD_REGS();
L_988eb0: /* 988eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988eb1: mov esi, ecx */
  esi = ecx;
/* 988eb3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 988eb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988eb8: je 0x988ec3 */
  if (zf) goto L_988ec3;
L_988eba: /* 988eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988ebb: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x988ec0u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 988ec0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_988ec3: /* 988ec3: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 988eca: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 988ed1: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 988ed8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988ed9: ret  */
  esp += 4; SPILL(); return;
}

void f_988ee0(void) {
  LOAD_REGS();
L_988ee0: /* 988ee0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 988ee1: mov ebx, ecx */
  ebx = ecx;
/* 988ee3: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 988ee6: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988ee9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 988eea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988eeb: lea ebp, [ebx + 4] */
  ebp = (uint32_t)(ebx + 0x4u);
/* 988eee: jb 0x988ef5 */
  if (cf) goto L_988ef5;
L_988ef0: /* 988ef0: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 988ef3: jmp 0x988ef7 */
  goto L_988ef7;
L_988ef5: /* 988ef5: mov eax, ebp */
  eax = ebp;
L_988ef7: /* 988ef7: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 988efb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 988efd: ja 0x988f32 */
  if ((!cf && !zf)) goto L_988f32;
L_988eff: /* 988eff: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988f02: jb 0x988f09 */
  if (cf) goto L_988f09;
L_988f04: /* 988f04: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 988f07: jmp 0x988f0b */
  goto L_988f0b;
L_988f09: /* 988f09: mov eax, ebp */
  eax = ebp;
L_988f0b: /* 988f0b: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 988f0e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 988f10: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988f12: jae 0x988f32 */
  if (!cf) goto L_988f32;
L_988f14: /* 988f14: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988f17: jb 0x988f1c */
  if (cf) goto L_988f1c;
L_988f19: /* 988f19: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
L_988f1c: /* 988f1c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 988f20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988f21: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 988f23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988f24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 988f25: mov ecx, ebx */
  ecx = ebx;
/* 988f27: call 0x988e00 */
  esp -= 4; W32(esp, 0x988f2cu); SPILL(); f_988e00(); if (g_unwind) return; RELOAD();
/* 988f2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988f2d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 988f2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 988f2f: ret 8 */
  esp += 12; SPILL(); return;
L_988f32: /* 988f32: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 988f36: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 988f38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 988f39: mov ecx, ebx */
  ecx = ebx;
/* 988f3b: call 0x988bf0 */
  esp -= 4; W32(esp, 0x988f40u); SPILL(); f_988bf0(); if (g_unwind) return; RELOAD();
/* 988f40: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 988f42: je 0x988f77 */
  if (zf) goto L_988f77;
L_988f44: /* 988f44: cmp dword ptr [ebx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988f48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988f49: jb 0x988f50 */
  if (cf) goto L_988f50;
L_988f4b: /* 988f4b: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 988f4e: jmp 0x988f52 */
  goto L_988f52;
L_988f50: /* 988f50: mov edi, ebp */
  edi = ebp;
L_988f52: /* 988f52: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 988f56: mov edx, ecx */
  edx = ecx;
/* 988f58: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 988f5b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 988f5d: mov ecx, edx */
  ecx = edx;
/* 988f5f: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 988f62: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 988f64: cmp dword ptr [ebx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 988f68: mov eax, edx */
  eax = edx;
/* 988f6a: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 988f6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 988f6e: jb 0x988f73 */
  if (cf) goto L_988f73;
L_988f70: /* 988f70: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
L_988f73: /* 988f73: mov byte ptr [eax + ebp], 0 */
  W8((uint32_t)(eax + ebp), 0x0u);
L_988f77: /* 988f77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988f78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 988f79: mov eax, ebx */
  eax = ebx;
/* 988f7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 988f7c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_988f80(void) {
  LOAD_REGS();
L_988f80: /* 988f80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988f81: xor eax, eax */
  eax = 0;
/* 988f83: mov esi, ecx */
  esi = ecx;
/* 988f85: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 988f87: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 988f8a: mov dword ptr [esi + 0x18], 0xf */
  W32((uint32_t)(esi + 0x18u), 0xfu);
/* 988f91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988f92: mov byte ptr [esi + 4], al */
  W8((uint32_t)(esi + 0x4u), (eax & 0xffu));
/* 988f95: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 988f99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988f9a: call 0x988e00 */
  esp -= 4; W32(esp, 0x988f9fu); SPILL(); f_988e00(); if (g_unwind) return; RELOAD();
/* 988f9f: mov eax, esi */
  eax = esi;
/* 988fa1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988fa2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988fb0(void) {
  LOAD_REGS();
L_988fb0: /* 988fb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988fb1: mov esi, ecx */
  esi = ecx;
/* 988fb3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 988fb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 988fb8: je 0x988fc3 */
  if (zf) goto L_988fc3;
L_988fba: /* 988fba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988fbb: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x988fc0u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 988fc0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_988fc3: /* 988fc3: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 988fca: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 988fd1: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 988fd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 988fd9: ret  */
  esp += 4; SPILL(); return;
}

void f_988fe0(void) {
  LOAD_REGS();
L_988fe0: /* 988fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988fe1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 988fe5: mov eax, esi */
  eax = esi;
/* 988fe7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 988fe8: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 988feb: jmp 0x988ff0 */
  goto L_988ff0;
L_988ff0: /* 988ff0: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 988ff2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 988ff3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 988ff5: jne 0x988ff0 */
  if (!zf) goto L_988ff0;
L_988ff7: /* 988ff7: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 988ff9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988ffa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988ffb: call 0x988ee0 */
  esp -= 4; W32(esp, 0x989000u); SPILL(); f_988ee0(); if (g_unwind) return; RELOAD();
/* 989000: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 989001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 989002: ret 4 */
  esp += 8; SPILL(); return;
}

void f_988fed(void) {
  LOAD_REGS();
L_988fed: /* 988fed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_988ff0: /* 988ff0: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 988ff2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 988ff3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 988ff5: jne 0x988ff0 */
  if (!zf) goto L_988ff0;
L_988ff7: /* 988ff7: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 988ff9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 988ffa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 988ffb: call 0x988ee0 */
  esp -= 4; W32(esp, 0x989000u); SPILL(); f_988ee0(); if (g_unwind) return; RELOAD();
/* 989000: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 989001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 989002: ret 4 */
  esp += 8; SPILL(); return;
}

void f_989010(void) {
  LOAD_REGS();
L_989010: /* 989010: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 989012: push 0x9da318 */
  { uint32_t v = 0x9da318u; esp -= 4; W32(esp, v); }
/* 989017: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98901d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98901e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 989025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989026: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989027: mov esi, ecx */
  esi = ecx;
/* 989029: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 98902d: call 0x99d026 */
  esp -= 4; W32(esp, 0x989032u); SPILL(); f_99d026(); if (g_unwind) return; RELOAD();
/* 989032: xor eax, eax */
  eax = 0;
/* 989034: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 989037: mov dword ptr [esi], 0xa21c50 */
  W32((uint32_t)(esi), 0xa21c50u);
/* 98903d: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98903f: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 989042: mov dword ptr [ecx + 0x18], 0xf */
  W32((uint32_t)(ecx + 0x18u), 0xfu);
/* 989049: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98904a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98904e: mov byte ptr [ecx + 4], al */
  W8((uint32_t)(ecx + 0x4u), (eax & 0xffu));
/* 989051: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 989055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989056: call 0x988e00 */
  esp -= 4; W32(esp, 0x98905bu); SPILL(); f_988e00(); if (g_unwind) return; RELOAD();
/* 98905b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 98905f: mov eax, esi */
  eax = esi;
/* 989061: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 989062: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 989069: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98906c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_989070(void) {
  LOAD_REGS();
L_989070: /* 989070: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 989074: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989076: mov esi, ecx */
  esi = ecx;
/* 989078: call 0x989010 */
  esp -= 4; W32(esp, 0x98907du); SPILL(); f_989010(); if (g_unwind) return; RELOAD();
/* 98907d: mov dword ptr [esi], 0xa21c5c */
  W32((uint32_t)(esi), 0xa21c5cu);
/* 989083: mov eax, esi */
  eax = esi;
/* 989085: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 989086: ret 4 */
  esp += 8; SPILL(); return;
}

void f_989090(void) {
  LOAD_REGS();
L_989090: /* 989090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989091: mov esi, ecx */
  esi = ecx;
/* 989093: call 0x9890b0 */
  esp -= 4; W32(esp, 0x989098u); SPILL(); f_9890b0(); if (g_unwind) return; RELOAD();
/* 989098: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98909d: je 0x9890a8 */
  if (zf) goto L_9890a8;
L_98909f: /* 98909f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9890a0: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9890a5u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9890a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9890a8: /* 9890a8: mov eax, esi */
  eax = esi;
/* 9890aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9890ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9890b0(void) {
  LOAD_REGS();
L_9890b0: /* 9890b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9890b1: mov esi, ecx */
  esi = ecx;
/* 9890b3: mov dword ptr [esi], 0xa21c50 */
  W32((uint32_t)(esi), 0xa21c50u);
/* 9890b9: cmp dword ptr [esi + 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9890bd: jb 0x9890cb */
  if (cf) goto L_9890cb;
L_9890bf: /* 9890bf: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 9890c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9890c3: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9890c8u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9890c8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9890cb: /* 9890cb: xor eax, eax */
  eax = 0;
/* 9890cd: mov dword ptr [esi + 0x24], 0xf */
  W32((uint32_t)(esi + 0x24u), 0xfu);
/* 9890d4: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 9890d7: mov byte ptr [esi + 0x10], al */
  W8((uint32_t)(esi + 0x10u), (eax & 0xffu));
/* 9890da: mov ecx, esi */
  ecx = esi;
/* 9890dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9890dd: jmp 0x99d020 */
  goto L_99d020;
L_99d020: /* 99d020: jmp dword ptr [0xcfb130] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_989120(void) {
  LOAD_REGS();
L_989120: /* 989120: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 989124: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989125: mov esi, ecx */
  esi = ecx;
/* 989127: mov eax, edx */
  eax = edx;
/* 989129: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98912a: mov dword ptr [esi + 0x18], 0xf */
  W32((uint32_t)(esi + 0x18u), 0xfu);
/* 989131: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* 989138: mov byte ptr [esi + 4], 0 */
  W8((uint32_t)(esi + 0x4u), 0x0u);
/* 98913c: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 98913f: nop  */
L_989140: /* 989140: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 989142: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989143: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 989145: jne 0x989140 */
  if (!zf) goto L_989140;
L_989147: /* 989147: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 989149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98914a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98914b: mov ecx, esi */
  ecx = esi;
/* 98914d: call 0x988ee0 */
  esp -= 4; W32(esp, 0x989152u); SPILL(); f_988ee0(); if (g_unwind) return; RELOAD();
/* 989152: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 989153: mov eax, esi */
  eax = esi;
/* 989155: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 989156: ret 4 */
  esp += 8; SPILL(); return;
}

void f_989160(void) {
  LOAD_REGS();
L_989160: /* 989160: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 989162: push 0x9da338 */
  { uint32_t v = 0x9da338u; esp -= 4; W32(esp, v); }
/* 989167: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98916d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98916e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 989175: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 989178: mov eax, 0xa21a50 */
  eax = 0xa21a50u;
/* 98917d: mov dword ptr [esp + 0x18], 0xf */
  W32((uint32_t)(esp + 0x18u), 0xfu);
/* 989185: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 98918d: mov byte ptr [esp + 4], 0 */
  W8((uint32_t)(esp + 0x4u), 0x0u);
/* 989192: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_989195: /* 989195: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 989197: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989198: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98919a: jne 0x989195 */
  if (!zf) goto L_989195;
L_98919c: /* 98919c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98919e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98919f: push 0xa21a50 */
  { uint32_t v = 0xa21a50u; esp -= 4; W32(esp, v); }
/* 9891a4: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 9891a8: call 0x988ee0 */
  esp -= 4; W32(esp, 0x9891adu); SPILL(); f_988ee0(); if (g_unwind) return; RELOAD();
/* 9891ad: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 9891b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9891b2: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 9891b6: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 9891be: call 0x989010 */
  esp -= 4; W32(esp, 0x9891c3u); SPILL(); f_989010(); if (g_unwind) return; RELOAD();
/* 9891c3: push 0xa61a68 */
  { uint32_t v = 0xa61a68u; esp -= 4; W32(esp, v); }
/* 9891c8: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 9891cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9891cd: mov dword ptr [esp + 0x24], 0xa21c5c */
  W32((uint32_t)(esp + 0x24u), 0xa21c5cu);
/* 9891d5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9891dau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_9891da: guest_badaddr(0x9891da); return;
}

void f_9891e0(void) {
  LOAD_REGS();
L_9891e0: /* 9891e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9891e2: push 0x9da358 */
  { uint32_t v = 0x9da358u; esp -= 4; W32(esp, v); }
/* 9891e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9891ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9891ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9891f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9891f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9891f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9891f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 9891fc: mov esi, ecx */
  esi = ecx;
/* 9891fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9891ff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 989203: call 0x99d02c */
  esp -= 4; W32(esp, 0x989208u); SPILL(); f_99d02c(); if (g_unwind) return; RELOAD();
/* 989208: xor eax, eax */
  eax = 0;
/* 98920a: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98920c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 98920f: mov dword ptr [esi], 0xa21c50 */
  W32((uint32_t)(esi), 0xa21c50u);
/* 989215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989216: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 989219: mov dword ptr [ecx + 0x18], 0xf */
  W32((uint32_t)(ecx + 0x18u), 0xfu);
/* 989220: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 989223: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989224: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 989228: mov byte ptr [ecx + 4], al */
  W8((uint32_t)(ecx + 0x4u), (eax & 0xffu));
/* 98922b: call 0x988e00 */
  esp -= 4; W32(esp, 0x989230u); SPILL(); f_988e00(); if (g_unwind) return; RELOAD();
/* 989230: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 989234: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 989235: mov eax, esi */
  eax = esi;
/* 989237: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 989238: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98923f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989242: ret 4 */
  esp += 8; SPILL(); return;
}

void f_989250(void) {
  LOAD_REGS();
L_989250: /* 989250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 989254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989256: mov esi, ecx */
  esi = ecx;
/* 989258: call 0x9891e0 */
  esp -= 4; W32(esp, 0x98925du); SPILL(); f_9891e0(); if (g_unwind) return; RELOAD();
/* 98925d: mov dword ptr [esi], 0xa21c5c */
  W32((uint32_t)(esi), 0xa21c5cu);
/* 989263: mov eax, esi */
  eax = esi;
/* 989265: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 989266: ret 4 */
  esp += 8; SPILL(); return;
}

void f_989270(void) {
  LOAD_REGS();
L_989270: /* 989270: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 989274: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989275: mov esi, ecx */
  esi = ecx;
/* 989277: xor ecx, ecx */
  ecx = 0;
/* 989279: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98927b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 98927e: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 989281: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 989284: jne 0x98928c */
  if (!zf) goto L_98928c;
L_989286: /* 989286: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 989288: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 989289: ret 4 */
  esp += 8; SPILL(); return;
L_98928c: /* 98928c: cmp eax, 0x3fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989291: jbe 0x9892a0 */
  if ((cf | zf)) goto L_9892a0;
L_989293: /* 989293: mov ecx, esi */
  ecx = esi;
/* 989295: call 0x989160 */
  esp -= 4; W32(esp, 0x98929au); SPILL(); f_989160(); if (g_unwind) return; RELOAD();
/* 98929a: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 98929c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98929d: ret 4 */
  esp += 8; SPILL(); return;
L_9892a0: /* 9892a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9892a1: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 9892a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9892a9: call 0x6c242d */
  esp -= 4; W32(esp, 0x9892aeu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9892ae: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9892b0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9892b3: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 9892b6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 9892b9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 9892bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9892bd: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 9892bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9892c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9892d0(void) {
  LOAD_REGS();
L_9892d0: /* 9892d0: mov eax, ecx */
  eax = ecx;
/* 9892d2: xor ecx, ecx */
  ecx = 0;
/* 9892d4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9892d7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9892da: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 9892dd: ret  */
  esp += 4; SPILL(); return;
}

void f_9892e0(void) {
  LOAD_REGS();
L_9892e0: /* 9892e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9892e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9892e2: xor edi, edi */
  edi = 0;
/* 9892e4: mov esi, ecx */
  esi = ecx;
/* 9892e6: mov eax, edi */
  eax = edi;
/* 9892e8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9892ea: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 9892ed: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 9892f0: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 9892f3: je 0x9892fe */
  if (zf) goto L_9892fe;
L_9892f5: /* 9892f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9892f6: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9892fbu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9892fb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9892fe: /* 9892fe: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 989301: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 989304: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 989307: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 989309: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 98930c: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 98930f: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 989312: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 989315: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 989316: mov eax, esi */
  eax = esi;
/* 989318: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 989319: ret  */
  esp += 4; SPILL(); return;
}

void f_989320(void) {
  LOAD_REGS();
L_989320: /* 989320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 989321: mov ebp, esp */
  ebp = esp;
/* 989323: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 989326: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 989328: push 0x9da391 */
  { uint32_t v = 0x9da391u; esp -= 4; W32(esp, v); }
/* 98932d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 989333: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989334: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98933b: sub esp, 0x920 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x920u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 989341: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989344: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 989347: movsx edx, word ptr [eax + 0x30] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x30u)));
/* 98934b: movsx eax, word ptr [eax + 0x2e] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x2eu)));
/* 98934f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989353: mov byte ptr [0xcf3074], 0 */
  W8((uint32_t)(0xcf3074u), 0x0u);
/* 98935a: movsx eax, word ptr [ecx + 0x237e] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x237eu)));
/* 989361: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 989364: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989365: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989366: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989367: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 98936b: je 0x989379 */
  if (zf) goto L_989379;
L_98936d: /* 98936d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 98936e: jne 0x989386 */
  if (!zf) goto L_989386;
L_989370: /* 989370: mov byte ptr [0xcf3074], 1 */
  W8((uint32_t)(0xcf3074u), 0x1u);
/* 989377: jmp 0x989386 */
  goto L_989386;
L_989379: /* 989379: mov eax, edx */
  eax = edx;
/* 98937b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98937c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98937e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 989380: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 989384: mov edx, eax */
  edx = eax;
L_989386: /* 989386: cmp word ptr [ecx + 0x237e], 0x1f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x237eu))); uint16_t b = (uint16_t)(0x1fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98938e: jne 0x9893a1 */
  if (!zf) goto L_9893a1;
L_989390: /* 989390: cmp word ptr [ecx + 0x2380], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2380u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989398: jne 0x9893a1 */
  if (!zf) goto L_9893a1;
L_98939a: /* 98939a: mov byte ptr [0xcf3074], 1 */
  W8((uint32_t)(0xcf3074u), 0x1u);
L_9893a1: /* 9893a1: cmp word ptr [ecx + 0x23a8], 0x51 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x23a8u))); uint16_t b = (uint16_t)(0x51u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 9893a9: mov dword ptr [esp + 0x44], 1 */
  W32((uint32_t)(esp + 0x44u), 0x1u);
/* 9893b1: jne 0x9893cd */
  if (!zf) goto L_9893cd;
L_9893b3: /* 9893b3: mov eax, 0x2aaaaaab */
  eax = 0x2aaaaaabu;
/* 9893b8: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 9893ba: mov eax, edx */
  eax = edx;
/* 9893bc: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 9893bf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9893c1: mov dword ptr [esp + 0x44], 6 */
  W32((uint32_t)(esp + 0x44u), 0x6u);
/* 9893c9: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
L_9893cd: /* 9893cd: mov al, byte ptr [ecx + 0x23a6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a6u))) & 0xffu);
/* 9893d3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9893d5: je 0x9893de */
  if (zf) goto L_9893de;
L_9893d7: /* 9893d7: call 0x9874d0 */
  esp -= 4; W32(esp, 0x9893dcu); SPILL(); f_9874d0(); if (g_unwind) return; RELOAD();
/* 9893dc: jmp 0x9893e3 */
  goto L_9893e3;
L_9893de: /* 9893de: call 0x9874f0 */
  esp -= 4; W32(esp, 0x9893e3u); SPILL(); f_9874f0(); if (g_unwind) return; RELOAD();
L_9893e3: /* 9893e3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9893e6: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9893e9: jb 0x9893f5 */
  if (cf) goto L_9893f5;
L_9893eb: /* 9893eb: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9893ee: mov byte ptr [esp + 0x40], 1 */
  W8((uint32_t)(esp + 0x40u), 0x1u);
/* 9893f3: jbe 0x9893fa */
  if ((cf | zf)) goto L_9893fa;
L_9893f5: /* 9893f5: mov byte ptr [esp + 0x40], 0 */
  W8((uint32_t)(esp + 0x40u), 0x0u);
L_9893fa: /* 9893fa: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 9893fe: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 989402: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 989406: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989407: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989409: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x98940eu); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 98940e: mov edi, eax */
  edi = eax;
/* 989410: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 989413: add eax, -0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989416: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989419: xor esi, esi */
  esi = 0;
/* 98941b: xor ebx, ebx */
  ebx = 0;
/* 98941d: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989420: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 989424: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 989428: ja 0x9894b9 */
  if ((!cf && !zf)) goto L_9894b9;
L_98942e: /* 98942e: jmp dword ptr [eax*4 + 0x98aa7c] */
  switch (R32((uint32_t)(eax*4 + 0x98aa7cu))) {
    case 0x989435u: goto L_989435;
    case 0x98944au: goto L_98944a;
    case 0x98945fu: goto L_98945f;
    case 0x989474u: goto L_989474;
    case 0x989486u: goto L_989486;
    case 0x989490u: goto L_989490;
    case 0x98949bu: goto L_98949b;
    case 0x9894aau: goto L_9894aa;
    case 0x989599u: goto L_989599;
    case 0x9895bau: goto L_9895ba;
    case 0x9895dbu: goto L_9895db;
    case 0x9895fcu: goto L_9895fc;
    case 0x989625u: goto L_989625;
    case 0x9896b8u: goto L_9896b8;
    case 0x989743u: goto L_989743;
    case 0x9897c2u: goto L_9897c2;
    case 0x989841u: goto L_989841;
    case 0x98987eu: goto L_98987e;
    case 0x9898dfu: goto L_9898df;
    case 0x989be6u: goto L_989be6;
    case 0x989bfbu: goto L_989bfb;
    case 0x989c10u: goto L_989c10;
    case 0x989c27u: goto L_989c27;
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x98942e, R32((uint32_t)(eax*4 + 0x98aa7cu))); return;
  }
L_989435: /* 989435: mov byte ptr [esp + 0x17], 1 */
  W8((uint32_t)(esp + 0x17u), 0x1u);
/* 98943a: mov byte ptr [0xcf3075], 0 */
  W8((uint32_t)(0xcf3075u), 0x0u);
/* 989441: xor esi, esi */
  esi = 0;
/* 989443: mov ebx, 2 */
  ebx = 0x2u;
/* 989448: jmp 0x9894b9 */
  goto L_9894b9;
L_98944a: /* 98944a: mov byte ptr [esp + 0x17], 1 */
  W8((uint32_t)(esp + 0x17u), 0x1u);
/* 98944f: mov byte ptr [0xcf3075], 1 */
  W8((uint32_t)(0xcf3075u), 0x1u);
/* 989456: mov esi, 0x100 */
  esi = 0x100u;
/* 98945b: xor ebx, ebx */
  ebx = 0;
/* 98945d: jmp 0x9894b9 */
  goto L_9894b9;
L_98945f: /* 98945f: mov byte ptr [esp + 0x17], 1 */
  W8((uint32_t)(esp + 0x17u), 0x1u);
/* 989464: mov byte ptr [0xcf3075], 1 */
  W8((uint32_t)(0xcf3075u), 0x1u);
/* 98946b: xor ebx, ebx */
  ebx = 0;
/* 98946d: mov esi, 0x200 */
  esi = 0x200u;
/* 989472: jmp 0x9894b9 */
  goto L_9894b9;
L_989474: /* 989474: xor esi, esi */
  esi = 0;
/* 989476: mov byte ptr [esp + 0x17], 1 */
  W8((uint32_t)(esp + 0x17u), 0x1u);
/* 98947b: mov byte ptr [0xcf3075], 0 */
  W8((uint32_t)(0xcf3075u), 0x0u);
/* 989482: xor ebx, ebx */
  ebx = 0;
/* 989484: jmp 0x9894b9 */
  goto L_9894b9;
L_989486: /* 989486: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989489: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 98948c: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98948e: jmp 0x9894b0 */
  goto L_9894b0;
L_989490: /* 989490: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989493: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989496: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989499: jmp 0x9894b0 */
  goto L_9894b0;
L_98949b: /* 98949b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98949e: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 9894a1: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9894a4: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 9894a8: jmp 0x9894b4 */
  goto L_9894b4;
L_9894aa: /* 9894aa: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9894ad: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
L_9894b0: /* 9894b0: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_9894b4: /* 9894b4: mov byte ptr [esp + 0x17], 0 */
  W8((uint32_t)(esp + 0x17u), 0x0u);
L_9894b9: /* 9894b9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 9894bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9894be: jne 0x989520 */
  if (!zf) goto L_989520;
L_9894c0: /* 9894c0: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 9894c4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9894c6: je 0x989501 */
  if (zf) goto L_989501;
L_9894c8: /* 9894c8: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9894cc: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9894d0: mov edx, ebx */
  edx = ebx;
/* 9894d2: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9894d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9894d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9894d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9894d7: call 0x98ab60 */
  esp -= 4; W32(esp, 0x9894dcu); SPILL(); f_98ab60(); if (g_unwind) return; RELOAD();
/* 9894dc: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9894e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9894e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9894e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9894e3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9894e6: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 9894ea: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 9894ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9894f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9894f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9894f2: mov al, byte ptr [0xcf3075] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf3075u))) & 0xffu);
/* 9894f7: call 0x987e80 */
  esp -= 4; W32(esp, 0x9894fcu); SPILL(); f_987e80(); if (g_unwind) return; RELOAD();
/* 9894fc: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9894ff: jmp 0x989520 */
  goto L_989520;
L_989501: /* 989501: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 989504: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 989508: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98950b: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 98950f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989510: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989511: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989514: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 989518: call 0x988770 */
  esp -= 4; W32(esp, 0x98951du); SPILL(); f_988770(); if (g_unwind) return; RELOAD();
/* 98951d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989520: /* 989520: mov al, byte ptr [0xcf3074] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf3074u))) & 0xffu);
/* 989525: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 989527: je 0x989aa2 */
  if (zf) goto L_989aa2;
L_98952d: /* 98952d: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 989531: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989533: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 98953b: jle 0x989a97 */
  if ((zf || sf != of)) goto L_989a97;
L_989541: /* 989541: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_989545: /* 989545: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989548: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 98954b: movsx eax, word ptr [eax + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x34u)));
/* 98954f: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 989553: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 989557: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 98955a: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 98955d: cmp word ptr [ecx + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989565: jne 0x989569 */
  if (!zf) goto L_989569;
L_989567: /* 989567: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
L_989569: /* 989569: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 98956d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98956e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 989571: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989572: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989573: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 989577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989578: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989579: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98957a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98957b: call 0x98f100 */
  esp -= 4; W32(esp, 0x989580u); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 989580: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 989584: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989587: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98958a: ja 0x989a3c */
  if ((!cf && !zf)) goto L_989a3c;
L_989590: /* 989590: mov ecx, eax */
  ecx = eax;
/* 989592: jmp dword ptr [ecx*4 + 0x98aab0] */
  switch (R32((uint32_t)(ecx*4 + 0x98aab0u))) {
    case 0x989599u: goto L_989599;
    case 0x9895bau: goto L_9895ba;
    case 0x9895dbu: goto L_9895db;
    case 0x9895fcu: goto L_9895fc;
    case 0x989625u: goto L_989625;
    case 0x9896b8u: goto L_9896b8;
    case 0x989743u: goto L_989743;
    case 0x9897c2u: goto L_9897c2;
    case 0x989841u: goto L_989841;
    case 0x98987eu: goto L_98987e;
    case 0x9898dfu: goto L_9898df;
    case 0x989be6u: goto L_989be6;
    case 0x989bfbu: goto L_989bfb;
    case 0x989c10u: goto L_989c10;
    case 0x989c27u: goto L_989c27;
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989592, R32((uint32_t)(ecx*4 + 0x98aab0u))); return;
  }
L_989599: /* 989599: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98959c: xor eax, eax */
  eax = 0;
/* 98959e: mov al, byte ptr [edx + 0x23a6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23a6u))) & 0xffu);
/* 9895a4: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 9895a8: mov edx, edi */
  edx = edi;
/* 9895aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9895ab: call 0x9875e0 */
  esp -= 4; W32(esp, 0x9895b0u); SPILL(); f_9875e0(); if (g_unwind) return; RELOAD();
/* 9895b0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9895b3: mov ebx, eax */
  ebx = eax;
/* 9895b5: jmp 0x989a3c */
  goto L_989a3c;
L_9895ba: /* 9895ba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9895bd: xor edx, edx */
  edx = 0;
/* 9895bf: mov dl, byte ptr [ecx + 0x23a6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a6u))) & 0xffu);
/* 9895c5: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 9895c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9895ca: mov edx, edi */
  edx = edi;
/* 9895cc: call 0x987710 */
  esp -= 4; W32(esp, 0x9895d1u); SPILL(); f_987710(); if (g_unwind) return; RELOAD();
/* 9895d1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9895d4: mov ebx, eax */
  ebx = eax;
/* 9895d6: jmp 0x989a3c */
  goto L_989a3c;
L_9895db: /* 9895db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9895de: xor ecx, ecx */
  ecx = 0;
/* 9895e0: mov cl, byte ptr [eax + 0x23a6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a6u))) & 0xffu);
/* 9895e6: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 9895ea: mov edx, edi */
  edx = edi;
/* 9895ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9895ed: call 0x9877f0 */
  esp -= 4; W32(esp, 0x9895f2u); SPILL(); f_9877f0(); if (g_unwind) return; RELOAD();
/* 9895f2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9895f5: mov ebx, eax */
  ebx = eax;
/* 9895f7: jmp 0x989a3c */
  goto L_989a3c;
L_9895fc: /* 9895fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9895ff: xor edx, edx */
  edx = 0;
/* 989601: mov dl, byte ptr [eax + 0x23a7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a7u))) & 0xffu);
/* 989607: movzx eax, byte ptr [eax + 0x23a6] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x23a6u)));
/* 98960e: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989612: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989614: mov edx, edi */
  edx = edi;
/* 989616: call 0x987510 */
  esp -= 4; W32(esp, 0x98961bu); SPILL(); f_987510(); if (g_unwind) return; RELOAD();
/* 98961b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98961e: mov ebx, eax */
  ebx = eax;
/* 989620: jmp 0x989a3c */
  goto L_989a3c;
L_989625: /* 989625: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989628: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 98962b: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98962d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98962e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989632: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989637u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989637: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98963a: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98963d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989640: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989643: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989645: mov ebx, eax */
  ebx = eax;
/* 989647: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 98964b: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989653: jle 0x989a3c */
  if ((zf || sf != of)) goto L_989a3c;
L_989659: /* 989659: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_989660: /* 989660: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989662: mov edx, eax */
  edx = eax;
/* 989664: mov esi, eax */
  esi = eax;
/* 989666: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989669: shr esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 98966c: and edx, 0xf000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989672: and esi, 0xf00 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf00u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989678: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98967a: mov esi, eax */
  esi = eax;
/* 98967c: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98967f: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989682: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989685: and esi, 0xf0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 98968b: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98968d: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98968f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989693: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989696: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989699: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98969c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98969f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9896a3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9896a7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9896aa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9896ab: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9896ad: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9896b1: jl 0x989660 */
  if ((sf != of)) goto L_989660;
L_9896b3: /* 9896b3: jmp 0x989a3c */
  goto L_989a3c;
L_9896b8: /* 9896b8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9896bb: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 9896be: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9896c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9896c1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9896c5: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9896cau); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9896ca: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9896cd: mov ebx, eax */
  ebx = eax;
/* 9896cf: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9896d2: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 9896d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9896d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9896da: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 9896de: mov edx, ebx */
  edx = ebx;
/* 9896e0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9896e8: jle 0x989a3c */
  if ((zf || sf != of)) goto L_989a3c;
L_9896ee: /* 9896ee: mov edi, edi */
  edi = edi;
L_9896f0: /* 9896f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9896f2: mov esi, eax */
  esi = eax;
/* 9896f4: shr esi, 9 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 9896f7: mov ebx, eax */
  ebx = eax;
/* 9896f9: shr ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 9896fc: and esi, 0x7c00 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989702: and ebx, 0x3e0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 989708: or esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98970a: mov ebx, eax */
  ebx = eax;
/* 98970c: shr ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98970f: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989712: and ebx, 0x1f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 989715: or esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 989717: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98971c: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98971e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989722: mov word ptr [edx], si */
  W16((uint32_t)(edx), (esi & 0xffffu));
/* 989725: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 989728: imul esi, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  esi = (uint32_t)r;
  }
/* 98972b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98972e: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 989731: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989732: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989734: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989738: jl 0x9896f0 */
  if ((sf != of)) goto L_9896f0;
L_98973a: /* 98973a: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 98973e: jmp 0x989a3c */
  goto L_989a3c;
L_989743: /* 989743: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989746: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989749: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98974b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98974c: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989750: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989755u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989755: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989758: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98975b: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98975e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989761: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989763: mov ebx, eax */
  ebx = eax;
/* 989765: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989769: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989771: jle 0x989a3c */
  if ((zf || sf != of)) goto L_989a3c;
L_989777: /* 989777: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989779: mov edx, eax */
  edx = eax;
/* 98977b: mov esi, eax */
  esi = eax;
/* 98977d: shr edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989780: and edx, 0x7c00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989786: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989789: shr esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 98978c: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98978f: and esi, 0x3e0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989795: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989797: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989799: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98979d: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 9897a0: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 9897a3: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 9897a6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9897a9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9897ad: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9897b1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9897b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9897b5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9897b7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9897bb: jl 0x989777 */
  if ((sf != of)) goto L_989777;
L_9897bd: /* 9897bd: jmp 0x989a3c */
  goto L_989a3c;
L_9897c2: /* 9897c2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9897c5: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 9897c8: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9897ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9897cb: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9897cf: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9897d4u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9897d4: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9897d7: mov ebx, eax */
  ebx = eax;
/* 9897d9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9897dc: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 9897df: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9897e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9897e4: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 9897e8: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9897f0: jle 0x989a3c */
  if ((zf || sf != of)) goto L_989a3c;
L_9897f6: /* 9897f6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9897f8: mov edx, eax */
  edx = eax;
/* 9897fa: mov esi, eax */
  esi = eax;
/* 9897fc: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 9897ff: and edx, 0xf800 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989805: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989808: shr esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 98980b: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98980e: and esi, 0x7e0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989814: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989816: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989818: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98981c: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 98981f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989822: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989825: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989828: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98982c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989830: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989833: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989834: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989836: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98983a: jl 0x9897f6 */
  if ((sf != of)) goto L_9897f6;
L_98983c: /* 98983c: jmp 0x989a3c */
  goto L_989a3c;
L_989841: /* 989841: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989844: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989847: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98984a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98984b: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98984f: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989854u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989854: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989857: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 98985a: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98985d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 989860: mov ebx, eax */
  ebx = eax;
/* 989862: mov eax, ecx */
  eax = ecx;
/* 989864: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 989867: mov edi, ebx */
  edi = ebx;
/* 989869: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 98986b: mov ecx, eax */
  ecx = eax;
/* 98986d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989870: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 989873: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 989875: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 989879: jmp 0x989a3c */
  goto L_989a3c;
L_98987e: /* 98987e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989881: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989884: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 989887: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989888: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98988c: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989891u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989891: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989894: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 989897: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98989a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98989d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98989f: mov ebx, eax */
  ebx = eax;
/* 9898a1: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9898a9: jle 0x989a3c */
  if ((zf || sf != of)) goto L_989a3c;
L_9898af: /* 9898af: nop  */
L_9898b0: /* 9898b0: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 9898b2: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9898b4: mov cl, byte ptr [esi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 9898b7: mov byte ptr [eax + 1], cl */
  W8((uint32_t)(eax + 0x1u), (ecx & 0xffu));
/* 9898ba: mov dl, byte ptr [esi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 9898bd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9898c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9898c2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9898c3: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9898c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9898c6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9898c9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9898ca: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9898ce: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 9898d1: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 9898d4: cmp dword ptr [esp + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9898d8: jl 0x9898b0 */
  if ((sf != of)) goto L_9898b0;
L_9898da: /* 9898da: jmp 0x989a3c */
  goto L_989a3c;
L_9898df: /* 9898df: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 9898e3: call 0x9892e0 */
  esp -= 4; W32(esp, 0x9898e8u); SPILL(); f_9892e0(); if (g_unwind) return; RELOAD();
/* 9898e8: xor esi, esi */
  esi = 0;
/* 9898ea: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 9898ee: mov dword ptr [esp + 0x934], esi */
  W32((uint32_t)(esp + 0x934u), esi);
/* 9898f5: mov dword ptr [esp + 0x68], esi */
  W32((uint32_t)(esp + 0x68u), esi);
/* 9898f9: call 0x988fb0 */
  esp -= 4; W32(esp, 0x9898feu); SPILL(); f_988fb0(); if (g_unwind) return; RELOAD();
/* 9898fe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989901: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 989904: cmp word ptr [edx + 0x34], 3 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + 0x34u))); uint16_t b = (uint16_t)(0x3u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989909: movzx eax, byte ptr [eax + 0x23a4] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x23a4u)));
/* 989910: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 989913: mov byte ptr [esp + 0x1c], cl */
  W8((uint32_t)(esp + 0x1cu), (ecx & 0xffu));
/* 989917: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98991b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98991c: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98991f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989920: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989922: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 989924: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 989926: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 98992a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98992b: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98992e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 989930: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989931: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989932: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989933: call 0x98f5b0 */
  esp -= 4; W32(esp, 0x989938u); SPILL(); f_98f5b0(); if (g_unwind) return; RELOAD();
/* 989938: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 98993f: mov ebx, eax */
  ebx = eax;
/* 989941: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989944: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989947: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 98994b: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 989952: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989955: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 989958: jne 0x98999f */
  if (!zf) goto L_98999f;
L_98995a: /* 98995a: xor eax, eax */
  eax = 0;
/* 98995c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98995e: jle 0x9899df */
  if ((zf || sf != of)) goto L_9899df;
L_989960: /* 989960: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 989964: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 989967: jmp 0x989970 */
  goto L_989970;
L_989970: /* 989970: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 989973: mov byte ptr [esp + eax*4 + 0x12a], dl */
  W8((uint32_t)(esp + eax*4 + 0x12au), (edx & 0xffu));
/* 98997a: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98997c: mov byte ptr [esp + eax*4 + 0x129], dl */
  W8((uint32_t)(esp + eax*4 + 0x129u), (edx & 0xffu));
/* 989983: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 989986: mov byte ptr [esp + eax*4 + 0x128], dl */
  W8((uint32_t)(esp + eax*4 + 0x128u), (edx & 0xffu));
/* 98998d: mov byte ptr [esp + eax*4 + 0x12b], 0xff */
  W8((uint32_t)(esp + eax*4 + 0x12bu), 0xffu);
/* 989995: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989996: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 989999: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98999b: jl 0x989970 */
  if ((sf != of)) goto L_989970;
L_98999d: /* 98999d: jmp 0x9899df */
  goto L_9899df;
L_98999f: /* 98999f: xor eax, eax */
  eax = 0;
/* 9899a1: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9899a3: jle 0x9899df */
  if ((zf || sf != of)) goto L_9899df;
L_9899a5: /* 9899a5: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 9899a9: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9899ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9899b0: /* 9899b0: mov dl, byte ptr [esi - 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffff8u))) & 0xffu);
/* 9899b3: mov byte ptr [esp + eax*4 + 0x12a], dl */
  W8((uint32_t)(esp + eax*4 + 0x12au), (edx & 0xffu));
/* 9899ba: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 9899bd: mov byte ptr [esp + eax*4 + 0x129], dl */
  W8((uint32_t)(esp + eax*4 + 0x129u), (edx & 0xffu));
/* 9899c4: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 9899c6: mov byte ptr [esp + eax*4 + 0x128], dl */
  W8((uint32_t)(esp + eax*4 + 0x128u), (edx & 0xffu));
/* 9899cd: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 9899d0: mov byte ptr [esp + eax*4 + 0x12b], dl */
  W8((uint32_t)(esp + eax*4 + 0x12bu), (edx & 0xffu));
/* 9899d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9899d8: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9899db: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9899dd: jl 0x9899b0 */
  if ((sf != of)) goto L_9899b0;
L_9899df: /* 9899df: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 9899e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9899e4: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 9899e9: je 0x9899fe */
  if (zf) goto L_9899fe;
L_9899eb: /* 9899eb: xor esi, esi */
  esi = 0;
/* 9899ed: lea eax, [esp + 0x12c] */
  eax = (uint32_t)(esp + 0x12cu);
/* 9899f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9899f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9899f6: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x9899f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9899f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9899fc: jmp 0x989a14 */
  goto L_989a14;
L_9899fe: /* 9899fe: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 989a01: lea ecx, [esp + 0x12c] */
  ecx = (uint32_t)(esp + 0x12cu);
/* 989a08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989a09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989a0a: call 0x987a70 */
  esp -= 4; W32(esp, 0x989a0fu); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
/* 989a0f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989a12: xor esi, esi */
  esi = 0;
L_989a14: /* 989a14: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 989a18: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 989a1a: mov dword ptr [esp + 0x934], 0xffffffff */
  W32((uint32_t)(esp + 0x934u), 0xffffffffu);
/* 989a25: je 0x989a30 */
  if (zf) goto L_989a30;
L_989a27: /* 989a27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989a28: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x989a2du); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 989a2d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989a30: /* 989a30: mov dword ptr [esp + 0x70], esi */
  W32((uint32_t)(esp + 0x70u), esi);
/* 989a34: mov dword ptr [esp + 0x74], esi */
  W32((uint32_t)(esp + 0x74u), esi);
/* 989a38: mov dword ptr [esp + 0x78], esi */
  W32((uint32_t)(esp + 0x78u), esi);
L_989a3c: /* 989a3c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 989a3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 989a41: je 0x989a4f */
  if (zf) goto L_989a4f;
L_989a43: /* 989a43: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 989a47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989a48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989a4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989a4b: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x989a4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 989a4d: jmp 0x989a76 */
  goto L_989a76;
L_989a4f: /* 989a4f: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 989a53: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 989a55: je 0x989a67 */
  if (zf) goto L_989a67;
L_989a57: /* 989a57: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 989a5b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 989a5e: mov eax, ebx */
  eax = ebx;
/* 989a60: call 0x9878d0 */
  esp -= 4; W32(esp, 0x989a65u); SPILL(); f_9878d0(); if (g_unwind) return; RELOAD();
/* 989a65: jmp 0x989a79 */
  goto L_989a79;
L_989a67: /* 989a67: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 989a6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989a6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989a6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989a71: call 0x987a70 */
  esp -= 4; W32(esp, 0x989a76u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
L_989a76: /* 989a76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989a79: /* 989a79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989a7a: call 0x99cf5a */
  esp -= 4; W32(esp, 0x989a7fu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 989a7f: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 989a83: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 989a87: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989a8a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989a8b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989a8d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 989a91: jl 0x989545 */
  if ((sf != of)) goto L_989545;
L_989a97: /* 989a97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989a98: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x989a9du); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 989a9d: jmp 0x98aa5c */
  goto L_98aa5c;
L_989aa2: /* 989aa2: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 989aa6: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 989aaa: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 989aae: xor ecx, ecx */
  ecx = 0;
/* 989ab0: mov dword ptr [esp + 0xa0], eax */
  W32((uint32_t)(esp + 0xa0u), eax);
/* 989ab7: mov dword ptr [esp + 0xac], ecx */
  W32((uint32_t)(esp + 0xacu), ecx);
/* 989abe: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 989ac5: mov dword ptr [esp + 0xb4], ecx */
  W32((uint32_t)(esp + 0xb4u), ecx);
/* 989acc: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 989ad3: cmp dword ptr [esp + 0x44], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989ad7: mov dword ptr [esp + 0x934], 1 */
  W32((uint32_t)(esp + 0x934u), 0x1u);
/* 989ae2: mov dword ptr [esp + 0xc4], ecx */
  W32((uint32_t)(esp + 0xc4u), ecx);
/* 989ae9: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 989af0: mov dword ptr [esp + 0xcc], ecx */
  W32((uint32_t)(esp + 0xccu), ecx);
/* 989af7: mov dword ptr [esp + 0xbc], ecx */
  W32((uint32_t)(esp + 0xbcu), ecx);
/* 989afe: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 989b02: jle 0x98aa42 */
  if ((zf || sf != of)) goto L_98aa42;
L_989b08: /* 989b08: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 989b0f: mov dword ptr [esp + 0xa8], edx */
  W32((uint32_t)(esp + 0xa8u), edx);
/* 989b16: jmp 0x989b20 */
  goto L_989b20;
L_989b20: /* 989b20: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 989b27: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 989b2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b2c: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 989b30: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 989b34: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x989b39u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 989b39: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 989b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b40: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x989b45u); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 989b45: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 989b48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989b4b: cmp word ptr [ebx + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989b53: mov edi, eax */
  edi = eax;
/* 989b55: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 989b59: jne 0x989b72 */
  if (!zf) goto L_989b72;
L_989b5b: /* 989b5b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 989b5e: movsx eax, word ptr [ecx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x34u)));
/* 989b62: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b67: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b6a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989b6c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 989b70: jmp 0x989b85 */
  goto L_989b85;
L_989b72: /* 989b72: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 989b75: movsx eax, word ptr [edx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0x34u)));
/* 989b79: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b7e: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b81: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
L_989b85: /* 989b85: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 989b89: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 989b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989b8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989b8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b8f: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 989b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b97: call 0x98f100 */
  esp -= 4; W32(esp, 0x989b9cu); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 989b9c: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 989ba3: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 989ba7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989baa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 989bac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989bad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989bae: mov byte ptr [0xcf2fec], 1 */
  W8((uint32_t)(0xcf2fecu), 0x1u);
/* 989bb5: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 989bb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989bba: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 989bc1: call 0x98eed0 */
  esp -= 4; W32(esp, 0x989bc6u); SPILL(); f_98eed0(); if (g_unwind) return; RELOAD();
/* 989bc6: movsx eax, word ptr [ebx + 0x2382] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebx + 0x2382u)));
/* 989bcd: add eax, 0xffffff7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7au);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989bd2: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989bd5: mov byte ptr [esp + 0x934], 2 */
  W8((uint32_t)(esp + 0x934u), 0x2u);
/* 989bdd: ja 0x989c3e */
  if ((!cf && !zf)) goto L_989c3e;
L_989bdf: /* 989bdf: jmp dword ptr [eax*4 + 0x98aae4] */
  switch (R32((uint32_t)(eax*4 + 0x98aae4u))) {
    case 0x989be6u: goto L_989be6;
    case 0x989bfbu: goto L_989bfb;
    case 0x989c10u: goto L_989c10;
    case 0x989c27u: goto L_989c27;
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989bdf, R32((uint32_t)(eax*4 + 0x98aae4u))); return;
  }
L_989be6: /* 989be6: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989bed: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989bf4: call 0x98e5d0 */
  esp -= 4; W32(esp, 0x989bf9u); SPILL(); f_98e5d0(); if (g_unwind) return; RELOAD();
/* 989bf9: jmp 0x989c51 */
  goto L_989c51;
L_989bfb: /* 989bfb: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c02: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c09: call 0x98e240 */
  esp -= 4; W32(esp, 0x989c0eu); SPILL(); f_98e240(); if (g_unwind) return; RELOAD();
/* 989c0e: jmp 0x989c51 */
  goto L_989c51;
L_989c10: /* 989c10: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c19: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c20: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c25u); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c25: jmp 0x989c51 */
  goto L_989c51;
L_989c27: /* 989c27: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 989c2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c30: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c37: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c3cu); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c3c: jmp 0x989c51 */
  goto L_989c51;
L_989c3e: /* 989c3e: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c45: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c4c: call 0x98e120 */
  esp -= 4; W32(esp, 0x989c51u); SPILL(); f_98e120(); if (g_unwind) return; RELOAD();
L_989c51: /* 989c51: mov byte ptr [0xcf2fec], 0 */
  W8((uint32_t)(0xcf2fecu), 0x0u);
/* 989c58: fild dword ptr [ebx + 0x23a0] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x23a0u)); FPUSH(v); }
/* 989c5e: mov byte ptr [esp + 0x37], 0 */
  W8((uint32_t)(esp + 0x37u), 0x0u);
/* 989c63: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 989c6b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 989c71: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 989c77: fst dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0);
/* 989c7e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_989c82: /* 989c82: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989c85: mov al, byte ptr [ecx + 0x23a5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a5u))) & 0xffu);
/* 989c8b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 989c8d: je 0x989ce3 */
  if (zf) goto L_989ce3;
L_989c8f: /* 989c8f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989c92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989c94: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989c97: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989c9f: jle 0x989ce3 */
  if ((zf || sf != of)) goto L_989ce3;
L_989ca1: /* 989ca1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989ca3: xor ebx, ebx */
  ebx = 0;
/* 989ca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ca7: jle 0x989cd3 */
  if ((zf || sf != of)) goto L_989cd3;
L_989ca9: /* 989ca9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_989cb0: /* 989cb0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 989cb4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 989cb7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989cba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989cbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989cbf: call 0x987a90 */
  esp -= 4; W32(esp, 0x989cc4u); SPILL(); f_987a90(); if (g_unwind) return; RELOAD();
/* 989cc4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 989cc6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989cc8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ccb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 989cce: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 989ccf: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cd1: jl 0x989cb0 */
  if ((sf != of)) goto L_989cb0;
L_989cd3: /* 989cd3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989cd7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989cda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989cdb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cdd: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ce1: jl 0x989ca1 */
  if ((sf != of)) goto L_989ca1;
L_989ce3: /* 989ce3: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 989ce7: xor ebx, ebx */
  ebx = 0;
/* 989ce9: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989cec: ja 0x989d11 */
  if ((!cf && !zf)) goto L_989d11;
L_989cee: /* 989cee: jmp dword ptr [eax*4 + 0x98aaf4] */
  switch (R32((uint32_t)(eax*4 + 0x98aaf4u))) {
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989cee, R32((uint32_t)(eax*4 + 0x98aaf4u))); return;
  }
L_989cf5: /* 989cf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 989cf8: xor eax, eax */
  eax = 0;
/* 989cfa: mov al, byte ptr [edx + 0x23a6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23a6u))) & 0xffu);
/* 989d00: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d04: mov edx, edi */
  edx = edi;
/* 989d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d07: call 0x9875e0 */
  esp -= 4; W32(esp, 0x989d0cu); SPILL(); f_9875e0(); if (g_unwind) return; RELOAD();
L_989d0c: /* 989d0c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989d0f: /* 989d0f: mov ebx, eax */
  ebx = eax;
L_989d11: /* 989d11: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 989d14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 989d16: je 0x98a163 */
  if (zf) goto L_98a163;
L_989d1c: /* 989d1c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 989d20: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 989d24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989d27: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x989d29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 989d29: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 989d2c: jmp 0x98a189 */
  goto L_98a189;
L_989d31: /* 989d31: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989d34: xor edx, edx */
  edx = 0;
/* 989d36: mov dl, byte ptr [ecx + 0x23a6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a6u))) & 0xffu);
/* 989d3c: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d41: mov edx, edi */
  edx = edi;
/* 989d43: call 0x987710 */
  esp -= 4; W32(esp, 0x989d48u); SPILL(); f_987710(); if (g_unwind) return; RELOAD();
/* 989d48: jmp 0x989d0c */
  goto L_989d0c;
L_989d4a: /* 989d4a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d4d: xor ecx, ecx */
  ecx = 0;
/* 989d4f: mov cl, byte ptr [eax + 0x23a6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a6u))) & 0xffu);
/* 989d55: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d59: mov edx, edi */
  edx = edi;
/* 989d5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d5c: call 0x9877f0 */
  esp -= 4; W32(esp, 0x989d61u); SPILL(); f_9877f0(); if (g_unwind) return; RELOAD();
/* 989d61: jmp 0x989d0c */
  goto L_989d0c;
L_989d63: /* 989d63: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d66: xor edx, edx */
  edx = 0;
/* 989d68: mov dl, byte ptr [eax + 0x23a7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a7u))) & 0xffu);
/* 989d6e: movzx eax, byte ptr [eax + 0x23a6] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x23a6u)));
/* 989d75: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d7b: mov edx, edi */
  edx = edi;
/* 989d7d: call 0x987510 */
  esp -= 4; W32(esp, 0x989d82u); SPILL(); f_987510(); if (g_unwind) return; RELOAD();
/* 989d82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989d85: jmp 0x989d0f */
  goto L_989d0f;
L_989d87: /* 989d87: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989d8a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989d8d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d90: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989d94: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989d99u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989d99: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989d9c: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989d9f: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989da2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989da5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989da7: mov ebx, eax */
  ebx = eax;
/* 989da9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989dad: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989db5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989dbb: /* 989dbb: jmp 0x989dc0 */
  goto L_989dc0;
L_989dc0: /* 989dc0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989dc2: mov edx, eax */
  edx = eax;
/* 989dc4: mov esi, eax */
  esi = eax;
/* 989dc6: shr edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989dc9: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989dcc: and edx, 0xf00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989dd2: and esi, 0xf0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dd8: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dda: mov esi, eax */
  esi = eax;
/* 989ddc: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ddf: shr esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989de2: and eax, 0xf000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989de7: and esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dea: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dec: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989df2: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989df5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989df8: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989dfb: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989dfe: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e02: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e06: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e0a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e0c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989e10: jl 0x989dc0 */
  if ((sf != of)) goto L_989dc0;
L_989e12: /* 989e12: jmp 0x989d11 */
  goto L_989d11;
L_989e17: /* 989e17: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e1a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e1d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989e20: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989e24: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989e29u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989e29: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989e2c: mov ebx, eax */
  ebx = eax;
/* 989e2e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e31: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e34: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989e37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989e39: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989e3d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989e45: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989e4b: /* 989e4b: jmp 0x989e50 */
  goto L_989e50;
L_989e50: /* 989e50: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989e52: mov edx, eax */
  edx = eax;
/* 989e54: mov esi, eax */
  esi = eax;
/* 989e56: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989e59: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e5c: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989e62: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e65: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e67: mov esi, eax */
  esi = eax;
/* 989e69: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989e6c: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e6f: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989e74: and esi, 0x8000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e7a: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7c: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989e82: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989e85: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989e88: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989e8b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989e8e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e92: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e96: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e9a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e9c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ea0: jl 0x989e50 */
  if ((sf != of)) goto L_989e50;
L_989ea2: /* 989ea2: jmp 0x989d11 */
  goto L_989d11;
L_989ea7: /* 989ea7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989eaa: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ead: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989eb0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989eb4: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989eb9u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989eb9: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989ebc: mov ebx, eax */
  ebx = eax;
/* 989ebe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989ec1: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ec4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ec9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989ecd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989ed5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989edb: /* 989edb: jmp 0x989ee0 */
  goto L_989ee0;
L_989ee0: /* 989ee0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989ee2: mov edx, eax */
  edx = eax;
/* 989ee4: mov esi, eax */
  esi = eax;
/* 989ee6: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989ee9: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989eef: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ef2: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989ef5: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989efa: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989efd: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989eff: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f05: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f08: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f0b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f0e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f11: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f15: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f19: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f1c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f1d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f1f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989f23: jl 0x989ee0 */
  if ((sf != of)) goto L_989ee0;
L_989f25: /* 989f25: jmp 0x989d11 */
  goto L_989d11;
L_989f2a: /* 989f2a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f2d: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f30: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989f33: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989f37: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989f3cu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989f3c: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989f3f: mov ebx, eax */
  ebx = eax;
/* 989f41: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f44: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989f4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989f4c: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989f50: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989f58: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989f5e: /* 989f5e: mov edi, edi */
  edi = edi;
L_989f60: /* 989f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989f62: mov edx, eax */
  edx = eax;
/* 989f64: mov esi, eax */
  esi = eax;
/* 989f66: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989f69: and edx, 0x7e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989f6f: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989f72: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989f75: and eax, 0xf800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989f7a: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989f7d: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f7f: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f81: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f85: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f88: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f8b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f8e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f91: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f95: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f99: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f9d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f9f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989fa3: jl 0x989f60 */
  if ((sf != of)) goto L_989f60;
L_989fa5: /* 989fa5: jmp 0x989d11 */
  goto L_989d11;
L_989faa: /* 989faa: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fad: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fb0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989fb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989fb4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989fb8: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989fbdu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989fbd: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989fc0: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 989fc3: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989fc6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 989fc9: mov ebx, eax */
  ebx = eax;
/* 989fcb: mov eax, ecx */
  eax = ecx;
/* 989fcd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 989fd0: mov edi, ebx */
  edi = ebx;
/* 989fd2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 989fd4: mov ecx, eax */
  ecx = eax;
/* 989fd6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989fd9: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 989fdc: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 989fde: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 989fe2: jmp 0x989d11 */
  goto L_989d11;
L_989fe7: /* 989fe7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fea: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 989ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989ff1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989ff5: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989ffau); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989ffa: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989ffd: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a000: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a003: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a006: xor ecx, ecx */
  ecx = 0;
/* 98a008: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a00a: mov ebx, eax */
  ebx = eax;
/* 98a00c: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_98a012: /* 98a012: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a014: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a016: mov dl, byte ptr [esi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 98a019: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a01a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a01c: mov dl, byte ptr [esi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 98a01f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a020: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a022: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a025: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a028: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a029: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a02c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a02d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a02f: jl 0x98a012 */
  if ((sf != of)) goto L_98a012;
L_98a031: /* 98a031: jmp 0x989d11 */
  goto L_989d11;
L_98a036: /* 98a036: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a03c: mov esi, 3 */
  esi = 0x3u;
/* 98a041: cmp word ptr [ecx + 0x34], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x34u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a045: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98a048: mov byte ptr [esp + 0xa4], dl */
  W8((uint32_t)(esp + 0xa4u), (edx & 0xffu));
/* 98a04f: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 98a056: xor edx, edx */
  edx = 0;
/* 98a058: mov dl, byte ptr [eax + 0x23a4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a4u))) & 0xffu);
/* 98a05e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a05f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a062: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98a069: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a06a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a06c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a06e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 98a070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a071: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98a074: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a076: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a077: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a079: call 0x98f5b0 */
  esp -= 4; W32(esp, 0x98a07eu); SPILL(); f_98f5b0(); if (g_unwind) return; RELOAD();
/* 98a07e: mov ebx, eax */
  ebx = eax;
/* 98a080: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a083: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 98a086: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 98a08a: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 98a08e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a091: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a093: jne 0x989d11 */
  if (!zf) goto L_989d11;
L_98a099: /* 98a099: cmp dword ptr [esp + 0xb8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xb8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a0a0: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 98a0a7: jne 0x98a0ef */
  if (!zf) goto L_98a0ef;
L_98a0a9: /* 98a0a9: xor eax, eax */
  eax = 0;
/* 98a0ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0ad: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0b3: /* 98a0b3: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0ba: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a0c0: /* 98a0c0: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a0c3: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a0ca: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a0cc: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a0d3: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a0d6: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a0dd: mov byte ptr [esp + eax*4 + 0x52b], 0xff */
  W8((uint32_t)(esp + eax*4 + 0x52bu), 0xffu);
/* 98a0e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a0e6: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0e9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a0eb: jl 0x98a0c0 */
  if ((sf != of)) goto L_98a0c0;
L_98a0ed: /* 98a0ed: jmp 0x98a12f */
  goto L_98a12f;
L_98a0ef: /* 98a0ef: xor eax, eax */
  eax = 0;
/* 98a0f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0f3: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0f5: /* 98a0f5: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0fc: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0ff: nop  */
L_98a100: /* 98a100: mov dl, byte ptr [esi - 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffff8u))) & 0xffu);
/* 98a103: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a10a: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a10d: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a114: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a116: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a11d: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a120: mov byte ptr [esp + eax*4 + 0x52b], dl */
  W8((uint32_t)(esp + eax*4 + 0x52bu), (edx & 0xffu));
/* 98a127: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a128: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a12b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a12d: jl 0x98a100 */
  if ((sf != of)) goto L_98a100;
L_98a12f: /* 98a12f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 98a132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a134: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 98a139: je 0x98a14f */
  if (zf) goto L_98a14f;
L_98a13b: /* 98a13b: lea ecx, [esp + 0x52c] */
  ecx = (uint32_t)(esp + 0x52cu);
/* 98a142: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98a144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a145: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x98a147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98a147: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a14a: jmp 0x989d11 */
  goto L_989d11;
L_98a14f: /* 98a14f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a152: lea edx, [esp + 0x52c] */
  edx = (uint32_t)(esp + 0x52cu);
/* 98a159: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a15a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a15b: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a160u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
/* 98a160: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a163: /* 98a163: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 98a167: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a169: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a16c: je 0x98a17d */
  if (zf) goto L_98a17d;
L_98a16e: /* 98a16e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98a172: mov eax, ebx */
  eax = ebx;
/* 98a174: mov edx, esi */
  edx = esi;
/* 98a176: call 0x9878d0 */
  esp -= 4; W32(esp, 0x98a17bu); SPILL(); f_9878d0(); if (g_unwind) return; RELOAD();
/* 98a17b: jmp 0x98a18c */
  goto L_98a18c;
L_98a17d: /* 98a17d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98a181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a182: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a184: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a189u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
L_98a189: /* 98a189: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a18c: /* 98a18c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a18d: call 0x99cf5a */
  esp -= 4; W32(esp, 0x98a192u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 98a192: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98a196: mov al, byte ptr [esi + 0x232d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x232du))) & 0xffu);
/* 98a19c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a19f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a1a0: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1a2: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 98a1a6: jne 0x98a1b3 */
  if (!zf) goto L_98a1b3;
L_98a1a8: /* 98a1a8: fld dword ptr [esi + ecx*4 + 0x2330] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x2330u)); FPUSH(v); }
/* 98a1af: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a1b3: /* 98a1b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98a1b9: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 98a1bd: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1c0: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 98a1c4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 98a1c8: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1ca: /* 98a1ca: cmp dword ptr [esp + 0x30], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1cf: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1d1: /* 98a1d1: mov byte ptr [esp + 0x37], 1 */
  W8((uint32_t)(esp + 0x37u), 0x1u);
/* 98a1d6: jmp 0x98a9ef */
  goto L_98a9ef;
L_98a1db: /* 98a1db: cmp word ptr [esi + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1e3: jne 0x98a252 */
  if (!zf) goto L_98a252;
L_98a1e5: /* 98a1e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a1e6: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98a1ebu); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98a1eb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a1ee: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98a1f1: movsx ecx, word ptr [eax + 0x34] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x34u)));
/* 98a1f5: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 98a1f9: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 98a1fc: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 98a1ff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a200: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a202: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a204: mov edi, eax */
  edi = eax;
/* 98a206: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 98a20a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a20c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a20d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a20e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a210: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 98a214: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a216: mov ebx, eax */
  ebx = eax;
/* 98a218: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a219: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a21a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a21b: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 98a21f: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 98a223: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 98a227: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x98a22cu); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 98a22c: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98a230: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98a233: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a234: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a237: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a239: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a23a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a23b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a23c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a23d: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 98a241: call 0x98f100 */
  esp -= 4; W32(esp, 0x98a246u); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 98a246: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 98a24a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a24d: jmp 0x98a365 */
  goto L_98a365;
L_98a252: /* 98a252: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a255: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a258: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25a: /* 98a25a: cmp dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a25d: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25f: /* 98a25f: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 98a266: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98a26a: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 98a26d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a270: imul ecx, dword ptr [eax] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax)));
  ecx = (uint32_t)r;
  }
/* 98a273: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 98a276: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98a279: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98a27c: mov edx, ecx */
  edx = ecx;
/* 98a27e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98a281: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 98a283: mov ecx, edx */
  ecx = edx;
/* 98a285: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98a288: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 98a28a: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98a28e: jmp 0x98a333 */
  goto L_98a333;
L_98a293: /* 98a293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a295: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a298: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a29c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a2a4: jle 0x98a333 */
  if ((zf || sf != of)) goto L_98a333;
L_98a2aa: /* 98a2aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98a2b0: /* 98a2b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2b2: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a2b5: mov edx, eax */
  edx = eax;
/* 98a2b7: imul edx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  edx = (uint32_t)r;
  }
/* 98a2bc: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a2bf: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2c3: mov esi, ebx */
  esi = ebx;
/* 98a2c5: je 0x98a2ca */
  if (zf) goto L_98a2ca;
L_98a2c7: /* 98a2c7: lea esi, [ebx + eax*4] */
  esi = (uint32_t)(ebx + eax*4);
L_98a2ca: /* 98a2ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a2cc: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a2d4: jle 0x98a31d */
  if ((zf || sf != of)) goto L_98a31d;
L_98a2d6: /* 98a2d6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2d8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2db: mov ecx, esi */
  ecx = esi;
/* 98a2dd: je 0x98a622 */
  if (zf) goto L_98a622;
L_98a2e3: /* 98a2e3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 98a2e6: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
L_98a2e9: /* 98a2e9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a2ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a2ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a2ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a2ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a2f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a2f1: call 0x987d90 */
  esp -= 4; W32(esp, 0x98a2f6u); SPILL(); f_987d90(); if (g_unwind) return; RELOAD();
/* 98a2f6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98a2fa: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98a2fc: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a300: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a303: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 98a307: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a309: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a30c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a30f: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a312: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a315: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a317: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a31b: jl 0x98a2d6 */
  if ((sf != of)) goto L_98a2d6;
L_98a31d: /* 98a31d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98a321: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a324: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a327: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a329: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a32d: jl 0x98a2b0 */
  if ((sf != of)) goto L_98a2b0;
L_98a333: /* 98a333: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a335: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a336: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a337: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a339: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a33b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 98a33d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a340: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a341: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a342: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a344: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a346: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 98a349: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 98a34d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a34e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a34f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a351: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a353: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98a357: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a35b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a35c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a35d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a35f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a361: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_98a365: /* 98a365: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a368: mov al, byte ptr [esi + 0x2387] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2387u))) & 0xffu);
/* 98a36e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a370: je 0x98a3d4 */
  if (zf) goto L_98a3d4;
L_98a372: /* 98a372: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a375: xor eax, eax */
  eax = 0;
/* 98a377: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a379: jle 0x98a3a8 */
  if ((zf || sf != of)) goto L_98a3a8;
L_98a37b: /* 98a37b: mov ecx, 4 */
  ecx = 0x4u;
L_98a380: /* 98a380: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a382: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a385: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a388: mov byte ptr [ebx + edx*4 + 3], 0 */
  W8((uint32_t)(ebx + edx*4 + 0x3u), 0x0u);
/* 98a38d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a38f: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a392: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a395: lea edx, [edx + ebx - 4] */
  edx = (uint32_t)(edx + ebx + 0xfffffffcu);
/* 98a399: mov byte ptr [edx + 3], 0 */
  W8((uint32_t)(edx + 0x3u), 0x0u);
/* 98a39d: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a3a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3a1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3a4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3a6: jl 0x98a380 */
  if ((sf != of)) goto L_98a380;
L_98a3a8: /* 98a3a8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3aa: xor eax, eax */
  eax = 0;
/* 98a3ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3ae: jle 0x98a3d4 */
  if ((zf || sf != of)) goto L_98a3d4;
L_98a3b0: /* 98a3b0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3b3: mov byte ptr [ecx + eax*4 + 3], 0 */
  W8((uint32_t)(ecx + eax*4 + 0x3u), 0x0u);
/* 98a3b8: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a3bb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a3bd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 98a3be: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a3c1: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3c4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98a3c6: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 98a3c9: mov byte ptr [ecx + 3], 0 */
  W8((uint32_t)(ecx + 0x3u), 0x0u);
/* 98a3cd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3d2: jl 0x98a3b0 */
  if ((sf != of)) goto L_98a3b0;
L_98a3d4: /* 98a3d4: mov al, byte ptr [esi + 0x2388] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2388u))) & 0xffu);
/* 98a3da: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a3dc: je 0x98a48b */
  if (zf) goto L_98a48b;
L_98a3e2: /* 98a3e2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a3e5: xor eax, eax */
  eax = 0;
/* 98a3e7: add ecx, 0x238c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x238cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a3f0: /* 98a3f0: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a3f3: xor edx, edx */
  edx = 0;
/* 98a3f5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3f7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a3fb: jle 0x98a441 */
  if ((zf || sf != of)) goto L_98a441;
L_98a3fd: /* 98a3fd: mov dword ptr [esp + 0x24], 4 */
  W32((uint32_t)(esp + 0x24u), 0x4u);
L_98a405: /* 98a405: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 98a407: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a409: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 98a40c: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a40f: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a412: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a415: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 98a419: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a41b: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a41e: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 98a421: lea esi, [edx + esi - 4] */
  esi = (uint32_t)(edx + esi + 0xfffffffcu);
/* 98a425: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a427: mov byte ptr [esi + eax], dl */
  W8((uint32_t)(esi + eax), (edx & 0xffu));
/* 98a42a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98a42e: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a431: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98a432: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a435: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a437: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a43b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98a43f: jl 0x98a405 */
  if ((sf != of)) goto L_98a405;
L_98a441: /* 98a441: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a443: xor esi, esi */
  esi = 0;
/* 98a445: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a447: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a44b: jle 0x98a480 */
  if ((zf || sf != of)) goto L_98a480;
L_98a44d: /* 98a44d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a450: /* 98a450: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a452: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a455: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a458: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a45b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a45e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 98a460: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 98a464: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 98a465: imul ebx, edx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(edx);
  ebx = (uint32_t)r;
  }
/* 98a468: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a46b: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a46d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98a470: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a472: mov byte ptr [edx + eax], bl */
  W8((uint32_t)(edx + eax), (ebx & 0xffu));
/* 98a475: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a477: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a478: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a47a: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a47e: jl 0x98a450 */
  if ((sf != of)) goto L_98a450;
L_98a480: /* 98a480: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a481: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a482: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a485: jle 0x98a3f0 */
  if ((zf || sf != of)) goto L_98a3f0;
L_98a48b: /* 98a48b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a48e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98a492: cmp ecx, dword ptr [eax + 0x239c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x239cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a498: jl 0x98a89a */
  if ((sf != of)) goto L_98a89a;
L_98a49e: /* 98a49e: mov cl, byte ptr [eax + 0x2390] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2390u))) & 0xffu);
/* 98a4a4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4a6: je 0x98a812 */
  if (zf) goto L_98a812;
L_98a4ac: /* 98a4ac: mov cl, byte ptr [eax + 0x2385] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2385u))) & 0xffu);
/* 98a4b2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4b4: je 0x98a670 */
  if (zf) goto L_98a670;
L_98a4ba: /* 98a4ba: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a4bd: xor ecx, ecx */
  ecx = 0;
/* 98a4bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4c1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a4c5: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a4cb: /* 98a4cb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a4cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a4d0: /* 98a4d0: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a4d3: mov edx, ecx */
  edx = ecx;
/* 98a4d5: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a4d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4da: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a4dd: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a4e5: jle 0x98a65b */
  if ((zf || sf != of)) goto L_98a65b;
L_98a4eb: /* 98a4eb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a4ef: fstp qword ptr [esp + 0xd0] */
  WF64((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 98a4f6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98a4fa: fstp qword ptr [esp + 0xd8] */
  WF64((uint32_t)(esp + 0xd8u), ST0); FPOP();
L_98a501: /* 98a501: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a505: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a507: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a50b: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a50f: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a514: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a516: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98a51a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a51e: jge 0x98a526 */
  if ((sf == of)) goto L_98a526;
L_98a520: /* 98a520: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a526: /* 98a526: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a528: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a52e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98a532: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a538: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a53c: jge 0x98a544 */
  if ((sf == of)) goto L_98a544;
L_98a53e: /* 98a53e: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a544: /* 98a544: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a546: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a54c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a550: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a556: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a55a: jge 0x98a562 */
  if ((sf == of)) goto L_98a562;
L_98a55c: /* 98a55c: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a562: /* 98a562: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a568: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a56c: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a572: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a579: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a580: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 98a582: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a589: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a590: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a592: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a599: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59d: fld qword ptr [esp + 0xd8] */
  { double v = F64((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 98a5a4: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5ab: fst qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0);
/* 98a5b2: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5b9: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a5c0: fmul qword ptr [esp + 0x88] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x88u)));
/* 98a5c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5c9: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5d0: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 98a5d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a5db: fabs  */
  ST0 = fabs(ST0);
/* 98a5dd: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a5e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a5e5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a5e8: jne 0x98a629 */
  if (!zf) goto L_98a629;
L_98a5ea: /* 98a5ea: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a5ec: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a5f2: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5f9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a5fb: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a602: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a609: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a60b: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a612: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a619: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a620: jmp 0x98a62b */
  goto L_98a62b;
L_98a622: /* 98a622: mov eax, ebx */
  eax = ebx;
/* 98a624: jmp 0x98a2e9 */
  goto L_98a2e9;
L_98a629: /* 98a629: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a62b: /* 98a62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a62c: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 98a633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a634: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98a638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a639: call 0x987960 */
  esp -= 4; W32(esp, 0x98a63eu); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a63e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a642: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a644: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a647: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a648: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a64b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a64d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a651: jl 0x98a501 */
  if ((sf != of)) goto L_98a501;
L_98a657: /* 98a657: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
L_98a65b: /* 98a65b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a65e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a65f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a661: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a665: jl 0x98a4d0 */
  if ((sf != of)) goto L_98a4d0;
L_98a66b: /* 98a66b: jmp 0x98a812 */
  goto L_98a812;
L_98a670: /* 98a670: mov cl, byte ptr [eax + 0x2386] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2386u))) & 0xffu);
/* 98a676: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a678: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a67b: je 0x98a720 */
  if (zf) goto L_98a720;
L_98a681: /* 98a681: xor ecx, ecx */
  ecx = 0;
/* 98a683: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a685: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a689: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a68f: /* 98a68f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a691: /* 98a691: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a694: mov edx, ecx */
  edx = ecx;
/* 98a696: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a699: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a69c: xor esi, esi */
  esi = 0;
/* 98a69e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a6a0: jle 0x98a70b */
  if ((zf || sf != of)) goto L_98a70b;
L_98a6a2: /* 98a6a2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_98a6a3: /* 98a6a3: movzx eax, byte ptr [ebx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a6a7: movzx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a6aa: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a6ae: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6b2: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a6b6: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6bc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6c0: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6c4: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6ca: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6ce: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 98a6d2: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6d8: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6de: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6e3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6e3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6e7: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6ed: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a6f0: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6f6: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6fbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6fb: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a6fd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a6ff: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a700: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a703: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a705: jl 0x98a6a3 */
  if ((sf != of)) goto L_98a6a3;
L_98a707: /* 98a707: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_98a70b: /* 98a70b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a70e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a70f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a711: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a715: jl 0x98a691 */
  if ((sf != of)) goto L_98a691;
L_98a71b: /* 98a71b: jmp 0x98a812 */
  goto L_98a812;
L_98a720: /* 98a720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a722: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a72a: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a730: /* 98a730: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a732: /* 98a732: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98a736: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a739: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a73c: xor esi, esi */
  esi = 0;
/* 98a73e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a740: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a743: jle 0x98a7fe */
  if ((zf || sf != of)) goto L_98a7fe;
L_98a749: /* 98a749: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98a750: /* 98a750: movzx edx, byte ptr [ebx] */
  edx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a753: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a756: movzx ecx, byte ptr [eax + 0x2394] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2394u)));
/* 98a75d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a761: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a765: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a769: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a76d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a771: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a775: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a777: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a77d: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a782u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a782: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a785: movzx ecx, byte ptr [ebx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a789: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a78b: movzx eax, byte ptr [edx + 0x2395] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2395u)));
/* 98a792: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a796: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a79a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a79e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7a2: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7a6: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7ac: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7b2: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7b7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7b7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a7ba: movzx ecx, byte ptr [ebx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a7be: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a7c1: movzx eax, byte ptr [edx + 0x2396] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2396u)));
/* 98a7c8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a7cc: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7d0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a7d4: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7d8: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7dc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7e2: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7e8: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7edu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7ed: mov byte ptr [ebx + 2], al */
  W8((uint32_t)(ebx + 0x2u), (eax & 0xffu));
/* 98a7f0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a7f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a7f3: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a7f6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a7f8: jl 0x98a750 */
  if ((sf != of)) goto L_98a750;
L_98a7fe: /* 98a7fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a802: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a805: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a806: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a808: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a80c: jl 0x98a732 */
  if ((sf != of)) goto L_98a732;
L_98a812: /* 98a812: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a815: mov al, byte ptr [edx + 0x2391] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2391u))) & 0xffu);
/* 98a81b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a81d: je 0x98a88b */
  if (zf) goto L_98a88b;
L_98a81f: /* 98a81f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a824: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a82c: jle 0x98a88b */
  if ((zf || sf != of)) goto L_98a88b;
L_98a82e: /* 98a82e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a830: /* 98a830: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a834: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a837: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a83a: xor esi, esi */
  esi = 0;
/* 98a83c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a83e: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a841: jle 0x98a87b */
  if ((zf || sf != of)) goto L_98a87b;
L_98a843: /* 98a843: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_98a846: /* 98a846: movzx eax, byte ptr [ebx] */
  eax = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a849: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a84c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a850: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a854: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a858: fild dword ptr [ecx + 0x2398] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x2398u)); FPUSH(v); }
/* 98a85e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a862: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a864: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a86a: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a86fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a86f: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a871: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a874: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a877: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a879: jl 0x98a846 */
  if ((sf != of)) goto L_98a846;
L_98a87b: /* 98a87b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a87f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a882: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a883: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a885: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a889: jl 0x98a830 */
  if ((sf != of)) goto L_98a830;
L_98a88b: /* 98a88b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a88f: fmul dword ptr [esp + 0x9c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x9cu)));
/* 98a896: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a89a: /* 98a89a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a89d: mov al, byte ptr [edx + 0x2385] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2385u))) & 0xffu);
/* 98a8a3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a8a5: je 0x98a9ef */
  if (zf) goto L_98a9ef;
L_98a8ab: /* 98a8ab: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a8ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8b0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a8b8: jle 0x98a9ef */
  if ((zf || sf != of)) goto L_98a9ef;
L_98a8be: /* 98a8be: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a8c0: /* 98a8c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a8c4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a8c7: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a8ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8cc: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a8cf: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a8d7: jle 0x98a9db */
  if ((zf || sf != of)) goto L_98a9db;
L_98a8dd: /* 98a8dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a8e0: /* 98a8e0: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a8e4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a8e6: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a8ea: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a8ee: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a8f3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8f5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98a8f9: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a8fd: jge 0x98a905 */
  if ((sf == of)) goto L_98a905;
L_98a8ff: /* 98a8ff: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a905: /* 98a905: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a907: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a90d: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98a911: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a917: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a91b: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a91f: jge 0x98a927 */
  if ((sf == of)) goto L_98a927;
L_98a921: /* 98a921: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a927: /* 98a927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a929: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a92f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a933: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a939: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a93d: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a941: jge 0x98a949 */
  if ((sf == of)) goto L_98a949;
L_98a943: /* 98a943: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a949: /* 98a949: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a94f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a953: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a959: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a95d: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a961: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 98a965: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 98a969: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a96d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a96f: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a973: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 98a977: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a979: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a97b: fabs  */
  ST0 = fabs(ST0);
/* 98a97d: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a985: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a988: jne 0x98a9b0 */
  if (!zf) goto L_98a9b0;
L_98a98a: /* 98a98a: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a98c: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a992: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a996: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a998: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a99c: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a9a0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a9a2: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a9a6: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a9aa: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a9ae: jmp 0x98a9b2 */
  goto L_98a9b2;
L_98a9b0: /* 98a9b0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a9b2: /* 98a9b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a9b3: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 98a9b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a9b8: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 98a9bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a9bd: call 0x987960 */
  esp -= 4; W32(esp, 0x98a9c2u); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a9c2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a9c6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a9c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a9cb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9cc: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a9cf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9d1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a9d5: jl 0x98a8e0 */
  if ((sf != of)) goto L_98a8e0;
L_98a9db: /* 98a9db: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a9df: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a9e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9e3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9e5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a9e9: jl 0x98a8c0 */
  if ((sf != of)) goto L_98a8c0;
L_98a9ef: /* 98a9ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a9f2: cmp word ptr [eax + 0x237e], 0x1f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x237eu))); uint16_t b = (uint16_t)(0x1fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a9fa: jne 0x98aa09 */
  if (!zf) goto L_98aa09;
L_98a9fc: /* 98a9fc: movsx edx, word ptr [eax + 0x2380] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x2380u)));
/* 98aa03: cmp dword ptr [esp + 0x2c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa07: jge 0x98aa15 */
  if ((sf == of)) goto L_98aa15;
L_98aa09: /* 98aa09: mov al, byte ptr [esp + 0x37] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x37u))) & 0xffu);
/* 98aa0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa0f: je 0x989c82 */
  if (zf) goto L_989c82;
L_98aa15: /* 98aa15: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 98aa1c: mov byte ptr [esp + 0x934], 1 */
  W8((uint32_t)(esp + 0x934u), 0x1u);
/* 98aa24: call 0x98e840 */
  esp -= 4; W32(esp, 0x98aa29u); SPILL(); f_98e840(); if (g_unwind) return; RELOAD();
/* 98aa29: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 98aa2d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98aa31: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98aa35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98aa36: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa38: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98aa3c: jl 0x989b20 */
  if ((sf != of)) goto L_989b20;
L_98aa42: /* 98aa42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98aa43: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98aa48u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98aa48: mov eax, dword ptr [esp + 0xc8] */
  eax = R32((uint32_t)(esp + 0xc8u));
/* 98aa4f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98aa52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa54: je 0x98aa5f */
  if (zf) goto L_98aa5f;
L_98aa56: /* 98aa56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98aa57: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98aa5cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
L_98aa5c: /* 98aa5c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98aa5f: /* 98aa5f: mov ecx, dword ptr [esp + 0x92c] */
  ecx = R32((uint32_t)(esp + 0x92cu));
/* 98aa66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98aa67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98aa68: mov eax, 1 */
  eax = 0x1u;
/* 98aa6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98aa74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98aa75: mov esp, ebp */
  esp = ebp;
/* 98aa77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98aa78: ret  */
  esp += 4; SPILL(); return;
}

void f_989969(void) {
  LOAD_REGS();
  goto L_989969;
L_989545: /* 989545: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989548: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 98954b: movsx eax, word ptr [eax + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x34u)));
/* 98954f: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 989553: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 989557: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 98955a: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 98955d: cmp word ptr [ecx + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989565: jne 0x989569 */
  if (!zf) goto L_989569;
L_989567: /* 989567: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
L_989569: /* 989569: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 98956d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98956e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 989571: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989572: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989573: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 989577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989578: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989579: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98957a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98957b: call 0x98f100 */
  esp -= 4; W32(esp, 0x989580u); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 989580: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 989584: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989587: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98958a: ja 0x989a3c */
  if ((!cf && !zf)) goto L_989a3c;
L_989590: /* 989590: mov ecx, eax */
  ecx = eax;
/* 989592: jmp dword ptr [ecx*4 + 0x98aab0] */
  switch (R32((uint32_t)(ecx*4 + 0x98aab0u))) {
    case 0x989599u: goto L_989599;
    case 0x9895bau: goto L_9895ba;
    case 0x9895dbu: goto L_9895db;
    case 0x9895fcu: goto L_9895fc;
    case 0x989625u: goto L_989625;
    case 0x9896b8u: goto L_9896b8;
    case 0x989743u: goto L_989743;
    case 0x9897c2u: goto L_9897c2;
    case 0x989841u: goto L_989841;
    case 0x98987eu: goto L_98987e;
    case 0x9898dfu: goto L_9898df;
    case 0x989be6u: goto L_989be6;
    case 0x989bfbu: goto L_989bfb;
    case 0x989c10u: goto L_989c10;
    case 0x989c27u: goto L_989c27;
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989592, R32((uint32_t)(ecx*4 + 0x98aab0u))); return;
  }
L_989599: /* 989599: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98959c: xor eax, eax */
  eax = 0;
/* 98959e: mov al, byte ptr [edx + 0x23a6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23a6u))) & 0xffu);
/* 9895a4: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 9895a8: mov edx, edi */
  edx = edi;
/* 9895aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9895ab: call 0x9875e0 */
  esp -= 4; W32(esp, 0x9895b0u); SPILL(); f_9875e0(); if (g_unwind) return; RELOAD();
/* 9895b0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9895b3: mov ebx, eax */
  ebx = eax;
/* 9895b5: jmp 0x989a3c */
  goto L_989a3c;
L_9895ba: /* 9895ba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9895bd: xor edx, edx */
  edx = 0;
/* 9895bf: mov dl, byte ptr [ecx + 0x23a6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a6u))) & 0xffu);
/* 9895c5: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 9895c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9895ca: mov edx, edi */
  edx = edi;
/* 9895cc: call 0x987710 */
  esp -= 4; W32(esp, 0x9895d1u); SPILL(); f_987710(); if (g_unwind) return; RELOAD();
/* 9895d1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9895d4: mov ebx, eax */
  ebx = eax;
/* 9895d6: jmp 0x989a3c */
  goto L_989a3c;
L_9895db: /* 9895db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9895de: xor ecx, ecx */
  ecx = 0;
/* 9895e0: mov cl, byte ptr [eax + 0x23a6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a6u))) & 0xffu);
/* 9895e6: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 9895ea: mov edx, edi */
  edx = edi;
/* 9895ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9895ed: call 0x9877f0 */
  esp -= 4; W32(esp, 0x9895f2u); SPILL(); f_9877f0(); if (g_unwind) return; RELOAD();
/* 9895f2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9895f5: mov ebx, eax */
  ebx = eax;
/* 9895f7: jmp 0x989a3c */
  goto L_989a3c;
L_9895fc: /* 9895fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9895ff: xor edx, edx */
  edx = 0;
/* 989601: mov dl, byte ptr [eax + 0x23a7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a7u))) & 0xffu);
/* 989607: movzx eax, byte ptr [eax + 0x23a6] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x23a6u)));
/* 98960e: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989612: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989614: mov edx, edi */
  edx = edi;
/* 989616: call 0x987510 */
  esp -= 4; W32(esp, 0x98961bu); SPILL(); f_987510(); if (g_unwind) return; RELOAD();
/* 98961b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98961e: mov ebx, eax */
  ebx = eax;
/* 989620: jmp 0x989a3c */
  goto L_989a3c;
L_989625: /* 989625: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989628: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 98962b: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98962d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98962e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989632: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989637u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989637: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98963a: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98963d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989640: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989643: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989645: mov ebx, eax */
  ebx = eax;
/* 989647: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 98964b: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989653: jle 0x989a3c */
  if ((zf || sf != of)) goto L_989a3c;
L_989659: /* 989659: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_989660: /* 989660: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989662: mov edx, eax */
  edx = eax;
/* 989664: mov esi, eax */
  esi = eax;
/* 989666: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989669: shr esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 98966c: and edx, 0xf000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989672: and esi, 0xf00 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf00u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989678: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98967a: mov esi, eax */
  esi = eax;
/* 98967c: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98967f: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989682: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989685: and esi, 0xf0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 98968b: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98968d: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98968f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989693: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989696: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989699: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98969c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98969f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9896a3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9896a7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9896aa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9896ab: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9896ad: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9896b1: jl 0x989660 */
  if ((sf != of)) goto L_989660;
L_9896b3: /* 9896b3: jmp 0x989a3c */
  goto L_989a3c;
L_9896b8: /* 9896b8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9896bb: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 9896be: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9896c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9896c1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9896c5: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9896cau); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9896ca: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9896cd: mov ebx, eax */
  ebx = eax;
/* 9896cf: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9896d2: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 9896d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9896d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9896da: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 9896de: mov edx, ebx */
  edx = ebx;
/* 9896e0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9896e8: jle 0x989a3c */
  if ((zf || sf != of)) goto L_989a3c;
L_9896ee: /* 9896ee: mov edi, edi */
  edi = edi;
L_9896f0: /* 9896f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9896f2: mov esi, eax */
  esi = eax;
/* 9896f4: shr esi, 9 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 9896f7: mov ebx, eax */
  ebx = eax;
/* 9896f9: shr ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 9896fc: and esi, 0x7c00 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989702: and ebx, 0x3e0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 989708: or esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98970a: mov ebx, eax */
  ebx = eax;
/* 98970c: shr ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98970f: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989712: and ebx, 0x1f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 989715: or esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 989717: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98971c: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98971e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989722: mov word ptr [edx], si */
  W16((uint32_t)(edx), (esi & 0xffffu));
/* 989725: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 989728: imul esi, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  esi = (uint32_t)r;
  }
/* 98972b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98972e: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 989731: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989732: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989734: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989738: jl 0x9896f0 */
  if ((sf != of)) goto L_9896f0;
L_98973a: /* 98973a: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 98973e: jmp 0x989a3c */
  goto L_989a3c;
L_989743: /* 989743: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989746: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989749: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98974b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98974c: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989750: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989755u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989755: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989758: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98975b: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98975e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989761: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989763: mov ebx, eax */
  ebx = eax;
/* 989765: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989769: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989771: jle 0x989a3c */
  if ((zf || sf != of)) goto L_989a3c;
L_989777: /* 989777: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989779: mov edx, eax */
  edx = eax;
/* 98977b: mov esi, eax */
  esi = eax;
/* 98977d: shr edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989780: and edx, 0x7c00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989786: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989789: shr esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 98978c: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98978f: and esi, 0x3e0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989795: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989797: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989799: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98979d: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 9897a0: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 9897a3: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 9897a6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9897a9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9897ad: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9897b1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9897b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9897b5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9897b7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9897bb: jl 0x989777 */
  if ((sf != of)) goto L_989777;
L_9897bd: /* 9897bd: jmp 0x989a3c */
  goto L_989a3c;
L_9897c2: /* 9897c2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9897c5: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 9897c8: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9897ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9897cb: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9897cf: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9897d4u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9897d4: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9897d7: mov ebx, eax */
  ebx = eax;
/* 9897d9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9897dc: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 9897df: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9897e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9897e4: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 9897e8: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9897f0: jle 0x989a3c */
  if ((zf || sf != of)) goto L_989a3c;
L_9897f6: /* 9897f6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9897f8: mov edx, eax */
  edx = eax;
/* 9897fa: mov esi, eax */
  esi = eax;
/* 9897fc: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 9897ff: and edx, 0xf800 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989805: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989808: shr esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 98980b: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98980e: and esi, 0x7e0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989814: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989816: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989818: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98981c: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 98981f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989822: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989825: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989828: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98982c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989830: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989833: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989834: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989836: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98983a: jl 0x9897f6 */
  if ((sf != of)) goto L_9897f6;
L_98983c: /* 98983c: jmp 0x989a3c */
  goto L_989a3c;
L_989841: /* 989841: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989844: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989847: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98984a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98984b: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98984f: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989854u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989854: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989857: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 98985a: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98985d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 989860: mov ebx, eax */
  ebx = eax;
/* 989862: mov eax, ecx */
  eax = ecx;
/* 989864: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 989867: mov edi, ebx */
  edi = ebx;
/* 989869: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 98986b: mov ecx, eax */
  ecx = eax;
/* 98986d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989870: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 989873: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 989875: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 989879: jmp 0x989a3c */
  goto L_989a3c;
L_98987e: /* 98987e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989881: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989884: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 989887: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989888: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98988c: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989891u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989891: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989894: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 989897: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98989a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98989d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98989f: mov ebx, eax */
  ebx = eax;
/* 9898a1: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9898a9: jle 0x989a3c */
  if ((zf || sf != of)) goto L_989a3c;
L_9898af: /* 9898af: nop  */
L_9898b0: /* 9898b0: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 9898b2: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9898b4: mov cl, byte ptr [esi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 9898b7: mov byte ptr [eax + 1], cl */
  W8((uint32_t)(eax + 0x1u), (ecx & 0xffu));
/* 9898ba: mov dl, byte ptr [esi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 9898bd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9898c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9898c2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9898c3: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 9898c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9898c6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9898c9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9898ca: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9898ce: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 9898d1: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 9898d4: cmp dword ptr [esp + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9898d8: jl 0x9898b0 */
  if ((sf != of)) goto L_9898b0;
L_9898da: /* 9898da: jmp 0x989a3c */
  goto L_989a3c;
L_9898df: /* 9898df: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 9898e3: call 0x9892e0 */
  esp -= 4; W32(esp, 0x9898e8u); SPILL(); f_9892e0(); if (g_unwind) return; RELOAD();
/* 9898e8: xor esi, esi */
  esi = 0;
/* 9898ea: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 9898ee: mov dword ptr [esp + 0x934], esi */
  W32((uint32_t)(esp + 0x934u), esi);
/* 9898f5: mov dword ptr [esp + 0x68], esi */
  W32((uint32_t)(esp + 0x68u), esi);
/* 9898f9: call 0x988fb0 */
  esp -= 4; W32(esp, 0x9898feu); SPILL(); f_988fb0(); if (g_unwind) return; RELOAD();
/* 9898fe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989901: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 989904: cmp word ptr [edx + 0x34], 3 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + 0x34u))); uint16_t b = (uint16_t)(0x3u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989909: movzx eax, byte ptr [eax + 0x23a4] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x23a4u)));
/* 989910: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 989913: mov byte ptr [esp + 0x1c], cl */
  W8((uint32_t)(esp + 0x1cu), (ecx & 0xffu));
/* 989917: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98991b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98991c: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98991f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989920: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989922: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 989924: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 989926: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 98992a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98992b: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98992e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 989930: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989931: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989932: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989933: call 0x98f5b0 */
  esp -= 4; W32(esp, 0x989938u); SPILL(); f_98f5b0(); if (g_unwind) return; RELOAD();
/* 989938: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 98993f: mov ebx, eax */
  ebx = eax;
/* 989941: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989944: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989947: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 98994b: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 989952: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989955: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 989958: jne 0x98999f */
  if (!zf) goto L_98999f;
L_98995a: /* 98995a: xor eax, eax */
  eax = 0;
/* 98995c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98995e: jle 0x9899df */
  if ((zf || sf != of)) goto L_9899df;
L_989960: /* 989960: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 989964: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 989967: jmp 0x989970 */
  goto L_989970;
L_989969: /* 989969: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_989970: /* 989970: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 989973: mov byte ptr [esp + eax*4 + 0x12a], dl */
  W8((uint32_t)(esp + eax*4 + 0x12au), (edx & 0xffu));
/* 98997a: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98997c: mov byte ptr [esp + eax*4 + 0x129], dl */
  W8((uint32_t)(esp + eax*4 + 0x129u), (edx & 0xffu));
/* 989983: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 989986: mov byte ptr [esp + eax*4 + 0x128], dl */
  W8((uint32_t)(esp + eax*4 + 0x128u), (edx & 0xffu));
/* 98998d: mov byte ptr [esp + eax*4 + 0x12b], 0xff */
  W8((uint32_t)(esp + eax*4 + 0x12bu), 0xffu);
/* 989995: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989996: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 989999: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98999b: jl 0x989970 */
  if ((sf != of)) goto L_989970;
L_98999d: /* 98999d: jmp 0x9899df */
  goto L_9899df;
L_98999f: /* 98999f: xor eax, eax */
  eax = 0;
/* 9899a1: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9899a3: jle 0x9899df */
  if ((zf || sf != of)) goto L_9899df;
L_9899a5: /* 9899a5: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 9899a9: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9899ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9899b0: /* 9899b0: mov dl, byte ptr [esi - 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffff8u))) & 0xffu);
/* 9899b3: mov byte ptr [esp + eax*4 + 0x12a], dl */
  W8((uint32_t)(esp + eax*4 + 0x12au), (edx & 0xffu));
/* 9899ba: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 9899bd: mov byte ptr [esp + eax*4 + 0x129], dl */
  W8((uint32_t)(esp + eax*4 + 0x129u), (edx & 0xffu));
/* 9899c4: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 9899c6: mov byte ptr [esp + eax*4 + 0x128], dl */
  W8((uint32_t)(esp + eax*4 + 0x128u), (edx & 0xffu));
/* 9899cd: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 9899d0: mov byte ptr [esp + eax*4 + 0x12b], dl */
  W8((uint32_t)(esp + eax*4 + 0x12bu), (edx & 0xffu));
/* 9899d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9899d8: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9899db: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9899dd: jl 0x9899b0 */
  if ((sf != of)) goto L_9899b0;
L_9899df: /* 9899df: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 9899e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9899e4: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 9899e9: je 0x9899fe */
  if (zf) goto L_9899fe;
L_9899eb: /* 9899eb: xor esi, esi */
  esi = 0;
/* 9899ed: lea eax, [esp + 0x12c] */
  eax = (uint32_t)(esp + 0x12cu);
/* 9899f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9899f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9899f6: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x9899f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9899f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9899fc: jmp 0x989a14 */
  goto L_989a14;
L_9899fe: /* 9899fe: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 989a01: lea ecx, [esp + 0x12c] */
  ecx = (uint32_t)(esp + 0x12cu);
/* 989a08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989a09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989a0a: call 0x987a70 */
  esp -= 4; W32(esp, 0x989a0fu); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
/* 989a0f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989a12: xor esi, esi */
  esi = 0;
L_989a14: /* 989a14: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 989a18: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 989a1a: mov dword ptr [esp + 0x934], 0xffffffff */
  W32((uint32_t)(esp + 0x934u), 0xffffffffu);
/* 989a25: je 0x989a30 */
  if (zf) goto L_989a30;
L_989a27: /* 989a27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989a28: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x989a2du); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 989a2d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989a30: /* 989a30: mov dword ptr [esp + 0x70], esi */
  W32((uint32_t)(esp + 0x70u), esi);
/* 989a34: mov dword ptr [esp + 0x74], esi */
  W32((uint32_t)(esp + 0x74u), esi);
/* 989a38: mov dword ptr [esp + 0x78], esi */
  W32((uint32_t)(esp + 0x78u), esi);
L_989a3c: /* 989a3c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 989a3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 989a41: je 0x989a4f */
  if (zf) goto L_989a4f;
L_989a43: /* 989a43: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 989a47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989a48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989a4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989a4b: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x989a4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 989a4d: jmp 0x989a76 */
  goto L_989a76;
L_989a4f: /* 989a4f: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 989a53: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 989a55: je 0x989a67 */
  if (zf) goto L_989a67;
L_989a57: /* 989a57: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 989a5b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 989a5e: mov eax, ebx */
  eax = ebx;
/* 989a60: call 0x9878d0 */
  esp -= 4; W32(esp, 0x989a65u); SPILL(); f_9878d0(); if (g_unwind) return; RELOAD();
/* 989a65: jmp 0x989a79 */
  goto L_989a79;
L_989a67: /* 989a67: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 989a6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989a6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989a6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989a71: call 0x987a70 */
  esp -= 4; W32(esp, 0x989a76u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
L_989a76: /* 989a76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989a79: /* 989a79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989a7a: call 0x99cf5a */
  esp -= 4; W32(esp, 0x989a7fu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 989a7f: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 989a83: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 989a87: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989a8a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989a8b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989a8d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 989a91: jl 0x989545 */
  if ((sf != of)) goto L_989545;
L_989a97: /* 989a97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989a98: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x989a9du); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 989a9d: jmp 0x98aa5c */
  goto L_98aa5c;
L_989b20: /* 989b20: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 989b27: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 989b2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b2c: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 989b30: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 989b34: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x989b39u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 989b39: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 989b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b40: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x989b45u); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 989b45: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 989b48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989b4b: cmp word ptr [ebx + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989b53: mov edi, eax */
  edi = eax;
/* 989b55: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 989b59: jne 0x989b72 */
  if (!zf) goto L_989b72;
L_989b5b: /* 989b5b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 989b5e: movsx eax, word ptr [ecx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x34u)));
/* 989b62: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b67: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b6a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989b6c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 989b70: jmp 0x989b85 */
  goto L_989b85;
L_989b72: /* 989b72: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 989b75: movsx eax, word ptr [edx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0x34u)));
/* 989b79: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b7e: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b81: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
L_989b85: /* 989b85: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 989b89: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 989b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989b8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989b8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b8f: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 989b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b97: call 0x98f100 */
  esp -= 4; W32(esp, 0x989b9cu); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 989b9c: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 989ba3: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 989ba7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989baa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 989bac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989bad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989bae: mov byte ptr [0xcf2fec], 1 */
  W8((uint32_t)(0xcf2fecu), 0x1u);
/* 989bb5: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 989bb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989bba: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 989bc1: call 0x98eed0 */
  esp -= 4; W32(esp, 0x989bc6u); SPILL(); f_98eed0(); if (g_unwind) return; RELOAD();
/* 989bc6: movsx eax, word ptr [ebx + 0x2382] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebx + 0x2382u)));
/* 989bcd: add eax, 0xffffff7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7au);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989bd2: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989bd5: mov byte ptr [esp + 0x934], 2 */
  W8((uint32_t)(esp + 0x934u), 0x2u);
/* 989bdd: ja 0x989c3e */
  if ((!cf && !zf)) goto L_989c3e;
L_989bdf: /* 989bdf: jmp dword ptr [eax*4 + 0x98aae4] */
  switch (R32((uint32_t)(eax*4 + 0x98aae4u))) {
    case 0x989be6u: goto L_989be6;
    case 0x989bfbu: goto L_989bfb;
    case 0x989c10u: goto L_989c10;
    case 0x989c27u: goto L_989c27;
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989bdf, R32((uint32_t)(eax*4 + 0x98aae4u))); return;
  }
L_989be6: /* 989be6: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989bed: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989bf4: call 0x98e5d0 */
  esp -= 4; W32(esp, 0x989bf9u); SPILL(); f_98e5d0(); if (g_unwind) return; RELOAD();
/* 989bf9: jmp 0x989c51 */
  goto L_989c51;
L_989bfb: /* 989bfb: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c02: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c09: call 0x98e240 */
  esp -= 4; W32(esp, 0x989c0eu); SPILL(); f_98e240(); if (g_unwind) return; RELOAD();
/* 989c0e: jmp 0x989c51 */
  goto L_989c51;
L_989c10: /* 989c10: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c19: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c20: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c25u); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c25: jmp 0x989c51 */
  goto L_989c51;
L_989c27: /* 989c27: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 989c2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c30: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c37: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c3cu); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c3c: jmp 0x989c51 */
  goto L_989c51;
L_989c3e: /* 989c3e: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c45: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c4c: call 0x98e120 */
  esp -= 4; W32(esp, 0x989c51u); SPILL(); f_98e120(); if (g_unwind) return; RELOAD();
L_989c51: /* 989c51: mov byte ptr [0xcf2fec], 0 */
  W8((uint32_t)(0xcf2fecu), 0x0u);
/* 989c58: fild dword ptr [ebx + 0x23a0] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x23a0u)); FPUSH(v); }
/* 989c5e: mov byte ptr [esp + 0x37], 0 */
  W8((uint32_t)(esp + 0x37u), 0x0u);
/* 989c63: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 989c6b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 989c71: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 989c77: fst dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0);
/* 989c7e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_989c82: /* 989c82: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989c85: mov al, byte ptr [ecx + 0x23a5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a5u))) & 0xffu);
/* 989c8b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 989c8d: je 0x989ce3 */
  if (zf) goto L_989ce3;
L_989c8f: /* 989c8f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989c92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989c94: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989c97: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989c9f: jle 0x989ce3 */
  if ((zf || sf != of)) goto L_989ce3;
L_989ca1: /* 989ca1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989ca3: xor ebx, ebx */
  ebx = 0;
/* 989ca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ca7: jle 0x989cd3 */
  if ((zf || sf != of)) goto L_989cd3;
L_989ca9: /* 989ca9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_989cb0: /* 989cb0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 989cb4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 989cb7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989cba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989cbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989cbf: call 0x987a90 */
  esp -= 4; W32(esp, 0x989cc4u); SPILL(); f_987a90(); if (g_unwind) return; RELOAD();
/* 989cc4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 989cc6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989cc8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ccb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 989cce: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 989ccf: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cd1: jl 0x989cb0 */
  if ((sf != of)) goto L_989cb0;
L_989cd3: /* 989cd3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989cd7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989cda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989cdb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cdd: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ce1: jl 0x989ca1 */
  if ((sf != of)) goto L_989ca1;
L_989ce3: /* 989ce3: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 989ce7: xor ebx, ebx */
  ebx = 0;
/* 989ce9: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989cec: ja 0x989d11 */
  if ((!cf && !zf)) goto L_989d11;
L_989cee: /* 989cee: jmp dword ptr [eax*4 + 0x98aaf4] */
  switch (R32((uint32_t)(eax*4 + 0x98aaf4u))) {
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989cee, R32((uint32_t)(eax*4 + 0x98aaf4u))); return;
  }
L_989cf5: /* 989cf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 989cf8: xor eax, eax */
  eax = 0;
/* 989cfa: mov al, byte ptr [edx + 0x23a6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23a6u))) & 0xffu);
/* 989d00: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d04: mov edx, edi */
  edx = edi;
/* 989d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d07: call 0x9875e0 */
  esp -= 4; W32(esp, 0x989d0cu); SPILL(); f_9875e0(); if (g_unwind) return; RELOAD();
L_989d0c: /* 989d0c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989d0f: /* 989d0f: mov ebx, eax */
  ebx = eax;
L_989d11: /* 989d11: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 989d14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 989d16: je 0x98a163 */
  if (zf) goto L_98a163;
L_989d1c: /* 989d1c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 989d20: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 989d24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989d27: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x989d29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 989d29: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 989d2c: jmp 0x98a189 */
  goto L_98a189;
L_989d31: /* 989d31: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989d34: xor edx, edx */
  edx = 0;
/* 989d36: mov dl, byte ptr [ecx + 0x23a6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a6u))) & 0xffu);
/* 989d3c: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d41: mov edx, edi */
  edx = edi;
/* 989d43: call 0x987710 */
  esp -= 4; W32(esp, 0x989d48u); SPILL(); f_987710(); if (g_unwind) return; RELOAD();
/* 989d48: jmp 0x989d0c */
  goto L_989d0c;
L_989d4a: /* 989d4a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d4d: xor ecx, ecx */
  ecx = 0;
/* 989d4f: mov cl, byte ptr [eax + 0x23a6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a6u))) & 0xffu);
/* 989d55: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d59: mov edx, edi */
  edx = edi;
/* 989d5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d5c: call 0x9877f0 */
  esp -= 4; W32(esp, 0x989d61u); SPILL(); f_9877f0(); if (g_unwind) return; RELOAD();
/* 989d61: jmp 0x989d0c */
  goto L_989d0c;
L_989d63: /* 989d63: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d66: xor edx, edx */
  edx = 0;
/* 989d68: mov dl, byte ptr [eax + 0x23a7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a7u))) & 0xffu);
/* 989d6e: movzx eax, byte ptr [eax + 0x23a6] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x23a6u)));
/* 989d75: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d7b: mov edx, edi */
  edx = edi;
/* 989d7d: call 0x987510 */
  esp -= 4; W32(esp, 0x989d82u); SPILL(); f_987510(); if (g_unwind) return; RELOAD();
/* 989d82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989d85: jmp 0x989d0f */
  goto L_989d0f;
L_989d87: /* 989d87: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989d8a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989d8d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d90: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989d94: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989d99u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989d99: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989d9c: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989d9f: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989da2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989da5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989da7: mov ebx, eax */
  ebx = eax;
/* 989da9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989dad: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989db5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989dbb: /* 989dbb: jmp 0x989dc0 */
  goto L_989dc0;
L_989dc0: /* 989dc0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989dc2: mov edx, eax */
  edx = eax;
/* 989dc4: mov esi, eax */
  esi = eax;
/* 989dc6: shr edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989dc9: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989dcc: and edx, 0xf00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989dd2: and esi, 0xf0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dd8: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dda: mov esi, eax */
  esi = eax;
/* 989ddc: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ddf: shr esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989de2: and eax, 0xf000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989de7: and esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dea: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dec: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989df2: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989df5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989df8: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989dfb: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989dfe: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e02: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e06: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e0a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e0c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989e10: jl 0x989dc0 */
  if ((sf != of)) goto L_989dc0;
L_989e12: /* 989e12: jmp 0x989d11 */
  goto L_989d11;
L_989e17: /* 989e17: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e1a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e1d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989e20: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989e24: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989e29u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989e29: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989e2c: mov ebx, eax */
  ebx = eax;
/* 989e2e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e31: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e34: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989e37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989e39: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989e3d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989e45: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989e4b: /* 989e4b: jmp 0x989e50 */
  goto L_989e50;
L_989e50: /* 989e50: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989e52: mov edx, eax */
  edx = eax;
/* 989e54: mov esi, eax */
  esi = eax;
/* 989e56: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989e59: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e5c: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989e62: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e65: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e67: mov esi, eax */
  esi = eax;
/* 989e69: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989e6c: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e6f: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989e74: and esi, 0x8000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e7a: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7c: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989e82: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989e85: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989e88: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989e8b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989e8e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e92: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e96: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e9a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e9c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ea0: jl 0x989e50 */
  if ((sf != of)) goto L_989e50;
L_989ea2: /* 989ea2: jmp 0x989d11 */
  goto L_989d11;
L_989ea7: /* 989ea7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989eaa: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ead: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989eb0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989eb4: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989eb9u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989eb9: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989ebc: mov ebx, eax */
  ebx = eax;
/* 989ebe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989ec1: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ec4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ec9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989ecd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989ed5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989edb: /* 989edb: jmp 0x989ee0 */
  goto L_989ee0;
L_989ee0: /* 989ee0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989ee2: mov edx, eax */
  edx = eax;
/* 989ee4: mov esi, eax */
  esi = eax;
/* 989ee6: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989ee9: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989eef: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ef2: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989ef5: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989efa: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989efd: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989eff: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f05: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f08: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f0b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f0e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f11: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f15: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f19: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f1c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f1d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f1f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989f23: jl 0x989ee0 */
  if ((sf != of)) goto L_989ee0;
L_989f25: /* 989f25: jmp 0x989d11 */
  goto L_989d11;
L_989f2a: /* 989f2a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f2d: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f30: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989f33: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989f37: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989f3cu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989f3c: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989f3f: mov ebx, eax */
  ebx = eax;
/* 989f41: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f44: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989f4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989f4c: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989f50: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989f58: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989f5e: /* 989f5e: mov edi, edi */
  edi = edi;
L_989f60: /* 989f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989f62: mov edx, eax */
  edx = eax;
/* 989f64: mov esi, eax */
  esi = eax;
/* 989f66: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989f69: and edx, 0x7e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989f6f: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989f72: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989f75: and eax, 0xf800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989f7a: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989f7d: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f7f: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f81: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f85: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f88: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f8b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f8e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f91: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f95: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f99: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f9d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f9f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989fa3: jl 0x989f60 */
  if ((sf != of)) goto L_989f60;
L_989fa5: /* 989fa5: jmp 0x989d11 */
  goto L_989d11;
L_989faa: /* 989faa: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fad: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fb0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989fb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989fb4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989fb8: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989fbdu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989fbd: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989fc0: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 989fc3: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989fc6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 989fc9: mov ebx, eax */
  ebx = eax;
/* 989fcb: mov eax, ecx */
  eax = ecx;
/* 989fcd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 989fd0: mov edi, ebx */
  edi = ebx;
/* 989fd2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 989fd4: mov ecx, eax */
  ecx = eax;
/* 989fd6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989fd9: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 989fdc: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 989fde: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 989fe2: jmp 0x989d11 */
  goto L_989d11;
L_989fe7: /* 989fe7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fea: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 989ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989ff1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989ff5: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989ffau); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989ffa: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989ffd: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a000: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a003: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a006: xor ecx, ecx */
  ecx = 0;
/* 98a008: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a00a: mov ebx, eax */
  ebx = eax;
/* 98a00c: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_98a012: /* 98a012: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a014: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a016: mov dl, byte ptr [esi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 98a019: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a01a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a01c: mov dl, byte ptr [esi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 98a01f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a020: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a022: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a025: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a028: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a029: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a02c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a02d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a02f: jl 0x98a012 */
  if ((sf != of)) goto L_98a012;
L_98a031: /* 98a031: jmp 0x989d11 */
  goto L_989d11;
L_98a036: /* 98a036: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a03c: mov esi, 3 */
  esi = 0x3u;
/* 98a041: cmp word ptr [ecx + 0x34], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x34u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a045: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98a048: mov byte ptr [esp + 0xa4], dl */
  W8((uint32_t)(esp + 0xa4u), (edx & 0xffu));
/* 98a04f: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 98a056: xor edx, edx */
  edx = 0;
/* 98a058: mov dl, byte ptr [eax + 0x23a4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a4u))) & 0xffu);
/* 98a05e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a05f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a062: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98a069: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a06a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a06c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a06e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 98a070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a071: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98a074: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a076: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a077: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a079: call 0x98f5b0 */
  esp -= 4; W32(esp, 0x98a07eu); SPILL(); f_98f5b0(); if (g_unwind) return; RELOAD();
/* 98a07e: mov ebx, eax */
  ebx = eax;
/* 98a080: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a083: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 98a086: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 98a08a: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 98a08e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a091: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a093: jne 0x989d11 */
  if (!zf) goto L_989d11;
L_98a099: /* 98a099: cmp dword ptr [esp + 0xb8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xb8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a0a0: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 98a0a7: jne 0x98a0ef */
  if (!zf) goto L_98a0ef;
L_98a0a9: /* 98a0a9: xor eax, eax */
  eax = 0;
/* 98a0ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0ad: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0b3: /* 98a0b3: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0ba: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a0c0: /* 98a0c0: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a0c3: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a0ca: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a0cc: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a0d3: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a0d6: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a0dd: mov byte ptr [esp + eax*4 + 0x52b], 0xff */
  W8((uint32_t)(esp + eax*4 + 0x52bu), 0xffu);
/* 98a0e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a0e6: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0e9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a0eb: jl 0x98a0c0 */
  if ((sf != of)) goto L_98a0c0;
L_98a0ed: /* 98a0ed: jmp 0x98a12f */
  goto L_98a12f;
L_98a0ef: /* 98a0ef: xor eax, eax */
  eax = 0;
/* 98a0f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0f3: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0f5: /* 98a0f5: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0fc: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0ff: nop  */
L_98a100: /* 98a100: mov dl, byte ptr [esi - 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffff8u))) & 0xffu);
/* 98a103: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a10a: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a10d: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a114: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a116: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a11d: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a120: mov byte ptr [esp + eax*4 + 0x52b], dl */
  W8((uint32_t)(esp + eax*4 + 0x52bu), (edx & 0xffu));
/* 98a127: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a128: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a12b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a12d: jl 0x98a100 */
  if ((sf != of)) goto L_98a100;
L_98a12f: /* 98a12f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 98a132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a134: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 98a139: je 0x98a14f */
  if (zf) goto L_98a14f;
L_98a13b: /* 98a13b: lea ecx, [esp + 0x52c] */
  ecx = (uint32_t)(esp + 0x52cu);
/* 98a142: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98a144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a145: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x98a147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98a147: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a14a: jmp 0x989d11 */
  goto L_989d11;
L_98a14f: /* 98a14f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a152: lea edx, [esp + 0x52c] */
  edx = (uint32_t)(esp + 0x52cu);
/* 98a159: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a15a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a15b: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a160u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
/* 98a160: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a163: /* 98a163: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 98a167: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a169: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a16c: je 0x98a17d */
  if (zf) goto L_98a17d;
L_98a16e: /* 98a16e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98a172: mov eax, ebx */
  eax = ebx;
/* 98a174: mov edx, esi */
  edx = esi;
/* 98a176: call 0x9878d0 */
  esp -= 4; W32(esp, 0x98a17bu); SPILL(); f_9878d0(); if (g_unwind) return; RELOAD();
/* 98a17b: jmp 0x98a18c */
  goto L_98a18c;
L_98a17d: /* 98a17d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98a181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a182: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a184: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a189u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
L_98a189: /* 98a189: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a18c: /* 98a18c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a18d: call 0x99cf5a */
  esp -= 4; W32(esp, 0x98a192u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 98a192: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98a196: mov al, byte ptr [esi + 0x232d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x232du))) & 0xffu);
/* 98a19c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a19f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a1a0: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1a2: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 98a1a6: jne 0x98a1b3 */
  if (!zf) goto L_98a1b3;
L_98a1a8: /* 98a1a8: fld dword ptr [esi + ecx*4 + 0x2330] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x2330u)); FPUSH(v); }
/* 98a1af: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a1b3: /* 98a1b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98a1b9: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 98a1bd: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1c0: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 98a1c4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 98a1c8: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1ca: /* 98a1ca: cmp dword ptr [esp + 0x30], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1cf: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1d1: /* 98a1d1: mov byte ptr [esp + 0x37], 1 */
  W8((uint32_t)(esp + 0x37u), 0x1u);
/* 98a1d6: jmp 0x98a9ef */
  goto L_98a9ef;
L_98a1db: /* 98a1db: cmp word ptr [esi + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1e3: jne 0x98a252 */
  if (!zf) goto L_98a252;
L_98a1e5: /* 98a1e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a1e6: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98a1ebu); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98a1eb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a1ee: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98a1f1: movsx ecx, word ptr [eax + 0x34] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x34u)));
/* 98a1f5: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 98a1f9: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 98a1fc: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 98a1ff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a200: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a202: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a204: mov edi, eax */
  edi = eax;
/* 98a206: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 98a20a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a20c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a20d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a20e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a210: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 98a214: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a216: mov ebx, eax */
  ebx = eax;
/* 98a218: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a219: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a21a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a21b: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 98a21f: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 98a223: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 98a227: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x98a22cu); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 98a22c: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98a230: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98a233: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a234: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a237: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a239: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a23a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a23b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a23c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a23d: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 98a241: call 0x98f100 */
  esp -= 4; W32(esp, 0x98a246u); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 98a246: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 98a24a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a24d: jmp 0x98a365 */
  goto L_98a365;
L_98a252: /* 98a252: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a255: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a258: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25a: /* 98a25a: cmp dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a25d: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25f: /* 98a25f: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 98a266: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98a26a: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 98a26d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a270: imul ecx, dword ptr [eax] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax)));
  ecx = (uint32_t)r;
  }
/* 98a273: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 98a276: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98a279: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98a27c: mov edx, ecx */
  edx = ecx;
/* 98a27e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98a281: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 98a283: mov ecx, edx */
  ecx = edx;
/* 98a285: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98a288: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 98a28a: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98a28e: jmp 0x98a333 */
  goto L_98a333;
L_98a293: /* 98a293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a295: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a298: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a29c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a2a4: jle 0x98a333 */
  if ((zf || sf != of)) goto L_98a333;
L_98a2aa: /* 98a2aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98a2b0: /* 98a2b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2b2: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a2b5: mov edx, eax */
  edx = eax;
/* 98a2b7: imul edx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  edx = (uint32_t)r;
  }
/* 98a2bc: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a2bf: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2c3: mov esi, ebx */
  esi = ebx;
/* 98a2c5: je 0x98a2ca */
  if (zf) goto L_98a2ca;
L_98a2c7: /* 98a2c7: lea esi, [ebx + eax*4] */
  esi = (uint32_t)(ebx + eax*4);
L_98a2ca: /* 98a2ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a2cc: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a2d4: jle 0x98a31d */
  if ((zf || sf != of)) goto L_98a31d;
L_98a2d6: /* 98a2d6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2d8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2db: mov ecx, esi */
  ecx = esi;
/* 98a2dd: je 0x98a622 */
  if (zf) goto L_98a622;
L_98a2e3: /* 98a2e3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 98a2e6: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
L_98a2e9: /* 98a2e9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a2ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a2ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a2ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a2ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a2f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a2f1: call 0x987d90 */
  esp -= 4; W32(esp, 0x98a2f6u); SPILL(); f_987d90(); if (g_unwind) return; RELOAD();
/* 98a2f6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98a2fa: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98a2fc: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a300: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a303: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 98a307: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a309: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a30c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a30f: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a312: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a315: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a317: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a31b: jl 0x98a2d6 */
  if ((sf != of)) goto L_98a2d6;
L_98a31d: /* 98a31d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98a321: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a324: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a327: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a329: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a32d: jl 0x98a2b0 */
  if ((sf != of)) goto L_98a2b0;
L_98a333: /* 98a333: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a335: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a336: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a337: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a339: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a33b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 98a33d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a340: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a341: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a342: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a344: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a346: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 98a349: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 98a34d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a34e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a34f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a351: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a353: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98a357: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a35b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a35c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a35d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a35f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a361: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_98a365: /* 98a365: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a368: mov al, byte ptr [esi + 0x2387] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2387u))) & 0xffu);
/* 98a36e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a370: je 0x98a3d4 */
  if (zf) goto L_98a3d4;
L_98a372: /* 98a372: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a375: xor eax, eax */
  eax = 0;
/* 98a377: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a379: jle 0x98a3a8 */
  if ((zf || sf != of)) goto L_98a3a8;
L_98a37b: /* 98a37b: mov ecx, 4 */
  ecx = 0x4u;
L_98a380: /* 98a380: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a382: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a385: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a388: mov byte ptr [ebx + edx*4 + 3], 0 */
  W8((uint32_t)(ebx + edx*4 + 0x3u), 0x0u);
/* 98a38d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a38f: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a392: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a395: lea edx, [edx + ebx - 4] */
  edx = (uint32_t)(edx + ebx + 0xfffffffcu);
/* 98a399: mov byte ptr [edx + 3], 0 */
  W8((uint32_t)(edx + 0x3u), 0x0u);
/* 98a39d: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a3a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3a1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3a4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3a6: jl 0x98a380 */
  if ((sf != of)) goto L_98a380;
L_98a3a8: /* 98a3a8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3aa: xor eax, eax */
  eax = 0;
/* 98a3ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3ae: jle 0x98a3d4 */
  if ((zf || sf != of)) goto L_98a3d4;
L_98a3b0: /* 98a3b0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3b3: mov byte ptr [ecx + eax*4 + 3], 0 */
  W8((uint32_t)(ecx + eax*4 + 0x3u), 0x0u);
/* 98a3b8: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a3bb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a3bd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 98a3be: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a3c1: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3c4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98a3c6: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 98a3c9: mov byte ptr [ecx + 3], 0 */
  W8((uint32_t)(ecx + 0x3u), 0x0u);
/* 98a3cd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3d2: jl 0x98a3b0 */
  if ((sf != of)) goto L_98a3b0;
L_98a3d4: /* 98a3d4: mov al, byte ptr [esi + 0x2388] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2388u))) & 0xffu);
/* 98a3da: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a3dc: je 0x98a48b */
  if (zf) goto L_98a48b;
L_98a3e2: /* 98a3e2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a3e5: xor eax, eax */
  eax = 0;
/* 98a3e7: add ecx, 0x238c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x238cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a3f0: /* 98a3f0: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a3f3: xor edx, edx */
  edx = 0;
/* 98a3f5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3f7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a3fb: jle 0x98a441 */
  if ((zf || sf != of)) goto L_98a441;
L_98a3fd: /* 98a3fd: mov dword ptr [esp + 0x24], 4 */
  W32((uint32_t)(esp + 0x24u), 0x4u);
L_98a405: /* 98a405: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 98a407: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a409: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 98a40c: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a40f: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a412: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a415: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 98a419: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a41b: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a41e: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 98a421: lea esi, [edx + esi - 4] */
  esi = (uint32_t)(edx + esi + 0xfffffffcu);
/* 98a425: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a427: mov byte ptr [esi + eax], dl */
  W8((uint32_t)(esi + eax), (edx & 0xffu));
/* 98a42a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98a42e: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a431: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98a432: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a435: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a437: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a43b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98a43f: jl 0x98a405 */
  if ((sf != of)) goto L_98a405;
L_98a441: /* 98a441: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a443: xor esi, esi */
  esi = 0;
/* 98a445: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a447: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a44b: jle 0x98a480 */
  if ((zf || sf != of)) goto L_98a480;
L_98a44d: /* 98a44d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a450: /* 98a450: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a452: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a455: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a458: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a45b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a45e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 98a460: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 98a464: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 98a465: imul ebx, edx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(edx);
  ebx = (uint32_t)r;
  }
/* 98a468: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a46b: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a46d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98a470: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a472: mov byte ptr [edx + eax], bl */
  W8((uint32_t)(edx + eax), (ebx & 0xffu));
/* 98a475: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a477: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a478: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a47a: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a47e: jl 0x98a450 */
  if ((sf != of)) goto L_98a450;
L_98a480: /* 98a480: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a481: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a482: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a485: jle 0x98a3f0 */
  if ((zf || sf != of)) goto L_98a3f0;
L_98a48b: /* 98a48b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a48e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98a492: cmp ecx, dword ptr [eax + 0x239c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x239cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a498: jl 0x98a89a */
  if ((sf != of)) goto L_98a89a;
L_98a49e: /* 98a49e: mov cl, byte ptr [eax + 0x2390] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2390u))) & 0xffu);
/* 98a4a4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4a6: je 0x98a812 */
  if (zf) goto L_98a812;
L_98a4ac: /* 98a4ac: mov cl, byte ptr [eax + 0x2385] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2385u))) & 0xffu);
/* 98a4b2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4b4: je 0x98a670 */
  if (zf) goto L_98a670;
L_98a4ba: /* 98a4ba: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a4bd: xor ecx, ecx */
  ecx = 0;
/* 98a4bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4c1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a4c5: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a4cb: /* 98a4cb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a4cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a4d0: /* 98a4d0: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a4d3: mov edx, ecx */
  edx = ecx;
/* 98a4d5: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a4d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4da: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a4dd: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a4e5: jle 0x98a65b */
  if ((zf || sf != of)) goto L_98a65b;
L_98a4eb: /* 98a4eb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a4ef: fstp qword ptr [esp + 0xd0] */
  WF64((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 98a4f6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98a4fa: fstp qword ptr [esp + 0xd8] */
  WF64((uint32_t)(esp + 0xd8u), ST0); FPOP();
L_98a501: /* 98a501: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a505: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a507: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a50b: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a50f: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a514: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a516: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98a51a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a51e: jge 0x98a526 */
  if ((sf == of)) goto L_98a526;
L_98a520: /* 98a520: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a526: /* 98a526: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a528: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a52e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98a532: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a538: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a53c: jge 0x98a544 */
  if ((sf == of)) goto L_98a544;
L_98a53e: /* 98a53e: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a544: /* 98a544: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a546: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a54c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a550: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a556: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a55a: jge 0x98a562 */
  if ((sf == of)) goto L_98a562;
L_98a55c: /* 98a55c: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a562: /* 98a562: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a568: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a56c: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a572: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a579: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a580: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 98a582: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a589: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a590: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a592: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a599: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59d: fld qword ptr [esp + 0xd8] */
  { double v = F64((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 98a5a4: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5ab: fst qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0);
/* 98a5b2: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5b9: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a5c0: fmul qword ptr [esp + 0x88] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x88u)));
/* 98a5c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5c9: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5d0: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 98a5d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a5db: fabs  */
  ST0 = fabs(ST0);
/* 98a5dd: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a5e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a5e5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a5e8: jne 0x98a629 */
  if (!zf) goto L_98a629;
L_98a5ea: /* 98a5ea: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a5ec: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a5f2: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5f9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a5fb: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a602: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a609: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a60b: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a612: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a619: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a620: jmp 0x98a62b */
  goto L_98a62b;
L_98a622: /* 98a622: mov eax, ebx */
  eax = ebx;
/* 98a624: jmp 0x98a2e9 */
  goto L_98a2e9;
L_98a629: /* 98a629: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a62b: /* 98a62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a62c: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 98a633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a634: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98a638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a639: call 0x987960 */
  esp -= 4; W32(esp, 0x98a63eu); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a63e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a642: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a644: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a647: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a648: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a64b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a64d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a651: jl 0x98a501 */
  if ((sf != of)) goto L_98a501;
L_98a657: /* 98a657: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
L_98a65b: /* 98a65b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a65e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a65f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a661: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a665: jl 0x98a4d0 */
  if ((sf != of)) goto L_98a4d0;
L_98a66b: /* 98a66b: jmp 0x98a812 */
  goto L_98a812;
L_98a670: /* 98a670: mov cl, byte ptr [eax + 0x2386] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2386u))) & 0xffu);
/* 98a676: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a678: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a67b: je 0x98a720 */
  if (zf) goto L_98a720;
L_98a681: /* 98a681: xor ecx, ecx */
  ecx = 0;
/* 98a683: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a685: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a689: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a68f: /* 98a68f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a691: /* 98a691: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a694: mov edx, ecx */
  edx = ecx;
/* 98a696: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a699: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a69c: xor esi, esi */
  esi = 0;
/* 98a69e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a6a0: jle 0x98a70b */
  if ((zf || sf != of)) goto L_98a70b;
L_98a6a2: /* 98a6a2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_98a6a3: /* 98a6a3: movzx eax, byte ptr [ebx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a6a7: movzx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a6aa: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a6ae: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6b2: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a6b6: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6bc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6c0: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6c4: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6ca: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6ce: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 98a6d2: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6d8: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6de: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6e3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6e3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6e7: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6ed: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a6f0: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6f6: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6fbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6fb: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a6fd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a6ff: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a700: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a703: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a705: jl 0x98a6a3 */
  if ((sf != of)) goto L_98a6a3;
L_98a707: /* 98a707: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_98a70b: /* 98a70b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a70e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a70f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a711: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a715: jl 0x98a691 */
  if ((sf != of)) goto L_98a691;
L_98a71b: /* 98a71b: jmp 0x98a812 */
  goto L_98a812;
L_98a720: /* 98a720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a722: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a72a: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a730: /* 98a730: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a732: /* 98a732: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98a736: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a739: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a73c: xor esi, esi */
  esi = 0;
/* 98a73e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a740: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a743: jle 0x98a7fe */
  if ((zf || sf != of)) goto L_98a7fe;
L_98a749: /* 98a749: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98a750: /* 98a750: movzx edx, byte ptr [ebx] */
  edx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a753: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a756: movzx ecx, byte ptr [eax + 0x2394] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2394u)));
/* 98a75d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a761: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a765: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a769: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a76d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a771: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a775: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a777: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a77d: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a782u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a782: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a785: movzx ecx, byte ptr [ebx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a789: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a78b: movzx eax, byte ptr [edx + 0x2395] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2395u)));
/* 98a792: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a796: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a79a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a79e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7a2: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7a6: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7ac: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7b2: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7b7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7b7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a7ba: movzx ecx, byte ptr [ebx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a7be: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a7c1: movzx eax, byte ptr [edx + 0x2396] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2396u)));
/* 98a7c8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a7cc: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7d0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a7d4: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7d8: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7dc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7e2: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7e8: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7edu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7ed: mov byte ptr [ebx + 2], al */
  W8((uint32_t)(ebx + 0x2u), (eax & 0xffu));
/* 98a7f0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a7f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a7f3: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a7f6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a7f8: jl 0x98a750 */
  if ((sf != of)) goto L_98a750;
L_98a7fe: /* 98a7fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a802: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a805: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a806: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a808: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a80c: jl 0x98a732 */
  if ((sf != of)) goto L_98a732;
L_98a812: /* 98a812: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a815: mov al, byte ptr [edx + 0x2391] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2391u))) & 0xffu);
/* 98a81b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a81d: je 0x98a88b */
  if (zf) goto L_98a88b;
L_98a81f: /* 98a81f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a824: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a82c: jle 0x98a88b */
  if ((zf || sf != of)) goto L_98a88b;
L_98a82e: /* 98a82e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a830: /* 98a830: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a834: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a837: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a83a: xor esi, esi */
  esi = 0;
/* 98a83c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a83e: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a841: jle 0x98a87b */
  if ((zf || sf != of)) goto L_98a87b;
L_98a843: /* 98a843: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_98a846: /* 98a846: movzx eax, byte ptr [ebx] */
  eax = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a849: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a84c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a850: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a854: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a858: fild dword ptr [ecx + 0x2398] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x2398u)); FPUSH(v); }
/* 98a85e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a862: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a864: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a86a: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a86fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a86f: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a871: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a874: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a877: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a879: jl 0x98a846 */
  if ((sf != of)) goto L_98a846;
L_98a87b: /* 98a87b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a87f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a882: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a883: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a885: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a889: jl 0x98a830 */
  if ((sf != of)) goto L_98a830;
L_98a88b: /* 98a88b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a88f: fmul dword ptr [esp + 0x9c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x9cu)));
/* 98a896: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a89a: /* 98a89a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a89d: mov al, byte ptr [edx + 0x2385] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2385u))) & 0xffu);
/* 98a8a3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a8a5: je 0x98a9ef */
  if (zf) goto L_98a9ef;
L_98a8ab: /* 98a8ab: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a8ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8b0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a8b8: jle 0x98a9ef */
  if ((zf || sf != of)) goto L_98a9ef;
L_98a8be: /* 98a8be: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a8c0: /* 98a8c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a8c4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a8c7: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a8ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8cc: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a8cf: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a8d7: jle 0x98a9db */
  if ((zf || sf != of)) goto L_98a9db;
L_98a8dd: /* 98a8dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a8e0: /* 98a8e0: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a8e4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a8e6: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a8ea: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a8ee: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a8f3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8f5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98a8f9: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a8fd: jge 0x98a905 */
  if ((sf == of)) goto L_98a905;
L_98a8ff: /* 98a8ff: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a905: /* 98a905: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a907: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a90d: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98a911: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a917: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a91b: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a91f: jge 0x98a927 */
  if ((sf == of)) goto L_98a927;
L_98a921: /* 98a921: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a927: /* 98a927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a929: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a92f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a933: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a939: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a93d: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a941: jge 0x98a949 */
  if ((sf == of)) goto L_98a949;
L_98a943: /* 98a943: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a949: /* 98a949: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a94f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a953: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a959: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a95d: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a961: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 98a965: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 98a969: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a96d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a96f: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a973: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 98a977: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a979: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a97b: fabs  */
  ST0 = fabs(ST0);
/* 98a97d: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a985: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a988: jne 0x98a9b0 */
  if (!zf) goto L_98a9b0;
L_98a98a: /* 98a98a: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a98c: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a992: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a996: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a998: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a99c: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a9a0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a9a2: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a9a6: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a9aa: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a9ae: jmp 0x98a9b2 */
  goto L_98a9b2;
L_98a9b0: /* 98a9b0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a9b2: /* 98a9b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a9b3: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 98a9b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a9b8: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 98a9bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a9bd: call 0x987960 */
  esp -= 4; W32(esp, 0x98a9c2u); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a9c2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a9c6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a9c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a9cb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9cc: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a9cf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9d1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a9d5: jl 0x98a8e0 */
  if ((sf != of)) goto L_98a8e0;
L_98a9db: /* 98a9db: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a9df: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a9e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9e3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9e5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a9e9: jl 0x98a8c0 */
  if ((sf != of)) goto L_98a8c0;
L_98a9ef: /* 98a9ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a9f2: cmp word ptr [eax + 0x237e], 0x1f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x237eu))); uint16_t b = (uint16_t)(0x1fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a9fa: jne 0x98aa09 */
  if (!zf) goto L_98aa09;
L_98a9fc: /* 98a9fc: movsx edx, word ptr [eax + 0x2380] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x2380u)));
/* 98aa03: cmp dword ptr [esp + 0x2c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa07: jge 0x98aa15 */
  if ((sf == of)) goto L_98aa15;
L_98aa09: /* 98aa09: mov al, byte ptr [esp + 0x37] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x37u))) & 0xffu);
/* 98aa0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa0f: je 0x989c82 */
  if (zf) goto L_989c82;
L_98aa15: /* 98aa15: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 98aa1c: mov byte ptr [esp + 0x934], 1 */
  W8((uint32_t)(esp + 0x934u), 0x1u);
/* 98aa24: call 0x98e840 */
  esp -= 4; W32(esp, 0x98aa29u); SPILL(); f_98e840(); if (g_unwind) return; RELOAD();
/* 98aa29: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 98aa2d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98aa31: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98aa35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98aa36: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa38: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98aa3c: jl 0x989b20 */
  if ((sf != of)) goto L_989b20;
L_98aa42: /* 98aa42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98aa43: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98aa48u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98aa48: mov eax, dword ptr [esp + 0xc8] */
  eax = R32((uint32_t)(esp + 0xc8u));
/* 98aa4f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98aa52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa54: je 0x98aa5f */
  if (zf) goto L_98aa5f;
L_98aa56: /* 98aa56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98aa57: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98aa5cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
L_98aa5c: /* 98aa5c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98aa5f: /* 98aa5f: mov ecx, dword ptr [esp + 0x92c] */
  ecx = R32((uint32_t)(esp + 0x92cu));
/* 98aa66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98aa67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98aa68: mov eax, 1 */
  eax = 0x1u;
/* 98aa6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98aa74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98aa75: mov esp, ebp */
  esp = ebp;
/* 98aa77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98aa78: ret  */
  esp += 4; SPILL(); return;
}

void f_989b18(void) {
  LOAD_REGS();
L_989b18: /* 989b18: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 989b1f: nop  */
L_989b20: /* 989b20: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 989b27: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 989b2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b2c: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 989b30: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 989b34: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x989b39u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 989b39: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 989b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b40: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x989b45u); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 989b45: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 989b48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989b4b: cmp word ptr [ebx + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989b53: mov edi, eax */
  edi = eax;
/* 989b55: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 989b59: jne 0x989b72 */
  if (!zf) goto L_989b72;
L_989b5b: /* 989b5b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 989b5e: movsx eax, word ptr [ecx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x34u)));
/* 989b62: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b67: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b6a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989b6c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 989b70: jmp 0x989b85 */
  goto L_989b85;
L_989b72: /* 989b72: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 989b75: movsx eax, word ptr [edx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0x34u)));
/* 989b79: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b7e: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b81: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
L_989b85: /* 989b85: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 989b89: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 989b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989b8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989b8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b8f: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 989b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b97: call 0x98f100 */
  esp -= 4; W32(esp, 0x989b9cu); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 989b9c: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 989ba3: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 989ba7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989baa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 989bac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989bad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989bae: mov byte ptr [0xcf2fec], 1 */
  W8((uint32_t)(0xcf2fecu), 0x1u);
/* 989bb5: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 989bb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989bba: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 989bc1: call 0x98eed0 */
  esp -= 4; W32(esp, 0x989bc6u); SPILL(); f_98eed0(); if (g_unwind) return; RELOAD();
/* 989bc6: movsx eax, word ptr [ebx + 0x2382] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebx + 0x2382u)));
/* 989bcd: add eax, 0xffffff7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7au);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989bd2: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989bd5: mov byte ptr [esp + 0x934], 2 */
  W8((uint32_t)(esp + 0x934u), 0x2u);
/* 989bdd: ja 0x989c3e */
  if ((!cf && !zf)) goto L_989c3e;
L_989bdf: /* 989bdf: jmp dword ptr [eax*4 + 0x98aae4] */
  switch (R32((uint32_t)(eax*4 + 0x98aae4u))) {
    case 0x989be6u: goto L_989be6;
    case 0x989bfbu: goto L_989bfb;
    case 0x989c10u: goto L_989c10;
    case 0x989c27u: goto L_989c27;
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989bdf, R32((uint32_t)(eax*4 + 0x98aae4u))); return;
  }
L_989be6: /* 989be6: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989bed: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989bf4: call 0x98e5d0 */
  esp -= 4; W32(esp, 0x989bf9u); SPILL(); f_98e5d0(); if (g_unwind) return; RELOAD();
/* 989bf9: jmp 0x989c51 */
  goto L_989c51;
L_989bfb: /* 989bfb: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c02: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c09: call 0x98e240 */
  esp -= 4; W32(esp, 0x989c0eu); SPILL(); f_98e240(); if (g_unwind) return; RELOAD();
/* 989c0e: jmp 0x989c51 */
  goto L_989c51;
L_989c10: /* 989c10: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c19: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c20: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c25u); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c25: jmp 0x989c51 */
  goto L_989c51;
L_989c27: /* 989c27: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 989c2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c30: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c37: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c3cu); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c3c: jmp 0x989c51 */
  goto L_989c51;
L_989c3e: /* 989c3e: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c45: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c4c: call 0x98e120 */
  esp -= 4; W32(esp, 0x989c51u); SPILL(); f_98e120(); if (g_unwind) return; RELOAD();
L_989c51: /* 989c51: mov byte ptr [0xcf2fec], 0 */
  W8((uint32_t)(0xcf2fecu), 0x0u);
/* 989c58: fild dword ptr [ebx + 0x23a0] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x23a0u)); FPUSH(v); }
/* 989c5e: mov byte ptr [esp + 0x37], 0 */
  W8((uint32_t)(esp + 0x37u), 0x0u);
/* 989c63: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 989c6b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 989c71: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 989c77: fst dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0);
/* 989c7e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_989c82: /* 989c82: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989c85: mov al, byte ptr [ecx + 0x23a5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a5u))) & 0xffu);
/* 989c8b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 989c8d: je 0x989ce3 */
  if (zf) goto L_989ce3;
L_989c8f: /* 989c8f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989c92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989c94: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989c97: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989c9f: jle 0x989ce3 */
  if ((zf || sf != of)) goto L_989ce3;
L_989ca1: /* 989ca1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989ca3: xor ebx, ebx */
  ebx = 0;
/* 989ca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ca7: jle 0x989cd3 */
  if ((zf || sf != of)) goto L_989cd3;
L_989ca9: /* 989ca9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_989cb0: /* 989cb0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 989cb4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 989cb7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989cba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989cbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989cbf: call 0x987a90 */
  esp -= 4; W32(esp, 0x989cc4u); SPILL(); f_987a90(); if (g_unwind) return; RELOAD();
/* 989cc4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 989cc6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989cc8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ccb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 989cce: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 989ccf: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cd1: jl 0x989cb0 */
  if ((sf != of)) goto L_989cb0;
L_989cd3: /* 989cd3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989cd7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989cda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989cdb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cdd: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ce1: jl 0x989ca1 */
  if ((sf != of)) goto L_989ca1;
L_989ce3: /* 989ce3: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 989ce7: xor ebx, ebx */
  ebx = 0;
/* 989ce9: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989cec: ja 0x989d11 */
  if ((!cf && !zf)) goto L_989d11;
L_989cee: /* 989cee: jmp dword ptr [eax*4 + 0x98aaf4] */
  switch (R32((uint32_t)(eax*4 + 0x98aaf4u))) {
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989cee, R32((uint32_t)(eax*4 + 0x98aaf4u))); return;
  }
L_989cf5: /* 989cf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 989cf8: xor eax, eax */
  eax = 0;
/* 989cfa: mov al, byte ptr [edx + 0x23a6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23a6u))) & 0xffu);
/* 989d00: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d04: mov edx, edi */
  edx = edi;
/* 989d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d07: call 0x9875e0 */
  esp -= 4; W32(esp, 0x989d0cu); SPILL(); f_9875e0(); if (g_unwind) return; RELOAD();
L_989d0c: /* 989d0c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989d0f: /* 989d0f: mov ebx, eax */
  ebx = eax;
L_989d11: /* 989d11: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 989d14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 989d16: je 0x98a163 */
  if (zf) goto L_98a163;
L_989d1c: /* 989d1c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 989d20: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 989d24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989d27: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x989d29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 989d29: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 989d2c: jmp 0x98a189 */
  goto L_98a189;
L_989d31: /* 989d31: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989d34: xor edx, edx */
  edx = 0;
/* 989d36: mov dl, byte ptr [ecx + 0x23a6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a6u))) & 0xffu);
/* 989d3c: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d41: mov edx, edi */
  edx = edi;
/* 989d43: call 0x987710 */
  esp -= 4; W32(esp, 0x989d48u); SPILL(); f_987710(); if (g_unwind) return; RELOAD();
/* 989d48: jmp 0x989d0c */
  goto L_989d0c;
L_989d4a: /* 989d4a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d4d: xor ecx, ecx */
  ecx = 0;
/* 989d4f: mov cl, byte ptr [eax + 0x23a6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a6u))) & 0xffu);
/* 989d55: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d59: mov edx, edi */
  edx = edi;
/* 989d5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d5c: call 0x9877f0 */
  esp -= 4; W32(esp, 0x989d61u); SPILL(); f_9877f0(); if (g_unwind) return; RELOAD();
/* 989d61: jmp 0x989d0c */
  goto L_989d0c;
L_989d63: /* 989d63: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d66: xor edx, edx */
  edx = 0;
/* 989d68: mov dl, byte ptr [eax + 0x23a7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a7u))) & 0xffu);
/* 989d6e: movzx eax, byte ptr [eax + 0x23a6] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x23a6u)));
/* 989d75: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d7b: mov edx, edi */
  edx = edi;
/* 989d7d: call 0x987510 */
  esp -= 4; W32(esp, 0x989d82u); SPILL(); f_987510(); if (g_unwind) return; RELOAD();
/* 989d82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989d85: jmp 0x989d0f */
  goto L_989d0f;
L_989d87: /* 989d87: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989d8a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989d8d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d90: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989d94: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989d99u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989d99: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989d9c: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989d9f: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989da2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989da5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989da7: mov ebx, eax */
  ebx = eax;
/* 989da9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989dad: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989db5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989dbb: /* 989dbb: jmp 0x989dc0 */
  goto L_989dc0;
L_989dc0: /* 989dc0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989dc2: mov edx, eax */
  edx = eax;
/* 989dc4: mov esi, eax */
  esi = eax;
/* 989dc6: shr edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989dc9: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989dcc: and edx, 0xf00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989dd2: and esi, 0xf0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dd8: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dda: mov esi, eax */
  esi = eax;
/* 989ddc: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ddf: shr esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989de2: and eax, 0xf000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989de7: and esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dea: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dec: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989df2: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989df5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989df8: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989dfb: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989dfe: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e02: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e06: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e0a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e0c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989e10: jl 0x989dc0 */
  if ((sf != of)) goto L_989dc0;
L_989e12: /* 989e12: jmp 0x989d11 */
  goto L_989d11;
L_989e17: /* 989e17: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e1a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e1d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989e20: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989e24: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989e29u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989e29: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989e2c: mov ebx, eax */
  ebx = eax;
/* 989e2e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e31: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e34: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989e37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989e39: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989e3d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989e45: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989e4b: /* 989e4b: jmp 0x989e50 */
  goto L_989e50;
L_989e50: /* 989e50: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989e52: mov edx, eax */
  edx = eax;
/* 989e54: mov esi, eax */
  esi = eax;
/* 989e56: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989e59: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e5c: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989e62: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e65: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e67: mov esi, eax */
  esi = eax;
/* 989e69: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989e6c: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e6f: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989e74: and esi, 0x8000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e7a: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7c: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989e82: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989e85: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989e88: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989e8b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989e8e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e92: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e96: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e9a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e9c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ea0: jl 0x989e50 */
  if ((sf != of)) goto L_989e50;
L_989ea2: /* 989ea2: jmp 0x989d11 */
  goto L_989d11;
L_989ea7: /* 989ea7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989eaa: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ead: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989eb0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989eb4: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989eb9u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989eb9: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989ebc: mov ebx, eax */
  ebx = eax;
/* 989ebe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989ec1: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ec4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ec9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989ecd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989ed5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989edb: /* 989edb: jmp 0x989ee0 */
  goto L_989ee0;
L_989ee0: /* 989ee0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989ee2: mov edx, eax */
  edx = eax;
/* 989ee4: mov esi, eax */
  esi = eax;
/* 989ee6: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989ee9: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989eef: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ef2: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989ef5: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989efa: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989efd: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989eff: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f05: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f08: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f0b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f0e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f11: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f15: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f19: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f1c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f1d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f1f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989f23: jl 0x989ee0 */
  if ((sf != of)) goto L_989ee0;
L_989f25: /* 989f25: jmp 0x989d11 */
  goto L_989d11;
L_989f2a: /* 989f2a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f2d: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f30: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989f33: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989f37: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989f3cu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989f3c: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989f3f: mov ebx, eax */
  ebx = eax;
/* 989f41: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f44: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989f4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989f4c: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989f50: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989f58: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989f5e: /* 989f5e: mov edi, edi */
  edi = edi;
L_989f60: /* 989f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989f62: mov edx, eax */
  edx = eax;
/* 989f64: mov esi, eax */
  esi = eax;
/* 989f66: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989f69: and edx, 0x7e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989f6f: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989f72: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989f75: and eax, 0xf800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989f7a: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989f7d: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f7f: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f81: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f85: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f88: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f8b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f8e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f91: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f95: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f99: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f9d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f9f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989fa3: jl 0x989f60 */
  if ((sf != of)) goto L_989f60;
L_989fa5: /* 989fa5: jmp 0x989d11 */
  goto L_989d11;
L_989faa: /* 989faa: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fad: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fb0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989fb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989fb4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989fb8: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989fbdu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989fbd: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989fc0: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 989fc3: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989fc6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 989fc9: mov ebx, eax */
  ebx = eax;
/* 989fcb: mov eax, ecx */
  eax = ecx;
/* 989fcd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 989fd0: mov edi, ebx */
  edi = ebx;
/* 989fd2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 989fd4: mov ecx, eax */
  ecx = eax;
/* 989fd6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989fd9: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 989fdc: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 989fde: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 989fe2: jmp 0x989d11 */
  goto L_989d11;
L_989fe7: /* 989fe7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fea: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 989ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989ff1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989ff5: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989ffau); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989ffa: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989ffd: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a000: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a003: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a006: xor ecx, ecx */
  ecx = 0;
/* 98a008: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a00a: mov ebx, eax */
  ebx = eax;
/* 98a00c: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_98a012: /* 98a012: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a014: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a016: mov dl, byte ptr [esi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 98a019: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a01a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a01c: mov dl, byte ptr [esi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 98a01f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a020: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a022: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a025: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a028: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a029: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a02c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a02d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a02f: jl 0x98a012 */
  if ((sf != of)) goto L_98a012;
L_98a031: /* 98a031: jmp 0x989d11 */
  goto L_989d11;
L_98a036: /* 98a036: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a03c: mov esi, 3 */
  esi = 0x3u;
/* 98a041: cmp word ptr [ecx + 0x34], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x34u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a045: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98a048: mov byte ptr [esp + 0xa4], dl */
  W8((uint32_t)(esp + 0xa4u), (edx & 0xffu));
/* 98a04f: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 98a056: xor edx, edx */
  edx = 0;
/* 98a058: mov dl, byte ptr [eax + 0x23a4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a4u))) & 0xffu);
/* 98a05e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a05f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a062: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98a069: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a06a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a06c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a06e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 98a070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a071: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98a074: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a076: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a077: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a079: call 0x98f5b0 */
  esp -= 4; W32(esp, 0x98a07eu); SPILL(); f_98f5b0(); if (g_unwind) return; RELOAD();
/* 98a07e: mov ebx, eax */
  ebx = eax;
/* 98a080: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a083: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 98a086: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 98a08a: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 98a08e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a091: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a093: jne 0x989d11 */
  if (!zf) goto L_989d11;
L_98a099: /* 98a099: cmp dword ptr [esp + 0xb8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xb8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a0a0: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 98a0a7: jne 0x98a0ef */
  if (!zf) goto L_98a0ef;
L_98a0a9: /* 98a0a9: xor eax, eax */
  eax = 0;
/* 98a0ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0ad: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0b3: /* 98a0b3: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0ba: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a0c0: /* 98a0c0: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a0c3: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a0ca: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a0cc: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a0d3: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a0d6: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a0dd: mov byte ptr [esp + eax*4 + 0x52b], 0xff */
  W8((uint32_t)(esp + eax*4 + 0x52bu), 0xffu);
/* 98a0e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a0e6: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0e9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a0eb: jl 0x98a0c0 */
  if ((sf != of)) goto L_98a0c0;
L_98a0ed: /* 98a0ed: jmp 0x98a12f */
  goto L_98a12f;
L_98a0ef: /* 98a0ef: xor eax, eax */
  eax = 0;
/* 98a0f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0f3: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0f5: /* 98a0f5: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0fc: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0ff: nop  */
L_98a100: /* 98a100: mov dl, byte ptr [esi - 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffff8u))) & 0xffu);
/* 98a103: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a10a: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a10d: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a114: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a116: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a11d: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a120: mov byte ptr [esp + eax*4 + 0x52b], dl */
  W8((uint32_t)(esp + eax*4 + 0x52bu), (edx & 0xffu));
/* 98a127: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a128: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a12b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a12d: jl 0x98a100 */
  if ((sf != of)) goto L_98a100;
L_98a12f: /* 98a12f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 98a132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a134: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 98a139: je 0x98a14f */
  if (zf) goto L_98a14f;
L_98a13b: /* 98a13b: lea ecx, [esp + 0x52c] */
  ecx = (uint32_t)(esp + 0x52cu);
/* 98a142: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98a144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a145: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x98a147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98a147: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a14a: jmp 0x989d11 */
  goto L_989d11;
L_98a14f: /* 98a14f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a152: lea edx, [esp + 0x52c] */
  edx = (uint32_t)(esp + 0x52cu);
/* 98a159: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a15a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a15b: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a160u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
/* 98a160: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a163: /* 98a163: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 98a167: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a169: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a16c: je 0x98a17d */
  if (zf) goto L_98a17d;
L_98a16e: /* 98a16e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98a172: mov eax, ebx */
  eax = ebx;
/* 98a174: mov edx, esi */
  edx = esi;
/* 98a176: call 0x9878d0 */
  esp -= 4; W32(esp, 0x98a17bu); SPILL(); f_9878d0(); if (g_unwind) return; RELOAD();
/* 98a17b: jmp 0x98a18c */
  goto L_98a18c;
L_98a17d: /* 98a17d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98a181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a182: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a184: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a189u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
L_98a189: /* 98a189: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a18c: /* 98a18c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a18d: call 0x99cf5a */
  esp -= 4; W32(esp, 0x98a192u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 98a192: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98a196: mov al, byte ptr [esi + 0x232d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x232du))) & 0xffu);
/* 98a19c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a19f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a1a0: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1a2: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 98a1a6: jne 0x98a1b3 */
  if (!zf) goto L_98a1b3;
L_98a1a8: /* 98a1a8: fld dword ptr [esi + ecx*4 + 0x2330] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x2330u)); FPUSH(v); }
/* 98a1af: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a1b3: /* 98a1b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98a1b9: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 98a1bd: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1c0: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 98a1c4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 98a1c8: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1ca: /* 98a1ca: cmp dword ptr [esp + 0x30], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1cf: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1d1: /* 98a1d1: mov byte ptr [esp + 0x37], 1 */
  W8((uint32_t)(esp + 0x37u), 0x1u);
/* 98a1d6: jmp 0x98a9ef */
  goto L_98a9ef;
L_98a1db: /* 98a1db: cmp word ptr [esi + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1e3: jne 0x98a252 */
  if (!zf) goto L_98a252;
L_98a1e5: /* 98a1e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a1e6: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98a1ebu); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98a1eb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a1ee: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98a1f1: movsx ecx, word ptr [eax + 0x34] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x34u)));
/* 98a1f5: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 98a1f9: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 98a1fc: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 98a1ff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a200: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a202: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a204: mov edi, eax */
  edi = eax;
/* 98a206: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 98a20a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a20c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a20d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a20e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a210: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 98a214: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a216: mov ebx, eax */
  ebx = eax;
/* 98a218: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a219: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a21a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a21b: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 98a21f: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 98a223: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 98a227: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x98a22cu); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 98a22c: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98a230: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98a233: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a234: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a237: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a239: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a23a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a23b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a23c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a23d: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 98a241: call 0x98f100 */
  esp -= 4; W32(esp, 0x98a246u); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 98a246: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 98a24a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a24d: jmp 0x98a365 */
  goto L_98a365;
L_98a252: /* 98a252: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a255: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a258: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25a: /* 98a25a: cmp dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a25d: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25f: /* 98a25f: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 98a266: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98a26a: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 98a26d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a270: imul ecx, dword ptr [eax] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax)));
  ecx = (uint32_t)r;
  }
/* 98a273: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 98a276: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98a279: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98a27c: mov edx, ecx */
  edx = ecx;
/* 98a27e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98a281: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 98a283: mov ecx, edx */
  ecx = edx;
/* 98a285: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98a288: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 98a28a: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98a28e: jmp 0x98a333 */
  goto L_98a333;
L_98a293: /* 98a293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a295: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a298: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a29c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a2a4: jle 0x98a333 */
  if ((zf || sf != of)) goto L_98a333;
L_98a2aa: /* 98a2aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98a2b0: /* 98a2b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2b2: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a2b5: mov edx, eax */
  edx = eax;
/* 98a2b7: imul edx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  edx = (uint32_t)r;
  }
/* 98a2bc: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a2bf: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2c3: mov esi, ebx */
  esi = ebx;
/* 98a2c5: je 0x98a2ca */
  if (zf) goto L_98a2ca;
L_98a2c7: /* 98a2c7: lea esi, [ebx + eax*4] */
  esi = (uint32_t)(ebx + eax*4);
L_98a2ca: /* 98a2ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a2cc: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a2d4: jle 0x98a31d */
  if ((zf || sf != of)) goto L_98a31d;
L_98a2d6: /* 98a2d6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2d8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2db: mov ecx, esi */
  ecx = esi;
/* 98a2dd: je 0x98a622 */
  if (zf) goto L_98a622;
L_98a2e3: /* 98a2e3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 98a2e6: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
L_98a2e9: /* 98a2e9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a2ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a2ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a2ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a2ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a2f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a2f1: call 0x987d90 */
  esp -= 4; W32(esp, 0x98a2f6u); SPILL(); f_987d90(); if (g_unwind) return; RELOAD();
/* 98a2f6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98a2fa: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98a2fc: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a300: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a303: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 98a307: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a309: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a30c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a30f: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a312: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a315: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a317: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a31b: jl 0x98a2d6 */
  if ((sf != of)) goto L_98a2d6;
L_98a31d: /* 98a31d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98a321: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a324: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a327: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a329: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a32d: jl 0x98a2b0 */
  if ((sf != of)) goto L_98a2b0;
L_98a333: /* 98a333: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a335: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a336: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a337: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a339: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a33b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 98a33d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a340: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a341: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a342: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a344: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a346: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 98a349: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 98a34d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a34e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a34f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a351: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a353: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98a357: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a35b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a35c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a35d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a35f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a361: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_98a365: /* 98a365: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a368: mov al, byte ptr [esi + 0x2387] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2387u))) & 0xffu);
/* 98a36e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a370: je 0x98a3d4 */
  if (zf) goto L_98a3d4;
L_98a372: /* 98a372: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a375: xor eax, eax */
  eax = 0;
/* 98a377: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a379: jle 0x98a3a8 */
  if ((zf || sf != of)) goto L_98a3a8;
L_98a37b: /* 98a37b: mov ecx, 4 */
  ecx = 0x4u;
L_98a380: /* 98a380: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a382: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a385: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a388: mov byte ptr [ebx + edx*4 + 3], 0 */
  W8((uint32_t)(ebx + edx*4 + 0x3u), 0x0u);
/* 98a38d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a38f: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a392: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a395: lea edx, [edx + ebx - 4] */
  edx = (uint32_t)(edx + ebx + 0xfffffffcu);
/* 98a399: mov byte ptr [edx + 3], 0 */
  W8((uint32_t)(edx + 0x3u), 0x0u);
/* 98a39d: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a3a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3a1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3a4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3a6: jl 0x98a380 */
  if ((sf != of)) goto L_98a380;
L_98a3a8: /* 98a3a8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3aa: xor eax, eax */
  eax = 0;
/* 98a3ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3ae: jle 0x98a3d4 */
  if ((zf || sf != of)) goto L_98a3d4;
L_98a3b0: /* 98a3b0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3b3: mov byte ptr [ecx + eax*4 + 3], 0 */
  W8((uint32_t)(ecx + eax*4 + 0x3u), 0x0u);
/* 98a3b8: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a3bb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a3bd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 98a3be: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a3c1: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3c4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98a3c6: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 98a3c9: mov byte ptr [ecx + 3], 0 */
  W8((uint32_t)(ecx + 0x3u), 0x0u);
/* 98a3cd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3d2: jl 0x98a3b0 */
  if ((sf != of)) goto L_98a3b0;
L_98a3d4: /* 98a3d4: mov al, byte ptr [esi + 0x2388] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2388u))) & 0xffu);
/* 98a3da: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a3dc: je 0x98a48b */
  if (zf) goto L_98a48b;
L_98a3e2: /* 98a3e2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a3e5: xor eax, eax */
  eax = 0;
/* 98a3e7: add ecx, 0x238c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x238cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a3f0: /* 98a3f0: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a3f3: xor edx, edx */
  edx = 0;
/* 98a3f5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3f7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a3fb: jle 0x98a441 */
  if ((zf || sf != of)) goto L_98a441;
L_98a3fd: /* 98a3fd: mov dword ptr [esp + 0x24], 4 */
  W32((uint32_t)(esp + 0x24u), 0x4u);
L_98a405: /* 98a405: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 98a407: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a409: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 98a40c: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a40f: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a412: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a415: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 98a419: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a41b: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a41e: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 98a421: lea esi, [edx + esi - 4] */
  esi = (uint32_t)(edx + esi + 0xfffffffcu);
/* 98a425: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a427: mov byte ptr [esi + eax], dl */
  W8((uint32_t)(esi + eax), (edx & 0xffu));
/* 98a42a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98a42e: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a431: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98a432: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a435: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a437: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a43b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98a43f: jl 0x98a405 */
  if ((sf != of)) goto L_98a405;
L_98a441: /* 98a441: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a443: xor esi, esi */
  esi = 0;
/* 98a445: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a447: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a44b: jle 0x98a480 */
  if ((zf || sf != of)) goto L_98a480;
L_98a44d: /* 98a44d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a450: /* 98a450: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a452: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a455: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a458: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a45b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a45e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 98a460: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 98a464: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 98a465: imul ebx, edx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(edx);
  ebx = (uint32_t)r;
  }
/* 98a468: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a46b: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a46d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98a470: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a472: mov byte ptr [edx + eax], bl */
  W8((uint32_t)(edx + eax), (ebx & 0xffu));
/* 98a475: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a477: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a478: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a47a: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a47e: jl 0x98a450 */
  if ((sf != of)) goto L_98a450;
L_98a480: /* 98a480: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a481: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a482: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a485: jle 0x98a3f0 */
  if ((zf || sf != of)) goto L_98a3f0;
L_98a48b: /* 98a48b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a48e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98a492: cmp ecx, dword ptr [eax + 0x239c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x239cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a498: jl 0x98a89a */
  if ((sf != of)) goto L_98a89a;
L_98a49e: /* 98a49e: mov cl, byte ptr [eax + 0x2390] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2390u))) & 0xffu);
/* 98a4a4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4a6: je 0x98a812 */
  if (zf) goto L_98a812;
L_98a4ac: /* 98a4ac: mov cl, byte ptr [eax + 0x2385] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2385u))) & 0xffu);
/* 98a4b2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4b4: je 0x98a670 */
  if (zf) goto L_98a670;
L_98a4ba: /* 98a4ba: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a4bd: xor ecx, ecx */
  ecx = 0;
/* 98a4bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4c1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a4c5: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a4cb: /* 98a4cb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a4cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a4d0: /* 98a4d0: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a4d3: mov edx, ecx */
  edx = ecx;
/* 98a4d5: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a4d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4da: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a4dd: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a4e5: jle 0x98a65b */
  if ((zf || sf != of)) goto L_98a65b;
L_98a4eb: /* 98a4eb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a4ef: fstp qword ptr [esp + 0xd0] */
  WF64((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 98a4f6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98a4fa: fstp qword ptr [esp + 0xd8] */
  WF64((uint32_t)(esp + 0xd8u), ST0); FPOP();
L_98a501: /* 98a501: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a505: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a507: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a50b: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a50f: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a514: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a516: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98a51a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a51e: jge 0x98a526 */
  if ((sf == of)) goto L_98a526;
L_98a520: /* 98a520: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a526: /* 98a526: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a528: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a52e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98a532: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a538: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a53c: jge 0x98a544 */
  if ((sf == of)) goto L_98a544;
L_98a53e: /* 98a53e: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a544: /* 98a544: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a546: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a54c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a550: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a556: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a55a: jge 0x98a562 */
  if ((sf == of)) goto L_98a562;
L_98a55c: /* 98a55c: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a562: /* 98a562: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a568: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a56c: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a572: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a579: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a580: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 98a582: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a589: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a590: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a592: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a599: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59d: fld qword ptr [esp + 0xd8] */
  { double v = F64((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 98a5a4: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5ab: fst qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0);
/* 98a5b2: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5b9: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a5c0: fmul qword ptr [esp + 0x88] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x88u)));
/* 98a5c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5c9: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5d0: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 98a5d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a5db: fabs  */
  ST0 = fabs(ST0);
/* 98a5dd: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a5e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a5e5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a5e8: jne 0x98a629 */
  if (!zf) goto L_98a629;
L_98a5ea: /* 98a5ea: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a5ec: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a5f2: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5f9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a5fb: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a602: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a609: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a60b: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a612: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a619: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a620: jmp 0x98a62b */
  goto L_98a62b;
L_98a622: /* 98a622: mov eax, ebx */
  eax = ebx;
/* 98a624: jmp 0x98a2e9 */
  goto L_98a2e9;
L_98a629: /* 98a629: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a62b: /* 98a62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a62c: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 98a633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a634: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98a638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a639: call 0x987960 */
  esp -= 4; W32(esp, 0x98a63eu); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a63e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a642: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a644: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a647: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a648: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a64b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a64d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a651: jl 0x98a501 */
  if ((sf != of)) goto L_98a501;
L_98a657: /* 98a657: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
L_98a65b: /* 98a65b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a65e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a65f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a661: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a665: jl 0x98a4d0 */
  if ((sf != of)) goto L_98a4d0;
L_98a66b: /* 98a66b: jmp 0x98a812 */
  goto L_98a812;
L_98a670: /* 98a670: mov cl, byte ptr [eax + 0x2386] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2386u))) & 0xffu);
/* 98a676: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a678: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a67b: je 0x98a720 */
  if (zf) goto L_98a720;
L_98a681: /* 98a681: xor ecx, ecx */
  ecx = 0;
/* 98a683: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a685: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a689: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a68f: /* 98a68f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a691: /* 98a691: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a694: mov edx, ecx */
  edx = ecx;
/* 98a696: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a699: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a69c: xor esi, esi */
  esi = 0;
/* 98a69e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a6a0: jle 0x98a70b */
  if ((zf || sf != of)) goto L_98a70b;
L_98a6a2: /* 98a6a2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_98a6a3: /* 98a6a3: movzx eax, byte ptr [ebx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a6a7: movzx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a6aa: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a6ae: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6b2: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a6b6: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6bc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6c0: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6c4: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6ca: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6ce: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 98a6d2: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6d8: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6de: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6e3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6e3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6e7: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6ed: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a6f0: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6f6: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6fbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6fb: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a6fd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a6ff: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a700: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a703: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a705: jl 0x98a6a3 */
  if ((sf != of)) goto L_98a6a3;
L_98a707: /* 98a707: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_98a70b: /* 98a70b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a70e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a70f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a711: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a715: jl 0x98a691 */
  if ((sf != of)) goto L_98a691;
L_98a71b: /* 98a71b: jmp 0x98a812 */
  goto L_98a812;
L_98a720: /* 98a720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a722: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a72a: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a730: /* 98a730: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a732: /* 98a732: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98a736: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a739: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a73c: xor esi, esi */
  esi = 0;
/* 98a73e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a740: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a743: jle 0x98a7fe */
  if ((zf || sf != of)) goto L_98a7fe;
L_98a749: /* 98a749: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98a750: /* 98a750: movzx edx, byte ptr [ebx] */
  edx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a753: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a756: movzx ecx, byte ptr [eax + 0x2394] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2394u)));
/* 98a75d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a761: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a765: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a769: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a76d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a771: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a775: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a777: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a77d: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a782u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a782: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a785: movzx ecx, byte ptr [ebx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a789: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a78b: movzx eax, byte ptr [edx + 0x2395] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2395u)));
/* 98a792: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a796: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a79a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a79e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7a2: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7a6: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7ac: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7b2: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7b7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7b7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a7ba: movzx ecx, byte ptr [ebx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a7be: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a7c1: movzx eax, byte ptr [edx + 0x2396] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2396u)));
/* 98a7c8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a7cc: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7d0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a7d4: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7d8: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7dc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7e2: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7e8: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7edu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7ed: mov byte ptr [ebx + 2], al */
  W8((uint32_t)(ebx + 0x2u), (eax & 0xffu));
/* 98a7f0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a7f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a7f3: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a7f6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a7f8: jl 0x98a750 */
  if ((sf != of)) goto L_98a750;
L_98a7fe: /* 98a7fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a802: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a805: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a806: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a808: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a80c: jl 0x98a732 */
  if ((sf != of)) goto L_98a732;
L_98a812: /* 98a812: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a815: mov al, byte ptr [edx + 0x2391] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2391u))) & 0xffu);
/* 98a81b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a81d: je 0x98a88b */
  if (zf) goto L_98a88b;
L_98a81f: /* 98a81f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a824: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a82c: jle 0x98a88b */
  if ((zf || sf != of)) goto L_98a88b;
L_98a82e: /* 98a82e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a830: /* 98a830: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a834: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a837: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a83a: xor esi, esi */
  esi = 0;
/* 98a83c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a83e: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a841: jle 0x98a87b */
  if ((zf || sf != of)) goto L_98a87b;
L_98a843: /* 98a843: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_98a846: /* 98a846: movzx eax, byte ptr [ebx] */
  eax = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a849: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a84c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a850: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a854: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a858: fild dword ptr [ecx + 0x2398] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x2398u)); FPUSH(v); }
/* 98a85e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a862: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a864: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a86a: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a86fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a86f: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a871: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a874: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a877: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a879: jl 0x98a846 */
  if ((sf != of)) goto L_98a846;
L_98a87b: /* 98a87b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a87f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a882: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a883: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a885: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a889: jl 0x98a830 */
  if ((sf != of)) goto L_98a830;
L_98a88b: /* 98a88b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a88f: fmul dword ptr [esp + 0x9c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x9cu)));
/* 98a896: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a89a: /* 98a89a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a89d: mov al, byte ptr [edx + 0x2385] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2385u))) & 0xffu);
/* 98a8a3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a8a5: je 0x98a9ef */
  if (zf) goto L_98a9ef;
L_98a8ab: /* 98a8ab: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a8ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8b0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a8b8: jle 0x98a9ef */
  if ((zf || sf != of)) goto L_98a9ef;
L_98a8be: /* 98a8be: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a8c0: /* 98a8c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a8c4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a8c7: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a8ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8cc: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a8cf: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a8d7: jle 0x98a9db */
  if ((zf || sf != of)) goto L_98a9db;
L_98a8dd: /* 98a8dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a8e0: /* 98a8e0: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a8e4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a8e6: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a8ea: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a8ee: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a8f3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8f5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98a8f9: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a8fd: jge 0x98a905 */
  if ((sf == of)) goto L_98a905;
L_98a8ff: /* 98a8ff: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a905: /* 98a905: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a907: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a90d: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98a911: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a917: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a91b: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a91f: jge 0x98a927 */
  if ((sf == of)) goto L_98a927;
L_98a921: /* 98a921: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a927: /* 98a927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a929: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a92f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a933: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a939: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a93d: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a941: jge 0x98a949 */
  if ((sf == of)) goto L_98a949;
L_98a943: /* 98a943: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a949: /* 98a949: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a94f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a953: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a959: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a95d: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a961: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 98a965: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 98a969: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a96d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a96f: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a973: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 98a977: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a979: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a97b: fabs  */
  ST0 = fabs(ST0);
/* 98a97d: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a985: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a988: jne 0x98a9b0 */
  if (!zf) goto L_98a9b0;
L_98a98a: /* 98a98a: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a98c: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a992: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a996: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a998: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a99c: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a9a0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a9a2: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a9a6: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a9aa: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a9ae: jmp 0x98a9b2 */
  goto L_98a9b2;
L_98a9b0: /* 98a9b0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a9b2: /* 98a9b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a9b3: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 98a9b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a9b8: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 98a9bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a9bd: call 0x987960 */
  esp -= 4; W32(esp, 0x98a9c2u); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a9c2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a9c6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a9c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a9cb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9cc: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a9cf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9d1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a9d5: jl 0x98a8e0 */
  if ((sf != of)) goto L_98a8e0;
L_98a9db: /* 98a9db: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a9df: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a9e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9e3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9e5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a9e9: jl 0x98a8c0 */
  if ((sf != of)) goto L_98a8c0;
L_98a9ef: /* 98a9ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a9f2: cmp word ptr [eax + 0x237e], 0x1f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x237eu))); uint16_t b = (uint16_t)(0x1fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a9fa: jne 0x98aa09 */
  if (!zf) goto L_98aa09;
L_98a9fc: /* 98a9fc: movsx edx, word ptr [eax + 0x2380] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x2380u)));
/* 98aa03: cmp dword ptr [esp + 0x2c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa07: jge 0x98aa15 */
  if ((sf == of)) goto L_98aa15;
L_98aa09: /* 98aa09: mov al, byte ptr [esp + 0x37] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x37u))) & 0xffu);
/* 98aa0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa0f: je 0x989c82 */
  if (zf) goto L_989c82;
L_98aa15: /* 98aa15: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 98aa1c: mov byte ptr [esp + 0x934], 1 */
  W8((uint32_t)(esp + 0x934u), 0x1u);
/* 98aa24: call 0x98e840 */
  esp -= 4; W32(esp, 0x98aa29u); SPILL(); f_98e840(); if (g_unwind) return; RELOAD();
/* 98aa29: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 98aa2d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98aa31: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98aa35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98aa36: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa38: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98aa3c: jl 0x989b20 */
  if ((sf != of)) goto L_989b20;
L_98aa42: /* 98aa42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98aa43: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98aa48u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98aa48: mov eax, dword ptr [esp + 0xc8] */
  eax = R32((uint32_t)(esp + 0xc8u));
/* 98aa4f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98aa52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa54: je 0x98aa5f */
  if (zf) goto L_98aa5f;
L_98aa56: /* 98aa56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98aa57: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98aa5cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98aa5c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98aa5f: /* 98aa5f: mov ecx, dword ptr [esp + 0x92c] */
  ecx = R32((uint32_t)(esp + 0x92cu));
/* 98aa66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98aa67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98aa68: mov eax, 1 */
  eax = 0x1u;
/* 98aa6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98aa74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98aa75: mov esp, ebp */
  esp = ebp;
/* 98aa77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98aa78: ret  */
  esp += 4; SPILL(); return;
}

void f_989dbd(void) {
  LOAD_REGS();
  goto L_989dbd;
L_989b20: /* 989b20: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 989b27: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 989b2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b2c: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 989b30: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 989b34: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x989b39u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 989b39: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 989b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b40: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x989b45u); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 989b45: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 989b48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989b4b: cmp word ptr [ebx + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989b53: mov edi, eax */
  edi = eax;
/* 989b55: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 989b59: jne 0x989b72 */
  if (!zf) goto L_989b72;
L_989b5b: /* 989b5b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 989b5e: movsx eax, word ptr [ecx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x34u)));
/* 989b62: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b67: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b6a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989b6c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 989b70: jmp 0x989b85 */
  goto L_989b85;
L_989b72: /* 989b72: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 989b75: movsx eax, word ptr [edx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0x34u)));
/* 989b79: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b7e: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b81: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
L_989b85: /* 989b85: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 989b89: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 989b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989b8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989b8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b8f: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 989b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b97: call 0x98f100 */
  esp -= 4; W32(esp, 0x989b9cu); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 989b9c: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 989ba3: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 989ba7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989baa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 989bac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989bad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989bae: mov byte ptr [0xcf2fec], 1 */
  W8((uint32_t)(0xcf2fecu), 0x1u);
/* 989bb5: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 989bb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989bba: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 989bc1: call 0x98eed0 */
  esp -= 4; W32(esp, 0x989bc6u); SPILL(); f_98eed0(); if (g_unwind) return; RELOAD();
/* 989bc6: movsx eax, word ptr [ebx + 0x2382] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebx + 0x2382u)));
/* 989bcd: add eax, 0xffffff7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7au);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989bd2: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989bd5: mov byte ptr [esp + 0x934], 2 */
  W8((uint32_t)(esp + 0x934u), 0x2u);
/* 989bdd: ja 0x989c3e */
  if ((!cf && !zf)) goto L_989c3e;
L_989bdf: /* 989bdf: jmp dword ptr [eax*4 + 0x98aae4] */
  switch (R32((uint32_t)(eax*4 + 0x98aae4u))) {
    case 0x989be6u: goto L_989be6;
    case 0x989bfbu: goto L_989bfb;
    case 0x989c10u: goto L_989c10;
    case 0x989c27u: goto L_989c27;
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989bdf, R32((uint32_t)(eax*4 + 0x98aae4u))); return;
  }
L_989be6: /* 989be6: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989bed: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989bf4: call 0x98e5d0 */
  esp -= 4; W32(esp, 0x989bf9u); SPILL(); f_98e5d0(); if (g_unwind) return; RELOAD();
/* 989bf9: jmp 0x989c51 */
  goto L_989c51;
L_989bfb: /* 989bfb: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c02: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c09: call 0x98e240 */
  esp -= 4; W32(esp, 0x989c0eu); SPILL(); f_98e240(); if (g_unwind) return; RELOAD();
/* 989c0e: jmp 0x989c51 */
  goto L_989c51;
L_989c10: /* 989c10: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c19: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c20: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c25u); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c25: jmp 0x989c51 */
  goto L_989c51;
L_989c27: /* 989c27: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 989c2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c30: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c37: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c3cu); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c3c: jmp 0x989c51 */
  goto L_989c51;
L_989c3e: /* 989c3e: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c45: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c4c: call 0x98e120 */
  esp -= 4; W32(esp, 0x989c51u); SPILL(); f_98e120(); if (g_unwind) return; RELOAD();
L_989c51: /* 989c51: mov byte ptr [0xcf2fec], 0 */
  W8((uint32_t)(0xcf2fecu), 0x0u);
/* 989c58: fild dword ptr [ebx + 0x23a0] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x23a0u)); FPUSH(v); }
/* 989c5e: mov byte ptr [esp + 0x37], 0 */
  W8((uint32_t)(esp + 0x37u), 0x0u);
/* 989c63: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 989c6b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 989c71: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 989c77: fst dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0);
/* 989c7e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_989c82: /* 989c82: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989c85: mov al, byte ptr [ecx + 0x23a5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a5u))) & 0xffu);
/* 989c8b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 989c8d: je 0x989ce3 */
  if (zf) goto L_989ce3;
L_989c8f: /* 989c8f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989c92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989c94: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989c97: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989c9f: jle 0x989ce3 */
  if ((zf || sf != of)) goto L_989ce3;
L_989ca1: /* 989ca1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989ca3: xor ebx, ebx */
  ebx = 0;
/* 989ca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ca7: jle 0x989cd3 */
  if ((zf || sf != of)) goto L_989cd3;
L_989ca9: /* 989ca9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_989cb0: /* 989cb0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 989cb4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 989cb7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989cba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989cbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989cbf: call 0x987a90 */
  esp -= 4; W32(esp, 0x989cc4u); SPILL(); f_987a90(); if (g_unwind) return; RELOAD();
/* 989cc4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 989cc6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989cc8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ccb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 989cce: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 989ccf: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cd1: jl 0x989cb0 */
  if ((sf != of)) goto L_989cb0;
L_989cd3: /* 989cd3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989cd7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989cda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989cdb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cdd: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ce1: jl 0x989ca1 */
  if ((sf != of)) goto L_989ca1;
L_989ce3: /* 989ce3: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 989ce7: xor ebx, ebx */
  ebx = 0;
/* 989ce9: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989cec: ja 0x989d11 */
  if ((!cf && !zf)) goto L_989d11;
L_989cee: /* 989cee: jmp dword ptr [eax*4 + 0x98aaf4] */
  switch (R32((uint32_t)(eax*4 + 0x98aaf4u))) {
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989cee, R32((uint32_t)(eax*4 + 0x98aaf4u))); return;
  }
L_989cf5: /* 989cf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 989cf8: xor eax, eax */
  eax = 0;
/* 989cfa: mov al, byte ptr [edx + 0x23a6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23a6u))) & 0xffu);
/* 989d00: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d04: mov edx, edi */
  edx = edi;
/* 989d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d07: call 0x9875e0 */
  esp -= 4; W32(esp, 0x989d0cu); SPILL(); f_9875e0(); if (g_unwind) return; RELOAD();
L_989d0c: /* 989d0c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989d0f: /* 989d0f: mov ebx, eax */
  ebx = eax;
L_989d11: /* 989d11: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 989d14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 989d16: je 0x98a163 */
  if (zf) goto L_98a163;
L_989d1c: /* 989d1c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 989d20: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 989d24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989d27: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x989d29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 989d29: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 989d2c: jmp 0x98a189 */
  goto L_98a189;
L_989d31: /* 989d31: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989d34: xor edx, edx */
  edx = 0;
/* 989d36: mov dl, byte ptr [ecx + 0x23a6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a6u))) & 0xffu);
/* 989d3c: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d41: mov edx, edi */
  edx = edi;
/* 989d43: call 0x987710 */
  esp -= 4; W32(esp, 0x989d48u); SPILL(); f_987710(); if (g_unwind) return; RELOAD();
/* 989d48: jmp 0x989d0c */
  goto L_989d0c;
L_989d4a: /* 989d4a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d4d: xor ecx, ecx */
  ecx = 0;
/* 989d4f: mov cl, byte ptr [eax + 0x23a6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a6u))) & 0xffu);
/* 989d55: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d59: mov edx, edi */
  edx = edi;
/* 989d5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d5c: call 0x9877f0 */
  esp -= 4; W32(esp, 0x989d61u); SPILL(); f_9877f0(); if (g_unwind) return; RELOAD();
/* 989d61: jmp 0x989d0c */
  goto L_989d0c;
L_989d63: /* 989d63: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d66: xor edx, edx */
  edx = 0;
/* 989d68: mov dl, byte ptr [eax + 0x23a7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a7u))) & 0xffu);
/* 989d6e: movzx eax, byte ptr [eax + 0x23a6] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x23a6u)));
/* 989d75: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d7b: mov edx, edi */
  edx = edi;
/* 989d7d: call 0x987510 */
  esp -= 4; W32(esp, 0x989d82u); SPILL(); f_987510(); if (g_unwind) return; RELOAD();
/* 989d82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989d85: jmp 0x989d0f */
  goto L_989d0f;
L_989d87: /* 989d87: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989d8a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989d8d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d90: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989d94: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989d99u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989d99: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989d9c: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989d9f: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989da2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989da5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989da7: mov ebx, eax */
  ebx = eax;
/* 989da9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989dad: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989db5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989dbb: /* 989dbb: jmp 0x989dc0 */
  goto L_989dc0;
L_989dbd: /* 989dbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_989dc0: /* 989dc0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989dc2: mov edx, eax */
  edx = eax;
/* 989dc4: mov esi, eax */
  esi = eax;
/* 989dc6: shr edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989dc9: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989dcc: and edx, 0xf00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989dd2: and esi, 0xf0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dd8: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dda: mov esi, eax */
  esi = eax;
/* 989ddc: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ddf: shr esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989de2: and eax, 0xf000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989de7: and esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dea: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dec: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989df2: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989df5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989df8: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989dfb: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989dfe: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e02: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e06: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e0a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e0c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989e10: jl 0x989dc0 */
  if ((sf != of)) goto L_989dc0;
L_989e12: /* 989e12: jmp 0x989d11 */
  goto L_989d11;
L_989e17: /* 989e17: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e1a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e1d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989e20: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989e24: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989e29u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989e29: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989e2c: mov ebx, eax */
  ebx = eax;
/* 989e2e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e31: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e34: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989e37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989e39: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989e3d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989e45: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989e4b: /* 989e4b: jmp 0x989e50 */
  goto L_989e50;
L_989e50: /* 989e50: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989e52: mov edx, eax */
  edx = eax;
/* 989e54: mov esi, eax */
  esi = eax;
/* 989e56: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989e59: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e5c: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989e62: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e65: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e67: mov esi, eax */
  esi = eax;
/* 989e69: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989e6c: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e6f: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989e74: and esi, 0x8000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e7a: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7c: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989e82: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989e85: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989e88: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989e8b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989e8e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e92: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e96: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e9a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e9c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ea0: jl 0x989e50 */
  if ((sf != of)) goto L_989e50;
L_989ea2: /* 989ea2: jmp 0x989d11 */
  goto L_989d11;
L_989ea7: /* 989ea7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989eaa: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ead: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989eb0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989eb4: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989eb9u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989eb9: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989ebc: mov ebx, eax */
  ebx = eax;
/* 989ebe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989ec1: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ec4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ec9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989ecd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989ed5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989edb: /* 989edb: jmp 0x989ee0 */
  goto L_989ee0;
L_989ee0: /* 989ee0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989ee2: mov edx, eax */
  edx = eax;
/* 989ee4: mov esi, eax */
  esi = eax;
/* 989ee6: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989ee9: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989eef: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ef2: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989ef5: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989efa: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989efd: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989eff: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f05: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f08: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f0b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f0e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f11: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f15: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f19: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f1c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f1d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f1f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989f23: jl 0x989ee0 */
  if ((sf != of)) goto L_989ee0;
L_989f25: /* 989f25: jmp 0x989d11 */
  goto L_989d11;
L_989f2a: /* 989f2a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f2d: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f30: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989f33: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989f37: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989f3cu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989f3c: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989f3f: mov ebx, eax */
  ebx = eax;
/* 989f41: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f44: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989f4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989f4c: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989f50: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989f58: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989f5e: /* 989f5e: mov edi, edi */
  edi = edi;
L_989f60: /* 989f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989f62: mov edx, eax */
  edx = eax;
/* 989f64: mov esi, eax */
  esi = eax;
/* 989f66: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989f69: and edx, 0x7e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989f6f: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989f72: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989f75: and eax, 0xf800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989f7a: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989f7d: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f7f: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f81: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f85: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f88: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f8b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f8e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f91: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f95: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f99: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f9d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f9f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989fa3: jl 0x989f60 */
  if ((sf != of)) goto L_989f60;
L_989fa5: /* 989fa5: jmp 0x989d11 */
  goto L_989d11;
L_989faa: /* 989faa: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fad: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fb0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989fb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989fb4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989fb8: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989fbdu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989fbd: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989fc0: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 989fc3: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989fc6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 989fc9: mov ebx, eax */
  ebx = eax;
/* 989fcb: mov eax, ecx */
  eax = ecx;
/* 989fcd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 989fd0: mov edi, ebx */
  edi = ebx;
/* 989fd2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 989fd4: mov ecx, eax */
  ecx = eax;
/* 989fd6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989fd9: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 989fdc: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 989fde: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 989fe2: jmp 0x989d11 */
  goto L_989d11;
L_989fe7: /* 989fe7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fea: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 989ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989ff1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989ff5: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989ffau); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989ffa: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989ffd: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a000: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a003: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a006: xor ecx, ecx */
  ecx = 0;
/* 98a008: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a00a: mov ebx, eax */
  ebx = eax;
/* 98a00c: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_98a012: /* 98a012: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a014: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a016: mov dl, byte ptr [esi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 98a019: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a01a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a01c: mov dl, byte ptr [esi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 98a01f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a020: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a022: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a025: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a028: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a029: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a02c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a02d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a02f: jl 0x98a012 */
  if ((sf != of)) goto L_98a012;
L_98a031: /* 98a031: jmp 0x989d11 */
  goto L_989d11;
L_98a036: /* 98a036: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a03c: mov esi, 3 */
  esi = 0x3u;
/* 98a041: cmp word ptr [ecx + 0x34], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x34u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a045: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98a048: mov byte ptr [esp + 0xa4], dl */
  W8((uint32_t)(esp + 0xa4u), (edx & 0xffu));
/* 98a04f: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 98a056: xor edx, edx */
  edx = 0;
/* 98a058: mov dl, byte ptr [eax + 0x23a4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a4u))) & 0xffu);
/* 98a05e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a05f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a062: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98a069: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a06a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a06c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a06e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 98a070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a071: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98a074: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a076: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a077: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a079: call 0x98f5b0 */
  esp -= 4; W32(esp, 0x98a07eu); SPILL(); f_98f5b0(); if (g_unwind) return; RELOAD();
/* 98a07e: mov ebx, eax */
  ebx = eax;
/* 98a080: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a083: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 98a086: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 98a08a: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 98a08e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a091: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a093: jne 0x989d11 */
  if (!zf) goto L_989d11;
L_98a099: /* 98a099: cmp dword ptr [esp + 0xb8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xb8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a0a0: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 98a0a7: jne 0x98a0ef */
  if (!zf) goto L_98a0ef;
L_98a0a9: /* 98a0a9: xor eax, eax */
  eax = 0;
/* 98a0ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0ad: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0b3: /* 98a0b3: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0ba: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a0c0: /* 98a0c0: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a0c3: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a0ca: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a0cc: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a0d3: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a0d6: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a0dd: mov byte ptr [esp + eax*4 + 0x52b], 0xff */
  W8((uint32_t)(esp + eax*4 + 0x52bu), 0xffu);
/* 98a0e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a0e6: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0e9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a0eb: jl 0x98a0c0 */
  if ((sf != of)) goto L_98a0c0;
L_98a0ed: /* 98a0ed: jmp 0x98a12f */
  goto L_98a12f;
L_98a0ef: /* 98a0ef: xor eax, eax */
  eax = 0;
/* 98a0f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0f3: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0f5: /* 98a0f5: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0fc: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0ff: nop  */
L_98a100: /* 98a100: mov dl, byte ptr [esi - 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffff8u))) & 0xffu);
/* 98a103: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a10a: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a10d: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a114: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a116: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a11d: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a120: mov byte ptr [esp + eax*4 + 0x52b], dl */
  W8((uint32_t)(esp + eax*4 + 0x52bu), (edx & 0xffu));
/* 98a127: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a128: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a12b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a12d: jl 0x98a100 */
  if ((sf != of)) goto L_98a100;
L_98a12f: /* 98a12f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 98a132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a134: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 98a139: je 0x98a14f */
  if (zf) goto L_98a14f;
L_98a13b: /* 98a13b: lea ecx, [esp + 0x52c] */
  ecx = (uint32_t)(esp + 0x52cu);
/* 98a142: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98a144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a145: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x98a147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98a147: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a14a: jmp 0x989d11 */
  goto L_989d11;
L_98a14f: /* 98a14f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a152: lea edx, [esp + 0x52c] */
  edx = (uint32_t)(esp + 0x52cu);
/* 98a159: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a15a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a15b: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a160u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
/* 98a160: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a163: /* 98a163: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 98a167: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a169: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a16c: je 0x98a17d */
  if (zf) goto L_98a17d;
L_98a16e: /* 98a16e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98a172: mov eax, ebx */
  eax = ebx;
/* 98a174: mov edx, esi */
  edx = esi;
/* 98a176: call 0x9878d0 */
  esp -= 4; W32(esp, 0x98a17bu); SPILL(); f_9878d0(); if (g_unwind) return; RELOAD();
/* 98a17b: jmp 0x98a18c */
  goto L_98a18c;
L_98a17d: /* 98a17d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98a181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a182: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a184: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a189u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
L_98a189: /* 98a189: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a18c: /* 98a18c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a18d: call 0x99cf5a */
  esp -= 4; W32(esp, 0x98a192u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 98a192: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98a196: mov al, byte ptr [esi + 0x232d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x232du))) & 0xffu);
/* 98a19c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a19f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a1a0: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1a2: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 98a1a6: jne 0x98a1b3 */
  if (!zf) goto L_98a1b3;
L_98a1a8: /* 98a1a8: fld dword ptr [esi + ecx*4 + 0x2330] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x2330u)); FPUSH(v); }
/* 98a1af: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a1b3: /* 98a1b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98a1b9: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 98a1bd: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1c0: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 98a1c4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 98a1c8: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1ca: /* 98a1ca: cmp dword ptr [esp + 0x30], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1cf: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1d1: /* 98a1d1: mov byte ptr [esp + 0x37], 1 */
  W8((uint32_t)(esp + 0x37u), 0x1u);
/* 98a1d6: jmp 0x98a9ef */
  goto L_98a9ef;
L_98a1db: /* 98a1db: cmp word ptr [esi + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1e3: jne 0x98a252 */
  if (!zf) goto L_98a252;
L_98a1e5: /* 98a1e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a1e6: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98a1ebu); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98a1eb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a1ee: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98a1f1: movsx ecx, word ptr [eax + 0x34] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x34u)));
/* 98a1f5: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 98a1f9: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 98a1fc: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 98a1ff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a200: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a202: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a204: mov edi, eax */
  edi = eax;
/* 98a206: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 98a20a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a20c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a20d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a20e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a210: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 98a214: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a216: mov ebx, eax */
  ebx = eax;
/* 98a218: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a219: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a21a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a21b: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 98a21f: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 98a223: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 98a227: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x98a22cu); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 98a22c: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98a230: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98a233: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a234: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a237: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a239: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a23a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a23b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a23c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a23d: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 98a241: call 0x98f100 */
  esp -= 4; W32(esp, 0x98a246u); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 98a246: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 98a24a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a24d: jmp 0x98a365 */
  goto L_98a365;
L_98a252: /* 98a252: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a255: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a258: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25a: /* 98a25a: cmp dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a25d: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25f: /* 98a25f: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 98a266: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98a26a: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 98a26d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a270: imul ecx, dword ptr [eax] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax)));
  ecx = (uint32_t)r;
  }
/* 98a273: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 98a276: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98a279: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98a27c: mov edx, ecx */
  edx = ecx;
/* 98a27e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98a281: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 98a283: mov ecx, edx */
  ecx = edx;
/* 98a285: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98a288: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 98a28a: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98a28e: jmp 0x98a333 */
  goto L_98a333;
L_98a293: /* 98a293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a295: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a298: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a29c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a2a4: jle 0x98a333 */
  if ((zf || sf != of)) goto L_98a333;
L_98a2aa: /* 98a2aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98a2b0: /* 98a2b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2b2: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a2b5: mov edx, eax */
  edx = eax;
/* 98a2b7: imul edx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  edx = (uint32_t)r;
  }
/* 98a2bc: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a2bf: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2c3: mov esi, ebx */
  esi = ebx;
/* 98a2c5: je 0x98a2ca */
  if (zf) goto L_98a2ca;
L_98a2c7: /* 98a2c7: lea esi, [ebx + eax*4] */
  esi = (uint32_t)(ebx + eax*4);
L_98a2ca: /* 98a2ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a2cc: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a2d4: jle 0x98a31d */
  if ((zf || sf != of)) goto L_98a31d;
L_98a2d6: /* 98a2d6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2d8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2db: mov ecx, esi */
  ecx = esi;
/* 98a2dd: je 0x98a622 */
  if (zf) goto L_98a622;
L_98a2e3: /* 98a2e3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 98a2e6: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
L_98a2e9: /* 98a2e9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a2ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a2ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a2ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a2ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a2f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a2f1: call 0x987d90 */
  esp -= 4; W32(esp, 0x98a2f6u); SPILL(); f_987d90(); if (g_unwind) return; RELOAD();
/* 98a2f6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98a2fa: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98a2fc: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a300: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a303: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 98a307: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a309: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a30c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a30f: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a312: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a315: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a317: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a31b: jl 0x98a2d6 */
  if ((sf != of)) goto L_98a2d6;
L_98a31d: /* 98a31d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98a321: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a324: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a327: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a329: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a32d: jl 0x98a2b0 */
  if ((sf != of)) goto L_98a2b0;
L_98a333: /* 98a333: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a335: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a336: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a337: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a339: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a33b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 98a33d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a340: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a341: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a342: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a344: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a346: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 98a349: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 98a34d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a34e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a34f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a351: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a353: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98a357: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a35b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a35c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a35d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a35f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a361: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_98a365: /* 98a365: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a368: mov al, byte ptr [esi + 0x2387] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2387u))) & 0xffu);
/* 98a36e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a370: je 0x98a3d4 */
  if (zf) goto L_98a3d4;
L_98a372: /* 98a372: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a375: xor eax, eax */
  eax = 0;
/* 98a377: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a379: jle 0x98a3a8 */
  if ((zf || sf != of)) goto L_98a3a8;
L_98a37b: /* 98a37b: mov ecx, 4 */
  ecx = 0x4u;
L_98a380: /* 98a380: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a382: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a385: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a388: mov byte ptr [ebx + edx*4 + 3], 0 */
  W8((uint32_t)(ebx + edx*4 + 0x3u), 0x0u);
/* 98a38d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a38f: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a392: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a395: lea edx, [edx + ebx - 4] */
  edx = (uint32_t)(edx + ebx + 0xfffffffcu);
/* 98a399: mov byte ptr [edx + 3], 0 */
  W8((uint32_t)(edx + 0x3u), 0x0u);
/* 98a39d: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a3a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3a1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3a4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3a6: jl 0x98a380 */
  if ((sf != of)) goto L_98a380;
L_98a3a8: /* 98a3a8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3aa: xor eax, eax */
  eax = 0;
/* 98a3ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3ae: jle 0x98a3d4 */
  if ((zf || sf != of)) goto L_98a3d4;
L_98a3b0: /* 98a3b0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3b3: mov byte ptr [ecx + eax*4 + 3], 0 */
  W8((uint32_t)(ecx + eax*4 + 0x3u), 0x0u);
/* 98a3b8: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a3bb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a3bd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 98a3be: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a3c1: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3c4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98a3c6: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 98a3c9: mov byte ptr [ecx + 3], 0 */
  W8((uint32_t)(ecx + 0x3u), 0x0u);
/* 98a3cd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3d2: jl 0x98a3b0 */
  if ((sf != of)) goto L_98a3b0;
L_98a3d4: /* 98a3d4: mov al, byte ptr [esi + 0x2388] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2388u))) & 0xffu);
/* 98a3da: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a3dc: je 0x98a48b */
  if (zf) goto L_98a48b;
L_98a3e2: /* 98a3e2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a3e5: xor eax, eax */
  eax = 0;
/* 98a3e7: add ecx, 0x238c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x238cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a3f0: /* 98a3f0: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a3f3: xor edx, edx */
  edx = 0;
/* 98a3f5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3f7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a3fb: jle 0x98a441 */
  if ((zf || sf != of)) goto L_98a441;
L_98a3fd: /* 98a3fd: mov dword ptr [esp + 0x24], 4 */
  W32((uint32_t)(esp + 0x24u), 0x4u);
L_98a405: /* 98a405: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 98a407: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a409: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 98a40c: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a40f: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a412: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a415: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 98a419: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a41b: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a41e: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 98a421: lea esi, [edx + esi - 4] */
  esi = (uint32_t)(edx + esi + 0xfffffffcu);
/* 98a425: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a427: mov byte ptr [esi + eax], dl */
  W8((uint32_t)(esi + eax), (edx & 0xffu));
/* 98a42a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98a42e: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a431: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98a432: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a435: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a437: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a43b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98a43f: jl 0x98a405 */
  if ((sf != of)) goto L_98a405;
L_98a441: /* 98a441: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a443: xor esi, esi */
  esi = 0;
/* 98a445: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a447: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a44b: jle 0x98a480 */
  if ((zf || sf != of)) goto L_98a480;
L_98a44d: /* 98a44d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a450: /* 98a450: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a452: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a455: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a458: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a45b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a45e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 98a460: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 98a464: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 98a465: imul ebx, edx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(edx);
  ebx = (uint32_t)r;
  }
/* 98a468: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a46b: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a46d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98a470: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a472: mov byte ptr [edx + eax], bl */
  W8((uint32_t)(edx + eax), (ebx & 0xffu));
/* 98a475: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a477: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a478: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a47a: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a47e: jl 0x98a450 */
  if ((sf != of)) goto L_98a450;
L_98a480: /* 98a480: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a481: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a482: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a485: jle 0x98a3f0 */
  if ((zf || sf != of)) goto L_98a3f0;
L_98a48b: /* 98a48b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a48e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98a492: cmp ecx, dword ptr [eax + 0x239c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x239cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a498: jl 0x98a89a */
  if ((sf != of)) goto L_98a89a;
L_98a49e: /* 98a49e: mov cl, byte ptr [eax + 0x2390] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2390u))) & 0xffu);
/* 98a4a4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4a6: je 0x98a812 */
  if (zf) goto L_98a812;
L_98a4ac: /* 98a4ac: mov cl, byte ptr [eax + 0x2385] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2385u))) & 0xffu);
/* 98a4b2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4b4: je 0x98a670 */
  if (zf) goto L_98a670;
L_98a4ba: /* 98a4ba: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a4bd: xor ecx, ecx */
  ecx = 0;
/* 98a4bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4c1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a4c5: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a4cb: /* 98a4cb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a4cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a4d0: /* 98a4d0: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a4d3: mov edx, ecx */
  edx = ecx;
/* 98a4d5: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a4d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4da: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a4dd: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a4e5: jle 0x98a65b */
  if ((zf || sf != of)) goto L_98a65b;
L_98a4eb: /* 98a4eb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a4ef: fstp qword ptr [esp + 0xd0] */
  WF64((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 98a4f6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98a4fa: fstp qword ptr [esp + 0xd8] */
  WF64((uint32_t)(esp + 0xd8u), ST0); FPOP();
L_98a501: /* 98a501: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a505: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a507: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a50b: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a50f: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a514: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a516: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98a51a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a51e: jge 0x98a526 */
  if ((sf == of)) goto L_98a526;
L_98a520: /* 98a520: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a526: /* 98a526: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a528: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a52e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98a532: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a538: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a53c: jge 0x98a544 */
  if ((sf == of)) goto L_98a544;
L_98a53e: /* 98a53e: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a544: /* 98a544: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a546: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a54c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a550: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a556: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a55a: jge 0x98a562 */
  if ((sf == of)) goto L_98a562;
L_98a55c: /* 98a55c: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a562: /* 98a562: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a568: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a56c: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a572: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a579: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a580: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 98a582: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a589: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a590: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a592: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a599: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59d: fld qword ptr [esp + 0xd8] */
  { double v = F64((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 98a5a4: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5ab: fst qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0);
/* 98a5b2: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5b9: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a5c0: fmul qword ptr [esp + 0x88] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x88u)));
/* 98a5c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5c9: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5d0: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 98a5d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a5db: fabs  */
  ST0 = fabs(ST0);
/* 98a5dd: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a5e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a5e5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a5e8: jne 0x98a629 */
  if (!zf) goto L_98a629;
L_98a5ea: /* 98a5ea: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a5ec: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a5f2: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5f9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a5fb: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a602: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a609: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a60b: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a612: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a619: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a620: jmp 0x98a62b */
  goto L_98a62b;
L_98a622: /* 98a622: mov eax, ebx */
  eax = ebx;
/* 98a624: jmp 0x98a2e9 */
  goto L_98a2e9;
L_98a629: /* 98a629: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a62b: /* 98a62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a62c: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 98a633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a634: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98a638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a639: call 0x987960 */
  esp -= 4; W32(esp, 0x98a63eu); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a63e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a642: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a644: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a647: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a648: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a64b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a64d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a651: jl 0x98a501 */
  if ((sf != of)) goto L_98a501;
L_98a657: /* 98a657: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
L_98a65b: /* 98a65b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a65e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a65f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a661: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a665: jl 0x98a4d0 */
  if ((sf != of)) goto L_98a4d0;
L_98a66b: /* 98a66b: jmp 0x98a812 */
  goto L_98a812;
L_98a670: /* 98a670: mov cl, byte ptr [eax + 0x2386] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2386u))) & 0xffu);
/* 98a676: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a678: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a67b: je 0x98a720 */
  if (zf) goto L_98a720;
L_98a681: /* 98a681: xor ecx, ecx */
  ecx = 0;
/* 98a683: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a685: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a689: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a68f: /* 98a68f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a691: /* 98a691: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a694: mov edx, ecx */
  edx = ecx;
/* 98a696: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a699: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a69c: xor esi, esi */
  esi = 0;
/* 98a69e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a6a0: jle 0x98a70b */
  if ((zf || sf != of)) goto L_98a70b;
L_98a6a2: /* 98a6a2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_98a6a3: /* 98a6a3: movzx eax, byte ptr [ebx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a6a7: movzx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a6aa: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a6ae: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6b2: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a6b6: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6bc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6c0: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6c4: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6ca: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6ce: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 98a6d2: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6d8: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6de: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6e3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6e3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6e7: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6ed: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a6f0: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6f6: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6fbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6fb: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a6fd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a6ff: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a700: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a703: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a705: jl 0x98a6a3 */
  if ((sf != of)) goto L_98a6a3;
L_98a707: /* 98a707: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_98a70b: /* 98a70b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a70e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a70f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a711: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a715: jl 0x98a691 */
  if ((sf != of)) goto L_98a691;
L_98a71b: /* 98a71b: jmp 0x98a812 */
  goto L_98a812;
L_98a720: /* 98a720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a722: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a72a: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a730: /* 98a730: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a732: /* 98a732: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98a736: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a739: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a73c: xor esi, esi */
  esi = 0;
/* 98a73e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a740: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a743: jle 0x98a7fe */
  if ((zf || sf != of)) goto L_98a7fe;
L_98a749: /* 98a749: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98a750: /* 98a750: movzx edx, byte ptr [ebx] */
  edx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a753: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a756: movzx ecx, byte ptr [eax + 0x2394] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2394u)));
/* 98a75d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a761: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a765: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a769: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a76d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a771: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a775: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a777: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a77d: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a782u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a782: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a785: movzx ecx, byte ptr [ebx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a789: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a78b: movzx eax, byte ptr [edx + 0x2395] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2395u)));
/* 98a792: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a796: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a79a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a79e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7a2: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7a6: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7ac: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7b2: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7b7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7b7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a7ba: movzx ecx, byte ptr [ebx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a7be: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a7c1: movzx eax, byte ptr [edx + 0x2396] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2396u)));
/* 98a7c8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a7cc: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7d0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a7d4: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7d8: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7dc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7e2: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7e8: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7edu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7ed: mov byte ptr [ebx + 2], al */
  W8((uint32_t)(ebx + 0x2u), (eax & 0xffu));
/* 98a7f0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a7f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a7f3: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a7f6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a7f8: jl 0x98a750 */
  if ((sf != of)) goto L_98a750;
L_98a7fe: /* 98a7fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a802: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a805: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a806: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a808: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a80c: jl 0x98a732 */
  if ((sf != of)) goto L_98a732;
L_98a812: /* 98a812: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a815: mov al, byte ptr [edx + 0x2391] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2391u))) & 0xffu);
/* 98a81b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a81d: je 0x98a88b */
  if (zf) goto L_98a88b;
L_98a81f: /* 98a81f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a824: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a82c: jle 0x98a88b */
  if ((zf || sf != of)) goto L_98a88b;
L_98a82e: /* 98a82e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a830: /* 98a830: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a834: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a837: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a83a: xor esi, esi */
  esi = 0;
/* 98a83c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a83e: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a841: jle 0x98a87b */
  if ((zf || sf != of)) goto L_98a87b;
L_98a843: /* 98a843: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_98a846: /* 98a846: movzx eax, byte ptr [ebx] */
  eax = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a849: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a84c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a850: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a854: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a858: fild dword ptr [ecx + 0x2398] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x2398u)); FPUSH(v); }
/* 98a85e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a862: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a864: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a86a: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a86fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a86f: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a871: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a874: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a877: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a879: jl 0x98a846 */
  if ((sf != of)) goto L_98a846;
L_98a87b: /* 98a87b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a87f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a882: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a883: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a885: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a889: jl 0x98a830 */
  if ((sf != of)) goto L_98a830;
L_98a88b: /* 98a88b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a88f: fmul dword ptr [esp + 0x9c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x9cu)));
/* 98a896: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a89a: /* 98a89a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a89d: mov al, byte ptr [edx + 0x2385] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2385u))) & 0xffu);
/* 98a8a3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a8a5: je 0x98a9ef */
  if (zf) goto L_98a9ef;
L_98a8ab: /* 98a8ab: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a8ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8b0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a8b8: jle 0x98a9ef */
  if ((zf || sf != of)) goto L_98a9ef;
L_98a8be: /* 98a8be: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a8c0: /* 98a8c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a8c4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a8c7: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a8ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8cc: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a8cf: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a8d7: jle 0x98a9db */
  if ((zf || sf != of)) goto L_98a9db;
L_98a8dd: /* 98a8dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a8e0: /* 98a8e0: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a8e4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a8e6: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a8ea: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a8ee: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a8f3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8f5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98a8f9: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a8fd: jge 0x98a905 */
  if ((sf == of)) goto L_98a905;
L_98a8ff: /* 98a8ff: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a905: /* 98a905: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a907: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a90d: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98a911: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a917: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a91b: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a91f: jge 0x98a927 */
  if ((sf == of)) goto L_98a927;
L_98a921: /* 98a921: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a927: /* 98a927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a929: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a92f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a933: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a939: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a93d: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a941: jge 0x98a949 */
  if ((sf == of)) goto L_98a949;
L_98a943: /* 98a943: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a949: /* 98a949: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a94f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a953: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a959: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a95d: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a961: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 98a965: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 98a969: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a96d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a96f: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a973: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 98a977: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a979: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a97b: fabs  */
  ST0 = fabs(ST0);
/* 98a97d: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a985: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a988: jne 0x98a9b0 */
  if (!zf) goto L_98a9b0;
L_98a98a: /* 98a98a: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a98c: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a992: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a996: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a998: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a99c: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a9a0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a9a2: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a9a6: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a9aa: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a9ae: jmp 0x98a9b2 */
  goto L_98a9b2;
L_98a9b0: /* 98a9b0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a9b2: /* 98a9b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a9b3: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 98a9b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a9b8: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 98a9bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a9bd: call 0x987960 */
  esp -= 4; W32(esp, 0x98a9c2u); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a9c2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a9c6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a9c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a9cb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9cc: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a9cf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9d1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a9d5: jl 0x98a8e0 */
  if ((sf != of)) goto L_98a8e0;
L_98a9db: /* 98a9db: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a9df: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a9e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9e3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9e5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a9e9: jl 0x98a8c0 */
  if ((sf != of)) goto L_98a8c0;
L_98a9ef: /* 98a9ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a9f2: cmp word ptr [eax + 0x237e], 0x1f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x237eu))); uint16_t b = (uint16_t)(0x1fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a9fa: jne 0x98aa09 */
  if (!zf) goto L_98aa09;
L_98a9fc: /* 98a9fc: movsx edx, word ptr [eax + 0x2380] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x2380u)));
/* 98aa03: cmp dword ptr [esp + 0x2c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa07: jge 0x98aa15 */
  if ((sf == of)) goto L_98aa15;
L_98aa09: /* 98aa09: mov al, byte ptr [esp + 0x37] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x37u))) & 0xffu);
/* 98aa0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa0f: je 0x989c82 */
  if (zf) goto L_989c82;
L_98aa15: /* 98aa15: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 98aa1c: mov byte ptr [esp + 0x934], 1 */
  W8((uint32_t)(esp + 0x934u), 0x1u);
/* 98aa24: call 0x98e840 */
  esp -= 4; W32(esp, 0x98aa29u); SPILL(); f_98e840(); if (g_unwind) return; RELOAD();
/* 98aa29: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 98aa2d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98aa31: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98aa35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98aa36: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa38: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98aa3c: jl 0x989b20 */
  if ((sf != of)) goto L_989b20;
L_98aa42: /* 98aa42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98aa43: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98aa48u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98aa48: mov eax, dword ptr [esp + 0xc8] */
  eax = R32((uint32_t)(esp + 0xc8u));
/* 98aa4f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98aa52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa54: je 0x98aa5f */
  if (zf) goto L_98aa5f;
L_98aa56: /* 98aa56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98aa57: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98aa5cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98aa5c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98aa5f: /* 98aa5f: mov ecx, dword ptr [esp + 0x92c] */
  ecx = R32((uint32_t)(esp + 0x92cu));
/* 98aa66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98aa67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98aa68: mov eax, 1 */
  eax = 0x1u;
/* 98aa6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98aa74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98aa75: mov esp, ebp */
  esp = ebp;
/* 98aa77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98aa78: ret  */
  esp += 4; SPILL(); return;
}
