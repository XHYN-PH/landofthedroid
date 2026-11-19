#include "recomp.h"
#include "rec_mod.h"

void f_8ae550(void) {
  LOAD_REGS();
L_8ae550: /* 8ae550: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ae551: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ae552: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 8ae556: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ae557: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ae558: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ae559: mov ebx, ecx */
  ebx = ecx;
/* 8ae55b: call 0x6cca40 */
  esp -= 4; W32(esp, 0x8ae560u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 8ae560: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 8ae563: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8ae566: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae569: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8ae56a: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ae56c: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 8ae56f: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ae572: je 0x8ae595 */
  if (zf) goto L_8ae595;
L_8ae574: /* 8ae574: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8ae576: lea edi, [esi + esi*4] */
  edi = (uint32_t)(esi + esi*4);
/* 8ae579: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ae57c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ae57d: lea ecx, [edi + eax + 4] */
  ecx = (uint32_t)(edi + eax + 0x4u);
/* 8ae581: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x8ae587u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 8ae587: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae589: jne 0x8ae5a9 */
  if (!zf) goto L_8ae5a9;
L_8ae58b: /* 8ae58b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ae58d: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 8ae590: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ae593: jne 0x8ae574 */
  if (!zf) goto L_8ae574;
L_8ae595: /* 8ae595: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8ae599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae59a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ae59b: mov ecx, ebx */
  ecx = ebx;
/* 8ae59d: call 0x6ca2b3 */
  esp -= 4; W32(esp, 0x8ae5a2u); SPILL(); f_6ca2b3(); if (g_unwind) return; RELOAD();
/* 8ae5a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ae5a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae5a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ae5a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ae5a6: ret 8 */
  esp += 12; SPILL(); return;
L_8ae5a9: /* 8ae5a9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8ae5ab: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8ae5af: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8ae5b1: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8ae5b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ae5b5: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ae5b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae5b9: mov dword ptr [eax + edx + 0x10], ecx */
  W32((uint32_t)(eax + edx + 0x10u), ecx);
/* 8ae5bd: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8ae5bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ae5c0: lea eax, [eax + edx + 0x10] */
  eax = (uint32_t)(eax + edx + 0x10u);
/* 8ae5c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ae5c5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ae5f0(void) {
  LOAD_REGS();
L_8ae5f0: /* 8ae5f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ae5f1: mov ebp, esp */
  ebp = esp;
/* 8ae5f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ae5f5: push 0x9d6749 */
  { uint32_t v = 0x9d6749u; esp -= 4; W32(esp, v); }
/* 8ae5fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ae600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae601: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ae608: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ae60b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ae60c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ae60d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ae60e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ae611: mov ebx, ecx */
  ebx = ecx;
/* 8ae613: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 8ae615: xor edi, edi */
  edi = 0;
/* 8ae617: lea esi, [ebx + 0x1c] */
  esi = (uint32_t)(ebx + 0x1cu);
/* 8ae61a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8ae61d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ae61f: mov ecx, esi */
  ecx = esi;
/* 8ae621: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ae625: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ae62bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ae62b: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 8ae62e: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8ae630: je 0x8ae63d */
  if (zf) goto L_8ae63d;
L_8ae632: /* 8ae632: mov ecx, eax */
  ecx = eax;
/* 8ae634: call 0x6cc888 */
  esp -= 4; W32(esp, 0x8ae639u); SPILL(); f_6cc888(); if (g_unwind) return; RELOAD();
/* 8ae639: mov esi, eax */
  esi = eax;
/* 8ae63b: jmp 0x8ae63f */
  goto L_8ae63f;
L_8ae63d: /* 8ae63d: xor esi, esi */
  esi = 0;
L_8ae63f: /* 8ae63f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8ae644: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8ae646: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8ae649: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8ae64b: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8ae651u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8ae651: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8ae654: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 8ae657: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8ae65a: lea edi, [esi + 0x18] */
  edi = (uint32_t)(esi + 0x18u);
/* 8ae65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae65e: mov ecx, edi */
  ecx = edi;
/* 8ae660: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 8ae663: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8ae669u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8ae669: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8ae66c: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 8ae66f: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 8ae672: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 8ae675: mov dword ptr [esi + 0x2c], 0x3e4ccccd */
  W32((uint32_t)(esi + 0x2cu), 0x3e4ccccdu);
/* 8ae67c: mov dword ptr [esi + 0x30], 0 */
  W32((uint32_t)(esi + 0x30u), 0x0u);
/* 8ae683: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 8ae686: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ae687: mov ecx, edi */
  ecx = edi;
/* 8ae689: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8ae68c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ae692u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ae692: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 8ae695: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae697: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8ae69a: call 0x6ca1d2 */
  esp -= 4; W32(esp, 0x8ae69fu); SPILL(); f_6ca1d2(); if (g_unwind) return; RELOAD();
/* 8ae69f: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8ae6a2: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 8ae6a9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ae6afu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ae6af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ae6b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ae6b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae6b4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ae6bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ae6bc: mov esp, ebp */
  esp = ebp;
/* 8ae6be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ae6bf: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8ae6c2(void) {
  LOAD_REGS();
L_8ae6c2: /* 8ae6c2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ae6c5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ae6ca: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8ae6cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae6ce: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ae6d1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ae6d6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ae6d6(); return;
}

void f_8ae6d6(void) {
  LOAD_REGS();
L_8ae6d6: /* 8ae6d6: push 0xa1b4cc */
  { uint32_t v = 0xa1b4ccu; esp -= 4; W32(esp, v); }
/* 8ae6db: push 0xae99c0 */
  { uint32_t v = 0xae99c0u; esp -= 4; W32(esp, v); }
/* 8ae6e0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ae6e6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ae6e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae6e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ae6eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ae6ed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ae6f2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ae6f2: guest_badaddr(0x8ae6f2); return;
}

void f_8ae750(void) {
  LOAD_REGS();
L_8ae750: /* 8ae750: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ae751: mov ebp, esp */
  ebp = esp;
/* 8ae753: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ae755: push 0x9d6769 */
  { uint32_t v = 0x9d6769u; esp -= 4; W32(esp, v); }
/* 8ae75a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ae760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae761: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ae768: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ae76b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ae76c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ae76d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ae76e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ae771: mov edi, ecx */
  edi = ecx;
/* 8ae773: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8ae776: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ae778: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ae77a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae77b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ae77e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 8ae781: mov ecx, esp */
  ecx = esp;
/* 8ae783: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
/* 8ae786: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ae78d: mov ebx, 1 */
  ebx = 0x1u;
/* 8ae792: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae793: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8ae796: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8ae79cu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8ae79c: mov ecx, edi */
  ecx = edi;
/* 8ae79e: call 0x6c6c3f */
  esp -= 4; W32(esp, 0x8ae7a3u); SPILL(); f_6c6c3f(); if (g_unwind) return; RELOAD();
/* 8ae7a3: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8ae7a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae7a7: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 8ae7aa: call 0x6c4bce */
  esp -= 4; W32(esp, 0x8ae7afu); SPILL(); f_6c4bce(); if (g_unwind) return; RELOAD();
/* 8ae7af: mov esi, eax */
  esi = eax;
/* 8ae7b1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae7b3: je 0x8ae7bc */
  if (zf) goto L_8ae7bc;
L_8ae7b5: /* 8ae7b5: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 8ae7b8: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ae7ba: jl 0x8ae7d1 */
  if ((sf != of)) goto L_8ae7d1;
L_8ae7bc: /* 8ae7bc: push 0x45 */
  { uint32_t v = 0x45u; esp -= 4; W32(esp, v); }
/* 8ae7be: push 0xae99c8 */
  { uint32_t v = 0xae99c8u; esp -= 4; W32(esp, v); }
/* 8ae7c3: push 0xae99d8 */
  { uint32_t v = 0xae99d8u; esp -= 4; W32(esp, v); }
/* 8ae7c8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8ae7ceu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8ae7ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ae7d1: /* 8ae7d1: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 8ae7d3: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 8ae7d6: imul esi, esi, 0x34 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x34u);
  esi = (uint32_t)r;
  }
/* 8ae7d9: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  esi = r;
  }
/* 8ae7db: jne 0x8ae7f2 */
  if (!zf) goto L_8ae7f2;
L_8ae7dd: /* 8ae7dd: push 0x47 */
  { uint32_t v = 0x47u; esp -= 4; W32(esp, v); }
/* 8ae7df: push 0xae99f8 */
  { uint32_t v = 0xae99f8u; esp -= 4; W32(esp, v); }
/* 8ae7e4: push 0xae9a08 */
  { uint32_t v = 0xae9a08u; esp -= 4; W32(esp, v); }
/* 8ae7e9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8ae7efu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8ae7ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ae7f2: /* 8ae7f2: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8ae7f5: mov dword ptr [esi + 0x30], ebx */
  W32((uint32_t)(esi + 0x30u), ebx);
/* 8ae7f8: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 8ae7ff: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ae805u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ae805: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ae808: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ae809: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae80a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ae811: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ae812: mov esp, ebp */
  esp = ebp;
/* 8ae814: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ae815: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8ae818(void) {
  LOAD_REGS();
L_8ae818: /* 8ae818: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ae81b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ae820: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8ae823: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae824: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ae827: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ae82cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ae82c(); return;
}

void f_8ae82c(void) {
  LOAD_REGS();
L_8ae82c: /* 8ae82c: push 0xa1b4fc */
  { uint32_t v = 0xa1b4fcu; esp -= 4; W32(esp, v); }
/* 8ae831: push 0xae9a10 */
  { uint32_t v = 0xae9a10u; esp -= 4; W32(esp, v); }
/* 8ae836: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ae83cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ae83c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae83f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ae841: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ae843: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ae848u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ae848: guest_badaddr(0x8ae848); return;
}

void f_8ae890(void) {
  LOAD_REGS();
L_8ae890: /* 8ae890: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ae891: mov ebp, esp */
  ebp = esp;
/* 8ae893: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ae895: push 0x9d6789 */
  { uint32_t v = 0x9d6789u; esp -= 4; W32(esp, v); }
/* 8ae89a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ae8a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae8a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ae8a8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ae8ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ae8ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ae8ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ae8ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ae8b1: mov edi, ecx */
  edi = ecx;
/* 8ae8b3: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8ae8b6: lea ebx, [edi + 8] */
  ebx = (uint32_t)(edi + 0x8u);
/* 8ae8b9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ae8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae8c1: mov ecx, ebx */
  ecx = ebx;
/* 8ae8c3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ae8c7: call 0x6c4bce */
  esp -= 4; W32(esp, 0x8ae8ccu); SPILL(); f_6c4bce(); if (g_unwind) return; RELOAD();
/* 8ae8cc: mov esi, eax */
  esi = eax;
/* 8ae8ce: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae8d0: jne 0x8ae966 */
  if (!zf) goto L_8ae966;
L_8ae8d6: /* 8ae8d6: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8ae8d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae8db: je 0x8ae9db */
  if (zf) goto L_8ae9db;
L_8ae8e1: /* 8ae8e1: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 8ae8e4: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8ae8e7: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ae8ea: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8ae8eb: mov ecx, 0xff */
  ecx = 0xffu;
/* 8ae8f0: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8ae8f0);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8ae8f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae8f3: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 8ae8f8: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8ae8fb: mov byte ptr [ebp + 0x18], dl */
  W8((uint32_t)(ebp + 0x18u), (edx & 0xffu));
/* 8ae8fe: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8ae901: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae902: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae903: call 0x6c3954 */
  esp -= 4; W32(esp, 0x8ae908u); SPILL(); f_6c3954(); if (g_unwind) return; RELOAD();
/* 8ae908: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae90b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae90c: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 8ae90f: call 0x6c576d */
  esp -= 4; W32(esp, 0x8ae914u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8ae914: mov byte ptr [ebp + 0x1b], 0xff */
  W8((uint32_t)(ebp + 0x1bu), 0xffu);
/* 8ae918: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ae91b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae91c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ae91f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 8ae922: mov ecx, esp */
  ecx = esp;
/* 8ae924: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 8ae927: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae928: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8ae92eu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8ae92e: mov ecx, edi */
  ecx = edi;
/* 8ae930: call 0x6cc60d */
  esp -= 4; W32(esp, 0x8ae935u); SPILL(); f_6cc60d(); if (g_unwind) return; RELOAD();
/* 8ae935: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8ae938: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae939: mov ecx, ebx */
  ecx = ebx;
/* 8ae93b: call 0x6c4bce */
  esp -= 4; W32(esp, 0x8ae940u); SPILL(); f_6c4bce(); if (g_unwind) return; RELOAD();
/* 8ae940: mov esi, eax */
  esi = eax;
/* 8ae942: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae944: je 0x8ae94d */
  if (zf) goto L_8ae94d;
L_8ae946: /* 8ae946: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 8ae949: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ae94b: jl 0x8ae962 */
  if ((sf != of)) goto L_8ae962;
L_8ae94d: /* 8ae94d: push 0x6d */
  { uint32_t v = 0x6du; esp -= 4; W32(esp, v); }
/* 8ae94f: push 0xae9a20 */
  { uint32_t v = 0xae9a20u; esp -= 4; W32(esp, v); }
/* 8ae954: push 0xae9a30 */
  { uint32_t v = 0xae9a30u; esp -= 4; W32(esp, v); }
/* 8ae959: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8ae95fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8ae95f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ae962: /* 8ae962: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae964: je 0x8ae9db */
  if (zf) goto L_8ae9db;
L_8ae966: /* 8ae966: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 8ae968: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 8ae96b: imul esi, esi, 0x34 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x34u);
  esi = (uint32_t)r;
  }
/* 8ae96e: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  esi = r;
  }
/* 8ae970: jne 0x8ae987 */
  if (!zf) goto L_8ae987;
L_8ae972: /* 8ae972: push 0x73 */
  { uint32_t v = 0x73u; esp -= 4; W32(esp, v); }
/* 8ae974: push 0xae9a50 */
  { uint32_t v = 0xae9a50u; esp -= 4; W32(esp, v); }
/* 8ae979: push 0xae9a60 */
  { uint32_t v = 0xae9a60u; esp -= 4; W32(esp, v); }
/* 8ae97e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8ae984u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8ae984: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ae987: /* 8ae987: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8ae98a: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8ae98d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8ae990: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 8ae993: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8ae996: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8ae997: mov eax, ecx */
  eax = ecx;
/* 8ae999: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ae99e: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 8ae9a1: jle 0x8ae9aa */
  if ((zf || sf != of)) goto L_8ae9aa;
L_8ae9a3: /* 8ae9a3: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
L_8ae9aa: /* 8ae9aa: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8ae9ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae9af: je 0x8ae9db */
  if (zf) goto L_8ae9db;
L_8ae9b1: /* 8ae9b1: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 8ae9b4: fcom dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
/* 8ae9b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ae9b9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ae9bc: jnp 0x8ae9c3 */
  if (!pf) goto L_8ae9c3;
L_8ae9be: /* 8ae9be: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ae9c0: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
L_8ae9c3: /* 8ae9c3: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* 8ae9c6: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8ae9c9: fcom dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
/* 8ae9cc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ae9ce: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae9d1: je 0x8ae9d8 */
  if (zf) goto L_8ae9d8;
L_8ae9d3: /* 8ae9d3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ae9d5: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
L_8ae9d8: /* 8ae9d8: fstp dword ptr [esi + 0x28] */
  WF32((uint32_t)(esi + 0x28u), ST0); FPOP();
L_8ae9db: /* 8ae9db: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8ae9de: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 8ae9e5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ae9ebu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ae9eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ae9ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ae9ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae9f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ae9f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ae9f8: mov esp, ebp */
  esp = ebp;
/* 8ae9fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ae9fb: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8ae9fe(void) {
  LOAD_REGS();
L_8ae9fe: /* 8ae9fe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aea01: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8aea06: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8aea09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aea0a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8aea0d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aea12u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8aea12(); return;
}

void f_8aea12(void) {
  LOAD_REGS();
L_8aea12: /* 8aea12: push 0xa1b544 */
  { uint32_t v = 0xa1b544u; esp -= 4; W32(esp, v); }
/* 8aea17: push 0xae9a68 */
  { uint32_t v = 0xae9a68u; esp -= 4; W32(esp, v); }
/* 8aea1c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8aea22u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8aea22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aea25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aea27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aea29: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aea2eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8aea2e: guest_badaddr(0x8aea2e); return;
}

void f_8aeaa0(void) {
  LOAD_REGS();
L_8aeaa0: /* 8aeaa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8aeaa1: mov ebp, esp */
  ebp = esp;
/* 8aeaa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8aeaa5: push 0x9d67cf */
  { uint32_t v = 0x9d67cfu; esp -= 4; W32(esp, v); }
/* 8aeaaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8aeab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aeab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8aeab8: sub esp, 0x8f0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8f0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aeabe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aeabf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aeac0: mov esi, ecx */
  esi = ecx;
/* 8aeac2: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8aeac5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aeac6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8aeac9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8aead0: jne 0x8af14d */
  if (!zf) goto L_8af14d;
L_8aead6: /* 8aead6: xor ebx, ebx */
  ebx = 0;
L_8aead8: /* 8aead8: cmp ebx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aeadb: jge 0x8aeb31 */
  if ((sf == of)) goto L_8aeb31;
L_8aeadd: /* 8aeadd: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8aeae0: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 8aeae3: mov ecx, dword ptr [0xce822c] */
  ecx = R32((uint32_t)(0xce822cu));
/* 8aeae9: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8aeaec: fild dword ptr [ecx + eax*4] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 8aeaef: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aeaf1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aeaf3: jge 0x8aeafb */
  if ((sf == of)) goto L_8aeafb;
L_8aeaf5: /* 8aeaf5: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8aeafb: /* 8aeafb: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 8aeb01: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8aeb07: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aeb0a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8aeb0d: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8aeb0f: mov eax, dword ptr [0xce8244] */
  eax = R32((uint32_t)(0xce8244u));
/* 8aeb14: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 8aeb17: mov ecx, esp */
  ecx = esp;
/* 8aeb19: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8aeb1d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8aeb20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aeb21: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8aeb27u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8aeb27: mov ecx, esi */
  ecx = esi;
/* 8aeb29: call 0x6ca8df */
  esp -= 4; W32(esp, 0x8aeb2eu); SPILL(); f_6ca8df(); if (g_unwind) return; RELOAD();
/* 8aeb2e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8aeb2f: jmp 0x8aead8 */
  goto L_8aead8;
L_8aeb31: /* 8aeb31: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 8aeb34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aeb36: je 0x8af14d */
  if (zf) goto L_8af14d;
L_8aeb3c: /* 8aeb3c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8aeb3f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8aeb42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aeb43: lea ecx, [ebx + 0xd0] */
  ecx = (uint32_t)(ebx + 0xd0u);
/* 8aeb49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aeb4a: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 8aeb50: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x8aeb55u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 8aeb55: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 8aeb5b: mov ecx, dword ptr [ebx + 0x88] */
  ecx = R32((uint32_t)(ebx + 0x88u));
/* 8aeb61: mov edi, dword ptr [ebx + 0x68] */
  edi = R32((uint32_t)(ebx + 0x68u));
/* 8aeb64: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8aeb66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aeb67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aeb68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aeb6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aeb6c: mov ecx, edi */
  ecx = edi;
/* 8aeb6e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8aeb72: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8aeb75: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0x8aeb7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aeb7b: mov eax, dword ptr [0xce6f10] */
  eax = R32((uint32_t)(0xce6f10u));
/* 8aeb80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aeb82: jne 0x8aebf8 */
  if (!zf) goto L_8aebf8;
L_8aeb84: /* 8aeb84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aeb86: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8aeb89: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8aeb8fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8aeb8f: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 8aeb94: mov ecx, 0xb88fb0 */
  ecx = 0xb88fb0u;
/* 8aeb99: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8aeb9fu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8aeb9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aeba1: jne 0x8aebbb */
  if (!zf) goto L_8aebbb;
L_8aeba3: /* 8aeba3: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8aeba8: push 0xae9b60 */
  { uint32_t v = 0xae9b60u; esp -= 4; W32(esp, v); }
/* 8aebad: push 0xae9ba4 */
  { uint32_t v = 0xae9ba4u; esp -= 4; W32(esp, v); }
/* 8aebb2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8aebb8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8aebb8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8aebbb: /* 8aebbb: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8aebc1u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8aebc1: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8aebc7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8aebc9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8aebcc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aebce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aebcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aebd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aebd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aebd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aebd5: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 8aebda: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8aebe0u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8aebe0: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8aebe6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aebe9: push 0xce6f10 */
  { uint32_t v = 0xce6f10u; esp -= 4; W32(esp, v); }
/* 8aebee: mov dword ptr [0xce6f10], eax */
  W32((uint32_t)(0xce6f10u), eax);
/* 8aebf3: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8aebf8u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8aebf8: /* 8aebf8: mov eax, dword ptr [0xce6f0c] */
  eax = R32((uint32_t)(0xce6f0cu));
/* 8aebfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aebff: jne 0x8aec75 */
  if (!zf) goto L_8aec75;
L_8aec01: /* 8aec01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aec03: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8aec06: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8aec0cu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8aec0c: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 8aec11: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 8aec16: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8aec1cu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8aec1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aec1e: jne 0x8aec38 */
  if (!zf) goto L_8aec38;
L_8aec20: /* 8aec20: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8aec25: push 0xae9bc8 */
  { uint32_t v = 0xae9bc8u; esp -= 4; W32(esp, v); }
/* 8aec2a: push 0xae9c0c */
  { uint32_t v = 0xae9c0cu; esp -= 4; W32(esp, v); }
/* 8aec2f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8aec35u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8aec35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8aec38: /* 8aec38: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8aec3eu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8aec3e: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8aec44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8aec46: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8aec49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aec4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aec4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aec4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aec50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aec51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aec52: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 8aec57: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8aec5du); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8aec5d: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8aec63: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aec66: push 0xce6f0c */
  { uint32_t v = 0xce6f0cu; esp -= 4; W32(esp, v); }
/* 8aec6b: mov dword ptr [0xce6f0c], eax */
  W32((uint32_t)(0xce6f0cu), eax);
/* 8aec70: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8aec75u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8aec75: /* 8aec75: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 8aec78: mov byte ptr [ebp + 0xc], al */
  W8((uint32_t)(ebp + 0xcu), (eax & 0xffu));
/* 8aec7b: mov byte ptr [ebp + 0xd], al */
  W8((uint32_t)(ebp + 0xdu), (eax & 0xffu));
/* 8aec7e: mov byte ptr [ebp + 0xe], al */
  W8((uint32_t)(ebp + 0xeu), (eax & 0xffu));
/* 8aec81: mov eax, dword ptr [0xce6f10] */
  eax = R32((uint32_t)(0xce6f10u));
/* 8aec86: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aec89: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 8aec8d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8aec90: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* 8aec93: mov ecx, dword ptr [0xce6f0c] */
  ecx = R32((uint32_t)(0xce6f0cu));
/* 8aec99: mov edx, dword ptr [0xce6f10] */
  edx = R32((uint32_t)(0xce6f10u));
/* 8aec9f: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 8aeca2: mov eax, dword ptr [0xce6f0c] */
  eax = R32((uint32_t)(0xce6f0cu));
/* 8aeca7: mov byte ptr [eax + 0x3c], 1 */
  W8((uint32_t)(eax + 0x3cu), 0x1u);
/* 8aecab: mov eax, esp */
  eax = esp;
/* 8aecad: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 8aecb0: xor ecx, ecx */
  ecx = 0;
/* 8aecb2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8aecb4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8aecb7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8aecba: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8aecbd: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aecc0: mov eax, esp */
  eax = esp;
/* 8aecc2: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 8aecc5: mov ebx, 0x3f800000 */
  ebx = 0x3f800000u;
/* 8aecca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aeccb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8aeccd: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8aecd0: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8aecd3: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 8aecd6: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 8aecd9: fadd dword ptr [0xa17378] */
  ST0 = ST0 + (F32((uint32_t)(0xa17378u)));
/* 8aecdf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aece0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aece1: mov eax, dword ptr [0xce6f0c] */
  eax = R32((uint32_t)(0xce6f0cu));
/* 8aece6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8aece8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aece9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aecea: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aeced: fchs  */
  ST0 = -ST0;
/* 8aecef: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8aecf3: mov ecx, edi */
  ecx = edi;
/* 8aecf5: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 8aecf8: fadd dword ptr [0xa17378] */
  ST0 = ST0 + (F32((uint32_t)(0xa17378u)));
/* 8aecfe: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8aed02: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 8aed05: fadd dword ptr [0xa154ac] */
  ST0 = ST0 + (F32((uint32_t)(0xa154acu)));
/* 8aed0b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8aed0f: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 8aed12: fsub dword ptr [0xa154ac] */
  ST0 = ST0 - (F32((uint32_t)(0xa154acu)));
/* 8aed18: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8aed1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aed1c: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8aed1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aed1f: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 8aed22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aed24: jne 0x8aed93 */
  if (!zf) goto L_8aed93;
L_8aed26: /* 8aed26: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aed29: mov eax, esp */
  eax = esp;
/* 8aed2b: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 8aed2e: xor ecx, ecx */
  ecx = 0;
/* 8aed30: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8aed32: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8aed35: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8aed38: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8aed3b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aed3e: mov eax, esp */
  eax = esp;
/* 8aed40: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 8aed43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aed44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aed45: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8aed47: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8aed4a: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8aed4d: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 8aed50: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 8aed53: fadd dword ptr [0xa17378] */
  ST0 = ST0 + (F32((uint32_t)(0xa17378u)));
/* 8aed59: mov eax, dword ptr [0xce6f0c] */
  eax = R32((uint32_t)(0xce6f0cu));
/* 8aed5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aed5f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8aed61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aed62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aed63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aed64: fchs  */
  ST0 = -ST0;
/* 8aed66: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8aed69: push 0x42f80000 */
  { uint32_t v = 0x42f80000u; esp -= 4; W32(esp, v); }
/* 8aed6e: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 8aed71: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aed74: fadd dword ptr [0xa154ac] */
  ST0 = ST0 + (F32((uint32_t)(0xa154acu)));
/* 8aed7a: mov ecx, edi */
  ecx = edi;
/* 8aed7c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8aed80: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 8aed83: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 8aed86: fadd dword ptr [0xa105c0] */
  ST0 = ST0 + (F32((uint32_t)(0xa105c0u)));
/* 8aed8c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8aed8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aed90: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8aed93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8aed93: /* 8aed93: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 8aed96: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 8aed99: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 8aed9c: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8aed9f: mov byte ptr [ebp + 0xc], 0xff */
  W8((uint32_t)(ebp + 0xcu), 0xffu);
/* 8aeda3: mov byte ptr [ebp + 0xd], 0xff */
  W8((uint32_t)(ebp + 0xdu), 0xffu);
/* 8aeda7: fsubr dword ptr [esi + 0x40] */
  ST0 = (F32((uint32_t)(esi + 0x40u))) - ST0;
/* 8aedaa: mov byte ptr [ebp + 0xe], 0xff */
  W8((uint32_t)(ebp + 0xeu), 0xffu);
/* 8aedae: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 8aedb2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8aedb5: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8aedb8: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 8aedbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aedbc: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 8aedbf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aedc0: mov ecx, edx */
  ecx = edx;
/* 8aedc2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8aedc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aedc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aedc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aedc8: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 8aedce: call 0x6c7cca */
  esp -= 4; W32(esp, 0x8aedd3u); SPILL(); f_6c7cca(); if (g_unwind) return; RELOAD();
/* 8aedd3: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 8aedd6: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8aedd9: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 8aeddc: mov byte ptr [ebp + 0xc], 0xff */
  W8((uint32_t)(ebp + 0xcu), 0xffu);
/* 8aede0: mov byte ptr [ebp + 0xd], 0xff */
  W8((uint32_t)(ebp + 0xdu), 0xffu);
/* 8aede4: mov byte ptr [ebp + 0xe], 0xff */
  W8((uint32_t)(ebp + 0xeu), 0xffu);
/* 8aede8: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 8aedec: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8aedef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aedf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aedf1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aedf2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8aedf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aedf6: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8aedf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aedfa: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 8aee00: call 0x6c7cca */
  esp -= 4; W32(esp, 0x8aee05u); SPILL(); f_6c7cca(); if (g_unwind) return; RELOAD();
/* 8aee05: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 8aee08: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x8aee0eu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 8aee0e: xor ecx, ecx */
  ecx = 0;
/* 8aee10: xor edx, edx */
  edx = 0;
/* 8aee12: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aee14: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8aee17: setg dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 8aee1a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8aee1c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8aee1f: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8aee22: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8aee25: je 0x8aeef3 */
  if (zf) goto L_8aeef3;
L_8aee2b: /* 8aee2b: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8aee2e: mov edi, edi */
  edi = edi;
L_8aee30: /* 8aee30: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8aee33: cmp eax, dword ptr [esi + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aee36: jge 0x8aeef1 */
  if ((sf == of)) goto L_8aeef1;
L_8aee3c: /* 8aee3c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8aee3f: mov ebx, eax */
  ebx = eax;
/* 8aee41: imul ebx, ebx, 0x34 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x34u);
  ebx = (uint32_t)r;
  }
/* 8aee44: mov eax, dword ptr [ebx + ecx] */
  eax = R32((uint32_t)(ebx + ecx));
/* 8aee47: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8aee49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aee4b: jne 0x8aeee9 */
  if (!zf) goto L_8aeee9;
L_8aee51: /* 8aee51: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8aee54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aee56: je 0x8aeeb3 */
  if (zf) goto L_8aeeb3;
L_8aee58: /* 8aee58: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8aee5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aee5c: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 8aee5f: call dword ptr [0xcfaaa0] */
  esp -= 4; W32(esp, 0x8aee65u); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* 8aee65: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8aee68: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 8aee6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aee6c: lea ecx, [ebx + 0x18] */
  ecx = (uint32_t)(ebx + 0x18u);
/* 8aee6f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8aee73: call dword ptr [0xcfaaa0] */
  esp -= 4; W32(esp, 0x8aee79u); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* 8aee79: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8aee7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aee7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aee7f: mov ecx, eax */
  ecx = eax;
/* 8aee81: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8aee85: call dword ptr [0xcfa948] */
  esp -= 4; W32(esp, 0x8aee8bu); SPILL(); f_4e16ea(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHABV1@H@Z */ RELOAD();
/* 8aee8b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8aee8e: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8aee91: sete byte ptr [ebp + 0xf] */
  W8((uint32_t)(ebp + 0xfu), (zf) ? 1 : 0);
/* 8aee95: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8aee99: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8aee9fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8aee9f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8aeea2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8aeea6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8aeeacu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8aeeac: mov al, byte ptr [ebp + 0xf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfu))) & 0xffu);
/* 8aeeaf: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8aeeb1: jne 0x8aeee9 */
  if (!zf) goto L_8aeee9;
L_8aeeb3: /* 8aeeb3: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 8aeeb6: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8aeeb9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8aeebb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8aeebd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8aeec0: jnp 0x8aeec7 */
  if (!pf) goto L_8aeec7;
L_8aeec2: /* 8aeec2: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8aeec5: jmp 0x8aeec9 */
  goto L_8aeec9;
L_8aeec7: /* 8aeec7: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8aeec9: /* 8aeec9: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 8aeecc: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8aeecf: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8aeed1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8aeed3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8aeed6: je 0x8aeee7 */
  if (zf) goto L_8aeee7;
L_8aeed8: /* 8aeed8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8aeedb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8aeede: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8aeedf: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8aeee2: jmp 0x8aee30 */
  goto L_8aee30;
L_8aeee7: /* 8aeee7: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8aeee9: /* 8aeee9: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8aeeec: jmp 0x8aee30 */
  goto L_8aee30;
L_8aeef1: /* 8aeef1: xor ecx, ecx */
  ecx = 0;
L_8aeef3: /* 8aeef3: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8aeef6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8aeef9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8aef00: /* 8aef00: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aef03: cmp edx, dword ptr [esi + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aef06: jge 0x8af13e */
  if ((sf == of)) goto L_8af13e;
L_8aef0c: /* 8aef0c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8aef0f: mov ebx, edx */
  ebx = edx;
/* 8aef11: imul ebx, ebx, 0x34 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x34u);
  ebx = (uint32_t)r;
  }
/* 8aef14: mov eax, dword ptr [ebx + ecx] */
  eax = R32((uint32_t)(ebx + ecx));
/* 8aef17: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8aef19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aef1b: jne 0x8af136 */
  if (!zf) goto L_8af136;
L_8aef21: /* 8aef21: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8aef24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aef26: je 0x8aef87 */
  if (zf) goto L_8aef87;
L_8aef28: /* 8aef28: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 8aef2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aef2c: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 8aef2f: call dword ptr [0xcfaaa0] */
  esp -= 4; W32(esp, 0x8aef35u); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* 8aef35: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8aef38: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8aef3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aef3c: lea ecx, [ebx + 0x18] */
  ecx = (uint32_t)(ebx + 0x18u);
/* 8aef3f: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8aef43: call dword ptr [0xcfaaa0] */
  esp -= 4; W32(esp, 0x8aef49u); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* 8aef49: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8aef4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aef4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aef4f: mov ecx, eax */
  ecx = eax;
/* 8aef51: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8aef55: call dword ptr [0xcfa948] */
  esp -= 4; W32(esp, 0x8aef5bu); SPILL(); f_4e16ea(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHABV1@H@Z */ RELOAD();
/* 8aef5b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8aef5e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8aef61: sete byte ptr [ebp + 0xf] */
  W8((uint32_t)(ebp + 0xfu), (zf) ? 1 : 0);
/* 8aef65: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8aef69: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8aef6fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8aef6f: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8aef72: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8aef76: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8aef7cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8aef7c: mov al, byte ptr [ebp + 0xf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfu))) & 0xffu);
/* 8aef7f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8aef81: jne 0x8af136 */
  if (!zf) goto L_8af136;
L_8aef87: /* 8aef87: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 8aef8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aef8c: jne 0x8aeffb */
  if (!zf) goto L_8aeffb;
L_8aef8e: /* 8aef8e: lea ecx, [ebx + 0x18] */
  ecx = (uint32_t)(ebx + 0x18u);
/* 8aef91: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8aef97u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8aef97: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 8aef9a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aef9d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8aefa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aefa1: lea eax, [ebp - 0x8fc] */
  eax = (uint32_t)(ebp + 0xfffff704u);
/* 8aefa7: push 0xae9b44 */
  { uint32_t v = 0xae9b44u; esp -= 4; W32(esp, v); }
/* 8aefac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aefad: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x8aefb3u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 8aefb3: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 8aefb6: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 8aefb9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8aefbc: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8aefbf: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8aefc1: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8aefc7: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8aefc9: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8aefcc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aefcf: fstp dword ptr [edi + 0x44] */
  WF32((uint32_t)(edi + 0x44u), ST0); FPOP();
/* 8aefd2: lea ecx, [ebp - 0x8fc] */
  ecx = (uint32_t)(ebp + 0xfffff704u);
/* 8aefd8: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 8aefdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aefdc: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 8aefdf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aefe1: fiadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xcu)));
/* 8aefe4: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8aefe7: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 8aefea: mov dword ptr [edi + 0x58], edx */
  W32((uint32_t)(edi + 0x58u), edx);
/* 8aefed: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 8aeff0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aeff1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aeff2: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x8aeff8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aeff8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8aeffb: /* 8aeffb: fld dword ptr [0xa1b5b0] */
  { double v = F32((uint32_t)(0xa1b5b0u)); FPUSH(v); }
/* 8af001: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8af004: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 8af007: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8af009: fcomp dword ptr [0xa16220] */
  fpu_com(ST0, F32((uint32_t)(0xa16220u)));
  FPOP();
/* 8af00f: mov dword ptr [ebp + 8], 0x4e6e6b28 */
  W32((uint32_t)(ebp + 0x8u), 0x4e6e6b28u);
/* 8af016: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8af018: je 0x8af050 */
  if (zf) goto L_8af050;
L_8af01a: /* 8af01a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8af01d: jp 0x8af02d */
  if (pf) goto L_8af02d;
L_8af01f: /* 8af01f: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 8af022: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 8af025: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8af028: fchs  */
  ST0 = -ST0;
/* 8af02a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_8af02d: /* 8af02d: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 8af030: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8af036: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8af038: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8af03b: jne 0x8af084 */
  if (!zf) goto L_8af084;
L_8af03d: /* 8af03d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8af03f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8af045: fsub dword ptr [esi + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4cu)));
/* 8af048: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 8af04b: fdiv dword ptr [ebp - 0x20] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8af04e: jmp 0x8af084 */
  goto L_8af084;
L_8af050: /* 8af050: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8af053: jp 0x8af063 */
  if (pf) goto L_8af063;
L_8af055: /* 8af055: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 8af058: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 8af05b: fdiv dword ptr [ebx + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0x24u)));
/* 8af05e: fchs  */
  ST0 = -ST0;
/* 8af060: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_8af063: /* 8af063: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 8af066: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8af06c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8af06e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8af071: jne 0x8af084 */
  if (!zf) goto L_8af084;
L_8af073: /* 8af073: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8af075: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8af07b: fsub dword ptr [esi + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4cu)));
/* 8af07e: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 8af081: fdiv dword ptr [ebx + 0x28] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0x28u)));
L_8af084: /* 8af084: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8af087: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8af089: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8af08b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8af08e: jp 0x8af09a */
  if (pf) goto L_8af09a;
L_8af090: /* 8af090: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8af093: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8af095: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8af098: jmp 0x8af09d */
  goto L_8af09d;
L_8af09a: /* 8af09a: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
L_8af09d: /* 8af09d: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 8af0a0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8af0a1: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8af0a4: jne 0x8af0ab */
  if (!zf) goto L_8af0ab;
L_8af0a6: /* 8af0a6: mov edi, 0xff */
  edi = 0xffu;
L_8af0ab: /* 8af0ab: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 8af0ae: mov ecx, edi */
  ecx = edi;
/* 8af0b0: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 8af0b3: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 8af0b6: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 8af0b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8af0c0: /* 8af0c0: fcomp dword ptr [esi + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x3cu)));
  FPOP();
/* 8af0c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8af0c5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8af0c8: jne 0x8af12c */
  if (!zf) goto L_8af12c;
L_8af0ca: /* 8af0ca: cmp edi, dword ptr [ebx + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8af0cd: je 0x8af12c */
  if (zf) goto L_8af12c;
L_8af0cf: /* 8af0cf: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8af0d2: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8af0d5: fmul dword ptr [eax + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(eax + edi*4)));
/* 8af0d8: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8af0db: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8af0de: fmul dword ptr [eax + ecx*4] */
  ST0 = ST0 * (F32((uint32_t)(eax + ecx*4)));
/* 8af0e1: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 8af0e4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8af0e7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8af0ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8af0eb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8af0ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8af0ee: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8af0f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8af0f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8af0f3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8af0f5: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 8af0fb: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8af0fe: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8af100: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8af103: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af104: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8af106: call 0x6c7cca */
  esp -= 4; W32(esp, 0x8af10bu); SPILL(); f_6c7cca(); if (g_unwind) return; RELOAD();
/* 8af10b: fild dword ptr [esi + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* 8af10e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8af111: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8af114: mov ecx, edi */
  ecx = edi;
/* 8af116: fdivr dword ptr [esi + 0x34] */
  ST0 = (F32((uint32_t)(esi + 0x34u))) / ST0;
/* 8af119: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8af11a: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8af11d: fsubr dword ptr [ebp + 0xc] */
  ST0 = (F32((uint32_t)(ebp + 0xcu))) - ST0;
/* 8af120: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 8af123: jne 0x8af0c0 */
  if (!zf) goto L_8af0c0;
L_8af125: /* 8af125: mov edi, 0xff */
  edi = 0xffu;
/* 8af12a: jmp 0x8af0c0 */
  goto L_8af0c0;
L_8af12c: /* 8af12c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8af12f: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8af132: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8af133: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_8af136: /* 8af136: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8af139: jmp 0x8aef00 */
  goto L_8aef00;
L_8af13e: /* 8af13e: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 8af144: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8af148: call 0x6caac4 */
  esp -= 4; W32(esp, 0x8af14du); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
L_8af14d: /* 8af14d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8af150: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8af151: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af152: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8af159: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8af15a: mov esp, ebp */
  esp = ebp;
/* 8af15c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8af15d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8af160(void) {
  LOAD_REGS();
L_8af160: /* 8af160: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8af163: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8af168: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8af16b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af16c: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8af16f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8af174u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8af174(); return;
}

void f_8af174(void) {
  LOAD_REGS();
L_8af174: /* 8af174: push 0xa1b580 */
  { uint32_t v = 0xa1b580u; esp -= 4; W32(esp, v); }
/* 8af179: push 0xae9b54 */
  { uint32_t v = 0xae9b54u; esp -= 4; W32(esp, v); }
/* 8af17e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8af184u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8af184: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8af187: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8af189: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8af18b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8af190u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8af190: guest_badaddr(0x8af190); return;
}

void f_8af360(void) {
  LOAD_REGS();
L_8af360: /* 8af360: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8af362: push 0x9d67f8 */
  { uint32_t v = 0x9d67f8u; esp -= 4; W32(esp, v); }
/* 8af367: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8af36d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af36e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8af375: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8af376: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af377: mov esi, ecx */
  esi = ecx;
/* 8af379: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8af37d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8af383u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8af383: xor eax, eax */
  eax = 0;
/* 8af385: mov ecx, esi */
  ecx = esi;
/* 8af387: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8af38b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8af38e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 8af395: call 0x6c5fce */
  esp -= 4; W32(esp, 0x8af39au); SPILL(); f_6c5fce(); if (g_unwind) return; RELOAD();
/* 8af39a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8af39e: mov eax, esi */
  eax = esi;
/* 8af3a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af3a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8af3a8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8af3ab: ret  */
  esp += 4; SPILL(); return;
}

void f_8af3d0(void) {
  LOAD_REGS();
L_8af3d0: /* 8af3d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8af3d2: push 0x9d6818 */
  { uint32_t v = 0x9d6818u; esp -= 4; W32(esp, v); }
/* 8af3d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8af3dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af3de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8af3e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8af3e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af3e7: mov esi, ecx */
  esi = ecx;
/* 8af3e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8af3ed: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8af3f3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8af3f3: xor eax, eax */
  eax = 0;
/* 8af3f5: mov ecx, esi */
  ecx = esi;
/* 8af3f7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8af3fb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8af3fe: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 8af405: call 0x6c5fce */
  esp -= 4; W32(esp, 0x8af40au); SPILL(); f_6c5fce(); if (g_unwind) return; RELOAD();
/* 8af40a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8af40e: mov eax, esi */
  eax = esi;
/* 8af410: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af411: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8af418: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8af41b: ret  */
  esp += 4; SPILL(); return;
}

void f_8af440(void) {
  LOAD_REGS();
L_8af440: /* 8af440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8af441: mov ebp, esp */
  ebp = esp;
/* 8af443: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8af445: push 0x9d6830 */
  { uint32_t v = 0x9d6830u; esp -= 4; W32(esp, v); }
/* 8af44a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8af450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af451: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8af458: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8af45b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8af45c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af45d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8af45e: mov esi, ecx */
  esi = ecx;
/* 8af460: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8af463: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8af465: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8af468: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8af46f: call 0x6ca529 */
  esp -= 4; W32(esp, 0x8af474u); SPILL(); f_6ca529(); if (g_unwind) return; RELOAD();
/* 8af474: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8af477: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8af479: mov ecx, esi */
  ecx = esi;
/* 8af47b: call 0x6c8026 */
  esp -= 4; W32(esp, 0x8af480u); SPILL(); f_6c8026(); if (g_unwind) return; RELOAD();
/* 8af480: mov ecx, esi */
  ecx = esi;
/* 8af482: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 8af489: call 0x6c5fce */
  esp -= 4; W32(esp, 0x8af48eu); SPILL(); f_6c5fce(); if (g_unwind) return; RELOAD();
/* 8af48e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8af491: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8af492: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af493: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8af49a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8af49b: mov esp, ebp */
  esp = ebp;
/* 8af49d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8af49e: ret  */
  esp += 4; SPILL(); return;
}

void f_8af49f(void) {
  LOAD_REGS();
L_8af49f: /* 8af49f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8af4a2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8af4a7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8af4aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8af4ab: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8af4ae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8af4b3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8af4b3(); return;
}

void f_8af4b3(void) {
  LOAD_REGS();
L_8af4b3: /* 8af4b3: push 0xa1b5b4 */
  { uint32_t v = 0xa1b5b4u; esp -= 4; W32(esp, v); }
/* 8af4b8: push 0xae9a18 */
  { uint32_t v = 0xae9a18u; esp -= 4; W32(esp, v); }
/* 8af4bd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8af4c3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8af4c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8af4c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8af4c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8af4ca: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8af4cfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8af4cf: guest_badaddr(0x8af4cf); return;
}

void f_8af500(void) {
  LOAD_REGS();
L_8af500: /* 8af500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8af502: push 0x9d6869 */
  { uint32_t v = 0x9d6869u; esp -= 4; W32(esp, v); }
/* 8af507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8af50d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af50e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8af515: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8af518: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8af519: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af51a: mov esi, ecx */
  esi = ecx;
/* 8af51c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8af51d: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* 8af520: mov ecx, edi */
  ecx = edi;
/* 8af522: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8af526: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8af52a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8af530u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8af530: xor ebx, ebx */
  ebx = 0;
/* 8af532: mov ecx, edi */
  ecx = edi;
/* 8af534: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 8af538: mov dword ptr [edi + 0xc], ebx */
  W32((uint32_t)(edi + 0xcu), ebx);
/* 8af53b: mov dword ptr [edi + 0x10], 8 */
  W32((uint32_t)(edi + 0x10u), 0x8u);
/* 8af542: call 0x6c5fce */
  esp -= 4; W32(esp, 0x8af547u); SPILL(); f_6c5fce(); if (g_unwind) return; RELOAD();
/* 8af547: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8af54a: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
/* 8af552: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8af558u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8af558: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8af55b: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 8af560: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8af566u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8af566: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 8af569: mov byte ptr [esp + 0x1c], 3 */
  W8((uint32_t)(esp + 0x1cu), 0x3u);
/* 8af56e: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8af574u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8af574: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8af578: mov eax, 0x64 */
  eax = 0x64u;
/* 8af57d: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 8af580: mov byte ptr [esi + 0x50], al */
  W8((uint32_t)(esi + 0x50u), (eax & 0xffu));
/* 8af583: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 8af586: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
/* 8af589: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8af58a: mov dword ptr [esi], 1 */
  W32((uint32_t)(esi), 0x1u);
/* 8af590: mov dword ptr [esi + 0x34], 0x437a0000 */
  W32((uint32_t)(esi + 0x34u), 0x437a0000u);
/* 8af597: mov dword ptr [esi + 0x38], 0x43160000 */
  W32((uint32_t)(esi + 0x38u), 0x43160000u);
/* 8af59e: mov dword ptr [esi + 0x3c], 0x42c80000 */
  W32((uint32_t)(esi + 0x3cu), 0x42c80000u);
/* 8af5a5: mov dword ptr [esi + 0x40], 0x43480000 */
  W32((uint32_t)(esi + 0x40u), 0x43480000u);
/* 8af5ac: mov dword ptr [esi + 0x4c], 0x3ea8f5c3 */
  W32((uint32_t)(esi + 0x4cu), 0x3ea8f5c3u);
/* 8af5b3: mov eax, esi */
  eax = esi;
/* 8af5b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af5b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8af5b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8af5be: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8af5c1: ret  */
  esp += 4; SPILL(); return;
}

void f_8af610(void) {
  LOAD_REGS();
L_8af610: /* 8af610: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8af612: push 0x9d68a1 */
  { uint32_t v = 0x9d68a1u; esp -= 4; W32(esp, v); }
/* 8af617: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8af61d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af61e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8af625: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8af626: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af627: mov esi, ecx */
  esi = ecx;
/* 8af629: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8af62d: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 8af630: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 8af638: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8af63eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8af63e: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8af641: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 8af646: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8af64bu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8af64b: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8af64e: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 8af653: call 0x6c5821 */
  esp -= 4; W32(esp, 0x8af658u); SPILL(); f_6c5821(); if (g_unwind) return; RELOAD();
/* 8af658: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8af65b: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8af663: call 0x6caa79 */
  esp -= 4; W32(esp, 0x8af668u); SPILL(); f_6caa79(); if (g_unwind) return; RELOAD();
/* 8af668: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8af66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af66d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8af674: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8af677: ret  */
  esp += 4; SPILL(); return;
}

void f_8af6a0(void) {
  LOAD_REGS();
L_8af6a0: /* 8af6a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8af6a1: mov ebp, esp */
  ebp = esp;
/* 8af6a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8af6a5: push 0x9d68c0 */
  { uint32_t v = 0x9d68c0u; esp -= 4; W32(esp, v); }
/* 8af6aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8af6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af6b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8af6b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8af6bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8af6bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af6bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8af6be: mov esi, ecx */
  esi = ecx;
/* 8af6c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8af6c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af6c4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8af6cb: call 0x6cc5ef */
  esp -= 4; W32(esp, 0x8af6d0u); SPILL(); f_6cc5ef(); if (g_unwind) return; RELOAD();
/* 8af6d0: mov ecx, esi */
  ecx = esi;
/* 8af6d2: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x8af6d8u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 8af6d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8af6db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8af6dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af6dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8af6e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8af6e5: mov esp, ebp */
  esp = ebp;
/* 8af6e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8af6e8: ret  */
  esp += 4; SPILL(); return;
}

void f_8af6e9(void) {
  LOAD_REGS();
L_8af6e9: /* 8af6e9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8af6ec: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8af6f1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8af6f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8af6f5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8af6f8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8af6fdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8af6fd(); return;
}

void f_8af6fd(void) {
  LOAD_REGS();
L_8af6fd: /* 8af6fd: push 0xa1b5e0 */
  { uint32_t v = 0xa1b5e0u; esp -= 4; W32(esp, v); }
/* 8af702: push 0xae9e60 */
  { uint32_t v = 0xae9e60u; esp -= 4; W32(esp, v); }
/* 8af707: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8af70du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8af70d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8af710: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8af712: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8af714: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8af719u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8af719: guest_badaddr(0x8af719); return;
}

void f_8af740(void) {
  LOAD_REGS();
L_8af740: /* 8af740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8af741: mov ebp, esp */
  ebp = esp;
/* 8af743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8af745: push 0x9d68d0 */
  { uint32_t v = 0x9d68d0u; esp -= 4; W32(esp, v); }
/* 8af74a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8af750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8af758: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8af75b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8af75c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af75d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8af75e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8af761: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8af763: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8af766: mov esi, ecx */
  esi = ecx;
/* 8af768: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8af76f: je 0x8af7a8 */
  if (zf) goto L_8af7a8;
L_8af771: /* 8af771: mov ecx, dword ptr [esi + 0x104] */
  ecx = R32((uint32_t)(esi + 0x104u));
/* 8af777: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8af779: je 0x8af7a8 */
  if (zf) goto L_8af7a8;
L_8af77b: /* 8af77b: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8af781u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8af781: mov ecx, esi */
  ecx = esi;
/* 8af783: mov ebx, eax */
  ebx = eax;
/* 8af785: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8af78bu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8af78b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8af78d: jne 0x8af7a8 */
  if (!zf) goto L_8af7a8;
L_8af78f: /* 8af78f: mov ecx, dword ptr [esi + 0x104] */
  ecx = R32((uint32_t)(esi + 0x104u));
/* 8af795: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8af79bu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8af79b: mov ecx, dword ptr [esi + 0x104] */
  ecx = R32((uint32_t)(esi + 0x104u));
/* 8af7a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8af7a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8af7a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af7a5: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x8af7a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8af7a8: /* 8af7a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8af7ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8af7ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af7ad: mov ecx, esi */
  ecx = esi;
/* 8af7af: call dword ptr [0xcfa1f8] */
  esp -= 4; W32(esp, 0x8af7b5u); SPILL(); f_4e2d42(); if (g_unwind) return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */ RELOAD();
/* 8af7b5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8af7b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8af7b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af7ba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8af7c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8af7c2: mov esp, ebp */
  esp = ebp;
/* 8af7c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8af7c5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8af7c8(void) {
  LOAD_REGS();
L_8af7c8: /* 8af7c8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8af7cb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8af7d0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8af7d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8af7d4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8af7d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8af7dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8af7dc(); return;
}

void f_8af7dc(void) {
  LOAD_REGS();
L_8af7dc: /* 8af7dc: push 0xa1b614 */
  { uint32_t v = 0xa1b614u; esp -= 4; W32(esp, v); }
/* 8af7e1: push 0xae9e68 */
  { uint32_t v = 0xae9e68u; esp -= 4; W32(esp, v); }
/* 8af7e6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8af7ecu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8af7ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8af7ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8af7f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8af7f3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8af7f8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8af7f8: guest_badaddr(0x8af7f8); return;
}

void f_8af830(void) {
  LOAD_REGS();
L_8af830: /* 8af830: mov eax, ecx */
  eax = ecx;
/* 8af832: ret  */
  esp += 4; SPILL(); return;
}

void f_8af850(void) {
  LOAD_REGS();
L_8af850: /* 8af850: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8af854: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af855: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8af856: lea esi, [ecx + 0x28] */
  esi = (uint32_t)(ecx + 0x28u);
/* 8af859: mov ecx, 7 */
  ecx = 0x7u;
/* 8af85e: mov edi, eax */
  edi = eax;
/* 8af860: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8af862: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8af863: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af864: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8af880(void) {
  LOAD_REGS();
L_8af880: /* 8af880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af881: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8af885: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8af888: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8af889: mov ecx, esi */
  ecx = esi;
/* 8af88b: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x8af891u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 8af891: mov eax, esi */
  eax = esi;
/* 8af893: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af894: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8af8b0(void) {
  LOAD_REGS();
L_8af8b0: /* 8af8b0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8af8b4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8af8b6: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8af8b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af8ba: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 8af8be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af8bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8af8c0: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 8af8c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8af8c5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8af8c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8af8c8: mov ecx, eax */
  ecx = eax;
/* 8af8ca: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x8af8d0u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 8af8d0: mov eax, esi */
  eax = esi;
/* 8af8d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af8d3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8af8d6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8af8f0(void) {
  LOAD_REGS();
L_8af8f0: /* 8af8f0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8af8f4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8af8f6: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8af8f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af8fa: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 8af8fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af8ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8af900: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 8af904: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8af905: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8af908u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8af908: mov ecx, eax */
  ecx = eax;
/* 8af90a: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x8af910u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 8af910: mov eax, esi */
  eax = esi;
/* 8af912: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af913: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8af916: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8af930(void) {
  LOAD_REGS();
L_8af930: /* 8af930: mov edx, dword ptr [ecx + 0x148] */
  edx = R32((uint32_t)(ecx + 0x148u));
/* 8af936: xor eax, eax */
  eax = 0;
/* 8af938: cmp edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8af93b: setl al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 8af93e: ret  */
  esp += 4; SPILL(); return;
}

void f_8af950(void) {
  LOAD_REGS();
L_8af950: /* 8af950: xor eax, eax */
  eax = 0;
/* 8af952: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8af970(void) {
  LOAD_REGS();
L_8af970: /* 8af970: mov eax, 1 */
  eax = 0x1u;
/* 8af975: ret  */
  esp += 4; SPILL(); return;
}

void f_8af990(void) {
  LOAD_REGS();
L_8af990: /* 8af990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8af994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8af995: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8af997: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8af99du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8af99d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8af9b0(void) {
  LOAD_REGS();
L_8af9b0: /* 8af9b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af9b1: mov esi, ecx */
  esi = ecx;
/* 8af9b3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8af9b9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8af9b9: mov eax, esi */
  eax = esi;
/* 8af9bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af9bc: ret  */
  esp += 4; SPILL(); return;
}

void f_8af9d0(void) {
  LOAD_REGS();
L_8af9d0: /* 8af9d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af9d1: mov esi, ecx */
  esi = ecx;
/* 8af9d3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8af9d9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8af9d9: mov eax, esi */
  eax = esi;
/* 8af9db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af9dc: ret  */
  esp += 4; SPILL(); return;
}

void f_8af9f0(void) {
  LOAD_REGS();
L_8af9f0: /* 8af9f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8af9f1: mov esi, ecx */
  esi = ecx;
/* 8af9f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8af9f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8af9f9: mov eax, esi */
  eax = esi;
/* 8af9fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8af9fc: ret  */
  esp += 4; SPILL(); return;
}

void f_8afa10(void) {
  LOAD_REGS();
L_8afa10: /* 8afa10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afa11: mov esi, ecx */
  esi = ecx;
/* 8afa13: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8afa19u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8afa19: mov eax, esi */
  eax = esi;
/* 8afa1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afa1c: ret  */
  esp += 4; SPILL(); return;
}

void f_8afa30(void) {
  LOAD_REGS();
L_8afa30: /* 8afa30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afa34: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8afa39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8afa3a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8afa40u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8afa40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afa60(void) {
  LOAD_REGS();
L_8afa60: /* 8afa60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afa61: mov esi, ecx */
  esi = ecx;
/* 8afa63: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8afa69u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8afa69: mov eax, esi */
  eax = esi;
/* 8afa6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afa6c: ret  */
  esp += 4; SPILL(); return;
}

void f_8afa80(void) {
  LOAD_REGS();
L_8afa80: /* 8afa80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afa81: mov esi, ecx */
  esi = ecx;
/* 8afa83: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8afa89u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8afa89: mov eax, esi */
  eax = esi;
/* 8afa8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afa8c: ret  */
  esp += 4; SPILL(); return;
}

void f_8afaa0(void) {
  LOAD_REGS();
L_8afaa0: /* 8afaa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afaa1: mov esi, ecx */
  esi = ecx;
/* 8afaa3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8afaa9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8afaa9: mov eax, esi */
  eax = esi;
/* 8afaab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afaac: ret  */
  esp += 4; SPILL(); return;
}

void f_8afac0(void) {
  LOAD_REGS();
L_8afac0: /* 8afac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afac1: mov esi, ecx */
  esi = ecx;
/* 8afac3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8afac9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8afac9: mov eax, esi */
  eax = esi;
/* 8afacb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afacc: ret  */
  esp += 4; SPILL(); return;
}

void f_8afae0(void) {
  LOAD_REGS();
L_8afae0: /* 8afae0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afae1: mov esi, ecx */
  esi = ecx;
/* 8afae3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8afae9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8afae9: mov eax, esi */
  eax = esi;
/* 8afaeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afaec: ret  */
  esp += 4; SPILL(); return;
}

void f_8afb00(void) {
  LOAD_REGS();
L_8afb00: /* 8afb00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afb01: mov esi, ecx */
  esi = ecx;
/* 8afb03: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8afb09u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8afb09: mov eax, esi */
  eax = esi;
/* 8afb0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afb0c: ret  */
  esp += 4; SPILL(); return;
}

void f_8afb20(void) {
  LOAD_REGS();
L_8afb20: /* 8afb20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afb24: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8afb26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8afb27: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8afb2du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8afb2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afb40(void) {
  LOAD_REGS();
L_8afb40: /* 8afb40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afb44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afb45: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8afb4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8afb4b: mov esi, ecx */
  esi = ecx;
/* 8afb4d: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8afb53u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8afb53: mov eax, esi */
  eax = esi;
/* 8afb55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afb56: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afb70(void) {
  LOAD_REGS();
L_8afb70: /* 8afb70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afb74: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8afb76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8afb77: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8afb7du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8afb7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afb90(void) {
  LOAD_REGS();
L_8afb90: /* 8afb90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afb94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8afb96: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8afb99: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8afb9c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8afb9e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afbc0(void) {
  LOAD_REGS();
L_8afbc0: /* 8afbc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afbc4: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 8afbc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8afbc7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8afbcdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8afbcd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afbe0(void) {
  LOAD_REGS();
L_8afbe0: /* 8afbe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afbe4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8afbe6: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 8afbe9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8afbeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afc00(void) {
  LOAD_REGS();
L_8afc00: /* 8afc00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afc04: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 8afc06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8afc07: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8afc0du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8afc0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afc20(void) {
  LOAD_REGS();
L_8afc20: /* 8afc20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afc24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8afc26: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8afc29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8afc2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afc40(void) {
  LOAD_REGS();
L_8afc40: /* 8afc40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afc44: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8afc46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8afc47: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8afc4du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8afc4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afc60(void) {
  LOAD_REGS();
L_8afc60: /* 8afc60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afc64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8afc66: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8afc69: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8afc6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afc80(void) {
  LOAD_REGS();
L_8afc80: /* 8afc80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afc84: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8afc86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8afc87: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8afc8du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8afc8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afca0(void) {
  LOAD_REGS();
L_8afca0: /* 8afca0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afca4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8afca6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8afca9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8afcac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afcc0(void) {
  LOAD_REGS();
L_8afcc0: /* 8afcc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afcc4: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8afcc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8afcc7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8afccdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8afccd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afce0(void) {
  LOAD_REGS();
L_8afce0: /* 8afce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afce4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8afce6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8afce9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8afceb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afd00(void) {
  LOAD_REGS();
L_8afd00: /* 8afd00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8afd04: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8afd06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8afd07: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8afd0du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8afd0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8afd20(void) {
  LOAD_REGS();
L_8afd20: /* 8afd20: mov eax, 1 */
  eax = 0x1u;
/* 8afd25: ret  */
  esp += 4; SPILL(); return;
}

void f_8afd40(void) {
  LOAD_REGS();
L_8afd40: /* 8afd40: mov eax, 1 */
  eax = 0x1u;
/* 8afd45: ret  */
  esp += 4; SPILL(); return;
}

void f_8afd60(void) {
  LOAD_REGS();
L_8afd60: /* 8afd60: mov eax, 1 */
  eax = 0x1u;
/* 8afd65: ret  */
  esp += 4; SPILL(); return;
}

void f_8afd80(void) {
  LOAD_REGS();
L_8afd80: /* 8afd80: mov eax, 1 */
  eax = 0x1u;
/* 8afd85: ret  */
  esp += 4; SPILL(); return;
}

void f_8afda0(void) {
  LOAD_REGS();
L_8afda0: /* 8afda0: mov eax, 1 */
  eax = 0x1u;
/* 8afda5: ret  */
  esp += 4; SPILL(); return;
}

void f_8afdc0(void) {
  LOAD_REGS();
L_8afdc0: /* 8afdc0: mov eax, 1 */
  eax = 0x1u;
/* 8afdc5: ret  */
  esp += 4; SPILL(); return;
}

void f_8afde0(void) {
  LOAD_REGS();
L_8afde0: /* 8afde0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afde1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8afde5: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 8afde7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8afde9: mov ecx, esi */
  ecx = esi;
/* 8afdeb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8afdf1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8afdf1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8afdf3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8afdf6: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8afdf9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8afdfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afdfc: ret  */
  esp += 4; SPILL(); return;
}

void f_8afe10(void) {
  LOAD_REGS();
L_8afe10: /* 8afe10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afe11: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8afe15: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 8afe17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8afe19: mov ecx, esi */
  ecx = esi;
/* 8afe1b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8afe21u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8afe21: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 8afe24: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8afe26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afe27: ret  */
  esp += 4; SPILL(); return;
}

void f_8afe40(void) {
  LOAD_REGS();
L_8afe40: /* 8afe40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afe41: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8afe45: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8afe47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8afe49: mov ecx, esi */
  ecx = esi;
/* 8afe4b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8afe51u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8afe51: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8afe54: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8afe56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afe57: ret  */
  esp += 4; SPILL(); return;
}

void f_8afe70(void) {
  LOAD_REGS();
L_8afe70: /* 8afe70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afe71: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8afe75: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8afe77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8afe79: mov ecx, esi */
  ecx = esi;
/* 8afe7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8afe81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8afe81: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8afe83: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8afe86: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8afe88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afe89: ret  */
  esp += 4; SPILL(); return;
}

void f_8afea0(void) {
  LOAD_REGS();
L_8afea0: /* 8afea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afea1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8afea5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8afea7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8afea9: mov ecx, esi */
  ecx = esi;
/* 8afeab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8afeb1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8afeb1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8afeb3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8afeb6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8afeb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afeba: ret  */
  esp += 4; SPILL(); return;
}

void f_8afed0(void) {
  LOAD_REGS();
L_8afed0: /* 8afed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8afed1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8afed5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8afed7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8afed9: mov ecx, esi */
  ecx = esi;
/* 8afedb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8afee1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8afee1: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8afee4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8afee6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8afee7: ret  */
  esp += 4; SPILL(); return;
}

void f_8aff00(void) {
  LOAD_REGS();
L_8aff00: /* 8aff00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8aff04: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8aff08: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8aff0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aff0b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8aff0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aff0e: ret  */
  esp += 4; SPILL(); return;
}

void f_8aff20(void) {
  LOAD_REGS();
L_8aff20: /* 8aff20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8aff24: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8aff28: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8aff2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aff2b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8aff2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aff2e: ret  */
  esp += 4; SPILL(); return;
}

void f_8aff40(void) {
  LOAD_REGS();
L_8aff40: /* 8aff40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8aff44: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8aff49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aff4a: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8aff50u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8aff50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8aff70(void) {
  LOAD_REGS();
L_8aff70: /* 8aff70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8aff71: mov ebp, esp */
  ebp = esp;
/* 8aff73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8aff75: push 0x9d68e9 */
  { uint32_t v = 0x9d68e9u; esp -= 4; W32(esp, v); }
/* 8aff7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8aff80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aff81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8aff88: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aff8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aff8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aff8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aff8e: mov ebx, ecx */
  ebx = ecx;
/* 8aff90: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8aff93: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8aff96: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8aff9d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8affa3u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8affa3: lea esi, [eax + 0x4f4] */
  esi = (uint32_t)(eax + 0x4f4u);
/* 8affa9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8affab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8affad: mov ecx, esi */
  ecx = esi;
/* 8affaf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8affb5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8affb5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8affb7: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8affba: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8affbc: je 0x8affc9 */
  if (zf) goto L_8affc9;
L_8affbe: /* 8affbe: push 0x97 */
  { uint32_t v = 0x97u; esp -= 4; W32(esp, v); }
/* 8affc3: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8affc9u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
L_8affc9: /* 8affc9: mov edi, dword ptr [0xcfa33c] */
  edi = R32((uint32_t)(0xcfa33cu));
/* 8affcf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8affd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8affd2: mov ecx, esp */
  ecx = esp;
/* 8affd4: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8affd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8affd9: push 0xae9d14 */
  { uint32_t v = 0xae9d14u; esp -= 4; W32(esp, v); }
/* 8affde: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8affe0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8affe0: mov ecx, ebx */
  ecx = ebx;
/* 8affe2: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8affe8u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8affe8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8affe9: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8affeb: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x8afff1u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8afff1: mov esi, eax */
  esi = eax;
/* 8afff3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8afff6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8afff8: je 0x8b0016 */
  if (zf) goto L_8b0016;
L_8afffa: /* 8afffa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8afffc: push 0xce6f18 */
  { uint32_t v = 0xce6f18u; esp -= 4; W32(esp, v); }
/* 8b0001: push 0x120 */
  { uint32_t v = 0x120u; esp -= 4; W32(esp, v); }
/* 8b0006: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0008: mov ecx, esi */
  ecx = esi;
/* 8b000a: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x8b0010u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8b0010: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_8b0016: /* 8b0016: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b0018: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0019: mov ecx, esp */
  ecx = esp;
/* 8b001b: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b001e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0020: push 0xae9d44 */
  { uint32_t v = 0xae9d44u; esp -= 4; W32(esp, v); }
/* 8b0025: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b0027u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0027: mov ecx, ebx */
  ecx = ebx;
/* 8b0029: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8b002fu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8b002f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0030: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b0032: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x8b0038u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b0038: mov esi, eax */
  esi = eax;
/* 8b003a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b003d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b003f: je 0x8b005d */
  if (zf) goto L_8b005d;
L_8b0041: /* 8b0041: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0043: push 0xce6f1c */
  { uint32_t v = 0xce6f1cu; esp -= 4; W32(esp, v); }
/* 8b0048: push 0x124 */
  { uint32_t v = 0x124u; esp -= 4; W32(esp, v); }
/* 8b004d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b004f: mov ecx, esi */
  ecx = esi;
/* 8b0051: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x8b0057u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8b0057: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_8b005d: /* 8b005d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b005f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0060: mov ecx, esp */
  ecx = esp;
/* 8b0062: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b0065: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0067: push 0xae9d70 */
  { uint32_t v = 0xae9d70u; esp -= 4; W32(esp, v); }
/* 8b006c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b006eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b006e: mov ecx, ebx */
  ecx = ebx;
/* 8b0070: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8b0076u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8b0076: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0077: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b0079: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x8b007fu); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b007f: mov esi, eax */
  esi = eax;
/* 8b0081: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0084: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0086: je 0x8b00a4 */
  if (zf) goto L_8b00a4;
L_8b0088: /* 8b0088: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b008a: push 0xce6f20 */
  { uint32_t v = 0xce6f20u; esp -= 4; W32(esp, v); }
/* 8b008f: push 0x12c */
  { uint32_t v = 0x12cu; esp -= 4; W32(esp, v); }
/* 8b0094: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0096: mov ecx, esi */
  ecx = esi;
/* 8b0098: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x8b009eu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8b009e: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_8b00a4: /* 8b00a4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b00a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b00a7: mov ecx, esp */
  ecx = esp;
/* 8b00a9: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b00ac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b00ae: push 0xae9da0 */
  { uint32_t v = 0xae9da0u; esp -= 4; W32(esp, v); }
/* 8b00b3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b00b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b00b5: mov ecx, ebx */
  ecx = ebx;
/* 8b00b7: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8b00bdu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8b00bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b00be: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b00c0: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x8b00c6u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b00c6: mov esi, eax */
  esi = eax;
/* 8b00c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b00cb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b00cd: je 0x8b00eb */
  if (zf) goto L_8b00eb;
L_8b00cf: /* 8b00cf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b00d1: push 0xce6f24 */
  { uint32_t v = 0xce6f24u; esp -= 4; W32(esp, v); }
/* 8b00d6: push 0x128 */
  { uint32_t v = 0x128u; esp -= 4; W32(esp, v); }
/* 8b00db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b00dd: mov ecx, esi */
  ecx = esi;
/* 8b00df: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x8b00e5u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8b00e5: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_8b00eb: /* 8b00eb: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8b00ee: call dword ptr [0xcfaa40] */
  esp -= 4; W32(esp, 0x8b00f4u); SPILL(); f_4e2306(); if (g_unwind) return; /* Core!??0FArchive@@QAE@XZ */ RELOAD();
/* 8b00f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b00f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b00f7: mov ecx, esp */
  ecx = esp;
/* 8b00f9: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b00fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b00fe: push 0xae9dc0 */
  { uint32_t v = 0xae9dc0u; esp -= 4; W32(esp, v); }
/* 8b0103: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b0107: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b0109u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0109: mov ecx, ebx */
  ecx = ebx;
/* 8b010b: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8b0111u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8b0111: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0112: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 8b0117: call dword ptr [0xcfaa3c] */
  esp -= 4; W32(esp, 0x8b011du); SPILL(); f_4e3535(); if (g_unwind) return; /* Core!??2UStruct@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b011d: mov esi, eax */
  esi = eax;
/* 8b011f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0122: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0124: je 0x8b013a */
  if (zf) goto L_8b013a;
L_8b0126: /* 8b0126: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0128: mov ecx, esi */
  ecx = esi;
/* 8b012a: call dword ptr [0xcfaa38] */
  esp -= 4; W32(esp, 0x8b0130u); SPILL(); f_4e15a5(); if (g_unwind) return; /* Core!??0UStruct@@QAE@PAV0@@Z */ RELOAD();
/* 8b0130: mov dword ptr [esi], 0xa10390 */
  W32((uint32_t)(esi), 0xa10390u);
/* 8b0136: mov ebx, esi */
  ebx = esi;
/* 8b0138: jmp 0x8b013c */
  goto L_8b013c;
L_8b013a: /* 8b013a: xor ebx, ebx */
  ebx = 0;
L_8b013c: /* 8b013c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b013e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b013f: mov ecx, esp */
  ecx = esp;
/* 8b0141: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b0144: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0146: push 0xae9de8 */
  { uint32_t v = 0xae9de8u; esp -= 4; W32(esp, v); }
/* 8b014b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b014du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b014d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b014e: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b0150: call dword ptr [0xcfac3c] */
  esp -= 4; W32(esp, 0x8b0156u); SPILL(); f_4e18ac(); if (g_unwind) return; /* Core!??2UObjectProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b0156: mov esi, eax */
  esi = eax;
/* 8b0158: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b015b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b015d: je 0x8b017d */
  if (zf) goto L_8b017d;
L_8b015f: /* 8b015f: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 8b0164: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0166: push 0xce6f28 */
  { uint32_t v = 0xce6f28u; esp -= 4; W32(esp, v); }
/* 8b016b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b016d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b016f: mov ecx, esi */
  ecx = esi;
/* 8b0171: call dword ptr [0xcfac38] */
  esp -= 4; W32(esp, 0x8b0177u); SPILL(); f_4e15b4(); if (g_unwind) return; /* Core!??0UObjectProperty@@QAE@W4ECppProperty@@HPBGKPAVUClass@@@Z */ RELOAD();
/* 8b0177: mov dword ptr [esi], 0xa1b770 */
  W32((uint32_t)(esi), 0xa1b770u);
L_8b017d: /* 8b017d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b017f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0180: mov ecx, esp */
  ecx = esp;
/* 8b0182: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b0185: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0187: push 0xae9dfc */
  { uint32_t v = 0xae9dfcu; esp -= 4; W32(esp, v); }
/* 8b018c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b018eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b018e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b018f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b0191: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x8b0197u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b0197: mov esi, eax */
  esi = eax;
/* 8b0199: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b019c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b019e: je 0x8b01b9 */
  if (zf) goto L_8b01b9;
L_8b01a0: /* 8b01a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b01a2: push 0xce6f2c */
  { uint32_t v = 0xce6f2cu; esp -= 4; W32(esp, v); }
/* 8b01a7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b01a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b01ab: mov ecx, esi */
  ecx = esi;
/* 8b01ad: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x8b01b3u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8b01b3: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_8b01b9: /* 8b01b9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b01bb: mov ecx, ebx */
  ecx = ebx;
/* 8b01bd: call dword ptr [0xcfaa34] */
  esp -= 4; W32(esp, 0x8b01c3u); SPILL(); f_4e33eb(); if (g_unwind) return; /* Core!?SetPropertiesSize@UStruct@@QAEXH@Z */ RELOAD();
/* 8b01c3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8b01c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b01c7: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8b01ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b01cb: mov ecx, ebx */
  ecx = ebx;
/* 8b01cd: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8b01d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b01d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b01d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b01d6: mov ecx, esp */
  ecx = esp;
/* 8b01d8: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b01db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b01dd: push 0xae9e1c */
  { uint32_t v = 0xae9e1cu; esp -= 4; W32(esp, v); }
/* 8b01e2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b01e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b01e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b01e7: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8b01edu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8b01ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b01ee: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b01f0: call dword ptr [0xcfac34] */
  esp -= 4; W32(esp, 0x8b01f6u); SPILL(); f_4e2ea5(); if (g_unwind) return; /* Core!??2UArrayProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b01f6: mov esi, eax */
  esi = eax;
/* 8b01f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b01fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b01fd: je 0x8b021f */
  if (zf) goto L_8b021f;
L_8b01ff: /* 8b01ff: push 0x41 */
  { uint32_t v = 0x41u; esp -= 4; W32(esp, v); }
/* 8b0201: push 0xce6f30 */
  { uint32_t v = 0xce6f30u; esp -= 4; W32(esp, v); }
/* 8b0206: push 0xf8 */
  { uint32_t v = 0xf8u; esp -= 4; W32(esp, v); }
/* 8b020b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b020d: mov ecx, esi */
  ecx = esi;
/* 8b020f: call dword ptr [0xcfac30] */
  esp -= 4; W32(esp, 0x8b0215u); SPILL(); f_4e26ee(); if (g_unwind) return; /* Core!??0UArrayProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8b0215: mov dword ptr [esi], 0xa1b690 */
  W32((uint32_t)(esi), 0xa1b690u);
/* 8b021b: mov edi, esi */
  edi = esi;
/* 8b021d: jmp 0x8b0221 */
  goto L_8b0221;
L_8b021f: /* 8b021f: xor edi, edi */
  edi = 0;
L_8b0221: /* 8b0221: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b0223: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0224: mov ecx, esp */
  ecx = esp;
/* 8b0226: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b0229: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b022b: push 0xae9e30 */
  { uint32_t v = 0xae9e30u; esp -= 4; W32(esp, v); }
/* 8b0230: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x8b0236u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 8b0236: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b0237: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b0239: call dword ptr [0xcfaa20] */
  esp -= 4; W32(esp, 0x8b023fu); SPILL(); f_4e17fd(); if (g_unwind) return; /* Core!??2UStructProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b023f: mov esi, eax */
  esi = eax;
/* 8b0241: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0244: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0246: je 0x8b0264 */
  if (zf) goto L_8b0264;
L_8b0248: /* 8b0248: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b0249: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b024b: push 0xce6f34 */
  { uint32_t v = 0xce6f34u; esp -= 4; W32(esp, v); }
/* 8b0250: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0252: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0254: mov ecx, esi */
  ecx = esi;
/* 8b0256: call dword ptr [0xcfaa1c] */
  esp -= 4; W32(esp, 0x8b025cu); SPILL(); f_4e26e9(); if (g_unwind) return; /* Core!??0UStructProperty@@QAE@W4ECppProperty@@HPBGKPAVUStruct@@@Z */ RELOAD();
/* 8b025c: mov dword ptr [esi], 0xa100f0 */
  W32((uint32_t)(esi), 0xa100f0u);
/* 8b0262: jmp 0x8b0266 */
  goto L_8b0266;
L_8b0264: /* 8b0264: xor esi, esi */
  esi = 0;
L_8b0266: /* 8b0266: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0269: mov dword ptr [edi + 0x6c], esi */
  W32((uint32_t)(edi + 0x6cu), esi);
/* 8b026c: mov ecx, 1 */
  ecx = 0x1u;
/* 8b0271: xor edx, edx */
  edx = 0;
/* 8b0273: mov dword ptr [eax + 0x124], ecx */
  W32((uint32_t)(eax + 0x124u), ecx);
/* 8b0279: mov dword ptr [eax + 0x12c], ecx */
  W32((uint32_t)(eax + 0x12cu), ecx);
/* 8b027f: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8b0282: mov dword ptr [eax + 0x120], edx */
  W32((uint32_t)(eax + 0x120u), edx);
/* 8b0288: mov dword ptr [eax + 0x128], edx */
  W32((uint32_t)(eax + 0x128u), edx);
/* 8b028e: mov byte ptr [ebp - 4], dl */
  W8((uint32_t)(ebp + 0xfffffffcu), (edx & 0xffu));
/* 8b0291: call dword ptr [0xcfaa14] */
  esp -= 4; W32(esp, 0x8b0297u); SPILL(); f_4e4552(); if (g_unwind) return; /* Core!??1FArchive@@UAE@XZ */ RELOAD();
/* 8b0297: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b029a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b029b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b029c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b02a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b02a4: mov esp, ebp */
  esp = ebp;
/* 8b02a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b02a7: ret  */
  esp += 4; SPILL(); return;
}

void f_8b008a(void) {
  LOAD_REGS();
L_8b008a: /* 8b008a: push 0xce6f20 */
  { uint32_t v = 0xce6f20u; esp -= 4; W32(esp, v); }
/* 8b008f: push 0x12c */
  { uint32_t v = 0x12cu; esp -= 4; W32(esp, v); }
/* 8b0094: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0096: mov ecx, esi */
  ecx = esi;
/* 8b0098: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x8b009eu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8b009e: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
/* 8b00a4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b00a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b00a7: mov ecx, esp */
  ecx = esp;
/* 8b00a9: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b00ac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b00ae: push 0xae9da0 */
  { uint32_t v = 0xae9da0u; esp -= 4; W32(esp, v); }
/* 8b00b3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b00b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b00b5: mov ecx, ebx */
  ecx = ebx;
/* 8b00b7: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8b00bdu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8b00bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b00be: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b00c0: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x8b00c6u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b00c6: mov esi, eax */
  esi = eax;
/* 8b00c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b00cb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b00cd: je 0x8b00eb */
  if (zf) goto L_8b00eb;
L_8b00cf: /* 8b00cf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b00d1: push 0xce6f24 */
  { uint32_t v = 0xce6f24u; esp -= 4; W32(esp, v); }
/* 8b00d6: push 0x128 */
  { uint32_t v = 0x128u; esp -= 4; W32(esp, v); }
/* 8b00db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b00dd: mov ecx, esi */
  ecx = esi;
/* 8b00df: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x8b00e5u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8b00e5: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_8b00eb: /* 8b00eb: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8b00ee: call dword ptr [0xcfaa40] */
  esp -= 4; W32(esp, 0x8b00f4u); SPILL(); f_4e2306(); if (g_unwind) return; /* Core!??0FArchive@@QAE@XZ */ RELOAD();
/* 8b00f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b00f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b00f7: mov ecx, esp */
  ecx = esp;
/* 8b00f9: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b00fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b00fe: push 0xae9dc0 */
  { uint32_t v = 0xae9dc0u; esp -= 4; W32(esp, v); }
/* 8b0103: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b0107: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b0109u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0109: mov ecx, ebx */
  ecx = ebx;
/* 8b010b: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8b0111u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8b0111: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0112: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 8b0117: call dword ptr [0xcfaa3c] */
  esp -= 4; W32(esp, 0x8b011du); SPILL(); f_4e3535(); if (g_unwind) return; /* Core!??2UStruct@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b011d: mov esi, eax */
  esi = eax;
/* 8b011f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0122: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0124: je 0x8b013a */
  if (zf) goto L_8b013a;
L_8b0126: /* 8b0126: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0128: mov ecx, esi */
  ecx = esi;
/* 8b012a: call dword ptr [0xcfaa38] */
  esp -= 4; W32(esp, 0x8b0130u); SPILL(); f_4e15a5(); if (g_unwind) return; /* Core!??0UStruct@@QAE@PAV0@@Z */ RELOAD();
/* 8b0130: mov dword ptr [esi], 0xa10390 */
  W32((uint32_t)(esi), 0xa10390u);
/* 8b0136: mov ebx, esi */
  ebx = esi;
/* 8b0138: jmp 0x8b013c */
  goto L_8b013c;
L_8b013a: /* 8b013a: xor ebx, ebx */
  ebx = 0;
L_8b013c: /* 8b013c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b013e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b013f: mov ecx, esp */
  ecx = esp;
/* 8b0141: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b0144: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0146: push 0xae9de8 */
  { uint32_t v = 0xae9de8u; esp -= 4; W32(esp, v); }
/* 8b014b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b014du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b014d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b014e: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b0150: call dword ptr [0xcfac3c] */
  esp -= 4; W32(esp, 0x8b0156u); SPILL(); f_4e18ac(); if (g_unwind) return; /* Core!??2UObjectProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b0156: mov esi, eax */
  esi = eax;
/* 8b0158: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b015b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b015d: je 0x8b017d */
  if (zf) goto L_8b017d;
L_8b015f: /* 8b015f: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 8b0164: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0166: push 0xce6f28 */
  { uint32_t v = 0xce6f28u; esp -= 4; W32(esp, v); }
/* 8b016b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b016d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b016f: mov ecx, esi */
  ecx = esi;
/* 8b0171: call dword ptr [0xcfac38] */
  esp -= 4; W32(esp, 0x8b0177u); SPILL(); f_4e15b4(); if (g_unwind) return; /* Core!??0UObjectProperty@@QAE@W4ECppProperty@@HPBGKPAVUClass@@@Z */ RELOAD();
/* 8b0177: mov dword ptr [esi], 0xa1b770 */
  W32((uint32_t)(esi), 0xa1b770u);
L_8b017d: /* 8b017d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b017f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0180: mov ecx, esp */
  ecx = esp;
/* 8b0182: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b0185: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0187: push 0xae9dfc */
  { uint32_t v = 0xae9dfcu; esp -= 4; W32(esp, v); }
/* 8b018c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b018eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b018e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b018f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b0191: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x8b0197u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b0197: mov esi, eax */
  esi = eax;
/* 8b0199: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b019c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b019e: je 0x8b01b9 */
  if (zf) goto L_8b01b9;
L_8b01a0: /* 8b01a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b01a2: push 0xce6f2c */
  { uint32_t v = 0xce6f2cu; esp -= 4; W32(esp, v); }
/* 8b01a7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b01a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b01ab: mov ecx, esi */
  ecx = esi;
/* 8b01ad: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x8b01b3u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8b01b3: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_8b01b9: /* 8b01b9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b01bb: mov ecx, ebx */
  ecx = ebx;
/* 8b01bd: call dword ptr [0xcfaa34] */
  esp -= 4; W32(esp, 0x8b01c3u); SPILL(); f_4e33eb(); if (g_unwind) return; /* Core!?SetPropertiesSize@UStruct@@QAEXH@Z */ RELOAD();
/* 8b01c3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8b01c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b01c7: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8b01ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b01cb: mov ecx, ebx */
  ecx = ebx;
/* 8b01cd: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8b01d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b01d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b01d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b01d6: mov ecx, esp */
  ecx = esp;
/* 8b01d8: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b01db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b01dd: push 0xae9e1c */
  { uint32_t v = 0xae9e1cu; esp -= 4; W32(esp, v); }
/* 8b01e2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b01e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b01e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b01e7: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8b01edu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8b01ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b01ee: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b01f0: call dword ptr [0xcfac34] */
  esp -= 4; W32(esp, 0x8b01f6u); SPILL(); f_4e2ea5(); if (g_unwind) return; /* Core!??2UArrayProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b01f6: mov esi, eax */
  esi = eax;
/* 8b01f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b01fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b01fd: je 0x8b021f */
  if (zf) goto L_8b021f;
L_8b01ff: /* 8b01ff: push 0x41 */
  { uint32_t v = 0x41u; esp -= 4; W32(esp, v); }
/* 8b0201: push 0xce6f30 */
  { uint32_t v = 0xce6f30u; esp -= 4; W32(esp, v); }
/* 8b0206: push 0xf8 */
  { uint32_t v = 0xf8u; esp -= 4; W32(esp, v); }
/* 8b020b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b020d: mov ecx, esi */
  ecx = esi;
/* 8b020f: call dword ptr [0xcfac30] */
  esp -= 4; W32(esp, 0x8b0215u); SPILL(); f_4e26ee(); if (g_unwind) return; /* Core!??0UArrayProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 8b0215: mov dword ptr [esi], 0xa1b690 */
  W32((uint32_t)(esi), 0xa1b690u);
/* 8b021b: mov edi, esi */
  edi = esi;
/* 8b021d: jmp 0x8b0221 */
  goto L_8b0221;
L_8b021f: /* 8b021f: xor edi, edi */
  edi = 0;
L_8b0221: /* 8b0221: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b0223: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0224: mov ecx, esp */
  ecx = esp;
/* 8b0226: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8b0229: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b022b: push 0xae9e30 */
  { uint32_t v = 0xae9e30u; esp -= 4; W32(esp, v); }
/* 8b0230: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x8b0236u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 8b0236: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b0237: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b0239: call dword ptr [0xcfaa20] */
  esp -= 4; W32(esp, 0x8b023fu); SPILL(); f_4e17fd(); if (g_unwind) return; /* Core!??2UStructProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 8b023f: mov esi, eax */
  esi = eax;
/* 8b0241: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0244: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0246: je 0x8b0264 */
  if (zf) goto L_8b0264;
L_8b0248: /* 8b0248: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b0249: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b024b: push 0xce6f34 */
  { uint32_t v = 0xce6f34u; esp -= 4; W32(esp, v); }
/* 8b0250: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0252: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0254: mov ecx, esi */
  ecx = esi;
/* 8b0256: call dword ptr [0xcfaa1c] */
  esp -= 4; W32(esp, 0x8b025cu); SPILL(); f_4e26e9(); if (g_unwind) return; /* Core!??0UStructProperty@@QAE@W4ECppProperty@@HPBGKPAVUStruct@@@Z */ RELOAD();
/* 8b025c: mov dword ptr [esi], 0xa100f0 */
  W32((uint32_t)(esi), 0xa100f0u);
/* 8b0262: jmp 0x8b0266 */
  goto L_8b0266;
L_8b0264: /* 8b0264: xor esi, esi */
  esi = 0;
L_8b0266: /* 8b0266: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0269: mov dword ptr [edi + 0x6c], esi */
  W32((uint32_t)(edi + 0x6cu), esi);
/* 8b026c: mov ecx, 1 */
  ecx = 0x1u;
/* 8b0271: xor edx, edx */
  edx = 0;
/* 8b0273: mov dword ptr [eax + 0x124], ecx */
  W32((uint32_t)(eax + 0x124u), ecx);
/* 8b0279: mov dword ptr [eax + 0x12c], ecx */
  W32((uint32_t)(eax + 0x12cu), ecx);
/* 8b027f: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8b0282: mov dword ptr [eax + 0x120], edx */
  W32((uint32_t)(eax + 0x120u), edx);
/* 8b0288: mov dword ptr [eax + 0x128], edx */
  W32((uint32_t)(eax + 0x128u), edx);
/* 8b028e: mov byte ptr [ebp - 4], dl */
  W8((uint32_t)(ebp + 0xfffffffcu), (edx & 0xffu));
/* 8b0291: call dword ptr [0xcfaa14] */
  esp -= 4; W32(esp, 0x8b0297u); SPILL(); f_4e4552(); if (g_unwind) return; /* Core!??1FArchive@@UAE@XZ */ RELOAD();
/* 8b0297: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b029a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b029b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b029c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b02a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b02a4: mov esp, ebp */
  esp = ebp;
/* 8b02a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b02a7: ret  */
  esp += 4; SPILL(); return;
}

void f_8b02a8(void) {
  LOAD_REGS();
L_8b02a8: /* 8b02a8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b02ab: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b02b0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8b02b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b02b4: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8b02b7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b02bcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b02bc(); return;
}

void f_8b02bc(void) {
  LOAD_REGS();
L_8b02bc: /* 8b02bc: push 0xa1b644 */
  { uint32_t v = 0xa1b644u; esp -= 4; W32(esp, v); }
/* 8b02c1: push 0xae9e50 */
  { uint32_t v = 0xae9e50u; esp -= 4; W32(esp, v); }
/* 8b02c6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b02ccu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b02cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b02cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b02d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b02d3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b02d8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b02d8: guest_badaddr(0x8b02d8); return;
}

void f_8b03c0(void) {
  LOAD_REGS();
L_8b03c0: /* 8b03c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b03c1: mov esi, ecx */
  esi = ecx;
/* 8b03c3: call dword ptr [0xcfac40] */
  esp -= 4; W32(esp, 0x8b03c9u); SPILL(); f_4e286a(); if (g_unwind) return; /* Core!??1UObjectProperty@@UAE@XZ */ RELOAD();
/* 8b03c9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b03ce: je 0x8b03dc */
  if (zf) goto L_8b03dc;
L_8b03d0: /* 8b03d0: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b03d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b03d3: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x8b03d9u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 8b03d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b03dc: /* 8b03dc: mov eax, esi */
  eax = esi;
/* 8b03de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b03df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b0400(void) {
  LOAD_REGS();
L_8b0400: /* 8b0400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b0401: mov esi, ecx */
  esi = ecx;
/* 8b0403: call dword ptr [0xcfac44] */
  esp -= 4; W32(esp, 0x8b0409u); SPILL(); f_4e371a(); if (g_unwind) return; /* Core!??1UArrayProperty@@UAE@XZ */ RELOAD();
/* 8b0409: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b040e: je 0x8b041c */
  if (zf) goto L_8b041c;
L_8b0410: /* 8b0410: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8b0412: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b0413: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x8b0419u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 8b0419: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b041c: /* 8b041c: mov eax, esi */
  eax = esi;
/* 8b041e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b041f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b0440(void) {
  LOAD_REGS();
L_8b0440: /* 8b0440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b0441: mov ebp, esp */
  ebp = esp;
/* 8b0443: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b0445: push 0x9d6900 */
  { uint32_t v = 0x9d6900u; esp -= 4; W32(esp, v); }
/* 8b044a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b0450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0451: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b0458: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b045b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b045c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b045d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b045e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b0461: mov esi, ecx */
  esi = ecx;
/* 8b0463: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b046a: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x8b0470u); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
/* 8b0470: xor edi, edi */
  edi = 0;
/* 8b0472: xor eax, eax */
  eax = 0;
L_8b0474: /* 8b0474: cmp eax, dword ptr [esi + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b047a: jge 0x8b049b */
  if ((sf == of)) goto L_8b049b;
L_8b047c: /* 8b047c: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 8b0482: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b0485: mov ebx, dword ptr [edx + ecx*4 + 8] */
  ebx = R32((uint32_t)(edx + ecx*4 + 0x8u));
/* 8b0489: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8b048c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8b048f: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0491: je 0x8b0498 */
  if (zf) goto L_8b0498;
L_8b0493: /* 8b0493: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b0496: jmp 0x8b049f */
  goto L_8b049f;
L_8b0498: /* 8b0498: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b0499: jmp 0x8b0474 */
  goto L_8b0474;
L_8b049b: /* 8b049b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b049d: je 0x8b04aa */
  if (zf) goto L_8b04aa;
L_8b049f: /* 8b049f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b04a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b04a3: mov ecx, esi */
  ecx = esi;
/* 8b04a5: call 0x6cc590 */
  esp -= 4; W32(esp, 0x8b04aau); SPILL(); f_6cc590(); if (g_unwind) return; RELOAD();
L_8b04aa: /* 8b04aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b04ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b04ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b04af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b04b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b04b7: mov esp, ebp */
  esp = ebp;
/* 8b04b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b04ba: ret  */
  esp += 4; SPILL(); return;
}

void f_8b04bb(void) {
  LOAD_REGS();
L_8b04bb: /* 8b04bb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b04be: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b04c3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8b04c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b04c7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b04ca: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b04cfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b04cf(); return;
}

void f_8b04cf(void) {
  LOAD_REGS();
L_8b04cf: /* 8b04cf: push 0xa1b84c */
  { uint32_t v = 0xa1b84cu; esp -= 4; W32(esp, v); }
/* 8b04d4: push 0xae9e58 */
  { uint32_t v = 0xae9e58u; esp -= 4; W32(esp, v); }
/* 8b04d9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b04dfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b04df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b04e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b04e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b04e6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b04ebu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b04eb: guest_badaddr(0x8b04eb); return;
}

void f_8b0520(void) {
  LOAD_REGS();
L_8b0520: /* 8b0520: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b0521: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b0522: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 8b0526: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b0527: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 8b052d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b052e: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8b0532: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 8b0535: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0536: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 8b0539: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b053a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b053b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b053c: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 8b053f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0541u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0541: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0545: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0547u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0547: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b054a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b054b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b054du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b054d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0550: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 8b0553: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0554: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0557: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b0558: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8b055b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b055c: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 8b055f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0560: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b0561: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0562: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0564u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0564: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0568: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b056au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b056a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b056d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b056e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0570u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0570: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0573: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0574: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0576u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0576: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0579: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b057a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b057cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b057c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b057f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b0580: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b0581: mov eax, ebp */
  eax = ebp;
/* 8b0583: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b0584: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b0585: ret  */
  esp += 4; SPILL(); return;
}

void f_8b05b0(void) {
  LOAD_REGS();
L_8b05b0: /* 8b05b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b05b1: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 8b05b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b05b6: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8b05ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b05bb: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8b05be: xor eax, eax */
  eax = 0;
/* 8b05c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b05c2: jle 0x8b05d2 */
  if ((zf || sf != of)) goto L_8b05d2;
L_8b05c4: /* 8b05c4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
L_8b05c6: /* 8b05c6: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b05c8: je 0x8b05fc */
  if (zf) goto L_8b05fc;
L_8b05ca: /* 8b05ca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b05cb: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b05ce: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b05d0: jl 0x8b05c6 */
  if ((sf != of)) goto L_8b05c6;
L_8b05d2: /* 8b05d2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b05d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b05d6: mov ecx, esi */
  ecx = esi;
/* 8b05d8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b05deu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b05de: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b05e0: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b05e3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8b05e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b05e8: je 0x8b05fa */
  if (zf) goto L_8b05fa;
L_8b05ea: /* 8b05ea: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 8b05ec: mov dword ptr [eax + 8], 1 */
  W32((uint32_t)(eax + 0x8u), 0x1u);
/* 8b05f3: mov dword ptr [eax + 4], 1 */
  W32((uint32_t)(eax + 0x4u), 0x1u);
L_8b05fa: /* 8b05fa: mov eax, edi */
  eax = edi;
L_8b05fc: /* 8b05fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b05fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b05fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b05ff: ret  */
  esp += 4; SPILL(); return;
}

void f_8b0620(void) {
  LOAD_REGS();
L_8b0620: /* 8b0620: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b0623: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b0624: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b0625: mov ebp, dword ptr [esp + 0x78] */
  ebp = R32((uint32_t)(esp + 0x78u));
/* 8b0629: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b062a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b062b: mov ecx, ebp */
  ecx = ebp;
/* 8b062d: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b0633u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b0633: cmp eax, 0x6f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0636: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 8b063c: jge 0x8b0776 */
  if ((sf == of)) goto L_8b0776;
L_8b0642: /* 8b0642: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 8b0646: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0647: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8b064b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b064c: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 8b0650: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0651: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b0652: call 0x6cc473 */
  esp -= 4; W32(esp, 0x8b0657u); SPILL(); f_6cc473(); if (g_unwind) return; RELOAD();
/* 8b0657: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b065a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b065b: call 0x6cc473 */
  esp -= 4; W32(esp, 0x8b0660u); SPILL(); f_6cc473(); if (g_unwind) return; RELOAD();
/* 8b0660: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0663: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0664: call 0x6cc473 */
  esp -= 4; W32(esp, 0x8b0669u); SPILL(); f_6cc473(); if (g_unwind) return; RELOAD();
/* 8b0669: mov edi, dword ptr [esp + 0x8c] */
  edi = R32((uint32_t)(esp + 0x8cu));
/* 8b0670: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8b0674: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8b0678: mov eax, edi */
  eax = edi;
/* 8b067a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8b067c: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8b0680: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8b0683: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8b0687: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8b068a: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 8b068e: mov dword ptr [edi + 0x24], edx */
  W32((uint32_t)(edi + 0x24u), edx);
/* 8b0691: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* 8b0694: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8b0696: mov byte ptr [esp + 0x8c], al */
  W8((uint32_t)(esp + 0x8cu), (eax & 0xffu));
/* 8b069d: mov byte ptr [esp + 0x8d], al */
  W8((uint32_t)(esp + 0x8du), (eax & 0xffu));
/* 8b06a4: mov byte ptr [esp + 0x8e], al */
  W8((uint32_t)(esp + 0x8eu), (eax & 0xffu));
/* 8b06ab: mov byte ptr [esp + 0x8f], al */
  W8((uint32_t)(esp + 0x8fu), (eax & 0xffu));
/* 8b06b2: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 8b06b9: mov dword ptr [edi + 0xe4], ecx */
  W32((uint32_t)(edi + 0xe4u), ecx);
/* 8b06bf: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 8b06c3: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* 8b06c6: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8b06c8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8b06cc: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b06cf: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 8b06d3: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8b06d6: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 8b06da: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 8b06de: mov dword ptr [edi + 0x64], edx */
  W32((uint32_t)(edi + 0x64u), edx);
/* 8b06e1: mov byte ptr [esp + 0x8c], al */
  W8((uint32_t)(esp + 0x8cu), (eax & 0xffu));
/* 8b06e8: mov byte ptr [esp + 0x8d], al */
  W8((uint32_t)(esp + 0x8du), (eax & 0xffu));
/* 8b06ef: mov byte ptr [esp + 0x8e], al */
  W8((uint32_t)(esp + 0x8eu), (eax & 0xffu));
/* 8b06f6: mov byte ptr [esp + 0x8f], al */
  W8((uint32_t)(esp + 0x8fu), (eax & 0xffu));
/* 8b06fd: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 8b0704: mov dword ptr [edi + 0x68], ecx */
  W32((uint32_t)(edi + 0x68u), ecx);
/* 8b0707: mov dword ptr [edi + 0xe8], edx */
  W32((uint32_t)(edi + 0xe8u), edx);
/* 8b070d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 8b0711: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8b0714: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b0716: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 8b071a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b071d: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 8b0721: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b0724: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 8b0728: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 8b072f: mov byte ptr [esp + 0x8c], al */
  W8((uint32_t)(esp + 0x8cu), (eax & 0xffu));
/* 8b0736: mov byte ptr [esp + 0x8d], al */
  W8((uint32_t)(esp + 0x8du), (eax & 0xffu));
/* 8b073d: mov byte ptr [esp + 0x8e], al */
  W8((uint32_t)(esp + 0x8eu), (eax & 0xffu));
/* 8b0744: mov byte ptr [esp + 0x8f], al */
  W8((uint32_t)(esp + 0x8fu), (eax & 0xffu));
/* 8b074b: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 8b0752: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0755: mov dword ptr [edi + 0xa4], ecx */
  W32((uint32_t)(edi + 0xa4u), ecx);
/* 8b075b: mov dword ptr [edi + 0xa8], edx */
  W32((uint32_t)(edi + 0xa8u), edx);
/* 8b0761: mov dword ptr [edi + 0xec], eax */
  W32((uint32_t)(edi + 0xecu), eax);
/* 8b0767: mov dword ptr [edi + 0xf8], 1 */
  W32((uint32_t)(edi + 0xf8u), 0x1u);
/* 8b0771: jmp 0x8b08dc */
  goto L_8b08dc;
L_8b0776: /* 8b0776: mov edi, dword ptr [esp + 0x84] */
  edi = R32((uint32_t)(esp + 0x84u));
/* 8b077d: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 8b0780: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0781: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 8b0784: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0785: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b0786: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b0787: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 8b078a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b078cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b078c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b078f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0790: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0792u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0792: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0796: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0798u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0798: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b079b: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8b079e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b079f: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 8b07a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b07a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b07a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b07a5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b07a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b07a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b07aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b07ab: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b07adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b07ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b07b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b07b1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b07b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b07b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b07b6: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8b07b9: lea ebx, [edi + 0xf8] */
  ebx = (uint32_t)(edi + 0xf8u);
/* 8b07bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b07c0: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 8b07c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b07c4: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 8b07c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b07c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b07c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b07ca: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b07ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b07cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b07cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b07d0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b07d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b07d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b07d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b07d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b07d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b07d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b07db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b07dc: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8b07e2u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8b07e2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8b07e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b07e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b07e9: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* 8b07f4: jle 0x8b0855 */
  if ((zf || sf != of)) goto L_8b0855;
L_8b07f6: /* 8b07f6: lea ebx, [edi + 0x68] */
  ebx = (uint32_t)(edi + 0x68u);
/* 8b07f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b0800: /* 8b0800: lea eax, [ebx - 0x40] */
  eax = (uint32_t)(ebx + 0xffffffc0u);
/* 8b0803: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0804: lea ecx, [ebx - 0x44] */
  ecx = (uint32_t)(ebx + 0xffffffbcu);
/* 8b0807: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0808: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b0809: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b080bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b080b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b080e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b080f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0811u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0811: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0814: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b0815: lea edx, [ebx - 4] */
  edx = (uint32_t)(ebx + 0xfffffffcu);
/* 8b0818: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0819: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b081a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b081cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b081c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b081f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0820: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0822u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0822: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0825: lea ecx, [ebx + 0x40] */
  ecx = (uint32_t)(ebx + 0x40u);
/* 8b0828: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0829: lea edx, [ebx + 0x3c] */
  edx = (uint32_t)(ebx + 0x3cu);
/* 8b082c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b082d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b082e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0830u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0830: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0834: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0836u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0836: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 8b083d: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 8b0843: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0846: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b0847: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b084a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b084c: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 8b0853: jl 0x8b0800 */
  if ((sf != of)) goto L_8b0800;
L_8b0855: /* 8b0855: mov ebx, dword ptr [0xcfa1b8] */
  ebx = R32((uint32_t)(0xcfa1b8u));
/* 8b085b: lea eax, [edi + 0xe4] */
  eax = (uint32_t)(edi + 0xe4u);
/* 8b0861: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 8b0864: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0865: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0866: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 8b0869: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b086a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b086d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b086e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b086f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b0871u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0871: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0875: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b0877u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0877: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b087a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b087b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b087du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b087d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0881: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b0883u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0883: lea ecx, [edi + 0xe8] */
  ecx = (uint32_t)(edi + 0xe8u);
/* 8b0889: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b088c: lea edx, [ecx + 3] */
  edx = (uint32_t)(ecx + 0x3u);
/* 8b088f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0890: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0891: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 8b0894: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0895: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0898: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b089a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b089cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b089c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b089f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b08a0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b08a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b08a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b08a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b08a6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b08a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b08a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b08ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b08ac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b08aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b08ae: lea ecx, [edi + 0xec] */
  ecx = (uint32_t)(edi + 0xecu);
/* 8b08b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b08b7: lea edx, [ecx + 3] */
  edx = (uint32_t)(ecx + 0x3u);
/* 8b08ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b08bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b08bc: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 8b08bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b08c0: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b08c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b08c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b08c5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b08c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b08c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b08ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b08cb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b08cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b08cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b08d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b08d1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b08d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b08d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b08d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b08d7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b08d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b08d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b08dc: /* 8b08dc: mov ecx, ebp */
  ecx = ebp;
/* 8b08de: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b08e4u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b08e4: cmp eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b08e7: mov ebx, dword ptr [0xcfa27c] */
  ebx = R32((uint32_t)(0xcfa27cu));
/* 8b08ed: jge 0x8b092b */
  if ((sf == of)) goto L_8b092b;
L_8b08ef: /* 8b08ef: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 8b08f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b08f4: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 8b08f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b08f9: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 8b08fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b08fe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b08ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0901u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0901: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0905: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b0907u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0907: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b090a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b090b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b090du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b090d: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 8b0910: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0913: lea eax, [edi + 0x100] */
  eax = (uint32_t)(edi + 0x100u);
/* 8b0919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b091a: lea eax, [edi + 0xfc] */
  eax = (uint32_t)(edi + 0xfcu);
/* 8b0920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0921: mov ecx, ebp */
  ecx = ebp;
/* 8b0923: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b0926u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0926: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0927: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b0929u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0929: jmp 0x8b0939 */
  goto L_8b0939;
L_8b092b: /* 8b092b: lea ecx, [edi + 0xf0] */
  ecx = (uint32_t)(edi + 0xf0u);
/* 8b0931: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0932: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b0933: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8b0939u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
L_8b0939: /* 8b0939: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b093c: add edi, 0xf4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xf4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0942: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b0943: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b0944: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b0946u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b0946: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0949: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b094a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b094b: mov eax, ebp */
  eax = ebp;
/* 8b094d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b094e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b094f: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0952: ret  */
  esp += 4; SPILL(); return;
}

void f_8b0a30(void) {
  LOAD_REGS();
L_8b0a30: /* 8b0a30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b0a31: mov ebp, esp */
  ebp = esp;
/* 8b0a33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b0a35: push 0x9d6910 */
  { uint32_t v = 0x9d6910u; esp -= 4; W32(esp, v); }
/* 8b0a3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b0a40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0a41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b0a48: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b0a4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b0a4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b0a4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b0a4e: xor edi, edi */
  edi = 0;
/* 8b0a50: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b0a53: mov esi, ecx */
  esi = ecx;
/* 8b0a55: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8b0a58: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x8b0a5eu); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 8b0a5e: cmp dword ptr [esi + 0x148], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x148u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0a65: jne 0x8b0dfb */
  if (!zf) goto L_8b0dfb;
L_8b0a6b: /* 8b0a6b: cmp dword ptr [esi + 0x140], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x140u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0a71: jne 0x8b0a81 */
  if (!zf) goto L_8b0a81;
L_8b0a73: /* 8b0a73: mov eax, dword ptr [esi + 0x130] */
  eax = R32((uint32_t)(esi + 0x130u));
/* 8b0a79: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 8b0a7f: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8b0a81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b0a81: /* 8b0a81: xor eax, eax */
  eax = 0;
L_8b0a83: /* 8b0a83: cmp eax, dword ptr [esi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0a86: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8b0a89: jge 0x8b0dfb */
  if ((sf == of)) goto L_8b0dfb;
L_8b0a8f: /* 8b0a8f: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 8b0a92: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8b0a95: mov eax, dword ptr [edx + ecx*4 + 4] */
  eax = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 8b0a99: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0a9b: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 8b0a9e: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8b0aa1: je 0x8b0c74 */
  if (zf) goto L_8b0c74;
L_8b0aa7: /* 8b0aa7: xor eax, eax */
  eax = 0;
/* 8b0aa9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b0aac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b0ab0: /* 8b0ab0: movzx ecx, word ptr [ebx + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x10u)));
/* 8b0ab4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0ab6: jge 0x8b0df0 */
  if ((sf == of)) goto L_8b0df0;
L_8b0abc: /* 8b0abc: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0abe: je 0x8b0ae9 */
  if (zf) goto L_8b0ae9;
L_8b0ac0: /* 8b0ac0: movzx edx, word ptr [ebx + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0ac4: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0aca: lea eax, [edx + eax + 1] */
  eax = (uint32_t)(edx + eax + 0x1u);
/* 8b0ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0acf: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0ad2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0ad8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0ad8: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0adb: movzx edx, word ptr [ebx + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0adf: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0ae2: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8b0ae5: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b0ae7: jmp 0x8b0b10 */
  goto L_8b0b10;
L_8b0ae9: /* 8b0ae9: movzx ecx, word ptr [ebx + 0x12] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0aed: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0aef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0af0: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0af6: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0af9: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0affu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0aff: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0b02: movzx eax, word ptr [ebx + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0b06: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0b09: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8b0b0c: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
L_8b0b10: /* 8b0b10: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0b16: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0b19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0b1a: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0b20u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0b20: movzx edi, word ptr [eax] */
  edi = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0b23: movzx eax, word ptr [ebx + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0b27: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0b2a: lea edx, [eax + ecx + 2] */
  edx = (uint32_t)(eax + ecx + 0x2u);
/* 8b0b2e: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0b34: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0b37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0b38: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8b0b3b: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0b41u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0b41: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0b44: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8b0b47: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0b49: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8b0b4c: je 0x8b0c68 */
  if (zf) goto L_8b0c68;
L_8b0b52: /* 8b0b52: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0b54: je 0x8b0c68 */
  if (zf) goto L_8b0c68;
L_8b0b5a: /* 8b0b5a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0b5c: je 0x8b0c68 */
  if (zf) goto L_8b0c68;
L_8b0b62: /* 8b0b62: lea eax, [esi + 0x130] */
  eax = (uint32_t)(esi + 0x130u);
/* 8b0b68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0b6a: je 0x8b0b74 */
  if (zf) goto L_8b0b74;
L_8b0b6c: /* 8b0b6c: lea edi, [esi + 0x13c] */
  edi = (uint32_t)(esi + 0x13cu);
/* 8b0b72: jmp 0x8b0b76 */
  goto L_8b0b76;
L_8b0b74: /* 8b0b74: xor edi, edi */
  edi = 0;
L_8b0b76: /* 8b0b76: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8b0b7b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0b7d: mov ecx, edi */
  ecx = edi;
/* 8b0b7f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b0b85u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b0b85: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 8b0b8b: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b0b8d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8b0b90: je 0x8b0bd4 */
  if (zf) goto L_8b0bd4;
L_8b0b92: /* 8b0b92: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
/* 8b0b99: mov edi, eax */
  edi = eax;
/* 8b0b9b: jmp 0x8b0ba0 */
  goto L_8b0ba0;
L_8b0ba0: /* 8b0ba0: dec dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8b0ba3: js 0x8b0bb6 */
  if (sf) goto L_8b0bb6;
L_8b0ba5: /* 8b0ba5: mov ecx, edi */
  ecx = edi;
/* 8b0ba7: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x8b0badu); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 8b0bad: mov eax, 0xc */
  eax = 0xcu;
/* 8b0bb2: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0bb4: jmp 0x8b0ba0 */
  goto L_8b0ba0;
L_8b0bb6: /* 8b0bb6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b0bb9: mov edx, 3 */
  edx = 0x3u;
/* 8b0bbe: mov ecx, 4 */
  ecx = 0x4u;
/* 8b0bc3: add eax, 0xe4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_8b0bc8: /* 8b0bc8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8b0bc9: js 0x8b0bcf */
  if (sf) goto L_8b0bcf;
L_8b0bcb: /* 8b0bcb: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b0bcd: jmp 0x8b0bc8 */
  goto L_8b0bc8;
L_8b0bcf: /* 8b0bcf: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b0bd2: jmp 0x8b0bd6 */
  goto L_8b0bd6;
L_8b0bd4: /* 8b0bd4: xor edx, edx */
  edx = 0;
L_8b0bd6: /* 8b0bd6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b0bd8: xor eax, eax */
  eax = 0;
/* 8b0bda: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8b0bdd: mov dword ptr [edx + 0xfc], ecx */
  W32((uint32_t)(edx + 0xfcu), ecx);
/* 8b0be3: mov dword ptr [edx + 0xf4], eax */
  W32((uint32_t)(edx + 0xf4u), eax);
/* 8b0be9: mov dword ptr [edx + 0xf8], 1 */
  W32((uint32_t)(edx + 0xf8u), 0x1u);
L_8b0bf3: /* 8b0bf3: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0bf6: jge 0x8b0c68 */
  if ((sf == of)) goto L_8b0c68;
L_8b0bf8: /* 8b0bf8: mov ecx, dword ptr [ebp + eax*4 - 0x40] */
  ecx = R32((uint32_t)(ebp + eax*4 + 0xffffffc0u));
/* 8b0bfc: mov edi, dword ptr [esi + 0x15c] */
  edi = R32((uint32_t)(esi + 0x15cu));
/* 8b0c02: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 8b0c05: mov edi, dword ptr [edi + 0x38] */
  edi = R32((uint32_t)(edi + 0x38u));
/* 8b0c08: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0c0a: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* 8b0c0d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 8b0c10: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8b0c12: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8b0c14: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8b0c17: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8b0c1a: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8b0c1d: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8b0c20: mov ebx, dword ptr [esi + 0x15c] */
  ebx = R32((uint32_t)(esi + 0x15cu));
/* 8b0c26: mov ebx, dword ptr [ebx + 0x38] */
  ebx = R32((uint32_t)(ebx + 0x38u));
/* 8b0c29: mov ebx, dword ptr [ebx + ecx + 0x1c] */
  ebx = R32((uint32_t)(ebx + ecx + 0x1cu));
/* 8b0c2d: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b0c30: mov edi, eax */
  edi = eax;
/* 8b0c32: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8b0c35: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0c37: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 8b0c3a: mov ebx, dword ptr [esi + 0x15c] */
  ebx = R32((uint32_t)(esi + 0x15cu));
/* 8b0c40: mov ebx, dword ptr [ebx + 0x38] */
  ebx = R32((uint32_t)(ebx + 0x38u));
/* 8b0c43: mov ecx, dword ptr [ebx + ecx + 0x20] */
  ecx = R32((uint32_t)(ebx + ecx + 0x20u));
/* 8b0c47: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b0c4a: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 8b0c4d: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8b0c4f: mov byte ptr [ebp - 0x18], cl */
  W8((uint32_t)(ebp + 0xffffffe8u), (ecx & 0xffu));
/* 8b0c52: mov byte ptr [ebp - 0x17], cl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ecx & 0xffu));
/* 8b0c55: mov byte ptr [ebp - 0x16], cl */
  W8((uint32_t)(ebp + 0xffffffeau), (ecx & 0xffu));
/* 8b0c58: mov byte ptr [ebp - 0x15], cl */
  W8((uint32_t)(ebp + 0xffffffebu), (ecx & 0xffu));
/* 8b0c5b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b0c5e: mov dword ptr [edx + eax*4 + 0xe4], ecx */
  W32((uint32_t)(edx + eax*4 + 0xe4u), ecx);
/* 8b0c65: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b0c66: jmp 0x8b0bf3 */
  goto L_8b0bf3;
L_8b0c68: /* 8b0c68: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0c6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b0c6c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b0c6f: jmp 0x8b0ab0 */
  goto L_8b0ab0;
L_8b0c74: /* 8b0c74: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_8b0c77: /* 8b0c77: movzx edx, word ptr [ebx + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 8b0c7b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0c7e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0c80: jge 0x8b0df0 */
  if ((sf == of)) goto L_8b0df0;
L_8b0c86: /* 8b0c86: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0c8c: mov edi, eax */
  edi = eax;
/* 8b0c8e: movzx eax, word ptr [ebx + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0c92: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 8b0c95: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b0c97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0c98: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0c9b: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0ca1u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0ca1: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0ca4: movzx edx, word ptr [ebx + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0ca8: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 8b0cab: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0cb1: lea eax, [edx + edi + 1] */
  eax = (uint32_t)(edx + edi + 0x1u);
/* 8b0cb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0cb6: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0cb9: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0cbfu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0cbf: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0cc2: movzx edx, word ptr [ebx + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0cc6: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 8b0cc9: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0ccf: lea eax, [edx + edi + 2] */
  eax = (uint32_t)(edx + edi + 0x2u);
/* 8b0cd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0cd4: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0cd7: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0cddu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0cdd: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0ce0: lea edx, [esi + 0x130] */
  edx = (uint32_t)(esi + 0x130u);
/* 8b0ce6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0ce8: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8b0ceb: je 0x8b0cf5 */
  if (zf) goto L_8b0cf5;
L_8b0ced: /* 8b0ced: lea edi, [esi + 0x13c] */
  edi = (uint32_t)(esi + 0x13cu);
/* 8b0cf3: jmp 0x8b0cf7 */
  goto L_8b0cf7;
L_8b0cf5: /* 8b0cf5: xor edi, edi */
  edi = 0;
L_8b0cf7: /* 8b0cf7: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8b0cfc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0cfe: mov ecx, edi */
  ecx = edi;
/* 8b0d00: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b0d06u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b0d06: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 8b0d0c: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b0d0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8b0d11: je 0x8b0d54 */
  if (zf) goto L_8b0d54;
L_8b0d13: /* 8b0d13: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
/* 8b0d1a: mov edi, eax */
  edi = eax;
/* 8b0d1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b0d20: /* 8b0d20: dec dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8b0d23: js 0x8b0d36 */
  if (sf) goto L_8b0d36;
L_8b0d25: /* 8b0d25: mov ecx, edi */
  ecx = edi;
/* 8b0d27: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x8b0d2du); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 8b0d2d: mov eax, 0xc */
  eax = 0xcu;
/* 8b0d32: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0d34: jmp 0x8b0d20 */
  goto L_8b0d20;
L_8b0d36: /* 8b0d36: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b0d39: mov edx, 3 */
  edx = 0x3u;
/* 8b0d3e: mov ecx, 4 */
  ecx = 0x4u;
/* 8b0d43: add eax, 0xe4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_8b0d48: /* 8b0d48: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8b0d49: js 0x8b0d4f */
  if (sf) goto L_8b0d4f;
L_8b0d4b: /* 8b0d4b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b0d4d: jmp 0x8b0d48 */
  goto L_8b0d48;
L_8b0d4f: /* 8b0d4f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b0d52: jmp 0x8b0d56 */
  goto L_8b0d56;
L_8b0d54: /* 8b0d54: xor edx, edx */
  edx = 0;
L_8b0d56: /* 8b0d56: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8b0d58: mov dword ptr [edx + 0xfc], eax */
  W32((uint32_t)(edx + 0xfcu), eax);
/* 8b0d5e: xor eax, eax */
  eax = 0;
/* 8b0d60: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8b0d63: mov dword ptr [edx + 0xf4], eax */
  W32((uint32_t)(edx + 0xf4u), eax);
/* 8b0d69: mov dword ptr [edx + 0xf8], 1 */
  W32((uint32_t)(edx + 0xf8u), 0x1u);
L_8b0d73: /* 8b0d73: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0d76: jge 0x8b0de8 */
  if ((sf == of)) goto L_8b0de8;
L_8b0d78: /* 8b0d78: mov ecx, dword ptr [ebp + eax*4 - 0x4c] */
  ecx = R32((uint32_t)(ebp + eax*4 + 0xffffffb4u));
/* 8b0d7c: mov edi, dword ptr [esi + 0x15c] */
  edi = R32((uint32_t)(esi + 0x15cu));
/* 8b0d82: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 8b0d85: mov edi, dword ptr [edi + 0x38] */
  edi = R32((uint32_t)(edi + 0x38u));
/* 8b0d88: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0d8a: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* 8b0d8d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 8b0d90: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8b0d92: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8b0d94: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8b0d97: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8b0d9a: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8b0d9d: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8b0da0: mov ebx, dword ptr [esi + 0x15c] */
  ebx = R32((uint32_t)(esi + 0x15cu));
/* 8b0da6: mov ebx, dword ptr [ebx + 0x38] */
  ebx = R32((uint32_t)(ebx + 0x38u));
/* 8b0da9: mov ebx, dword ptr [ebx + ecx + 0x1c] */
  ebx = R32((uint32_t)(ebx + ecx + 0x1cu));
/* 8b0dad: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b0db0: mov edi, eax */
  edi = eax;
/* 8b0db2: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8b0db5: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0db7: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 8b0dba: mov ebx, dword ptr [esi + 0x15c] */
  ebx = R32((uint32_t)(esi + 0x15cu));
/* 8b0dc0: mov ebx, dword ptr [ebx + 0x38] */
  ebx = R32((uint32_t)(ebx + 0x38u));
/* 8b0dc3: mov ecx, dword ptr [ebx + ecx + 0x20] */
  ecx = R32((uint32_t)(ebx + ecx + 0x20u));
/* 8b0dc7: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b0dca: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 8b0dcd: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8b0dcf: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 8b0dd2: mov byte ptr [ebp - 0x1b], cl */
  W8((uint32_t)(ebp + 0xffffffe5u), (ecx & 0xffu));
/* 8b0dd5: mov byte ptr [ebp - 0x1a], cl */
  W8((uint32_t)(ebp + 0xffffffe6u), (ecx & 0xffu));
/* 8b0dd8: mov byte ptr [ebp - 0x19], cl */
  W8((uint32_t)(ebp + 0xffffffe7u), (ecx & 0xffu));
/* 8b0ddb: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b0dde: mov dword ptr [edx + eax*4 + 0xe4], ecx */
  W32((uint32_t)(edx + eax*4 + 0xe4u), ecx);
/* 8b0de5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b0de6: jmp 0x8b0d73 */
  goto L_8b0d73;
L_8b0de8: /* 8b0de8: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8b0deb: jmp 0x8b0c77 */
  goto L_8b0c77;
L_8b0df0: /* 8b0df0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8b0df3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b0df4: xor edi, edi */
  edi = 0;
/* 8b0df6: jmp 0x8b0a83 */
  goto L_8b0a83;
L_8b0dfb: /* 8b0dfb: mov eax, dword ptr [esi + 0x148] */
  eax = R32((uint32_t)(esi + 0x148u));
/* 8b0e01: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0e04: mov dword ptr [esi + 0x15c], edi */
  W32((uint32_t)(esi + 0x15cu), edi);
/* 8b0e0a: mov dword ptr [esi + 0x160], edi */
  W32((uint32_t)(esi + 0x160u), edi);
/* 8b0e10: mov dword ptr [esi + 0x164], edi */
  W32((uint32_t)(esi + 0x164u), edi);
/* 8b0e16: jg 0x8b0eaf */
  if ((!zf && sf == of)) goto L_8b0eaf;
L_8b0e1c: /* 8b0e1c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0e1f: je 0x8b0eaf */
  if (zf) goto L_8b0eaf;
L_8b0e25: /* 8b0e25: cmp dword ptr [esi + 0x140], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x140u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0e2b: jne 0x8b0e3b */
  if (!zf) goto L_8b0e3b;
L_8b0e2d: /* 8b0e2d: mov edx, dword ptr [esi + 0x130] */
  edx = R32((uint32_t)(esi + 0x130u));
/* 8b0e33: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 8b0e39: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8b0e3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b0e3b: /* 8b0e3b: xor eax, eax */
  eax = 0;
/* 8b0e3d: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8b0e40: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 8b0e43: xor ebx, ebx */
  ebx = 0;
L_8b0e45: /* 8b0e45: cmp ebx, dword ptr [esi + 0x140] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0e4b: jge 0x8b0ead */
  if ((sf == of)) goto L_8b0ead;
L_8b0e4d: /* 8b0e4d: mov ecx, dword ptr [esi + 0x13c] */
  ecx = R32((uint32_t)(esi + 0x13cu));
/* 8b0e53: mov edi, ebx */
  edi = ebx;
/* 8b0e55: imul edi, edi, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x104u);
  edi = (uint32_t)r;
  }
/* 8b0e5b: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0e5d: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 8b0e63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0e65: je 0x8b0eaa */
  if (zf) goto L_8b0eaa;
L_8b0e67: /* 8b0e67: cmp ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0e6a: jne 0x8b0e77 */
  if (!zf) goto L_8b0e77;
L_8b0e6c: /* 8b0e6c: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b0e6f: cmp dword ptr [edi + 0x100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0e75: je 0x8b0e96 */
  if (zf) goto L_8b0e96;
L_8b0e77: /* 8b0e77: mov eax, dword ptr [edi + 0x100] */
  eax = R32((uint32_t)(edi + 0x100u));
/* 8b0e7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0e7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0e7f: call 0x6c6a91 */
  esp -= 4; W32(esp, 0x8b0e84u); SPILL(); f_6c6a91(); if (g_unwind) return; RELOAD();
/* 8b0e84: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 8b0e8a: mov edx, dword ptr [edi + 0x100] */
  edx = R32((uint32_t)(edi + 0x100u));
/* 8b0e90: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8b0e93: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
L_8b0e96: /* 8b0e96: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0e98: je 0x8b0eaa */
  if (zf) goto L_8b0eaa;
L_8b0e9a: /* 8b0e9a: mov dword ptr [edi + 0xfc], eax */
  W32((uint32_t)(edi + 0xfcu), eax);
/* 8b0ea0: mov dword ptr [edi + 0x100], 0 */
  W32((uint32_t)(edi + 0x100u), 0x0u);
L_8b0eaa: /* 8b0eaa: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b0eab: jmp 0x8b0e45 */
  goto L_8b0e45;
L_8b0ead: /* 8b0ead: xor edi, edi */
  edi = 0;
L_8b0eaf: /* 8b0eaf: cmp dword ptr [esi + 0x148], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x148u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0eb6: jge 0x8b0f60 */
  if ((sf == of)) goto L_8b0f60;
L_8b0ebc: /* 8b0ebc: cmp dword ptr [esi + 0x140], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x140u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0ec2: jne 0x8b0ed2 */
  if (!zf) goto L_8b0ed2;
L_8b0ec4: /* 8b0ec4: mov eax, dword ptr [esi + 0x130] */
  eax = R32((uint32_t)(esi + 0x130u));
/* 8b0eca: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 8b0ed0: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8b0ed2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b0ed2: /* 8b0ed2: xor eax, eax */
  eax = 0;
/* 8b0ed4: mov dword ptr [ebp - 0x2c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xffffffffu);
/* 8b0edb: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8b0ede: mov edi, edi */
  edi = edi;
L_8b0ee0: /* 8b0ee0: cmp edi, dword ptr [esi + 0x140] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0ee6: jge 0x8b0f60 */
  if ((sf == of)) goto L_8b0f60;
L_8b0ee8: /* 8b0ee8: mov edx, dword ptr [esi + 0x13c] */
  edx = R32((uint32_t)(esi + 0x13cu));
/* 8b0eee: imul edi, edi, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x104u);
  edi = (uint32_t)r;
  }
/* 8b0ef4: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0ef6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0ef8: je 0x8b0f04 */
  if (zf) goto L_8b0f04;
L_8b0efa: /* 8b0efa: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 8b0f00: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0f02: je 0x8b0f42 */
  if (zf) goto L_8b0f42;
L_8b0f04: /* 8b0f04: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 8b0f0a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b0f0c: lea ebx, [esi + 0xf8] */
  ebx = (uint32_t)(esi + 0xf8u);
/* 8b0f12: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0f14: mov ecx, ebx */
  ecx = ebx;
/* 8b0f16: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8b0f19: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b0f1fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b0f1f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b0f21: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b0f24: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8b0f27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0f29: je 0x8b0f40 */
  if (zf) goto L_8b0f40;
L_8b0f2b: /* 8b0f2b: mov edx, dword ptr [edi + 0xfc] */
  edx = R32((uint32_t)(edi + 0xfcu));
/* 8b0f31: mov ecx, 1 */
  ecx = 0x1u;
/* 8b0f36: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8b0f38: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8b0f3b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8b0f3e: jmp 0x8b0f42 */
  goto L_8b0f42;
L_8b0f40: /* 8b0f40: xor eax, eax */
  eax = 0;
L_8b0f42: /* 8b0f42: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8b0f45: mov dword ptr [edi + 0xf0], ecx */
  W32((uint32_t)(edi + 0xf0u), ecx);
/* 8b0f4b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b0f4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8b0f4f: mov dword ptr [edi + 0xfc], 0 */
  W32((uint32_t)(edi + 0xfcu), 0x0u);
/* 8b0f59: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8b0f5c: mov edi, ecx */
  edi = ecx;
/* 8b0f5e: jmp 0x8b0ee0 */
  goto L_8b0ee0;
L_8b0f60: /* 8b0f60: cmp dword ptr [esi + 0x148], 0x14 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x148u))); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0f67: jge 0x8b0f74 */
  if ((sf == of)) goto L_8b0f74;
L_8b0f69: /* 8b0f69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0f6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0f6d: mov ecx, esi */
  ecx = esi;
/* 8b0f6f: call 0x6cc590 */
  esp -= 4; W32(esp, 0x8b0f74u); SPILL(); f_6cc590(); if (g_unwind) return; RELOAD();
L_8b0f74: /* 8b0f74: mov eax, dword ptr [esi + 0x158] */
  eax = R32((uint32_t)(esi + 0x158u));
/* 8b0f7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0f7c: jne 0x8b0f88 */
  if (!zf) goto L_8b0f88;
L_8b0f7e: /* 8b0f7e: mov dword ptr [esi + 0x158], 0 */
  W32((uint32_t)(esi + 0x158u), 0x0u);
L_8b0f88: /* 8b0f88: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b0f8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b0f8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b0f8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b0f94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b0f95: mov esp, ebp */
  esp = ebp;
/* 8b0f97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b0f98: ret  */
  esp += 4; SPILL(); return;
}

void f_8b0b9d(void) {
  LOAD_REGS();
  goto L_8b0b9d;
L_8b0a83: /* 8b0a83: cmp eax, dword ptr [esi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0a86: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8b0a89: jge 0x8b0dfb */
  if ((sf == of)) goto L_8b0dfb;
L_8b0a8f: /* 8b0a8f: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 8b0a92: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8b0a95: mov eax, dword ptr [edx + ecx*4 + 4] */
  eax = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 8b0a99: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0a9b: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 8b0a9e: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8b0aa1: je 0x8b0c74 */
  if (zf) goto L_8b0c74;
L_8b0aa7: /* 8b0aa7: xor eax, eax */
  eax = 0;
/* 8b0aa9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b0aac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b0ab0: /* 8b0ab0: movzx ecx, word ptr [ebx + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x10u)));
/* 8b0ab4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0ab6: jge 0x8b0df0 */
  if ((sf == of)) goto L_8b0df0;
L_8b0abc: /* 8b0abc: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0abe: je 0x8b0ae9 */
  if (zf) goto L_8b0ae9;
L_8b0ac0: /* 8b0ac0: movzx edx, word ptr [ebx + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0ac4: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0aca: lea eax, [edx + eax + 1] */
  eax = (uint32_t)(edx + eax + 0x1u);
/* 8b0ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0acf: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0ad2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0ad8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0ad8: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0adb: movzx edx, word ptr [ebx + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0adf: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0ae2: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8b0ae5: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b0ae7: jmp 0x8b0b10 */
  goto L_8b0b10;
L_8b0ae9: /* 8b0ae9: movzx ecx, word ptr [ebx + 0x12] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0aed: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0aef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0af0: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0af6: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0af9: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0affu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0aff: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0b02: movzx eax, word ptr [ebx + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0b06: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0b09: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8b0b0c: lea edx, [eax + ecx + 1] */
  edx = (uint32_t)(eax + ecx + 0x1u);
L_8b0b10: /* 8b0b10: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0b16: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0b19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0b1a: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0b20u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0b20: movzx edi, word ptr [eax] */
  edi = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0b23: movzx eax, word ptr [ebx + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0b27: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0b2a: lea edx, [eax + ecx + 2] */
  edx = (uint32_t)(eax + ecx + 0x2u);
/* 8b0b2e: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0b34: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0b37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b0b38: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8b0b3b: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0b41u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0b41: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0b44: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8b0b47: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0b49: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8b0b4c: je 0x8b0c68 */
  if (zf) goto L_8b0c68;
L_8b0b52: /* 8b0b52: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0b54: je 0x8b0c68 */
  if (zf) goto L_8b0c68;
L_8b0b5a: /* 8b0b5a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0b5c: je 0x8b0c68 */
  if (zf) goto L_8b0c68;
L_8b0b62: /* 8b0b62: lea eax, [esi + 0x130] */
  eax = (uint32_t)(esi + 0x130u);
/* 8b0b68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0b6a: je 0x8b0b74 */
  if (zf) goto L_8b0b74;
L_8b0b6c: /* 8b0b6c: lea edi, [esi + 0x13c] */
  edi = (uint32_t)(esi + 0x13cu);
/* 8b0b72: jmp 0x8b0b76 */
  goto L_8b0b76;
L_8b0b74: /* 8b0b74: xor edi, edi */
  edi = 0;
L_8b0b76: /* 8b0b76: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8b0b7b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0b7d: mov ecx, edi */
  ecx = edi;
/* 8b0b7f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b0b85u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b0b85: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 8b0b8b: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b0b8d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8b0b90: je 0x8b0bd4 */
  if (zf) goto L_8b0bd4;
L_8b0b92: /* 8b0b92: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
/* 8b0b99: mov edi, eax */
  edi = eax;
/* 8b0b9b: jmp 0x8b0ba0 */
  goto L_8b0ba0;
L_8b0b9d: /* 8b0b9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b0ba0: /* 8b0ba0: dec dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8b0ba3: js 0x8b0bb6 */
  if (sf) goto L_8b0bb6;
L_8b0ba5: /* 8b0ba5: mov ecx, edi */
  ecx = edi;
/* 8b0ba7: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x8b0badu); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 8b0bad: mov eax, 0xc */
  eax = 0xcu;
/* 8b0bb2: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0bb4: jmp 0x8b0ba0 */
  goto L_8b0ba0;
L_8b0bb6: /* 8b0bb6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b0bb9: mov edx, 3 */
  edx = 0x3u;
/* 8b0bbe: mov ecx, 4 */
  ecx = 0x4u;
/* 8b0bc3: add eax, 0xe4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_8b0bc8: /* 8b0bc8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8b0bc9: js 0x8b0bcf */
  if (sf) goto L_8b0bcf;
L_8b0bcb: /* 8b0bcb: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b0bcd: jmp 0x8b0bc8 */
  goto L_8b0bc8;
L_8b0bcf: /* 8b0bcf: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b0bd2: jmp 0x8b0bd6 */
  goto L_8b0bd6;
L_8b0bd4: /* 8b0bd4: xor edx, edx */
  edx = 0;
L_8b0bd6: /* 8b0bd6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b0bd8: xor eax, eax */
  eax = 0;
/* 8b0bda: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8b0bdd: mov dword ptr [edx + 0xfc], ecx */
  W32((uint32_t)(edx + 0xfcu), ecx);
/* 8b0be3: mov dword ptr [edx + 0xf4], eax */
  W32((uint32_t)(edx + 0xf4u), eax);
/* 8b0be9: mov dword ptr [edx + 0xf8], 1 */
  W32((uint32_t)(edx + 0xf8u), 0x1u);
L_8b0bf3: /* 8b0bf3: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0bf6: jge 0x8b0c68 */
  if ((sf == of)) goto L_8b0c68;
L_8b0bf8: /* 8b0bf8: mov ecx, dword ptr [ebp + eax*4 - 0x40] */
  ecx = R32((uint32_t)(ebp + eax*4 + 0xffffffc0u));
/* 8b0bfc: mov edi, dword ptr [esi + 0x15c] */
  edi = R32((uint32_t)(esi + 0x15cu));
/* 8b0c02: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 8b0c05: mov edi, dword ptr [edi + 0x38] */
  edi = R32((uint32_t)(edi + 0x38u));
/* 8b0c08: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0c0a: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* 8b0c0d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 8b0c10: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8b0c12: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8b0c14: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8b0c17: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8b0c1a: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8b0c1d: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8b0c20: mov ebx, dword ptr [esi + 0x15c] */
  ebx = R32((uint32_t)(esi + 0x15cu));
/* 8b0c26: mov ebx, dword ptr [ebx + 0x38] */
  ebx = R32((uint32_t)(ebx + 0x38u));
/* 8b0c29: mov ebx, dword ptr [ebx + ecx + 0x1c] */
  ebx = R32((uint32_t)(ebx + ecx + 0x1cu));
/* 8b0c2d: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b0c30: mov edi, eax */
  edi = eax;
/* 8b0c32: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8b0c35: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0c37: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 8b0c3a: mov ebx, dword ptr [esi + 0x15c] */
  ebx = R32((uint32_t)(esi + 0x15cu));
/* 8b0c40: mov ebx, dword ptr [ebx + 0x38] */
  ebx = R32((uint32_t)(ebx + 0x38u));
/* 8b0c43: mov ecx, dword ptr [ebx + ecx + 0x20] */
  ecx = R32((uint32_t)(ebx + ecx + 0x20u));
/* 8b0c47: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b0c4a: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 8b0c4d: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8b0c4f: mov byte ptr [ebp - 0x18], cl */
  W8((uint32_t)(ebp + 0xffffffe8u), (ecx & 0xffu));
/* 8b0c52: mov byte ptr [ebp - 0x17], cl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ecx & 0xffu));
/* 8b0c55: mov byte ptr [ebp - 0x16], cl */
  W8((uint32_t)(ebp + 0xffffffeau), (ecx & 0xffu));
/* 8b0c58: mov byte ptr [ebp - 0x15], cl */
  W8((uint32_t)(ebp + 0xffffffebu), (ecx & 0xffu));
/* 8b0c5b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b0c5e: mov dword ptr [edx + eax*4 + 0xe4], ecx */
  W32((uint32_t)(edx + eax*4 + 0xe4u), ecx);
/* 8b0c65: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b0c66: jmp 0x8b0bf3 */
  goto L_8b0bf3;
L_8b0c68: /* 8b0c68: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0c6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b0c6c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b0c6f: jmp 0x8b0ab0 */
  goto L_8b0ab0;
L_8b0c74: /* 8b0c74: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_8b0c77: /* 8b0c77: movzx edx, word ptr [ebx + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 8b0c7b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b0c7e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0c80: jge 0x8b0df0 */
  if ((sf == of)) goto L_8b0df0;
L_8b0c86: /* 8b0c86: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0c8c: mov edi, eax */
  edi = eax;
/* 8b0c8e: movzx eax, word ptr [ebx + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0c92: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 8b0c95: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b0c97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0c98: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0c9b: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0ca1u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0ca1: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0ca4: movzx edx, word ptr [ebx + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0ca8: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 8b0cab: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0cb1: lea eax, [edx + edi + 1] */
  eax = (uint32_t)(edx + edi + 0x1u);
/* 8b0cb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0cb6: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0cb9: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0cbfu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0cbf: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0cc2: movzx edx, word ptr [ebx + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8b0cc6: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 8b0cc9: mov ecx, dword ptr [esi + 0x160] */
  ecx = R32((uint32_t)(esi + 0x160u));
/* 8b0ccf: lea eax, [edx + edi + 2] */
  eax = (uint32_t)(edx + edi + 0x2u);
/* 8b0cd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0cd4: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b0cd7: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b0cddu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b0cdd: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8b0ce0: lea edx, [esi + 0x130] */
  edx = (uint32_t)(esi + 0x130u);
/* 8b0ce6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0ce8: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8b0ceb: je 0x8b0cf5 */
  if (zf) goto L_8b0cf5;
L_8b0ced: /* 8b0ced: lea edi, [esi + 0x13c] */
  edi = (uint32_t)(esi + 0x13cu);
/* 8b0cf3: jmp 0x8b0cf7 */
  goto L_8b0cf7;
L_8b0cf5: /* 8b0cf5: xor edi, edi */
  edi = 0;
L_8b0cf7: /* 8b0cf7: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8b0cfc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0cfe: mov ecx, edi */
  ecx = edi;
/* 8b0d00: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b0d06u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b0d06: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 8b0d0c: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b0d0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8b0d11: je 0x8b0d54 */
  if (zf) goto L_8b0d54;
L_8b0d13: /* 8b0d13: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
/* 8b0d1a: mov edi, eax */
  edi = eax;
/* 8b0d1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b0d20: /* 8b0d20: dec dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8b0d23: js 0x8b0d36 */
  if (sf) goto L_8b0d36;
L_8b0d25: /* 8b0d25: mov ecx, edi */
  ecx = edi;
/* 8b0d27: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x8b0d2du); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 8b0d2d: mov eax, 0xc */
  eax = 0xcu;
/* 8b0d32: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0d34: jmp 0x8b0d20 */
  goto L_8b0d20;
L_8b0d36: /* 8b0d36: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b0d39: mov edx, 3 */
  edx = 0x3u;
/* 8b0d3e: mov ecx, 4 */
  ecx = 0x4u;
/* 8b0d43: add eax, 0xe4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_8b0d48: /* 8b0d48: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8b0d49: js 0x8b0d4f */
  if (sf) goto L_8b0d4f;
L_8b0d4b: /* 8b0d4b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b0d4d: jmp 0x8b0d48 */
  goto L_8b0d48;
L_8b0d4f: /* 8b0d4f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b0d52: jmp 0x8b0d56 */
  goto L_8b0d56;
L_8b0d54: /* 8b0d54: xor edx, edx */
  edx = 0;
L_8b0d56: /* 8b0d56: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8b0d58: mov dword ptr [edx + 0xfc], eax */
  W32((uint32_t)(edx + 0xfcu), eax);
/* 8b0d5e: xor eax, eax */
  eax = 0;
/* 8b0d60: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8b0d63: mov dword ptr [edx + 0xf4], eax */
  W32((uint32_t)(edx + 0xf4u), eax);
/* 8b0d69: mov dword ptr [edx + 0xf8], 1 */
  W32((uint32_t)(edx + 0xf8u), 0x1u);
L_8b0d73: /* 8b0d73: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0d76: jge 0x8b0de8 */
  if ((sf == of)) goto L_8b0de8;
L_8b0d78: /* 8b0d78: mov ecx, dword ptr [ebp + eax*4 - 0x4c] */
  ecx = R32((uint32_t)(ebp + eax*4 + 0xffffffb4u));
/* 8b0d7c: mov edi, dword ptr [esi + 0x15c] */
  edi = R32((uint32_t)(esi + 0x15cu));
/* 8b0d82: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 8b0d85: mov edi, dword ptr [edi + 0x38] */
  edi = R32((uint32_t)(edi + 0x38u));
/* 8b0d88: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0d8a: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* 8b0d8d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 8b0d90: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8b0d92: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8b0d94: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8b0d97: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8b0d9a: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8b0d9d: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8b0da0: mov ebx, dword ptr [esi + 0x15c] */
  ebx = R32((uint32_t)(esi + 0x15cu));
/* 8b0da6: mov ebx, dword ptr [ebx + 0x38] */
  ebx = R32((uint32_t)(ebx + 0x38u));
/* 8b0da9: mov ebx, dword ptr [ebx + ecx + 0x1c] */
  ebx = R32((uint32_t)(ebx + ecx + 0x1cu));
/* 8b0dad: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b0db0: mov edi, eax */
  edi = eax;
/* 8b0db2: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8b0db5: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0db7: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 8b0dba: mov ebx, dword ptr [esi + 0x15c] */
  ebx = R32((uint32_t)(esi + 0x15cu));
/* 8b0dc0: mov ebx, dword ptr [ebx + 0x38] */
  ebx = R32((uint32_t)(ebx + 0x38u));
/* 8b0dc3: mov ecx, dword ptr [ebx + ecx + 0x20] */
  ecx = R32((uint32_t)(ebx + ecx + 0x20u));
/* 8b0dc7: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b0dca: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 8b0dcd: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8b0dcf: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 8b0dd2: mov byte ptr [ebp - 0x1b], cl */
  W8((uint32_t)(ebp + 0xffffffe5u), (ecx & 0xffu));
/* 8b0dd5: mov byte ptr [ebp - 0x1a], cl */
  W8((uint32_t)(ebp + 0xffffffe6u), (ecx & 0xffu));
/* 8b0dd8: mov byte ptr [ebp - 0x19], cl */
  W8((uint32_t)(ebp + 0xffffffe7u), (ecx & 0xffu));
/* 8b0ddb: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b0dde: mov dword ptr [edx + eax*4 + 0xe4], ecx */
  W32((uint32_t)(edx + eax*4 + 0xe4u), ecx);
/* 8b0de5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b0de6: jmp 0x8b0d73 */
  goto L_8b0d73;
L_8b0de8: /* 8b0de8: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8b0deb: jmp 0x8b0c77 */
  goto L_8b0c77;
L_8b0df0: /* 8b0df0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8b0df3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b0df4: xor edi, edi */
  edi = 0;
/* 8b0df6: jmp 0x8b0a83 */
  goto L_8b0a83;
L_8b0dfb: /* 8b0dfb: mov eax, dword ptr [esi + 0x148] */
  eax = R32((uint32_t)(esi + 0x148u));
/* 8b0e01: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0e04: mov dword ptr [esi + 0x15c], edi */
  W32((uint32_t)(esi + 0x15cu), edi);
/* 8b0e0a: mov dword ptr [esi + 0x160], edi */
  W32((uint32_t)(esi + 0x160u), edi);
/* 8b0e10: mov dword ptr [esi + 0x164], edi */
  W32((uint32_t)(esi + 0x164u), edi);
/* 8b0e16: jg 0x8b0eaf */
  if ((!zf && sf == of)) goto L_8b0eaf;
L_8b0e1c: /* 8b0e1c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0e1f: je 0x8b0eaf */
  if (zf) goto L_8b0eaf;
L_8b0e25: /* 8b0e25: cmp dword ptr [esi + 0x140], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x140u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0e2b: jne 0x8b0e3b */
  if (!zf) goto L_8b0e3b;
L_8b0e2d: /* 8b0e2d: mov edx, dword ptr [esi + 0x130] */
  edx = R32((uint32_t)(esi + 0x130u));
/* 8b0e33: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 8b0e39: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8b0e3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b0e3b: /* 8b0e3b: xor eax, eax */
  eax = 0;
/* 8b0e3d: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8b0e40: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 8b0e43: xor ebx, ebx */
  ebx = 0;
L_8b0e45: /* 8b0e45: cmp ebx, dword ptr [esi + 0x140] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0e4b: jge 0x8b0ead */
  if ((sf == of)) goto L_8b0ead;
L_8b0e4d: /* 8b0e4d: mov ecx, dword ptr [esi + 0x13c] */
  ecx = R32((uint32_t)(esi + 0x13cu));
/* 8b0e53: mov edi, ebx */
  edi = ebx;
/* 8b0e55: imul edi, edi, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x104u);
  edi = (uint32_t)r;
  }
/* 8b0e5b: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0e5d: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 8b0e63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0e65: je 0x8b0eaa */
  if (zf) goto L_8b0eaa;
L_8b0e67: /* 8b0e67: cmp ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0e6a: jne 0x8b0e77 */
  if (!zf) goto L_8b0e77;
L_8b0e6c: /* 8b0e6c: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b0e6f: cmp dword ptr [edi + 0x100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0e75: je 0x8b0e96 */
  if (zf) goto L_8b0e96;
L_8b0e77: /* 8b0e77: mov eax, dword ptr [edi + 0x100] */
  eax = R32((uint32_t)(edi + 0x100u));
/* 8b0e7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0e7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b0e7f: call 0x6c6a91 */
  esp -= 4; W32(esp, 0x8b0e84u); SPILL(); f_6c6a91(); if (g_unwind) return; RELOAD();
/* 8b0e84: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 8b0e8a: mov edx, dword ptr [edi + 0x100] */
  edx = R32((uint32_t)(edi + 0x100u));
/* 8b0e90: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8b0e93: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
L_8b0e96: /* 8b0e96: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0e98: je 0x8b0eaa */
  if (zf) goto L_8b0eaa;
L_8b0e9a: /* 8b0e9a: mov dword ptr [edi + 0xfc], eax */
  W32((uint32_t)(edi + 0xfcu), eax);
/* 8b0ea0: mov dword ptr [edi + 0x100], 0 */
  W32((uint32_t)(edi + 0x100u), 0x0u);
L_8b0eaa: /* 8b0eaa: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b0eab: jmp 0x8b0e45 */
  goto L_8b0e45;
L_8b0ead: /* 8b0ead: xor edi, edi */
  edi = 0;
L_8b0eaf: /* 8b0eaf: cmp dword ptr [esi + 0x148], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x148u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0eb6: jge 0x8b0f60 */
  if ((sf == of)) goto L_8b0f60;
L_8b0ebc: /* 8b0ebc: cmp dword ptr [esi + 0x140], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x140u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0ec2: jne 0x8b0ed2 */
  if (!zf) goto L_8b0ed2;
L_8b0ec4: /* 8b0ec4: mov eax, dword ptr [esi + 0x130] */
  eax = R32((uint32_t)(esi + 0x130u));
/* 8b0eca: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 8b0ed0: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8b0ed2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b0ed2: /* 8b0ed2: xor eax, eax */
  eax = 0;
/* 8b0ed4: mov dword ptr [ebp - 0x2c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xffffffffu);
/* 8b0edb: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8b0ede: mov edi, edi */
  edi = edi;
L_8b0ee0: /* 8b0ee0: cmp edi, dword ptr [esi + 0x140] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0ee6: jge 0x8b0f60 */
  if ((sf == of)) goto L_8b0f60;
L_8b0ee8: /* 8b0ee8: mov edx, dword ptr [esi + 0x13c] */
  edx = R32((uint32_t)(esi + 0x13cu));
/* 8b0eee: imul edi, edi, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x104u);
  edi = (uint32_t)r;
  }
/* 8b0ef4: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b0ef6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0ef8: je 0x8b0f04 */
  if (zf) goto L_8b0f04;
L_8b0efa: /* 8b0efa: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 8b0f00: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b0f02: je 0x8b0f42 */
  if (zf) goto L_8b0f42;
L_8b0f04: /* 8b0f04: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 8b0f0a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b0f0c: lea ebx, [esi + 0xf8] */
  ebx = (uint32_t)(esi + 0xf8u);
/* 8b0f12: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b0f14: mov ecx, ebx */
  ecx = ebx;
/* 8b0f16: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8b0f19: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b0f1fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b0f1f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b0f21: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b0f24: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8b0f27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0f29: je 0x8b0f40 */
  if (zf) goto L_8b0f40;
L_8b0f2b: /* 8b0f2b: mov edx, dword ptr [edi + 0xfc] */
  edx = R32((uint32_t)(edi + 0xfcu));
/* 8b0f31: mov ecx, 1 */
  ecx = 0x1u;
/* 8b0f36: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8b0f38: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8b0f3b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8b0f3e: jmp 0x8b0f42 */
  goto L_8b0f42;
L_8b0f40: /* 8b0f40: xor eax, eax */
  eax = 0;
L_8b0f42: /* 8b0f42: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8b0f45: mov dword ptr [edi + 0xf0], ecx */
  W32((uint32_t)(edi + 0xf0u), ecx);
/* 8b0f4b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b0f4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8b0f4f: mov dword ptr [edi + 0xfc], 0 */
  W32((uint32_t)(edi + 0xfcu), 0x0u);
/* 8b0f59: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8b0f5c: mov edi, ecx */
  edi = ecx;
/* 8b0f5e: jmp 0x8b0ee0 */
  goto L_8b0ee0;
L_8b0f60: /* 8b0f60: cmp dword ptr [esi + 0x148], 0x14 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x148u))); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b0f67: jge 0x8b0f74 */
  if ((sf == of)) goto L_8b0f74;
L_8b0f69: /* 8b0f69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0f6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0f6d: mov ecx, esi */
  ecx = esi;
/* 8b0f6f: call 0x6cc590 */
  esp -= 4; W32(esp, 0x8b0f74u); SPILL(); f_6cc590(); if (g_unwind) return; RELOAD();
L_8b0f74: /* 8b0f74: mov eax, dword ptr [esi + 0x158] */
  eax = R32((uint32_t)(esi + 0x158u));
/* 8b0f7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b0f7c: jne 0x8b0f88 */
  if (!zf) goto L_8b0f88;
L_8b0f7e: /* 8b0f7e: mov dword ptr [esi + 0x158], 0 */
  W32((uint32_t)(esi + 0x158u), 0x0u);
L_8b0f88: /* 8b0f88: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b0f8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b0f8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b0f8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b0f94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b0f95: mov esp, ebp */
  esp = ebp;
/* 8b0f97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b0f98: ret  */
  esp += 4; SPILL(); return;
}

void f_8b0f99(void) {
  LOAD_REGS();
L_8b0f99: /* 8b0f99: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8b0f9c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b0fa1: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8b0fa4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b0fa5: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8b0fa8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b0fadu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b0fad(); return;
}

void f_8b0fad(void) {
  LOAD_REGS();
L_8b0fad: /* 8b0fad: push 0xa1b890 */
  { uint32_t v = 0xa1b890u; esp -= 4; W32(esp, v); }
/* 8b0fb2: push 0xae9e9c */
  { uint32_t v = 0xae9e9cu; esp -= 4; W32(esp, v); }
/* 8b0fb7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b0fbdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b0fbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b0fc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0fc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b0fc4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b0fc9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b0fc9: guest_badaddr(0x8b0fc9); return;
}

void f_8b1140(void) {
  LOAD_REGS();
L_8b1140: /* 8b1140: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1141: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b1142: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8b1148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1149: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b114a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8b114e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b1150: mov esi, ecx */
  esi = ecx;
/* 8b1152: jge 0x8b1168 */
  if ((sf == of)) goto L_8b1168;
L_8b1154: /* 8b1154: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8b1159: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b115e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8b1163: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b1165u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1165: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1168: /* 8b1168: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b116b: jle 0x8b1181 */
  if ((zf || sf != of)) goto L_8b1181;
L_8b116d: /* 8b116d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b1172: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b1177: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b117c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b117eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b117e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1181: /* 8b1181: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8b1185: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8b1188: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8b118b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b118d: jle 0x8b11a3 */
  if ((zf || sf != of)) goto L_8b11a3;
L_8b118f: /* 8b118f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b1194: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b1199: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b119e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b11a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b11a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b11a3: /* 8b11a3: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 8b11a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b11a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b11a7: mov ecx, esi */
  ecx = esi;
/* 8b11a9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b11afu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b11af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b11b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b11b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b11b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b11b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b11e0(void) {
  LOAD_REGS();
L_8b11e0: /* 8b11e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b11e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b11e5: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 8b11e7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b11edu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b11ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b1200(void) {
  LOAD_REGS();
L_8b1200: /* 8b1200: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1201: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b1202: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8b1208: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1209: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b120a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8b120e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b1210: mov esi, ecx */
  esi = ecx;
/* 8b1212: jge 0x8b1228 */
  if ((sf == of)) goto L_8b1228;
L_8b1214: /* 8b1214: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8b1219: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b121e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8b1223: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b1225u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1225: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1228: /* 8b1228: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b122b: jle 0x8b1241 */
  if ((zf || sf != of)) goto L_8b1241;
L_8b122d: /* 8b122d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b1232: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b1237: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b123c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b123eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b123e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1241: /* 8b1241: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8b1245: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8b1248: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8b124b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b124d: jle 0x8b1263 */
  if ((zf || sf != of)) goto L_8b1263;
L_8b124f: /* 8b124f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b1254: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b1259: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b125e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b1260u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1260: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1263: /* 8b1263: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8b1265: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1266: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1267: mov ecx, esi */
  ecx = esi;
/* 8b1269: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b126fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b126f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b1270: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b1271: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b1272: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b1273: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b12a0(void) {
  LOAD_REGS();
L_8b12a0: /* 8b12a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b12a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b12a5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8b12a7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b12adu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b12ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b12c0(void) {
  LOAD_REGS();
L_8b12c0: /* 8b12c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b12c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b12c2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8b12c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b12c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b12ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8b12ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b12d0: mov esi, ecx */
  esi = ecx;
/* 8b12d2: jge 0x8b12e8 */
  if ((sf == of)) goto L_8b12e8;
L_8b12d4: /* 8b12d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8b12d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b12de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8b12e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b12e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b12e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b12e8: /* 8b12e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b12eb: jle 0x8b1301 */
  if ((zf || sf != of)) goto L_8b1301;
L_8b12ed: /* 8b12ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b12f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b12f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b12fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b12feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b12fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1301: /* 8b1301: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8b1305: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8b1308: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8b130b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b130d: jle 0x8b1323 */
  if ((zf || sf != of)) goto L_8b1323;
L_8b130f: /* 8b130f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b1314: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b1319: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b131e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b1320u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1320: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1323: /* 8b1323: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8b1325: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1326: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1327: mov ecx, esi */
  ecx = esi;
/* 8b1329: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b132fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b132f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b1330: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b1331: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b1332: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b1333: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b1360(void) {
  LOAD_REGS();
L_8b1360: /* 8b1360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b1364: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1365: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8b1367: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b136du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b136d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b1380(void) {
  LOAD_REGS();
L_8b1380: /* 8b1380: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1381: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b1382: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8b1388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1389: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b138a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8b138e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b1390: mov esi, ecx */
  esi = ecx;
/* 8b1392: jge 0x8b13a8 */
  if ((sf == of)) goto L_8b13a8;
L_8b1394: /* 8b1394: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8b1399: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b139e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8b13a3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b13a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b13a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b13a8: /* 8b13a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b13ab: jle 0x8b13c1 */
  if ((zf || sf != of)) goto L_8b13c1;
L_8b13ad: /* 8b13ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b13b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b13b7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b13bc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b13beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b13be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b13c1: /* 8b13c1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8b13c5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8b13c8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8b13cb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b13cd: jle 0x8b13e3 */
  if ((zf || sf != of)) goto L_8b13e3;
L_8b13cf: /* 8b13cf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b13d4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b13d9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b13de: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b13e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b13e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b13e3: /* 8b13e3: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b13e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b13e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b13e7: mov ecx, esi */
  ecx = esi;
/* 8b13e9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b13efu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b13ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b13f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b13f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b13f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b13f3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b1420(void) {
  LOAD_REGS();
L_8b1420: /* 8b1420: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b1424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1425: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b1427: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b142du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b142d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b1440(void) {
  LOAD_REGS();
L_8b1440: /* 8b1440: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8b1444: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8b1446: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8b144a: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 8b144c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b1452: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b1454: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b1457: je 0x8b145b */
  if (zf) goto L_8b145b;
L_8b1459: /* 8b1459: fchs  */
  ST0 = -ST0;
L_8b145b: /* 8b145b: fcomp dword ptr [0xa1b8c4] */
  fpu_com(ST0, F32((uint32_t)(0xa1b8c4u)));
  FPOP();
/* 8b1461: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b1463: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b1466: je 0x8b14ac */
  if (zf) goto L_8b14ac;
L_8b1468: /* 8b1468: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8b146b: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 8b146e: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b1474: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b1476: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b1479: je 0x8b147d */
  if (zf) goto L_8b147d;
L_8b147b: /* 8b147b: fchs  */
  ST0 = -ST0;
L_8b147d: /* 8b147d: fcomp dword ptr [0xa1b8c4] */
  fpu_com(ST0, F32((uint32_t)(0xa1b8c4u)));
  FPOP();
/* 8b1483: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b1485: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b1488: je 0x8b14ac */
  if (zf) goto L_8b14ac;
L_8b148a: /* 8b148a: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8b148d: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 8b1490: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b1496: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b1498: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b149b: je 0x8b149f */
  if (zf) goto L_8b149f;
L_8b149d: /* 8b149d: fchs  */
  ST0 = -ST0;
L_8b149f: /* 8b149f: fcomp dword ptr [0xa1b8c4] */
  fpu_com(ST0, F32((uint32_t)(0xa1b8c4u)));
  FPOP();
/* 8b14a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b14a7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b14aa: jne 0x8b14af */
  if (!zf) goto L_8b14af;
L_8b14ac: /* 8b14ac: xor eax, eax */
  eax = 0;
/* 8b14ae: ret  */
  esp += 4; SPILL(); return;
L_8b14af: /* 8b14af: mov eax, 1 */
  eax = 0x1u;
/* 8b14b4: ret  */
  esp += 4; SPILL(); return;
}

void f_8b14e0(void) {
  LOAD_REGS();
L_8b14e0: /* 8b14e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b14e1: mov ebp, esp */
  ebp = esp;
/* 8b14e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b14e5: push 0x9d6920 */
  { uint32_t v = 0x9d6920u; esp -= 4; W32(esp, v); }
/* 8b14ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b14f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b14f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b14f8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b14fb: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8b14fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b14ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1500: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b1503: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b1505: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8b1508: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b150b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b150c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b150f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b1512: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b1514: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b151b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8b151d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8b151f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b1522: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b1524: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b1526: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b1529: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8b152b: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 8b152e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b1531: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b1534: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b1537: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b153a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8b153c: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8b153f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b1541: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8b1544: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8b1546: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8b1549: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8b154b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8b154d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b154f: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 8b1552: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 8b1555: fcomp dword ptr [0xa1b8f4] */
  fpu_com(ST0, F32((uint32_t)(0xa1b8f4u)));
  FPOP();
/* 8b155b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b155d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b1560: jp 0x8b15a0 */
  if (pf) goto L_8b15a0;
L_8b1562: /* 8b1562: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b1565: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b1567: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8b156e: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8b1571: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8b1573: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8b157a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8b157d: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8b1584: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b1587: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8b158a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8b158d: xor eax, eax */
  eax = 0;
/* 8b158f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b1592: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b1599: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b159a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b159b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b159c: mov esp, ebp */
  esp = ebp;
/* 8b159e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b159f: ret  */
  esp += 4; SPILL(); return;
L_8b15a0: /* 8b15a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b15a3: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8b15a6: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8b15a9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b15ab: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8b15ae: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8b15b1: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8b15b4: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8b15b7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b15ba: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8b15bd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8b15c0: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b15c3: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8b15c6: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8b15c9: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8b15cc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b15cf: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8b15d1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b15d3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8b15d6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8b15d8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b15da: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8b15dd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b15e0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8b15e2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8b15e4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b15e7: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8b15ea: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b15ed: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8b15f0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8b15f2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8b15f5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b15f7: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8b15fa: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8b15fd: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8b1600: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b1603: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8b1606: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8b1609: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b160b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8b160d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b1610: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8b1612: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8b1615: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8b1617: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8b161a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b161c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8b161e: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8b1621: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b1624: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8b1627: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8b162a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8b162d: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 8b1630: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8b1632: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8b1635: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b1637: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8b163a: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8b163d: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8b1640: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b1643: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8b1646: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8b1649: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8b164c: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8b164f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8b1652: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 8b1654: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8b1657: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b165a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8b165c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8b165f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b1661: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b1663: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8b1666: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b1669: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8b166c: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8b166f: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b1672: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8b1675: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8b1678: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8b167b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8b167e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b1681: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b1682: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 8b1685: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1686: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b1689: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8b168fu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8b168f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b1691: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b1694: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b1696: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b1699: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b169c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b169f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8b16a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b16a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b16a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b16a7: mov eax, 1 */
  eax = 0x1u;
/* 8b16ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b16b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b16b4: mov esp, ebp */
  esp = ebp;
/* 8b16b6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b16b7: ret  */
  esp += 4; SPILL(); return;
}

void f_8b16b8(void) {
  LOAD_REGS();
L_8b16b8: /* 8b16b8: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b16bb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b16c0: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8b16c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b16c4: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8b16c7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b16ccu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b16cc(); return;
}

void f_8b16cc(void) {
  LOAD_REGS();
L_8b16cc: /* 8b16cc: push 0xa1b8c8 */
  { uint32_t v = 0xa1b8c8u; esp -= 4; W32(esp, v); }
/* 8b16d1: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b16d6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b16dcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b16dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b16df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b16e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b16e3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b16e8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b16e8: guest_badaddr(0x8b16e8); return;
}

void f_8b1780(void) {
  LOAD_REGS();
L_8b1780: /* 8b1780: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b1782: push 0x9d6938 */
  { uint32_t v = 0x9d6938u; esp -= 4; W32(esp, v); }
/* 8b1787: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b178d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b178e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b1795: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b1796: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1797: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1798: mov esi, ecx */
  esi = ecx;
/* 8b179a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b179b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8b179f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b17a5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b17a5: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8b17a8: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b17b0: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x8b17b6u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 8b17b6: lea edi, [esi + 0x38] */
  edi = (uint32_t)(esi + 0x38u);
/* 8b17b9: mov ebx, 3 */
  ebx = 0x3u;
/* 8b17be: mov edi, edi */
  edi = edi;
L_8b17c0: /* 8b17c0: mov ecx, edi */
  ecx = edi;
/* 8b17c2: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x8b17c8u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 8b17c8: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b17cb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 8b17cc: jne 0x8b17c0 */
  if (!zf) goto L_8b17c0;
L_8b17ce: /* 8b17ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8b17d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b17d3: mov dword ptr [esi + 0x5c], 0 */
  W32((uint32_t)(esi + 0x5cu), 0x0u);
/* 8b17da: mov eax, esi */
  eax = esi;
/* 8b17dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b17dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b17de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b17e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b17e8: ret  */
  esp += 4; SPILL(); return;
}

void f_8b1810(void) {
  LOAD_REGS();
L_8b1810: /* 8b1810: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_8b1830(void) {
  LOAD_REGS();
L_8b1830: /* 8b1830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1831: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b1832: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 8b1836: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1837: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1838: xor ebx, ebx */
  ebx = 0;
/* 8b183a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b1840: /* 8b1840: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8b1844: xor esi, esi */
  esi = 0;
L_8b1846: /* 8b1846: lea eax, [esi + ebx] */
  eax = (uint32_t)(esi + ebx);
/* 8b1849: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8b184a: mov ecx, 3 */
  ecx = 0x3u;
/* 8b184f: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8b184f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8b1851: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8b1854: lea eax, [ebp + edx*4] */
  eax = (uint32_t)(ebp + edx*4);
/* 8b1858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1859: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b185a: call 0x6c3602 */
  esp -= 4; W32(esp, 0x8b185fu); SPILL(); f_6c3602(); if (g_unwind) return; RELOAD();
/* 8b185f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1862: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b1864: je 0x8b186f */
  if (zf) goto L_8b186f;
L_8b1866: /* 8b1866: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b1867: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b186a: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8b186d: jb 0x8b1846 */
  if (cf) goto L_8b1846;
L_8b186f: /* 8b186f: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1872: jge 0x8b1881 */
  if ((sf == of)) goto L_8b1881;
L_8b1874: /* 8b1874: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b1875: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8b1878: jb 0x8b1840 */
  if (cf) goto L_8b1840;
L_8b187a: /* 8b187a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b187b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b187c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b187d: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 8b187f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b1880: ret  */
  esp += 4; SPILL(); return;
L_8b1881: /* 8b1881: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b1882: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b1883: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b1884: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8b1886: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b1887: ret  */
  esp += 4; SPILL(); return;
}

void f_8b18b0(void) {
  LOAD_REGS();
L_8b18b0: /* 8b18b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b18b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b18b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b18b5: mov ebx, ecx */
  ebx = ecx;
/* 8b18b7: mov eax, dword ptr [ebx + 0x130] */
  eax = R32((uint32_t)(ebx + 0x130u));
/* 8b18bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b18be: lea ecx, [ebx + 0x130] */
  ecx = (uint32_t)(ebx + 0x130u);
/* 8b18c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b18c5: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 8b18c9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8b18d1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8b18d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b18d3: mov eax, dword ptr [ebx + 0x140] */
  eax = R32((uint32_t)(ebx + 0x140u));
/* 8b18d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b18db: jle 0x8b1968 */
  if ((zf || sf != of)) goto L_8b1968;
L_8b18e1: /* 8b18e1: mov edi, dword ptr [ebx + 0x13c] */
  edi = R32((uint32_t)(ebx + 0x13cu));
/* 8b18e7: lea esi, [edi + 0xc] */
  esi = (uint32_t)(edi + 0xcu);
/* 8b18ea: mov ebp, eax */
  ebp = eax;
/* 8b18ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b18f0: /* 8b18f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b18f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b18f2: call 0x6c3602 */
  esp -= 4; W32(esp, 0x8b18f7u); SPILL(); f_6c3602(); if (g_unwind) return; RELOAD();
/* 8b18f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b18fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b18fc: jne 0x8b1921 */
  if (!zf) goto L_8b1921;
L_8b18fe: /* 8b18fe: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 8b1901: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1902: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1903: call 0x6c3602 */
  esp -= 4; W32(esp, 0x8b1908u); SPILL(); f_6c3602(); if (g_unwind) return; RELOAD();
/* 8b1908: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b190b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b190d: jne 0x8b191d */
  if (!zf) goto L_8b191d;
L_8b190f: /* 8b190f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1911: call 0x6c3602 */
  esp -= 4; W32(esp, 0x8b1916u); SPILL(); f_6c3602(); if (g_unwind) return; RELOAD();
/* 8b1916: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1919: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b191b: je 0x8b1927 */
  if (zf) goto L_8b1927;
L_8b191d: /* 8b191d: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_8b1921: /* 8b1921: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 8b1925: jmp 0x8b192b */
  goto L_8b192b;
L_8b1927: /* 8b1927: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_8b192b: /* 8b192b: add edi, 0x104 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b1931: add esi, 0x104 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b1937: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 8b1938: jne 0x8b18f0 */
  if (!zf) goto L_8b18f0;
L_8b193a: /* 8b193a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8b193e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b1940: je 0x8b1968 */
  if (zf) goto L_8b1968;
L_8b1942: /* 8b1942: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1943: mov ecx, ebx */
  ecx = ebx;
/* 8b1945: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8b194bu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8b194b: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8b1951: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b1953: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1954: push 0xae9eb0 */
  { uint32_t v = 0xae9eb0u; esp -= 4; W32(esp, v); }
/* 8b1959: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 8b195e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b195f: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8b1965u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8b1965: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1968: /* 8b1968: mov esi, dword ptr [ebx + 0x140] */
  esi = R32((uint32_t)(ebx + 0x140u));
/* 8b196e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b1970: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8b1978: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8b197c: jle 0x8b1a00 */
  if ((zf || sf != of)) goto L_8b1a00;
L_8b1982: /* 8b1982: mov ebx, dword ptr [ebx + 0x13c] */
  ebx = R32((uint32_t)(ebx + 0x13cu));
/* 8b1988: mov ebp, 1 */
  ebp = 0x1u;
/* 8b198d: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
L_8b1991: /* 8b1991: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1993: jge 0x8b19bf */
  if ((sf == of)) goto L_8b19bf;
L_8b1995: /* 8b1995: lea edi, [ebx + 0x104] */
  edi = (uint32_t)(ebx + 0x104u);
/* 8b199b: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8b199d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b19a0: /* 8b19a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b19a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b19a2: call 0x8b1830 */
  esp -= 4; W32(esp, 0x8b19a7u); SPILL(); f_8b1830(); if (g_unwind) return; RELOAD();
/* 8b19a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b19aa: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b19ac: je 0x8b19b2 */
  if (zf) goto L_8b19b2;
L_8b19ae: /* 8b19ae: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_8b19b2: /* 8b19b2: add edi, 0x104 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b19b8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 8b19b9: jne 0x8b19a0 */
  if (!zf) goto L_8b19a0;
L_8b19bb: /* 8b19bb: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_8b19bf: /* 8b19bf: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8b19c3: add ebx, 0x104 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b19c9: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8b19ca: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8b19cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8b19cf: jne 0x8b1991 */
  if (!zf) goto L_8b1991;
L_8b19d1: /* 8b19d1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8b19d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b19d7: je 0x8b1a00 */
  if (zf) goto L_8b1a00;
L_8b19d9: /* 8b19d9: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8b19dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b19de: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8b19e4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8b19e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b19e5: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8b19ea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b19ec: push 0xae9ef8 */
  { uint32_t v = 0xae9ef8u; esp -= 4; W32(esp, v); }
/* 8b19f1: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 8b19f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b19f7: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8b19fdu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8b19fd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1a00: /* 8b1a00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b1a01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b1a02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b1a03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b1a04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1a07: ret  */
  esp += 4; SPILL(); return;
}

void f_8b1a70(void) {
  LOAD_REGS();
L_8b1a70: /* 8b1a70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b1a72: push 0x9d6959 */
  { uint32_t v = 0x9d6959u; esp -= 4; W32(esp, v); }
/* 8b1a77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b1a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1a7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b1a85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b1a86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1a87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1a88: mov esi, ecx */
  esi = ecx;
/* 8b1a8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1a8b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8b1a8f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8b1a92: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b1a94: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8b1a9a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b1aa2: jge 0x8b1ab8 */
  if ((sf == of)) goto L_8b1ab8;
L_8b1aa4: /* 8b1aa4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b1aa9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b1aae: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b1ab3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b1ab5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1ab5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1ab8: /* 8b1ab8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1abb: jle 0x8b1ad1 */
  if ((zf || sf != of)) goto L_8b1ad1;
L_8b1abd: /* 8b1abd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b1ac2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b1ac7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b1acc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b1aceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1ace: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1ad1: /* 8b1ad1: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 8b1ad3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1ad4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b1ad6: mov ecx, esi */
  ecx = esi;
/* 8b1ad8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b1adeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b1ade: mov ecx, esi */
  ecx = esi;
/* 8b1ae0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8b1ae8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b1aeeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b1aee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8b1af2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b1af3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b1af4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b1af5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b1afc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1aff: ret  */
  esp += 4; SPILL(); return;
}

void f_8b1b30(void) {
  LOAD_REGS();
L_8b1b30: /* 8b1b30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b1b31: mov ebp, esp */
  ebp = esp;
/* 8b1b33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b1b35: push 0x9d6970 */
  { uint32_t v = 0x9d6970u; esp -= 4; W32(esp, v); }
/* 8b1b3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b1b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1b41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b1b48: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b1b4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1b4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1b4d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b1b50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1b51: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8b1b54: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b1b57: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 8b1b59: xor ebx, ebx */
  ebx = 0;
/* 8b1b5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1b5c: mov ecx, esi */
  ecx = esi;
/* 8b1b5e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8b1b61: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8b1b67u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8b1b67: mov ecx, edi */
  ecx = edi;
/* 8b1b69: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b1b6fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b1b6f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b1b71: je 0x8b1c14 */
  if (zf) goto L_8b1c14;
L_8b1b77: /* 8b1b77: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8b1b7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1b7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1b7c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b1b82u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b1b82: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b1b85: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1b88: xor eax, eax */
  eax = 0;
/* 8b1b8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b1b90: /* 8b1b90: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1b93: jge 0x8b1b98 */
  if ((sf == of)) goto L_8b1b98;
L_8b1b95: /* 8b1b95: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b1b96: jmp 0x8b1b90 */
  goto L_8b1b90;
L_8b1b98: /* 8b1b98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b1b99: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 8b1b9b: mov ecx, esi */
  ecx = esi;
/* 8b1b9d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b1ba3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b1ba3: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8b1ba6: jmp 0x8b1bb0 */
  goto L_8b1bb0;
L_8b1bb0: /* 8b1bb0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b1bb3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1bb6: jge 0x8b1c44 */
  if ((sf == of)) goto L_8b1c44;
L_8b1bbc: /* 8b1bbc: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 8b1bbe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b1bc0: mov ecx, esi */
  ecx = esi;
/* 8b1bc2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b1bc8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b1bc8: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 8b1bcb: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b1bcd: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8b1bd0: je 0x8b1bff */
  if (zf) goto L_8b1bff;
L_8b1bd2: /* 8b1bd2: mov edi, dword ptr [0xcfa36c] */
  edi = R32((uint32_t)(0xcfa36cu));
/* 8b1bd8: mov dword ptr [ebp - 0x1c], 3 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3u);
/* 8b1bdf: mov ebx, 0x10 */
  ebx = 0x10u;
/* 8b1be4: lea esi, [eax + 0x10] */
  esi = (uint32_t)(eax + 0x10u);
L_8b1be7: /* 8b1be7: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 8b1bea: js 0x8b1bf4 */
  if (sf) goto L_8b1bf4;
L_8b1bec: /* 8b1bec: mov ecx, esi */
  ecx = esi;
/* 8b1bee: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1bf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1bf0: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b1bf2: jmp 0x8b1be7 */
  goto L_8b1be7;
L_8b1bf4: /* 8b1bf4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b1bf7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b1bfa: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8b1bfd: jmp 0x8b1c01 */
  goto L_8b1c01;
L_8b1bff: /* 8b1bff: xor eax, eax */
  eax = 0;
L_8b1c01: /* 8b1c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1c02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1c03: call 0x6cb41a */
  esp -= 4; W32(esp, 0x8b1c08u); SPILL(); f_6cb41a(); if (g_unwind) return; RELOAD();
/* 8b1c08: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b1c0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1c0e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b1c0f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b1c12: jmp 0x8b1bb0 */
  goto L_8b1bb0;
L_8b1c14: /* 8b1c14: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 8b1c17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1c18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1c19: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b1c1fu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b1c1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1c22: xor edi, edi */
  edi = 0;
L_8b1c24: /* 8b1c24: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1c26: jge 0x8b1c41 */
  if ((sf == of)) goto L_8b1c41;
L_8b1c28: /* 8b1c28: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b1c2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b1c2d: mov edx, edi */
  edx = edi;
/* 8b1c2f: imul edx, edx, 0x54 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x54u);
  edx = (uint32_t)r;
  }
/* 8b1c32: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b1c34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b1c35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1c36: call 0x6cb41a */
  esp -= 4; W32(esp, 0x8b1c3bu); SPILL(); f_6cb41a(); if (g_unwind) return; RELOAD();
/* 8b1c3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1c3e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b1c3f: jmp 0x8b1c24 */
  goto L_8b1c24;
L_8b1c41: /* 8b1c41: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_8b1c44: /* 8b1c44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b1c47: mov eax, edi */
  eax = edi;
/* 8b1c49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b1c4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b1c4b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b1c52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b1c53: mov esp, ebp */
  esp = ebp;
/* 8b1c55: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b1c56: ret  */
  esp += 4; SPILL(); return;
}

void f_8b1ba8(void) {
  LOAD_REGS();
L_8b1ba8: /* 8b1ba8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8b1baf: nop  */
L_8b1bb0: /* 8b1bb0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b1bb3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1bb6: jge 0x8b1c44 */
  if ((sf == of)) goto L_8b1c44;
L_8b1bbc: /* 8b1bbc: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 8b1bbe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b1bc0: mov ecx, esi */
  ecx = esi;
/* 8b1bc2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b1bc8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b1bc8: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 8b1bcb: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b1bcd: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8b1bd0: je 0x8b1bff */
  if (zf) goto L_8b1bff;
L_8b1bd2: /* 8b1bd2: mov edi, dword ptr [0xcfa36c] */
  edi = R32((uint32_t)(0xcfa36cu));
/* 8b1bd8: mov dword ptr [ebp - 0x1c], 3 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3u);
/* 8b1bdf: mov ebx, 0x10 */
  ebx = 0x10u;
/* 8b1be4: lea esi, [eax + 0x10] */
  esi = (uint32_t)(eax + 0x10u);
L_8b1be7: /* 8b1be7: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 8b1bea: js 0x8b1bf4 */
  if (sf) goto L_8b1bf4;
L_8b1bec: /* 8b1bec: mov ecx, esi */
  ecx = esi;
/* 8b1bee: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1bf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1bf0: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b1bf2: jmp 0x8b1be7 */
  goto L_8b1be7;
L_8b1bf4: /* 8b1bf4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b1bf7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b1bfa: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8b1bfd: jmp 0x8b1c01 */
  goto L_8b1c01;
L_8b1bff: /* 8b1bff: xor eax, eax */
  eax = 0;
L_8b1c01: /* 8b1c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1c02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1c03: call 0x6cb41a */
  esp -= 4; W32(esp, 0x8b1c08u); SPILL(); f_6cb41a(); if (g_unwind) return; RELOAD();
/* 8b1c08: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b1c0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1c0e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b1c0f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b1c12: jmp 0x8b1bb0 */
  goto L_8b1bb0;
L_8b1c44: /* 8b1c44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b1c47: mov eax, edi */
  eax = edi;
/* 8b1c49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b1c4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b1c4b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b1c52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b1c53: mov esp, ebp */
  esp = ebp;
/* 8b1c55: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b1c56: ret  */
  esp += 4; SPILL(); return;
}

void f_8b1c57(void) {
  LOAD_REGS();
L_8b1c57: /* 8b1c57: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b1c5a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b1c5f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b1c62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b1c63: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8b1c66: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b1c6bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b1c6b(); return;
}

void f_8b1c6b(void) {
  LOAD_REGS();
L_8b1c6b: /* 8b1c6b: push 0xa1b8f8 */
  { uint32_t v = 0xa1b8f8u; esp -= 4; W32(esp, v); }
/* 8b1c70: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b1c75: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b1c7bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b1c7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1c7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b1c80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b1c82: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b1c87u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b1c87: guest_badaddr(0x8b1c87); return;
}

void f_8b1cf0(void) {
  LOAD_REGS();
L_8b1cf0: /* 8b1cf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b1cf2: push 0x9d6989 */
  { uint32_t v = 0x9d6989u; esp -= 4; W32(esp, v); }
/* 8b1cf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b1cfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1cfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b1d05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b1d06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1d07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1d08: mov esi, ecx */
  esi = ecx;
/* 8b1d0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1d0b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8b1d0f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8b1d12: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b1d14: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8b1d1a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b1d22: jge 0x8b1d38 */
  if ((sf == of)) goto L_8b1d38;
L_8b1d24: /* 8b1d24: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b1d29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b1d2e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b1d33: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b1d35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1d35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1d38: /* 8b1d38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1d3b: jle 0x8b1d51 */
  if ((zf || sf != of)) goto L_8b1d51;
L_8b1d3d: /* 8b1d3d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b1d42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b1d47: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b1d4c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b1d4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1d4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b1d51: /* 8b1d51: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8b1d53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1d54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b1d56: mov ecx, esi */
  ecx = esi;
/* 8b1d58: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b1d5eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b1d5e: mov ecx, esi */
  ecx = esi;
/* 8b1d60: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8b1d68: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b1d6eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b1d6e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8b1d72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b1d73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b1d74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b1d75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b1d7c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1d7f: ret  */
  esp += 4; SPILL(); return;
}

void f_8b1db0(void) {
  LOAD_REGS();
L_8b1db0: /* 8b1db0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b1db1: mov ebp, esp */
  ebp = esp;
/* 8b1db3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b1db5: push 0x9d69a0 */
  { uint32_t v = 0x9d69a0u; esp -= 4; W32(esp, v); }
/* 8b1dba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b1dc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1dc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b1dc8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b1dcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1dcc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b1dcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1dd0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b1dd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1dd4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b1dd7: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8b1dd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1dda: mov ecx, esi */
  ecx = esi;
/* 8b1ddc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b1de3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8b1de9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8b1de9: mov ecx, ebx */
  ecx = ebx;
/* 8b1deb: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b1df1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b1df1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b1df3: mov edi, dword ptr [0xcfa1f0] */
  edi = R32((uint32_t)(0xcfa1f0u));
/* 8b1df9: je 0x8b1ea2 */
  if (zf) goto L_8b1ea2;
L_8b1dff: /* 8b1dff: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8b1e02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1e03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1e04: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1e06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1e06: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b1e09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1e0c: xor eax, eax */
  eax = 0;
/* 8b1e0e: mov edi, edi */
  edi = edi;
L_8b1e10: /* 8b1e10: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1e13: jge 0x8b1e18 */
  if ((sf == of)) goto L_8b1e18;
L_8b1e15: /* 8b1e15: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b1e16: jmp 0x8b1e10 */
  goto L_8b1e10;
L_8b1e18: /* 8b1e18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b1e19: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8b1e1b: mov ecx, esi */
  ecx = esi;
/* 8b1e1d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b1e23u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b1e23: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b1e2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b1e30: /* 8b1e30: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b1e33: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1e36: jge 0x8b1f04 */
  if ((sf == of)) goto L_8b1f04;
L_8b1e3c: /* 8b1e3c: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8b1e3e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b1e40: mov ecx, esi */
  ecx = esi;
/* 8b1e42: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b1e48u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b1e48: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8b1e4b: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b1e4d: mov esi, eax */
  esi = eax;
/* 8b1e4f: je 0x8b1e5c */
  if (zf) goto L_8b1e5c;
L_8b1e51: /* 8b1e51: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8b1e54: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x8b1e5au); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 8b1e5a: jmp 0x8b1e5e */
  goto L_8b1e5e;
L_8b1e5c: /* 8b1e5c: xor esi, esi */
  esi = 0;
L_8b1e5e: /* 8b1e5e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b1e61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1e62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b1e63: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1e65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1e65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1e68: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8b1e6b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b1e6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1e6d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1e6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1e6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1e72: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8b1e75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b1e76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1e77: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1e79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1e79: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1e7c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8b1e7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b1e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1e81: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1e83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1e83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1e86: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b1e89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1e8b: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x8b1e90u); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 8b1e90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b1e93: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b1e96: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b1e99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1e9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b1e9d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b1ea0: jmp 0x8b1e30 */
  goto L_8b1e30;
L_8b1ea2: /* 8b1ea2: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8b1ea5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1ea6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1ea7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1ea9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1ea9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1eac: xor ebx, ebx */
  ebx = 0;
/* 8b1eae: mov edi, edi */
  edi = edi;
L_8b1eb0: /* 8b1eb0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8b1eb3: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b1eb5: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8b1eb8: jge 0x8b1f01 */
  if ((sf == of)) goto L_8b1f01;
L_8b1eba: /* 8b1eba: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b1ebd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8b1ebf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b1ec2: mov esi, ebx */
  esi = ebx;
/* 8b1ec4: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 8b1ec7: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b1ec9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1eca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1ecb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1ecdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1ecd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1ed0: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8b1ed3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b1ed4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1ed5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1ed7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1ed7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1eda: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8b1edd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b1ede: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1edf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1ee1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1ee1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1ee4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8b1ee7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b1ee8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1ee9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b1eebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b1eeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1eee: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b1ef1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1ef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1ef3: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x8b1ef8u); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 8b1ef8: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b1efb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1efe: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b1eff: jmp 0x8b1eb0 */
  goto L_8b1eb0;
L_8b1f01: /* 8b1f01: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_8b1f04: /* 8b1f04: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b1f07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b1f08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b1f09: mov eax, ebx */
  eax = ebx;
/* 8b1f0b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b1f12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b1f13: mov esp, ebp */
  esp = ebp;
/* 8b1f15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b1f16: ret  */
  esp += 4; SPILL(); return;
}

void f_8b1f17(void) {
  LOAD_REGS();
L_8b1f17: /* 8b1f17: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b1f1a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b1f1f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8b1f22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1f23: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8b1f26: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b1f2bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b1f2b(); return;
}

void f_8b1f2b(void) {
  LOAD_REGS();
L_8b1f2b: /* 8b1f2b: push 0xa1b910 */
  { uint32_t v = 0xa1b910u; esp -= 4; W32(esp, v); }
/* 8b1f30: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b1f35: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b1f3bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b1f3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b1f3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b1f40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b1f42: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b1f47u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b1f47: guest_badaddr(0x8b1f47); return;
}

void f_8b1fc0(void) {
  LOAD_REGS();
L_8b1fc0: /* 8b1fc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b1fc2: push 0x9d69b9 */
  { uint32_t v = 0x9d69b9u; esp -= 4; W32(esp, v); }
/* 8b1fc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b1fcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b1fce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b1fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b1fd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b1fd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b1fd8: mov esi, ecx */
  esi = ecx;
/* 8b1fda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b1fdb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8b1fdf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8b1fe2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b1fe4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8b1fea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b1ff2: jge 0x8b2008 */
  if ((sf == of)) goto L_8b2008;
L_8b1ff4: /* 8b1ff4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b1ff9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b1ffe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b2003: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b2005u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2005: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b2008: /* 8b2008: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b200b: jle 0x8b2021 */
  if ((zf || sf != of)) goto L_8b2021;
L_8b200d: /* 8b200d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b2012: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b2017: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b201c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b201eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b201e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b2021: /* 8b2021: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8b2023: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b2024: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b2026: mov ecx, esi */
  ecx = esi;
/* 8b2028: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b202eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b202e: mov ecx, esi */
  ecx = esi;
/* 8b2030: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8b2038: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b203eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b203e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8b2042: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b2043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2044: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b2045: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b204c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b204f: ret  */
  esp += 4; SPILL(); return;
}

void f_8b2080(void) {
  LOAD_REGS();
L_8b2080: /* 8b2080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b2081: mov ebp, esp */
  ebp = esp;
/* 8b2083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b2085: push 0x9d69d0 */
  { uint32_t v = 0x9d69d0u; esp -= 4; W32(esp, v); }
/* 8b208a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b2090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b2098: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b209b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b209c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8b209f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b20a0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b20a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b20a4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b20a7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8b20a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b20aa: mov ecx, ebx */
  ecx = ebx;
/* 8b20ac: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b20b3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8b20b9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8b20b9: mov ecx, esi */
  ecx = esi;
/* 8b20bb: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b20c1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b20c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b20c3: je 0x8b2159 */
  if (zf) goto L_8b2159;
L_8b20c9: /* 8b20c9: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8b20cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b20cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b20ce: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b20d4u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b20d4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b20d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b20da: xor eax, eax */
  eax = 0;
/* 8b20dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b20e0: /* 8b20e0: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b20e3: jge 0x8b20e8 */
  if ((sf == of)) goto L_8b20e8;
L_8b20e5: /* 8b20e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b20e6: jmp 0x8b20e0 */
  goto L_8b20e0;
L_8b20e8: /* 8b20e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b20e9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8b20eb: mov ecx, ebx */
  ecx = ebx;
/* 8b20ed: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b20f3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b20f3: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 8b20f9: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8b2100: /* 8b2100: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b2103: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2106: jge 0x8b21b8 */
  if ((sf == of)) goto L_8b21b8;
L_8b210c: /* 8b210c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8b210e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b2110: mov ecx, ebx */
  ecx = ebx;
/* 8b2112: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b2118u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b2118: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8b211a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b211d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b211f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b2122: mov esi, eax */
  esi = eax;
/* 8b2124: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2125: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2126: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b2128u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2128: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b212b: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 8b212e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b212f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2130: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b2132u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2132: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2135: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8b2138: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b213a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b213cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b213c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b213f: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b2142: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2144: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b214au); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b214a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b214d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b2150: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2153: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b2154: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b2157: jmp 0x8b2100 */
  goto L_8b2100;
L_8b2159: /* 8b2159: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 8b215c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b215d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b215e: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b2164u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b2164: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 8b216a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b216d: xor esi, esi */
  esi = 0;
/* 8b216f: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_8b2172: /* 8b2172: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2175: jge 0x8b21b5 */
  if ((sf == of)) goto L_8b21b5;
L_8b2177: /* 8b2177: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b2179: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b217c: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8b217f: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b2181: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2182: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2183: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b2185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2185: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2188: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 8b218b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b218c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b218d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b218fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b218f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2192: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8b2195: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2196: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2197: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b2199u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2199: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b219c: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b219f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b21a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b21a1: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b21a7u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b21a7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b21aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b21ad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b21ae: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b21b1: mov esi, eax */
  esi = eax;
/* 8b21b3: jmp 0x8b2172 */
  goto L_8b2172;
L_8b21b5: /* 8b21b5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8b21b8: /* 8b21b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b21bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b21bc: mov eax, esi */
  eax = esi;
/* 8b21be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b21bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b21c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b21c7: mov esp, ebp */
  esp = ebp;
/* 8b21c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b21ca: ret  */
  esp += 4; SPILL(); return;
}

void f_8b21cb(void) {
  LOAD_REGS();
L_8b21cb: /* 8b21cb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b21ce: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b21d3: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8b21d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b21d7: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8b21da: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b21dfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b21df(); return;
}

void f_8b21df(void) {
  LOAD_REGS();
L_8b21df: /* 8b21df: push 0xa1b928 */
  { uint32_t v = 0xa1b928u; esp -= 4; W32(esp, v); }
/* 8b21e4: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b21e9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b21efu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b21ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b21f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b21f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b21f6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b21fbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b21fb: guest_badaddr(0x8b21fb); return;
}

void f_8b2260(void) {
  LOAD_REGS();
L_8b2260: /* 8b2260: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b2262: push 0x9d69e9 */
  { uint32_t v = 0x9d69e9u; esp -= 4; W32(esp, v); }
/* 8b2267: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b226d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b226e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b2275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2276: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2277: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2278: mov esi, ecx */
  esi = ecx;
/* 8b227a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b227b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8b227f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8b2282: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b2284: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8b228a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b2292: jge 0x8b22a8 */
  if ((sf == of)) goto L_8b22a8;
L_8b2294: /* 8b2294: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b2299: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b229e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b22a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b22a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b22a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b22a8: /* 8b22a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b22ab: jle 0x8b22c1 */
  if ((zf || sf != of)) goto L_8b22c1;
L_8b22ad: /* 8b22ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b22b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b22b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b22bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b22beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b22be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b22c1: /* 8b22c1: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b22c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b22c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b22c6: mov ecx, esi */
  ecx = esi;
/* 8b22c8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b22ceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b22ce: mov ecx, esi */
  ecx = esi;
/* 8b22d0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8b22d8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b22deu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b22de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8b22e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b22e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b22e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b22e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b22ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b22ef: ret  */
  esp += 4; SPILL(); return;
}

void f_8b2320(void) {
  LOAD_REGS();
L_8b2320: /* 8b2320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b2321: mov ebp, esp */
  ebp = esp;
/* 8b2323: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b2325: push 0x9d6a00 */
  { uint32_t v = 0x9d6a00u; esp -= 4; W32(esp, v); }
/* 8b232a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b2330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2331: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b2338: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b233b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b233c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b233f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2340: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b2343: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b2344: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b2347: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b2349: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b234a: mov ecx, esi */
  ecx = esi;
/* 8b234c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b2353: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8b2359u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8b2359: mov ecx, ebx */
  ecx = ebx;
/* 8b235b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b2361u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b2361: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b2363: je 0x8b2405 */
  if (zf) goto L_8b2405;
L_8b2369: /* 8b2369: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8b236c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b236d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b236e: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b2374u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b2374: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b2377: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b237a: xor eax, eax */
  eax = 0;
/* 8b237c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b2380: /* 8b2380: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2383: jge 0x8b2388 */
  if ((sf == of)) goto L_8b2388;
L_8b2385: /* 8b2385: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b2386: jmp 0x8b2380 */
  goto L_8b2380;
L_8b2388: /* 8b2388: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2389: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b238b: mov ecx, esi */
  ecx = esi;
/* 8b238d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b2393u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b2393: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 8b2399: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8b23a0: /* 8b23a0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b23a3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b23a6: jge 0x8b246c */
  if ((sf == of)) goto L_8b246c;
L_8b23ac: /* 8b23ac: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b23ae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b23b0: mov ecx, esi */
  ecx = esi;
/* 8b23b2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b23b8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b23b8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b23bb: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8b23be: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8b23c0: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8b23c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b23c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b23c5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b23c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b23c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b23ca: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 8b23cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b23ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b23cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b23d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b23d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b23d4: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8b23d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b23d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b23d9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b23dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b23db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b23de: lea edx, [esi + 6] */
  edx = (uint32_t)(esi + 0x6u);
/* 8b23e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b23e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b23e3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b23e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b23e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b23e8: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b23eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b23ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b23ed: call dword ptr [0xcfa368] */
  esp -= 4; W32(esp, 0x8b23f3u); SPILL(); f_4e3f12(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVCBox@@@Z */ RELOAD();
/* 8b23f3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b23f6: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b23f9: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b23fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b23ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b2400: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b2403: jmp 0x8b23a0 */
  goto L_8b23a0;
L_8b2405: /* 8b2405: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8b2408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2409: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b240a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b2410u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b2410: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 8b2416: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2419: xor ebx, ebx */
  ebx = 0;
/* 8b241b: jmp 0x8b2420 */
  goto L_8b2420;
L_8b2420: /* 8b2420: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2423: jge 0x8b2469 */
  if ((sf == of)) goto L_8b2469;
L_8b2425: /* 8b2425: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b2427: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b242a: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* 8b242d: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8b2430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2431: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2432: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b2434u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2434: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2437: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 8b243a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b243b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b243c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b243eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b243e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2441: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8b2444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2445: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2446: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b2448u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2448: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b244b: lea ecx, [esi + 6] */
  ecx = (uint32_t)(esi + 0x6u);
/* 8b244e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b244f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2450: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b2452u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2452: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2455: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b2458: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2459: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b245a: call dword ptr [0xcfa368] */
  esp -= 4; W32(esp, 0x8b2460u); SPILL(); f_4e3f12(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVCBox@@@Z */ RELOAD();
/* 8b2460: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b2463: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2466: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b2467: jmp 0x8b2420 */
  goto L_8b2420;
L_8b2469: /* 8b2469: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_8b246c: /* 8b246c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b246f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b2470: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2471: mov eax, ebx */
  eax = ebx;
/* 8b2473: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b247a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b247b: mov esp, ebp */
  esp = ebp;
/* 8b247d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b247e: ret  */
  esp += 4; SPILL(); return;
}

void f_8b241d(void) {
  LOAD_REGS();
L_8b241d: /* 8b241d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b2420: /* 8b2420: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2423: jge 0x8b2469 */
  if ((sf == of)) goto L_8b2469;
L_8b2425: /* 8b2425: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b2427: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b242a: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* 8b242d: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8b2430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2431: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2432: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b2434u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2434: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2437: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 8b243a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b243b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b243c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b243eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b243e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2441: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8b2444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2445: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2446: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b2448u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2448: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b244b: lea ecx, [esi + 6] */
  ecx = (uint32_t)(esi + 0x6u);
/* 8b244e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b244f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2450: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8b2452u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2452: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2455: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b2458: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2459: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b245a: call dword ptr [0xcfa368] */
  esp -= 4; W32(esp, 0x8b2460u); SPILL(); f_4e3f12(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVCBox@@@Z */ RELOAD();
/* 8b2460: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b2463: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2466: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b2467: jmp 0x8b2420 */
  goto L_8b2420;
L_8b2469: /* 8b2469: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b246c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b246f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b2470: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2471: mov eax, ebx */
  eax = ebx;
/* 8b2473: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b247a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b247b: mov esp, ebp */
  esp = ebp;
/* 8b247d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b247e: ret  */
  esp += 4; SPILL(); return;
}

void f_8b247f(void) {
  LOAD_REGS();
L_8b247f: /* 8b247f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b2482: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b2487: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8b248a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b248b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8b248e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b2493u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b2493(); return;
}

void f_8b2493(void) {
  LOAD_REGS();
L_8b2493: /* 8b2493: push 0xa1b940 */
  { uint32_t v = 0xa1b940u; esp -= 4; W32(esp, v); }
/* 8b2498: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b249d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b24a3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b24a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b24a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b24a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b24aa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b24afu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b24af: guest_badaddr(0x8b24af); return;
}

void f_8b2520(void) {
  LOAD_REGS();
L_8b2520: /* 8b2520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2521: mov esi, ecx */
  esi = ecx;
/* 8b2523: call 0x6c584e */
  esp -= 4; W32(esp, 0x8b2528u); SPILL(); f_6c584e(); if (g_unwind) return; RELOAD();
/* 8b2528: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b252d: je 0x8b253c */
  if (zf) goto L_8b253c;
L_8b252f: /* 8b252f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8b2534: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b2536: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b2538: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2539: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8b253cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b253c: /* 8b253c: mov eax, esi */
  eax = esi;
/* 8b253e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b253f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b2560(void) {
  LOAD_REGS();
L_8b2560: /* 8b2560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2561: mov esi, ecx */
  esi = ecx;
/* 8b2563: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8b2566: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b256cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b256c: mov eax, esi */
  eax = esi;
/* 8b256e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b256f: ret  */
  esp += 4; SPILL(); return;
}

void f_8b2580(void) {
  LOAD_REGS();
L_8b2580: /* 8b2580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2581: mov esi, ecx */
  esi = ecx;
/* 8b2583: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8b2586: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b258cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b258c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8b2590: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8b2592: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 8b2599: mov eax, esi */
  eax = esi;
/* 8b259b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b259c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b25b0(void) {
  LOAD_REGS();
L_8b25b0: /* 8b25b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b25b2: push 0x9d6a18 */
  { uint32_t v = 0x9d6a18u; esp -= 4; W32(esp, v); }
/* 8b25b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b25bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b25be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b25c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b25c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b25c7: mov esi, ecx */
  esi = ecx;
/* 8b25c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8b25cd: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b25d3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b25d3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8b25d6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8b25de: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b25e4u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b25e4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8b25e8: mov eax, esi */
  eax = esi;
/* 8b25ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b25eb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b25f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b25f5: ret  */
  esp += 4; SPILL(); return;
}

void f_8b2620(void) {
  LOAD_REGS();
L_8b2620: /* 8b2620: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b2623: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b2624: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 8b2628: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b2629: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 8b262d: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 8b2630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2631: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b2632: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b2633: call 0x6c90bb */
  esp -= 4; W32(esp, 0x8b2638u); SPILL(); f_6c90bb(); if (g_unwind) return; RELOAD();
/* 8b2638: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b263b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b263c: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x8b2641u); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 8b2641: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8b2644: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2647: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b2649: jne 0x8b27f8 */
  if (!zf) goto L_8b27f8;
L_8b264f: /* 8b264f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2651: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* 8b2655: mov ebx, 3 */
  ebx = 0x3u;
/* 8b265a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b2660: /* 8b2660: mov ecx, esi */
  ecx = esi;
/* 8b2662: call dword ptr [0xcfa36c] */
  esp -= 4; W32(esp, 0x8b2668u); SPILL(); f_4e159b(); if (g_unwind) return; /* Core!??0FPlane@@QAE@XZ */ RELOAD();
/* 8b2668: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b266b: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 8b266c: jne 0x8b2660 */
  if (!zf) goto L_8b2660;
L_8b266e: /* 8b266e: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 8b2674: lea ebx, [edi + 0x28] */
  ebx = (uint32_t)(edi + 0x28u);
/* 8b2677: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8b267a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b267b: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 8b267e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b267f: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 8b2682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2683: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2684: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b2685: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2687u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2687: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b268a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b268b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b268du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b268d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2691: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2693u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2693: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2697: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2699: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b269c: mov ecx, ebp */
  ecx = ebp;
/* 8b269e: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b26a4u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b26a4: cmp eax, 0x53 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x53u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b26a7: jge 0x8b2731 */
  if ((sf == of)) goto L_8b2731;
L_8b26ad: /* 8b26ad: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8b26b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b26b2: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 8b26b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b26b7: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 8b26bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b26bc: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8b26c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b26c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b26c2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b26c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b26c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b26c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b26c8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b26cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b26ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b26cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b26ce: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b26d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b26d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b26d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b26d4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b26d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b26d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b26d9: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 8b26dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b26de: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 8b26e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b26e3: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 8b26e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b26e8: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 8b26ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b26ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b26ee: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b26f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b26f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b26f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b26f4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b26f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b26f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b26f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b26fa: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b26fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b26fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b26ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2700: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2702u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2702: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2705: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 8b2709: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b270a: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8b270e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b270f: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 8b2713: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2714: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8b2718: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2719: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b271a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b271cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b271c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b271f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2720: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2722: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2725: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2726: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2728u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2728: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b272b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b272c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b272eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b272e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b2731: /* 8b2731: mov ecx, ebp */
  ecx = ebp;
/* 8b2733: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b2739u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b2739: cmp eax, 0x50 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b273c: jl 0x8b279e */
  if ((sf != of)) goto L_8b279e;
L_8b273e: /* 8b273e: lea eax, [edi + 0x38] */
  eax = (uint32_t)(edi + 0x38u);
/* 8b2741: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 8b2744: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2745: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8b2748: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2749: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b274a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b274b: lea ebx, [edi + 0x44] */
  ebx = (uint32_t)(edi + 0x44u);
/* 8b274e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2750u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2750: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2754: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2756u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2756: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b275a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b275cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b275c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b275f: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 8b2762: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2763: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8b2766: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2767: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2768: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2769: lea ebp, [edi + 0x50] */
  ebp = (uint32_t)(edi + 0x50u);
/* 8b276c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b276eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b276e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2772: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2774u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2774: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2777: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2778: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b277au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b277a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b277d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 8b2780: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2781: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 8b2784: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2785: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b2786: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2787: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2789: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b278c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b278d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b278fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b278f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2792: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2793: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2795u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2795: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 8b2799: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b279c: jmp 0x8b27dd */
  goto L_8b27dd;
L_8b279e: /* 8b279e: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 8b27a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b27a3: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 8b27a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b27a8: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 8b27ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b27ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b27ad: call 0x6c66fe */
  esp -= 4; W32(esp, 0x8b27b2u); SPILL(); f_6c66fe(); if (g_unwind) return; RELOAD();
/* 8b27b2: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 8b27b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b27b7: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 8b27bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b27bc: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 8b27bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b27c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b27c1: call 0x6c66fe */
  esp -= 4; W32(esp, 0x8b27c6u); SPILL(); f_6c66fe(); if (g_unwind) return; RELOAD();
/* 8b27c6: lea edx, [esp + 0x50] */
  edx = (uint32_t)(esp + 0x50u);
/* 8b27ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b27cb: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 8b27cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b27d0: lea ecx, [edi + 0x50] */
  ecx = (uint32_t)(edi + 0x50u);
/* 8b27d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b27d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b27d5: call 0x6c66fe */
  esp -= 4; W32(esp, 0x8b27dau); SPILL(); f_6c66fe(); if (g_unwind) return; RELOAD();
/* 8b27da: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b27dd: /* 8b27dd: mov ecx, ebp */
  ecx = ebp;
/* 8b27df: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b27e5u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b27e5: cmp eax, 0x5f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b27e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b27e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b27ea: jl 0x8b27f8 */
  if ((sf != of)) goto L_8b27f8;
L_8b27ec: /* 8b27ec: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 8b27ef: add edi, 0x5c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b27f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b27f3: mov ecx, ebp */
  ecx = ebp;
/* 8b27f5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b27f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b27f8: /* 8b27f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b27f9: mov eax, ebp */
  eax = ebp;
/* 8b27fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b27fc: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b27ff: ret  */
  esp += 4; SPILL(); return;
}

void f_8b2880(void) {
  LOAD_REGS();
L_8b2880: /* 8b2880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b2884: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2885: mov esi, ecx */
  esi = ecx;
/* 8b2887: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8b288c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b288d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8b2890: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8b2896u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8b2896: xor eax, eax */
  eax = 0;
/* 8b2898: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8b289b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8b289e: mov dword ptr [esi], 0x9f94d0 */
  W32((uint32_t)(esi), 0x9f94d0u);
/* 8b28a4: mov eax, esi */
  eax = esi;
/* 8b28a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b28a7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b28c0(void) {
  LOAD_REGS();
L_8b28c0: /* 8b28c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b28c1: mov ebp, esp */
  ebp = esp;
/* 8b28c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b28c5: push 0x9d6a30 */
  { uint32_t v = 0x9d6a30u; esp -= 4; W32(esp, v); }
/* 8b28ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b28d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b28d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b28d8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b28db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b28dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b28dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b28e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b28e1: mov ecx, esi */
  ecx = esi;
/* 8b28e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b28e6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b28ed: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b28f3u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b28f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b28f5: mov ecx, esi */
  ecx = esi;
/* 8b28f7: je 0x8b29b6 */
  if (zf) goto L_8b29b6;
L_8b28fd: /* 8b28fd: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b2904: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b290au); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b290a: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b290d: jg 0x8b293f */
  if ((!zf && sf == of)) goto L_8b293f;
L_8b290f: /* 8b290f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8b2912: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8b2914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b2915: mov ecx, esi */
  ecx = esi;
/* 8b2917: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0x8b291au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b291a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8b291d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b291e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b291f: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b2925u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b2925: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b2927: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b292a: mov ecx, esi */
  ecx = esi;
/* 8b292c: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8b292fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b292f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b2932: imul ecx, ecx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x104u);
  ecx = (uint32_t)r;
  }
/* 8b2938: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b293a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8b293d: jmp 0x8b2988 */
  goto L_8b2988;
L_8b293f: /* 8b293f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8b2942: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2943: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2944: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8b294au); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8b294a: mov ecx, dword ptr [0xcfa40c] */
  ecx = R32((uint32_t)(0xcfa40cu));
/* 8b2950: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 8b2952: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8b2955: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2958: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b295a: je 0x8b297d */
  if (zf) goto L_8b297d;
L_8b295c: /* 8b295c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b295e: je 0x8b296f */
  if (zf) goto L_8b296f;
L_8b2960: /* 8b2960: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 8b2963: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2964: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2965: call 0x6cc347 */
  esp -= 4; W32(esp, 0x8b296au); SPILL(); f_6cc347(); if (g_unwind) return; RELOAD();
/* 8b296a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b296d: jmp 0x8b2985 */
  goto L_8b2985;
L_8b296f: /* 8b296f: xor eax, eax */
  eax = 0;
/* 8b2971: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2972: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2973: call 0x6cc347 */
  esp -= 4; W32(esp, 0x8b2978u); SPILL(); f_6cc347(); if (g_unwind) return; RELOAD();
/* 8b2978: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b297b: jmp 0x8b2985 */
  goto L_8b2985;
L_8b297d: /* 8b297d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b297f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b2980: mov ecx, esi */
  ecx = esi;
/* 8b2982: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x8b2985u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b2985: /* 8b2985: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8b2988: /* 8b2988: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
/* 8b298d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b2990: jne 0x8b299b */
  if (!zf) goto L_8b299b;
L_8b2992: /* 8b2992: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8b2994: mov ecx, edi */
  ecx = edi;
/* 8b2996: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8b2998u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2998: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8b299b: /* 8b299b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8b299d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b299e: mov ecx, esi */
  ecx = esi;
/* 8b29a0: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x8b29a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b29a3: mov eax, esi */
  eax = esi;
/* 8b29a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b29a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b29af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b29b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b29b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b29b2: mov esp, ebp */
  esp = ebp;
/* 8b29b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b29b5: ret  */
  esp += 4; SPILL(); return;
L_8b29b6: /* 8b29b6: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x8b29bcu); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 8b29bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b29be: je 0x8b2a3c */
  if (zf) goto L_8b2a3c;
L_8b29c0: /* 8b29c0: mov ecx, esi */
  ecx = esi;
/* 8b29c2: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b29c8u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b29c8: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b29cb: jle 0x8b2a3c */
  if ((zf || sf != of)) goto L_8b2a3c;
L_8b29cd: /* 8b29cd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b29cf: mov ecx, esi */
  ecx = esi;
/* 8b29d1: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8b29d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b29d4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b29d7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8b29da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b29dc: je 0x8b29e3 */
  if (zf) goto L_8b29e3;
L_8b29de: /* 8b29de: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 8b29e1: jmp 0x8b29e5 */
  goto L_8b29e5;
L_8b29e3: /* 8b29e3: xor edi, edi */
  edi = 0;
L_8b29e5: /* 8b29e5: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 8b29eb: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8b29ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b29ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b29f0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b29f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b29f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b29f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b29f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b29f7: call 0x6cc347 */
  esp -= 4; W32(esp, 0x8b29fcu); SPILL(); f_6cc347(); if (g_unwind) return; RELOAD();
/* 8b29fc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b29fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2a01: mov ecx, esi */
  ecx = esi;
/* 8b2a03: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8b2a06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2a06: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b2a09: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8b2a0c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8b2a0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2a0f: mov ecx, esi */
  ecx = esi;
/* 8b2a11: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x8b2a14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2a14: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8b2a17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2a18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2a19: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b2a1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2a1b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b2a1e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8b2a20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2a23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2a24: mov ecx, esi */
  ecx = esi;
/* 8b2a26: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x8b2a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2a29: mov eax, esi */
  eax = esi;
/* 8b2a2b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b2a2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b2a35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b2a36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2a37: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b2a38: mov esp, ebp */
  esp = ebp;
/* 8b2a3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b2a3b: ret  */
  esp += 4; SPILL(); return;
L_8b2a3c: /* 8b2a3c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8b2a3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b2a41: je 0x8b2a48 */
  if (zf) goto L_8b2a48;
L_8b2a43: /* 8b2a43: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b2a46: jmp 0x8b2a4a */
  goto L_8b2a4a;
L_8b2a48: /* 8b2a48: xor eax, eax */
  eax = 0;
L_8b2a4a: /* 8b2a4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2a4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2a4c: call 0x6cc347 */
  esp -= 4; W32(esp, 0x8b2a51u); SPILL(); f_6cc347(); if (g_unwind) return; RELOAD();
/* 8b2a51: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b2a54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2a57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b2a58: mov eax, esi */
  eax = esi;
/* 8b2a5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2a5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b2a62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b2a63: mov esp, ebp */
  esp = ebp;
/* 8b2a65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b2a66: ret  */
  esp += 4; SPILL(); return;
}

void f_8b2a67(void) {
  LOAD_REGS();
L_8b2a67: /* 8b2a67: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b2a6a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b2a6f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8b2a72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2a73: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8b2a76: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b2a7bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b2a7b(); return;
}

void f_8b2a7b(void) {
  LOAD_REGS();
L_8b2a7b: /* 8b2a7b: push 0xa1b958 */
  { uint32_t v = 0xa1b958u; esp -= 4; W32(esp, v); }
/* 8b2a80: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b2a85: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b2a8bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b2a8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2a8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b2a90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b2a92: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b2a97u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b2a97: guest_badaddr(0x8b2a97); return;
}

void f_8b2b20(void) {
  LOAD_REGS();
L_8b2b20: /* 8b2b20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2b21: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 8b2b25: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b2b27: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b2b28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2b29: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 8b2b2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b2b30: mov ebp, ecx */
  ebp = ecx;
/* 8b2b32: jge 0x8b2b48 */
  if ((sf == of)) goto L_8b2b48;
L_8b2b34: /* 8b2b34: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8b2b39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b2b3e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8b2b43: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2b45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2b45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b2b48: /* 8b2b48: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2b4b: jle 0x8b2b61 */
  if ((zf || sf != of)) goto L_8b2b61;
L_8b2b4d: /* 8b2b4d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b2b52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b2b57: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b2b5c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2b5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2b5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b2b61: /* 8b2b61: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8b2b65: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 8b2b68: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2b6b: jle 0x8b2b81 */
  if ((zf || sf != of)) goto L_8b2b81;
L_8b2b6d: /* 8b2b6d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b2b72: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b2b77: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b2b7c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b2b7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2b7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b2b81: /* 8b2b81: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2b83: jge 0x8b2ba0 */
  if ((sf == of)) goto L_8b2ba0;
L_8b2b85: /* 8b2b85: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 8b2b88: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8b2b8b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8b2b8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b2b90: /* 8b2b90: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8b2b93: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b2b95: call 0x6c584e */
  esp -= 4; W32(esp, 0x8b2b9au); SPILL(); f_6c584e(); if (g_unwind) return; RELOAD();
/* 8b2b9a: add esi, 0x60 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b2b9d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 8b2b9e: jne 0x8b2b90 */
  if (!zf) goto L_8b2b90;
L_8b2ba0: /* 8b2ba0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8b2ba4: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 8b2ba6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2ba7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2ba8: mov ecx, ebp */
  ecx = ebp;
/* 8b2baa: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b2bb0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b2bb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b2bb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2bb2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b2bb3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b2bb4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b2bf0(void) {
  LOAD_REGS();
L_8b2bf0: /* 8b2bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2bf1: mov esi, ecx */
  esi = ecx;
/* 8b2bf3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8b2bf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b2bf7: xor edi, edi */
  edi = 0;
/* 8b2bf9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b2bfb: jle 0x8b2c15 */
  if ((zf || sf != of)) goto L_8b2c15;
L_8b2bfd: /* 8b2bfd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2bfe: xor ebx, ebx */
  ebx = 0;
L_8b2c00: /* 8b2c00: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b2c02: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b2c04: call 0x6c584e */
  esp -= 4; W32(esp, 0x8b2c09u); SPILL(); f_6c584e(); if (g_unwind) return; RELOAD();
/* 8b2c09: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8b2c0c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b2c0d: add ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b2c10: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2c12: jl 0x8b2c00 */
  if ((sf != of)) goto L_8b2c00;
L_8b2c14: /* 8b2c14: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8b2c15: /* 8b2c15: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8b2c19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2c1a: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 8b2c1c: mov ecx, esi */
  ecx = esi;
/* 8b2c1e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b2c24u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b2c24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b2c25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2c26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b2c40(void) {
  LOAD_REGS();
L_8b2c40: /* 8b2c40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b2c41: mov ebp, esp */
  ebp = esp;
/* 8b2c43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b2c45: push 0x9d6a40 */
  { uint32_t v = 0x9d6a40u; esp -= 4; W32(esp, v); }
/* 8b2c4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b2c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2c51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b2c58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b2c5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2c5c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b2c5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2c60: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b2c63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b2c64: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b2c67: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b2c69: xor edi, edi */
  edi = 0;
/* 8b2c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2c6c: mov ecx, esi */
  ecx = esi;
/* 8b2c6e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8b2c71: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8b2c77u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8b2c77: mov ecx, ebx */
  ecx = ebx;
/* 8b2c79: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b2c7fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b2c7f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b2c81: je 0x8b2cf7 */
  if (zf) goto L_8b2cf7;
L_8b2c83: /* 8b2c83: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8b2c86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2c87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2c88: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b2c8eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b2c8e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b2c91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2c94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2c95: mov ecx, esi */
  ecx = esi;
/* 8b2c97: call 0x6c3a21 */
  esp -= 4; W32(esp, 0x8b2c9cu); SPILL(); f_6c3a21(); if (g_unwind) return; RELOAD();
/* 8b2c9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b2ca0: /* 8b2ca0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2ca3: jge 0x8b2d3b */
  if ((sf == of)) goto L_8b2d3b;
L_8b2ca9: /* 8b2ca9: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b2cab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b2cad: mov ecx, esi */
  ecx = esi;
/* 8b2caf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b2cb5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b2cb5: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8b2cb8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8b2cba: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8b2cbd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b2cbf: je 0x8b2ccc */
  if (zf) goto L_8b2ccc;
L_8b2cc1: /* 8b2cc1: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8b2cc4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b2ccau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b2cca: jmp 0x8b2cce */
  goto L_8b2cce;
L_8b2ccc: /* 8b2ccc: xor esi, esi */
  esi = 0;
L_8b2cce: /* 8b2cce: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8b2cd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2cd1: mov ecx, ebx */
  ecx = ebx;
/* 8b2cd3: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b2cd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2cd6: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8b2cd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2cda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2cdb: call 0x6c90c5 */
  esp -= 4; W32(esp, 0x8b2ce0u); SPILL(); f_6c90c5(); if (g_unwind) return; RELOAD();
/* 8b2ce0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2ce3: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b2ce6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2ce7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2ce8: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8b2ceeu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8b2cee: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b2cf1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2cf4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b2cf5: jmp 0x8b2ca0 */
  goto L_8b2ca0;
L_8b2cf7: /* 8b2cf7: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8b2cfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2cfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2cfc: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b2d02u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b2d02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b2d05: /* 8b2d05: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2d08: jge 0x8b2d3b */
  if ((sf == of)) goto L_8b2d3b;
L_8b2d0a: /* 8b2d0a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8b2d0c: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 8b2d0f: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8b2d12: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8b2d14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2d15: mov ecx, ebx */
  ecx = ebx;
/* 8b2d17: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b2d1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b2d1a: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8b2d1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2d1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2d1f: call 0x6c90c5 */
  esp -= 4; W32(esp, 0x8b2d24u); SPILL(); f_6c90c5(); if (g_unwind) return; RELOAD();
/* 8b2d24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2d27: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b2d2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2d2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2d2c: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8b2d32u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8b2d32: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b2d35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2d38: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b2d39: jmp 0x8b2d05 */
  goto L_8b2d05;
L_8b2d3b: /* 8b2d3b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b2d3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b2d3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2d40: mov eax, ebx */
  eax = ebx;
/* 8b2d42: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b2d49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b2d4a: mov esp, ebp */
  esp = ebp;
/* 8b2d4c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b2d4d: ret  */
  esp += 4; SPILL(); return;
}

void f_8b2d4e(void) {
  LOAD_REGS();
L_8b2d4e: /* 8b2d4e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b2d51: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b2d56: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8b2d59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2d5a: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8b2d5d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b2d62u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b2d62(); return;
}

void f_8b2d62(void) {
  LOAD_REGS();
L_8b2d62: /* 8b2d62: push 0xa1b978 */
  { uint32_t v = 0xa1b978u; esp -= 4; W32(esp, v); }
/* 8b2d67: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b2d6c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b2d72u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b2d72: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2d75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b2d77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b2d79: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b2d7eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b2d7e: guest_badaddr(0x8b2d7e); return;
}

void f_8b2dd0(void) {
  LOAD_REGS();
L_8b2dd0: /* 8b2dd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b2dd2: push 0x9d6a59 */
  { uint32_t v = 0x9d6a59u; esp -= 4; W32(esp, v); }
/* 8b2dd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b2ddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2dde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b2de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2de6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2de7: mov esi, ecx */
  esi = ecx;
/* 8b2de9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8b2ded: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8b2df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2df1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b2df3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b2dfb: call 0x6c3666 */
  esp -= 4; W32(esp, 0x8b2e00u); SPILL(); f_6c3666(); if (g_unwind) return; RELOAD();
/* 8b2e00: mov ecx, esi */
  ecx = esi;
/* 8b2e02: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8b2e0a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b2e10u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b2e10: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8b2e14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2e15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b2e1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2e1f: ret  */
  esp += 4; SPILL(); return;
}

void f_8b2e40(void) {
  LOAD_REGS();
L_8b2e40: /* 8b2e40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b2e41: mov ebp, esp */
  ebp = esp;
/* 8b2e43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b2e45: push 0x9d6a70 */
  { uint32_t v = 0x9d6a70u; esp -= 4; W32(esp, v); }
/* 8b2e4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b2e50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2e51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b2e58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b2e5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2e5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2e5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b2e60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b2e61: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8b2e64: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b2e67: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 8b2e69: xor ebx, ebx */
  ebx = 0;
/* 8b2e6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2e6c: mov ecx, edi */
  ecx = edi;
/* 8b2e6e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8b2e71: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8b2e77u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8b2e77: mov ecx, esi */
  ecx = esi;
/* 8b2e79: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b2e7fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b2e7f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b2e81: je 0x8b2ede */
  if (zf) goto L_8b2ede;
L_8b2e83: /* 8b2e83: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8b2e86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2e87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2e88: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b2e8eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b2e8e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b2e91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2e94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b2e95: mov ecx, edi */
  ecx = edi;
/* 8b2e97: call 0x6cc28e */
  esp -= 4; W32(esp, 0x8b2e9cu); SPILL(); f_6cc28e(); if (g_unwind) return; RELOAD();
/* 8b2e9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b2ea0: /* 8b2ea0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2ea3: jge 0x8b2f11 */
  if ((sf == of)) goto L_8b2f11;
L_8b2ea5: /* 8b2ea5: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 8b2ea7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b2ea9: mov ecx, edi */
  ecx = edi;
/* 8b2eab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b2eb1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b2eb1: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b2eb4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8b2eb6: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b2eb9: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ecx = r;
  }
/* 8b2ebb: je 0x8b2ecf */
  if (zf) goto L_8b2ecf;
L_8b2ebd: /* 8b2ebd: call 0x6c5420 */
  esp -= 4; W32(esp, 0x8b2ec2u); SPILL(); f_6c5420(); if (g_unwind) return; RELOAD();
/* 8b2ec2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2ec3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2ec4: call 0x6c5bf0 */
  esp -= 4; W32(esp, 0x8b2ec9u); SPILL(); f_6c5bf0(); if (g_unwind) return; RELOAD();
/* 8b2ec9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2ecc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b2ecd: jmp 0x8b2ea0 */
  goto L_8b2ea0;
L_8b2ecf: /* 8b2ecf: xor eax, eax */
  eax = 0;
/* 8b2ed1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2ed2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2ed3: call 0x6c5bf0 */
  esp -= 4; W32(esp, 0x8b2ed8u); SPILL(); f_6c5bf0(); if (g_unwind) return; RELOAD();
/* 8b2ed8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2edb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b2edc: jmp 0x8b2ea0 */
  goto L_8b2ea0;
L_8b2ede: /* 8b2ede: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8b2ee1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2ee2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2ee3: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b2ee9u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b2ee9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2eec: xor esi, esi */
  esi = 0;
/* 8b2eee: mov edi, edi */
  edi = edi;
L_8b2ef0: /* 8b2ef0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b2ef2: jge 0x8b2f0e */
  if ((sf == of)) goto L_8b2f0e;
L_8b2ef4: /* 8b2ef4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8b2ef6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b2ef9: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8b2efc: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8b2eff: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b2f01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2f02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b2f03: call 0x6c5bf0 */
  esp -= 4; W32(esp, 0x8b2f08u); SPILL(); f_6c5bf0(); if (g_unwind) return; RELOAD();
/* 8b2f08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2f0b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b2f0c: jmp 0x8b2ef0 */
  goto L_8b2ef0;
L_8b2f0e: /* 8b2f0e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8b2f11: /* 8b2f11: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b2f14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b2f15: mov eax, esi */
  eax = esi;
/* 8b2f17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2f18: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b2f1f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b2f20: mov esp, ebp */
  esp = ebp;
/* 8b2f22: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b2f23: ret  */
  esp += 4; SPILL(); return;
}

void f_8b2f24(void) {
  LOAD_REGS();
L_8b2f24: /* 8b2f24: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b2f27: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b2f2c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8b2f2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b2f30: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8b2f33: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b2f38u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b2f38(); return;
}

void f_8b2f38(void) {
  LOAD_REGS();
L_8b2f38: /* 8b2f38: push 0xa1b990 */
  { uint32_t v = 0xa1b990u; esp -= 4; W32(esp, v); }
/* 8b2f3d: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b2f42: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b2f48u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b2f48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b2f4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b2f4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b2f4f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b2f54u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b2f54: guest_badaddr(0x8b2f54); return;
}

void f_8b2fb0(void) {
  LOAD_REGS();
L_8b2fb0: /* 8b2fb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2fb1: mov esi, ecx */
  esi = ecx;
/* 8b2fb3: call 0x6ca1e6 */
  esp -= 4; W32(esp, 0x8b2fb8u); SPILL(); f_6ca1e6(); if (g_unwind) return; RELOAD();
/* 8b2fb8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b2fbd: je 0x8b2fcc */
  if (zf) goto L_8b2fcc;
L_8b2fbf: /* 8b2fbf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8b2fc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b2fc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b2fc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2fc9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8b2fccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b2fcc: /* 8b2fcc: mov eax, esi */
  eax = esi;
/* 8b2fce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b2fcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b2ff0(void) {
  LOAD_REGS();
L_8b2ff0: /* 8b2ff0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b2ff1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 8b2ff5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b2ff7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b2ff8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b2ff9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 8b2fff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b3000: mov ebp, ecx */
  ebp = ecx;
/* 8b3002: jge 0x8b3018 */
  if ((sf == of)) goto L_8b3018;
L_8b3004: /* 8b3004: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8b3009: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b300e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8b3013: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b3015u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b3015: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b3018: /* 8b3018: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b301b: jle 0x8b3031 */
  if ((zf || sf != of)) goto L_8b3031;
L_8b301d: /* 8b301d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b3022: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b3027: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b302c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b302eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b302e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b3031: /* 8b3031: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8b3035: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 8b3038: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b303b: jle 0x8b3051 */
  if ((zf || sf != of)) goto L_8b3051;
L_8b303d: /* 8b303d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b3042: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b3047: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b304c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b304eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b304e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b3051: /* 8b3051: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b3053: jge 0x8b3070 */
  if ((sf == of)) goto L_8b3070;
L_8b3055: /* 8b3055: mov esi, ebx */
  esi = ebx;
/* 8b3057: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 8b305a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8b305c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b3060: /* 8b3060: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8b3063: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b3065: call 0x6ca1e6 */
  esp -= 4; W32(esp, 0x8b306au); SPILL(); f_6ca1e6(); if (g_unwind) return; RELOAD();
/* 8b306a: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b306d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 8b306e: jne 0x8b3060 */
  if (!zf) goto L_8b3060;
L_8b3070: /* 8b3070: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8b3074: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8b3076: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3077: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b3078: mov ecx, ebp */
  ecx = ebp;
/* 8b307a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b3080u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b3080: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b3081: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b3082: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b3083: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b3084: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b30c0(void) {
  LOAD_REGS();
L_8b30c0: /* 8b30c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b30c1: mov esi, ecx */
  esi = ecx;
/* 8b30c3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8b30c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b30c7: xor edi, edi */
  edi = 0;
/* 8b30c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b30cb: jle 0x8b30e5 */
  if ((zf || sf != of)) goto L_8b30e5;
L_8b30cd: /* 8b30cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b30ce: xor ebx, ebx */
  ebx = 0;
L_8b30d0: /* 8b30d0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b30d2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b30d4: call 0x6ca1e6 */
  esp -= 4; W32(esp, 0x8b30d9u); SPILL(); f_6ca1e6(); if (g_unwind) return; RELOAD();
/* 8b30d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8b30dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b30dd: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b30e0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b30e2: jl 0x8b30d0 */
  if ((sf != of)) goto L_8b30d0;
L_8b30e4: /* 8b30e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8b30e5: /* 8b30e5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8b30e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b30ea: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8b30ec: mov ecx, esi */
  ecx = esi;
/* 8b30ee: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b30f4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b30f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b30f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b30f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b3110(void) {
  LOAD_REGS();
L_8b3110: /* 8b3110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b3112: push 0x9d6b2f */
  { uint32_t v = 0x9d6b2fu; esp -= 4; W32(esp, v); }
/* 8b3117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b311d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b311e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b3125: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b3128: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3129: mov esi, ecx */
  esi = ecx;
/* 8b312b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b312c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 8b3130: call 0x6cc93c */
  esp -= 4; W32(esp, 0x8b3135u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 8b3135: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 8b3138: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b3140: mov dword ptr [esi], 0xa06350 */
  W32((uint32_t)(esi), 0xa06350u);
/* 8b3146: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b314cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b314c: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 8b314f: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 8b3154: call 0x6c3030 */
  esp -= 4; W32(esp, 0x8b3159u); SPILL(); f_6c3030(); if (g_unwind) return; RELOAD();
/* 8b3159: lea edi, [esi + 0x7c] */
  edi = (uint32_t)(esi + 0x7cu);
/* 8b315c: mov ecx, edi */
  ecx = edi;
/* 8b315e: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 8b3163: call 0x6c1604 */
  esp -= 4; W32(esp, 0x8b3168u); SPILL(); f_6c1604(); if (g_unwind) return; RELOAD();
/* 8b3168: mov dword ptr [edi], 0x9f9478 */
  W32((uint32_t)(edi), 0x9f9478u);
/* 8b316e: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 8b3174: mov ecx, edi */
  ecx = edi;
/* 8b3176: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 8b317b: call 0x6c1604 */
  esp -= 4; W32(esp, 0x8b3180u); SPILL(); f_6c1604(); if (g_unwind) return; RELOAD();
/* 8b3180: mov dword ptr [edi], 0x9f9478 */
  W32((uint32_t)(edi), 0x9f9478u);
/* 8b3186: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 8b318c: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 8b3191: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b3197u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b3197: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 8b319d: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 8b31a2: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x8b31a7u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 8b31a7: lea ecx, [esi + 0xdc] */
  ecx = (uint32_t)(esi + 0xdcu);
/* 8b31ad: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 8b31b2: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x8b31b7u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 8b31b7: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 8b31bd: mov byte ptr [esp + 0x18], 7 */
  W8((uint32_t)(esp + 0x18u), 0x7u);
/* 8b31c2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b31c8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b31c8: lea edi, [esi + 0x108] */
  edi = (uint32_t)(esi + 0x108u);
/* 8b31ce: mov ecx, edi */
  ecx = edi;
/* 8b31d0: mov byte ptr [esp + 0x18], 8 */
  W8((uint32_t)(esp + 0x18u), 0x8u);
/* 8b31d5: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 8b31d9: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b31dfu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b31df: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 8b31e2: mov byte ptr [esp + 0x18], 9 */
  W8((uint32_t)(esp + 0x18u), 0x9u);
/* 8b31e7: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b31edu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b31ed: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8b31f2: lea ecx, [esi + 0x13c] */
  ecx = (uint32_t)(esi + 0x13cu);
/* 8b31f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b31fa: mov byte ptr [esp + 0x20], 0xa */
  W8((uint32_t)(esp + 0x20u), 0xau);
/* 8b31ff: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8b3205u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8b3205: mov dword ptr [esi + 0x134], 0 */
  W32((uint32_t)(esi + 0x134u), 0x0u);
/* 8b320f: mov dword ptr [esi + 0x138], 0 */
  W32((uint32_t)(esi + 0x138u), 0x0u);
/* 8b3219: mov dword ptr [esi + 0x130], 0x9f94d0 */
  W32((uint32_t)(esi + 0x130u), 0x9f94d0u);
/* 8b3223: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 8b3229: mov byte ptr [esp + 0x18], 0xb */
  W8((uint32_t)(esp + 0x18u), 0xbu);
/* 8b322e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b3234u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b3234: lea ecx, [esi + 0x16c] */
  ecx = (uint32_t)(esi + 0x16cu);
/* 8b323a: mov byte ptr [esp + 0x18], 0xc */
  W8((uint32_t)(esp + 0x18u), 0xcu);
/* 8b323f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b3245u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b3245: lea ecx, [esi + 0x178] */
  ecx = (uint32_t)(esi + 0x178u);
/* 8b324b: mov byte ptr [esp + 0x18], 0xd */
  W8((uint32_t)(esp + 0x18u), 0xdu);
/* 8b3250: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b3256u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b3256: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8b325a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b325b: mov eax, esi */
  eax = esi;
/* 8b325d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b325e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b3265: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3268: ret  */
  esp += 4; SPILL(); return;
}

void f_8b32d0(void) {
  LOAD_REGS();
L_8b32d0: /* 8b32d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b32d1: mov ebp, esp */
  ebp = esp;
/* 8b32d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b32d5: push 0x9d6b78 */
  { uint32_t v = 0x9d6b78u; esp -= 4; W32(esp, v); }
/* 8b32da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b32e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b32e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b32e8: sub esp, 0x14c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b32ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b32ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b32f0: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8b32f3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b32f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b32f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b32f9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b32fc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b3303: je 0x8b332e */
  if (zf) goto L_8b332e;
L_8b3305: /* 8b3305: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8b3307: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x8b330du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b330d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b330f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b3312: je 0x8b332e */
  if (zf) goto L_8b332e;
L_8b3314: /* 8b3314: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3316: je 0x8b332e */
  if (zf) goto L_8b332e;
L_8b3318: /* 8b3318: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 8b331d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8b3323u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8b3323: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3325: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b3328: je 0x8b332e */
  if (zf) goto L_8b332e;
L_8b332a: /* 8b332a: mov eax, ecx */
  eax = ecx;
/* 8b332c: jmp 0x8b3330 */
  goto L_8b3330;
L_8b332e: /* 8b332e: xor eax, eax */
  eax = 0;
L_8b3330: /* 8b3330: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3337: jne 0x8b3363 */
  if (!zf) goto L_8b3363;
L_8b3339: /* 8b3339: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b333b: je 0x8b3346 */
  if (zf) goto L_8b3346;
L_8b333d: /* 8b333d: test byte ptr [eax + 0x354], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x354u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3344: je 0x8b3363 */
  if (zf) goto L_8b3363;
L_8b3346: /* 8b3346: mov dword ptr [ecx + 0x27c], 0 */
  W32((uint32_t)(ecx + 0x27cu), 0x0u);
L_8b3350: /* 8b3350: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b3353: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b335a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b335b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b335c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b335d: mov esp, ebp */
  esp = ebp;
/* 8b335f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b3360: ret 8 */
  esp += 12; SPILL(); return;
L_8b3363: /* 8b3363: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 8b3369: test eax, 0x18000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b336e: jne 0x8b3350 */
  if (!zf) goto L_8b3350;
L_8b3370: /* 8b3370: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x8b3375u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 8b3375: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8b3378: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b337b: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b337e: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8b3381: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b3387u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b3387: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b338a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b338e: xor ecx, ecx */
  ecx = 0;
L_8b3390: /* 8b3390: cmp ecx, dword ptr [edx + 0xdc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b3396: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8b3399: jge 0x8b350c */
  if ((sf == of)) goto L_8b350c;
L_8b339f: /* 8b339f: mov eax, dword ptr [edx + 0xd8] */
  eax = R32((uint32_t)(edx + 0xd8u));
/* 8b33a5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8b33a8: mov esi, dword ptr [edx + 0xb4] */
  esi = R32((uint32_t)(edx + 0xb4u));
/* 8b33ae: mov esi, dword ptr [esi + 0x8c] */
  esi = R32((uint32_t)(esi + 0x8cu));
/* 8b33b4: mov esi, dword ptr [esi + 0xc0] */
  esi = R32((uint32_t)(esi + 0xc0u));
/* 8b33ba: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8b33bd: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 8b33c0: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8b33c3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8b33c6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b33c9: je 0x8b3506 */
  if (zf) goto L_8b3506;
L_8b33cf: /* 8b33cf: mov ebx, eax */
  ebx = eax;
L_8b33d1: /* 8b33d1: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8b33d7: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 8b33dd: mov ecx, dword ptr [eax + 0xcc] */
  ecx = R32((uint32_t)(eax + 0xccu));
/* 8b33e3: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 8b33e6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b33e8: je 0x8b3503 */
  if (zf) goto L_8b3503;
L_8b33ee: /* 8b33ee: test dword ptr [esi + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b33f8: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8b33fb: jne 0x8b34fd */
  if (!zf) goto L_8b34fd;
L_8b3401: /* 8b3401: mov al, byte ptr [esi + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x28u))) & 0xffu);
/* 8b3404: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3406: je 0x8b34fd */
  if (zf) goto L_8b34fd;
L_8b340c: /* 8b340c: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 8b3412: mov ecx, dword ptr [edx + 0x80] */
  ecx = R32((uint32_t)(edx + 0x80u));
/* 8b3418: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8b341a: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b341d: jne 0x8b34fd */
  if (!zf) goto L_8b34fd;
L_8b3423: /* 8b3423: test ah, 0xa */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3426: jne 0x8b34fd */
  if (!zf) goto L_8b34fd;
L_8b342c: /* 8b342c: xor edi, edi */
  edi = 0;
/* 8b342e: xor ecx, ecx */
  ecx = 0;
L_8b3430: /* 8b3430: cmp ecx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b3433: jge 0x8b3441 */
  if ((sf == of)) goto L_8b3441;
L_8b3435: /* 8b3435: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b3438: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8b343b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b343d: jne 0x8b3489 */
  if (!zf) goto L_8b3489;
L_8b343f: /* 8b343f: mov edi, eax */
  edi = eax;
L_8b3441: /* 8b3441: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3443: jne 0x8b34fd */
  if (!zf) goto L_8b34fd;
L_8b3449: /* 8b3449: cmp byte ptr [esi + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8b344d: jne 0x8b348c */
  if (!zf) goto L_8b348c;
L_8b344f: /* 8b344f: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 8b3455: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3456: call 0x6c76c1 */
  esp -= 4; W32(esp, 0x8b345bu); SPILL(); f_6c76c1(); if (g_unwind) return; RELOAD();
/* 8b345b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b345e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3460: jne 0x8b3474 */
  if (!zf) goto L_8b3474;
L_8b3462: /* 8b3462: movzx edx, byte ptr [esi + 0xc8] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xc8u)));
/* 8b3469: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b346c: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b346e: jne 0x8b34fa */
  if (!zf) goto L_8b34fa;
L_8b3474: /* 8b3474: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b3477: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3478: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b347b: call 0x6c94da */
  esp -= 4; W32(esp, 0x8b3480u); SPILL(); f_6c94da(); if (g_unwind) return; RELOAD();
/* 8b3480: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b3483: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b3484: jmp 0x8b33d1 */
  goto L_8b33d1;
L_8b3489: /* 8b3489: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8b348a: jmp 0x8b3430 */
  goto L_8b3430;
L_8b348c: /* 8b348c: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8b3492: mov edi, dword ptr [ebp - 0x70] */
  edi = R32((uint32_t)(ebp + 0xffffff90u));
/* 8b3495: fsub dword ptr [edi + 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xb0u)));
/* 8b349b: mov ecx, esi */
  ecx = esi;
/* 8b349d: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8b34a3: fsub dword ptr [edi + 0xac] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xacu)));
/* 8b34a9: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8b34af: fsub dword ptr [edi + 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xa8u)));
/* 8b34b5: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8b34b8: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8b34bb: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8b34be: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b34c0: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8b34c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b34c6: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8b34c9: fadd dword ptr [edi + 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xb4u)));
/* 8b34cf: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8b34d2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8b34d5: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8b34dbu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8b34db: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b34de: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8b34e1: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8b34e4: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 8b34e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b34e9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b34ec: jne 0x8b34fa */
  if (!zf) goto L_8b34fa;
L_8b34ee: /* 8b34ee: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8b34f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b34f2: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b34f5: call 0x6c94da */
  esp -= 4; W32(esp, 0x8b34fau); SPILL(); f_6c94da(); if (g_unwind) return; RELOAD();
L_8b34fa: /* 8b34fa: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_8b34fd: /* 8b34fd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b34fe: jmp 0x8b33d1 */
  goto L_8b33d1;
L_8b3503: /* 8b3503: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
L_8b3506: /* 8b3506: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8b3507: jmp 0x8b3390 */
  goto L_8b3390;
L_8b350c: /* 8b350c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8b350f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3511: je 0x8b356d */
  if (zf) goto L_8b356d;
L_8b3513: /* 8b3513: test byte ptr [edx + 0x80], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x80u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b351a: jne 0x8b356d */
  if (!zf) goto L_8b356d;
L_8b351c: /* 8b351c: mov eax, dword ptr [edx + 0x27c] */
  eax = R32((uint32_t)(edx + 0x27cu));
/* 8b3522: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3524: je 0x8b356d */
  if (zf) goto L_8b356d;
L_8b3526: /* 8b3526: xor esi, esi */
  esi = 0;
/* 8b3528: jmp 0x8b3530 */
  goto L_8b3530;
L_8b3530: /* 8b3530: mov eax, dword ptr [edx + 0x27c] */
  eax = R32((uint32_t)(edx + 0x27cu));
/* 8b3536: cmp esi, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b3539: jge 0x8b355f */
  if ((sf == of)) goto L_8b355f;
L_8b353b: /* 8b353b: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* 8b353e: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* 8b3541: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8b3544: mov eax, dword ptr [edi + eax*4] */
  eax = R32((uint32_t)(edi + eax*4));
/* 8b3547: test byte ptr [eax + 0x80], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b354e: je 0x8b355c */
  if (zf) goto L_8b355c;
L_8b3550: /* 8b3550: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b3552: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3553: call 0x6c4dd1 */
  esp -= 4; W32(esp, 0x8b3558u); SPILL(); f_6c4dd1(); if (g_unwind) return; RELOAD();
/* 8b3558: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b355b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8b355c: /* 8b355c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b355d: jmp 0x8b3530 */
  goto L_8b3530;
L_8b355f: /* 8b355f: mov edx, dword ptr [edx + 0x27c] */
  edx = R32((uint32_t)(edx + 0x27cu));
/* 8b3565: inc dword ptr [edx + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + 0x4cu), r);
  }
/* 8b3568: jmp 0x8b35e4 */
  goto L_8b35e4;
L_8b356d: /* 8b356d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b356f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8b3572: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8b3578u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8b3578: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b357b: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8b3581u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8b3581: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8b3587: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b3589: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b358c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b358e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b3590: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3591: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b3593: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b3595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3596: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3597: push 0xce7468 */
  { uint32_t v = 0xce7468u; esp -= 4; W32(esp, v); }
/* 8b359c: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x8b35a2u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 8b35a2: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b35a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b35a7: je 0x8b35b2 */
  if (zf) goto L_8b35b2;
L_8b35a9: /* 8b35a9: mov ecx, eax */
  ecx = eax;
/* 8b35ab: call 0x6ca93e */
  esp -= 4; W32(esp, 0x8b35b0u); SPILL(); f_6ca93e(); if (g_unwind) return; RELOAD();
/* 8b35b0: jmp 0x8b35b4 */
  goto L_8b35b4;
L_8b35b2: /* 8b35b2: xor eax, eax */
  eax = 0;
L_8b35b4: /* 8b35b4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b35b7: mov dword ptr [edx + 0x27c], eax */
  W32((uint32_t)(edx + 0x27cu), eax);
/* 8b35bd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b35c0: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* 8b35c3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b35c6: mov ecx, dword ptr [ecx + 0x27c] */
  ecx = R32((uint32_t)(ecx + 0x27cu));
/* 8b35cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b35cd: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b35d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b35d2: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8b35d8u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8b35d8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b35db: mov eax, dword ptr [edx + 0x27c] */
  eax = R32((uint32_t)(edx + 0x27cu));
/* 8b35e1: inc dword ptr [eax + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x4cu), r);
  }
L_8b35e4: /* 8b35e4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b35e7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b35ea: xor edx, edx */
  edx = 0;
/* 8b35ec: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8b35ef: nop  */
L_8b35f0: /* 8b35f0: cmp edx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b35f3: jge 0x8b3bc5 */
  if ((sf == of)) goto L_8b3bc5;
L_8b35f9: /* 8b35f9: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b35fc: mov edi, dword ptr [esi + edx*4] */
  edi = R32((uint32_t)(esi + edx*4));
/* 8b35ff: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b3602: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3604: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8b3607: je 0x8b361f */
  if (zf) goto L_8b361f;
L_8b3609: /* 8b3609: test byte ptr [ecx + 0x80], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3610: jne 0x8b361f */
  if (!zf) goto L_8b361f;
L_8b3612: /* 8b3612: test byte ptr [edi + 0x80], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x80u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3619: je 0x8b3bb9 */
  if (zf) goto L_8b3bb9;
L_8b361f: /* 8b361f: mov esi, dword ptr [ecx + 0x27c] */
  esi = R32((uint32_t)(ecx + 0x27cu));
/* 8b3625: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b3627: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b362a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b362c: mov ecx, esi */
  ecx = esi;
/* 8b362e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b3634u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b3634: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b3636: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8b3639: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8b363c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b363e: je 0x8b3654 */
  if (zf) goto L_8b3654;
L_8b3640: /* 8b3640: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8b3643: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b3649u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b3649: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8b364b: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 8b3652: jmp 0x8b3656 */
  goto L_8b3656;
L_8b3654: /* 8b3654: xor esi, esi */
  esi = 0;
L_8b3656: /* 8b3656: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b3659: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8b365c: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b365f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8b3660: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8b3663: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b3665: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b3667: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8b366a: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 8b366d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b366e: mov ecx, ebx */
  ecx = ebx;
/* 8b3670: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b3676u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b3676: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 8b3678: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b367a: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8b367d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b367e: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 8b3684: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 8b3688: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8b368eu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8b368e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b3690: mov al, byte ptr [ecx + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x29u))) & 0xffu);
/* 8b3693: xor edx, edx */
  edx = 0;
/* 8b3695: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3697: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8b369a: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8b36a1: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
L_8b36a4: /* 8b36a4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b36a7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b36aa: cmp ecx, dword ptr [eax + 0x68] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b36ad: jge 0x8b3bb6 */
  if ((sf == of)) goto L_8b3bb6;
L_8b36b3: /* 8b36b3: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 8b36b6: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8b36b9: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b36bc: fld dword ptr [eax + ecx + 8] */
  { double v = F32((uint32_t)(eax + ecx + 0x8u)); FPUSH(v); }
/* 8b36c0: mov edx, dword ptr [eax + ecx] */
  edx = R32((uint32_t)(eax + ecx));
/* 8b36c3: fld dword ptr [eax + ecx + 4] */
  { double v = F32((uint32_t)(eax + ecx + 0x4u)); FPUSH(v); }
/* 8b36c7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b36c9: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 8b36cf: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 8b36d5: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 8b36db: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 8b36e1: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 8b36eb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8b36ee: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b36f1: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8b36f4: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 8b36f7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b36f9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b36fb: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b36fd: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b3700: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b3702: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b3705: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b3707: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b370a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b370d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b3710: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b3713: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b3716: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b3719: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b371c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b371f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b3722: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3724: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b3726: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b3728: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b372a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b372c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b372f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b3732: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b3735: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b3738: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b373b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b373e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b3741: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b3744: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3746: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b3748: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b374a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b374c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b374e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b3751: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b3754: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b3757: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b375a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b375d: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b3760: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b3763: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b3766: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3768: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b376a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b376c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b376e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b3770: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3772: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b3774: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b3776: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b3779: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b377c: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b377f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b3782: mov eax, dword ptr [edx + 0x64] */
  eax = R32((uint32_t)(edx + 0x64u));
/* 8b3785: fld dword ptr [eax + ecx + 0x14] */
  { double v = F32((uint32_t)(eax + ecx + 0x14u)); FPUSH(v); }
/* 8b3789: lea eax, [eax + ecx + 0xc] */
  eax = (uint32_t)(eax + ecx + 0xcu);
/* 8b378d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8b3790: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b3792: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 8b3798: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 8b379e: mov dword ptr [ebp - 0xc4], ecx */
  W32((uint32_t)(ebp + 0xffffff3cu), ecx);
/* 8b37a4: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 8b37aa: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 8b37b4: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8b37b7: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b37ba: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8b37bd: lea edi, [ebp - 0xb4] */
  edi = (uint32_t)(ebp + 0xffffff4cu);
/* 8b37c3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b37c5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b37c7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b37c9: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b37cc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b37ce: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b37d1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b37d3: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b37d6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b37d9: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b37dc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b37df: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b37e2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b37e5: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b37e8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b37eb: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b37ee: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b37f0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b37f2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b37f4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b37f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b37f8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b37fb: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b37fe: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b3801: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b3804: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b3807: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b380a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b380d: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b3810: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3812: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b3814: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b3816: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b3818: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b381a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b381d: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b3820: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b3823: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b3826: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b3829: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b382c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b382f: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b3832: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3834: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b3836: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b3838: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b383a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b383c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b383e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b3840: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b3842: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b3845: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b3848: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b384b: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 8b3851: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 8b3857: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 8b385d: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 8b3863: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8b3866: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 8b386c: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 8b3872: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3873: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8b3879: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 8b387f: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 8b3885: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8b388bu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8b388b: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b388e: xor edi, edi */
  edi = 0;
/* 8b3890: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3892: jne 0x8b38e4 */
  if (!zf) goto L_8b38e4;
L_8b3894: /* 8b3894: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b3897: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8b389d: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8b38a0: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8b38a6: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8b38a9: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8b38af: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8b38b2: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8b38b5: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8b38b7: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8b38ba: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8b38bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b38be: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b38c0: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8b38c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b38c5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b38cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b38cd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b38cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b38d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b38d4: jp 0x8b391a */
  if (pf) goto L_8b391a;
L_8b38d6: /* 8b38d6: mov dl, byte ptr [ebp - 0x11] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b38d9: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b38db: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* 8b38dd: and al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b38df: jmp 0x8b3b9b */
  goto L_8b3b9b;
L_8b38e4: /* 8b38e4: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8b38e7: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 8b38ea: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b38ed: fmul dword ptr [ebp - 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8b38f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b38f2: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8b38f5: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8b38f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b38fa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b3900: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b3902: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3905: jne 0x8b3917 */
  if (!zf) goto L_8b3917;
L_8b3907: /* 8b3907: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b390a: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b390c: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 8b390e: and cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b3910: mov byte ptr [ebx], cl */
  W8((uint32_t)(ebx), (ecx & 0xffu));
/* 8b3912: jmp 0x8b3b9d */
  goto L_8b3b9d;
L_8b3917: /* 8b3917: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
L_8b391a: /* 8b391a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b391d: mov edx, dword ptr [eax + 0x84] */
  edx = R32((uint32_t)(eax + 0x84u));
/* 8b3923: test dh, dh */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8b3925: js 0x8b3941 */
  if (sf) goto L_8b3941;
L_8b3927: /* 8b3927: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3929: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b392b: je 0x8b3937 */
  if (zf) goto L_8b3937;
L_8b392d: /* 8b392d: mov cl, byte ptr [ebp - 0x11] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b3930: or al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b3932: jmp 0x8b3b9b */
  goto L_8b3b9b;
L_8b3937: /* 8b3937: mov dl, byte ptr [ebp - 0x11] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b393a: or al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b393c: jmp 0x8b3b9b */
  goto L_8b3b9b;
L_8b3941: /* 8b3941: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3943: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 8b3949: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 8b394f: mov dword ptr [ebp - 0x11c], 0 */
  W32((uint32_t)(ebp + 0xfffffee4u), 0x0u);
/* 8b3959: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 8b3963: mov dword ptr [ebp - 0x114], 0 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x0u);
/* 8b396d: mov dword ptr [ebp - 0x110], 0 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x0u);
/* 8b3977: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 8b3981: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 8b398b: mov dword ptr [ebp - 0x104], edi */
  W32((uint32_t)(ebp + 0xfffffefcu), edi);
/* 8b3991: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
/* 8b399b: mov dword ptr [ebp - 0xfc], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff04u), 0xffffffffu);
/* 8b39a5: mov dword ptr [ebp - 0xf8], edi */
  W32((uint32_t)(ebp + 0xffffff08u), edi);
/* 8b39ab: je 0x8b3aab */
  if (zf) goto L_8b3aab;
L_8b39b1: /* 8b39b1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8b39b4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b39b7: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b39bd: mov edx, esp */
  edx = esp;
/* 8b39bf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b39c2: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 8b39c9: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b39cf: mov esi, dword ptr [ebp - 0x80] */
  esi = R32((uint32_t)(ebp + 0xffffff80u));
/* 8b39d2: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8b39d4: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 8b39db: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b39de: mov esi, dword ptr [ebp - 0x7c] */
  esi = R32((uint32_t)(ebp + 0xffffff84u));
/* 8b39e1: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8b39e4: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8b39e7: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b39ed: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 8b39f4: mov esi, dword ptr [ebp - 0x78] */
  esi = R32((uint32_t)(ebp + 0xffffff88u));
/* 8b39f7: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8b39fa: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 8b3a00: push 0x197 */
  { uint32_t v = 0x197u; esp -= 4; W32(esp, v); }
/* 8b3a05: lea edx, [ebp - 0xf4] */
  edx = (uint32_t)(ebp + 0xffffff0cu);
/* 8b3a0b: fsubr dword ptr [ebp - 0x3c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffc4u))) - ST0;
/* 8b3a0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3a0f: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8b3a12: lea edx, [ebp - 0xdc] */
  edx = (uint32_t)(ebp + 0xffffff24u);
/* 8b3a18: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b3a1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3a1c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8b3a1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b3a20: fsub dword ptr [ebp - 0x140] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffec0u)));
/* 8b3a26: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* 8b3a2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3a2d: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 8b3a33: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8b3a39: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8b3a3f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8b3a42: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 8b3a48: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b3a4b: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 8b3a51: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b3a54: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8b3a57: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 8b3a5d: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 8b3a63: fsubr dword ptr [ebp - 0x3c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffc4u))) - ST0;
/* 8b3a66: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8b3a69: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b3a6c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8b3a6f: fsub dword ptr [ebp - 0x14c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffeb4u)));
/* 8b3a75: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8b3a7b: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8b3a81: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 8b3a87: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8b3a8d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8b3a8f: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8b3a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b3a95: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3a97: je 0x8b3b92 */
  if (zf) goto L_8b3b92;
L_8b3a9d: /* 8b3a9d: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b3a9f: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b3aa2: or cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b3aa4: mov byte ptr [ebx], cl */
  W8((uint32_t)(ebx), (ecx & 0xffu));
/* 8b3aa6: jmp 0x8b3b9d */
  goto L_8b3b9d;
L_8b3aab: /* 8b3aab: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8b3ab1: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b3ab7: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8b3aba: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8b3ac0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b3ac3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3ac4: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8b3ac7: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 8b3acd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b3acf: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 8b3ad6: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8b3ad9: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 8b3ae0: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8b3ae7: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8b3aed: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 8b3af3: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 8b3af9: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8b3affu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8b3aff: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8b3b02: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b3b05: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b3b0b: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 8b3b0e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8b3b11: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b3b14: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b3b1a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b3b1d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8b3b1f: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b3b25: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8b3b2b: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8b3b2e: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8b3b31: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b3b34: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8b3b37: fadd dword ptr [ebp - 0x134] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffeccu)));
/* 8b3b3d: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8b3b43: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 8b3b49: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8b3b4f: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8b3b55: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8b3b57: mov edx, esp */
  edx = esp;
/* 8b3b59: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8b3b5b: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 8b3b5e: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 8b3b61: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8b3b64: push 0x197 */
  { uint32_t v = 0x197u; esp -= 4; W32(esp, v); }
/* 8b3b69: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8b3b6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3b6d: lea edx, [ebp - 0xd0] */
  edx = (uint32_t)(ebp + 0xffffff30u);
/* 8b3b73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3b74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b3b76: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* 8b3b7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3b7d: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8b3b83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b3b83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3b85: je 0x8b3b92 */
  if (zf) goto L_8b3b92;
L_8b3b87: /* 8b3b87: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b3b89: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b3b8c: or cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b3b8e: mov byte ptr [ebx], cl */
  W8((uint32_t)(ebx), (ecx & 0xffu));
/* 8b3b90: jmp 0x8b3b9d */
  goto L_8b3b9d;
L_8b3b92: /* 8b3b92: mov cl, byte ptr [ebp - 0x11] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b3b95: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b3b97: not cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(~(ecx & 0xffu)) & 0xffu);
/* 8b3b99: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_8b3b9b: /* 8b3b9b: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
L_8b3b9d: /* 8b3b9d: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b3ba0: shl al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b3ba2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3ba4: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 8b3ba7: jne 0x8b3bae */
  if (!zf) goto L_8b3bae;
L_8b3ba9: /* 8b3ba9: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 8b3bad: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_8b3bae: /* 8b3bae: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8b3bb1: jmp 0x8b36a4 */
  goto L_8b36a4;
L_8b3bb6: /* 8b3bb6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_8b3bb9: /* 8b3bb9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b3bbc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8b3bbd: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8b3bc0: jmp 0x8b35f0 */
  goto L_8b35f0;
L_8b3bc5: /* 8b3bc5: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8b3bc8: mov ecx, dword ptr [ecx + 0x27c] */
  ecx = R32((uint32_t)(ecx + 0x27cu));
/* 8b3bce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3bcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3bd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3bd1: call 0x6cac72 */
  esp -= 4; W32(esp, 0x8b3bd6u); SPILL(); f_6cac72(); if (g_unwind) return; RELOAD();
/* 8b3bd6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b3bd9: and dword ptr [eax + 0x80], 0xffffffdf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 8b3be0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3be3: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b3be6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b3bea: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x8b3befu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 8b3bef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b3bf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b3bf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b3bf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b3bfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b3bfc: mov esp, ebp */
  esp = ebp;
/* 8b3bfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b3bff: ret 8 */
  esp += 12; SPILL(); return;
}
