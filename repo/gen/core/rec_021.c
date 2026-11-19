#include "recomp.h"
#include "rec_mod.h"

void f_54d340(void) {
  LOAD_REGS();
L_54d340: /* 54d340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54d341: mov ebp, esp */
  ebp = esp;
/* 54d343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54d345: push 0x559a20 */
  { uint32_t v = 0x559a20u; esp -= 4; W32(esp, v); }
/* 54d34a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54d350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54d358: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54d35b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54d35c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d35d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d35e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54d361: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54d364: mov esi, ecx */
  esi = ecx;
/* 54d366: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d367: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54d36a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54d371: call 0x4e12fd */
  esp -= 4; W32(esp, 0x54d376u); SPILL(); f_4e12fd(); if (g_unwind) return; RELOAD();
/* 54d376: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54d378: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 54d37b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d37c: mov ecx, edi */
  ecx = edi;
/* 54d37e: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54d381u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d381: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 54d383: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54d386: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d387: mov ecx, eax */
  ecx = eax;
/* 54d389: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x54d38cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d38c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54d38f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d390: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d391: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54d398: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54d399: mov esp, ebp */
  esp = ebp;
/* 54d39b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d39c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54d39f(void) {
  LOAD_REGS();
L_54d39f: /* 54d39f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54d3a2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54d3a7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54d3aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d3ab: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54d3ae: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d3b3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54d3b3(); return;
}

void f_54d3b3(void) {
  LOAD_REGS();
L_54d3b3: /* 54d3b3: push 0x56fd4c */
  { uint32_t v = 0x56fd4cu; esp -= 4; W32(esp, v); }
/* 54d3b8: push 0x5ade2c */
  { uint32_t v = 0x5ade2cu; esp -= 4; W32(esp, v); }
/* 54d3bd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d3c2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d3c2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54d3c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d3c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d3ca: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54d3cfu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54d3cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d3d0: push 0x5ade34 */
  { uint32_t v = 0x5ade34u; esp -= 4; W32(esp, v); }
/* 54d3d5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d3dau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d3da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d3dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d3df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d3e1: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d3e6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54d3e6: guest_badaddr(0x54d3e6); return;
}

void f_54d420(void) {
  LOAD_REGS();
L_54d420: /* 54d420: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54d421: mov ebp, esp */
  ebp = esp;
/* 54d423: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54d425: push 0x559a30 */
  { uint32_t v = 0x559a30u; esp -= 4; W32(esp, v); }
/* 54d42a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54d430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d431: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54d438: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54d43b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54d43c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d43d: mov esi, ecx */
  esi = ecx;
/* 54d43f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54d442: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 54d445: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54d447: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d448: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54d44b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d44c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54d44f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54d456: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x54d459u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d459: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54d45c: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 54d45f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54d462: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 54d465: jne 0x54d46b */
  if (!zf) goto L_54d46b;
L_54d467: /* 54d467: mov edi, eax */
  edi = eax;
/* 54d469: jmp 0x54d47a */
  goto L_54d47a;
L_54d46b: /* 54d46b: xor ecx, ecx */
  ecx = 0;
/* 54d46d: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54d470: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 54d473: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 54d474: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 54d477: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54d478: mov edi, ecx */
  edi = ecx;
L_54d47a: /* 54d47a: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54d47d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54d47f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x54d482u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d482: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54d485: lea eax, [eax + edi - 1] */
  eax = (uint32_t)(eax + edi + 0xffffffffu);
/* 54d489: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 54d48a: not edi */
  edi = ~edi;
/* 54d48c: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54d48e: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54d491: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 54d494: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d496: je 0x54d4a8 */
  if (zf) goto L_54d4a8;
L_54d498: /* 54d498: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 54d49b: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54d49e: jne 0x54d4a8 */
  if (!zf) goto L_54d4a8;
L_54d4a0: /* 54d4a0: or eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 54d4a5: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
L_54d4a8: /* 54d4a8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54d4ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d4ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d4ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54d4b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54d4b5: mov esp, ebp */
  esp = ebp;
/* 54d4b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d4b8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54d4bb(void) {
  LOAD_REGS();
L_54d4bb: /* 54d4bb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54d4be: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54d4c3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 54d4c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d4c7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 54d4ca: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d4cfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54d4cf(); return;
}

void f_54d4cf(void) {
  LOAD_REGS();
L_54d4cf: /* 54d4cf: push 0x56fd88 */
  { uint32_t v = 0x56fd88u; esp -= 4; W32(esp, v); }
/* 54d4d4: push 0x5adec0 */
  { uint32_t v = 0x5adec0u; esp -= 4; W32(esp, v); }
/* 54d4d9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d4deu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d4de: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54d4e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d4e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d4e6: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54d4ebu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54d4eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d4ec: push 0x5adec8 */
  { uint32_t v = 0x5adec8u; esp -= 4; W32(esp, v); }
/* 54d4f1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d4f6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d4f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d4f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d4fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d4fd: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d502u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54d502: guest_badaddr(0x54d502); return;
}

void f_54d550(void) {
  LOAD_REGS();
L_54d550: /* 54d550: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54d551: mov ebp, esp */
  ebp = esp;
/* 54d553: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54d555: push 0x559a40 */
  { uint32_t v = 0x559a40u; esp -= 4; W32(esp, v); }
/* 54d55a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54d560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d561: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54d568: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54d56b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54d56c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d56d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d56e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54d571: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54d574: mov esi, ecx */
  esi = ecx;
/* 54d576: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d577: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54d57a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54d581: call 0x4e12fd */
  esp -= 4; W32(esp, 0x54d586u); SPILL(); f_4e12fd(); if (g_unwind) return; RELOAD();
/* 54d586: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54d588: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54d58b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d58c: mov ecx, edi */
  ecx = edi;
/* 54d58e: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54d591u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d591: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54d594: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d595: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d596: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54d59d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54d59e: mov esp, ebp */
  esp = ebp;
/* 54d5a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d5a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54d5a4(void) {
  LOAD_REGS();
L_54d5a4: /* 54d5a4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54d5a7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54d5ac: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54d5af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d5b0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54d5b3: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d5b8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54d5b8(); return;
}

void f_54d5b8(void) {
  LOAD_REGS();
L_54d5b8: /* 54d5b8: push 0x56fdbc */
  { uint32_t v = 0x56fdbcu; esp -= 4; W32(esp, v); }
/* 54d5bd: push 0x5aded4 */
  { uint32_t v = 0x5aded4u; esp -= 4; W32(esp, v); }
/* 54d5c2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d5c7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d5c7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54d5ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d5cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d5cf: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54d5d4u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54d5d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d5d5: push 0x5adedc */
  { uint32_t v = 0x5adedcu; esp -= 4; W32(esp, v); }
/* 54d5da: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d5dfu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d5df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d5e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d5e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d5e6: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d5ebu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54d5eb: guest_badaddr(0x54d5eb); return;
}

void f_54d620(void) {
  LOAD_REGS();
L_54d620: /* 54d620: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 54d624: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 54d62a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 54d62d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54d62f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d630: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d631: jle 0x54d64a */
  if ((zf || sf != of)) goto L_54d64a;
L_54d633: /* 54d633: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_54d637: /* 54d637: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 54d639: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 54d63b: mov edi, dword ptr [edi + edx*4] */
  edi = R32((uint32_t)(edi + edx*4));
/* 54d63e: cmp edi, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54d640: je 0x54d651 */
  if (zf) goto L_54d651;
L_54d642: /* 54d642: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 54d643: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 54d645: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54d648: jl 0x54d637 */
  if ((sf != of)) goto L_54d637;
L_54d64a: /* 54d64a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d64b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d64c: xor eax, eax */
  eax = 0;
/* 54d64e: ret 8 */
  esp += 12; SPILL(); return;
L_54d651: /* 54d651: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d652: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d653: mov eax, 1 */
  eax = 0x1u;
/* 54d658: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54d670(void) {
  LOAD_REGS();
L_54d670: /* 54d670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d671: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 54d675: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d677: je 0x54d699 */
  if (zf) goto L_54d699;
L_54d679: /* 54d679: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 54d67c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d67e: je 0x54d68e */
  if (zf) goto L_54d68e;
L_54d680: /* 54d680: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54d685: je 0x54d6c6 */
  if (zf) goto L_54d6c6;
L_54d687: /* 54d687: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54d68a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d68c: jne 0x54d680 */
  if (!zf) goto L_54d680;
L_54d68e: /* 54d68e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d690: mov ecx, esi */
  ecx = esi;
/* 54d692: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54d697u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54d697: jmp 0x54d69e */
  goto L_54d69e;
L_54d699: /* 54d699: mov eax, 0x5ae2c8 */
  eax = 0x5ae2c8u;
L_54d69e: /* 54d69e: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54d6a4: mov ecx, dword ptr [0x5f0da0] */
  ecx = R32((uint32_t)(0x5f0da0u));
/* 54d6aa: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 54d6ad: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 54d6b3: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54d6b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d6b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d6b8: push 0x5ae2d4 */
  { uint32_t v = 0x5ae2d4u; esp -= 4; W32(esp, v); }
/* 54d6bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d6be: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54d6c3u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54d6c3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54d6c6: /* 54d6c6: mov eax, esi */
  eax = esi;
/* 54d6c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d6c9: ret  */
  esp += 4; SPILL(); return;
}

void f_54d6f0(void) {
  LOAD_REGS();
L_54d6f0: /* 54d6f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54d6f1: mov ebp, esp */
  ebp = esp;
/* 54d6f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54d6f5: push 0x559a50 */
  { uint32_t v = 0x559a50u; esp -= 4; W32(esp, v); }
/* 54d6fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54d700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54d708: sub esp, 0xb0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54d70e: mov ax, word ptr [0x6a46e0] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x6a46e0u))) & 0xffffu);
/* 54d714: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54d715: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d716: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d717: mov word ptr [ebp - 0xbc], ax */
  W16((uint32_t)(ebp + 0xffffff44u), (eax & 0xffffu));
/* 54d71e: mov esi, ecx */
  esi = ecx;
/* 54d720: xor eax, eax */
  eax = 0;
/* 54d722: mov ecx, 0x27 */
  ecx = 0x27u;
/* 54d727: lea edi, [ebp - 0xba] */
  edi = (uint32_t)(ebp + 0xffffff46u);
/* 54d72d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 54d72f: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 54d731: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 54d734: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d736: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54d739: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 54d73c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54d743: je 0x54d771 */
  if (zf) goto L_54d771;
L_54d745: /* 54d745: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
L_54d748: /* 54d748: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d74a: je 0x54d771 */
  if (zf) goto L_54d771;
L_54d74c: /* 54d74c: cmp eax, 0x6a6610 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a6610u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54d751: je 0x54d758 */
  if (zf) goto L_54d758;
L_54d753: /* 54d753: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54d756: jmp 0x54d748 */
  goto L_54d748;
L_54d758: /* 54d758: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 54d75b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54d75e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54d761: jne 0x54d774 */
  if (!zf) goto L_54d774;
L_54d763: /* 54d763: push 0x5ad418 */
  { uint32_t v = 0x5ad418u; esp -= 4; W32(esp, v); }
/* 54d768: mov ecx, edi */
  ecx = edi;
/* 54d76a: call 0x4e35da */
  esp -= 4; W32(esp, 0x54d76fu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54d76f: jmp 0x54d774 */
  goto L_54d774;
L_54d771: /* 54d771: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_54d774: /* 54d774: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 54d777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d779: jne 0x54d78b */
  if (!zf) goto L_54d78b;
L_54d77b: /* 54d77b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 54d77e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d780: jne 0x54d78b */
  if (!zf) goto L_54d78b;
L_54d782: /* 54d782: xor eax, eax */
  eax = 0;
/* 54d784: mov ebx, 1 */
  ebx = 0x1u;
/* 54d789: jmp 0x54d792 */
  goto L_54d792;
L_54d78b: /* 54d78b: mov ebx, 1 */
  ebx = 0x1u;
/* 54d790: mov eax, ebx */
  eax = ebx;
L_54d792: /* 54d792: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54d794: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d795: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d796: mov ecx, esi */
  ecx = esi;
/* 54d798: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x54d79eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d79e: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 54d7a1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54d7a3: je 0x54d7ba */
  if (zf) goto L_54d7ba;
L_54d7a5: /* 54d7a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d7a6: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 54d7ac: push 0x5ad428 */
  { uint32_t v = 0x5ad428u; esp -= 4; W32(esp, v); }
/* 54d7b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d7b2: call 0x4e4183 */
  esp -= 4; W32(esp, 0x54d7b7u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 54d7b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54d7ba: /* 54d7ba: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 54d7bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_54d7c0: /* 54d7c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d7c2: je 0x54d869 */
  if (zf) goto L_54d869;
L_54d7c8: /* 54d7c8: cmp eax, 0x6a5150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54d7cd: je 0x54d7d4 */
  if (zf) goto L_54d7d4;
L_54d7cf: /* 54d7cf: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54d7d2: jmp 0x54d7c0 */
  goto L_54d7c0;
L_54d7d4: /* 54d7d4: cmp dword ptr [esi + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54d7d7: jne 0x54d81e */
  if (!zf) goto L_54d81e;
L_54d7d9: /* 54d7d9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54d7dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d7de: jne 0x54d81e */
  if (!zf) goto L_54d81e;
L_54d7e0: /* 54d7e0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 54d7e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d7e5: jne 0x54d825 */
  if (!zf) goto L_54d825;
L_54d7e7: /* 54d7e7: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 54d7ea: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 54d7ef: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 54d7f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d7f6: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 54d7f9: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54d7fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d7fd: push 0x5ad434 */
  { uint32_t v = 0x5ad434u; esp -= 4; W32(esp, v); }
L_54d802: /* 54d802: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d803: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54d808u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54d808: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d80b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54d80e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54d815: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d816: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d817: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54d818: mov esp, ebp */
  esp = ebp;
/* 54d81a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d81b: ret 0x14 */
  esp += 24; SPILL(); return;
L_54d81e: /* 54d81e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 54d821: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d823: je 0x54d84b */
  if (zf) goto L_54d84b;
L_54d825: /* 54d825: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 54d828: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54d82b: je 0x54d84b */
  if (zf) goto L_54d84b;
L_54d82d: /* 54d82d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 54d830: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54d836: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 54d83c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d83d: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54d840: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54d843: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d844: push 0x5ad444 */
  { uint32_t v = 0x5ad444u; esp -= 4; W32(esp, v); }
/* 54d849: jmp 0x54d802 */
  goto L_54d802;
L_54d84b: /* 54d84b: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 54d84e: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54d854: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 54d85a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d85b: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 54d85e: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54d861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d862: push 0x5ad454 */
  { uint32_t v = 0x5ad454u; esp -= 4; W32(esp, v); }
/* 54d867: jmp 0x54d802 */
  goto L_54d802;
L_54d869: /* 54d869: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 54d86c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_54d870: /* 54d870: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d872: je 0x54d968 */
  if (zf) goto L_54d968;
L_54d878: /* 54d878: cmp eax, 0x6a6610 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a6610u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54d87d: je 0x54d884 */
  if (zf) goto L_54d884;
L_54d87f: /* 54d87f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54d882: jmp 0x54d870 */
  goto L_54d870;
L_54d884: /* 54d884: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 54d887: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d889: je 0x54d8e8 */
  if (zf) goto L_54d8e8;
L_54d88b: /* 54d88b: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 54d88e: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54d894: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 54d897: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54d899: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 54d89c: jle 0x54d8c3 */
  if ((zf || sf != of)) goto L_54d8c3;
L_54d89e: /* 54d89e: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54d8a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d8a2: push 0x5ad460 */
  { uint32_t v = 0x5ad460u; esp -= 4; W32(esp, v); }
/* 54d8a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d8a8: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54d8adu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54d8ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d8b0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54d8b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54d8ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d8bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d8bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54d8bd: mov esp, ebp */
  esp = ebp;
/* 54d8bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d8c0: ret 0x14 */
  esp += 24; SPILL(); return;
L_54d8c3: /* 54d8c3: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54d8c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d8c7: push 0x5ad46c */
  { uint32_t v = 0x5ad46cu; esp -= 4; W32(esp, v); }
/* 54d8cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d8cd: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54d8d2u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54d8d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d8d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54d8d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54d8df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d8e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d8e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54d8e2: mov esp, ebp */
  esp = ebp;
/* 54d8e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d8e5: ret 0x14 */
  esp += 24; SPILL(); return;
L_54d8e8: /* 54d8e8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54d8eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d8ed: je 0x54d920 */
  if (zf) goto L_54d920;
L_54d8ef: /* 54d8ef: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 54d8f2: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54d8f8: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 54d8fb: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54d8fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d8ff: push 0x5ad478 */
  { uint32_t v = 0x5ad478u; esp -= 4; W32(esp, v); }
/* 54d904: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d905: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54d90au); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54d90a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d90d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54d910: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54d917: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d918: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d919: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54d91a: mov esp, ebp */
  esp = ebp;
/* 54d91c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d91d: ret 0x14 */
  esp += 24; SPILL(); return;
L_54d920: /* 54d920: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 54d923: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d925: je 0x54d947 */
  if (zf) goto L_54d947;
L_54d927: /* 54d927: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 54d92a: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 54d92f: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 54d935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d936: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 54d939: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54d93c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d93d: push 0x5ad480 */
  { uint32_t v = 0x5ad480u; esp -= 4; W32(esp, v); }
/* 54d942: jmp 0x54d802 */
  goto L_54d802;
L_54d947: /* 54d947: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 54d94a: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54d950: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 54d956: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d957: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54d95a: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54d95d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d95e: push 0x5ad48c */
  { uint32_t v = 0x5ad48cu; esp -= 4; W32(esp, v); }
/* 54d963: jmp 0x54d802 */
  goto L_54d802;
L_54d968: /* 54d968: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 54d96b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d96d: je 0x54d9ce */
  if (zf) goto L_54d9ce;
L_54d96f: /* 54d96f: cmp dword ptr [esi + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54d972: jle 0x54d9a5 */
  if ((zf || sf != of)) goto L_54d9a5;
L_54d974: /* 54d974: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 54d977: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54d97d: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54d980: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54d983: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d984: push 0x5ad4a4 */
  { uint32_t v = 0x5ad4a4u; esp -= 4; W32(esp, v); }
/* 54d989: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d98a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54d98fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54d98f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54d992: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d995: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d996: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d997: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54d99e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54d99f: mov esp, ebp */
  esp = ebp;
/* 54d9a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d9a2: ret 0x14 */
  esp += 24; SPILL(); return;
L_54d9a5: /* 54d9a5: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 54d9a8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54d9ab: je 0x54d9ce */
  if (zf) goto L_54d9ce;
L_54d9ad: /* 54d9ad: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 54d9b0: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54d9b6: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 54d9bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d9bd: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 54d9c0: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54d9c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d9c4: push 0x5ad4b0 */
  { uint32_t v = 0x5ad4b0u; esp -= 4; W32(esp, v); }
/* 54d9c9: jmp 0x54d802 */
  goto L_54d802;
L_54d9ce: /* 54d9ce: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 54d9d1: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 54d9d6: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 54d9dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d9dd: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 54d9e0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54d9e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d9e4: push 0x5ad4c0 */
  { uint32_t v = 0x5ad4c0u; esp -= 4; W32(esp, v); }
/* 54d9e9: jmp 0x54d802 */
  goto L_54d802;
}

void f_54d9ee(void) {
  LOAD_REGS();
L_54d9ee: /* 54d9ee: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54d9f1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54d9f6: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 54d9f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d9fa: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 54d9fd: call 0x554df6 */
  esp -= 4; W32(esp, 0x54da02u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54da02(); return;
}

void f_54da02(void) {
  LOAD_REGS();
L_54da02: /* 54da02: push 0x56fdfc */
  { uint32_t v = 0x56fdfcu; esp -= 4; W32(esp, v); }
/* 54da07: push 0x5ad4cc */
  { uint32_t v = 0x5ad4ccu; esp -= 4; W32(esp, v); }
/* 54da0c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54da11u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54da11: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54da14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54da17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54da19: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54da1eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54da1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54da1f: push 0x5ad4d4 */
  { uint32_t v = 0x5ad4d4u; esp -= 4; W32(esp, v); }
/* 54da24: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54da29u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54da29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54da2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54da2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54da30: call 0x554df6 */
  esp -= 4; W32(esp, 0x54da35u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54da35: guest_badaddr(0x54da35); return;
}

void f_54db20(void) {
  LOAD_REGS();
L_54db20: /* 54db20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54db21: mov ebp, esp */
  ebp = esp;
/* 54db23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54db25: push 0x559a60 */
  { uint32_t v = 0x559a60u; esp -= 4; W32(esp, v); }
/* 54db2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54db30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54db31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54db38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54db3b: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 54db3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54db40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54db41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54db42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54db43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54db46: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54db49: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54db50: je 0x54db9d */
  if (zf) goto L_54db9d;
L_54db52: /* 54db52: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54db55: movzx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(R8((uint32_t)(ecx)));
/* 54db58: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 54db5b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54db5d: jge 0x54db73 */
  if ((sf == of)) goto L_54db73;
L_54db5f: /* 54db5f: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 54db62: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 54db65: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54db6b: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 54db6e: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54db71: jmp 0x54db78 */
  goto L_54db78;
L_54db73: /* 54db73: mov eax, 0x5ad550 */
  eax = 0x5ad550u;
L_54db78: /* 54db78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54db79: push 0x5ad564 */
  { uint32_t v = 0x5ad564u; esp -= 4; W32(esp, v); }
L_54db7e: /* 54db7e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 54db81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54db82: call 0x4e4183 */
  esp -= 4; W32(esp, 0x54db87u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 54db87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54db8a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54db8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54db8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54db8f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54db96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54db97: mov esp, ebp */
  esp = ebp;
/* 54db99: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54db9a: ret 0x10 */
  esp += 20; SPILL(); return;
L_54db9d: /* 54db9d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54dba0: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 54dba3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54dba4: push 0x5ad56c */
  { uint32_t v = 0x5ad56cu; esp -= 4; W32(esp, v); }
/* 54dba9: jmp 0x54db7e */
  goto L_54db7e;
}

void f_54dbab(void) {
  LOAD_REGS();
L_54dbab: /* 54dbab: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54dbae: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54dbb3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54dbb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54dbb7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54dbba: call 0x554df6 */
  esp -= 4; W32(esp, 0x54dbbfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54dbbf(); return;
}

void f_54dbbf(void) {
  LOAD_REGS();
L_54dbbf: /* 54dbbf: push 0x56fe30 */
  { uint32_t v = 0x56fe30u; esp -= 4; W32(esp, v); }
/* 54dbc4: push 0x5ad574 */
  { uint32_t v = 0x5ad574u; esp -= 4; W32(esp, v); }
/* 54dbc9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54dbceu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54dbce: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54dbd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54dbd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54dbd6: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54dbdbu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54dbdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54dbdc: push 0x5ad57c */
  { uint32_t v = 0x5ad57cu; esp -= 4; W32(esp, v); }
/* 54dbe1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54dbe6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54dbe6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54dbe9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54dbeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54dbed: call 0x554df6 */
  esp -= 4; W32(esp, 0x54dbf2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54dbf2: guest_badaddr(0x54dbf2); return;
}

void f_54dc40(void) {
  LOAD_REGS();
L_54dc40: /* 54dc40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54dc41: mov ebp, esp */
  ebp = esp;
/* 54dc43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54dc45: push 0x559a70 */
  { uint32_t v = 0x559a70u; esp -= 4; W32(esp, v); }
/* 54dc4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54dc50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54dc51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54dc58: sub esp, 0x814 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x814u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54dc5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54dc5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54dc60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54dc61: mov edi, ecx */
  edi = ecx;
/* 54dc63: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 54dc66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54dc68: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54dc6b: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 54dc6e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54dc75: je 0x54dcee */
  if (zf) goto L_54dcee;
L_54dc77: /* 54dc77: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54dc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54dc7c: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 54dc81: lea eax, [ebp - 0x820] */
  eax = (uint32_t)(ebp + 0xfffff7e0u);
/* 54dc87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54dc88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54dc89: call 0x4e230b */
  esp -= 4; W32(esp, 0x54dc8eu); SPILL(); f_4e230b(); if (g_unwind) return; RELOAD();
/* 54dc8e: mov esi, eax */
  esi = eax;
/* 54dc90: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54dc93: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54dc95: je 0x54dd6b */
  if (zf) goto L_54dd6b;
L_54dc9b: /* 54dc9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54dc9d: lea edx, [ebp - 0x820] */
  edx = (uint32_t)(ebp + 0xfffff7e0u);
/* 54dca3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54dca4: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 54dca7: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x54dcacu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 54dcac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54dcaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54dcb1: je 0x54dcf1 */
  if (zf) goto L_54dcf1;
L_54dcb3: /* 54dcb3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 54dcb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54dcb7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 54dcba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54dcbb: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 54dcbe: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54dcc1: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 54dcc8: call 0x4e273e */
  esp -= 4; W32(esp, 0x54dccdu); SPILL(); f_4e273e(); if (g_unwind) return; RELOAD();
/* 54dccd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54dccf: je 0x54dcf1 */
  if (zf) goto L_54dcf1;
L_54dcd1: /* 54dcd1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 54dcd4: mov al, byte ptr [ebp - 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffecu))) & 0xffu);
/* 54dcd7: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
L_54dcd9: /* 54dcd9: mov eax, esi */
  eax = esi;
/* 54dcdb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54dcde: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54dce5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54dce6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54dce7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54dce8: mov esp, ebp */
  esp = ebp;
/* 54dcea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54dceb: ret 0xc */
  esp += 16; SPILL(); return;
L_54dcee: /* 54dcee: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_54dcf1: /* 54dcf1: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 54dcf4: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 54dcf8: jb 0x54dd6b */
  if (cf) goto L_54dd6b;
L_54dcfa: /* 54dcfa: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 54dcfe: ja 0x54dd6b */
  if ((!cf && !zf)) goto L_54dd6b;
L_54dd00: /* 54dd00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54dd01: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x54dd06u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 54dd06: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54dd09: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54dd0c: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 54dd0e: mov edi, edi */
  edi = edi;
L_54dd10: /* 54dd10: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 54dd13: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 54dd17: jb 0x54dcd9 */
  if (cf) goto L_54dcd9;
L_54dd19: /* 54dd19: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 54dd1d: ja 0x54dcd9 */
  if ((!cf && !zf)) goto L_54dcd9;
L_54dd1f: /* 54dd1f: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54dd22: jmp 0x54dd10 */
  goto L_54dd10;
L_54dd6b: /* 54dd6b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54dd6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54dd6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54dd70: xor eax, eax */
  eax = 0;
/* 54dd72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54dd79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54dd7a: mov esp, ebp */
  esp = ebp;
/* 54dd7c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54dd7d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54dd24(void) {
  LOAD_REGS();
L_54dd24: /* 54dd24: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54dd27: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54dd2c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 54dd2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54dd30: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54dd33: call 0x554df6 */
  esp -= 4; W32(esp, 0x54dd38u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54dd38(); return;
}

void f_54dd38(void) {
  LOAD_REGS();
L_54dd38: /* 54dd38: push 0x56fe78 */
  { uint32_t v = 0x56fe78u; esp -= 4; W32(esp, v); }
/* 54dd3d: push 0x5ad588 */
  { uint32_t v = 0x5ad588u; esp -= 4; W32(esp, v); }
/* 54dd42: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54dd47u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54dd47: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54dd4a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54dd4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54dd4f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54dd54u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54dd54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54dd55: push 0x5ad590 */
  { uint32_t v = 0x5ad590u; esp -= 4; W32(esp, v); }
/* 54dd5a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54dd5fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54dd5f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54dd62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54dd64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54dd66: call 0x554df6 */
  esp -= 4; W32(esp, 0x54dd6bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 54dd6b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54dd6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54dd6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54dd70: xor eax, eax */
  eax = 0;
/* 54dd72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54dd79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54dd7a: mov esp, ebp */
  esp = ebp;
/* 54dd7c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54dd7d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54ddd0(void) {
  LOAD_REGS();
L_54ddd0: /* 54ddd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54ddd1: mov ebp, esp */
  ebp = esp;
/* 54ddd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54ddd5: push 0x559a80 */
  { uint32_t v = 0x559a80u; esp -= 4; W32(esp, v); }
/* 54ddda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54dde0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54dde1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54dde8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54ddeb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54ddee: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 54ddf1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54ddf3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ddf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ddf5: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54ddf8: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54ddfe: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 54de01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54de02: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54de05: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54de08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54de09: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 54de0c: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 54de0f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54de12: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54de15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54de16: push 0x5ad67c */
  { uint32_t v = 0x5ad67cu; esp -= 4; W32(esp, v); }
/* 54de1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54de1c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54de23: call 0x4e4183 */
  esp -= 4; W32(esp, 0x54de28u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 54de28: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54de2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54de2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54de2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54de30: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54de37: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54de38: mov esp, ebp */
  esp = ebp;
/* 54de3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54de3b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_54de3e(void) {
  LOAD_REGS();
L_54de3e: /* 54de3e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54de41: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54de46: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 54de49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54de4a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 54de4d: call 0x554df6 */
  esp -= 4; W32(esp, 0x54de52u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54de52(); return;
}

void f_54de52(void) {
  LOAD_REGS();
L_54de52: /* 54de52: push 0x56feb8 */
  { uint32_t v = 0x56feb8u; esp -= 4; W32(esp, v); }
/* 54de57: push 0x5ad688 */
  { uint32_t v = 0x5ad688u; esp -= 4; W32(esp, v); }
/* 54de5c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54de61u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54de61: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54de64: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54de67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54de69: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54de6eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54de6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54de6f: push 0x5ad690 */
  { uint32_t v = 0x5ad690u; esp -= 4; W32(esp, v); }
/* 54de74: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54de79u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54de79: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54de7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54de7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54de80: call 0x554df6 */
  esp -= 4; W32(esp, 0x54de85u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54de85: guest_badaddr(0x54de85); return;
}

void f_54dec0(void) {
  LOAD_REGS();
L_54dec0: /* 54dec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54dec1: mov ebp, esp */
  ebp = esp;
/* 54dec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54dec5: push 0x559a90 */
  { uint32_t v = 0x559a90u; esp -= 4; W32(esp, v); }
/* 54deca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54ded0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ded1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54ded8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54dedb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54dede: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54dedf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54dee0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54dee3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 54dee5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54dee7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54dee8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54deeb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54def2: je 0x54df34 */
  if (zf) goto L_54df34;
L_54def4: /* 54def4: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 54def7: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 54defa: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 54deff: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 54df02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54df04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54df06: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54df09: call 0x4e2cde */
  esp -= 4; W32(esp, 0x54df0eu); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 54df0e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54df11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54df12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54df13: push 0x5ad93c */
  { uint32_t v = 0x5ad93cu; esp -= 4; W32(esp, v); }
/* 54df18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54df19: call 0x4e4183 */
  esp -= 4; W32(esp, 0x54df1eu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 54df1e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54df21: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54df24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54df2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54df2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54df2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54df2e: mov esp, ebp */
  esp = ebp;
/* 54df30: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54df31: ret 0x10 */
  esp += 20; SPILL(); return;
L_54df34: /* 54df34: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 54df37: push 0x5ad94c */
  { uint32_t v = 0x5ad94cu; esp -= 4; W32(esp, v); }
/* 54df3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54df3d: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x54df42u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 54df42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54df45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54df48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54df49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54df4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54df51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54df52: mov esp, ebp */
  esp = ebp;
/* 54df54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54df55: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_54df58(void) {
  LOAD_REGS();
L_54df58: /* 54df58: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54df5b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54df60: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54df63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54df64: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54df67: call 0x554df6 */
  esp -= 4; W32(esp, 0x54df6cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54df6c(); return;
}

void f_54df6c(void) {
  LOAD_REGS();
L_54df6c: /* 54df6c: push 0x56ff10 */
  { uint32_t v = 0x56ff10u; esp -= 4; W32(esp, v); }
/* 54df71: push 0x5ad958 */
  { uint32_t v = 0x5ad958u; esp -= 4; W32(esp, v); }
/* 54df76: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54df7bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54df7b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54df7e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54df81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54df83: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54df88u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54df88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54df89: push 0x5ad960 */
  { uint32_t v = 0x5ad960u; esp -= 4; W32(esp, v); }
/* 54df8e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54df93u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54df93: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54df96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54df98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54df9a: call 0x554df6 */
  esp -= 4; W32(esp, 0x54df9fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54df9f: guest_badaddr(0x54df9f); return;
}

void f_54dfe0(void) {
  LOAD_REGS();
L_54dfe0: /* 54dfe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54dfe1: mov ebp, esp */
  ebp = esp;
/* 54dfe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54dfe5: push 0x559aa0 */
  { uint32_t v = 0x559aa0u; esp -= 4; W32(esp, v); }
/* 54dfea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54dff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54dff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54dff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54dff9: mov eax, 0x100c */
  eax = 0x100cu;
/* 54dffe: call 0x554f80 */
  esp -= 4; W32(esp, 0x54e003u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 54e003: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54e004: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e005: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e006: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54e009: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54e00c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54e00e: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 54e013: lea eax, [ebp - 0x81c] */
  eax = (uint32_t)(ebp + 0xfffff7e4u);
/* 54e019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e01a: mov ebx, ecx */
  ebx = ecx;
/* 54e01c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e01d: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 54e020: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54e027: call 0x4e230b */
  esp -= 4; W32(esp, 0x54e02cu); SPILL(); f_4e230b(); if (g_unwind) return; RELOAD();
/* 54e02c: mov esi, eax */
  esi = eax;
/* 54e02e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e031: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e033: je 0x54e0d1 */
  if (zf) goto L_54e0d1;
L_54e039: /* 54e039: lea ecx, [ebp - 0x81c] */
  ecx = (uint32_t)(ebp + 0xfffff7e4u);
/* 54e03f: push 0x5ad96c */
  { uint32_t v = 0x5ad96cu; esp -= 4; W32(esp, v); }
/* 54e044: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e045: call 0x4e26df */
  esp -= 4; W32(esp, 0x54e04au); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 54e04a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e04d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e04f: jne 0x54e070 */
  if (!zf) { SPILL(); f_54e070(); return; }
L_54e051: /* 54e051: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 54e054: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 54e056: mov eax, esi */
  eax = esi;
/* 54e058: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e05b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e062: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e063: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e064: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e065: mov esp, ebp */
  esp = ebp;
/* 54e067: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e068: ret 0xc */
  esp += 16; SPILL(); return;
L_54e0d1: /* 54e0d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e0d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e0d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e0d6: xor eax, eax */
  eax = 0;
/* 54e0d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e0df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e0e0: mov esp, ebp */
  esp = ebp;
/* 54e0e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e0e3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54e06b(void) {
  LOAD_REGS();
L_54e06b: /* 54e06b: jmp 0x54e070 */
  SPILL(); f_54e070(); return;
}

void f_54e06d(void) {
  LOAD_REGS();
L_54e06d: /* 54e06d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
  SPILL(); f_54e070(); return;
}

void f_54e070(void) {
  LOAD_REGS();
  goto L_54e070;
L_54e056: /* 54e056: mov eax, esi */
  eax = esi;
/* 54e058: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e05b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e062: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e063: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e064: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e065: mov esp, ebp */
  esp = ebp;
/* 54e067: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e068: ret 0xc */
  esp += 16; SPILL(); return;
L_54e070: /* 54e070: cmp word ptr [esi], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54e074: jne 0x54e07b */
  if (!zf) goto L_54e07b;
L_54e076: /* 54e076: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54e079: jmp 0x54e070 */
  goto L_54e070;
L_54e07b: /* 54e07b: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 54e07e: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54e081: cmp ax, 0x27 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54e085: je 0x54e0e6 */
  if (zf) goto L_54e0e6;
L_54e087: /* 54e087: mov edx, dword ptr [ebx + 0x6c] */
  edx = R32((uint32_t)(ebx + 0x6cu));
/* 54e08a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e08c: lea ecx, [ebp - 0x81c] */
  ecx = (uint32_t)(ebp + 0xfffff7e4u);
/* 54e092: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e095: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e096: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x54e09bu); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 54e09b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54e09e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e0a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e0a3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 54e0a5: jne 0x54e056 */
  if (!zf) goto L_54e056;
L_54e0a7: /* 54e0a7: test byte ptr [ebp + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e0ab: je 0x54e0d1 */
  if (zf) goto L_54e0d1;
L_54e0ad: /* 54e0ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e0af: mov ecx, ebx */
  ecx = ebx;
/* 54e0b1: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e0b6u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e0b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e0b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e0b8: push 0x5ad978 */
  { uint32_t v = 0x5ad978u; esp -= 4; W32(esp, v); }
L_54e0bd: /* 54e0bd: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54e0c3: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54e0c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e0c9: call 0x4e30df */
  esp -= 4; W32(esp, 0x54e0ceu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54e0ce: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54e0d1: /* 54e0d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e0d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e0d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e0d6: xor eax, eax */
  eax = 0;
/* 54e0d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e0df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e0e0: mov esp, ebp */
  esp = ebp;
/* 54e0e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e0e3: ret 0xc */
  esp += 16; SPILL(); return;
L_54e0e6: /* 54e0e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54e0e8: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 54e0ed: lea eax, [ebp - 0x101c] */
  eax = (uint32_t)(ebp + 0xffffefe4u);
/* 54e0f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e0f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e0f5: call 0x4e230b */
  esp -= 4; W32(esp, 0x54e0fau); SPILL(); f_4e230b(); if (g_unwind) return; RELOAD();
/* 54e0fa: mov esi, eax */
  esi = eax;
/* 54e0fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e0ff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e101: je 0x54e0d1 */
  if (zf) goto L_54e0d1;
L_54e103: /* 54e103: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 54e106: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54e109: cmp cx, 0x27 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x27u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54e10d: jne 0x54e0d1 */
  if (!zf) goto L_54e0d1;
L_54e10f: /* 54e10f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e111: lea edx, [ebp - 0x81c] */
  edx = (uint32_t)(ebp + 0xfffff7e4u);
/* 54e117: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e118: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e11a: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 54e11f: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x54e124u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 54e124: mov edi, eax */
  edi = eax;
/* 54e126: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e129: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e12b: jne 0x54e14a */
  if (!zf) goto L_54e14a;
L_54e12d: /* 54e12d: test byte ptr [ebp + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e131: je 0x54e0d1 */
  if (zf) goto L_54e0d1;
L_54e133: /* 54e133: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e134: mov ecx, ebx */
  ecx = ebx;
/* 54e136: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e13bu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e13b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54e13e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e13f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e140: push 0x5ad9bc */
  { uint32_t v = 0x5ad9bcu; esp -= 4; W32(esp, v); }
/* 54e145: jmp 0x54e0bd */
  goto L_54e0bd;
L_54e14a: /* 54e14a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e14c: lea eax, [ebp - 0x101c] */
  eax = (uint32_t)(ebp + 0xffffefe4u);
/* 54e152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e155: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e156: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x54e15bu); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 54e15b: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 54e15e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e163: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 54e165: jne 0x54e182 */
  if (!zf) goto L_54e182;
L_54e167: /* 54e167: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e168: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 54e16a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e16b: lea ecx, [ebp - 0x101c] */
  ecx = (uint32_t)(ebp + 0xffffefe4u);
/* 54e171: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e173: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e174: call 0x4e302b */
  esp -= 4; W32(esp, 0x54e179u); SPILL(); f_4e302b(); if (g_unwind) return; RELOAD();
/* 54e179: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e17c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e17e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 54e180: je 0x54e1cc */
  if (zf) goto L_54e1cc;
L_54e182: /* 54e182: test byte ptr [ebp + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e186: je 0x54e1c3 */
  if (zf) goto L_54e1c3;
L_54e188: /* 54e188: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 54e18b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 54e18d: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 54e190: mov ecx, dword ptr [edx + 0x24] */
  ecx = R32((uint32_t)(edx + 0x24u));
/* 54e193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e194: call 0x4e20e5 */
  esp -= 4; W32(esp, 0x54e199u); SPILL(); f_4e20e5(); if (g_unwind) return; RELOAD();
/* 54e199: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e19b: jne 0x54e1c3 */
  if (!zf) goto L_54e1c3;
L_54e19d: /* 54e19d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e19e: mov ecx, edi */
  ecx = edi;
/* 54e1a0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e1a5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e1a5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54e1a8: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54e1ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e1af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e1b0: push 0x5ad9f4 */
  { uint32_t v = 0x5ad9f4u; esp -= 4; W32(esp, v); }
/* 54e1b5: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54e1ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e1bb: call 0x4e30df */
  esp -= 4; W32(esp, 0x54e1c0u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54e1c0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54e1c3: /* 54e1c3: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54e1c6: jne 0x54e056 */
  if (!zf) goto L_54e056;
L_54e1cc: /* 54e1cc: test byte ptr [ebp + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e1d0: je 0x54e0d1 */
  if (zf) goto L_54e0d1;
L_54e1d6: /* 54e1d6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54e1d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e1db: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e1e0u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e1e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54e1e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e1e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e1e5: push 0x5ada20 */
  { uint32_t v = 0x5ada20u; esp -= 4; W32(esp, v); }
/* 54e1ea: jmp 0x54e0bd */
  goto L_54e0bd;
}

void f_54e0e6(void) {
  LOAD_REGS();
  goto L_54e0e6;
L_54e056: /* 54e056: mov eax, esi */
  eax = esi;
/* 54e058: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e05b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e062: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e063: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e064: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e065: mov esp, ebp */
  esp = ebp;
/* 54e067: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e068: ret 0xc */
  esp += 16; SPILL(); return;
L_54e0bd: /* 54e0bd: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54e0c3: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54e0c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e0c9: call 0x4e30df */
  esp -= 4; W32(esp, 0x54e0ceu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54e0ce: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54e0d1: /* 54e0d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e0d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e0d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e0d6: xor eax, eax */
  eax = 0;
/* 54e0d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e0df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e0e0: mov esp, ebp */
  esp = ebp;
/* 54e0e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e0e3: ret 0xc */
  esp += 16; SPILL(); return;
L_54e0e6: /* 54e0e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54e0e8: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 54e0ed: lea eax, [ebp - 0x101c] */
  eax = (uint32_t)(ebp + 0xffffefe4u);
/* 54e0f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e0f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e0f5: call 0x4e230b */
  esp -= 4; W32(esp, 0x54e0fau); SPILL(); f_4e230b(); if (g_unwind) return; RELOAD();
/* 54e0fa: mov esi, eax */
  esi = eax;
/* 54e0fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e0ff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e101: je 0x54e0d1 */
  if (zf) goto L_54e0d1;
L_54e103: /* 54e103: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 54e106: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54e109: cmp cx, 0x27 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x27u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54e10d: jne 0x54e0d1 */
  if (!zf) goto L_54e0d1;
L_54e10f: /* 54e10f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e111: lea edx, [ebp - 0x81c] */
  edx = (uint32_t)(ebp + 0xfffff7e4u);
/* 54e117: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e118: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e11a: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 54e11f: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x54e124u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 54e124: mov edi, eax */
  edi = eax;
/* 54e126: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e129: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e12b: jne 0x54e14a */
  if (!zf) goto L_54e14a;
L_54e12d: /* 54e12d: test byte ptr [ebp + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e131: je 0x54e0d1 */
  if (zf) goto L_54e0d1;
L_54e133: /* 54e133: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e134: mov ecx, ebx */
  ecx = ebx;
/* 54e136: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e13bu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e13b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54e13e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e13f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e140: push 0x5ad9bc */
  { uint32_t v = 0x5ad9bcu; esp -= 4; W32(esp, v); }
/* 54e145: jmp 0x54e0bd */
  goto L_54e0bd;
L_54e14a: /* 54e14a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e14c: lea eax, [ebp - 0x101c] */
  eax = (uint32_t)(ebp + 0xffffefe4u);
/* 54e152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e155: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e156: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x54e15bu); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 54e15b: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 54e15e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e163: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 54e165: jne 0x54e182 */
  if (!zf) goto L_54e182;
L_54e167: /* 54e167: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e168: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 54e16a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e16b: lea ecx, [ebp - 0x101c] */
  ecx = (uint32_t)(ebp + 0xffffefe4u);
/* 54e171: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e173: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e174: call 0x4e302b */
  esp -= 4; W32(esp, 0x54e179u); SPILL(); f_4e302b(); if (g_unwind) return; RELOAD();
/* 54e179: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e17c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e17e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 54e180: je 0x54e1cc */
  if (zf) goto L_54e1cc;
L_54e182: /* 54e182: test byte ptr [ebp + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e186: je 0x54e1c3 */
  if (zf) goto L_54e1c3;
L_54e188: /* 54e188: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 54e18b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 54e18d: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 54e190: mov ecx, dword ptr [edx + 0x24] */
  ecx = R32((uint32_t)(edx + 0x24u));
/* 54e193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e194: call 0x4e20e5 */
  esp -= 4; W32(esp, 0x54e199u); SPILL(); f_4e20e5(); if (g_unwind) return; RELOAD();
/* 54e199: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e19b: jne 0x54e1c3 */
  if (!zf) goto L_54e1c3;
L_54e19d: /* 54e19d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e19e: mov ecx, edi */
  ecx = edi;
/* 54e1a0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e1a5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e1a5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54e1a8: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54e1ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e1af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e1b0: push 0x5ad9f4 */
  { uint32_t v = 0x5ad9f4u; esp -= 4; W32(esp, v); }
/* 54e1b5: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54e1ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e1bb: call 0x4e30df */
  esp -= 4; W32(esp, 0x54e1c0u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54e1c0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54e1c3: /* 54e1c3: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54e1c6: jne 0x54e056 */
  if (!zf) goto L_54e056;
L_54e1cc: /* 54e1cc: test byte ptr [ebp + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e1d0: je 0x54e0d1 */
  if (zf) goto L_54e0d1;
L_54e1d6: /* 54e1d6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54e1d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e1db: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e1e0u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e1e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54e1e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e1e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e1e5: push 0x5ada20 */
  { uint32_t v = 0x5ada20u; esp -= 4; W32(esp, v); }
/* 54e1ea: jmp 0x54e0bd */
  goto L_54e0bd;
}

void f_54e14a(void) {
  LOAD_REGS();
  goto L_54e14a;
L_54e056: /* 54e056: mov eax, esi */
  eax = esi;
/* 54e058: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e05b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e062: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e063: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e064: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e065: mov esp, ebp */
  esp = ebp;
/* 54e067: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e068: ret 0xc */
  esp += 16; SPILL(); return;
L_54e0bd: /* 54e0bd: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54e0c3: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54e0c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e0c9: call 0x4e30df */
  esp -= 4; W32(esp, 0x54e0ceu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54e0ce: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54e0d1: /* 54e0d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e0d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e0d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e0d6: xor eax, eax */
  eax = 0;
/* 54e0d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e0df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e0e0: mov esp, ebp */
  esp = ebp;
/* 54e0e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e0e3: ret 0xc */
  esp += 16; SPILL(); return;
L_54e14a: /* 54e14a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e14c: lea eax, [ebp - 0x101c] */
  eax = (uint32_t)(ebp + 0xffffefe4u);
/* 54e152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e155: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e156: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x54e15bu); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 54e15b: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 54e15e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e163: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 54e165: jne 0x54e182 */
  if (!zf) goto L_54e182;
L_54e167: /* 54e167: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e168: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 54e16a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e16b: lea ecx, [ebp - 0x101c] */
  ecx = (uint32_t)(ebp + 0xffffefe4u);
/* 54e171: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e173: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e174: call 0x4e302b */
  esp -= 4; W32(esp, 0x54e179u); SPILL(); f_4e302b(); if (g_unwind) return; RELOAD();
/* 54e179: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e17c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e17e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 54e180: je 0x54e1cc */
  if (zf) goto L_54e1cc;
L_54e182: /* 54e182: test byte ptr [ebp + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e186: je 0x54e1c3 */
  if (zf) goto L_54e1c3;
L_54e188: /* 54e188: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 54e18b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 54e18d: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 54e190: mov ecx, dword ptr [edx + 0x24] */
  ecx = R32((uint32_t)(edx + 0x24u));
/* 54e193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e194: call 0x4e20e5 */
  esp -= 4; W32(esp, 0x54e199u); SPILL(); f_4e20e5(); if (g_unwind) return; RELOAD();
/* 54e199: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e19b: jne 0x54e1c3 */
  if (!zf) goto L_54e1c3;
L_54e19d: /* 54e19d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e19e: mov ecx, edi */
  ecx = edi;
/* 54e1a0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e1a5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e1a5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54e1a8: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54e1ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e1af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e1b0: push 0x5ad9f4 */
  { uint32_t v = 0x5ad9f4u; esp -= 4; W32(esp, v); }
/* 54e1b5: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54e1ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e1bb: call 0x4e30df */
  esp -= 4; W32(esp, 0x54e1c0u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54e1c0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54e1c3: /* 54e1c3: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54e1c6: jne 0x54e056 */
  if (!zf) goto L_54e056;
L_54e1cc: /* 54e1cc: test byte ptr [ebp + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e1d0: je 0x54e0d1 */
  if (zf) goto L_54e0d1;
L_54e1d6: /* 54e1d6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54e1d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e1db: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e1e0u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e1e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54e1e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e1e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e1e5: push 0x5ada20 */
  { uint32_t v = 0x5ada20u; esp -= 4; W32(esp, v); }
/* 54e1ea: jmp 0x54e0bd */
  goto L_54e0bd;
}

void f_54e1ef(void) {
  LOAD_REGS();
L_54e1ef: /* 54e1ef: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54e1f2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54e1f7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 54e1fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e1fb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54e1fe: call 0x554df6 */
  esp -= 4; W32(esp, 0x54e203u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54e203(); return;
}

void f_54e203(void) {
  LOAD_REGS();
L_54e203: /* 54e203: push 0x56ff5c */
  { uint32_t v = 0x56ff5cu; esp -= 4; W32(esp, v); }
/* 54e208: push 0x5ada64 */
  { uint32_t v = 0x5ada64u; esp -= 4; W32(esp, v); }
/* 54e20d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54e212u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54e212: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54e215: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e218: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e21a: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e21fu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e21f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e220: push 0x5ada6c */
  { uint32_t v = 0x5ada6cu; esp -= 4; W32(esp, v); }
/* 54e225: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54e22au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54e22a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e22d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e22f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e231: call 0x554df6 */
  esp -= 4; W32(esp, 0x54e236u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54e236: guest_badaddr(0x54e236); return;
}

void f_54e2e0(void) {
  LOAD_REGS();
L_54e2e0: /* 54e2e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54e2e1: mov ebp, esp */
  ebp = esp;
/* 54e2e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e2e5: push 0x559ab0 */
  { uint32_t v = 0x559ab0u; esp -= 4; W32(esp, v); }
/* 54e2ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54e2f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e2f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54e2f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54e2fb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 54e2fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54e2ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e301: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 54e304: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54e307: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e308: mov esi, ecx */
  esi = ecx;
/* 54e30a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54e30d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e30e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e30f: mov ecx, esi */
  ecx = esi;
/* 54e311: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54e318: call 0x4e18c5 */
  esp -= 4; W32(esp, 0x54e31du); SPILL(); f_4e18c5(); if (g_unwind) return; RELOAD();
/* 54e31d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e31f: je 0x54e344 */
  if (zf) goto L_54e344;
L_54e321: /* 54e321: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 54e323: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e325: je 0x54e33e */
  if (zf) goto L_54e33e;
L_54e327: /* 54e327: cmp dword ptr [ecx + 0x24], 0x5f0d80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x24u))); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54e32e: jne 0x54e33e */
  if (!zf) goto L_54e33e;
L_54e330: /* 54e330: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e332: je 0x54e33e */
  if (zf) goto L_54e33e;
L_54e334: /* 54e334: cmp ecx, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54e337: je 0x54e344 */
  if (zf) goto L_54e344;
L_54e339: /* 54e339: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 54e33c: jmp 0x54e330 */
  goto L_54e330;
L_54e33e: /* 54e33e: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_54e344: /* 54e344: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e347: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e348: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e349: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e350: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e351: mov esp, ebp */
  esp = ebp;
/* 54e353: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e354: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54e357(void) {
  LOAD_REGS();
L_54e357: /* 54e357: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54e35a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54e35f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 54e362: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e363: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 54e366: call 0x554df6 */
  esp -= 4; W32(esp, 0x54e36bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54e36b(); return;
}

void f_54e36b(void) {
  LOAD_REGS();
L_54e36b: /* 54e36b: push 0x56ffa0 */
  { uint32_t v = 0x56ffa0u; esp -= 4; W32(esp, v); }
/* 54e370: push 0x5adac4 */
  { uint32_t v = 0x5adac4u; esp -= 4; W32(esp, v); }
/* 54e375: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54e37au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54e37a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e37d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e37f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e381: call 0x554df6 */
  esp -= 4; W32(esp, 0x54e386u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54e386: guest_badaddr(0x54e386); return;
}

void f_54e3c0(void) {
  LOAD_REGS();
L_54e3c0: /* 54e3c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54e3c1: mov ebp, esp */
  ebp = esp;
/* 54e3c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e3c5: push 0x559ac0 */
  { uint32_t v = 0x559ac0u; esp -= 4; W32(esp, v); }
/* 54e3ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54e3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e3d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54e3d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54e3db: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54e3de: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54e3e0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54e3e3: mov cl, byte ptr [ebp + 0x14] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x14u))) & 0xffu);
/* 54e3e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54e3e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e3e8: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e3eb: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54e3f1: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54e3f4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54e3f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e3f8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54e3fb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54e402: jne 0x54e424 */
  if (!zf) goto L_54e424;
L_54e404: /* 54e404: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54e407: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e409: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x54e40eu); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 54e40e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e411: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e414: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e41b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e41c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e41d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e41e: mov esp, ebp */
  esp = ebp;
/* 54e420: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e421: ret 0x10 */
  esp += 20; SPILL(); return;
L_54e424: /* 54e424: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54e427: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e428: push 0x5adb20 */
  { uint32_t v = 0x5adb20u; esp -= 4; W32(esp, v); }
/* 54e42d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e42e: call 0x4e4183 */
  esp -= 4; W32(esp, 0x54e433u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 54e433: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e436: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e439: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e43a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e43b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e442: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e443: mov esp, ebp */
  esp = ebp;
/* 54e445: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e446: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_54e449(void) {
  LOAD_REGS();
L_54e449: /* 54e449: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54e44c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54e451: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54e454: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e455: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54e458: call 0x554df6 */
  esp -= 4; W32(esp, 0x54e45du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54e45d(); return;
}

void f_54e45d(void) {
  LOAD_REGS();
L_54e45d: /* 54e45d: push 0x56ffe0 */
  { uint32_t v = 0x56ffe0u; esp -= 4; W32(esp, v); }
/* 54e462: push 0x5adb2c */
  { uint32_t v = 0x5adb2cu; esp -= 4; W32(esp, v); }
/* 54e467: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54e46cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54e46c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54e46f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e472: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e474: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e479u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e479: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e47a: push 0x5adb34 */
  { uint32_t v = 0x5adb34u; esp -= 4; W32(esp, v); }
/* 54e47f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54e484u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54e484: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e487: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e489: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e48b: call 0x554df6 */
  esp -= 4; W32(esp, 0x54e490u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54e490: guest_badaddr(0x54e490); return;
}

void f_54e4e0(void) {
  LOAD_REGS();
L_54e4e0: /* 54e4e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e4e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 54e4e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e4e6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 54e4ea: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54e4ec: je 0x54e538 */
  if (zf) goto L_54e538;
L_54e4ee: /* 54e4ee: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 54e4f1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 54e4f3: mov ecx, esi */
  ecx = esi;
/* 54e4f5: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 54e4f8: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 54e4fb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54e500u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 54e500: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 54e503: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e505: je 0x54e538 */
  if (zf) goto L_54e538;
L_54e507: /* 54e507: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 54e50a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e50c: je 0x54e524 */
  if (zf) goto L_54e524;
L_54e50e: /* 54e50e: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 54e510: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54e512: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54e514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e515: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e516: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e517: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x54e51cu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 54e51c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e51f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e520: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e521: ret 0xc */
  esp += 16; SPILL(); return;
L_54e524: /* 54e524: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54e526: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54e528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e529: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
/* 54e52e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e52f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e530: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x54e535u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 54e535: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54e538: /* 54e538: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e539: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e53a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54e560(void) {
  LOAD_REGS();
L_54e560: /* 54e560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54e561: mov ebp, esp */
  ebp = esp;
/* 54e563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e565: push 0x559ad0 */
  { uint32_t v = 0x559ad0u; esp -= 4; W32(esp, v); }
/* 54e56a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54e570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54e578: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54e57b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54e57e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54e581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e582: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e583: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54e586: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54e58d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 54e590: je 0x54e59a */
  if (zf) goto L_54e59a;
L_54e592: /* 54e592: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 54e595: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 54e598: jmp 0x54e5a1 */
  goto L_54e5a1;
L_54e59a: /* 54e59a: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_54e5a1: /* 54e5a1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 54e5a4: call 0x4e439f */
  esp -= 4; W32(esp, 0x54e5a9u); SPILL(); f_4e439f(); if (g_unwind) return; RELOAD();
/* 54e5a9: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54e5ac: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e5ae: je 0x54e5ea */
  if (zf) goto L_54e5ea;
L_54e5b0: /* 54e5b0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54e5b3: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 54e5b6: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 54e5bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e5bc: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 54e5bf: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54e5c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e5c3: call 0x4e26df */
  esp -= 4; W32(esp, 0x54e5c8u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 54e5c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e5cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e5cd: jne 0x54e5e2 */
  if (!zf) goto L_54e5e2;
L_54e5cf: /* 54e5cf: mov eax, esi */
  eax = esi;
/* 54e5d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e5d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e5db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e5dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e5dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e5de: mov esp, ebp */
  esp = ebp;
/* 54e5e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e5e1: ret  */
  esp += 4; SPILL(); return;
L_54e5e2: /* 54e5e2: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 54e5e5: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54e5e8: jmp 0x54e5a1 */
  goto L_54e5a1;
L_54e5ea: /* 54e5ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e5ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e5ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e5ef: xor eax, eax */
  eax = 0;
/* 54e5f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e5f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e5f9: mov esp, ebp */
  esp = ebp;
/* 54e5fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e5fc: ret  */
  esp += 4; SPILL(); return;
}

void f_54e5fd(void) {
  LOAD_REGS();
L_54e5fd: /* 54e5fd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54e600: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54e605: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54e608: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e609: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54e60c: call 0x554df6 */
  esp -= 4; W32(esp, 0x54e611u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54e611(); return;
}

void f_54e611(void) {
  LOAD_REGS();
L_54e611: /* 54e611: push 0x570028 */
  { uint32_t v = 0x570028u; esp -= 4; W32(esp, v); }
/* 54e616: push 0x5ae2c0 */
  { uint32_t v = 0x5ae2c0u; esp -= 4; W32(esp, v); }
/* 54e61b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54e620u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54e620: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e625: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e627: call 0x554df6 */
  esp -= 4; W32(esp, 0x54e62cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54e62c: guest_badaddr(0x54e62c); return;
}

void f_54e670(void) {
  LOAD_REGS();
L_54e670: /* 54e670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e671: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e672: xor edi, edi */
  edi = 0;
/* 54e674: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e675: mov esi, ecx */
  esi = ecx;
/* 54e677: call 0x4e324c */
  esp -= 4; W32(esp, 0x54e67cu); SPILL(); f_4e324c(); if (g_unwind) return; RELOAD();
/* 54e67c: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* 54e67f: mov dword ptr [esi], 0x569b28 */
  W32((uint32_t)(esi), 0x569b28u);
/* 54e685: mov dword ptr [esi + 0x34], 1 */
  W32((uint32_t)(esi + 0x34u), 0x1u);
/* 54e68c: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* 54e68f: mov dword ptr [esi + 0x64], edi */
  W32((uint32_t)(esi + 0x64u), edi);
/* 54e692: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* 54e695: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e696: mov eax, esi */
  eax = esi;
/* 54e698: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e699: ret  */
  esp += 4; SPILL(); return;
}

void f_54e6b0(void) {
  LOAD_REGS();
L_54e6b0: /* 54e6b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e6b2: push 0x559af3 */
  { uint32_t v = 0x559af3u; esp -= 4; W32(esp, v); }
/* 54e6b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54e6bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e6be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54e6c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e6c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e6c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e6c8: mov esi, ecx */
  esi = ecx;
/* 54e6ca: xor edi, edi */
  edi = 0;
/* 54e6cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e6cd: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 54e6d1: call 0x4e324c */
  esp -= 4; W32(esp, 0x54e6d6u); SPILL(); f_4e324c(); if (g_unwind) return; RELOAD();
/* 54e6d6: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 54e6da: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 54e6de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54e6e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e6e1: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 54e6e4: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 54e6e8: mov dword ptr [esi], 0x569b28 */
  W32((uint32_t)(esi), 0x569b28u);
/* 54e6ee: mov dword ptr [esi + 0x34], 1 */
  W32((uint32_t)(esi + 0x34u), 0x1u);
/* 54e6f5: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 54e6f8: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x54e6fdu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 54e6fd: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 54e701: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 54e704: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* 54e707: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* 54e70a: mov dword ptr [esi + 0x64], edi */
  W32((uint32_t)(esi + 0x64u), edi);
/* 54e70d: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* 54e710: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54e713: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54e715: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e716: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 54e71b: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x54e71eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54e71e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 54e722: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e723: mov eax, esi */
  eax = esi;
/* 54e725: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e726: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e72d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e730: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_54e770(void) {
  LOAD_REGS();
L_54e770: /* 54e770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54e771: mov ebp, esp */
  ebp = esp;
/* 54e773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e775: push 0x559b10 */
  { uint32_t v = 0x559b10u; esp -= 4; W32(esp, v); }
/* 54e77a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54e780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54e788: sub esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54e78e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54e78f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54e790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e791: xor edi, edi */
  edi = 0;
/* 54e793: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 54e796: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54e799: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 54e79c: xor ecx, ecx */
  ecx = 0;
/* 54e79e: mov edi, edi */
  edi = edi;
L_54e7a0: /* 54e7a0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54e7a3: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 54e7a6: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54e7a9: je 0x54e7c2 */
  if (zf) goto L_54e7c2;
L_54e7ab: /* 54e7ab: cmp ax, 0x2e */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54e7af: je 0x54e7c2 */
  if (zf) goto L_54e7c2;
L_54e7b1: /* 54e7b1: mov word ptr [ebp + ecx*2 - 0x134], ax */
  W16((uint32_t)(ebp + ecx*2 + 0xfffffeccu), (eax & 0xffffu));
/* 54e7b9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54e7ba: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54e7bd: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 54e7c0: jmp 0x54e7a0 */
  goto L_54e7a0;
L_54e7c2: /* 54e7c2: cmp word ptr [esi], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54e7c5: mov word ptr [ebp + ecx*2 - 0x134], di */
  W16((uint32_t)(ebp + ecx*2 + 0xfffffeccu), (edi & 0xffffu));
/* 54e7cd: je 0x54e7f7 */
  if (zf) goto L_54e7f7;
L_54e7cf: /* 54e7cf: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54e7d2: xor ecx, ecx */
  ecx = 0;
L_54e7d4: /* 54e7d4: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 54e7d7: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54e7da: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 54e7dd: je 0x54e7ed */
  if (zf) goto L_54e7ed;
L_54e7df: /* 54e7df: mov word ptr [ebp + ecx*2 - 0xb4], ax */
  W16((uint32_t)(ebp + ecx*2 + 0xffffff4cu), (eax & 0xffffu));
/* 54e7e7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54e7e8: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54e7eb: jmp 0x54e7d4 */
  goto L_54e7d4;
L_54e7ed: /* 54e7ed: mov word ptr [ebp + ecx*2 - 0xb4], di */
  W16((uint32_t)(ebp + ecx*2 + 0xffffff4cu), (edi & 0xffffu));
/* 54e7f5: jmp 0x54e7fe */
  goto L_54e7fe;
L_54e7f7: /* 54e7f7: mov word ptr [ebp - 0xb4], di */
  W16((uint32_t)(ebp + 0xffffff4cu), (edi & 0xffffu));
L_54e7fe: /* 54e7fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54e7ff: lea eax, [ebp - 0x134] */
  eax = (uint32_t)(ebp + 0xfffffeccu);
/* 54e805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e806: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54e808: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 54e80d: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x54e812u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 54e812: mov ebx, eax */
  ebx = eax;
/* 54e814: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e817: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e819: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 54e81c: je 0x54e986 */
  if (zf) goto L_54e986;
L_54e822: /* 54e822: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
L_54e825: /* 54e825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e827: je 0x54e83b */
  if (zf) goto L_54e83b;
L_54e829: /* 54e829: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54e82e: je 0x54e835 */
  if (zf) goto L_54e835;
L_54e830: /* 54e830: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54e833: jmp 0x54e825 */
  goto L_54e825;
L_54e835: /* 54e835: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e837: mov eax, ebx */
  eax = ebx;
/* 54e839: jne 0x54e83e */
  if (!zf) goto L_54e83e;
L_54e83b: /* 54e83b: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
L_54e83e: /* 54e83e: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54e844: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e846: call 0x4e3634 */
  esp -= 4; W32(esp, 0x54e84bu); SPILL(); f_4e3634(); if (g_unwind) return; RELOAD();
/* 54e84b: mov edi, eax */
  edi = eax;
/* 54e84d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e850: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e852: je 0x54e986 */
  if (zf) goto L_54e986;
L_54e858: /* 54e858: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54e85b: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 54e85e: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 54e863: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 54e866: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54e869: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e86a: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 54e870: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e871: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x54e876u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 54e876: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 54e87c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e87f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e880: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x54e885u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 54e885: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e888: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54e88b: jg 0x54e8a4 */
  if ((!zf && sf == of)) goto L_54e8a4;
L_54e88d: /* 54e88d: push 0x23f */
  { uint32_t v = 0x23fu; esp -= 4; W32(esp, v); }
/* 54e892: push 0x5ad69c */
  { uint32_t v = 0x5ad69cu; esp -= 4; W32(esp, v); }
/* 54e897: push 0x5ad6a8 */
  { uint32_t v = 0x5ad6a8u; esp -= 4; W32(esp, v); }
/* 54e89c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54e8a1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54e8a1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54e8a4: /* 54e8a4: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54e8aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e8ab: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x54e8b0u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 54e8b0: mov word ptr [ebp + eax*2 - 0xc8], 0 */
  W16((uint32_t)(ebp + eax*2 + 0xffffff38u), 0x0u);
/* 54e8ba: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 54e8bd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e8c1: call 0x4e4566 */
  esp -= 4; W32(esp, 0x54e8c6u); SPILL(); f_4e4566(); if (g_unwind) return; RELOAD();
/* 54e8c6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e8c9: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 54e8cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54e8d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e8d1: call 0x4e3634 */
  esp -= 4; W32(esp, 0x54e8d6u); SPILL(); f_4e3634(); if (g_unwind) return; RELOAD();
/* 54e8d6: mov ebx, eax */
  ebx = eax;
/* 54e8d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e8db: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e8dd: jne 0x54e8f6 */
  if (!zf) goto L_54e8f6;
L_54e8df: /* 54e8df: push 0x242 */
  { uint32_t v = 0x242u; esp -= 4; W32(esp, v); }
/* 54e8e4: push 0x5ad6c4 */
  { uint32_t v = 0x5ad6c4u; esp -= 4; W32(esp, v); }
/* 54e8e9: push 0x5ad6d0 */
  { uint32_t v = 0x5ad6d0u; esp -= 4; W32(esp, v); }
/* 54e8ee: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54e8f3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54e8f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54e8f6: /* 54e8f6: mov al, byte ptr [edi + 0x89] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x89u))) & 0xffu);
/* 54e8fc: cmp al, byte ptr [ebx + 0x89] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx + 0x89u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 54e902: jne 0x54e981 */
  if (!zf) goto L_54e981;
L_54e908: /* 54e908: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 54e90b: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 54e90e: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 54e911: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 54e918: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 54e91b: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54e920u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54e920: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* 54e923: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 54e926: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 54e929: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 54e92c: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54e931u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
L_54e931: /* 54e931: movzx eax, byte ptr [ebx + 0x89] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x89u)));
/* 54e938: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54e93b: jge 0x54e983 */
  if ((sf == of)) goto L_54e983;
L_54e93d: /* 54e93d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 54e940: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54e943: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 54e946: cmp ecx, dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54e949: jne 0x54e97e */
  if (!zf) goto L_54e97e;
L_54e94b: /* 54e94b: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 54e94e: xor ecx, dword ptr [eax + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 54e951: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54e954: jne 0x54e97e */
  if (!zf) goto L_54e97e;
L_54e956: /* 54e956: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 54e959: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 54e95c: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 54e95f: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54e964u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54e964: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 54e967: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 54e96a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 54e96d: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54e972u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54e972: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54e975: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54e978: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54e979: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54e97c: jmp 0x54e931 */
  goto L_54e931;
L_54e97e: /* 54e97e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_54e981: /* 54e981: xor edi, edi */
  edi = 0;
L_54e983: /* 54e983: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_54e986: /* 54e986: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54e989: mov edx, edi */
  edx = edi;
/* 54e98b: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 54e98d: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 54e98f: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54e991: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54e993: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 54e995: je 0x54e99f */
  if (zf) goto L_54e99f;
L_54e997: /* 54e997: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 54e99a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 54e99d: jmp 0x54e9a6 */
  goto L_54e9a6;
L_54e99f: /* 54e99f: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
L_54e9a6: /* 54e9a6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 54e9a9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 54e9ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54e9ac: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 54e9af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54e9b2: mov eax, esi */
  eax = esi;
/* 54e9b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54e9b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54e9bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54e9bd: mov esp, ebp */
  esp = ebp;
/* 54e9bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54e9c0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54e9c3(void) {
  LOAD_REGS();
L_54e9c3: /* 54e9c3: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 54e9c6: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54e9cb: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 54e9ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54e9cf: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 54e9d2: call 0x554df6 */
  esp -= 4; W32(esp, 0x54e9d7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54e9d7(); return;
}

void f_54e9d7(void) {
  LOAD_REGS();
L_54e9d7: /* 54e9d7: push 0x570040 */
  { uint32_t v = 0x570040u; esp -= 4; W32(esp, v); }
/* 54e9dc: push 0x5ad6dc */
  { uint32_t v = 0x5ad6dcu; esp -= 4; W32(esp, v); }
/* 54e9e1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54e9e6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54e9e6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54e9e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54e9ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54e9ee: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54e9f3u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54e9f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54e9f4: push 0x5ad6e4 */
  { uint32_t v = 0x5ad6e4u; esp -= 4; W32(esp, v); }
/* 54e9f9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54e9feu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54e9fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ea01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ea03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ea05: call 0x554df6 */
  esp -= 4; W32(esp, 0x54ea0au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54ea0a: guest_badaddr(0x54ea0a); return;
}

void f_54eac0(void) {
  LOAD_REGS();
L_54eac0: /* 54eac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54eac1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54eac2: mov edi, ecx */
  edi = ecx;
/* 54eac4: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 54eac7: xor esi, esi */
  esi = 0;
/* 54eac9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54eacb: jle 0x54eae8 */
  if ((zf || sf != of)) goto L_54eae8;
L_54eacd: /* 54eacd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54eace: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_54ead2: /* 54ead2: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 54ead5: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 54ead8: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54eada: call 0x4e1217 */
  esp -= 4; W32(esp, 0x54eadfu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 54eadf: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 54eae2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54eae3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54eae5: jl 0x54ead2 */
  if ((sf != of)) goto L_54ead2;
L_54eae7: /* 54eae7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_54eae8: /* 54eae8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54eae9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54eaea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54eb00(void) {
  LOAD_REGS();
L_54eb00: /* 54eb00: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54eb03: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 54eb06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54eb08: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 54eb0c: je 0x54eb17 */
  if (zf) goto L_54eb17;
L_54eb0e: /* 54eb0e: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 54eb11: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 54eb15: jmp 0x54eb1f */
  goto L_54eb1f;
L_54eb17: /* 54eb17: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
L_54eb1f: /* 54eb1f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54eb20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54eb21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54eb22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54eb23: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 54eb27: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54eb2cu); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54eb2c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 54eb30: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54eb32: je 0x54eb98 */
  if (zf) goto L_54eb98;
L_54eb34: /* 54eb34: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 54eb38: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 54eb3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_54eb40: /* 54eb40: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 54eb43: xor edi, edi */
  edi = 0;
/* 54eb45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54eb47: jle 0x54eb80 */
  if ((zf || sf != of)) goto L_54eb80;
L_54eb49: /* 54eb49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_54eb50: /* 54eb50: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 54eb53: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 54eb56: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 54eb59: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54eb5b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54eb5d: je 0x54eb64 */
  if (zf) goto L_54eb64;
L_54eb5f: /* 54eb5f: lea ecx, [eax + ebx] */
  ecx = (uint32_t)(eax + ebx);
/* 54eb62: jmp 0x54eb66 */
  goto L_54eb66;
L_54eb64: /* 54eb64: xor ecx, ecx */
  ecx = 0;
L_54eb66: /* 54eb66: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54eb68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54eb69: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54eb6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54eb6c: mov ecx, esi */
  ecx = esi;
/* 54eb6e: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x54eb74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54eb74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54eb76: je 0x54eba7 */
  if (zf) goto L_54eba7;
L_54eb78: /* 54eb78: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 54eb7b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54eb7c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54eb7e: jl 0x54eb50 */
  if ((sf != of)) goto L_54eb50;
L_54eb80: /* 54eb80: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 54eb83: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 54eb87: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 54eb8b: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54eb90u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54eb90: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 54eb94: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54eb96: jne 0x54eb40 */
  if (!zf) goto L_54eb40;
L_54eb98: /* 54eb98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54eb99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54eb9a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54eb9b: mov eax, 1 */
  eax = 0x1u;
/* 54eba0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54eba1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54eba4: ret 8 */
  esp += 12; SPILL(); return;
L_54eba7: /* 54eba7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54eba8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54eba9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54ebaa: xor eax, eax */
  eax = 0;
/* 54ebac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ebad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ebb0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54ebf0(void) {
  LOAD_REGS();
L_54ebf0: /* 54ebf0: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 54ebf3: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 54ebf6: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54ebf9: cmp eax, 0x57 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x57u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54ebfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ebfd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54ebfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ebff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54ec00: jne 0x54ed57 */
  if (!zf) goto L_54ed57;
L_54ec06: /* 54ec06: mov esi, dword ptr [esp + 0x64] */
  esi = R32((uint32_t)(esp + 0x64u));
/* 54ec0a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54ec0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ec0d: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54ec12u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54ec12: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 54ec15: mov ebx, eax */
  ebx = eax;
/* 54ec17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ec18: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 54ec1c: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54ec21u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54ec21: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 54ec24: mov edi, eax */
  edi = eax;
/* 54ec26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54ec27: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 54ec2b: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54ec30u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54ec30: mov ebp, eax */
  ebp = eax;
/* 54ec32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ec35: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54ec37: mov edx, ebp */
  edx = ebp;
/* 54ec39: jge 0x54ec3d */
  if ((sf == of)) goto L_54ec3d;
L_54ec3b: /* 54ec3b: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
L_54ec3d: /* 54ec3d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54ec3f: mov ecx, edi */
  ecx = edi;
/* 54ec41: jge 0x54ec45 */
  if ((sf == of)) goto L_54ec45;
L_54ec43: /* 54ec43: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_54ec45: /* 54ec45: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54ec47: mov eax, ebx */
  eax = ebx;
/* 54ec49: jge 0x54ec4d */
  if ((sf == of)) goto L_54ec4d;
L_54ec4b: /* 54ec4b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_54ec4d: /* 54ec4d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54ec4f: jge 0x54ec53 */
  if ((sf == of)) goto L_54ec53;
L_54ec51: /* 54ec51: mov eax, ecx */
  eax = ecx;
L_54ec53: /* 54ec53: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54ec55: jge 0x54ec59 */
  if ((sf == of)) goto L_54ec59;
L_54ec57: /* 54ec57: mov eax, edx */
  eax = edx;
L_54ec59: /* 54ec59: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54ec5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ec5b: call 0x4e2428 */
  esp -= 4; W32(esp, 0x54ec60u); SPILL(); f_4e2428(); if (g_unwind) return; RELOAD();
/* 54ec60: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 54ec63: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ec66: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 54ec69: jae 0x54ec72 */
  if (!cf) goto L_54ec72;
L_54ec6b: /* 54ec6b: mov eax, 1 */
  eax = 0x1u;
/* 54ec70: jmp 0x54ec7c */
  goto L_54ec7c;
L_54ec72: /* 54ec72: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 54ec75: jb 0x54ec7c */
  if (cf) goto L_54ec7c;
L_54ec77: /* 54ec77: mov eax, 0x14 */
  eax = 0x14u;
L_54ec7c: /* 54ec7c: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 54ec80: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 54ec81: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 54ec83: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 54ec87: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 54ec8b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54ec8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ec8e: mov ecx, esi */
  ecx = esi;
/* 54ec90: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x54ec93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ec93: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 54ec97: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 54ec9b: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 54ec9e: mov edi, 1 */
  edi = 0x1u;
/* 54eca3: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* 54eca5: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 54eca8: mov ebx, 1 */
  ebx = 0x1u;
/* 54ecad: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 54ecaf: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 54ecb3: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 54ecb6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 54ecba: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 54ecbd: lea eax, [edi + ebp] */
  eax = (uint32_t)(edi + ebp);
/* 54ecc0: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 54ecc4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ecc5: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 54ecc9: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 54eccd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54eccf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ecd0: mov ecx, esi */
  ecx = esi;
/* 54ecd2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54ecd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ecd5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54ecd7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ecd8: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 54ecdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ecdd: mov ecx, esi */
  ecx = esi;
/* 54ecdf: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54ece2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ece2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54ece4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ece5: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 54ece9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ecea: mov ecx, esi */
  ecx = esi;
/* 54ecec: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54ecefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ecef: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 54ecf2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54ecf4: je 0x54f2b5 */
  if (zf) goto L_54f2b5;
L_54ecfa: /* 54ecfa: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 54ecfe: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 54ed02: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 54ed06: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 54ed08: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 54ed0c: fild dword ptr [esp + 0x5c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 54ed10: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 54ed12: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 54ed16: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 54ed18: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 54ed1c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 54ed20: fild dword ptr [esp + 0x5c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 54ed24: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 54ed28: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 54ed2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54ed2d: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 54ed31: fild dword ptr [esp + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 54ed35: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 54ed39: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 54ed3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ed3c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 54ed40: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 54ed44: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 54ed47: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54ed48: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 54ed4b: mov eax, 1 */
  eax = 0x1u;
/* 54ed50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ed51: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ed54: ret 0xc */
  esp += 16; SPILL(); return;
L_54ed57: /* 54ed57: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54ed5a: jne 0x54ee60 */
  if (!zf) goto L_54ee60;
L_54ed60: /* 54ed60: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 54ed64: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 54ed67: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54ed69: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 54ed6c: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 54ed70: sar ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 54ed73: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54ed76: sar edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 54ed79: mov byte ptr [esp + 0x12], cl */
  W8((uint32_t)(esp + 0x12u), (ecx & 0xffu));
/* 54ed7d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54ed7f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54ed81: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 54ed85: mov byte ptr [esp + 0x64], dl */
  W8((uint32_t)(esp + 0x64u), (edx & 0xffu));
/* 54ed89: mov byte ptr [esp + 0x17], al */
  W8((uint32_t)(esp + 0x17u), (eax & 0xffu));
/* 54ed8d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54ed8f: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 54ed92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ed93: mov ecx, esi */
  ecx = esi;
/* 54ed95: mov byte ptr [esp + 0x6c], dl */
  W8((uint32_t)(esp + 0x6cu), (edx & 0xffu));
/* 54ed99: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x54ed9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ed9c: mov al, byte ptr [esp + 0x64] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x64u))) & 0xffu);
/* 54eda0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54eda2: je 0x54edb4 */
  if (zf) goto L_54edb4;
L_54eda4: /* 54eda4: lea edx, [esp + 0x13] */
  edx = (uint32_t)(esp + 0x13u);
/* 54eda8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54eda9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54edaa: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x54edafu); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 54edaf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54edb2: jmp 0x54edb9 */
  goto L_54edb9;
L_54edb4: /* 54edb4: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
L_54edb9: /* 54edb9: mov al, byte ptr [esp + 0x60] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x60u))) & 0xffu);
/* 54edbd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54edbf: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54edc1: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 54edc4: mov byte ptr [esp + 0x64], al */
  W8((uint32_t)(esp + 0x64u), (eax & 0xffu));
/* 54edc8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54edca: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 54edce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54edcf: mov ecx, esi */
  ecx = esi;
/* 54edd1: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x54edd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54edd4: mov al, byte ptr [esp + 0x64] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x64u))) & 0xffu);
/* 54edd8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54edda: je 0x54edec */
  if (zf) goto L_54edec;
L_54eddc: /* 54eddc: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 54ede0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ede1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ede2: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x54ede7u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 54ede7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54edea: jmp 0x54edf1 */
  goto L_54edf1;
L_54edec: /* 54edec: mov byte ptr [esp + 0x60], 0 */
  W8((uint32_t)(esp + 0x60u), 0x0u);
L_54edf1: /* 54edf1: mov al, byte ptr [esp + 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12u))) & 0xffu);
/* 54edf5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54edf7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54edf9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54edfb: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 54edff: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 54ee02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ee03: mov ecx, esi */
  ecx = esi;
/* 54ee05: mov byte ptr [esp + 0x6c], dl */
  W8((uint32_t)(esp + 0x6cu), (edx & 0xffu));
/* 54ee09: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x54ee0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ee0c: mov al, byte ptr [esp + 0x64] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x64u))) & 0xffu);
/* 54ee10: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54ee12: je 0x54ee28 */
  if (zf) goto L_54ee28;
L_54ee14: /* 54ee14: lea edx, [esp + 0x12] */
  edx = (uint32_t)(esp + 0x12u);
/* 54ee18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54ee19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ee1a: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x54ee1fu); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 54ee1f: mov cl, byte ptr [esp + 0x1a] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1au))) & 0xffu);
/* 54ee23: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ee26: jmp 0x54ee2a */
  goto L_54ee2a;
L_54ee28: /* 54ee28: xor cl, cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_54ee2a: /* 54ee2a: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 54ee2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54ee2f: je 0x54f2b5 */
  if (zf) goto L_54f2b5;
L_54ee35: /* 54ee35: xor edx, edx */
  edx = 0;
/* 54ee37: mov dh, byte ptr [esp + 0x60] */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esp + 0x60u))) & 0xffu) << 8);
/* 54ee3b: xor eax, eax */
  eax = 0;
/* 54ee3d: mov ah, byte ptr [esp + 0x13] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu) << 8);
/* 54ee41: mov esi, edx */
  esi = edx;
/* 54ee43: xor edx, edx */
  edx = 0;
/* 54ee45: mov dh, cl */
  edx = (edx & 0xffff00ffu) | (((uint32_t)((ecx & 0xffu)) & 0xffu) << 8);
/* 54ee47: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 54ee49: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 54ee4c: mov eax, 1 */
  eax = 0x1u;
/* 54ee51: mov ecx, edx */
  ecx = edx;
/* 54ee53: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 54ee56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54ee57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ee58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54ee59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ee5a: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ee5d: ret 0xc */
  esp += 16; SPILL(); return;
L_54ee60: /* 54ee60: cmp eax, 0x5b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54ee63: jne 0x54ef58 */
  if (!zf) goto L_54ef58;
L_54ee69: /* 54ee69: mov esi, dword ptr [esp + 0x64] */
  esi = R32((uint32_t)(esp + 0x64u));
/* 54ee6d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54ee6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ee70: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54ee75u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54ee75: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 54ee78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ee79: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 54ee7d: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54ee82u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54ee82: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 54ee85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54ee86: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 54ee8a: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54ee8fu); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54ee8f: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 54ee93: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 54ee96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ee97: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54ee9cu); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54ee9c: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 54eea0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54eea3: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 54eea7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54eea8: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 54eeac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54eead: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 54eeb1: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 54eeb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54eeb6: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 54eeba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54eebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54eebc: call 0x4e40ed */
  esp -= 4; W32(esp, 0x54eec1u); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 54eec1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54eec4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54eec5: call 0x4e40ed */
  esp -= 4; W32(esp, 0x54eecau); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 54eeca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54eecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54eece: call 0x4e40ed */
  esp -= 4; W32(esp, 0x54eed3u); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 54eed3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54eed6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54eed7: call 0x4e40ed */
  esp -= 4; W32(esp, 0x54eedcu); SPILL(); f_4e40ed(); if (g_unwind) return; RELOAD();
/* 54eedc: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 54eedf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54eee2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54eee4: je 0x54f2b5 */
  if (zf) goto L_54f2b5;
L_54eeea: /* 54eeea: movsx edx, word ptr [esp + 0x64] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x64u)));
/* 54eeef: movsx eax, word ptr [esp + 0x60] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x60u)));
/* 54eef4: movsx ecx, word ptr [esp + 0x1c] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x1cu)));
/* 54eef9: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 54eefd: movsx edx, word ptr [esp + 0x18] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x18u)));
/* 54ef02: fild dword ptr [esp + 0x64] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 54ef06: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 54ef0a: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 54ef0e: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 54ef12: fild dword ptr [esp + 0x64] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 54ef16: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 54ef1a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 54ef1c: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 54ef20: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 54ef24: fild dword ptr [esp + 0x64] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 54ef28: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 54ef2c: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54ef2f: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 54ef33: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 54ef37: fild dword ptr [esp + 0x64] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 54ef3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54ef3c: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 54ef3f: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 54ef43: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 54ef47: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 54ef4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ef4b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54ef4c: mov eax, 1 */
  eax = 0x1u;
/* 54ef51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ef52: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ef55: ret 0xc */
  esp += 16; SPILL(); return;
L_54ef58: /* 54ef58: cmp eax, 0x5d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54ef5b: jne 0x54f247 */
  if (!zf) goto L_54f247;
L_54ef61: /* 54ef61: mov esi, dword ptr [esp + 0x64] */
  esi = R32((uint32_t)(esp + 0x64u));
/* 54ef65: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54ef68: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 54ef6b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ef6c: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 54ef70: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54ef75u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54ef75: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 54ef78: mov ebx, eax */
  ebx = eax;
/* 54ef7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54ef7b: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 54ef7f: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54ef84u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54ef84: mov edi, eax */
  edi = eax;
/* 54ef86: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 54ef89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ef8a: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 54ef8e: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54ef93u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54ef93: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ef96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54ef98: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 54ef9c: mov ecx, eax */
  ecx = eax;
/* 54ef9e: jge 0x54efa2 */
  if ((sf == of)) goto L_54efa2;
L_54efa0: /* 54efa0: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_54efa2: /* 54efa2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54efa4: jge 0x54efa8 */
  if ((sf == of)) goto L_54efa8;
L_54efa6: /* 54efa6: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_54efa8: /* 54efa8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54efaa: mov eax, ebx */
  eax = ebx;
/* 54efac: jge 0x54efb0 */
  if ((sf == of)) goto L_54efb0;
L_54efae: /* 54efae: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_54efb0: /* 54efb0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54efb2: jge 0x54efb6 */
  if ((sf == of)) goto L_54efb6;
L_54efb4: /* 54efb4: mov eax, edi */
  eax = edi;
L_54efb6: /* 54efb6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54efb8: jge 0x54efbc */
  if ((sf == of)) goto L_54efbc;
L_54efba: /* 54efba: mov eax, ecx */
  eax = ecx;
L_54efbc: /* 54efbc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54efbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54efbe: call 0x4e2428 */
  esp -= 4; W32(esp, 0x54efc3u); SPILL(); f_4e2428(); if (g_unwind) return; RELOAD();
/* 54efc3: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 54efc6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54efc9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 54efcc: jae 0x54efd5 */
  if (!cf) goto L_54efd5;
L_54efce: /* 54efce: mov eax, 1 */
  eax = 0x1u;
/* 54efd3: jmp 0x54efdf */
  goto L_54efdf;
L_54efd5: /* 54efd5: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 54efd8: jb 0x54efdf */
  if (cf) goto L_54efdf;
L_54efda: /* 54efda: mov eax, 0x14 */
  eax = 0x14u;
L_54efdf: /* 54efdf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54efe1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 54efe2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54efe3: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 54efe7: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54efecu); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54efec: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 54efef: mov ebx, eax */
  ebx = eax;
/* 54eff1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54eff2: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 54eff6: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54effbu); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54effb: mov edi, eax */
  edi = eax;
/* 54effd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 54f000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f001: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 54f005: call 0x4e15aa */
  esp -= 4; W32(esp, 0x54f00au); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 54f00a: mov ebp, eax */
  ebp = eax;
/* 54f00c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f00f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54f011: mov ecx, ebp */
  ecx = ebp;
/* 54f013: jge 0x54f017 */
  if ((sf == of)) goto L_54f017;
L_54f015: /* 54f015: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_54f017: /* 54f017: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54f019: jge 0x54f01d */
  if ((sf == of)) goto L_54f01d;
L_54f01b: /* 54f01b: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_54f01d: /* 54f01d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54f01f: mov eax, ebx */
  eax = ebx;
/* 54f021: jge 0x54f025 */
  if ((sf == of)) goto L_54f025;
L_54f023: /* 54f023: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_54f025: /* 54f025: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54f027: jge 0x54f02b */
  if ((sf == of)) goto L_54f02b;
L_54f029: /* 54f029: mov eax, edi */
  eax = edi;
L_54f02b: /* 54f02b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54f02d: jge 0x54f031 */
  if ((sf == of)) goto L_54f031;
L_54f02f: /* 54f02f: mov eax, ecx */
  eax = ecx;
L_54f031: /* 54f031: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54f032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f033: call 0x4e2428 */
  esp -= 4; W32(esp, 0x54f038u); SPILL(); f_4e2428(); if (g_unwind) return; RELOAD();
/* 54f038: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 54f03b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f03e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 54f041: jae 0x54f04a */
  if (!cf) goto L_54f04a;
L_54f043: /* 54f043: mov eax, 1 */
  eax = 0x1u;
/* 54f048: jmp 0x54f054 */
  goto L_54f054;
L_54f04a: /* 54f04a: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 54f04d: jb 0x54f054 */
  if (cf) goto L_54f054;
L_54f04f: /* 54f04f: mov eax, 0x14 */
  eax = 0x14u;
L_54f054: /* 54f054: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 54f058: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54f05a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 54f05b: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 54f05f: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 54f061: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 54f065: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f066: mov ecx, esi */
  ecx = esi;
/* 54f068: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54f06bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f06b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 54f06f: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 54f072: mov edi, 1 */
  edi = 0x1u;
/* 54f077: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* 54f079: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 54f07c: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 54f080: mov ebx, 1 */
  ebx = 0x1u;
/* 54f085: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 54f087: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 54f08b: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 54f08e: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 54f091: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54f093: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 54f097: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f098: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 54f09c: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 54f0a0: lea edx, [edi + ebp] */
  edx = (uint32_t)(edi + ebp);
/* 54f0a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f0a4: mov ecx, esi */
  ecx = esi;
/* 54f0a6: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 54f0aa: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x54f0adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f0ad: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54f0af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f0b0: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 54f0b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f0b5: mov ecx, esi */
  ecx = esi;
/* 54f0b7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54f0bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f0ba: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54f0bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f0bd: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 54f0c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f0c2: mov ecx, esi */
  ecx = esi;
/* 54f0c4: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54f0c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f0c7: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 54f0ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f0cc: je 0x54f120 */
  if (zf) goto L_54f120;
L_54f0ce: /* 54f0ce: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 54f0d2: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 54f0d6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 54f0da: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 54f0dc: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 54f0e0: fild dword ptr [esp + 0x5c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 54f0e4: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 54f0e6: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 54f0ea: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 54f0ec: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 54f0f0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 54f0f4: fild dword ptr [esp + 0x5c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 54f0f8: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 54f0fc: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 54f100: mov ecx, eax */
  ecx = eax;
/* 54f102: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 54f106: fild dword ptr [esp + 0x5c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 54f10a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 54f10c: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 54f110: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 54f113: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 54f117: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 54f11b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 54f11e: jmp 0x54f124 */
  goto L_54f124;
L_54f120: /* 54f120: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
L_54f124: /* 54f124: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 54f127: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 54f12a: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 54f12d: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 54f131: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f132: sar ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 54f135: sar edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 54f138: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f139: mov byte ptr [esp + 0x68], cl */
  W8((uint32_t)(esp + 0x68u), (ecx & 0xffu));
/* 54f13d: mov byte ptr [esp + 0x1b], dl */
  W8((uint32_t)(esp + 0x1bu), (edx & 0xffu));
/* 54f141: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x54f146u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 54f146: lea ecx, [esp + 0x1b] */
  ecx = (uint32_t)(esp + 0x1bu);
/* 54f14a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f14b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f14c: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x54f151u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 54f151: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 54f154: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f157: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f159: je 0x54f171 */
  if (zf) goto L_54f171;
L_54f15b: /* 54f15b: xor eax, eax */
  eax = 0;
/* 54f15d: mov ah, byte ptr [esp + 0x60] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esp + 0x60u))) & 0xffu) << 8);
/* 54f161: xor ecx, ecx */
  ecx = 0;
/* 54f163: mov ch, byte ptr [esp + 0x13] */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu) << 8);
/* 54f167: xor edx, edx */
  edx = 0;
/* 54f169: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 54f16b: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 54f16e: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
L_54f171: /* 54f171: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54f173: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 54f175: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 54f179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f17a: mov ecx, esi */
  ecx = esi;
/* 54f17c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54f17fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f17f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 54f183: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 54f186: mov edi, 1 */
  edi = 0x1u;
/* 54f18b: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* 54f18d: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 54f190: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 54f194: mov ebx, 1 */
  ebx = 0x1u;
/* 54f199: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 54f19b: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 54f19f: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 54f1a2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 54f1a6: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 54f1aa: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 54f1ad: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 54f1b0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54f1b2: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 54f1b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f1b7: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 54f1bb: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 54f1bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f1c0: mov ecx, esi */
  ecx = esi;
/* 54f1c2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54f1c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f1c5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54f1c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f1c8: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 54f1cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f1cd: mov ecx, esi */
  ecx = esi;
/* 54f1cf: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54f1d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f1d2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54f1d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f1d5: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 54f1d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f1da: mov ecx, esi */
  ecx = esi;
/* 54f1dc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54f1dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f1df: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 54f1e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f1e4: je 0x54f2b5 */
  if (zf) goto L_54f2b5;
L_54f1ea: /* 54f1ea: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 54f1ee: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 54f1f2: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 54f1f6: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 54f1f8: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 54f1fc: fild dword ptr [esp + 0x64] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 54f200: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 54f202: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 54f206: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 54f20a: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 54f20e: fild dword ptr [esp + 0x64] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 54f212: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 54f214: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 54f218: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 54f21c: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 54f220: fild dword ptr [esp + 0x64] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 54f224: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 54f228: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54f229: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 54f22b: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 54f22f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 54f233: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54f234: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 54f237: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54f238: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 54f23b: mov eax, 1 */
  eax = 0x1u;
/* 54f240: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54f241: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f244: ret 0xc */
  esp += 16; SPILL(); return;
L_54f247: /* 54f247: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f248: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 54f24c: call 0x4e14d3 */
  esp -= 4; W32(esp, 0x54f251u); SPILL(); f_4e14d3(); if (g_unwind) return; RELOAD();
/* 54f251: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 54f255: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f257: je 0x54f2b5 */
  if (zf) goto L_54f2b5;
L_54f259: /* 54f259: mov ebp, dword ptr [esp + 0x64] */
  ebp = R32((uint32_t)(esp + 0x64u));
/* 54f25d: mov ebx, dword ptr [esp + 0x60] */
  ebx = R32((uint32_t)(esp + 0x60u));
L_54f261: /* 54f261: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 54f263: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f264: mov ecx, ebx */
  ecx = ebx;
/* 54f266: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x54f269u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f269: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54f26c: je 0x54f29d */
  if (zf) goto L_54f29d;
L_54f26e: /* 54f26e: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 54f271: xor edi, edi */
  edi = 0;
/* 54f273: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54f275: jle 0x54f29d */
  if ((zf || sf != of)) goto L_54f29d;
L_54f277: /* 54f277: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 54f27a: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 54f27d: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 54f280: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54f282: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54f284: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 54f288: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54f28a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f28b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f28c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f28d: mov ecx, esi */
  ecx = esi;
/* 54f28f: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x54f295u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f295: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 54f298: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54f299: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54f29b: jl 0x54f277 */
  if ((sf != of)) goto L_54f277;
L_54f29d: /* 54f29d: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 54f2a0: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 54f2a4: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 54f2a8: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54f2adu); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54f2ad: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 54f2b1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f2b3: jne 0x54f261 */
  if (!zf) goto L_54f261;
L_54f2b5: /* 54f2b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54f2b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54f2b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54f2b8: mov eax, 1 */
  eax = 0x1u;
/* 54f2bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54f2be: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f2c1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54f490(void) {
  LOAD_REGS();
L_54f490: /* 54f490: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54f491: mov ebp, esp */
  ebp = esp;
/* 54f493: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54f495: push 0x559b20 */
  { uint32_t v = 0x559b20u; esp -= 4; W32(esp, v); }
/* 54f49a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54f4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f4a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54f4a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f4a9: mov eax, 0x20018 */
  eax = 0x20018u;
/* 54f4ae: call 0x554f80 */
  esp -= 4; W32(esp, 0x54f4b3u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 54f4b3: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 54f4b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f4b7: xor ebx, ebx */
  ebx = 0;
/* 54f4b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54f4bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f4bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54f4bd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54f4c0: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 54f4c3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 54f4c6: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 54f4c9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 54f4cc: je 0x54f4d6 */
  if (zf) goto L_54f4d6;
L_54f4ce: /* 54f4ce: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 54f4d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54f4d4: jmp 0x54f4d9 */
  goto L_54f4d9;
L_54f4d6: /* 54f4d6: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
L_54f4d9: /* 54f4d9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 54f4dc: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54f4e1u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54f4e1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_54f4e4: /* 54f4e4: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54f4e7: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54f4e9: je 0x54f5b5 */
  if (zf) goto L_54f5b5;
L_54f4ef: /* 54f4ef: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 54f4f1: mov ecx, edi */
  ecx = edi;
/* 54f4f3: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0x54f4f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f4f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54f4fb: je 0x54f5a2 */
  if (zf) goto L_54f5a2;
L_54f501: /* 54f501: cmp ebx, dword ptr [edi + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54f504: jge 0x54f5a0 */
  if ((sf == of)) goto L_54f5a0;
L_54f50a: /* 54f50a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 54f50d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 54f510: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54f512: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 54f514: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f515: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f516: lea ecx, [ebp - 0x20028] */
  ecx = (uint32_t)(ebp + 0xfffdffd8u);
/* 54f51c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f51d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f51e: mov ecx, edi */
  ecx = edi;
/* 54f520: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x54f526u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f526: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f528: je 0x54f59a */
  if (zf) goto L_54f59a;
L_54f52a: /* 54f52a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54f52d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54f52e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54f531: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54f534: jne 0x54f53d */
  if (!zf) goto L_54f53d;
L_54f536: /* 54f536: mov word ptr [esi], 0x28 */
  W16((uint32_t)(esi), 0x28u);
/* 54f53b: jmp 0x54f542 */
  goto L_54f542;
L_54f53d: /* 54f53d: mov word ptr [esi], 0x2c */
  W16((uint32_t)(esi), 0x2cu);
L_54f542: /* 54f542: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 54f545: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 54f548: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54f54b: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54f54e: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 54f553: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 54f556: jne 0x54f56c */
  if (!zf) goto L_54f56c;
L_54f558: /* 54f558: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54f55b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f55c: push 0x5adf04 */
  { uint32_t v = 0x5adf04u; esp -= 4; W32(esp, v); }
/* 54f561: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f562: call 0x4e4183 */
  esp -= 4; W32(esp, 0x54f567u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 54f567: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f56a: jmp 0x54f57f */
  goto L_54f57f;
L_54f56c: /* 54f56c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f56d: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54f570: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f571: push 0x5adf0c */
  { uint32_t v = 0x5adf0cu; esp -= 4; W32(esp, v); }
/* 54f576: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f577: call 0x4e4183 */
  esp -= 4; W32(esp, 0x54f57cu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 54f57c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54f57f: /* 54f57f: lea edx, [ebp - 0x20028] */
  edx = (uint32_t)(ebp + 0xfffdffd8u);
/* 54f585: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f586: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
/* 54f589: push 0x5adf1c */
  { uint32_t v = 0x5adf1cu; esp -= 4; W32(esp, v); }
/* 54f58e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f58f: call 0x4e4183 */
  esp -= 4; W32(esp, 0x54f594u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 54f594: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f597: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
L_54f59a: /* 54f59a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 54f59b: jmp 0x54f501 */
  goto L_54f501;
L_54f5a0: /* 54f5a0: xor ebx, ebx */
  ebx = 0;
L_54f5a2: /* 54f5a2: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 54f5a5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 54f5a8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54f5ab: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54f5b0u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54f5b0: jmp 0x54f4e4 */
  goto L_54f4e4;
L_54f5b5: /* 54f5b5: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54f5b8: jle 0x54f5c3 */
  if ((zf || sf != of)) goto L_54f5c3;
L_54f5ba: /* 54f5ba: mov word ptr [esi], 0x29 */
  W16((uint32_t)(esi), 0x29u);
/* 54f5bf: mov word ptr [esi + 2], bx */
  W16((uint32_t)(esi + 0x2u), (ebx & 0xffffu));
L_54f5c3: /* 54f5c3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54f5c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54f5c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54f5c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54f5cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54f5d0: mov esp, ebp */
  esp = ebp;
/* 54f5d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54f5d3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_54f5d6(void) {
  LOAD_REGS();
L_54f5d6: /* 54f5d6: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 54f5d9: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54f5de: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 54f5e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f5e2: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 54f5e5: call 0x554df6 */
  esp -= 4; W32(esp, 0x54f5eau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54f5ea(); return;
}

void f_54f5ea(void) {
  LOAD_REGS();
L_54f5ea: /* 54f5ea: push 0x570088 */
  { uint32_t v = 0x570088u; esp -= 4; W32(esp, v); }
/* 54f5ef: push 0x5adf24 */
  { uint32_t v = 0x5adf24u; esp -= 4; W32(esp, v); }
/* 54f5f4: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54f5f9u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54f5f9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54f5fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f5ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54f601: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54f606u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54f606: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f607: push 0x5adf2c */
  { uint32_t v = 0x5adf2cu; esp -= 4; W32(esp, v); }
/* 54f60c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54f611u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54f611: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f614: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54f616: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54f618: call 0x554df6 */
  esp -= 4; W32(esp, 0x54f61du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54f61d: guest_badaddr(0x54f61d); return;
}

void f_54f690(void) {
  LOAD_REGS();
L_54f690: /* 54f690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54f691: mov ebp, esp */
  ebp = esp;
/* 54f693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54f695: push 0x559b30 */
  { uint32_t v = 0x559b30u; esp -= 4; W32(esp, v); }
/* 54f69a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54f6a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f6a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54f6a8: sub esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54f6ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54f6af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f6b0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54f6b3: cmp word ptr [esi], 0x28 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f6b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54f6b8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54f6bb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54f6be: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54f6c5: lea edi, [esi + 2] */
  edi = (uint32_t)(esi + 0x2u);
/* 54f6c8: je 0x54f6e4 */
  if (zf) goto L_54f6e4;
L_54f6ca: /* 54f6ca: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 54f6d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f6d1: push 0x5ae240 */
  { uint32_t v = 0x5ae240u; esp -= 4; W32(esp, v); }
/* 54f6d6: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 54f6db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f6dc: jmp 0x54f762 */
  goto L_54f762;
L_54f6e1: /* 54f6e1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_54f6e4: /* 54f6e4: cmp word ptr [edi], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f6e8: je 0x54f99f */
  if (zf) goto L_54f99f;
L_54f6ee: /* 54f6ee: xor ebx, ebx */
  ebx = 0;
/* 54f6f0: xor ecx, ecx */
  ecx = 0;
L_54f6f2: /* 54f6f2: cmp ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54f6f5: jge 0x54f719 */
  if ((sf == of)) goto L_54f719;
L_54f6f7: /* 54f6f7: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f6fa: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f6fd: je 0x54f719 */
  if (zf) goto L_54f719;
L_54f6ff: /* 54f6ff: cmp ax, 0x3d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f703: je 0x54f719 */
  if (zf) goto L_54f719;
L_54f705: /* 54f705: cmp ax, 0x5b */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f709: je 0x54f719 */
  if (zf) goto L_54f719;
L_54f70b: /* 54f70b: mov word ptr [ebp + ecx*2 - 0xa8], ax */
  W16((uint32_t)(ebp + ecx*2 + 0xffffff58u), (eax & 0xffffu));
/* 54f713: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54f714: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f717: jmp 0x54f6f2 */
  goto L_54f6f2;
L_54f719: /* 54f719: mov word ptr [ebp + ecx*2 - 0xa8], bx */
  W16((uint32_t)(ebp + ecx*2 + 0xffffff58u), (ebx & 0xffffu));
/* 54f721: cmp word ptr [edi], 0x5b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x5bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f725: jne 0x54f78a */
  if (!zf) goto L_54f78a;
L_54f727: /* 54f727: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f72a: mov ecx, edi */
  ecx = edi;
/* 54f72c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_54f730: /* 54f730: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f733: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 54f737: jb 0x54f744 */
  if (cf) goto L_54f744;
L_54f739: /* 54f739: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 54f73d: ja 0x54f744 */
  if ((!cf && !zf)) goto L_54f744;
L_54f73f: /* 54f73f: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f742: jmp 0x54f730 */
  goto L_54f730;
L_54f744: /* 54f744: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f747: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f74a: cmp ax, 0x5d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f74e: je 0x54f77f */
  if (zf) goto L_54f77f;
L_54f750: /* 54f750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f751: push 0x5adf38 */
  { uint32_t v = 0x5adf38u; esp -= 4; W32(esp, v); }
L_54f756: /* 54f756: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 54f75c: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_54f762: /* 54f762: call 0x4e30df */
  esp -= 4; W32(esp, 0x54f767u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54f767: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f76a: xor eax, eax */
  eax = 0;
/* 54f76c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54f76f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54f776: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54f777: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54f778: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54f779: mov esp, ebp */
  esp = ebp;
/* 54f77b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54f77c: ret 0xc */
  esp += 16; SPILL(); return;
L_54f77f: /* 54f77f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f780: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x54f785u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 54f785: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f788: mov ebx, eax */
  ebx = eax;
L_54f78a: /* 54f78a: mov dx, word ptr [edi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f78d: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f790: cmp dx, 0x3d */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x3du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f794: je 0x54f7a9 */
  if (zf) goto L_54f7a9;
L_54f796: /* 54f796: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 54f79b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f79c: push 0x5adf90 */
  { uint32_t v = 0x5adf90u; esp -= 4; W32(esp, v); }
/* 54f7a1: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f7a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f7a7: jmp 0x54f762 */
  goto L_54f762;
L_54f7a9: /* 54f7a9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54f7ab: jge 0x54f7b5 */
  if ((sf == of)) goto L_54f7b5;
L_54f7ad: /* 54f7ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f7ae: push 0x5adfd8 */
  { uint32_t v = 0x5adfd8u; esp -= 4; W32(esp, v); }
/* 54f7b3: jmp 0x54f756 */
  goto L_54f756;
L_54f7b5: /* 54f7b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54f7b7: lea edx, [ebp - 0xa8] */
  edx = (uint32_t)(ebp + 0xffffff58u);
/* 54f7bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f7be: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 54f7c1: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x54f7c6u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 54f7c6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54f7c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f7cb: je 0x54f893 */
  if (zf) goto L_54f893;
L_54f7d1: /* 54f7d1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54f7d4: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 54f7d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f7d9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 54f7dc: je 0x54f7e6 */
  if (zf) goto L_54f7e6;
L_54f7de: /* 54f7de: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 54f7e1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54f7e4: jmp 0x54f7ed */
  goto L_54f7ed;
L_54f7e6: /* 54f7e6: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_54f7ed: /* 54f7ed: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 54f7f0: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54f7f5u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54f7f5: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54f7f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f7fa: je 0x54f886 */
  if (zf) goto L_54f886;
L_54f800: /* 54f800: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 54f803: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54f806: jne 0x54f87b */
  if (!zf) goto L_54f87b;
L_54f808: /* 54f808: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 54f80b: imul edx, dword ptr [esi + 0x34] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x34u)));
  edx = (uint32_t)r;
  }
/* 54f80f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f811: je 0x54f87b */
  if (zf) goto L_54f87b;
L_54f813: /* 54f813: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54f815: mov ecx, esi */
  ecx = esi;
/* 54f817: call dword ptr [eax + 0xb0] */
  { uint32_t t = R32((uint32_t)(eax + 0xb0u)); esp -= 4; W32(esp, 0x54f81du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f81d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f81f: je 0x54f87b */
  if (zf) goto L_54f87b;
L_54f821: /* 54f821: cmp ebx, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54f824: jl 0x54f840 */
  if ((sf != of)) goto L_54f840;
L_54f826: /* 54f826: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54f829: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54f82f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f830: push 0x5ae028 */
  { uint32_t v = 0x5ae028u; esp -= 4; W32(esp, v); }
/* 54f835: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f83a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f83b: jmp 0x54f762 */
  goto L_54f762;
L_54f840: /* 54f840: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 54f843: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 54f846: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 54f849: mov ebx, dword ptr [esi + 0x48] */
  ebx = R32((uint32_t)(esi + 0x48u));
/* 54f84c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54f84e: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 54f851: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f852: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54f855: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54f857: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54f859: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f85a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54f85b: mov ecx, esi */
  ecx = esi;
/* 54f85d: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x54f863u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f863: mov edi, eax */
  edi = eax;
/* 54f865: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f867: jne 0x54f976 */
  if (!zf) goto L_54f976;
L_54f86d: /* 54f86d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54f870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f871: push 0x5ae084 */
  { uint32_t v = 0x5ae084u; esp -= 4; W32(esp, v); }
/* 54f876: jmp 0x54f756 */
  goto L_54f756;
L_54f87b: /* 54f87b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 54f87e: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 54f881: jmp 0x54f7ed */
  goto L_54f7ed;
L_54f886: /* 54f886: xor eax, eax */
  eax = 0;
/* 54f888: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f88a: jne 0x54f976 */
  if (!zf) goto L_54f976;
L_54f890: /* 54f890: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_54f893: /* 54f893: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54f896: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 54f899: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54f89f: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 54f8a2: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54f8a8: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54f8ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f8ac: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 54f8b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f8b3: push 0x5ae0b8 */
  { uint32_t v = 0x5ae0b8u; esp -= 4; W32(esp, v); }
/* 54f8b8: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f8bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f8be: call 0x4e30df */
  esp -= 4; W32(esp, 0x54f8c3u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54f8c3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f8c6: xor ecx, ecx */
  ecx = 0;
/* 54f8c8: jmp 0x54f8d0 */
  goto L_54f8d0;
L_54f8d0: /* 54f8d0: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f8d3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 54f8d6: je 0x54f95b */
  if (zf) goto L_54f95b;
L_54f8dc: /* 54f8dc: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f8e0: je 0x54f95b */
  if (zf) goto L_54f95b;
L_54f8e2: /* 54f8e2: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f8e6: je 0x54f95b */
  if (zf) goto L_54f95b;
L_54f8e8: /* 54f8e8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54f8ea: jg 0x54f8f8 */
  if ((!zf && sf == of)) goto L_54f8f8;
L_54f8ec: /* 54f8ec: cmp ax, 0x29 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f8f0: je 0x54f95b */
  if (zf) goto L_54f95b;
L_54f8f2: /* 54f8f2: cmp ax, 0x2c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f8f6: je 0x54f95b */
  if (zf) goto L_54f95b;
L_54f8f8: /* 54f8f8: cmp ax, 0x22 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f8fc: jne 0x54f93b */
  if (!zf) goto L_54f93b;
L_54f8fe: /* 54f8fe: mov edi, edi */
  edi = edi;
L_54f900: /* 54f900: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f903: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 54f906: je 0x54f91f */
  if (zf) goto L_54f91f;
L_54f908: /* 54f908: cmp ax, 0x22 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f90c: je 0x54f942 */
  if (zf) goto L_54f942;
L_54f90e: /* 54f90e: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f912: je 0x54f91f */
  if (zf) goto L_54f91f;
L_54f914: /* 54f914: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f918: je 0x54f91f */
  if (zf) goto L_54f91f;
L_54f91a: /* 54f91a: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f91d: jmp 0x54f900 */
  goto L_54f900;
L_54f91f: /* 54f91f: cmp word ptr [edi], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f923: je 0x54f942 */
  if (zf) goto L_54f942;
L_54f925: /* 54f925: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 54f92a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f92b: push 0x5ae0e8 */
  { uint32_t v = 0x5ae0e8u; esp -= 4; W32(esp, v); }
/* 54f930: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f935: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f936: jmp 0x54f762 */
  goto L_54f762;
L_54f93b: /* 54f93b: cmp ax, 0x28 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f93f: jne 0x54f947 */
  if (!zf) goto L_54f947;
L_54f941: /* 54f941: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_54f942: /* 54f942: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f945: jmp 0x54f8d0 */
  goto L_54f8d0;
L_54f947: /* 54f947: cmp ax, 0x29 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f94b: jne 0x54f942 */
  if (!zf) goto L_54f942;
L_54f94d: /* 54f94d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 54f94e: jns 0x54f942 */
  if (!sf) goto L_54f942;
L_54f950: /* 54f950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f951: push 0x5ae138 */
  { uint32_t v = 0x5ae138u; esp -= 4; W32(esp, v); }
/* 54f956: jmp 0x54f756 */
  goto L_54f756;
L_54f95b: /* 54f95b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54f95d: jle 0x54f976 */
  if ((zf || sf != of)) goto L_54f976;
L_54f95f: /* 54f95f: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54f965: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f966: push 0x5ae190 */
  { uint32_t v = 0x5ae190u; esp -= 4; W32(esp, v); }
/* 54f96b: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f970: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f971: jmp 0x54f762 */
  goto L_54f762;
L_54f976: /* 54f976: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f979: cmp ax, 0x2c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f97d: jne 0x54f987 */
  if (!zf) goto L_54f987;
L_54f97f: /* 54f97f: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f982: jmp 0x54f6e1 */
  goto L_54f6e1;
L_54f987: /* 54f987: cmp ax, 0x29 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f98b: je 0x54f6e1 */
  if (zf) goto L_54f6e1;
L_54f991: /* 54f991: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54f994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f995: push 0x5ae1f8 */
  { uint32_t v = 0x5ae1f8u; esp -= 4; W32(esp, v); }
/* 54f99a: jmp 0x54f756 */
  goto L_54f756;
L_54f99f: /* 54f99f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54f9a2: lea eax, [edi + 2] */
  eax = (uint32_t)(edi + 0x2u);
/* 54f9a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54f9a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54f9a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54f9ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54f9af: mov esp, ebp */
  esp = ebp;
/* 54f9b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54f9b2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54f8ca(void) {
  LOAD_REGS();
  goto L_54f8ca;
L_54f6e1: /* 54f6e1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54f6e4: cmp word ptr [edi], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f6e8: je 0x54f99f */
  if (zf) goto L_54f99f;
L_54f6ee: /* 54f6ee: xor ebx, ebx */
  ebx = 0;
/* 54f6f0: xor ecx, ecx */
  ecx = 0;
L_54f6f2: /* 54f6f2: cmp ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54f6f5: jge 0x54f719 */
  if ((sf == of)) goto L_54f719;
L_54f6f7: /* 54f6f7: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f6fa: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f6fd: je 0x54f719 */
  if (zf) goto L_54f719;
L_54f6ff: /* 54f6ff: cmp ax, 0x3d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f703: je 0x54f719 */
  if (zf) goto L_54f719;
L_54f705: /* 54f705: cmp ax, 0x5b */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f709: je 0x54f719 */
  if (zf) goto L_54f719;
L_54f70b: /* 54f70b: mov word ptr [ebp + ecx*2 - 0xa8], ax */
  W16((uint32_t)(ebp + ecx*2 + 0xffffff58u), (eax & 0xffffu));
/* 54f713: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54f714: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f717: jmp 0x54f6f2 */
  goto L_54f6f2;
L_54f719: /* 54f719: mov word ptr [ebp + ecx*2 - 0xa8], bx */
  W16((uint32_t)(ebp + ecx*2 + 0xffffff58u), (ebx & 0xffffu));
/* 54f721: cmp word ptr [edi], 0x5b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x5bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f725: jne 0x54f78a */
  if (!zf) goto L_54f78a;
L_54f727: /* 54f727: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f72a: mov ecx, edi */
  ecx = edi;
/* 54f72c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_54f730: /* 54f730: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f733: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 54f737: jb 0x54f744 */
  if (cf) goto L_54f744;
L_54f739: /* 54f739: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 54f73d: ja 0x54f744 */
  if ((!cf && !zf)) goto L_54f744;
L_54f73f: /* 54f73f: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f742: jmp 0x54f730 */
  goto L_54f730;
L_54f744: /* 54f744: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f747: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f74a: cmp ax, 0x5d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f74e: je 0x54f77f */
  if (zf) goto L_54f77f;
L_54f750: /* 54f750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f751: push 0x5adf38 */
  { uint32_t v = 0x5adf38u; esp -= 4; W32(esp, v); }
L_54f756: /* 54f756: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 54f75c: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_54f762: /* 54f762: call 0x4e30df */
  esp -= 4; W32(esp, 0x54f767u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54f767: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f76a: xor eax, eax */
  eax = 0;
/* 54f76c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54f76f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54f776: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54f777: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54f778: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54f779: mov esp, ebp */
  esp = ebp;
/* 54f77b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54f77c: ret 0xc */
  esp += 16; SPILL(); return;
L_54f77f: /* 54f77f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f780: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x54f785u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 54f785: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f788: mov ebx, eax */
  ebx = eax;
L_54f78a: /* 54f78a: mov dx, word ptr [edi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f78d: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f790: cmp dx, 0x3d */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x3du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f794: je 0x54f7a9 */
  if (zf) goto L_54f7a9;
L_54f796: /* 54f796: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 54f79b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f79c: push 0x5adf90 */
  { uint32_t v = 0x5adf90u; esp -= 4; W32(esp, v); }
/* 54f7a1: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f7a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f7a7: jmp 0x54f762 */
  goto L_54f762;
L_54f7a9: /* 54f7a9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54f7ab: jge 0x54f7b5 */
  if ((sf == of)) goto L_54f7b5;
L_54f7ad: /* 54f7ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f7ae: push 0x5adfd8 */
  { uint32_t v = 0x5adfd8u; esp -= 4; W32(esp, v); }
/* 54f7b3: jmp 0x54f756 */
  goto L_54f756;
L_54f7b5: /* 54f7b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54f7b7: lea edx, [ebp - 0xa8] */
  edx = (uint32_t)(ebp + 0xffffff58u);
/* 54f7bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f7be: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 54f7c1: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x54f7c6u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 54f7c6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54f7c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f7cb: je 0x54f893 */
  if (zf) goto L_54f893;
L_54f7d1: /* 54f7d1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54f7d4: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 54f7d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f7d9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 54f7dc: je 0x54f7e6 */
  if (zf) goto L_54f7e6;
L_54f7de: /* 54f7de: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 54f7e1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54f7e4: jmp 0x54f7ed */
  goto L_54f7ed;
L_54f7e6: /* 54f7e6: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_54f7ed: /* 54f7ed: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 54f7f0: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54f7f5u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54f7f5: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54f7f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f7fa: je 0x54f886 */
  if (zf) goto L_54f886;
L_54f800: /* 54f800: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 54f803: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54f806: jne 0x54f87b */
  if (!zf) goto L_54f87b;
L_54f808: /* 54f808: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 54f80b: imul edx, dword ptr [esi + 0x34] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x34u)));
  edx = (uint32_t)r;
  }
/* 54f80f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f811: je 0x54f87b */
  if (zf) goto L_54f87b;
L_54f813: /* 54f813: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54f815: mov ecx, esi */
  ecx = esi;
/* 54f817: call dword ptr [eax + 0xb0] */
  { uint32_t t = R32((uint32_t)(eax + 0xb0u)); esp -= 4; W32(esp, 0x54f81du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f81d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f81f: je 0x54f87b */
  if (zf) goto L_54f87b;
L_54f821: /* 54f821: cmp ebx, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54f824: jl 0x54f840 */
  if ((sf != of)) goto L_54f840;
L_54f826: /* 54f826: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54f829: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54f82f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f830: push 0x5ae028 */
  { uint32_t v = 0x5ae028u; esp -= 4; W32(esp, v); }
/* 54f835: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f83a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f83b: jmp 0x54f762 */
  goto L_54f762;
L_54f840: /* 54f840: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 54f843: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 54f846: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 54f849: mov ebx, dword ptr [esi + 0x48] */
  ebx = R32((uint32_t)(esi + 0x48u));
/* 54f84c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54f84e: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 54f851: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f852: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54f855: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54f857: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54f859: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f85a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54f85b: mov ecx, esi */
  ecx = esi;
/* 54f85d: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x54f863u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54f863: mov edi, eax */
  edi = eax;
/* 54f865: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f867: jne 0x54f976 */
  if (!zf) goto L_54f976;
L_54f86d: /* 54f86d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54f870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f871: push 0x5ae084 */
  { uint32_t v = 0x5ae084u; esp -= 4; W32(esp, v); }
/* 54f876: jmp 0x54f756 */
  goto L_54f756;
L_54f87b: /* 54f87b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 54f87e: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 54f881: jmp 0x54f7ed */
  goto L_54f7ed;
L_54f886: /* 54f886: xor eax, eax */
  eax = 0;
/* 54f888: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54f88a: jne 0x54f976 */
  if (!zf) goto L_54f976;
L_54f890: /* 54f890: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_54f893: /* 54f893: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54f896: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 54f899: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54f89f: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 54f8a2: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54f8a8: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54f8ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f8ac: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 54f8b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f8b3: push 0x5ae0b8 */
  { uint32_t v = 0x5ae0b8u; esp -= 4; W32(esp, v); }
/* 54f8b8: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f8bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f8be: call 0x4e30df */
  esp -= 4; W32(esp, 0x54f8c3u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54f8c3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f8c6: xor ecx, ecx */
  ecx = 0;
/* 54f8c8: jmp 0x54f8d0 */
  goto L_54f8d0;
L_54f8ca: /* 54f8ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_54f8d0: /* 54f8d0: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f8d3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 54f8d6: je 0x54f95b */
  if (zf) goto L_54f95b;
L_54f8dc: /* 54f8dc: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f8e0: je 0x54f95b */
  if (zf) goto L_54f95b;
L_54f8e2: /* 54f8e2: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f8e6: je 0x54f95b */
  if (zf) goto L_54f95b;
L_54f8e8: /* 54f8e8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54f8ea: jg 0x54f8f8 */
  if ((!zf && sf == of)) goto L_54f8f8;
L_54f8ec: /* 54f8ec: cmp ax, 0x29 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f8f0: je 0x54f95b */
  if (zf) goto L_54f95b;
L_54f8f2: /* 54f8f2: cmp ax, 0x2c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f8f6: je 0x54f95b */
  if (zf) goto L_54f95b;
L_54f8f8: /* 54f8f8: cmp ax, 0x22 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f8fc: jne 0x54f93b */
  if (!zf) goto L_54f93b;
L_54f8fe: /* 54f8fe: mov edi, edi */
  edi = edi;
L_54f900: /* 54f900: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f903: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 54f906: je 0x54f91f */
  if (zf) goto L_54f91f;
L_54f908: /* 54f908: cmp ax, 0x22 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f90c: je 0x54f942 */
  if (zf) goto L_54f942;
L_54f90e: /* 54f90e: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f912: je 0x54f91f */
  if (zf) goto L_54f91f;
L_54f914: /* 54f914: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f918: je 0x54f91f */
  if (zf) goto L_54f91f;
L_54f91a: /* 54f91a: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f91d: jmp 0x54f900 */
  goto L_54f900;
L_54f91f: /* 54f91f: cmp word ptr [edi], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f923: je 0x54f942 */
  if (zf) goto L_54f942;
L_54f925: /* 54f925: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 54f92a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f92b: push 0x5ae0e8 */
  { uint32_t v = 0x5ae0e8u; esp -= 4; W32(esp, v); }
/* 54f930: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f935: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f936: jmp 0x54f762 */
  goto L_54f762;
L_54f93b: /* 54f93b: cmp ax, 0x28 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f93f: jne 0x54f947 */
  if (!zf) goto L_54f947;
L_54f941: /* 54f941: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_54f942: /* 54f942: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f945: jmp 0x54f8d0 */
  goto L_54f8d0;
L_54f947: /* 54f947: cmp ax, 0x29 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f94b: jne 0x54f942 */
  if (!zf) goto L_54f942;
L_54f94d: /* 54f94d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 54f94e: jns 0x54f942 */
  if (!sf) goto L_54f942;
L_54f950: /* 54f950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f951: push 0x5ae138 */
  { uint32_t v = 0x5ae138u; esp -= 4; W32(esp, v); }
/* 54f956: jmp 0x54f756 */
  goto L_54f756;
L_54f95b: /* 54f95b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54f95d: jle 0x54f976 */
  if ((zf || sf != of)) goto L_54f976;
L_54f95f: /* 54f95f: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 54f965: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54f966: push 0x5ae190 */
  { uint32_t v = 0x5ae190u; esp -= 4; W32(esp, v); }
/* 54f96b: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 54f970: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54f971: jmp 0x54f762 */
  goto L_54f762;
L_54f976: /* 54f976: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 54f979: cmp ax, 0x2c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f97d: jne 0x54f987 */
  if (!zf) goto L_54f987;
L_54f97f: /* 54f97f: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54f982: jmp 0x54f6e1 */
  goto L_54f6e1;
L_54f987: /* 54f987: cmp ax, 0x29 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54f98b: je 0x54f6e1 */
  if (zf) goto L_54f6e1;
L_54f991: /* 54f991: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54f994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f995: push 0x5ae1f8 */
  { uint32_t v = 0x5ae1f8u; esp -= 4; W32(esp, v); }
/* 54f99a: jmp 0x54f756 */
  goto L_54f756;
L_54f99f: /* 54f99f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54f9a2: lea eax, [edi + 2] */
  eax = (uint32_t)(edi + 0x2u);
/* 54f9a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54f9a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54f9a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54f9ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54f9af: mov esp, ebp */
  esp = ebp;
/* 54f9b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54f9b2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54f9b5(void) {
  LOAD_REGS();
L_54f9b5: /* 54f9b5: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 54f9b8: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54f9bd: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 54f9c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54f9c1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 54f9c4: call 0x554df6 */
  esp -= 4; W32(esp, 0x54f9c9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54f9c9(); return;
}

void f_54f9c9(void) {
  LOAD_REGS();
L_54f9c9: /* 54f9c9: push 0x5700d4 */
  { uint32_t v = 0x5700d4u; esp -= 4; W32(esp, v); }
/* 54f9ce: push 0x5ae28c */
  { uint32_t v = 0x5ae28cu; esp -= 4; W32(esp, v); }
/* 54f9d3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54f9d8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54f9d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54f9db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f9de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54f9e0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54f9e5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54f9e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54f9e6: push 0x5ae294 */
  { uint32_t v = 0x5ae294u; esp -= 4; W32(esp, v); }
/* 54f9eb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54f9f0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54f9f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54f9f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54f9f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54f9f7: call 0x554df6 */
  esp -= 4; W32(esp, 0x54f9fcu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54f9fc: guest_badaddr(0x54f9fc); return;
}

void f_54fae0(void) {
  LOAD_REGS();
L_54fae0: /* 54fae0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54fae3: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 54fae6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54fae8: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 54faec: je 0x54faf7 */
  if (zf) goto L_54faf7;
L_54faee: /* 54faee: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 54faf1: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 54faf5: jmp 0x54faff */
  goto L_54faff;
L_54faf7: /* 54faf7: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
L_54faff: /* 54faff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54fb00: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 54fb04: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54fb09u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54fb09: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 54fb0d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54fb0f: je 0x54fb50 */
  if (zf) goto L_54fb50;
L_54fb11: /* 54fb11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54fb12: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 54fb16: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54fb17: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 54fb1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54fb1c: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
L_54fb20: /* 54fb20: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 54fb23: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54fb25: lea ecx, [eax + ebx] */
  ecx = (uint32_t)(eax + ebx);
/* 54fb28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54fb29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54fb2a: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54fb2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fb2d: mov ecx, esi */
  ecx = esi;
/* 54fb2f: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x54fb35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54fb35: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 54fb38: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 54fb3c: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 54fb40: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54fb45u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54fb45: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 54fb49: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54fb4b: jne 0x54fb20 */
  if (!zf) goto L_54fb20;
L_54fb4d: /* 54fb4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54fb4e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54fb4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_54fb50: /* 54fb50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54fb51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54fb54: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54fb80(void) {
  LOAD_REGS();
L_54fb80: /* 54fb80: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 54fb84: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54fb88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54fb89: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 54fb8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fb8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fb91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fb92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54fb93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54fb95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54fb96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fb98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fb9a: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x54fba0u); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 54fba0: mov eax, esi */
  eax = esi;
/* 54fba2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54fba3: ret  */
  esp += 4; SPILL(); return;
}

void f_54fbc0(void) {
  LOAD_REGS();
L_54fbc0: /* 54fbc0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 54fbc4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54fbc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54fbc9: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 54fbcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fbcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fbd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fbd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54fbd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54fbd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54fbd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fbd8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54fbda: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x54fbe0u); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 54fbe0: mov eax, esi */
  eax = esi;
/* 54fbe2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54fbe3: ret  */
  esp += 4; SPILL(); return;
}

void f_54fc00(void) {
  LOAD_REGS();
L_54fc00: /* 54fc00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 54fc04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc0c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54fc0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fc0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc13: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x54fc19u); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 54fc19: ret  */
  esp += 4; SPILL(); return;
}

void f_54fc30(void) {
  LOAD_REGS();
L_54fc30: /* 54fc30: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 54fc34: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54fc38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54fc39: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 54fc3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fc3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54fc3f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54fc41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54fc42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc46: call dword ptr [0x6ac504] */
  esp -= 4; W32(esp, 0x54fc4cu); SPILL(); call_ind(R32(0x6ac504u)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 54fc4c: mov eax, esi */
  eax = esi;
/* 54fc4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54fc4f: ret  */
  esp += 4; SPILL(); return;
}

void f_54fc60(void) {
  LOAD_REGS();
L_54fc60: /* 54fc60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 54fc64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc68: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54fc6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fc6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fc6f: call dword ptr [0x6ac504] */
  esp -= 4; W32(esp, 0x54fc75u); SPILL(); call_ind(R32(0x6ac504u)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 54fc75: ret  */
  esp += 4; SPILL(); return;
}

void f_54fc90(void) {
  LOAD_REGS();
L_54fc90: /* 54fc90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54fc91: mov ebp, esp */
  ebp = esp;
/* 54fc93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54fc95: push 0x559b40 */
  { uint32_t v = 0x559b40u; esp -= 4; W32(esp, v); }
/* 54fc9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54fca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54fca8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54fcab: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 54fcb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54fcb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54fcb2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54fcb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54fcb6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54fcb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54fcba: push 0x5ae630 */
  { uint32_t v = 0x5ae630u; esp -= 4; W32(esp, v); }
/* 54fcbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fcc0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54fcc7: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54fcccu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54fccc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54fccf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54fcd1: je 0x54fcdb */
  if (zf) goto L_54fcdb;
L_54fcd3: /* 54fcd3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54fcd5: call dword ptr [0x6ac508] */
  esp -= 4; W32(esp, 0x54fcdbu); SPILL(); call_ind(R32(0x6ac508u)); if (g_unwind) return; /* KERNEL32!ExitProcess */ RELOAD();
L_54fcdb: /* 54fcdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fcdd: call dword ptr [0x6ac780] */
  esp -= 4; W32(esp, 0x54fce3u); SPILL(); call_ind(R32(0x6ac780u)); if (g_unwind) return; /* USER32!PostQuitMessage */ RELOAD();
/* 54fce3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54fce6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54fce7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54fce8: mov dword ptr [0x5b2148], 1 */
  W32((uint32_t)(0x5b2148u), 0x1u);
/* 54fcf2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54fcf9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54fcfa: mov esp, ebp */
  esp = ebp;
/* 54fcfc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54fcfd: ret  */
  esp += 4; SPILL(); return;
}

void f_54fcfe(void) {
  LOAD_REGS();
L_54fcfe: /* 54fcfe: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54fd01: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54fd06: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54fd09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54fd0a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54fd0d: call 0x554df6 */
  esp -= 4; W32(esp, 0x54fd12u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54fd12(); return;
}

void f_54fd12(void) {
  LOAD_REGS();
L_54fd12: /* 54fd12: push 0x570118 */
  { uint32_t v = 0x570118u; esp -= 4; W32(esp, v); }
/* 54fd17: push 0x5ae658 */
  { uint32_t v = 0x5ae658u; esp -= 4; W32(esp, v); }
/* 54fd1c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54fd21u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54fd21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54fd24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fd26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fd28: call 0x554df6 */
  esp -= 4; W32(esp, 0x54fd2du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54fd2d: guest_badaddr(0x54fd2d); return;
}

void f_54fd60(void) {
  LOAD_REGS();
L_54fd60: /* 54fd60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54fd61: mov ebp, esp */
  ebp = esp;
/* 54fd63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54fd65: push 0x559b50 */
  { uint32_t v = 0x559b50u; esp -= 4; W32(esp, v); }
/* 54fd6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54fd70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fd71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54fd78: sub esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54fd7e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54fd81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54fd83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54fd84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54fd85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54fd86: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54fd89: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54fd90: mov word ptr [0x6aa4b8], 0 */
  W16((uint32_t)(0x6aa4b8u), 0x0u);
/* 54fd99: jne 0x54fda1 */
  if (!zf) goto L_54fda1;
L_54fd9b: /* 54fd9b: call dword ptr [0x6ac514] */
  esp -= 4; W32(esp, 0x54fda1u); SPILL(); call_ind(R32(0x6ac514u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
L_54fda1: /* 54fda1: mov ecx, dword ptr [0x5b3184] */
  ecx = R32((uint32_t)(0x5b3184u));
/* 54fda7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54fda9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fdab: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 54fdb0: jne 0x54fded */
  if (!zf) goto L_54fded;
L_54fdb2: /* 54fdb2: lea ecx, [ebp - 0x418] */
  ecx = (uint32_t)(ebp + 0xfffffbe8u);
/* 54fdb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54fdb9: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 54fdbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fdbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fdc1: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 54fdc6: call dword ptr [0x6ac510] */
  esp -= 4; W32(esp, 0x54fdccu); SPILL(); call_ind(R32(0x6ac510u)); if (g_unwind) return; /* KERNEL32!FormatMessageA */ RELOAD();
/* 54fdcc: lea edx, [ebp - 0x418] */
  edx = (uint32_t)(ebp + 0xfffffbe8u);
/* 54fdd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fdd4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54fdd5: call 0x4e161d */
  esp -= 4; W32(esp, 0x54fddau); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 54fdda: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54fddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fdde: push 0x6aa4b8 */
  { uint32_t v = 0x6aa4b8u; esp -= 4; W32(esp, v); }
/* 54fde3: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x54fde8u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 54fde8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54fdeb: jmp 0x54fe05 */
  goto L_54fe05;
L_54fded: /* 54fded: push 0x6aa4b8 */
  { uint32_t v = 0x6aa4b8u; esp -= 4; W32(esp, v); }
/* 54fdf2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 54fdf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54fdf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fdfa: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 54fdff: call dword ptr [0x6ac50c] */
  esp -= 4; W32(esp, 0x54fe05u); SPILL(); call_ind(R32(0x6ac50cu)); if (g_unwind) return; /* KERNEL32!FormatMessageW */ RELOAD();
L_54fe05: /* 54fe05: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 54fe07: push 0x6aa4b8 */
  { uint32_t v = 0x6aa4b8u; esp -= 4; W32(esp, v); }
/* 54fe0c: call 0x4e1abe */
  esp -= 4; W32(esp, 0x54fe11u); SPILL(); f_4e1abe(); if (g_unwind) return; RELOAD();
/* 54fe11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54fe14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54fe16: je 0x54fe2c */
  if (zf) goto L_54fe2c;
L_54fe18: /* 54fe18: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 54fe1a: push 0x6aa4b8 */
  { uint32_t v = 0x6aa4b8u; esp -= 4; W32(esp, v); }
/* 54fe1f: call 0x4e1abe */
  esp -= 4; W32(esp, 0x54fe24u); SPILL(); f_4e1abe(); if (g_unwind) return; RELOAD();
/* 54fe24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54fe27: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
L_54fe2c: /* 54fe2c: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 54fe2e: push 0x6aa4b8 */
  { uint32_t v = 0x6aa4b8u; esp -= 4; W32(esp, v); }
/* 54fe33: call 0x4e1abe */
  esp -= 4; W32(esp, 0x54fe38u); SPILL(); f_4e1abe(); if (g_unwind) return; RELOAD();
/* 54fe38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54fe3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54fe3d: je 0x54fe53 */
  if (zf) goto L_54fe53;
L_54fe3f: /* 54fe3f: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 54fe41: push 0x6aa4b8 */
  { uint32_t v = 0x6aa4b8u; esp -= 4; W32(esp, v); }
/* 54fe46: call 0x4e1abe */
  esp -= 4; W32(esp, 0x54fe4bu); SPILL(); f_4e1abe(); if (g_unwind) return; RELOAD();
/* 54fe4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54fe4e: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
L_54fe53: /* 54fe53: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54fe56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54fe57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54fe58: mov eax, 0x6aa4b8 */
  eax = 0x6aa4b8u;
/* 54fe5d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54fe64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54fe65: mov esp, ebp */
  esp = ebp;
/* 54fe67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54fe68: ret  */
  esp += 4; SPILL(); return;
}

void f_54fe69(void) {
  LOAD_REGS();
L_54fe69: /* 54fe69: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54fe6c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54fe71: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54fe74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54fe75: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54fe78: call 0x554df6 */
  esp -= 4; W32(esp, 0x54fe7du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54fe7d(); return;
}

void f_54fe7d(void) {
  LOAD_REGS();
L_54fe7d: /* 54fe7d: push 0x570138 */
  { uint32_t v = 0x570138u; esp -= 4; W32(esp, v); }
/* 54fe82: push 0x5ae660 */
  { uint32_t v = 0x5ae660u; esp -= 4; W32(esp, v); }
/* 54fe87: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54fe8cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54fe8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54fe8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fe91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54fe93: call 0x554df6 */
  esp -= 4; W32(esp, 0x54fe98u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54fe98: guest_badaddr(0x54fe98); return;
}

void f_54fef0(void) {
  LOAD_REGS();
L_54fef0: /* 54fef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54fef1: mov ebp, esp */
  ebp = esp;
/* 54fef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54fef5: push 0x559b60 */
  { uint32_t v = 0x559b60u; esp -= 4; W32(esp, v); }
/* 54fefa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54ff00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ff01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54ff08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54ff0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54ff0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54ff10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ff11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ff12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54ff13: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54ff16: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54ff1d: je 0x54ff28 */
  if (zf) goto L_54ff28;
L_54ff1f: /* 54ff1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ff20: call 0x54fef0 */
  esp -= 4; W32(esp, 0x54ff25u); SPILL(); f_54fef0(); if (g_unwind) return; RELOAD();
/* 54ff25: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54ff28: /* 54ff28: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54ff2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54ff2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ff2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54ff34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ff35: mov esp, ebp */
  esp = ebp;
/* 54ff37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54ff38: ret  */
  esp += 4; SPILL(); return;
}

void f_54ff39(void) {
  LOAD_REGS();
L_54ff39: /* 54ff39: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54ff3c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54ff41: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54ff44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ff45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54ff48: call 0x554df6 */
  esp -= 4; W32(esp, 0x54ff4du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54ff4d(); return;
}

void f_54ff4d(void) {
  LOAD_REGS();
L_54ff4d: /* 54ff4d: push 0x570174 */
  { uint32_t v = 0x570174u; esp -= 4; W32(esp, v); }
/* 54ff52: push 0x5ae668 */
  { uint32_t v = 0x5ae668u; esp -= 4; W32(esp, v); }
/* 54ff57: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54ff5cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54ff5c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ff5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ff61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ff63: call 0x554df6 */
  esp -= 4; W32(esp, 0x54ff68u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54ff68: guest_badaddr(0x54ff68); return;
}

void f_54ff90(void) {
  LOAD_REGS();
L_54ff90: /* 54ff90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54ff91: mov ebp, esp */
  ebp = esp;
/* 54ff93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54ff95: push 0x559b70 */
  { uint32_t v = 0x559b70u; esp -= 4; W32(esp, v); }
/* 54ff9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54ffa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ffa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54ffa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54ffab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ffac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ffad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54ffae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54ffb1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54ffb8: call dword ptr [0x6ac794] */
  esp -= 4; W32(esp, 0x54ffbeu); SPILL(); call_ind(R32(0x6ac794u)); if (g_unwind) return; /* USER32!GetActiveWindow */ RELOAD();
/* 54ffbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ffbf: call dword ptr [0x6ac778] */
  esp -= 4; W32(esp, 0x54ffc5u); SPILL(); call_ind(R32(0x6ac778u)); if (g_unwind) return; /* USER32!OpenClipboard */ RELOAD();
/* 54ffc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54ffc7: je 0x550162 */
  if (zf) goto L_550162;
L_54ffcd: /* 54ffcd: call dword ptr [0x6ac788] */
  esp -= 4; W32(esp, 0x54ffd3u); SPILL(); call_ind(R32(0x6ac788u)); if (g_unwind) return; /* USER32!EmptyClipboard */ RELOAD();
/* 54ffd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54ffd5: jne 0x54ffee */
  if (!zf) goto L_54ffee;
L_54ffd7: /* 54ffd7: push 0x19d */
  { uint32_t v = 0x19du; esp -= 4; W32(esp, v); }
/* 54ffdc: push 0x5aeaf8 */
  { uint32_t v = 0x5aeaf8u; esp -= 4; W32(esp, v); }
/* 54ffe1: push 0x5aeb08 */
  { uint32_t v = 0x5aeb08u; esp -= 4; W32(esp, v); }
/* 54ffe6: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54ffebu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54ffeb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54ffee: /* 54ffee: mov eax, dword ptr [0x5a2f68] */
  eax = R32((uint32_t)(0x5a2f68u));
/* 54fff3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54fff5: je 0x5500a8 */
  if (zf) goto L_5500a8;
L_54fffb: /* 54fffb: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 550000: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550002: jne 0x5500a8 */
  if (!zf) goto L_5500a8;
L_550008: /* 550008: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 55000b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55000d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55000f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550011: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550013: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550015: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550016: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550018: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55001a: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x550020u); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 550020: mov edi, eax */
  edi = eax;
/* 550022: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 550025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550026: push 0x2002 */
  { uint32_t v = 0x2002u; esp -= 4; W32(esp, v); }
/* 55002b: call dword ptr [0x6ac520] */
  esp -= 4; W32(esp, 0x550031u); SPILL(); call_ind(R32(0x6ac520u)); if (g_unwind) return; /* KERNEL32!GlobalAlloc */ RELOAD();
/* 550031: mov esi, eax */
  esi = eax;
/* 550033: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550035: jne 0x55004e */
  if (!zf) goto L_55004e;
L_550037: /* 550037: push 0x1a4 */
  { uint32_t v = 0x1a4u; esp -= 4; W32(esp, v); }
/* 55003c: push 0x5aeb1c */
  { uint32_t v = 0x5aeb1cu; esp -= 4; W32(esp, v); }
/* 550041: push 0x5aeb2c */
  { uint32_t v = 0x5aeb2cu; esp -= 4; W32(esp, v); }
/* 550046: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55004bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55004b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_55004e: /* 55004e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55004f: call dword ptr [0x6ac51c] */
  esp -= 4; W32(esp, 0x550055u); SPILL(); call_ind(R32(0x6ac51cu)); if (g_unwind) return; /* KERNEL32!GlobalLock */ RELOAD();
/* 550055: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 550058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55005a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55005c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55005d: mov ebx, eax */
  ebx = eax;
/* 55005f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550062: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550063: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550065: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550067: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x55006du); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 55006d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55006e: mov byte ptr [ebx + edi], 0 */
  W8((uint32_t)(ebx + edi), 0x0u);
/* 550072: call dword ptr [0x6ac518] */
  esp -= 4; W32(esp, 0x550078u); SPILL(); call_ind(R32(0x6ac518u)); if (g_unwind) return; /* KERNEL32!GlobalUnlock */ RELOAD();
/* 550078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550079: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55007b: call dword ptr [0x6ac784] */
  esp -= 4; W32(esp, 0x550081u); SPILL(); call_ind(R32(0x6ac784u)); if (g_unwind) return; /* USER32!SetClipboardData */ RELOAD();
/* 550081: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550083: jne 0x550141 */
  if (!zf) goto L_550141;
L_550089: /* 550089: call dword ptr [0x6ac514] */
  esp -= 4; W32(esp, 0x55008fu); SPILL(); call_ind(R32(0x6ac514u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 55008f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550090: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 550095: push 0x5aeb38 */
  { uint32_t v = 0x5aeb38u; esp -= 4; W32(esp, v); }
/* 55009a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55009b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5500a0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5500a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5500a3: jmp 0x550141 */
  goto L_550141;
L_5500a8: /* 5500a8: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 5500ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5500ac: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x5500b1u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 5500b1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5500b4: lea ecx, [eax + eax + 2] */
  ecx = (uint32_t)(eax + eax + 0x2u);
/* 5500b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5500b9: push 0x2002 */
  { uint32_t v = 0x2002u; esp -= 4; W32(esp, v); }
/* 5500be: call dword ptr [0x6ac520] */
  esp -= 4; W32(esp, 0x5500c4u); SPILL(); call_ind(R32(0x6ac520u)); if (g_unwind) return; /* KERNEL32!GlobalAlloc */ RELOAD();
/* 5500c4: mov esi, eax */
  esi = eax;
/* 5500c6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5500c8: jne 0x5500e1 */
  if (!zf) goto L_5500e1;
L_5500ca: /* 5500ca: push 0x1b0 */
  { uint32_t v = 0x1b0u; esp -= 4; W32(esp, v); }
/* 5500cf: push 0x5aeb94 */
  { uint32_t v = 0x5aeb94u; esp -= 4; W32(esp, v); }
/* 5500d4: push 0x5aeba4 */
  { uint32_t v = 0x5aeba4u; esp -= 4; W32(esp, v); }
/* 5500d9: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5500deu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5500de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5500e1: /* 5500e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5500e2: call dword ptr [0x6ac51c] */
  esp -= 4; W32(esp, 0x5500e8u); SPILL(); call_ind(R32(0x6ac51cu)); if (g_unwind) return; /* KERNEL32!GlobalLock */ RELOAD();
/* 5500e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5500e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5500ea: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x5500efu); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 5500ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5500f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5500f3: call dword ptr [0x6ac518] */
  esp -= 4; W32(esp, 0x5500f9u); SPILL(); call_ind(R32(0x6ac518u)); if (g_unwind) return; /* KERNEL32!GlobalUnlock */ RELOAD();
/* 5500f9: mov edx, dword ptr [0x5a2f68] */
  edx = R32((uint32_t)(0x5a2f68u));
/* 5500ff: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 550101: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 550103: and edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 550106: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550107: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 550108: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550109: call dword ptr [0x6ac784] */
  esp -= 4; W32(esp, 0x55010fu); SPILL(); call_ind(R32(0x6ac784u)); if (g_unwind) return; /* USER32!SetClipboardData */ RELOAD();
/* 55010f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550111: jne 0x550141 */
  if (!zf) goto L_550141;
L_550113: /* 550113: mov eax, dword ptr [0x5a2f68] */
  eax = R32((uint32_t)(0x5a2f68u));
/* 550118: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55011a: mov esi, 0x5aebb0 */
  esi = 0x5aebb0u;
/* 55011f: jne 0x550126 */
  if (!zf) goto L_550126;
L_550121: /* 550121: mov esi, 0x5aebb4 */
  esi = 0x5aebb4u;
L_550126: /* 550126: call dword ptr [0x6ac514] */
  esp -= 4; W32(esp, 0x55012cu); SPILL(); call_ind(R32(0x6ac514u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 55012c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55012d: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 550132: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550133: push 0x5aebb8 */
  { uint32_t v = 0x5aebb8u; esp -= 4; W32(esp, v); }
/* 550138: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550139: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x55013eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 55013e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_550141: /* 550141: call dword ptr [0x6ac77c] */
  esp -= 4; W32(esp, 0x550147u); SPILL(); call_ind(R32(0x6ac77cu)); if (g_unwind) return; /* USER32!CloseClipboard */ RELOAD();
/* 550147: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550149: jne 0x550162 */
  if (!zf) goto L_550162;
L_55014b: /* 55014b: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 550150: push 0x5aec18 */
  { uint32_t v = 0x5aec18u; esp -= 4; W32(esp, v); }
/* 550155: push 0x5aec28 */
  { uint32_t v = 0x5aec28u; esp -= 4; W32(esp, v); }
/* 55015a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55015fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55015f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_550162: /* 550162: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550165: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550167: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 55016e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 55016f: mov esp, ebp */
  esp = ebp;
/* 550171: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550172: ret  */
  esp += 4; SPILL(); return;
}

void f_550020(void) {
  LOAD_REGS();
L_550020: /* 550020: mov edi, eax */
  edi = eax;
/* 550022: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 550025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550026: push 0x2002 */
  { uint32_t v = 0x2002u; esp -= 4; W32(esp, v); }
/* 55002b: call dword ptr [0x6ac520] */
  esp -= 4; W32(esp, 0x550031u); SPILL(); call_ind(R32(0x6ac520u)); if (g_unwind) return; /* KERNEL32!GlobalAlloc */ RELOAD();
/* 550031: mov esi, eax */
  esi = eax;
/* 550033: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550035: jne 0x55004e */
  if (!zf) goto L_55004e;
L_550037: /* 550037: push 0x1a4 */
  { uint32_t v = 0x1a4u; esp -= 4; W32(esp, v); }
/* 55003c: push 0x5aeb1c */
  { uint32_t v = 0x5aeb1cu; esp -= 4; W32(esp, v); }
/* 550041: push 0x5aeb2c */
  { uint32_t v = 0x5aeb2cu; esp -= 4; W32(esp, v); }
/* 550046: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55004bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55004b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_55004e: /* 55004e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55004f: call dword ptr [0x6ac51c] */
  esp -= 4; W32(esp, 0x550055u); SPILL(); call_ind(R32(0x6ac51cu)); if (g_unwind) return; /* KERNEL32!GlobalLock */ RELOAD();
/* 550055: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 550058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55005a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55005c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55005d: mov ebx, eax */
  ebx = eax;
/* 55005f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550062: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550063: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550065: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550067: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x55006du); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 55006d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55006e: mov byte ptr [ebx + edi], 0 */
  W8((uint32_t)(ebx + edi), 0x0u);
/* 550072: call dword ptr [0x6ac518] */
  esp -= 4; W32(esp, 0x550078u); SPILL(); call_ind(R32(0x6ac518u)); if (g_unwind) return; /* KERNEL32!GlobalUnlock */ RELOAD();
/* 550078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550079: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55007b: call dword ptr [0x6ac784] */
  esp -= 4; W32(esp, 0x550081u); SPILL(); call_ind(R32(0x6ac784u)); if (g_unwind) return; /* USER32!SetClipboardData */ RELOAD();
/* 550081: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550083: jne 0x550141 */
  if (!zf) goto L_550141;
L_550089: /* 550089: call dword ptr [0x6ac514] */
  esp -= 4; W32(esp, 0x55008fu); SPILL(); call_ind(R32(0x6ac514u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 55008f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550090: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 550095: push 0x5aeb38 */
  { uint32_t v = 0x5aeb38u; esp -= 4; W32(esp, v); }
/* 55009a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55009b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5500a0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5500a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5500a3: jmp 0x550141 */
  goto L_550141;
L_550141: /* 550141: call dword ptr [0x6ac77c] */
  esp -= 4; W32(esp, 0x550147u); SPILL(); call_ind(R32(0x6ac77cu)); if (g_unwind) return; /* USER32!CloseClipboard */ RELOAD();
/* 550147: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550149: jne 0x550162 */
  if (!zf) goto L_550162;
L_55014b: /* 55014b: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 550150: push 0x5aec18 */
  { uint32_t v = 0x5aec18u; esp -= 4; W32(esp, v); }
/* 550155: push 0x5aec28 */
  { uint32_t v = 0x5aec28u; esp -= 4; W32(esp, v); }
/* 55015a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55015fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55015f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_550162: /* 550162: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550165: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550167: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 55016e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 55016f: mov esp, ebp */
  esp = ebp;
/* 550171: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550172: ret  */
  esp += 4; SPILL(); return;
}

void f_55003c(void) {
  LOAD_REGS();
L_55003c: /* 55003c: push 0x5aeb1c */
  { uint32_t v = 0x5aeb1cu; esp -= 4; W32(esp, v); }
/* 550041: push 0x5aeb2c */
  { uint32_t v = 0x5aeb2cu; esp -= 4; W32(esp, v); }
/* 550046: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55004bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55004b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55004e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55004f: call dword ptr [0x6ac51c] */
  esp -= 4; W32(esp, 0x550055u); SPILL(); call_ind(R32(0x6ac51cu)); if (g_unwind) return; /* KERNEL32!GlobalLock */ RELOAD();
/* 550055: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 550058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55005a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55005c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55005d: mov ebx, eax */
  ebx = eax;
/* 55005f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550062: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550063: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550065: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550067: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x55006du); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 55006d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55006e: mov byte ptr [ebx + edi], 0 */
  W8((uint32_t)(ebx + edi), 0x0u);
/* 550072: call dword ptr [0x6ac518] */
  esp -= 4; W32(esp, 0x550078u); SPILL(); call_ind(R32(0x6ac518u)); if (g_unwind) return; /* KERNEL32!GlobalUnlock */ RELOAD();
/* 550078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550079: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55007b: call dword ptr [0x6ac784] */
  esp -= 4; W32(esp, 0x550081u); SPILL(); call_ind(R32(0x6ac784u)); if (g_unwind) return; /* USER32!SetClipboardData */ RELOAD();
/* 550081: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550083: jne 0x550141 */
  if (!zf) goto L_550141;
L_550089: /* 550089: call dword ptr [0x6ac514] */
  esp -= 4; W32(esp, 0x55008fu); SPILL(); call_ind(R32(0x6ac514u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 55008f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550090: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 550095: push 0x5aeb38 */
  { uint32_t v = 0x5aeb38u; esp -= 4; W32(esp, v); }
/* 55009a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55009b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5500a0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5500a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5500a3: jmp 0x550141 */
  goto L_550141;
L_550141: /* 550141: call dword ptr [0x6ac77c] */
  esp -= 4; W32(esp, 0x550147u); SPILL(); call_ind(R32(0x6ac77cu)); if (g_unwind) return; /* USER32!CloseClipboard */ RELOAD();
/* 550147: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550149: jne 0x550162 */
  if (!zf) goto L_550162;
L_55014b: /* 55014b: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 550150: push 0x5aec18 */
  { uint32_t v = 0x5aec18u; esp -= 4; W32(esp, v); }
/* 550155: push 0x5aec28 */
  { uint32_t v = 0x5aec28u; esp -= 4; W32(esp, v); }
/* 55015a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55015fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55015f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_550162: /* 550162: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550165: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550167: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 55016e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 55016f: mov esp, ebp */
  esp = ebp;
/* 550171: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550172: ret  */
  esp += 4; SPILL(); return;
}

void f_550046(void) {
  LOAD_REGS();
L_550046: /* 550046: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55004bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55004b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55004e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55004f: call dword ptr [0x6ac51c] */
  esp -= 4; W32(esp, 0x550055u); SPILL(); call_ind(R32(0x6ac51cu)); if (g_unwind) return; /* KERNEL32!GlobalLock */ RELOAD();
/* 550055: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 550058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55005a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55005c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55005d: mov ebx, eax */
  ebx = eax;
/* 55005f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550062: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550063: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550065: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550067: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x55006du); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 55006d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55006e: mov byte ptr [ebx + edi], 0 */
  W8((uint32_t)(ebx + edi), 0x0u);
/* 550072: call dword ptr [0x6ac518] */
  esp -= 4; W32(esp, 0x550078u); SPILL(); call_ind(R32(0x6ac518u)); if (g_unwind) return; /* KERNEL32!GlobalUnlock */ RELOAD();
/* 550078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550079: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55007b: call dword ptr [0x6ac784] */
  esp -= 4; W32(esp, 0x550081u); SPILL(); call_ind(R32(0x6ac784u)); if (g_unwind) return; /* USER32!SetClipboardData */ RELOAD();
/* 550081: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550083: jne 0x550141 */
  if (!zf) goto L_550141;
L_550089: /* 550089: call dword ptr [0x6ac514] */
  esp -= 4; W32(esp, 0x55008fu); SPILL(); call_ind(R32(0x6ac514u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 55008f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550090: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 550095: push 0x5aeb38 */
  { uint32_t v = 0x5aeb38u; esp -= 4; W32(esp, v); }
/* 55009a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55009b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5500a0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5500a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5500a3: jmp 0x550141 */
  goto L_550141;
L_550141: /* 550141: call dword ptr [0x6ac77c] */
  esp -= 4; W32(esp, 0x550147u); SPILL(); call_ind(R32(0x6ac77cu)); if (g_unwind) return; /* USER32!CloseClipboard */ RELOAD();
/* 550147: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550149: jne 0x550162 */
  if (!zf) goto L_550162;
L_55014b: /* 55014b: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 550150: push 0x5aec18 */
  { uint32_t v = 0x5aec18u; esp -= 4; W32(esp, v); }
/* 550155: push 0x5aec28 */
  { uint32_t v = 0x5aec28u; esp -= 4; W32(esp, v); }
/* 55015a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55015fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55015f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_550162: /* 550162: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550165: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550167: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 55016e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 55016f: mov esp, ebp */
  esp = ebp;
/* 550171: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550172: ret  */
  esp += 4; SPILL(); return;
}

void f_55004e(void) {
  LOAD_REGS();
L_55004e: /* 55004e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55004f: call dword ptr [0x6ac51c] */
  esp -= 4; W32(esp, 0x550055u); SPILL(); call_ind(R32(0x6ac51cu)); if (g_unwind) return; /* KERNEL32!GlobalLock */ RELOAD();
/* 550055: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 550058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55005a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55005c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55005d: mov ebx, eax */
  ebx = eax;
/* 55005f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550062: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550063: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550065: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550067: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x55006du); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 55006d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55006e: mov byte ptr [ebx + edi], 0 */
  W8((uint32_t)(ebx + edi), 0x0u);
/* 550072: call dword ptr [0x6ac518] */
  esp -= 4; W32(esp, 0x550078u); SPILL(); call_ind(R32(0x6ac518u)); if (g_unwind) return; /* KERNEL32!GlobalUnlock */ RELOAD();
/* 550078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550079: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55007b: call dword ptr [0x6ac784] */
  esp -= 4; W32(esp, 0x550081u); SPILL(); call_ind(R32(0x6ac784u)); if (g_unwind) return; /* USER32!SetClipboardData */ RELOAD();
/* 550081: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550083: jne 0x550141 */
  if (!zf) goto L_550141;
L_550089: /* 550089: call dword ptr [0x6ac514] */
  esp -= 4; W32(esp, 0x55008fu); SPILL(); call_ind(R32(0x6ac514u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 55008f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550090: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 550095: push 0x5aeb38 */
  { uint32_t v = 0x5aeb38u; esp -= 4; W32(esp, v); }
/* 55009a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55009b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5500a0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5500a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5500a3: jmp 0x550141 */
  goto L_550141;
L_550141: /* 550141: call dword ptr [0x6ac77c] */
  esp -= 4; W32(esp, 0x550147u); SPILL(); call_ind(R32(0x6ac77cu)); if (g_unwind) return; /* USER32!CloseClipboard */ RELOAD();
/* 550147: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550149: jne 0x550162 */
  if (!zf) goto L_550162;
L_55014b: /* 55014b: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 550150: push 0x5aec18 */
  { uint32_t v = 0x5aec18u; esp -= 4; W32(esp, v); }
/* 550155: push 0x5aec28 */
  { uint32_t v = 0x5aec28u; esp -= 4; W32(esp, v); }
/* 55015a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55015fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55015f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_550162: /* 550162: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550165: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550167: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 55016e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 55016f: mov esp, ebp */
  esp = ebp;
/* 550171: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550172: ret  */
  esp += 4; SPILL(); return;
}

void f_550065(void) {
  LOAD_REGS();
L_550065: /* 550065: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550067: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x55006du); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 55006d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55006e: mov byte ptr [ebx + edi], 0 */
  W8((uint32_t)(ebx + edi), 0x0u);
/* 550072: call dword ptr [0x6ac518] */
  esp -= 4; W32(esp, 0x550078u); SPILL(); call_ind(R32(0x6ac518u)); if (g_unwind) return; /* KERNEL32!GlobalUnlock */ RELOAD();
/* 550078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550079: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55007b: call dword ptr [0x6ac784] */
  esp -= 4; W32(esp, 0x550081u); SPILL(); call_ind(R32(0x6ac784u)); if (g_unwind) return; /* USER32!SetClipboardData */ RELOAD();
/* 550081: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550083: jne 0x550141 */
  if (!zf) goto L_550141;
L_550089: /* 550089: call dword ptr [0x6ac514] */
  esp -= 4; W32(esp, 0x55008fu); SPILL(); call_ind(R32(0x6ac514u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 55008f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550090: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 550095: push 0x5aeb38 */
  { uint32_t v = 0x5aeb38u; esp -= 4; W32(esp, v); }
/* 55009a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55009b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5500a0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5500a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5500a3: jmp 0x550141 */
  goto L_550141;
L_550141: /* 550141: call dword ptr [0x6ac77c] */
  esp -= 4; W32(esp, 0x550147u); SPILL(); call_ind(R32(0x6ac77cu)); if (g_unwind) return; /* USER32!CloseClipboard */ RELOAD();
/* 550147: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550149: jne 0x550162 */
  if (!zf) goto L_550162;
L_55014b: /* 55014b: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 550150: push 0x5aec18 */
  { uint32_t v = 0x5aec18u; esp -= 4; W32(esp, v); }
/* 550155: push 0x5aec28 */
  { uint32_t v = 0x5aec28u; esp -= 4; W32(esp, v); }
/* 55015a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55015fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55015f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_550162: /* 550162: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550165: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550167: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 55016e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 55016f: mov esp, ebp */
  esp = ebp;
/* 550171: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550172: ret  */
  esp += 4; SPILL(); return;
}

void f_550173(void) {
  LOAD_REGS();
L_550173: /* 550173: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 550176: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 55017b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 55017e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55017f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 550182: call 0x554df6 */
  esp -= 4; W32(esp, 0x550187u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_550187(); return;
}

void f_550187(void) {
  LOAD_REGS();
L_550187: /* 550187: push 0x570188 */
  { uint32_t v = 0x570188u; esp -= 4; W32(esp, v); }
/* 55018c: push 0x5aec3c */
  { uint32_t v = 0x5aec3cu; esp -= 4; W32(esp, v); }
/* 550191: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x550196u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 550196: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550199: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55019b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55019d: call 0x554df6 */
  esp -= 4; W32(esp, 0x5501a2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5501a2: guest_badaddr(0x5501a2); return;
}

void f_550240(void) {
  LOAD_REGS();
L_550240: /* 550240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 550241: mov ebp, esp */
  ebp = esp;
/* 550243: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 550248: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55024a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55024b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55024c: je 0x55025c */
  if (zf) goto L_55025c;
L_55024e: /* 55024e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55024f: call dword ptr [0x6ac528] */
  esp -= 4; W32(esp, 0x550255u); SPILL(); call_ind(R32(0x6ac528u)); if (g_unwind) return; /* KERNEL32!LoadLibraryW */ RELOAD();
/* 550255: lea esp, [ebp - 8] */
  esp = (uint32_t)(ebp + 0xfffffff8u);
/* 550258: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550259: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 55025a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 55025b: ret  */
  esp += 4; SPILL(); return;
L_55025c: /* 55025c: mov edi, dword ptr [0x6ac500] */
  edi = R32((uint32_t)(0x6ac500u));
/* 550262: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550264: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550266: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550268: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55026a: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 55026c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55026d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55026f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550271: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550273u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550273: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550275: jne 0x55027b */
  if (!zf) goto L_55027b;
L_550277: /* 550277: xor ebx, ebx */
  ebx = 0;
/* 550279: jmp 0x55029f */
  goto L_55029f;
L_55027b: /* 55027b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55027d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55027f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550281: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550285: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550286: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550288: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55028a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x55028cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 55028c: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 55028f: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 550292: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 550295: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 550298: call 0x554f80 */
  esp -= 4; W32(esp, 0x55029du); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 55029d: mov ebx, esp */
  ebx = esp;
L_55029f: /* 55029f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5502a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5502a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5502a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5502a7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5502a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5502aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5502ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5502ae: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x5502b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5502b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5502b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5502b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5502b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5502b6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5502b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5502b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5502bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5502bd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x5502bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5502bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5502c0: call dword ptr [0x6ac524] */
  esp -= 4; W32(esp, 0x5502c6u); SPILL(); call_ind(R32(0x6ac524u)); if (g_unwind) return; /* KERNEL32!LoadLibraryA */ RELOAD();
/* 5502c6: lea esp, [ebp - 8] */
  esp = (uint32_t)(ebp + 0xfffffff8u);
/* 5502c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5502ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5502cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5502cc: ret  */
  esp += 4; SPILL(); return;
}

void f_550300(void) {
  LOAD_REGS();
L_550300: /* 550300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 550301: mov ebp, esp */
  ebp = esp;
/* 550303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550305: push 0x559b80 */
  { uint32_t v = 0x559b80u; esp -= 4; W32(esp, v); }
/* 55030a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 550310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 550318: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 55031b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55031c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55031d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 550320: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550322: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 550323: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 550326: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 55032d: jne 0x550346 */
  if (!zf) goto L_550346;
L_55032f: /* 55032f: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* 550334: push 0x5aecc8 */
  { uint32_t v = 0x5aecc8u; esp -= 4; W32(esp, v); }
/* 550339: push 0x5aecd8 */
  { uint32_t v = 0x5aecd8u; esp -= 4; W32(esp, v); }
/* 55033e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x550343u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 550343: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_550346: /* 550346: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550347: call dword ptr [0x6ac52c] */
  esp -= 4; W32(esp, 0x55034du); SPILL(); call_ind(R32(0x6ac52cu)); if (g_unwind) return; /* KERNEL32!FreeLibrary */ RELOAD();
/* 55034d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550350: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550351: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550352: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 550359: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 55035a: mov esp, ebp */
  esp = ebp;
/* 55035c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 55035d: ret  */
  esp += 4; SPILL(); return;
}

void f_55035e(void) {
  LOAD_REGS();
L_55035e: /* 55035e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 550361: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 550366: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 550369: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55036a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 55036d: call 0x554df6 */
  esp -= 4; W32(esp, 0x550372u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_550372(); return;
}

void f_550372(void) {
  LOAD_REGS();
L_550372: /* 550372: push 0x5701b0 */
  { uint32_t v = 0x5701b0u; esp -= 4; W32(esp, v); }
/* 550377: push 0x5aece4 */
  { uint32_t v = 0x5aece4u; esp -= 4; W32(esp, v); }
/* 55037c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x550381u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 550381: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550384: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550386: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550388: call 0x554df6 */
  esp -= 4; W32(esp, 0x55038du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_55038d: guest_badaddr(0x55038d); return;
}

void f_5503c0(void) {
  LOAD_REGS();
L_5503c0: /* 5503c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5503c1: mov ebp, esp */
  ebp = esp;
/* 5503c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5503c5: push 0x559b90 */
  { uint32_t v = 0x559b90u; esp -= 4; W32(esp, v); }
/* 5503ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5503d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5503d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5503d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5503db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5503de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5503df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5503e0: xor ebx, ebx */
  ebx = 0;
/* 5503e2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5503e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5503e5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5503e8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 5503eb: jne 0x550404 */
  if (!zf) goto L_550404;
L_5503ed: /* 5503ed: push 0x22f */
  { uint32_t v = 0x22fu; esp -= 4; W32(esp, v); }
/* 5503f2: push 0x5aecec */
  { uint32_t v = 0x5aececu; esp -= 4; W32(esp, v); }
/* 5503f7: push 0x5aecfc */
  { uint32_t v = 0x5aecfcu; esp -= 4; W32(esp, v); }
/* 5503fc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x550401u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 550401: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_550404: /* 550404: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 550407: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 550409: jne 0x550422 */
  if (!zf) goto L_550422;
L_55040b: /* 55040b: push 0x230 */
  { uint32_t v = 0x230u; esp -= 4; W32(esp, v); }
/* 550410: push 0x5aed08 */
  { uint32_t v = 0x5aed08u; esp -= 4; W32(esp, v); }
/* 550415: push 0x5aed18 */
  { uint32_t v = 0x5aed18u; esp -= 4; W32(esp, v); }
/* 55041a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55041fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55041f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_550422: /* 550422: mov edi, dword ptr [0x6ac500] */
  edi = R32((uint32_t)(0x6ac500u));
/* 550428: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550429: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55042a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55042b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55042c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 55042e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55042f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550430: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550431: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550433u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550433: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550435: je 0x550458 */
  if (zf) goto L_550458;
L_550437: /* 550437: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550438: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550439: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55043a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55043b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 55043d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55043e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55043f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550440: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550442u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550442: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 550445: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 550448: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 55044b: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 55044e: call 0x554f80 */
  esp -= 4; W32(esp, 0x550453u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 550453: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 550456: mov ebx, esp */
  ebx = esp;
L_550458: /* 550458: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55045a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55045c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55045e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550462: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550463: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550465: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550467: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550469u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55046b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55046d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55046e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55046f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550471: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550472: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550474: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550476: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550478u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550478: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 55047b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55047c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55047d: call dword ptr [0x6ac530] */
  esp -= 4; W32(esp, 0x550483u); SPILL(); call_ind(R32(0x6ac530u)); if (g_unwind) return; /* KERNEL32!GetProcAddress */ RELOAD();
/* 550483: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* 550486: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550489: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 550490: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550491: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550492: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 550493: mov esp, ebp */
  esp = ebp;
/* 550495: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550496: ret  */
  esp += 4; SPILL(); return;
}

void f_550497(void) {
  LOAD_REGS();
L_550497: /* 550497: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 55049a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 55049f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5504a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5504a3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5504a6: call 0x554df6 */
  esp -= 4; W32(esp, 0x5504abu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5504ab(); return;
}

void f_5504ab(void) {
  LOAD_REGS();
L_5504ab: /* 5504ab: push 0x5701d8 */
  { uint32_t v = 0x5701d8u; esp -= 4; W32(esp, v); }
/* 5504b0: push 0x5aed24 */
  { uint32_t v = 0x5aed24u; esp -= 4; W32(esp, v); }
/* 5504b5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5504bau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5504ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5504bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5504bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5504c1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5504c6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5504c6: guest_badaddr(0x5504c6); return;
}

void f_550520(void) {
  LOAD_REGS();
L_550520: /* 550520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 550521: mov ebp, esp */
  ebp = esp;
/* 550523: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 550526: mov eax, 0x2004 */
  eax = 0x2004u;
/* 55052b: call 0x554f80 */
  esp -= 4; W32(esp, 0x550530u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 550530: mov ax, word ptr [0x6a9e44] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x6a9e44u))) & 0xffffu);
/* 550536: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 550537: mov word ptr [esp + 8], ax */
  W16((uint32_t)(esp + 0x8u), (eax & 0xffffu));
/* 55053c: xor eax, eax */
  eax = 0;
/* 55053e: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* 550543: lea edi, [esp + 0xa] */
  edi = (uint32_t)(esp + 0xau);
/* 550547: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 550549: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 55054c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55054d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 550551: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 550556: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550557: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 550559: call 0x4e3693 */
  esp -= 4; W32(esp, 0x55055eu); SPILL(); f_4e3693(); if (g_unwind) return; RELOAD();
/* 55055e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550561: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550563: push 0x5aed2c */
  { uint32_t v = 0x5aed2cu; esp -= 4; W32(esp, v); }
/* 550568: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 55056c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55056d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55056f: call dword ptr [0x6ac790] */
  esp -= 4; W32(esp, 0x550575u); SPILL(); call_ind(R32(0x6ac790u)); if (g_unwind) return; /* USER32!MessageBoxW */ RELOAD();
/* 550575: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550576: mov esp, ebp */
  esp = ebp;
/* 550578: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550579: ret  */
  esp += 4; SPILL(); return;
}

void f_5505a0(void) {
  LOAD_REGS();
L_5505a0: /* 5505a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5505a1: mov ebp, esp */
  ebp = esp;
/* 5505a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5505a5: push 0x559ba0 */
  { uint32_t v = 0x559ba0u; esp -= 4; W32(esp, v); }
/* 5505aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5505b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5505b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5505b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5505b9: mov eax, 0x2008 */
  eax = 0x2008u;
/* 5505be: call 0x554f80 */
  esp -= 4; W32(esp, 0x5505c3u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 5505c3: mov ax, word ptr [0x6a9e48] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x6a9e48u))) & 0xffffu);
/* 5505c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5505ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5505cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5505cc: mov word ptr [ebp - 0x2018], ax */
  W16((uint32_t)(ebp + 0xffffdfe8u), (eax & 0xffffu));
/* 5505d3: xor eax, eax */
  eax = 0;
/* 5505d5: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* 5505da: lea edi, [ebp - 0x2016] */
  edi = (uint32_t)(ebp + 0xffffdfeau);
/* 5505e0: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5505e2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5505e5: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 5505e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5505e9: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 5505ef: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 5505f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5505f5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5505fc: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 5505fe: call 0x4e3693 */
  esp -= 4; W32(esp, 0x550603u); SPILL(); f_4e3693(); if (g_unwind) return; RELOAD();
/* 550603: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 550606: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550609: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 55060a: je 0x550668 */
  if (zf) goto L_550668;
L_55060c: /* 55060c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 55060d: je 0x55063b */
  if (zf) goto L_55063b;
L_55060f: /* 55060f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550611: push 0x5aed78 */
  { uint32_t v = 0x5aed78u; esp -= 4; W32(esp, v); }
/* 550616: lea eax, [ebp - 0x2018] */
  eax = (uint32_t)(ebp + 0xffffdfe8u);
/* 55061c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55061d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55061f: call dword ptr [0x6ac790] */
  esp -= 4; W32(esp, 0x550625u); SPILL(); call_ind(R32(0x6ac790u)); if (g_unwind) return; /* USER32!MessageBoxW */ RELOAD();
/* 550625: mov eax, 1 */
  eax = 0x1u;
/* 55062a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 55062d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 550634: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550635: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550636: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 550637: mov esp, ebp */
  esp = ebp;
/* 550639: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 55063a: ret  */
  esp += 4; SPILL(); return;
L_55063b: /* 55063b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55063d: push 0x5aed68 */
  { uint32_t v = 0x5aed68u; esp -= 4; W32(esp, v); }
/* 550642: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 550648: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550649: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55064b: call dword ptr [0x6ac790] */
  esp -= 4; W32(esp, 0x550651u); SPILL(); call_ind(R32(0x6ac790u)); if (g_unwind) return; /* USER32!MessageBoxW */ RELOAD();
/* 550651: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_550652: /* 550652: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550655: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 550657: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550658: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 55065a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 55065b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 55065c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 550663: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 550664: mov esp, ebp */
  esp = ebp;
/* 550666: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550667: ret  */
  esp += 4; SPILL(); return;
L_550668: /* 550668: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 55066a: push 0x5aed58 */
  { uint32_t v = 0x5aed58u; esp -= 4; W32(esp, v); }
/* 55066f: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 550675: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550676: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550678: call dword ptr [0x6ac790] */
  esp -= 4; W32(esp, 0x55067eu); SPILL(); call_ind(R32(0x6ac790u)); if (g_unwind) return; /* USER32!MessageBoxW */ RELOAD();
/* 55067e: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 550681: jmp 0x550652 */
  goto L_550652;
}

void f_550683(void) {
  LOAD_REGS();
L_550683: /* 550683: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 550686: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 55068b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 55068e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55068f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 550692: call 0x554df6 */
  esp -= 4; W32(esp, 0x550697u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_550697(); return;
}

void f_550697(void) {
  LOAD_REGS();
L_550697: /* 550697: push 0x570200 */
  { uint32_t v = 0x570200u; esp -= 4; W32(esp, v); }
/* 55069c: push 0x5aed88 */
  { uint32_t v = 0x5aed88u; esp -= 4; W32(esp, v); }
/* 5506a1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5506a6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5506a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5506a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5506ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5506ad: call 0x554df6 */
  esp -= 4; W32(esp, 0x5506b2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5506b2: guest_badaddr(0x5506b2); return;
}

void f_550710(void) {
  LOAD_REGS();
L_550710: /* 550710: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 550711: mov ebp, esp */
  ebp = esp;
/* 550713: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550715: push 0x559bb0 */
  { uint32_t v = 0x559bb0u; esp -= 4; W32(esp, v); }
/* 55071a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 550720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550721: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 550728: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550729: mov eax, 0x2008 */
  eax = 0x2008u;
/* 55072e: call 0x554f80 */
  esp -= 4; W32(esp, 0x550733u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 550733: mov ax, word ptr [0x6a9e4c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x6a9e4cu))) & 0xffffu);
/* 550739: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55073a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55073b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55073c: mov word ptr [ebp - 0x2018], ax */
  W16((uint32_t)(ebp + 0xffffdfe8u), (eax & 0xffffu));
/* 550743: xor eax, eax */
  eax = 0;
/* 550745: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* 55074a: lea edi, [ebp - 0x2016] */
  edi = (uint32_t)(ebp + 0xffffdfeau);
/* 550750: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 550752: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 550755: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550757: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 55075e: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 550760: call 0x4e3ada */
  esp -= 4; W32(esp, 0x550765u); SPILL(); f_4e3ada(); if (g_unwind) return; RELOAD();
/* 550765: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550768: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550769: call dword ptr [0x6ac514] */
  esp -= 4; W32(esp, 0x55076fu); SPILL(); call_ind(R32(0x6ac514u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 55076f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550770: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 550776: push 0x5aed90 */
  { uint32_t v = 0x5aed90u; esp -= 4; W32(esp, v); }
/* 55077b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55077c: call 0x4e4183 */
  esp -= 4; W32(esp, 0x550781u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 550781: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550786: push 0x5aedbc */
  { uint32_t v = 0x5aedbcu; esp -= 4; W32(esp, v); }
/* 55078b: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 550791: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550792: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550794: call dword ptr [0x6ac790] */
  esp -= 4; W32(esp, 0x55079au); SPILL(); call_ind(R32(0x6ac790u)); if (g_unwind) return; /* USER32!MessageBoxW */ RELOAD();
/* 55079a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 55079d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 55079e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 55079f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5507a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5507a7: mov esp, ebp */
  esp = ebp;
/* 5507a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5507aa: ret  */
  esp += 4; SPILL(); return;
}

void f_5507ab(void) {
  LOAD_REGS();
L_5507ab: /* 5507ab: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5507ae: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5507b3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5507b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5507b7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5507ba: call 0x554df6 */
  esp -= 4; W32(esp, 0x5507bfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5507bf(); return;
}

void f_5507bf(void) {
  LOAD_REGS();
L_5507bf: /* 5507bf: push 0x570214 */
  { uint32_t v = 0x570214u; esp -= 4; W32(esp, v); }
/* 5507c4: push 0x5aedd8 */
  { uint32_t v = 0x5aedd8u; esp -= 4; W32(esp, v); }
/* 5507c9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5507ceu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5507ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5507d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5507d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5507d5: call 0x554df6 */
  esp -= 4; W32(esp, 0x5507dau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5507da: guest_badaddr(0x5507da); return;
}

void f_550820(void) {
  LOAD_REGS();
L_550820: /* 550820: jmp dword ptr [0x6ac534] */
  SPILL(); call_ind(R32(0x6ac534u)); return; /* KERNEL32!DebugBreak */
}

void f_550840(void) {
  LOAD_REGS();
L_550840: /* 550840: sub esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 550846: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550847: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 550848: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 55084c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55084d: xor edi, edi */
  edi = 0;
/* 55084f: mov dword ptr [esp + 0xc], 0x114 */
  W32((uint32_t)(esp + 0xcu), 0x114u);
/* 550857: call dword ptr [0x6ac4f8] */
  esp -= 4; W32(esp, 0x55085du); SPILL(); call_ind(R32(0x6ac4f8u)); if (g_unwind) return; /* KERNEL32!GetVersionExW */ RELOAD();
/* 55085d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55085f: je 0x55089d */
  if (zf) goto L_55089d;
L_550861: /* 550861: cmp dword ptr [esp + 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 550866: jne 0x55089d */
  if (!zf) goto L_55089d;
L_550868: /* 550868: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 550869: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55086a: push 0x5aede8 */
  { uint32_t v = 0x5aede8u; esp -= 4; W32(esp, v); }
/* 55086f: call dword ptr [0x6ac538] */
  esp -= 4; W32(esp, 0x550875u); SPILL(); call_ind(R32(0x6ac538u)); if (g_unwind) return; /* KERNEL32!LoadLibraryExW */ RELOAD();
/* 550875: mov esi, eax */
  esi = eax;
/* 550877: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550879: je 0x55089d */
  if (zf) goto L_55089d;
L_55087b: /* 55087b: push 0x5aee04 */
  { uint32_t v = 0x5aee04u; esp -= 4; W32(esp, v); }
/* 550880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550881: call dword ptr [0x6ac530] */
  esp -= 4; W32(esp, 0x550887u); SPILL(); call_ind(R32(0x6ac530u)); if (g_unwind) return; /* KERNEL32!GetProcAddress */ RELOAD();
/* 550887: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550889: je 0x550896 */
  if (zf) goto L_550896;
L_55088b: /* 55088b: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x55088du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 55088d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55088f: je 0x550896 */
  if (zf) goto L_550896;
L_550891: /* 550891: mov edi, 1 */
  edi = 0x1u;
L_550896: /* 550896: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550897: call dword ptr [0x6ac52c] */
  esp -= 4; W32(esp, 0x55089du); SPILL(); call_ind(R32(0x6ac52cu)); if (g_unwind) return; /* KERNEL32!FreeLibrary */ RELOAD();
L_55089d: /* 55089d: mov eax, edi */
  eax = edi;
/* 55089f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5508a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5508a1: add esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5508a7: ret  */
  esp += 4; SPILL(); return;
}

void f_5508d0(void) {
  LOAD_REGS();
L_5508d0: /* 5508d0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5508d4: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 5508da: call 0x554f00 */
  esp -= 4; W32(esp, 0x5508dfu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 5508df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5508e0: call dword ptr [0x6ac53c] */
  esp -= 4; W32(esp, 0x5508e6u); SPILL(); call_ind(R32(0x6ac53cu)); if (g_unwind) return; /* KERNEL32!Sleep */ RELOAD();
/* 5508e6: ret  */
  esp += 4; SPILL(); return;
}

void f_550900(void) {
  LOAD_REGS();
L_550900: /* 550900: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 550903: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 550907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550908: call dword ptr [0x6ac540] */
  esp -= 4; W32(esp, 0x55090eu); SPILL(); call_ind(R32(0x6ac540u)); if (g_unwind) return; /* KERNEL32!GetLocalTime */ RELOAD();
/* 55090e: movzx ecx, word ptr [esp] */
  ecx = (uint32_t)(R16((uint32_t)(esp)));
/* 550913: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 550917: movzx eax, word ptr [esp + 2] */
  eax = (uint32_t)(R16((uint32_t)(esp + 0x2u)));
/* 55091c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 55091e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 550922: movzx edx, word ptr [esp + 4] */
  edx = (uint32_t)(R16((uint32_t)(esp + 0x4u)));
/* 550927: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 550929: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 55092d: movzx ecx, word ptr [esp + 6] */
  ecx = (uint32_t)(R16((uint32_t)(esp + 0x6u)));
/* 550932: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 550934: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 550938: movzx eax, word ptr [esp + 8] */
  eax = (uint32_t)(R16((uint32_t)(esp + 0x8u)));
/* 55093d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 55093f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 550943: movzx edx, word ptr [esp + 0xa] */
  edx = (uint32_t)(R16((uint32_t)(esp + 0xau)));
/* 550948: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 55094a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 55094e: movzx ecx, word ptr [esp + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(esp + 0xcu)));
/* 550953: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 550955: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 550959: movzx eax, word ptr [esp + 0xe] */
  eax = (uint32_t)(R16((uint32_t)(esp + 0xeu)));
/* 55095e: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 550960: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 550964: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 550966: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550969: ret  */
  esp += 4; SPILL(); return;
}

void f_550990(void) {
  LOAD_REGS();
L_550990: /* 550990: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 550991: mov ebp, esp */
  ebp = esp;
/* 550993: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550995: push 0x559bc0 */
  { uint32_t v = 0x559bc0u; esp -= 4; W32(esp, v); }
/* 55099a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5509a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5509a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5509a8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5509ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5509ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5509ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5509ae: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 5509b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5509b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5509b5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5509bc: call dword ptr [0x6ac540] */
  esp -= 4; W32(esp, 0x5509c2u); SPILL(); call_ind(R32(0x6ac540u)); if (g_unwind) return; /* KERNEL32!GetLocalTime */ RELOAD();
/* 5509c2: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5509c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5509c6: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 5509c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5509ca: call dword ptr [0x6ac544] */
  esp -= 4; W32(esp, 0x5509d0u); SPILL(); call_ind(R32(0x6ac544u)); if (g_unwind) return; /* KERNEL32!SystemTimeToFileTime */ RELOAD();
/* 5509d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5509d2: jne 0x5509eb */
  if (!zf) goto L_5509eb;
L_5509d4: /* 5509d4: push 0x2f6 */
  { uint32_t v = 0x2f6u; esp -= 4; W32(esp, v); }
/* 5509d9: push 0x5aee28 */
  { uint32_t v = 0x5aee28u; esp -= 4; W32(esp, v); }
/* 5509de: push 0x5aee38 */
  { uint32_t v = 0x5aee38u; esp -= 4; W32(esp, v); }
/* 5509e3: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5509e8u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5509e8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5509eb: /* 5509eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5509ee: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 5509f1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5509f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5509f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5509f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5509fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5509fe: mov esp, ebp */
  esp = ebp;
/* 550a00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550a01: ret  */
  esp += 4; SPILL(); return;
}

void f_550a02(void) {
  LOAD_REGS();
L_550a02: /* 550a02: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 550a05: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 550a0a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 550a0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550a0e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 550a11: call 0x554df6 */
  esp -= 4; W32(esp, 0x550a16u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_550a16(); return;
}

void f_550a16(void) {
  LOAD_REGS();
L_550a16: /* 550a16: push 0x57023c */
  { uint32_t v = 0x57023cu; esp -= 4; W32(esp, v); }
/* 550a1b: push 0x5aee64 */
  { uint32_t v = 0x5aee64u; esp -= 4; W32(esp, v); }
/* 550a20: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x550a25u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 550a25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550a28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550a2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550a2c: call 0x554df6 */
  esp -= 4; W32(esp, 0x550a31u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_550a31: guest_badaddr(0x550a31); return;
}

void f_550a70(void) {
  LOAD_REGS();
L_550a70: /* 550a70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550a71: call dword ptr [0x6ac548] */
  esp -= 4; W32(esp, 0x550a77u); SPILL(); call_ind(R32(0x6ac548u)); if (g_unwind) return; /* KERNEL32!GetTickCount */ RELOAD();
/* 550a77: mov edx, dword ptr [0x6aae64] */
  edx = R32((uint32_t)(0x6aae64u));
/* 550a7d: mov ecx, eax */
  ecx = eax;
/* 550a7f: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 550a81: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 550a85: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 550a89: mov dword ptr [0x6aae64], eax */
  W32((uint32_t)(0x6aae64u), eax);
/* 550a8e: fmul qword ptr [0x570268] */
  ST0 = ST0 * (F64((uint32_t)(0x570268u)));
/* 550a94: fadd qword ptr [0x6aae58] */
  ST0 = ST0 + (F64((uint32_t)(0x6aae58u)));
/* 550a9a: fst qword ptr [0x6aae58] */
  WF64((uint32_t)(0x6aae58u), ST0);
/* 550aa0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 550aa1: ret  */
  esp += 4; SPILL(); return;
}

void f_550ac0(void) {
  LOAD_REGS();
L_550ac0: /* 550ac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 550ac1: mov ebp, esp */
  ebp = esp;
/* 550ac3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550ac5: push 0x559bd0 */
  { uint32_t v = 0x559bd0u; esp -= 4; W32(esp, v); }
/* 550aca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 550ad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550ad1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 550ad8: sub esp, 0x86c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x86cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 550ade: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 550ae3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550ae4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 550ae7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550ae8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 550ae9: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 550aec: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 550aef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 550af0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550af1: push 0x5aeefc */
  { uint32_t v = 0x5aeefcu; esp -= 4; W32(esp, v); }
/* 550af6: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 550afb: xor esi, esi */
  esi = 0;
/* 550afd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550afe: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 550b01: call 0x4e30df */
  esp -= 4; W32(esp, 0x550b06u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 550b06: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550b09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 550b0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550b0b: lea ecx, [ebp - 0x878] */
  ecx = (uint32_t)(ebp + 0xfffff788u);
/* 550b11: push 0x5aef20 */
  { uint32_t v = 0x5aef20u; esp -= 4; W32(esp, v); }
/* 550b16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550b17: call 0x4e4183 */
  esp -= 4; W32(esp, 0x550b1cu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 550b1c: mov eax, dword ptr [0x5a2f68] */
  eax = R32((uint32_t)(0x5a2f68u));
/* 550b21: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550b24: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 550b26: mov dword ptr [ebp - 0x1c], 0xc */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xcu);
/* 550b2d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 550b30: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 550b37: je 0x550c32 */
  if (zf) goto L_550c32;
L_550b3d: /* 550b3d: cmp dword ptr [0x5b3184], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b3184u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 550b43: jne 0x550c32 */
  if (!zf) goto L_550c32;
L_550b49: /* 550b49: mov edi, dword ptr [0x6ac500] */
  edi = R32((uint32_t)(0x6ac500u));
/* 550b4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550b50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550b51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550b52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550b53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550b55: lea edx, [ebp - 0x878] */
  edx = (uint32_t)(ebp + 0xfffff788u);
/* 550b5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550b5c: mov eax, 0x80000000 */
  eax = 0x80000000u;
/* 550b61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550b62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550b63: mov dword ptr [ebp - 0x60], 0x44 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x44u);
/* 550b6a: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 550b6d: mov dword ptr [ebp - 0x58], esi */
  W32((uint32_t)(ebp + 0xffffffa8u), esi);
/* 550b70: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 550b73: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 550b76: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 550b79: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 550b7c: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 550b7f: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 550b82: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 550b85: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 550b88: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 550b8b: mov word ptr [ebp - 0x30], si */
  W16((uint32_t)(ebp + 0xffffffd0u), (esi & 0xffffu));
/* 550b8f: mov word ptr [ebp - 0x2e], si */
  W16((uint32_t)(ebp + 0xffffffd2u), (esi & 0xffffu));
/* 550b93: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 550b96: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 550b99: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 550b9c: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 550b9f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550ba1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550ba1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550ba3: jne 0x550ba9 */
  if (!zf) goto L_550ba9;
L_550ba5: /* 550ba5: xor ebx, ebx */
  ebx = 0;
/* 550ba7: jmp 0x550bd0 */
  goto L_550bd0;
L_550ba9: /* 550ba9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550baa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bad: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550baf: lea eax, [ebp - 0x878] */
  eax = (uint32_t)(ebp + 0xfffff788u);
/* 550bb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550bb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bb8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550bbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550bba: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 550bbd: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 550bc0: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 550bc3: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 550bc6: call 0x554f80 */
  esp -= 4; W32(esp, 0x550bcbu); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 550bcb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 550bce: mov ebx, esp */
  ebx = esp;
L_550bd0: /* 550bd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bd4: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550bd6: lea ecx, [ebp - 0x878] */
  ecx = (uint32_t)(ebp + 0xfffff788u);
/* 550bdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550bdd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bdf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550be1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550be1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550be2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550be3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550be4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550be5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550be7: lea edx, [ebp - 0x878] */
  edx = (uint32_t)(ebp + 0xfffff788u);
/* 550bed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550bee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bf0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550bf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550bf2: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 550bf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550bf6: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 550bf9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550bfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550bfc: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* 550c01: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 550c03: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 550c06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550c07: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 550c0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550c0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550c0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550c0d: call dword ptr [0x6ac554] */
  esp -= 4; W32(esp, 0x550c13u); SPILL(); call_ind(R32(0x6ac554u)); if (g_unwind) return; /* KERNEL32!CreateProcessA */ RELOAD();
L_550c13: /* 550c13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550c15: jne 0x550c9f */
  if (!zf) goto L_550c9f;
L_550c1b: /* 550c1b: lea esp, [ebp - 0x884] */
  esp = (uint32_t)(ebp + 0xfffff77cu);
/* 550c21: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550c24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 550c2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550c2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550c2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 550c2e: mov esp, ebp */
  esp = ebp;
/* 550c30: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550c31: ret  */
  esp += 4; SPILL(); return;
L_550c32: /* 550c32: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 550c35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550c36: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 550c39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550c3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550c3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550c3c: mov eax, 0x80000000 */
  eax = 0x80000000u;
/* 550c41: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* 550c46: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 550c48: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 550c4b: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 550c4e: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 550c51: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 550c54: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 550c57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550c58: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 550c5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550c5c: lea edx, [ebp - 0x878] */
  edx = (uint32_t)(ebp + 0xfffff788u);
/* 550c62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550c63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550c64: mov dword ptr [ebp - 0x60], 0x44 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x44u);
/* 550c6b: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 550c6e: mov dword ptr [ebp - 0x58], esi */
  W32((uint32_t)(ebp + 0xffffffa8u), esi);
/* 550c71: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 550c74: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 550c77: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 550c7a: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 550c7d: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 550c80: mov word ptr [ebp - 0x30], si */
  W16((uint32_t)(ebp + 0xffffffd0u), (esi & 0xffffu));
/* 550c84: mov word ptr [ebp - 0x2e], si */
  W16((uint32_t)(ebp + 0xffffffd2u), (esi & 0xffffu));
/* 550c88: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 550c8b: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 550c8e: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 550c91: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 550c94: call dword ptr [0x6ac54c] */
  esp -= 4; W32(esp, 0x550c9au); SPILL(); call_ind(R32(0x6ac54cu)); if (g_unwind) return; /* KERNEL32!CreateProcessW */ RELOAD();
/* 550c9a: jmp 0x550c13 */
  goto L_550c13;
L_550c9f: /* 550c9f: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 550ca2: jmp 0x550c1b */
  goto L_550c1b;
}

void f_550ca7(void) {
  LOAD_REGS();
L_550ca7: /* 550ca7: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 550caa: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 550caf: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 550cb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550cb3: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 550cb6: call 0x554df6 */
  esp -= 4; W32(esp, 0x550cbbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_550cbb(); return;
}

void f_550cbb(void) {
  LOAD_REGS();
L_550cbb: /* 550cbb: push 0x570274 */
  { uint32_t v = 0x570274u; esp -= 4; W32(esp, v); }
/* 550cc0: push 0x5aef2c */
  { uint32_t v = 0x5aef2cu; esp -= 4; W32(esp, v); }
/* 550cc5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x550ccau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 550cca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550ccd: xor esi, esi */
  esi = 0;
/* 550ccf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550cd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550cd1: call 0x554df6 */
  esp -= 4; W32(esp, 0x550cd6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_550cd6: guest_badaddr(0x550cd6); return;
}

void f_550d70(void) {
  LOAD_REGS();
L_550d70: /* 550d70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 550d74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550d75: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 550d79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550d7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550d7b: call dword ptr [0x6ac4d4] */
  esp -= 4; W32(esp, 0x550d81u); SPILL(); call_ind(R32(0x6ac4d4u)); if (g_unwind) return; /* KERNEL32!GetExitCodeProcess */ RELOAD();
/* 550d81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550d83: je 0x550d94 */
  if (zf) goto L_550d94;
L_550d85: /* 550d85: cmp dword ptr [esi], 0x103 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x103u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 550d8b: je 0x550d94 */
  if (zf) goto L_550d94;
L_550d8d: /* 550d8d: mov eax, 1 */
  eax = 0x1u;
/* 550d92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550d93: ret  */
  esp += 4; SPILL(); return;
L_550d94: /* 550d94: xor eax, eax */
  eax = 0;
/* 550d96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550d97: ret  */
  esp += 4; SPILL(); return;
}

void f_550db0(void) {
  LOAD_REGS();
L_550db0: /* 550db0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 550db1: mov ebp, esp */
  ebp = esp;
/* 550db3: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 550db6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550db7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550db8: mov esi, eax */
  esi = eax;
/* 550dba: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 550dbf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550dc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 550dc2: je 0x550dd1 */
  if (zf) goto L_550dd1;
L_550dc4: /* 550dc4: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 550dc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550dc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550dc9: call dword ptr [0x6ac608] */
  esp -= 4; W32(esp, 0x550dcfu); SPILL(); f_419fb7(); if (g_unwind) return; /* MSVCR70!_wstat */ RELOAD();
/* 550dcf: jmp 0x550e3f */
  goto L_550e3f;
L_550dd1: /* 550dd1: mov edi, dword ptr [0x6ac500] */
  edi = R32((uint32_t)(0x6ac500u));
/* 550dd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550dd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550ddb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550ddd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550ddf: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550de1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550de2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550de4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550de6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550de8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550de8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550dea: jne 0x550df0 */
  if (!zf) goto L_550df0;
L_550dec: /* 550dec: xor ebx, ebx */
  ebx = 0;
/* 550dee: jmp 0x550e14 */
  goto L_550e14;
L_550df0: /* 550df0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550df2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550df4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550df6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550df8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550dfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550dfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550dfd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550dff: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550e01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550e01: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 550e04: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 550e07: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 550e0a: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 550e0d: call 0x554f80 */
  esp -= 4; W32(esp, 0x550e12u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 550e12: mov ebx, esp */
  ebx = esp;
L_550e14: /* 550e14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550e16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550e18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550e1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550e1c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550e1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550e1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550e21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550e23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550e25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550e25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550e27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550e2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550e2b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550e2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550e2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550e30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550e32: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x550e34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550e34: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 550e37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550e38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550e39: call dword ptr [0x6ac60c] */
  esp -= 4; W32(esp, 0x550e3fu); SPILL(); f_4191ae(); if (g_unwind) return; /* MSVCR70!_stat */ RELOAD();
L_550e3f: /* 550e3f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550e42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 550e44: jne 0x550e76 */
  if (!zf) goto L_550e76;
L_550e46: /* 550e46: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550e49: lea edx, [ebp - 4] */
  edx = (uint32_t)(ebp + 0xfffffffcu);
/* 550e4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550e4d: call dword ptr [0x6ac618] */
  esp -= 4; W32(esp, 0x550e53u); SPILL(); f_43166a(); if (g_unwind) return; /* MSVCR70!time */ RELOAD();
/* 550e53: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 550e56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550e57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550e58: call dword ptr [0x6ac610] */
  esp -= 4; W32(esp, 0x550e5eu); SPILL(); f_431659(); if (g_unwind) return; /* MSVCR70!difftime */ RELOAD();
/* 550e5e: fmul qword ptr [0x570298] */
  ST0 = ST0 * (F64((uint32_t)(0x570298u)));
/* 550e64: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550e67: call 0x554f00 */
  esp -= 4; W32(esp, 0x550e6cu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 550e6c: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 550e6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550e70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550e71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 550e72: mov esp, ebp */
  esp = ebp;
/* 550e74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550e75: ret  */
  esp += 4; SPILL(); return;
L_550e76: /* 550e76: xor eax, eax */
  eax = 0;
/* 550e78: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 550e7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550e7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550e7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 550e7e: mov esp, ebp */
  esp = ebp;
/* 550e80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550e81: ret  */
  esp += 4; SPILL(); return;
}

void f_550ed0(void) {
  LOAD_REGS();
L_550ed0: /* 550ed0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 550ed1: mov ebp, esp */
  ebp = esp;
/* 550ed3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550ed5: push 0x559be0 */
  { uint32_t v = 0x559be0u; esp -= 4; W32(esp, v); }
/* 550eda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 550ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550ee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 550ee8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 550eeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550eec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550eed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 550eee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 550ef1: mov esi, ecx */
  esi = ecx;
/* 550ef3: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 550ef9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 550efb: push 0x5a36b0 */
  { uint32_t v = 0x5a36b0u; esp -= 4; W32(esp, v); }
/* 550f00: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 550f02: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 550f09: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x550f0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550f0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550f0c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 550f0e: call dword ptr [0x6ac558] */
  esp -= 4; W32(esp, 0x550f14u); SPILL(); call_ind(R32(0x6ac558u)); if (g_unwind) return; /* KERNEL32!InitializeCriticalSection */ RELOAD();
/* 550f14: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550f17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550f18: mov eax, esi */
  eax = esi;
/* 550f1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550f1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 550f22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 550f23: mov esp, ebp */
  esp = ebp;
/* 550f25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550f26: ret  */
  esp += 4; SPILL(); return;
}

void f_550f27(void) {
  LOAD_REGS();
L_550f27: /* 550f27: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 550f2a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 550f2f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 550f32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 550f33: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 550f36: call 0x554df6 */
  esp -= 4; W32(esp, 0x550f3bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_550f3b(); return;
}

void f_550f3b(void) {
  LOAD_REGS();
L_550f3b: /* 550f3b: push 0x5702a8 */
  { uint32_t v = 0x5702a8u; esp -= 4; W32(esp, v); }
/* 550f40: push 0x5af030 */
  { uint32_t v = 0x5af030u; esp -= 4; W32(esp, v); }
/* 550f45: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x550f4au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 550f4a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 550f4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550f4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 550f51: call 0x554df6 */
  esp -= 4; W32(esp, 0x550f56u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_550f56: guest_badaddr(0x550f56); return;
}

void f_550f90(void) {
  LOAD_REGS();
L_550f90: /* 550f90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 550f91: mov ebp, esp */
  ebp = esp;
/* 550f93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 550f95: push 0x559bf0 */
  { uint32_t v = 0x559bf0u; esp -= 4; W32(esp, v); }
/* 550f9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 550fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550fa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 550fa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 550fab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 550fac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550fad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 550fae: mov esi, ecx */
  esi = ecx;
/* 550fb0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 550fb2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 550fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 550fb6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 550fbd: call dword ptr [0x6ac55c] */
  esp -= 4; W32(esp, 0x550fc3u); SPILL(); call_ind(R32(0x6ac55cu)); if (g_unwind) return; /* KERNEL32!DeleteCriticalSection */ RELOAD();
/* 550fc3: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 550fc5: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 550fcb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 550fcd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 550fce: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x550fd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 550fd1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 550fd4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 550fd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 550fd6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 550fdd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 550fde: mov esp, ebp */
  esp = ebp;
/* 550fe0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 550fe1: ret  */
  esp += 4; SPILL(); return;
}

void f_550fe2(void) {
  LOAD_REGS();
L_550fe2: /* 550fe2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 550fe5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 550fea: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 550fed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 550fee: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 550ff1: call 0x554df6 */
  esp -= 4; W32(esp, 0x550ff6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_550ff6(); return;
}

void f_550ff6(void) {
  LOAD_REGS();
L_550ff6: /* 550ff6: push 0x570300 */
  { uint32_t v = 0x570300u; esp -= 4; W32(esp, v); }
/* 550ffb: push 0x5af038 */
  { uint32_t v = 0x5af038u; esp -= 4; W32(esp, v); }
/* 551000: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x551005u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 551005: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551008: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55100a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55100c: call 0x554df6 */
  esp -= 4; W32(esp, 0x551011u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_551011: guest_badaddr(0x551011); return;
}

void f_551050(void) {
  LOAD_REGS();
L_551050: /* 551050: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 551052: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551053: call dword ptr [0x6ac560] */
  esp -= 4; W32(esp, 0x551059u); SPILL(); call_ind(R32(0x6ac560u)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 551059: ret  */
  esp += 4; SPILL(); return;
}

void f_551070(void) {
  LOAD_REGS();
L_551070: /* 551070: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 551072: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551073: call dword ptr [0x6ac564] */
  esp -= 4; W32(esp, 0x551079u); SPILL(); call_ind(R32(0x6ac564u)); if (g_unwind) return; /* KERNEL32!LeaveCriticalSection */ RELOAD();
/* 551079: ret  */
  esp += 4; SPILL(); return;
}

void f_551090(void) {
  LOAD_REGS();
L_551090: /* 551090: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 551094: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551095: mov esi, ecx */
  esi = ecx;
/* 551097: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 551099: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 55109b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55109c: call dword ptr [0x6ac560] */
  esp -= 4; W32(esp, 0x5510a2u); SPILL(); call_ind(R32(0x6ac560u)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 5510a2: mov eax, esi */
  eax = esi;
/* 5510a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5510a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5510c0(void) {
  LOAD_REGS();
L_5510c0: /* 5510c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5510c2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 5510c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5510c5: call dword ptr [0x6ac564] */
  esp -= 4; W32(esp, 0x5510cbu); SPILL(); call_ind(R32(0x6ac564u)); if (g_unwind) return; /* KERNEL32!LeaveCriticalSection */ RELOAD();
/* 5510cb: ret  */
  esp += 4; SPILL(); return;
}

void f_5510e0(void) {
  LOAD_REGS();
L_5510e0: /* 5510e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5510e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5510e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5510e6: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* 5510e9: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 5510ee: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5510f1: mov edx, dword ptr [esi + eax + 4] */
  edx = R32((uint32_t)(esi + eax + 0x4u));
/* 5510f5: lea ecx, [esi + eax + 4] */
  ecx = (uint32_t)(esi + eax + 0x4u);
/* 5510f9: xor ebx, ebx */
  ebx = 0;
/* 5510fb: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5510fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5510fe: je 0x5511c0 */
  if (zf) goto L_5511c0;
L_551104: /* 551104: cmp dword ptr [esi + eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 551107: je 0x5511c0 */
  if (zf) goto L_5511c0;
L_55110d: /* 55110d: mov edx, dword ptr [esi + eax + 0x24] */
  edx = R32((uint32_t)(esi + eax + 0x24u));
/* 551111: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 551113: je 0x5511ef */
  if (zf) goto L_5511ef;
L_551119: /* 551119: jle 0x5511c0 */
  if ((zf || sf != of)) goto L_5511c0;
L_55111f: /* 55111f: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 551122: jg 0x5511c0 */
  if ((!zf && sf == of)) goto L_5511c0;
L_551128: /* 551128: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 55112c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 55112e: jg 0x551140 */
  if ((!zf && sf == of)) goto L_551140;
L_551130: /* 551130: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551131: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551132: mov eax, 1 */
  eax = 0x1u;
/* 551137: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551138: ret 8 */
  esp += 12; SPILL(); return;
L_55113b: /* 55113b: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
L_551140: /* 551140: lea ecx, [esi + eax + 0xc] */
  ecx = (uint32_t)(esi + eax + 0xcu);
/* 551144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 551145: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 551148: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55114a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 55114c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55114e: mov edx, edi */
  edx = edi;
/* 551150: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 551152: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 551153: mov edx, dword ptr [esi + eax + 8] */
  edx = R32((uint32_t)(esi + eax + 0x8u));
/* 551157: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 551159: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55115a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55115b: call 0x554bea */
  esp -= 4; W32(esp, 0x551160u); SPILL(); f_554bea(); if (g_unwind) return; RELOAD();
/* 551160: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551163: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 551165: jne 0x551187 */
  if (!zf) goto L_551187;
L_551167: /* 551167: mov edx, dword ptr [0x5f7d08] */
  edx = R32((uint32_t)(0x5f7d08u));
/* 55116d: cmp dword ptr [esi + edx + 0x24], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + edx + 0x24u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 551172: jne 0x55119a */
  if (!zf) goto L_55119a;
L_551174: /* 551174: mov eax, dword ptr [esi + edx + 8] */
  eax = R32((uint32_t)(esi + edx + 0x8u));
/* 551178: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55117a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55117c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55117d: call 0x554be4 */
  esp -= 4; W32(esp, 0x551182u); SPILL(); f_554be4(); if (g_unwind) return; RELOAD();
/* 551182: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551185: jmp 0x55118b */
  goto L_55118b;
L_551187: /* 551187: jl 0x5511c8 */
  if ((sf != of)) goto L_5511c8;
L_551189: /* 551189: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_55118b: /* 55118b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 55118d: jl 0x55113b */
  if ((sf != of)) goto L_55113b;
L_55118f: /* 55118f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551190: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551191: mov eax, 1 */
  eax = 0x1u;
/* 551196: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551197: ret 8 */
  esp += 12; SPILL(); return;
L_55119a: /* 55119a: mov ecx, edi */
  ecx = edi;
/* 55119c: mov edi, dword ptr [esi + edx] */
  edi = R32((uint32_t)(esi + edx));
/* 55119f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5511a1: mov edx, ecx */
  edx = ecx;
/* 5511a3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 5511a6: xor eax, eax */
  eax = 0;
/* 5511a8: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 5511aa: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5511ac: mov ecx, edx */
  ecx = edx;
/* 5511ae: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 5511b1: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 5511b3: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 5511b8: mov dword ptr [esi + eax + 0x1c], 1 */
  W32((uint32_t)(esi + eax + 0x1cu), 0x1u);
L_5511c0: /* 5511c0: xor eax, eax */
  eax = 0;
L_5511c2: /* 5511c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5511c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5511c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5511c5: ret 8 */
  esp += 12; SPILL(); return;
L_5511c8: /* 5511c8: mov edx, dword ptr [0x5f7d08] */
  edx = R32((uint32_t)(0x5f7d08u));
/* 5511ce: mov ecx, edi */
  ecx = edi;
/* 5511d0: mov edi, dword ptr [esi + edx] */
  edi = R32((uint32_t)(esi + edx));
/* 5511d3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5511d5: mov edx, ecx */
  edx = ecx;
/* 5511d7: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 5511d9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 5511dc: xor eax, eax */
  eax = 0;
/* 5511de: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5511e0: mov ecx, edx */
  ecx = edx;
/* 5511e2: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 5511e5: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 5511e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5511e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5511e9: xor eax, eax */
  eax = 0;
/* 5511eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5511ec: ret 8 */
  esp += 12; SPILL(); return;
L_5511ef: /* 5511ef: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 5511f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5511f4: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 5511f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5511f9: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5511fd: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* 551200: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 551202: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551203: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551204: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 551205: call dword ptr [0x6ac568] */
  esp -= 4; W32(esp, 0x55120bu); SPILL(); call_ind(R32(0x6ac568u)); if (g_unwind) return; /* KERNEL32!ReadFile */ RELOAD();
/* 55120b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55120d: je 0x55121c */
  if (zf) goto L_55121c;
L_55120f: /* 55120f: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 551215: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 551219: add dword ptr [esi + ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + ecx), r);
  }
L_55121c: /* 55121c: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 551220: je 0x5511c2 */
  if (zf) goto L_5511c2;
L_551222: /* 551222: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 551228: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551229: mov dword ptr [esi + ecx + 0x1c], 1 */
  W32((uint32_t)(esi + ecx + 0x1cu), 0x1u);
/* 551231: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551232: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551233: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5512a0(void) {
  LOAD_REGS();
L_5512a0: /* 5512a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5512a1: mov ebp, esp */
  ebp = esp;
/* 5512a3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5512a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5512a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5512a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5512a9: lea edi, [eax + eax*4] */
  edi = (uint32_t)(eax + eax*4);
/* 5512ac: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 5512b1: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 5512b4: mov eax, dword ptr [edi + eax + 0x24] */
  eax = R32((uint32_t)(edi + eax + 0x24u));
/* 5512b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5512ba: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 5512bd: je 0x55139a */
  if (zf) goto L_55139a;
L_5512c3: /* 5512c3: jle 0x551456 */
  if ((zf || sf != of)) goto L_551456;
L_5512c9: /* 5512c9: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5512cc: jg 0x551456 */
  if ((!zf && sf == of)) goto L_551456;
L_5512d2: /* 5512d2: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 5512d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5512d9: je 0x5512ec */
  if (zf) goto L_5512ec;
L_5512db: /* 5512db: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5512de: push 0x5af040 */
  { uint32_t v = 0x5af040u; esp -= 4; W32(esp, v); }
/* 5512e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5512e4: call dword ptr [0x6ac600] */
  esp -= 4; W32(esp, 0x5512eau); SPILL(); f_42bce4(); if (g_unwind) return; /* MSVCR70!_wfopen */ RELOAD();
/* 5512ea: jmp 0x551354 */
  goto L_551354;
L_5512ec: /* 5512ec: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5512ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5512f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5512f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5512f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5512f7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5512f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5512fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5512fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5512fe: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x551304u); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 551304: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 551306: jne 0x55130c */
  if (!zf) goto L_55130c;
L_551308: /* 551308: xor ebx, ebx */
  ebx = 0;
/* 55130a: jmp 0x551328 */
  goto L_551328;
L_55130c: /* 55130c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55130d: call 0x4e3e36 */
  esp -= 4; W32(esp, 0x551312u); SPILL(); f_4e3e36(); if (g_unwind) return; RELOAD();
/* 551312: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 551315: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 551318: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 55131b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55131e: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 551321: call 0x554f80 */
  esp -= 4; W32(esp, 0x551326u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 551326: mov ebx, esp */
  ebx = esp;
L_551328: /* 551328: push 0x5af048 */
  { uint32_t v = 0x5af048u; esp -= 4; W32(esp, v); }
/* 55132d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55132f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551331: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551333: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551335: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 551337: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551338: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55133a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55133c: call dword ptr [0x6ac500] */
  esp -= 4; W32(esp, 0x551342u); SPILL(); call_ind(R32(0x6ac500u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 551342: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551343: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551344: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551345: call 0x4e267b */
  esp -= 4; W32(esp, 0x55134au); SPILL(); f_4e267b(); if (g_unwind) return; RELOAD();
/* 55134a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55134d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55134e: call dword ptr [0x6ac604] */
  esp -= 4; W32(esp, 0x551354u); SPILL(); f_42ae09(); if (g_unwind) return; /* MSVCR70!fopen */ RELOAD();
L_551354: /* 551354: mov esi, eax */
  esi = eax;
/* 551356: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551359: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55135b: je 0x551456 */
  if (zf) goto L_551456;
L_551361: /* 551361: mov edx, dword ptr [0x5f7d08] */
  edx = R32((uint32_t)(0x5f7d08u));
/* 551367: mov eax, dword ptr [edi + edx + 8] */
  eax = R32((uint32_t)(edi + edx + 0x8u));
/* 55136b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55136d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55136f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551371: call 0x554bf0 */
  esp -= 4; W32(esp, 0x551376u); SPILL(); f_554bf0(); if (g_unwind) return; RELOAD();
/* 551376: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551379: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 55137b: jl 0x551456 */
  if ((sf != of)) goto L_551456;
L_551381: /* 551381: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 551387: mov dword ptr [edi + ecx + 4], esi */
  W32((uint32_t)(edi + ecx + 0x4u), esi);
/* 55138b: mov eax, 1 */
  eax = 0x1u;
/* 551390: lea esp, [ebp - 0xc] */
  esp = (uint32_t)(ebp + 0xfffffff4u);
/* 551393: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551394: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551395: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551396: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 551397: ret 8 */
  esp += 12; SPILL(); return;
L_55139a: /* 55139a: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 55139f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5513a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513a3: je 0x5513c4 */
  if (zf) goto L_5513c4;
L_5513a5: /* 5513a5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5513a8: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 5513ad: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 5513af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513b1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5513b3: push 0x80000000 */
  { uint32_t v = 0x80000000u; esp -= 4; W32(esp, v); }
/* 5513b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5513b9: call dword ptr [0x6ac570] */
  esp -= 4; W32(esp, 0x5513bfu); SPILL(); call_ind(R32(0x6ac570u)); if (g_unwind) return; /* KERNEL32!CreateFileW */ RELOAD();
/* 5513bf: jmp 0x551444 */
  goto L_551444;
L_5513c4: /* 5513c4: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5513c7: mov edi, dword ptr [0x6ac500] */
  edi = R32((uint32_t)(0x6ac500u));
/* 5513cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5513d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5513d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513da: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x5513dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5513dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5513de: jne 0x5513e4 */
  if (!zf) goto L_5513e4;
L_5513e0: /* 5513e0: xor ebx, ebx */
  ebx = 0;
/* 5513e2: jmp 0x551408 */
  goto L_551408;
L_5513e4: /* 5513e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513ec: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5513ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5513ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5513f3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x5513f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5513f5: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5513f8: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5513fb: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5513fe: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 551401: call 0x554f80 */
  esp -= 4; W32(esp, 0x551406u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 551406: mov ebx, esp */
  ebx = esp;
L_551408: /* 551408: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55140a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55140c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55140e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 551412: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551413: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551415: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551417: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x551419u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 551419: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55141b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55141d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55141e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55141f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 551421: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551422: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551424: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551426: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x551428u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 551428: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55142a: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 55142f: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 551431: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551433: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 551435: push 0x80000000 */
  { uint32_t v = 0x80000000u; esp -= 4; W32(esp, v); }
/* 55143a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55143b: call dword ptr [0x6ac56c] */
  esp -= 4; W32(esp, 0x551441u); SPILL(); call_ind(R32(0x6ac56cu)); if (g_unwind) return; /* KERNEL32!CreateFileA */ RELOAD();
/* 551441: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_551444: /* 551444: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 551447: jne 0x551462 */
  if (!zf) goto L_551462;
L_551449: /* 551449: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 55144e: mov dword ptr [edi + eax + 4], 0 */
  W32((uint32_t)(edi + eax + 0x4u), 0x0u);
L_551456: /* 551456: xor eax, eax */
  eax = 0;
/* 551458: lea esp, [ebp - 0xc] */
  esp = (uint32_t)(ebp + 0xfffffff4u);
/* 55145b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 55145c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 55145d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 55145e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 55145f: ret 8 */
  esp += 12; SPILL(); return;
L_551462: /* 551462: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 551468: mov dword ptr [edi + ecx + 4], eax */
  W32((uint32_t)(edi + ecx + 0x4u), eax);
/* 55146c: mov eax, 1 */
  eax = 0x1u;
/* 551471: lea esp, [ebp - 0xc] */
  esp = (uint32_t)(ebp + 0xfffffff4u);
/* 551474: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551475: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551476: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551477: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 551478: ret 8 */
  esp += 12; SPILL(); return;
}

void f_551500(void) {
  LOAD_REGS();
L_551500: /* 551500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 551504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551505: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* 551508: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 55150d: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 551510: mov ecx, dword ptr [esi + eax + 0x24] */
  ecx = R32((uint32_t)(esi + eax + 0x24u));
/* 551514: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551515: xor edi, edi */
  edi = 0;
/* 551517: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 551519: je 0x551560 */
  if (zf) goto L_551560;
L_55151b: /* 55151b: jle 0x551559 */
  if ((zf || sf != of)) goto L_551559;
L_55151d: /* 55151d: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 551520: jg 0x551559 */
  if ((!zf && sf == of)) goto L_551559;
L_551522: /* 551522: mov ecx, dword ptr [esi + eax + 8] */
  ecx = R32((uint32_t)(esi + eax + 0x8u));
/* 551526: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 551528: je 0x551538 */
  if (zf) goto L_551538;
L_55152a: /* 55152a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55152b: call 0x554bf6 */
  esp -= 4; W32(esp, 0x551530u); SPILL(); f_554bf6(); if (g_unwind) return; RELOAD();
/* 551530: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 551535: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_551538: /* 551538: mov dword ptr [esi + eax + 8], edi */
  W32((uint32_t)(esi + eax + 0x8u), edi);
/* 55153c: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 551541: mov dword ptr [esi + eax + 4], edi */
  W32((uint32_t)(esi + eax + 0x4u), edi);
/* 551545: mov ecx, dword ptr [0x5f7d08] */
  ecx = R32((uint32_t)(0x5f7d08u));
/* 55154b: mov dword ptr [esi + ecx + 0x18], edi */
  W32((uint32_t)(esi + ecx + 0x18u), edi);
/* 55154f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551550: mov eax, 1 */
  eax = 0x1u;
/* 551555: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551556: ret 4 */
  esp += 8; SPILL(); return;
L_551559: /* 551559: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 55155a: xor eax, eax */
  eax = 0;
/* 55155c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 55155d: ret 4 */
  esp += 8; SPILL(); return;
L_551560: /* 551560: mov ecx, dword ptr [esi + eax + 4] */
  ecx = R32((uint32_t)(esi + eax + 0x4u));
/* 551564: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 551566: je 0x551574 */
  if (zf) goto L_551574;
L_551568: /* 551568: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 551569: call dword ptr [0x6ac574] */
  esp -= 4; W32(esp, 0x55156fu); SPILL(); call_ind(R32(0x6ac574u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 55156f: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
L_551574: /* 551574: mov dword ptr [esi + eax + 8], edi */
  W32((uint32_t)(esi + eax + 0x8u), edi);
/* 551578: mov edx, dword ptr [0x5f7d08] */
  edx = R32((uint32_t)(0x5f7d08u));
/* 55157e: mov dword ptr [esi + edx + 4], edi */
  W32((uint32_t)(esi + edx + 0x4u), edi);
/* 551582: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 551587: mov dword ptr [esi + eax + 0x18], edi */
  W32((uint32_t)(esi + eax + 0x18u), edi);
/* 55158b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 55158c: mov eax, 1 */
  eax = 0x1u;
/* 551591: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551592: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5515d0(void) {
  LOAD_REGS();
L_5515d0: /* 5515d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5515d1: mov ebp, esp */
  ebp = esp;
/* 5515d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5515d5: push 0x559c00 */
  { uint32_t v = 0x559c00u; esp -= 4; W32(esp, v); }
/* 5515da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5515e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5515e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5515e8: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5515ee: cmp word ptr [0x6aae68], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x6aae68u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 5515f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5515f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5515f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5515f9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5515fc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 551603: jne 0x55169e */
  if (!zf) goto L_55169e;
L_551609: /* 551609: mov eax, dword ptr [0x5a2f68] */
  eax = R32((uint32_t)(0x5a2f68u));
/* 55160e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 551610: je 0x551653 */
  if (zf) goto L_551653;
L_551612: /* 551612: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 551617: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 551619: jne 0x551653 */
  if (!zf) goto L_551653;
L_55161b: /* 55161b: mov ecx, dword ptr [0x5afec0] */
  ecx = R32((uint32_t)(0x5afec0u));
/* 551621: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 551626: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 55162c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55162d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55162e: call dword ptr [0x6ac57c] */
  esp -= 4; W32(esp, 0x551634u); SPILL(); call_ind(R32(0x6ac57cu)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameA */ RELOAD();
/* 551634: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 551639: push 0x6aae68 */
  { uint32_t v = 0x6aae68u; esp -= 4; W32(esp, v); }
/* 55163e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 551640: lea edx, [ebp - 0x118] */
  edx = (uint32_t)(ebp + 0xfffffee8u);
/* 551646: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 551647: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551649: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55164b: call dword ptr [0x6ac504] */
  esp -= 4; W32(esp, 0x551651u); SPILL(); call_ind(R32(0x6ac504u)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 551651: jmp 0x551669 */
  goto L_551669;
L_551653: /* 551653: mov eax, dword ptr [0x5afec0] */
  eax = R32((uint32_t)(0x5afec0u));
/* 551658: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 55165d: push 0x6aae68 */
  { uint32_t v = 0x6aae68u; esp -= 4; W32(esp, v); }
/* 551662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551663: call dword ptr [0x6ac578] */
  esp -= 4; W32(esp, 0x551669u); SPILL(); call_ind(R32(0x6ac578u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameW */ RELOAD();
L_551669: /* 551669: push 0x6aae68 */
  { uint32_t v = 0x6aae68u; esp -= 4; W32(esp, v); }
/* 55166e: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x551673u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 551673: mov edx, dword ptr [0x5af08c] */
  edx = R32((uint32_t)(0x5af08cu));
/* 551679: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_55167c: /* 55167c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 55167d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 55167f: jle 0x551694 */
  if ((zf || sf != of)) goto L_551694;
L_551681: /* 551681: mov cx, word ptr [eax*2 + 0x6aae66] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax*2 + 0x6aae66u))) & 0xffffu);
/* 551689: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 55168c: je 0x551694 */
  if (zf) goto L_551694;
L_55168e: /* 55168e: cmp cx, 0x2f */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 551692: jne 0x55167c */
  if (!zf) goto L_55167c;
L_551694: /* 551694: mov word ptr [eax*2 + 0x6aae68], 0 */
  W16((uint32_t)(eax*2 + 0x6aae68u), 0x0u);
L_55169e: /* 55169e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5516a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5516a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5516a3: mov eax, 0x6aae68 */
  eax = 0x6aae68u;
/* 5516a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5516af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5516b0: mov esp, ebp */
  esp = ebp;
/* 5516b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5516b3: ret  */
  esp += 4; SPILL(); return;
}

void f_5516b4(void) {
  LOAD_REGS();
L_5516b4: /* 5516b4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5516b7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5516bc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5516bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5516c0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 5516c3: call 0x554df6 */
  esp -= 4; W32(esp, 0x5516c8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5516c8(); return;
}

void f_5516c8(void) {
  LOAD_REGS();
L_5516c8: /* 5516c8: push 0x570358 */
  { uint32_t v = 0x570358u; esp -= 4; W32(esp, v); }
/* 5516cd: push 0x5af090 */
  { uint32_t v = 0x5af090u; esp -= 4; W32(esp, v); }
/* 5516d2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5516d7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5516d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5516da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5516dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5516de: call 0x554df6 */
  esp -= 4; W32(esp, 0x5516e3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5516e3: guest_badaddr(0x5516e3); return;
}

void f_551740(void) {
  LOAD_REGS();
L_551740: /* 551740: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 551746: cmp word ptr [0x6ab0d0], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x6ab0d0u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 55174e: jne 0x5517fb */
  if (!zf) goto L_5517fb;
L_551754: /* 551754: mov eax, dword ptr [0x5a2f68] */
  eax = R32((uint32_t)(0x5a2f68u));
/* 551759: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55175b: mov dword ptr [esp], 0x100 */
  W32((uint32_t)(esp), 0x100u);
/* 551763: je 0x55179b */
  if (zf) goto L_55179b;
L_551765: /* 551765: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 55176a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55176c: jne 0x55179b */
  if (!zf) goto L_55179b;
L_55176e: /* 55176e: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 551772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551773: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 551777: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 551778: call dword ptr [0x6ac584] */
  esp -= 4; W32(esp, 0x55177eu); SPILL(); call_ind(R32(0x6ac584u)); if (g_unwind) return; /* KERNEL32!GetComputerNameA */ RELOAD();
/* 55177e: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 551783: push 0x6ab0d0 */
  { uint32_t v = 0x6ab0d0u; esp -= 4; W32(esp, v); }
/* 551788: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 55178a: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 55178e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55178f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551791: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551793: call dword ptr [0x6ac504] */
  esp -= 4; W32(esp, 0x551799u); SPILL(); call_ind(R32(0x6ac504u)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 551799: jmp 0x5517ab */
  goto L_5517ab;
L_55179b: /* 55179b: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 55179f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5517a0: push 0x6ab0d0 */
  { uint32_t v = 0x6ab0d0u; esp -= 4; W32(esp, v); }
/* 5517a5: call dword ptr [0x6ac580] */
  esp -= 4; W32(esp, 0x5517abu); SPILL(); call_ind(R32(0x6ac580u)); if (g_unwind) return; /* KERNEL32!GetComputerNameW */ RELOAD();
L_5517ab: /* 5517ab: cmp word ptr [0x6ab0d0], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x6ab0d0u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 5517b3: mov ecx, 0x6ab0d0 */
  ecx = 0x6ab0d0u;
/* 5517b8: mov edx, ecx */
  edx = ecx;
/* 5517ba: je 0x5517f6 */
  if (zf) goto L_5517f6;
L_5517bc: /* 5517bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_5517c0: /* 5517c0: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 5517c3: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 5517c7: jb 0x5517cf */
  if (cf) goto L_5517cf;
L_5517c9: /* 5517c9: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 5517cd: jbe 0x5517e7 */
  if ((cf | zf)) goto L_5517e7;
L_5517cf: /* 5517cf: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 5517d3: jb 0x5517db */
  if (cf) goto L_5517db;
L_5517d5: /* 5517d5: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 5517d9: jbe 0x5517e7 */
  if ((cf | zf)) goto L_5517e7;
L_5517db: /* 5517db: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 5517df: jb 0x5517ed */
  if (cf) goto L_5517ed;
L_5517e1: /* 5517e1: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 5517e5: ja 0x5517ed */
  if ((!cf && !zf)) goto L_5517ed;
L_5517e7: /* 5517e7: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 5517ea: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_5517ed: /* 5517ed: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5517f0: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 5517f4: jne 0x5517c0 */
  if (!zf) goto L_5517c0;
L_5517f6: /* 5517f6: mov word ptr [edx], 0 */
  W16((uint32_t)(edx), 0x0u);
L_5517fb: /* 5517fb: mov eax, 0x6ab0d0 */
  eax = 0x6ab0d0u;
/* 551800: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551806: ret  */
  esp += 4; SPILL(); return;
}

void f_551850(void) {
  LOAD_REGS();
L_551850: /* 551850: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 551856: cmp word ptr [0x6ab338], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x6ab338u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 55185e: jne 0x55190b */
  if (!zf) goto L_55190b;
L_551864: /* 551864: mov eax, dword ptr [0x5a2f68] */
  eax = R32((uint32_t)(0x5a2f68u));
/* 551869: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55186b: mov dword ptr [esp], 0x100 */
  W32((uint32_t)(esp), 0x100u);
/* 551873: je 0x5518ab */
  if (zf) goto L_5518ab;
L_551875: /* 551875: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 55187a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55187c: jne 0x5518ab */
  if (!zf) goto L_5518ab;
L_55187e: /* 55187e: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 551882: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551883: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 551887: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 551888: call dword ptr [0x6ac4a0] */
  esp -= 4; W32(esp, 0x55188eu); SPILL(); call_ind(R32(0x6ac4a0u)); if (g_unwind) return; /* ADVAPI32!GetUserNameA */ RELOAD();
/* 55188e: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 551893: push 0x6ab338 */
  { uint32_t v = 0x6ab338u; esp -= 4; W32(esp, v); }
/* 551898: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 55189a: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 55189e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55189f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5518a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5518a3: call dword ptr [0x6ac504] */
  esp -= 4; W32(esp, 0x5518a9u); SPILL(); call_ind(R32(0x6ac504u)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 5518a9: jmp 0x5518bb */
  goto L_5518bb;
L_5518ab: /* 5518ab: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 5518af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5518b0: push 0x6ab338 */
  { uint32_t v = 0x6ab338u; esp -= 4; W32(esp, v); }
/* 5518b5: call dword ptr [0x6ac4a4] */
  esp -= 4; W32(esp, 0x5518bbu); SPILL(); call_ind(R32(0x6ac4a4u)); if (g_unwind) return; /* ADVAPI32!GetUserNameW */ RELOAD();
L_5518bb: /* 5518bb: cmp word ptr [0x6ab338], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x6ab338u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 5518c3: mov ecx, 0x6ab338 */
  ecx = 0x6ab338u;
/* 5518c8: mov edx, ecx */
  edx = ecx;
/* 5518ca: je 0x551906 */
  if (zf) goto L_551906;
L_5518cc: /* 5518cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_5518d0: /* 5518d0: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 5518d3: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 5518d7: jb 0x5518df */
  if (cf) goto L_5518df;
L_5518d9: /* 5518d9: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 5518dd: jbe 0x5518f7 */
  if ((cf | zf)) goto L_5518f7;
L_5518df: /* 5518df: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 5518e3: jb 0x5518eb */
  if (cf) goto L_5518eb;
L_5518e5: /* 5518e5: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 5518e9: jbe 0x5518f7 */
  if ((cf | zf)) goto L_5518f7;
L_5518eb: /* 5518eb: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 5518ef: jb 0x5518fd */
  if (cf) goto L_5518fd;
L_5518f1: /* 5518f1: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 5518f5: ja 0x5518fd */
  if ((!cf && !zf)) goto L_5518fd;
L_5518f7: /* 5518f7: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 5518fa: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_5518fd: /* 5518fd: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 551900: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 551904: jne 0x5518d0 */
  if (!zf) goto L_5518d0;
L_551906: /* 551906: mov word ptr [edx], 0 */
  W16((uint32_t)(edx), 0x0u);
L_55190b: /* 55190b: mov eax, 0x6ab338 */
  eax = 0x6ab338u;
/* 551910: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551916: ret  */
  esp += 4; SPILL(); return;
}

void f_551960(void) {
  LOAD_REGS();
L_551960: /* 551960: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 551961: mov ebp, esp */
  ebp = esp;
/* 551963: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 551965: push 0x559c10 */
  { uint32_t v = 0x559c10u; esp -= 4; W32(esp, v); }
/* 55196a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 551970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551971: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 551978: sub esp, 0x30c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 55197e: cmp word ptr [0x6ab5a0], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x6ab5a0u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 551986: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551987: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551988: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551989: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 55198c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 551993: jne 0x551a7c */
  if (!zf) goto L_551a7c;
L_551999: /* 551999: mov eax, dword ptr [0x5a2f68] */
  eax = R32((uint32_t)(0x5a2f68u));
/* 55199e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5519a0: lea esi, [ebp - 0x318] */
  esi = (uint32_t)(ebp + 0xfffffce8u);
/* 5519a6: je 0x5519e6 */
  if (zf) goto L_5519e6;
L_5519a8: /* 5519a8: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 5519ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5519af: jne 0x5519e6 */
  if (!zf) goto L_5519e6;
L_5519b1: /* 5519b1: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 5519b6: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 5519bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5519bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5519bf: call dword ptr [0x6ac57c] */
  esp -= 4; W32(esp, 0x5519c5u); SPILL(); call_ind(R32(0x6ac57cu)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameA */ RELOAD();
/* 5519c5: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 5519ca: lea ecx, [ebp - 0x318] */
  ecx = (uint32_t)(ebp + 0xfffffce8u);
/* 5519d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5519d1: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5519d3: lea edx, [ebp - 0x118] */
  edx = (uint32_t)(ebp + 0xfffffee8u);
/* 5519d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5519da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5519dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5519de: call dword ptr [0x6ac504] */
  esp -= 4; W32(esp, 0x5519e4u); SPILL(); call_ind(R32(0x6ac504u)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 5519e4: jmp 0x551a00 */
  goto L_551a00;
L_5519e6: /* 5519e6: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 5519eb: lea eax, [ebp - 0x318] */
  eax = (uint32_t)(ebp + 0xfffffce8u);
/* 5519f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5519f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5519f4: call dword ptr [0x6ac578] */
  esp -= 4; W32(esp, 0x5519fau); SPILL(); call_ind(R32(0x6ac578u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameW */ RELOAD();
/* 5519fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_551a00: /* 551a00: movzx ecx, word ptr [0x5af0a8] */
  ecx = (uint32_t)(R16((uint32_t)(0x5af0a8u)));
/* 551a07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 551a08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551a09: call 0x4e1abe */
  esp -= 4; W32(esp, 0x551a0eu); SPILL(); f_4e1abe(); if (g_unwind) return; RELOAD();
/* 551a0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551a11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 551a13: je 0x551a30 */
  if (zf) { SPILL(); f_551a30(); return; }
L_551a15: /* 551a15: movzx edx, word ptr [0x5af0ac] */
  edx = (uint32_t)(R16((uint32_t)(0x5af0acu)));
/* 551a1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 551a1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551a1e: call 0x4e1abe */
  esp -= 4; W32(esp, 0x551a23u); SPILL(); f_4e1abe(); if (g_unwind) return; RELOAD();
/* 551a23: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551a26: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 551a29: jmp 0x551a00 */
  goto L_551a00;
L_551a7c: /* 551a7c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 551a7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551a80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551a81: mov eax, 0x6ab5a0 */
  eax = 0x6ab5a0u;
/* 551a86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 551a8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551a8e: mov esp, ebp */
  esp = ebp;
/* 551a90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 551a91: ret  */
  esp += 4; SPILL(); return;
}

void f_551a2b(void) {
  LOAD_REGS();
L_551a2b: /* 551a2b: jmp 0x551a30 */
  SPILL(); f_551a30(); return;
}

void f_551a2d(void) {
  LOAD_REGS();
L_551a2d: /* 551a2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
  SPILL(); f_551a30(); return;
}

void f_551a30(void) {
  LOAD_REGS();
L_551a30: /* 551a30: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 551a32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551a33: call 0x4e1abe */
  esp -= 4; W32(esp, 0x551a38u); SPILL(); f_4e1abe(); if (g_unwind) return; RELOAD();
/* 551a38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551a3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 551a3d: je 0x551a4f */
  if (zf) goto L_551a4f;
L_551a3f: /* 551a3f: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 551a41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551a42: call 0x4e1abe */
  esp -= 4; W32(esp, 0x551a47u); SPILL(); f_4e1abe(); if (g_unwind) return; RELOAD();
/* 551a47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551a4a: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 551a4d: jmp 0x551a30 */
  goto L_551a30;
L_551a4f: /* 551a4f: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 551a51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551a52: call 0x4e1abe */
  esp -= 4; W32(esp, 0x551a57u); SPILL(); f_4e1abe(); if (g_unwind) return; RELOAD();
/* 551a57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551a5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 551a5c: je 0x551a6e */
  if (zf) goto L_551a6e;
L_551a5e: /* 551a5e: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 551a60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551a61: call 0x4e1abe */
  esp -= 4; W32(esp, 0x551a66u); SPILL(); f_4e1abe(); if (g_unwind) return; RELOAD();
/* 551a66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551a69: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
L_551a6e: /* 551a6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551a6f: push 0x6ab5a0 */
  { uint32_t v = 0x6ab5a0u; esp -= 4; W32(esp, v); }
/* 551a74: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x551a79u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 551a79: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551a7c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 551a7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551a80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551a81: mov eax, 0x6ab5a0 */
  eax = 0x6ab5a0u;
/* 551a86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 551a8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551a8e: mov esp, ebp */
  esp = ebp;
/* 551a90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 551a91: ret  */
  esp += 4; SPILL(); return;
}

void f_551a92(void) {
  LOAD_REGS();
L_551a92: /* 551a92: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 551a95: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 551a9a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 551a9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 551a9e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 551aa1: call 0x554df6 */
  esp -= 4; W32(esp, 0x551aa6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_551aa6(); return;
}

void f_551aa6(void) {
  LOAD_REGS();
L_551aa6: /* 551aa6: push 0x570374 */
  { uint32_t v = 0x570374u; esp -= 4; W32(esp, v); }
/* 551aab: push 0x5af0b0 */
  { uint32_t v = 0x5af0b0u; esp -= 4; W32(esp, v); }
/* 551ab0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x551ab5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 551ab5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551ab8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551aba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551abc: call 0x554df6 */
  esp -= 4; W32(esp, 0x551ac1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_551ac1: guest_badaddr(0x551ac1); return;
}

void f_551b30(void) {
  LOAD_REGS();
L_551b30: /* 551b30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551b31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551b32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551b33: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 551b37: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* 551b39: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 551b3d: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 551b3f: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 551b43: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 551b45: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 551b49: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 551b4b: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 551b4f: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 551b51: mov eax, 0 */
  eax = 0x0u;
/* 551b56: mov ebx, 0 */
  ebx = 0x0u;
/* 551b5b: mov ecx, 0 */
  ecx = 0x0u;
/* 551b60: mov edx, 0 */
  edx = 0x0u;
/* 551b65: mov esi, 0 */
  esi = 0x0u;
/* 551b6a: mov edi, 0 */
  edi = 0x0u;
/* 551b6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551b70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551b71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551b72: ret  */
  esp += 4; SPILL(); return;
}

void f_551ba0(void) {
  LOAD_REGS();
L_551ba0: /* 551ba0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 551ba1: mov ebp, esp */
  ebp = esp;
/* 551ba3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 551ba5: push 0x559c20 */
  { uint32_t v = 0x559c20u; esp -= 4; W32(esp, v); }
/* 551baa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 551bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551bb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 551bb8: sub esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 551bbe: mov eax, dword ptr [0x5a2f68] */
  eax = R32((uint32_t)(0x5a2f68u));
/* 551bc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 551bc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551bc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551bc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551bc8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 551bcf: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 551bd2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 551bd6: je 0x551c12 */
  if (zf) goto L_551c12;
L_551bd8: /* 551bd8: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 551bdd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 551bdf: jne 0x551c12 */
  if (!zf) goto L_551c12;
L_551be1: /* 551be1: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 551be7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551be8: mov dword ptr [ebp - 0xb4], 0x94 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x94u);
/* 551bf2: call dword ptr [0x6ac588] */
  esp -= 4; W32(esp, 0x551bf8u); SPILL(); call_ind(R32(0x6ac588u)); if (g_unwind) return; /* KERNEL32!GetVersionExA */ RELOAD();
/* 551bf8: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 551bfe: mov ebx, dword ptr [ebp - 0xb0] */
  ebx = R32((uint32_t)(ebp + 0xffffff50u));
/* 551c04: mov edi, dword ptr [ebp - 0xac] */
  edi = R32((uint32_t)(ebp + 0xffffff54u));
/* 551c0a: mov esi, dword ptr [ebp - 0xa8] */
  esi = R32((uint32_t)(ebp + 0xffffff58u));
/* 551c10: jmp 0x551c41 */
  goto L_551c41;
L_551c12: /* 551c12: lea ecx, [ebp - 0x134] */
  ecx = (uint32_t)(ebp + 0xfffffeccu);
/* 551c18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 551c19: mov dword ptr [ebp - 0x134], 0x114 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x114u);
/* 551c23: call dword ptr [0x6ac4f8] */
  esp -= 4; W32(esp, 0x551c29u); SPILL(); call_ind(R32(0x6ac4f8u)); if (g_unwind) return; /* KERNEL32!GetVersionExW */ RELOAD();
/* 551c29: mov eax, dword ptr [ebp - 0x124] */
  eax = R32((uint32_t)(ebp + 0xfffffedcu));
/* 551c2f: mov ebx, dword ptr [ebp - 0x130] */
  ebx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 551c35: mov edi, dword ptr [ebp - 0x12c] */
  edi = R32((uint32_t)(ebp + 0xfffffed4u));
/* 551c3b: mov esi, dword ptr [ebp - 0x128] */
  esi = R32((uint32_t)(ebp + 0xfffffed8u));
L_551c41: /* 551c41: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 551c44: jne 0x551d1c */
  if (!zf) goto L_551d1c;
L_551c4a: /* 551c4a: cmp ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 551c4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551c4e: jne 0x551cc7 */
  if (!zf) goto L_551cc7;
L_551c50: /* 551c50: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 551c52: jne 0x551c8d */
  if (!zf) goto L_551c8d;
L_551c54: /* 551c54: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 551c5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551c5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551c5c: push 0x5af0b8 */
  { uint32_t v = 0x5af0b8u; esp -= 4; W32(esp, v); }
/* 551c61: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 551c66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 551c67: call 0x4e30df */
  esp -= 4; W32(esp, 0x551c6cu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 551c6c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551c6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551c70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551c71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551c72: push 0x5af120 */
  { uint32_t v = 0x5af120u; esp -= 4; W32(esp, v); }
/* 551c77: push 0x5a1758 */
  { uint32_t v = 0x5a1758u; esp -= 4; W32(esp, v); }
/* 551c7c: call 0x4e4183 */
  esp -= 4; W32(esp, 0x551c81u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 551c81: mov dword ptr [0x5a2f60], 3 */
  W32((uint32_t)(0x5a2f60u), 0x3u);
/* 551c8b: jmp 0x551cfe */
  goto L_551cfe;
L_551c8d: /* 551c8d: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 551c92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551c93: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 551c95: push 0x5af160 */
  { uint32_t v = 0x5af160u; esp -= 4; W32(esp, v); }
/* 551c9a: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 551c9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551ca0: call 0x4e30df */
  esp -= 4; W32(esp, 0x551ca5u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 551ca5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551ca8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551ca9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551caa: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 551cac: push 0x5af1c4 */
  { uint32_t v = 0x5af1c4u; esp -= 4; W32(esp, v); }
/* 551cb1: push 0x5a1758 */
  { uint32_t v = 0x5a1758u; esp -= 4; W32(esp, v); }
/* 551cb6: call 0x4e4183 */
  esp -= 4; W32(esp, 0x551cbbu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 551cbb: mov dword ptr [0x5a2f60], 4 */
  W32((uint32_t)(0x5a2f60u), 0x4u);
/* 551cc5: jmp 0x551cfe */
  goto L_551cfe;
L_551cc7: /* 551cc7: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 551ccd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551cce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551ccf: push 0x5af200 */
  { uint32_t v = 0x5af200u; esp -= 4; W32(esp, v); }
/* 551cd4: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 551cd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 551cda: call 0x4e30df */
  esp -= 4; W32(esp, 0x551cdfu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 551cdf: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551ce2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551ce3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551ce4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551ce5: push 0x5af264 */
  { uint32_t v = 0x5af264u; esp -= 4; W32(esp, v); }
/* 551cea: push 0x5a1758 */
  { uint32_t v = 0x5a1758u; esp -= 4; W32(esp, v); }
/* 551cef: call 0x4e4183 */
  esp -= 4; W32(esp, 0x551cf4u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 551cf4: mov dword ptr [0x5a2f60], 5 */
  W32((uint32_t)(0x5a2f60u), 0x5u);
L_551cfe: /* 551cfe: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551d01: mov dword ptr [0x5b3184], 1 */
  W32((uint32_t)(0x5b3184u), 0x1u);
/* 551d0b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 551d0e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 551d15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551d16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551d17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551d18: mov esp, ebp */
  esp = ebp;
/* 551d1a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 551d1b: ret  */
  esp += 4; SPILL(); return;
L_551d1c: /* 551d1c: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 551d1f: jne 0x551dc6 */
  if (!zf) goto L_551dc6;
L_551d25: /* 551d25: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 551d28: ja 0x551d2f */
  if ((!cf && !zf)) goto L_551d2f;
L_551d2a: /* 551d2a: cmp edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 551d2d: jb 0x551d7b */
  if (cf) goto L_551d7b;
L_551d2f: /* 551d2f: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 551d35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551d36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551d37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551d38: push 0x5af2a0 */
  { uint32_t v = 0x5af2a0u; esp -= 4; W32(esp, v); }
/* 551d3d: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 551d42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 551d43: call 0x4e30df */
  esp -= 4; W32(esp, 0x551d48u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 551d48: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551d4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551d4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551d4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551d4e: push 0x5af304 */
  { uint32_t v = 0x5af304u; esp -= 4; W32(esp, v); }
/* 551d53: push 0x5a1758 */
  { uint32_t v = 0x5a1758u; esp -= 4; W32(esp, v); }
/* 551d58: call 0x4e4183 */
  esp -= 4; W32(esp, 0x551d5du); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 551d5d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551d60: mov dword ptr [0x5a2f60], 1 */
  W32((uint32_t)(0x5a2f60u), 0x1u);
/* 551d6a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 551d6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 551d74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551d75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551d76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551d77: mov esp, ebp */
  esp = ebp;
/* 551d79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 551d7a: ret  */
  esp += 4; SPILL(); return;
L_551d7b: /* 551d7b: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 551d80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551d81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551d82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551d83: push 0x5af340 */
  { uint32_t v = 0x5af340u; esp -= 4; W32(esp, v); }
/* 551d88: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 551d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551d8e: call 0x4e30df */
  esp -= 4; W32(esp, 0x551d93u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 551d93: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551d97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551d98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551d99: push 0x5af3a4 */
  { uint32_t v = 0x5af3a4u; esp -= 4; W32(esp, v); }
/* 551d9e: push 0x5a1758 */
  { uint32_t v = 0x5a1758u; esp -= 4; W32(esp, v); }
/* 551da3: call 0x4e4183 */
  esp -= 4; W32(esp, 0x551da8u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 551da8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551dab: mov dword ptr [0x5a2f60], 0 */
  W32((uint32_t)(0x5a2f60u), 0x0u);
/* 551db5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 551db8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 551dbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551dc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551dc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551dc2: mov esp, ebp */
  esp = ebp;
/* 551dc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 551dc5: ret  */
  esp += 4; SPILL(); return;
L_551dc6: /* 551dc6: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 551dcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551dcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551dce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551dcf: push 0x5af3e0 */
  { uint32_t v = 0x5af3e0u; esp -= 4; W32(esp, v); }
/* 551dd4: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 551dd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 551dda: call 0x4e30df */
  esp -= 4; W32(esp, 0x551ddfu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 551ddf: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551de2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551de3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551de4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 551de5: push 0x5af428 */
  { uint32_t v = 0x5af428u; esp -= 4; W32(esp, v); }
/* 551dea: push 0x5a1758 */
  { uint32_t v = 0x5a1758u; esp -= 4; W32(esp, v); }
/* 551def: call 0x4e4183 */
  esp -= 4; W32(esp, 0x551df4u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 551df4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 551df7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551dfa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 551dfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 551dfc: mov dword ptr [0x5a2f60], 0xff */
  W32((uint32_t)(0x5a2f60u), 0xffu);
/* 551e06: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 551e0d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 551e0e: mov esp, ebp */
  esp = ebp;
/* 551e10: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 551e11: ret  */
  esp += 4; SPILL(); return;
}

void f_551e12(void) {
  LOAD_REGS();
L_551e12: /* 551e12: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 551e15: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 551e1a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 551e1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551e1e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 551e21: call 0x554df6 */
  esp -= 4; W32(esp, 0x551e26u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_551e26(); return;
}

void f_551e26(void) {
  LOAD_REGS();
L_551e26: /* 551e26: push 0x5703c0 */
  { uint32_t v = 0x5703c0u; esp -= 4; W32(esp, v); }
/* 551e2b: push 0x5af45c */
  { uint32_t v = 0x5af45cu; esp -= 4; W32(esp, v); }
/* 551e30: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x551e35u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 551e35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551e38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551e3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551e3c: call 0x554df6 */
  esp -= 4; W32(esp, 0x551e41u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_551e41(); return;
}

void f_551e41(void) {
  LOAD_REGS();
L_551e41: /* 551e41: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 551e44: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 551e49: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 551e4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 551e4d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 551e50: call 0x554df6 */
  esp -= 4; W32(esp, 0x551e55u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_551e55(); return;
}

void f_551e55(void) {
  LOAD_REGS();
L_551e55: /* 551e55: push 0x570390 */
  { uint32_t v = 0x570390u; esp -= 4; W32(esp, v); }
/* 551e5a: push 0x5af464 */
  { uint32_t v = 0x5af464u; esp -= 4; W32(esp, v); }
/* 551e5f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x551e64u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 551e64: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551e67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551e69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551e6b: call 0x554df6 */
  esp -= 4; W32(esp, 0x551e70u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_551e70: guest_badaddr(0x551e70); return;
}

void f_551f40(void) {
  LOAD_REGS();
L_551f40: /* 551f40: mov eax, dword ptr [0x5b2148] */
  eax = R32((uint32_t)(0x5b2148u));
/* 551f45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 551f47: jne 0x551f5e */
  if (!zf) goto L_551f5e;
L_551f49: /* 551f49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 551f4b: call dword ptr [0x6ac780] */
  esp -= 4; W32(esp, 0x551f51u); SPILL(); call_ind(R32(0x6ac780u)); if (g_unwind) return; /* USER32!PostQuitMessage */ RELOAD();
/* 551f51: mov eax, 1 */
  eax = 0x1u;
/* 551f56: mov dword ptr [0x5b2148], eax */
  W32((uint32_t)(0x5b2148u), eax);
/* 551f5b: ret 4 */
  esp += 8; SPILL(); return;
L_551f5e: /* 551f5e: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 551f63: push 0x5af46c */
  { uint32_t v = 0x5af46cu; esp -= 4; W32(esp, v); }
/* 551f68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 551f69: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x551f6eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 551f6e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 551f71: mov eax, 1 */
  eax = 0x1u;
/* 551f76: ret 4 */
  esp += 8; SPILL(); return;
}

void f_551f90(void) {
  LOAD_REGS();
L_551f90: /* 551f90: ret  */
  esp += 4; SPILL(); return;
}

void f_551fb0(void) {
  LOAD_REGS();
L_551fb0: /* 551fb0: ret  */
  esp += 4; SPILL(); return;
}

void f_551fd0(void) {
  LOAD_REGS();
L_551fd0: /* 551fd0: mov eax, ecx */
  eax = ecx;
/* 551fd2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_551ff0(void) {
  LOAD_REGS();
L_551ff0: /* 551ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 551ff1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 551ff5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 551ff8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 551ff9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 551ffc: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 551fff: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 552001: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 552004: jle 0x552022 */
  if ((zf || sf != of)) goto L_552022;
L_552006: /* 552006: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 552009: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 55200a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 55200d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 55200f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 552012: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 552016: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 552018: mov ecx, esi */
  ecx = esi;
/* 55201a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 55201d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x552022u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_552022: /* 552022: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 552024: mov eax, edi */
  eax = edi;
/* 552026: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 552029: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 55202a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 55202c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 55202d: ret  */
  esp += 4; SPILL(); return;
}

void f_552040(void) {
  LOAD_REGS();
L_552040: /* 552040: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 552044: fcomp qword ptr [esp + 0xc] */
  fpu_com(ST0, F64((uint32_t)(esp + 0xcu)));
  FPOP();
/* 552048: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 55204a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 55204d: jp 0x552054 */
  if (pf) goto L_552054;
L_55204f: /* 55204f: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 552053: ret  */
  esp += 4; SPILL(); return;
L_552054: /* 552054: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 552058: ret  */
  esp += 4; SPILL(); return;
}

void f_552070(void) {
  LOAD_REGS();
L_552070: /* 552070: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 552071: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 552075: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 552076: mov ebp, dword ptr [0x6ac504] */
  ebp = R32((uint32_t)(0x6ac504u));
/* 55207c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55207d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55207e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552080: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552082: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 552084: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 552085: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552087: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552089: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x55208bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 55208b: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 552091: mov edi, eax */
  edi = eax;
/* 552093: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 552095: push 0x5a36b0 */
  { uint32_t v = 0x5a36b0u; esp -= 4; W32(esp, v); }
/* 55209a: lea edx, [edi + edi] */
  edx = (uint32_t)(edi + edi);
/* 55209d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55209e: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x5520a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5520a0: mov esi, eax */
  esi = eax;
/* 5520a2: push 0x5ed66c */
  { uint32_t v = 0x5ed66cu; esp -= 4; W32(esp, v); }
/* 5520a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5520a8: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x5520adu); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 5520ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5520b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5520b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5520b2: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5520b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5520b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5520b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5520b9: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x5520bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5520bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5520bc: mov eax, esi */
  eax = esi;
/* 5520be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5520bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5520c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5520c1: ret  */
  esp += 4; SPILL(); return;
}

void f_5520f0(void) {
  LOAD_REGS();
L_5520f0: /* 5520f0: mov eax, dword ptr [0x5f7d14] */
  eax = R32((uint32_t)(0x5f7d14u));
/* 5520f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5520f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5520f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5520f9: mov ebp, dword ptr [0x6ac564] */
  ebp = R32((uint32_t)(0x6ac564u));
/* 5520ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 552100: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552101: jne 0x55217d */
  if (!zf) goto L_55217d;
L_552103: /* 552103: mov eax, dword ptr [0x5f7d10] */
  eax = R32((uint32_t)(0x5f7d10u));
/* 552108: xor edi, edi */
  edi = 0;
/* 55210a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 55210c: jle 0x55216c */
  if ((zf || sf != of)) goto L_55216c;
L_55210e: /* 55210e: xor esi, esi */
  esi = 0;
L_552110: /* 552110: mov ebx, dword ptr [0x5f7d18] */
  ebx = R32((uint32_t)(0x5f7d18u));
/* 552116: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 552118: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552119: call dword ptr [0x6ac560] */
  esp -= 4; W32(esp, 0x55211fu); SPILL(); call_ind(R32(0x6ac560u)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 55211f: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 552124: mov ecx, dword ptr [esi + eax + 0x18] */
  ecx = R32((uint32_t)(esi + eax + 0x18u));
/* 552128: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55212a: je 0x55215a */
  if (zf) goto L_55215a;
L_55212c: /* 55212c: mov ecx, dword ptr [esi + eax + 0x14] */
  ecx = R32((uint32_t)(esi + eax + 0x14u));
/* 552130: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552132: je 0x55215a */
  if (zf) goto L_55215a;
L_552134: /* 552134: mov ecx, dword ptr [esi + eax + 0x10] */
  ecx = R32((uint32_t)(esi + eax + 0x10u));
/* 552138: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552139: mov ecx, dword ptr [0x5b2158] */
  ecx = R32((uint32_t)(0x5b2158u));
/* 55213f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552140: call 0x4e1afa */
  esp -= 4; W32(esp, 0x552145u); SPILL(); f_4e1afa(); if (g_unwind) return; RELOAD();
/* 552145: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 55214a: dec dword ptr [esi + eax + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax + 0x14u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + eax + 0x14u), r);
  }
/* 55214e: mov eax, dword ptr [0x5f7d08] */
  eax = R32((uint32_t)(0x5f7d08u));
/* 552153: mov edx, dword ptr [esi + eax + 0x10] */
  edx = R32((uint32_t)(esi + eax + 0x10u));
/* 552157: add dword ptr [esi + eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + eax), r);
  }
L_55215a: /* 55215a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 55215c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55215d: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x55215fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 55215f: mov eax, dword ptr [0x5f7d10] */
  eax = R32((uint32_t)(0x5f7d10u));
/* 552164: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 552165: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 552168: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 55216a: jl 0x552110 */
  if ((sf != of)) goto L_552110;
L_55216c: /* 55216c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55216e: call dword ptr [0x6ac53c] */
  esp -= 4; W32(esp, 0x552174u); SPILL(); call_ind(R32(0x6ac53cu)); if (g_unwind) return; /* KERNEL32!Sleep */ RELOAD();
/* 552174: mov eax, dword ptr [0x5f7d14] */
  eax = R32((uint32_t)(0x5f7d14u));
/* 552179: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55217b: je 0x552103 */
  if (zf) goto L_552103;
L_55217d: /* 55217d: mov eax, dword ptr [0x5f7d10] */
  eax = R32((uint32_t)(0x5f7d10u));
/* 552182: xor edi, edi */
  edi = 0;
/* 552184: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 552186: jle 0x5521cb */
  if ((zf || sf != of)) goto L_5521cb;
L_552188: /* 552188: xor ebx, ebx */
  ebx = 0;
/* 55218a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_552190: /* 552190: mov esi, dword ptr [0x5f7d18] */
  esi = R32((uint32_t)(0x5f7d18u));
/* 552196: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 552198: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552199: call dword ptr [0x6ac560] */
  esp -= 4; W32(esp, 0x55219fu); SPILL(); call_ind(R32(0x6ac560u)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 55219f: mov edx, dword ptr [0x5f7d08] */
  edx = R32((uint32_t)(0x5f7d08u));
/* 5521a5: mov eax, dword ptr [ebx + edx + 4] */
  eax = R32((uint32_t)(ebx + edx + 0x4u));
/* 5521a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5521ab: je 0x5521b9 */
  if (zf) goto L_5521b9;
L_5521ad: /* 5521ad: mov ecx, dword ptr [0x5b2158] */
  ecx = R32((uint32_t)(0x5b2158u));
/* 5521b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5521b4: call 0x4e34db */
  esp -= 4; W32(esp, 0x5521b9u); SPILL(); f_4e34db(); if (g_unwind) return; RELOAD();
L_5521b9: /* 5521b9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5521bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5521bc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x5521beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5521be: mov eax, dword ptr [0x5f7d10] */
  eax = R32((uint32_t)(0x5f7d10u));
/* 5521c3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5521c4: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5521c7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5521c9: jl 0x552190 */
  if ((sf != of)) goto L_552190;
L_5521cb: /* 5521cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5521cd: mov dword ptr [0x5f7d14], 2 */
  W32((uint32_t)(0x5f7d14u), 0x2u);
/* 5521d7: call dword ptr [0x6ac58c] */
  esp -= 4; W32(esp, 0x5521ddu); SPILL(); call_ind(R32(0x6ac58cu)); if (g_unwind) return; /* KERNEL32!ExitThread */ RELOAD();
/* 5521dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5521de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5521df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5521e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5521e1: nop  */
/* 5521e2: nop  */
/* 5521e3: nop  */
/* 5521e4: nop  */
/* 5521e5: nop  */
/* 5521e6: nop  */
/* 5521e7: nop  */
/* 5521e8: nop  */
/* 5521e9: nop  */
/* 5521ea: nop  */
/* 5521eb: nop  */
/* 5521ec: nop  */
/* 5521ed: nop  */
/* 5521ee: nop  */
/* 5521ef: nop  */
L_5521f0: guest_badaddr(0x5521f0); return;
}

void f_552230(void) {
  LOAD_REGS();
L_552230: /* 552230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 552231: mov ebp, esp */
  ebp = esp;
/* 552233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 552235: push 0x559c30 */
  { uint32_t v = 0x559c30u; esp -= 4; W32(esp, v); }
/* 55223a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 552240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 552248: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 55224b: xor eax, eax */
  eax = 0;
/* 55224d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55224e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55224f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552250: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 552253: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 552256: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 552259: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 55225c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 55225f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 552262: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 552265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552266: call dword ptr [0x6ac80c] */
  esp -= 4; W32(esp, 0x55226cu); SPILL(); call_ind(R32(0x6ac80cu)); if (g_unwind) return; /* ole32!CoCreateGuid */ RELOAD();
/* 55226c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55226e: je 0x552287 */
  if (zf) goto L_552287;
L_552270: /* 552270: push 0x49d */
  { uint32_t v = 0x49du; esp -= 4; W32(esp, v); }
/* 552275: push 0x5af04c */
  { uint32_t v = 0x5af04cu; esp -= 4; W32(esp, v); }
/* 55227a: push 0x5af05c */
  { uint32_t v = 0x5af05cu; esp -= 4; W32(esp, v); }
/* 55227f: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x552284u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 552284: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_552287: /* 552287: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 55228a: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 55228d: mov ecx, eax */
  ecx = eax;
/* 55228f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 552291: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 552294: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 552297: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 55229a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 55229d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5522a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5522a1: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 5522a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5522a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5522a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5522af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5522b0: mov esp, ebp */
  esp = ebp;
/* 5522b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5522b3: ret  */
  esp += 4; SPILL(); return;
}

void f_5522b4(void) {
  LOAD_REGS();
L_5522b4: /* 5522b4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5522b7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5522bc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5522bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5522c0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 5522c3: call 0x554df6 */
  esp -= 4; W32(esp, 0x5522c8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5522c8(); return;
}

void f_5522c8(void) {
  LOAD_REGS();
L_5522c8: /* 5522c8: push 0x5703ec */
  { uint32_t v = 0x5703ecu; esp -= 4; W32(esp, v); }
/* 5522cd: push 0x5af084 */
  { uint32_t v = 0x5af084u; esp -= 4; W32(esp, v); }
/* 5522d2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5522d7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5522d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5522da: xor eax, eax */
  eax = 0;
/* 5522dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5522dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5522de: call 0x554df6 */
  esp -= 4; W32(esp, 0x5522e3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5522e3: guest_badaddr(0x5522e3); return;
}

void f_552320(void) {
  LOAD_REGS();
L_552320: /* 552320: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 552324: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 552326: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 552329: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55232b: je 0x552331 */
  if (zf) goto L_552331;
L_55232d: /* 55232d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 55232f: jmp 0x552336 */
  goto L_552336;
L_552331: /* 552331: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_552336: /* 552336: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 55233a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 55233c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 55233f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552341: je 0x552352 */
  if (zf) goto L_552352;
L_552343: /* 552343: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 552345: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 552349: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 55234d: jmp 0x4e26df */
  SPILL(); f_4e26df(); return;
L_552352: /* 552352: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
/* 552357: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 55235b: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 55235f: jmp 0x4e26df */
  SPILL(); f_4e26df(); return;
}

void f_552390(void) {
  LOAD_REGS();
L_552390: /* 552390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 552391: mov ebp, esp */
  ebp = esp;
/* 552393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 552395: push 0x559c40 */
  { uint32_t v = 0x559c40u; esp -= 4; W32(esp, v); }
/* 55239a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5523a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5523a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5523a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5523ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5523ac: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 5523af: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5523b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5523b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5523b3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5523b6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5523bd: mov esi, ebx */
  esi = ebx;
/* 5523bf: jne 0x5523c6 */
  if (!zf) goto L_5523c6;
L_5523c1: /* 5523c1: mov esi, 0x6a9e54 */
  esi = 0x6a9e54u;
L_5523c6: /* 5523c6: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 5523c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5523ca: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x5523cfu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 5523cf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5523d2: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5523d7: mov eax, 0x5aee6c */
  eax = 0x5aee6cu;
/* 5523dc: jg 0x5523e3 */
  if ((!zf && sf == of)) goto L_5523e3;
L_5523de: /* 5523de: mov eax, 0x5aeea0 */
  eax = 0x5aeea0u;
L_5523e3: /* 5523e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5523e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5523e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5523e6: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5523eb: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 5523f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5523f1: call 0x4e30df */
  esp -= 4; W32(esp, 0x5523f6u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5523f6: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 5523fb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5523fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552400: je 0x552426 */
  if (zf) goto L_552426;
L_552402: /* 552402: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552404: jne 0x55240b */
  if (!zf) goto L_55240b;
L_552406: /* 552406: mov ebx, 0x6a9e5c */
  ebx = 0x6a9e5cu;
L_55240b: /* 55240b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55240d: push 0x6a9e58 */
  { uint32_t v = 0x6a9e58u; esp -= 4; W32(esp, v); }
/* 552412: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 552413: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552414: push 0x5aeec0 */
  { uint32_t v = 0x5aeec0u; esp -= 4; W32(esp, v); }
/* 552419: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55241b: call dword ptr [0x6ac744] */
  esp -= 4; W32(esp, 0x552421u); SPILL(); call_ind(R32(0x6ac744u)); if (g_unwind) return; /* SHELL32!ShellExecuteW */ RELOAD();
/* 552421: jmp 0x552518 */
  goto L_552518;
L_552426: /* 552426: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552428: mov esi, dword ptr [0x6ac500] */
  esi = R32((uint32_t)(0x6ac500u));
/* 55242e: je 0x552498 */
  if (zf) goto L_552498;
L_552430: /* 552430: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552432: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552434: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552436: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552438: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 55243a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55243b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55243d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55243f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x552441u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 552441: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552443: jne 0x552449 */
  if (!zf) goto L_552449;
L_552445: /* 552445: xor edi, edi */
  edi = 0;
/* 552447: jmp 0x552470 */
  goto L_552470;
L_552449: /* 552449: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55244b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55244d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55244f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552451: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 552453: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 552454: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552456: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552458: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x55245au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 55245a: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 55245d: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 552460: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 552463: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 552466: call 0x554f80 */
  esp -= 4; W32(esp, 0x55246bu); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 55246b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 55246e: mov edi, esp */
  edi = esp;
L_552470: /* 552470: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552472: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552474: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552476: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552478: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 55247a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55247b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55247d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55247f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x552481u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 552481: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552483: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552485: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552486: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552487: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 552489: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55248a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55248c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55248e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x552490u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 552490: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 552493: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 552496: jmp 0x55249f */
  goto L_55249f;
L_552498: /* 552498: mov dword ptr [ebp + 0xc], 0x6a9e5f */
  W32((uint32_t)(ebp + 0xcu), 0x6a9e5fu);
L_55249f: /* 55249f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524a7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5524a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5524aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524ae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x5524b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5524b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5524b2: jne 0x5524b8 */
  if (!zf) goto L_5524b8;
L_5524b4: /* 5524b4: xor ebx, ebx */
  ebx = 0;
/* 5524b6: jmp 0x5524df */
  goto L_5524df;
L_5524b8: /* 5524b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5524c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5524c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524c7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x5524c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5524c9: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5524cc: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5524cf: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5524d2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5524d5: call 0x554f80 */
  esp -= 4; W32(esp, 0x5524dau); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 5524da: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5524dd: mov ebx, esp */
  ebx = esp;
L_5524df: /* 5524df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524e7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5524e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5524ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524ee: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x5524f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5524f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5524f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5524f6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5524f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5524f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5524fd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x5524ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5524ff: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 552502: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 552504: push 0x6a9e5e */
  { uint32_t v = 0x6a9e5eu; esp -= 4; W32(esp, v); }
/* 552509: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55250a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55250b: push 0x5aeecc */
  { uint32_t v = 0x5aeeccu; esp -= 4; W32(esp, v); }
/* 552510: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552512: call dword ptr [0x6ac748] */
  esp -= 4; W32(esp, 0x552518u); SPILL(); call_ind(R32(0x6ac748u)); if (g_unwind) return; /* SHELL32!ShellExecuteA */ RELOAD();
L_552518: /* 552518: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 55251b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55251d: je 0x552547 */
  if (zf) goto L_552547;
L_55251f: /* 55251f: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 552522: jg 0x55253a */
  if ((!zf && sf == of)) goto L_55253a;
L_552524: /* 552524: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552526: push 0x5aeed4 */
  { uint32_t v = 0x5aeed4u; esp -= 4; W32(esp, v); }
/* 55252b: push 0x5aeee0 */
  { uint32_t v = 0x5aeee0u; esp -= 4; W32(esp, v); }
/* 552530: call 0x4e1613 */
  esp -= 4; W32(esp, 0x552535u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 552535: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552538: jmp 0x55253f */
  goto L_55253f;
L_55253a: /* 55253a: mov eax, 0x6a9e60 */
  eax = 0x6a9e60u;
L_55253f: /* 55253f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552540: mov ecx, esi */
  ecx = esi;
/* 552542: call 0x4e3e5e */
  esp -= 4; W32(esp, 0x552547u); SPILL(); f_4e3e5e(); if (g_unwind) return; RELOAD();
L_552547: /* 552547: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* 55254a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 55254d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 552554: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 552555: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 552556: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 552557: mov esp, ebp */
  esp = ebp;
/* 552559: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 55255a: ret  */
  esp += 4; SPILL(); return;
}
