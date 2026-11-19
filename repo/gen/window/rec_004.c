#include "recomp.h"
#include "rec_mod.h"

void f_d9a7b7(void) {
  LOAD_REGS();
L_d9a7b7: /* d9a7b7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9a7ba: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9a7bf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9a7c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9a7c3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9a7c6: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a7cbu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9a7cb(); return;
}

void f_d9a7cb(void) {
  LOAD_REGS();
L_d9a7cb: /* d9a7cb: push 0xdc2c74 */
  { uint32_t v = 0xdc2c74u; esp -= 4; W32(esp, v); }
/* d9a7d0: push 0xde255c */
  { uint32_t v = 0xde255cu; esp -= 4; W32(esp, v); }
/* d9a7d5: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9a7dbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9a7db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9a7de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a7e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a7e2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a7e7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9a7e7: guest_badaddr(0xd9a7e7); return;
}

void f_d9a810(void) {
  LOAD_REGS();
L_d9a810: /* d9a810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d9a814: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9a816: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a817: mov esi, ecx */
  esi = ecx;
/* d9a819: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* d9a81b: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* d9a822: jne 0xd9a83c */
  if (!zf) goto L_d9a83c;
L_d9a824: /* d9a824: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* d9a829: push 0xde35e8 */
  { uint32_t v = 0xde35e8u; esp -= 4; W32(esp, v); }
/* d9a82e: push 0xde35e0 */
  { uint32_t v = 0xde35e0u; esp -= 4; W32(esp, v); }
/* d9a833: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9a839u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9a839: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9a83c: /* d9a83c: mov ecx, esi */
  ecx = esi;
/* d9a83e: call 0xd821da */
  esp -= 4; W32(esp, 0xd9a843u); SPILL(); f_d821da(); if (g_unwind) return; RELOAD();
/* d9a843: mov eax, esi */
  eax = esi;
/* d9a845: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a846: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9a860(void) {
  LOAD_REGS();
L_d9a860: /* d9a860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9a861: mov ebp, esp */
  ebp = esp;
/* d9a863: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9a865: push 0xdb9cb0 */
  { uint32_t v = 0xdb9cb0u; esp -= 4; W32(esp, v); }
/* d9a86a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9a870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a871: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9a878: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9a87b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a87c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a87d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a87e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9a881: mov esi, ecx */
  esi = ecx;
/* d9a883: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9a88a: xor edi, edi */
  edi = 0;
/* d9a88c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d9a890: /* d9a890: cmp edi, dword ptr [esi + 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a893: jge 0xd9a8a9 */
  if ((sf == of)) goto L_d9a8a9;
L_d9a895: /* d9a895: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* d9a898: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* d9a89b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9a89d: je 0xd9a8a6 */
  if (zf) goto L_d9a8a6;
L_d9a89f: /* d9a89f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9a8a1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9a8a3: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xd9a8a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9a8a6: /* d9a8a6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9a8a7: jmp 0xd9a890 */
  goto L_d9a890;
L_d9a8a9: /* d9a8a9: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* d9a8ac: xor eax, eax */
  eax = 0;
/* d9a8ae: mov edi, edi */
  edi = edi;
L_d9a8b0: /* d9a8b0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a8b3: jge 0xd9a8b8 */
  if ((sf == of)) goto L_d9a8b8;
L_d9a8b5: /* d9a8b5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9a8b6: jmp 0xd9a8b0 */
  goto L_d9a8b0;
L_d9a8b8: /* d9a8b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a8ba: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9a8bc: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd9a8c2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d9a8c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9a8c4: mov ecx, esi */
  ecx = esi;
/* d9a8c6: mov dword ptr [esi + 0x20], 0 */
  W32((uint32_t)(esi + 0x20u), 0x0u);
/* d9a8cd: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd9a8d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a8d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9a8d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9a8d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a8d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9a8dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9a8dd: mov esp, ebp */
  esp = ebp;
/* d9a8df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9a8e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9a8e3(void) {
  LOAD_REGS();
L_d9a8e3: /* d9a8e3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9a8e6: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9a8eb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d9a8ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9a8ef: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9a8f2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a8f7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9a8f7(); return;
}

void f_d9a8f7(void) {
  LOAD_REGS();
L_d9a8f7: /* d9a8f7: push 0xdc2cb0 */
  { uint32_t v = 0xdc2cb0u; esp -= 4; W32(esp, v); }
/* d9a8fc: push 0xde28c0 */
  { uint32_t v = 0xde28c0u; esp -= 4; W32(esp, v); }
/* d9a901: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9a907u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9a907: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9a90a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a90c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a90e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a913u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9a913: guest_badaddr(0xd9a913); return;
}

void f_d9a950(void) {
  LOAD_REGS();
L_d9a950: /* d9a950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9a951: mov ebp, esp */
  ebp = esp;
/* d9a953: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9a955: push 0xdb9cc0 */
  { uint32_t v = 0xdb9cc0u; esp -= 4; W32(esp, v); }
/* d9a95a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9a960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a961: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9a968: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9a96b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a96c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a96d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a96e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9a971: mov esi, ecx */
  esi = ecx;
/* d9a973: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9a97a: call 0xd8233d */
  esp -= 4; W32(esp, 0xd9a97fu); SPILL(); f_d8233d(); if (g_unwind) return; RELOAD();
/* d9a97f: mov ecx, esi */
  ecx = esi;
/* d9a981: call 0xd820f9 */
  esp -= 4; W32(esp, 0xd9a986u); SPILL(); f_d820f9(); if (g_unwind) return; RELOAD();
/* d9a986: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9a989: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9a98a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a98b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9a992: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9a993: mov esp, ebp */
  esp = ebp;
/* d9a995: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9a996: ret  */
  esp += 4; SPILL(); return;
}

void f_d9a997(void) {
  LOAD_REGS();
L_d9a997: /* d9a997: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9a99a: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9a99f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9a9a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9a9a3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9a9a6: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a9abu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9a9ab(); return;
}

void f_d9a9ab(void) {
  LOAD_REGS();
L_d9a9ab: /* d9a9ab: push 0xdc2cf8 */
  { uint32_t v = 0xdc2cf8u; esp -= 4; W32(esp, v); }
/* d9a9b0: push 0xde2904 */
  { uint32_t v = 0xde2904u; esp -= 4; W32(esp, v); }
/* d9a9b5: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9a9bbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9a9bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9a9be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a9c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a9c2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a9c7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9a9c7: guest_badaddr(0xd9a9c7); return;
}

void f_d9a9f0(void) {
  LOAD_REGS();
L_d9a9f0: /* d9a9f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9a9f1: mov ebp, esp */
  ebp = esp;
/* d9a9f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9a9f5: push 0xdb9cd9 */
  { uint32_t v = 0xdb9cd9u; esp -= 4; W32(esp, v); }
/* d9a9fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9aa00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9aa01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9aa08: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9aa0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9aa0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9aa0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9aa0e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d9aa11: xor ebx, ebx */
  ebx = 0;
/* d9aa13: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9aa15: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9aa18: mov esi, ecx */
  esi = ecx;
/* d9aa1a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d9aa1d: jne 0xd9aa54 */
  if (!zf) goto L_d9aa54;
L_d9aa1f: /* d9aa1f: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d9aa22: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9aa24: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0xd9aa2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9aa2a: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d9aa2d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9aa2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9aa30: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d9aa33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9aa34: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd9aa3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9aa3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9aa3b: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* d9aa3e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9aa42: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd9aa48u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d9aa48: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d9aa4b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d9aa4e: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9aa54u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d9aa54: /* d9aa54: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d9aa57: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9aa59: je 0xd9aa62 */
  if (zf) goto L_d9aa62;
L_d9aa5b: /* d9aa5b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9aa5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9aa5f: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xd9aa62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9aa62: /* d9aa62: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d9aa65: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9aa67: mov dword ptr [esi + 0x40], ebx */
  W32((uint32_t)(esi + 0x40u), ebx);
/* d9aa6a: je 0xd9aa73 */
  if (zf) goto L_d9aa73;
L_d9aa6c: /* d9aa6c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9aa6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9aa70: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xd9aa73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9aa73: /* d9aa73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9aa74: mov ecx, esi */
  ecx = esi;
/* d9aa76: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
/* d9aa79: call 0xd82829 */
  esp -= 4; W32(esp, 0xd9aa7eu); SPILL(); f_d82829(); if (g_unwind) return; RELOAD();
/* d9aa7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9aa81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9aa82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9aa83: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9aa8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9aa8b: mov esp, ebp */
  esp = ebp;
/* d9aa8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9aa8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9aa91(void) {
  LOAD_REGS();
L_d9aa91: /* d9aa91: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9aa94: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9aa99: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d9aa9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9aa9d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9aaa0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9aaa5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9aaa5(); return;
}

void f_d9aaa5(void) {
  LOAD_REGS();
L_d9aaa5: /* d9aaa5: push 0xdc2d34 */
  { uint32_t v = 0xdc2d34u; esp -= 4; W32(esp, v); }
/* d9aaaa: push 0xde2928 */
  { uint32_t v = 0xde2928u; esp -= 4; W32(esp, v); }
/* d9aaaf: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9aab5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9aab5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9aab8: xor ebx, ebx */
  ebx = 0;
/* d9aaba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9aabb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9aabc: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9aac1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9aac1: guest_badaddr(0xd9aac1); return;
}

void f_d9ab10(void) {
  LOAD_REGS();
L_d9ab10: /* d9ab10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9ab11: mov ebp, esp */
  ebp = esp;
/* d9ab13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9ab15: push 0xdb9cf0 */
  { uint32_t v = 0xdb9cf0u; esp -= 4; W32(esp, v); }
/* d9ab1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9ab20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ab21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9ab28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9ab2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9ab2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9ab2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9ab2e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9ab31: mov esi, ecx */
  esi = ecx;
/* d9ab33: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9ab3a: call 0xd81c58 */
  esp -= 4; W32(esp, 0xd9ab3fu); SPILL(); f_d81c58(); if (g_unwind) return; RELOAD();
/* d9ab3f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9ab41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9ab43: mov ecx, 0xde572c */
  ecx = 0xde572cu;
/* d9ab48: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9ab4eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9ab4e: mov ecx, dword ptr [0xde572c] */
  ecx = R32((uint32_t)(0xde572cu));
/* d9ab54: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* d9ab57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9ab5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9ab5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9ab5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9ab63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9ab64: mov esp, ebp */
  esp = ebp;
/* d9ab66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9ab67: ret  */
  esp += 4; SPILL(); return;
}

void f_d9ab68(void) {
  LOAD_REGS();
L_d9ab68: /* d9ab68: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9ab6b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9ab70: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d9ab73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ab74: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d9ab77: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9ab7cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9ab7c(); return;
}

void f_d9ab7c(void) {
  LOAD_REGS();
L_d9ab7c: /* d9ab7c: push 0xdc2d78 */
  { uint32_t v = 0xdc2d78u; esp -= 4; W32(esp, v); }
/* d9ab81: push 0xde29c8 */
  { uint32_t v = 0xde29c8u; esp -= 4; W32(esp, v); }
/* d9ab86: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9ab8cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9ab8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9ab8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9ab91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9ab93: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9ab98u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9ab98: guest_badaddr(0xd9ab98); return;
}

void f_d9abd0(void) {
  LOAD_REGS();
L_d9abd0: /* d9abd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9abd1: mov ebp, esp */
  ebp = esp;
/* d9abd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9abd5: push 0xdb9d00 */
  { uint32_t v = 0xdb9d00u; esp -= 4; W32(esp, v); }
/* d9abda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9abe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9abe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9abe8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9abeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9abec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9abed: mov esi, ecx */
  esi = ecx;
/* d9abef: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* d9abf5: xor ebx, ebx */
  ebx = 0;
/* d9abf7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9abf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9abfa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9abfd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d9ac00: je 0xd9adef */
  if (zf) goto L_d9adef;
L_d9ac06: /* d9ac06: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9ac08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9ac09: call dword ptr [eax + 0xf4] */
  { uint32_t t = R32((uint32_t)(eax + 0xf4u)); esp -= 4; W32(esp, 0xd9ac0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ac0f: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* d9ac12: mov ecx, edi */
  ecx = edi;
/* d9ac14: call 0xd82400 */
  esp -= 4; W32(esp, 0xd9ac19u); SPILL(); f_d82400(); if (g_unwind) return; RELOAD();
/* d9ac19: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9ac1b: je 0xd9acdf */
  if (zf) goto L_d9acdf;
L_d9ac21: /* d9ac21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9ac22: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* d9ac28: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* d9ac2a: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd9ac30u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d9ac30: mov ecx, edi */
  ecx = edi;
/* d9ac32: call 0xd81622 */
  esp -= 4; W32(esp, 0xd9ac37u); SPILL(); f_d81622(); if (g_unwind) return; RELOAD();
/* d9ac37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ac38: mov ecx, esi */
  ecx = esi;
/* d9ac3a: call 0xd81474 */
  esp -= 4; W32(esp, 0xd9ac3fu); SPILL(); f_d81474(); if (g_unwind) return; RELOAD();
/* d9ac3f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9ac41: mov ecx, eax */
  ecx = eax;
/* d9ac43: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xd9ac46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ac46: mov ecx, edi */
  ecx = edi;
/* d9ac48: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* d9ac4e: mov dword ptr [esi + 0xe4], edx */
  W32((uint32_t)(esi + 0xe4u), edx);
/* d9ac54: call 0xd828dd */
  esp -= 4; W32(esp, 0xd9ac59u); SPILL(); f_d828dd(); if (g_unwind) return; RELOAD();
/* d9ac59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ac5a: mov ecx, edi */
  ecx = edi;
/* d9ac5c: call 0xd8279d */
  esp -= 4; W32(esp, 0xd9ac61u); SPILL(); f_d8279d(); if (g_unwind) return; RELOAD();
/* d9ac61: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9ac63: je 0xd9ac7f */
  if (zf) goto L_d9ac7f;
L_d9ac65: /* d9ac65: mov ecx, edi */
  ecx = edi;
/* d9ac67: call 0xd828dd */
  esp -= 4; W32(esp, 0xd9ac6cu); SPILL(); f_d828dd(); if (g_unwind) return; RELOAD();
/* d9ac6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ac6d: mov ecx, esi */
  ecx = esi;
/* d9ac6f: call 0xd81474 */
  esp -= 4; W32(esp, 0xd9ac74u); SPILL(); f_d81474(); if (g_unwind) return; RELOAD();
/* d9ac74: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9ac76: mov ecx, eax */
  ecx = eax;
/* d9ac78: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xd9ac7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ac7b: mov ecx, edx */
  ecx = edx;
/* d9ac7d: jmp 0xd9ac83 */
  goto L_d9ac83;
L_d9ac7f: /* d9ac7f: xor eax, eax */
  eax = 0;
/* d9ac81: xor ecx, ecx */
  ecx = 0;
L_d9ac83: /* d9ac83: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* d9ac89: mov dword ptr [esi + 0xec], ecx */
  W32((uint32_t)(esi + 0xecu), ecx);
L_d9ac8f: /* d9ac8f: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* d9ac92: mov ecx, edi */
  ecx = edi;
/* d9ac94: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* d9ac97: call 0xd82400 */
  esp -= 4; W32(esp, 0xd9ac9cu); SPILL(); f_d82400(); if (g_unwind) return; RELOAD();
/* d9ac9c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9ac9e: jge 0xd9acdf */
  if ((sf == of)) goto L_d9acdf;
L_d9aca0: /* d9aca0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9aca1: mov ecx, esi */
  ecx = esi;
/* d9aca3: call 0xd81474 */
  esp -= 4; W32(esp, 0xd9aca8u); SPILL(); f_d81474(); if (g_unwind) return; RELOAD();
/* d9aca8: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* d9acab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9acad: je 0xd9acdc */
  if (zf) goto L_d9acdc;
L_d9acaf: /* d9acaf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9acb1: mov ecx, eax */
  ecx = eax;
/* d9acb3: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xd9acb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9acb6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* d9acb8: lea edi, [esi + 0xd4] */
  edi = (uint32_t)(esi + 0xd4u);
/* d9acbe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9acc0: mov ecx, edi */
  ecx = edi;
/* d9acc2: mov ebx, eax */
  ebx = eax;
/* d9acc4: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* d9acc7: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9accdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9accd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d9accf: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9acd2: mov dword ptr [ecx + eax*8], ebx */
  W32((uint32_t)(ecx + eax*8), ebx);
/* d9acd5: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9acd8: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
L_d9acdc: /* d9acdc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9acdd: jmp 0xd9ac8f */
  goto L_d9ac8f;
L_d9acdf: /* d9acdf: mov ecx, edi */
  ecx = edi;
/* d9ace1: call 0xd81d75 */
  esp -= 4; W32(esp, 0xd9ace6u); SPILL(); f_d81d75(); if (g_unwind) return; RELOAD();
/* d9ace6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9ace8: mov ecx, esi */
  ecx = esi;
/* d9acea: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd9acf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9acf0: mov ecx, eax */
  ecx = eax;
/* d9acf2: call 0xd820f9 */
  esp -= 4; W32(esp, 0xd9acf7u); SPILL(); f_d820f9(); if (g_unwind) return; RELOAD();
/* d9acf7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9acf9: mov ecx, esi */
  ecx = esi;
/* d9acfb: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xd9ad01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ad01: xor edi, edi */
  edi = 0;
/* d9ad03: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
/* d9ad06: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9ad08: mov ecx, esi */
  ecx = esi;
/* d9ad0a: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd9ad10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ad10: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9ad12: mov ecx, eax */
  ecx = eax;
/* d9ad14: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd9ad17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ad17: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d9ad1a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d9ad1d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9ad20: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_d9ad23: /* d9ad23: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d9ad26: call 0xd82400 */
  esp -= 4; W32(esp, 0xd9ad2bu); SPILL(); f_d82400(); if (g_unwind) return; RELOAD();
/* d9ad2b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9ad2d: mov ecx, esi */
  ecx = esi;
/* d9ad2f: jge 0xd9adc5 */
  if ((sf == of)) goto L_d9adc5;
L_d9ad35: /* d9ad35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9ad36: call 0xd81474 */
  esp -= 4; W32(esp, 0xd9ad3bu); SPILL(); f_d81474(); if (g_unwind) return; RELOAD();
/* d9ad3b: mov edi, eax */
  edi = eax;
/* d9ad3d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d9ad3f: mov ecx, edi */
  ecx = edi;
/* d9ad41: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xd9ad44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ad44: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9ad47: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* d9ad4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ad4c: mov ebx, edx */
  ebx = edx;
/* d9ad4e: je 0xd9ad85 */
  if (zf) goto L_d9ad85;
L_d9ad50: /* d9ad50: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* d9ad53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ad55: jne 0xd9ad85 */
  if (!zf) goto L_d9ad85;
L_d9ad57: /* d9ad57: xor eax, eax */
  eax = 0;
/* d9ad59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d9ad60: /* d9ad60: cmp eax, dword ptr [esi + 0xd8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9ad66: jge 0xd9ad85 */
  if ((sf == of)) goto L_d9ad85;
L_d9ad68: /* d9ad68: mov ecx, dword ptr [esi + 0xd4] */
  ecx = R32((uint32_t)(esi + 0xd4u));
/* d9ad6e: mov edx, dword ptr [ecx + eax*8] */
  edx = R32((uint32_t)(ecx + eax*8));
/* d9ad71: cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9ad74: jne 0xd9adc2 */
  if (!zf) goto L_d9adc2;
L_d9ad76: /* d9ad76: mov ecx, dword ptr [ecx + eax*8 + 4] */
  ecx = R32((uint32_t)(ecx + eax*8 + 0x4u));
/* d9ad7a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9ad7c: jne 0xd9adc2 */
  if (!zf) goto L_d9adc2;
L_d9ad7e: /* d9ad7e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d9ad80: mov ecx, edi */
  ecx = edi;
/* d9ad82: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd9ad85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9ad85: /* d9ad85: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9ad88: cmp eax, dword ptr [esi + 0xe0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9ad8e: jne 0xd9ad9e */
  if (!zf) goto L_d9ad9e;
L_d9ad90: /* d9ad90: cmp ebx, dword ptr [esi + 0xe4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9ad96: jne 0xd9ad9e */
  if (!zf) goto L_d9ad9e;
L_d9ad98: /* d9ad98: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9ad9b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_d9ad9e: /* d9ad9e: cmp eax, dword ptr [esi + 0xe8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9ada4: jne 0xd9adb4 */
  if (!zf) goto L_d9adb4;
L_d9ada6: /* d9ada6: cmp ebx, dword ptr [esi + 0xec] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9adac: jne 0xd9adb4 */
  if (!zf) goto L_d9adb4;
L_d9adae: /* d9adae: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9adb1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
L_d9adb4: /* d9adb4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d9adb7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9adb8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9adbb: mov edi, eax */
  edi = eax;
/* d9adbd: jmp 0xd9ad23 */
  goto L_d9ad23;
L_d9adc2: /* d9adc2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9adc3: jmp 0xd9ad60 */
  goto L_d9ad60;
L_d9adc5: /* d9adc5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9adc7: call dword ptr [eax + 0xf0] */
  { uint32_t t = R32((uint32_t)(eax + 0xf0u)); esp -= 4; W32(esp, 0xd9adcdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9adcd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9add0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9add2: jl 0xd9addd */
  if ((sf != of)) goto L_d9addd;
L_d9add4: /* d9add4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9add5: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d9add8: call 0xd825a9 */
  esp -= 4; W32(esp, 0xd9adddu); SPILL(); f_d825a9(); if (g_unwind) return; RELOAD();
L_d9addd: /* d9addd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9ade0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9ade2: jl 0xd9adef */
  if ((sf != of)) goto L_d9adef;
L_d9ade4: /* d9ade4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9ade6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ade7: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d9adea: call 0xd81c30 */
  esp -= 4; W32(esp, 0xd9adefu); SPILL(); f_d81c30(); if (g_unwind) return; RELOAD();
L_d9adef: /* d9adef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9adf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9adf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9adf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9adfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9adfc: mov esp, ebp */
  esp = ebp;
/* d9adfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9adff: ret  */
  esp += 4; SPILL(); return;
}

void f_d9ae00(void) {
  LOAD_REGS();
L_d9ae00: /* d9ae00: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d9ae03: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9ae08: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* d9ae0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9ae0c: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* d9ae0f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9ae14u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9ae14(); return;
}

void f_d9ae14(void) {
  LOAD_REGS();
L_d9ae14: /* d9ae14: push 0xdc2db0 */
  { uint32_t v = 0xdc2db0u; esp -= 4; W32(esp, v); }
/* d9ae19: push 0xde2a94 */
  { uint32_t v = 0xde2a94u; esp -= 4; W32(esp, v); }
/* d9ae1e: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9ae24u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9ae24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9ae27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9ae29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9ae2b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9ae30u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9ae30: guest_badaddr(0xd9ae30); return;
}

void f_d9aee0(void) {
  LOAD_REGS();
L_d9aee0: /* d9aee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9aee1: mov ebp, esp */
  ebp = esp;
/* d9aee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9aee5: push 0xdb9d10 */
  { uint32_t v = 0xdb9d10u; esp -= 4; W32(esp, v); }
/* d9aeea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9aef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9aef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9aef8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9aefb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9aefc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9aefd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9aefe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9af01: mov esi, ecx */
  esi = ecx;
/* d9af03: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9af0a: call 0xd8233d */
  esp -= 4; W32(esp, 0xd9af0fu); SPILL(); f_d8233d(); if (g_unwind) return; RELOAD();
/* d9af0f: mov ecx, esi */
  ecx = esi;
/* d9af11: call 0xd820f9 */
  esp -= 4; W32(esp, 0xd9af16u); SPILL(); f_d820f9(); if (g_unwind) return; RELOAD();
/* d9af16: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9af19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9af1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9af1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9af22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9af23: mov esp, ebp */
  esp = ebp;
/* d9af25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9af26: ret  */
  esp += 4; SPILL(); return;
}

void f_d9af27(void) {
  LOAD_REGS();
L_d9af27: /* d9af27: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9af2a: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9af2f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9af32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9af33: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9af36: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9af3bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9af3b(); return;
}

void f_d9af3b(void) {
  LOAD_REGS();
L_d9af3b: /* d9af3b: push 0xdc2df0 */
  { uint32_t v = 0xdc2df0u; esp -= 4; W32(esp, v); }
/* d9af40: push 0xde2ab4 */
  { uint32_t v = 0xde2ab4u; esp -= 4; W32(esp, v); }
/* d9af45: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9af4bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9af4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9af4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9af50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9af52: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9af57u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9af57: guest_badaddr(0xd9af57); return;
}

void f_d9af80(void) {
  LOAD_REGS();
L_d9af80: /* d9af80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9af81: mov ebp, esp */
  ebp = esp;
/* d9af83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9af85: push 0xdb9d20 */
  { uint32_t v = 0xdb9d20u; esp -= 4; W32(esp, v); }
/* d9af8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9af90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9af91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9af98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9af9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9af9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9af9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9af9e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d9afa1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9afa4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9afa5: mov esi, ecx */
  esi = ecx;
/* d9afa7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9afae: call 0xd82833 */
  esp -= 4; W32(esp, 0xd9afb3u); SPILL(); f_d82833(); if (g_unwind) return; RELOAD();
/* d9afb3: add esi, 0x58 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d9afb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9afb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9afb8: call 0xd810e6 */
  esp -= 4; W32(esp, 0xd9afbdu); SPILL(); f_d810e6(); if (g_unwind) return; RELOAD();
/* d9afbd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9afc0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9afc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9afc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9afc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9afcc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9afcd: mov esp, ebp */
  esp = ebp;
/* d9afcf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9afd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9afd3(void) {
  LOAD_REGS();
L_d9afd3: /* d9afd3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9afd6: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9afdb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9afde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9afdf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9afe2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9afe7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9afe7(); return;
}

void f_d9afe7(void) {
  LOAD_REGS();
L_d9afe7: /* d9afe7: push 0xdc2e34 */
  { uint32_t v = 0xdc2e34u; esp -= 4; W32(esp, v); }
/* d9afec: push 0xde2acc */
  { uint32_t v = 0xde2accu; esp -= 4; W32(esp, v); }
/* d9aff1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9aff7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9aff7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9affa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9affc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9affe: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b003u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9b003: guest_badaddr(0xd9b003); return;
}

void f_d9b040(void) {
  LOAD_REGS();
L_d9b040: /* d9b040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9b041: mov ebp, esp */
  ebp = esp;
/* d9b043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9b045: push 0xdb9d4b */
  { uint32_t v = 0xdb9d4bu; esp -= 4; W32(esp, v); }
/* d9b04a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9b050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9b058: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9b05b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b05c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b05d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b05e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9b061: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9b064: xor edi, edi */
  edi = 0;
/* d9b066: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* d9b069: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9b06d: xor ebx, ebx */
  ebx = 0;
/* d9b06f: nop  */
L_d9b070: /* d9b070: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d9b073: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd9b079u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d9b079: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9b07b: jge 0xd9b0ea */
  if ((sf == of)) goto L_d9b0ea;
L_d9b07d: /* d9b07d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9b07f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b080: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* d9b083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b084: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d9b087: call dword ptr [0xde8958] */
  esp -= 4; W32(esp, 0xd9b08du); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* d9b08d: push 0xde2af4 */
  { uint32_t v = 0xde2af4u; esp -= 4; W32(esp, v); }
/* d9b092: mov ecx, eax */
  ecx = eax;
/* d9b094: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d9b098: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd9b09eu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d9b09e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d9b0a1: mov esi, eax */
  esi = eax;
/* d9b0a3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9b0a7: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9b0adu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9b0ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b0af: je 0xd9b0b2 */
  if (zf) goto L_d9b0b2;
L_d9b0b1: /* d9b0b1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_d9b0b2: /* d9b0b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9b0b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b0b5: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9b0b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b0b9: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d9b0bc: call dword ptr [0xde8958] */
  esp -= 4; W32(esp, 0xd9b0c2u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* d9b0c2: push 0xde2af8 */
  { uint32_t v = 0xde2af8u; esp -= 4; W32(esp, v); }
/* d9b0c7: mov ecx, eax */
  ecx = eax;
/* d9b0c9: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* d9b0cd: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd9b0d3u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d9b0d3: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9b0d6: mov esi, eax */
  esi = eax;
/* d9b0d8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9b0dc: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9b0e2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9b0e2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b0e4: je 0xd9b0e7 */
  if (zf) goto L_d9b0e7;
L_d9b0e6: /* d9b0e6: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_d9b0e7: /* d9b0e7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9b0e8: jmp 0xd9b070 */
  goto L_d9b070;
L_d9b0ea: /* d9b0ea: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b0ec: je 0xd9b10d */
  if (zf) goto L_d9b10d;
L_d9b0ee: /* d9b0ee: mov edx, dword ptr [0xde8a10] */
  edx = R32((uint32_t)(0xde8a10u));
/* d9b0f4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d9b0f6: push 0xde2b00 */
  { uint32_t v = 0xde2b00u; esp -= 4; W32(esp, v); }
/* d9b0fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b0fc: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xd9b102u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* d9b102: fld dword ptr [0xdc1460] */
  { double v = F32((uint32_t)(0xdc1460u)); FPUSH(v); }
/* d9b108: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b10b: jmp 0xd9b144 */
  goto L_d9b144;
L_d9b10d: /* d9b10d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b10f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9b112: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b113: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9b116: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* d9b119: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9b11a: call 0xd81b63 */
  esp -= 4; W32(esp, 0xd9b11fu); SPILL(); f_d81b63(); if (g_unwind) return; RELOAD();
/* d9b11f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b121: jne 0xd9b141 */
  if (!zf) goto L_d9b141;
L_d9b123: /* d9b123: mov eax, dword ptr [0xde8a10] */
  eax = R32((uint32_t)(0xde8a10u));
/* d9b128: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9b12a: push 0xde2b50 */
  { uint32_t v = 0xde2b50u; esp -= 4; W32(esp, v); }
/* d9b12f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b130: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xd9b136u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* d9b136: fld dword ptr [0xdc1460] */
  { double v = F32((uint32_t)(0xdc1460u)); FPUSH(v); }
/* d9b13c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b13f: jmp 0xd9b144 */
  goto L_d9b144;
L_d9b141: /* d9b141: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_d9b144: /* d9b144: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* d9b147: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d9b14a: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* d9b14c: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* d9b153: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9b159u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9b159: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9b15c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b15d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b15e: mov eax, 1 */
  eax = 0x1u;
/* d9b163: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b16a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b16b: mov esp, ebp */
  esp = ebp;
/* d9b16d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9b16e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d9b171(void) {
  LOAD_REGS();
L_d9b171: /* d9b171: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9b174: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9b179: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d9b17c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b17d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9b180: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b185u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9b185(); return;
}

void f_d9b185(void) {
  LOAD_REGS();
L_d9b185: /* d9b185: push 0xdc2e70 */
  { uint32_t v = 0xdc2e70u; esp -= 4; W32(esp, v); }
/* d9b18a: push 0xde2ba0 */
  { uint32_t v = 0xde2ba0u; esp -= 4; W32(esp, v); }
/* d9b18f: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9b195u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9b195: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b198: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b19a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b19c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b1a1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9b1a1: guest_badaddr(0xd9b1a1); return;
}

void f_d9b210(void) {
  LOAD_REGS();
L_d9b210: /* d9b210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9b211: mov ebp, esp */
  ebp = esp;
/* d9b213: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9b215: push 0xdb9d69 */
  { uint32_t v = 0xdb9d69u; esp -= 4; W32(esp, v); }
/* d9b21a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9b220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b221: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9b228: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9b22b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b22c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b22d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b22e: mov esi, ecx */
  esi = ecx;
/* d9b230: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9b233: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9b235: xor ebx, ebx */
  ebx = 0;
/* d9b237: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9b23a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b23b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d9b23e: call dword ptr [eax + 0xf4] */
  { uint32_t t = R32((uint32_t)(eax + 0xf4u)); esp -= 4; W32(esp, 0xd9b244u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b244: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b245: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* d9b248: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9b24a: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd9b250u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d9b250: mov dword ptr [esi + 0x4c], ebx */
  W32((uint32_t)(esi + 0x4cu), ebx);
L_d9b253: /* d9b253: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9b256: jge 0xd9b2e4 */
  if ((sf == of)) goto L_d9b2e4;
L_d9b25c: /* d9b25c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d9b25f: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* d9b262: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b264: je 0xd9b2de */
  if (zf) goto L_d9b2de;
L_d9b266: /* d9b266: call dword ptr [0xde89c8] */
  esp -= 4; W32(esp, 0xd9b26cu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* d9b26c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b26e: jne 0xd9b288 */
  if (!zf) goto L_d9b288;
L_d9b270: /* d9b270: push 0x91f */
  { uint32_t v = 0x91fu; esp -= 4; W32(esp, v); }
/* d9b275: push 0xde2eb4 */
  { uint32_t v = 0xde2eb4u; esp -= 4; W32(esp, v); }
/* d9b27a: push 0xde2ec4 */
  { uint32_t v = 0xde2ec4u; esp -= 4; W32(esp, v); }
/* d9b27f: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9b285u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9b285: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9b288: /* d9b288: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d9b28b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b28d: jne 0xd9b2a0 */
  if (!zf) goto L_d9b2a0;
L_d9b28f: /* d9b28f: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* d9b292: call dword ptr [0xde89c8] */
  esp -= 4; W32(esp, 0xd9b298u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
L_d9b298: /* d9b298: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* d9b29b: jmp 0xd9b2a0 */
  goto L_d9b2a0;
L_d9b2a0: /* d9b2a0: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* d9b2a3: call dword ptr [0xde89c8] */
  esp -= 4; W32(esp, 0xd9b2a9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* d9b2a9: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9b2ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b2ad: mov ecx, eax */
  ecx = eax;
/* d9b2af: call dword ptr [0xde8a24] */
  esp -= 4; W32(esp, 0xd9b2b5u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* d9b2b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b2b7: jne 0xd9b2c4 */
  if (!zf) goto L_d9b2c4;
L_d9b2b9: /* d9b2b9: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9b2bc: call dword ptr [0xde8a20] */
  esp -= 4; W32(esp, 0xd9b2c2u); SPILL(); f_4e3d05(); if (g_unwind) return; /* Core!?GetSuperClass@UClass@@QBEPAV1@XZ */ RELOAD();
/* d9b2c2: jmp 0xd9b298 */
  goto L_d9b298;
L_d9b2c4: /* d9b2c4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9b2c6: lea edi, [esi + 0x58] */
  edi = (uint32_t)(esi + 0x58u);
/* d9b2c9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9b2cb: mov ecx, edi */
  ecx = edi;
/* d9b2cd: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9b2d3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9b2d3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d9b2d6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d9b2d8: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* d9b2db: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_d9b2de: /* d9b2de: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9b2df: jmp 0xd9b253 */
  goto L_d9b253;
L_d9b2e4: /* d9b2e4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9b2e6: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d9b2e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b2ea: mov ecx, esi */
  ecx = esi;
/* d9b2ec: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xd9b2f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b2f2: mov ecx, eax */
  ecx = eax;
/* d9b2f4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9b2f8: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9b2feu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9b2fe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9b301: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9b303: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b304: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd9b307u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b307: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d9b30a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9b30e: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9b314u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9b314: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d9b317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b319: jne 0xd9b32a */
  if (!zf) goto L_d9b32a;
L_d9b31b: /* d9b31b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9b31e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9b320: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd9b326u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b326: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9b328: jne 0xd9b335 */
  if (!zf) goto L_d9b335;
L_d9b32a: /* d9b32a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9b32d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9b32f: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xd9b335u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9b335: /* d9b335: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9b338: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b339: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b33a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b341: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b342: mov esp, ebp */
  esp = ebp;
/* d9b344: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9b345: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d9b29d(void) {
  LOAD_REGS();
  goto L_d9b29d;
L_d9b253: /* d9b253: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9b256: jge 0xd9b2e4 */
  if ((sf == of)) goto L_d9b2e4;
L_d9b25c: /* d9b25c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d9b25f: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* d9b262: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b264: je 0xd9b2de */
  if (zf) goto L_d9b2de;
L_d9b266: /* d9b266: call dword ptr [0xde89c8] */
  esp -= 4; W32(esp, 0xd9b26cu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* d9b26c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b26e: jne 0xd9b288 */
  if (!zf) goto L_d9b288;
L_d9b270: /* d9b270: push 0x91f */
  { uint32_t v = 0x91fu; esp -= 4; W32(esp, v); }
/* d9b275: push 0xde2eb4 */
  { uint32_t v = 0xde2eb4u; esp -= 4; W32(esp, v); }
/* d9b27a: push 0xde2ec4 */
  { uint32_t v = 0xde2ec4u; esp -= 4; W32(esp, v); }
/* d9b27f: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9b285u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9b285: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9b288: /* d9b288: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d9b28b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b28d: jne 0xd9b2a0 */
  if (!zf) goto L_d9b2a0;
L_d9b28f: /* d9b28f: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* d9b292: call dword ptr [0xde89c8] */
  esp -= 4; W32(esp, 0xd9b298u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
L_d9b298: /* d9b298: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* d9b29b: jmp 0xd9b2a0 */
  goto L_d9b2a0;
L_d9b29d: /* d9b29d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d9b2a0: /* d9b2a0: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* d9b2a3: call dword ptr [0xde89c8] */
  esp -= 4; W32(esp, 0xd9b2a9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* d9b2a9: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9b2ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b2ad: mov ecx, eax */
  ecx = eax;
/* d9b2af: call dword ptr [0xde8a24] */
  esp -= 4; W32(esp, 0xd9b2b5u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* d9b2b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b2b7: jne 0xd9b2c4 */
  if (!zf) goto L_d9b2c4;
L_d9b2b9: /* d9b2b9: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9b2bc: call dword ptr [0xde8a20] */
  esp -= 4; W32(esp, 0xd9b2c2u); SPILL(); f_4e3d05(); if (g_unwind) return; /* Core!?GetSuperClass@UClass@@QBEPAV1@XZ */ RELOAD();
/* d9b2c2: jmp 0xd9b298 */
  goto L_d9b298;
L_d9b2c4: /* d9b2c4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9b2c6: lea edi, [esi + 0x58] */
  edi = (uint32_t)(esi + 0x58u);
/* d9b2c9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9b2cb: mov ecx, edi */
  ecx = edi;
/* d9b2cd: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9b2d3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9b2d3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d9b2d6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d9b2d8: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* d9b2db: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_d9b2de: /* d9b2de: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9b2df: jmp 0xd9b253 */
  goto L_d9b253;
L_d9b2e4: /* d9b2e4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9b2e6: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d9b2e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b2ea: mov ecx, esi */
  ecx = esi;
/* d9b2ec: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xd9b2f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b2f2: mov ecx, eax */
  ecx = eax;
/* d9b2f4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9b2f8: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9b2feu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9b2fe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9b301: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9b303: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b304: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd9b307u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b307: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d9b30a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9b30e: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9b314u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9b314: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d9b317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b319: jne 0xd9b32a */
  if (!zf) goto L_d9b32a;
L_d9b31b: /* d9b31b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9b31e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9b320: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd9b326u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b326: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9b328: jne 0xd9b335 */
  if (!zf) goto L_d9b335;
L_d9b32a: /* d9b32a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9b32d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9b32f: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xd9b335u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9b335: /* d9b335: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9b338: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b339: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b33a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b341: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b342: mov esp, ebp */
  esp = ebp;
/* d9b344: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9b345: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d9b348(void) {
  LOAD_REGS();
L_d9b348: /* d9b348: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9b34b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9b350: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9b353: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b354: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9b357: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b35cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9b35c(); return;
}

void f_d9b35c(void) {
  LOAD_REGS();
L_d9b35c: /* d9b35c: push 0xdc2ea0 */
  { uint32_t v = 0xdc2ea0u; esp -= 4; W32(esp, v); }
/* d9b361: push 0xde2ee0 */
  { uint32_t v = 0xde2ee0u; esp -= 4; W32(esp, v); }
/* d9b366: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9b36cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9b36c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b36f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b371: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b373: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b378u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9b378: guest_badaddr(0xd9b378); return;
}

void f_d9b3e0(void) {
  LOAD_REGS();
L_d9b3e0: /* d9b3e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9b3e1: mov ebp, esp */
  ebp = esp;
/* d9b3e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9b3e5: push 0xdb9d80 */
  { uint32_t v = 0xdb9d80u; esp -= 4; W32(esp, v); }
/* d9b3ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9b3f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b3f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9b3f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9b3fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b3fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b3fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b3fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9b401: mov esi, ecx */
  esi = ecx;
/* d9b403: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9b40a: call 0xd8233d */
  esp -= 4; W32(esp, 0xd9b40fu); SPILL(); f_d8233d(); if (g_unwind) return; RELOAD();
/* d9b40f: mov ecx, esi */
  ecx = esi;
/* d9b411: call 0xd820f9 */
  esp -= 4; W32(esp, 0xd9b416u); SPILL(); f_d820f9(); if (g_unwind) return; RELOAD();
/* d9b416: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9b419: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b41a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b41b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b422: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b423: mov esp, ebp */
  esp = ebp;
/* d9b425: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9b426: ret  */
  esp += 4; SPILL(); return;
}

void f_d9b427(void) {
  LOAD_REGS();
L_d9b427: /* d9b427: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9b42a: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9b42f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9b432: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b433: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9b436: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b43bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9b43b(); return;
}

void f_d9b43b(void) {
  LOAD_REGS();
L_d9b43b: /* d9b43b: push 0xdc2edc */
  { uint32_t v = 0xdc2edcu; esp -= 4; W32(esp, v); }
/* d9b440: push 0xde3084 */
  { uint32_t v = 0xde3084u; esp -= 4; W32(esp, v); }
/* d9b445: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9b44bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9b44b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b44e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b450: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b452: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b457u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9b457: guest_badaddr(0xd9b457); return;
}

void f_d9b480(void) {
  LOAD_REGS();
L_d9b480: /* d9b480: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9b482: push 0xdb9d99 */
  { uint32_t v = 0xdb9d99u; esp -= 4; W32(esp, v); }
/* d9b487: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9b48d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b48e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9b495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b496: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b497: mov esi, ecx */
  esi = ecx;
/* d9b499: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d9b49d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d9b4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b4a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b4a3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d9b4ab: call 0xd82379 */
  esp -= 4; W32(esp, 0xd9b4b0u); SPILL(); f_d82379(); if (g_unwind) return; RELOAD();
/* d9b4b0: mov ecx, esi */
  ecx = esi;
/* d9b4b2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9b4ba: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xd9b4c0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* d9b4c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9b4c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b4c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b4cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b4cf: ret  */
  esp += 4; SPILL(); return;
}

void f_d9b4f0(void) {
  LOAD_REGS();
L_d9b4f0: /* d9b4f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9b4f2: push 0xdb9db9 */
  { uint32_t v = 0xdb9db9u; esp -= 4; W32(esp, v); }
/* d9b4f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9b4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b4fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9b505: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b506: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b507: mov esi, ecx */
  esi = ecx;
/* d9b509: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d9b50d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d9b510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b511: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b513: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d9b51b: call 0xd8107d */
  esp -= 4; W32(esp, 0xd9b520u); SPILL(); f_d8107d(); if (g_unwind) return; RELOAD();
/* d9b520: mov ecx, esi */
  ecx = esi;
/* d9b522: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9b52a: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xd9b530u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* d9b530: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9b534: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b535: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b53c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b53f: ret  */
  esp += 4; SPILL(); return;
}

void f_d9b560(void) {
  LOAD_REGS();
L_d9b560: /* d9b560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9b561: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b562: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b563: mov edi, ecx */
  edi = ecx;
/* d9b565: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* d9b568: xor esi, esi */
  esi = 0;
/* d9b56a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9b56c: jle 0xd9b590 */
  if ((zf || sf != of)) goto L_d9b590;
L_d9b56e: /* d9b56e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b56f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_d9b573: /* d9b573: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d9b575: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* d9b578: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9b57a: jne 0xd9b587 */
  if (!zf) goto L_d9b587;
L_d9b57c: /* d9b57c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9b57e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b57f: mov ecx, edi */
  ecx = edi;
/* d9b581: call 0xd81163 */
  esp -= 4; W32(esp, 0xd9b586u); SPILL(); f_d81163(); if (g_unwind) return; RELOAD();
/* d9b586: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_d9b587: /* d9b587: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d9b58a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d9b58b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9b58d: jl 0xd9b573 */
  if ((sf != of)) goto L_d9b573;
L_d9b58f: /* d9b58f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_d9b590: /* d9b590: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* d9b593: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b594: mov eax, ebp */
  eax = ebp;
/* d9b596: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b597: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d9b599: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9b59a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9b5b0(void) {
  LOAD_REGS();
L_d9b5b0: /* d9b5b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b5b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* d9b5b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b5b6: mov esi, ecx */
  esi = ecx;
/* d9b5b8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d9b5bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b5bc: xor edi, edi */
  edi = 0;
/* d9b5be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9b5c0: jle 0xd9b5da */
  if ((zf || sf != of)) goto L_d9b5da;
L_d9b5c2: /* d9b5c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9b5c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b5c5: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* d9b5c8: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xd9b5ceu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* d9b5ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b5d0: jne 0xd9b5f3 */
  if (!zf) goto L_d9b5f3;
L_d9b5d2: /* d9b5d2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d9b5d5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9b5d6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9b5d8: jl 0xd9b5c2 */
  if ((sf != of)) goto L_d9b5c2;
L_d9b5da: /* d9b5da: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9b5dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9b5de: mov ecx, esi */
  ecx = esi;
/* d9b5e0: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9b5e6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9b5e6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d9b5e8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d9b5ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b5eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b5ec: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d9b5ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b5f0: ret 4 */
  esp += 8; SPILL(); return;
L_d9b5f3: /* d9b5f3: mov eax, edi */
  eax = edi;
/* d9b5f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b5f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b5f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b5f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9b620(void) {
  LOAD_REGS();
L_d9b620: /* d9b620: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9b622: push 0xdb9dd9 */
  { uint32_t v = 0xdb9dd9u; esp -= 4; W32(esp, v); }
/* d9b627: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9b62d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b62e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9b635: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b636: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b637: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b638: mov esi, ecx */
  esi = ecx;
/* d9b63a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b63b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* d9b63f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d9b642: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9b644: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* d9b64a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d9b652: jge 0xd9b668 */
  if ((sf == of)) goto L_d9b668;
L_d9b654: /* d9b654: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d9b659: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9b65e: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d9b663: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd9b665u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b665: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9b668: /* d9b668: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9b66b: jle 0xd9b681 */
  if ((zf || sf != of)) goto L_d9b681;
L_d9b66d: /* d9b66d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d9b672: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9b677: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d9b67c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd9b67eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b67e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9b681: /* d9b681: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9b683: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b684: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b686: mov ecx, esi */
  ecx = esi;
/* d9b688: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd9b68eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d9b68e: mov ecx, esi */
  ecx = esi;
/* d9b690: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* d9b698: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xd9b69eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* d9b69e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d9b6a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b6a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b6a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b6a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b6ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b6af: ret  */
  esp += 4; SPILL(); return;
}

void f_d9b6e0(void) {
  LOAD_REGS();
L_d9b6e0: /* d9b6e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9b6e2: push 0xdb9df9 */
  { uint32_t v = 0xdb9df9u; esp -= 4; W32(esp, v); }
/* d9b6e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9b6ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b6ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9b6f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b6f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b6f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b6f8: mov esi, ecx */
  esi = ecx;
/* d9b6fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b6fb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* d9b6ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d9b702: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9b704: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* d9b70a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d9b712: jge 0xd9b728 */
  if ((sf == of)) goto L_d9b728;
L_d9b714: /* d9b714: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d9b719: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9b71e: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d9b723: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd9b725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b725: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9b728: /* d9b728: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9b72b: jle 0xd9b741 */
  if ((zf || sf != of)) goto L_d9b741;
L_d9b72d: /* d9b72d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d9b732: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9b737: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d9b73c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd9b73eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9b73e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9b741: /* d9b741: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9b743: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b744: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b746: mov ecx, esi */
  ecx = esi;
/* d9b748: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd9b74eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d9b74e: mov ecx, esi */
  ecx = esi;
/* d9b750: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* d9b758: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xd9b75eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* d9b75e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d9b762: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b763: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b764: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b765: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b76c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b76f: ret  */
  esp += 4; SPILL(); return;
}

void f_d9b7a0(void) {
  LOAD_REGS();
L_d9b7a0: /* d9b7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b7a1: mov esi, ecx */
  esi = ecx;
/* d9b7a3: call dword ptr [0xde8a28] */
  esp -= 4; W32(esp, 0xd9b7a9u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* d9b7a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b7ab: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* d9b7ad: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* d9b7b4: jne 0xd9b7ce */
  if (!zf) goto L_d9b7ce;
L_d9b7b6: /* d9b7b6: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* d9b7bb: push 0xde35e8 */
  { uint32_t v = 0xde35e8u; esp -= 4; W32(esp, v); }
/* d9b7c0: push 0xde35e0 */
  { uint32_t v = 0xde35e0u; esp -= 4; W32(esp, v); }
/* d9b7c5: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9b7cbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9b7cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9b7ce: /* d9b7ce: mov ecx, esi */
  ecx = esi;
/* d9b7d0: call 0xd821da */
  esp -= 4; W32(esp, 0xd9b7d5u); SPILL(); f_d821da(); if (g_unwind) return; RELOAD();
/* d9b7d5: mov eax, esi */
  eax = esi;
/* d9b7d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b7d8: ret  */
  esp += 4; SPILL(); return;
}

void f_d9b7f0(void) {
  LOAD_REGS();
L_d9b7f0: /* d9b7f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9b7f1: mov ebp, esp */
  ebp = esp;
/* d9b7f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9b7f5: push 0xdb9e10 */
  { uint32_t v = 0xdb9e10u; esp -= 4; W32(esp, v); }
/* d9b7fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9b800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9b808: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9b80b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b80c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b80d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b80e: mov esi, ecx */
  esi = ecx;
/* d9b810: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d9b813: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9b816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b817: mov ecx, 0xde5720 */
  ecx = 0xde5720u;
/* d9b81c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9b823: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* d9b826: call 0xd81708 */
  esp -= 4; W32(esp, 0xd9b82bu); SPILL(); f_d81708(); if (g_unwind) return; RELOAD();
/* d9b82b: mov ecx, esi */
  ecx = esi;
/* d9b82d: call 0xd81ebf */
  esp -= 4; W32(esp, 0xd9b832u); SPILL(); f_d81ebf(); if (g_unwind) return; RELOAD();
/* d9b832: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9b835: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b836: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b837: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b83e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b83f: mov esp, ebp */
  esp = ebp;
/* d9b841: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9b842: ret  */
  esp += 4; SPILL(); return;
}

void f_d9b843(void) {
  LOAD_REGS();
L_d9b843: /* d9b843: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9b846: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9b84b: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* d9b84e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9b84f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* d9b852: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b857u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9b857(); return;
}

void f_d9b857(void) {
  LOAD_REGS();
L_d9b857: /* d9b857: push 0xdc2f10 */
  { uint32_t v = 0xdc2f10u; esp -= 4; W32(esp, v); }
/* d9b85c: push 0xde29b8 */
  { uint32_t v = 0xde29b8u; esp -= 4; W32(esp, v); }
/* d9b861: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9b867u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9b867: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b86a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b86c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b86e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b873u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9b873: guest_badaddr(0xd9b873); return;
}

void f_d9b8b0(void) {
  LOAD_REGS();
L_d9b8b0: /* d9b8b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9b8b1: mov ebp, esp */
  ebp = esp;
/* d9b8b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9b8b5: push 0xdb9e20 */
  { uint32_t v = 0xdb9e20u; esp -= 4; W32(esp, v); }
/* d9b8ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9b8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b8c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9b8c8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9b8cb: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* d9b8ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b8d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b8d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b8d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b8d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9b8d6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9b8dd: je 0xd9b94d */
  if (zf) goto L_d9b94d;
L_d9b8df: /* d9b8df: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* d9b8e2: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d9b8e5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_d9b8e8: /* d9b8e8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d9b8eb: call 0xd81041 */
  esp -= 4; W32(esp, 0xd9b8f0u); SPILL(); f_d81041(); if (g_unwind) return; RELOAD();
/* d9b8f0: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* d9b8f3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b8f5: je 0xd9b94d */
  if (zf) goto L_d9b94d;
L_d9b8f7: /* d9b8f7: test byte ptr [esi + 0x90], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9b8fe: je 0xd9b915 */
  if (zf) goto L_d9b915;
L_d9b900: /* d9b900: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d9b903: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b904: mov ecx, esi */
  ecx = esi;
/* d9b906: call dword ptr [0xde89e4] */
  esp -= 4; W32(esp, 0xd9b90cu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* d9b90c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d9b90f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b910: call 0xd82621 */
  esp -= 4; W32(esp, 0xd9b915u); SPILL(); f_d82621(); if (g_unwind) return; RELOAD();
L_d9b915: /* d9b915: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* d9b918: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* d9b91b: jmp 0xd9b8e8 */
  goto L_d9b8e8;
L_d9b94d: /* d9b94d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9b950: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b951: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b952: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b959: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b95a: mov esp, ebp */
  esp = ebp;
/* d9b95c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9b95d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9b91d(void) {
  LOAD_REGS();
L_d9b91d: /* d9b91d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9b920: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9b925: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9b928: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9b929: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9b92c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b931u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9b931(); return;
}

void f_d9b931(void) {
  LOAD_REGS();
L_d9b931: /* d9b931: push 0xdc2f48 */
  { uint32_t v = 0xdc2f48u; esp -= 4; W32(esp, v); }
/* d9b936: push 0xde2aac */
  { uint32_t v = 0xde2aacu; esp -= 4; W32(esp, v); }
/* d9b93b: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9b941u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9b941: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9b944: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b946: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9b948: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9b94du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d9b94d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9b950: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9b951: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9b952: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9b959: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9b95a: mov esp, ebp */
  esp = ebp;
/* d9b95c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9b95d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9b990(void) {
  LOAD_REGS();
L_d9b990: /* d9b990: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9b991: mov ebp, esp */
  ebp = esp;
/* d9b993: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9b995: push 0xdb9e42 */
  { uint32_t v = 0xdb9e42u; esp -= 4; W32(esp, v); }
/* d9b99a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9b9a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b9a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9b9a8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9b9ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9b9ac: mov ebx, ecx */
  ebx = ecx;
/* d9b9ae: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* d9b9b1: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d9b9b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9b9b5: xor esi, esi */
  esi = 0;
/* d9b9b7: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9b9b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9b9ba: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9b9bd: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d9b9c0: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* d9b9c3: je 0xd9b9cb */
  if (zf) goto L_d9b9cb;
L_d9b9c5: /* d9b9c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9b9c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b9c8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xd9b9cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9b9cb: /* d9b9cb: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* d9b9ce: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_d9b9d1: /* d9b9d1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d9b9d4: cmp eax, dword ptr [ebx + 0x5c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9b9d7: jge 0xd9bb64 */
  if ((sf == of)) goto L_d9bb64;
L_d9b9dd: /* d9b9dd: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9b9e0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b9e2: je 0xd9b9f7 */
  if (zf) goto L_d9b9f7;
L_d9b9e4: /* d9b9e4: call dword ptr [0xde899c] */
  esp -= 4; W32(esp, 0xd9b9eau); SPILL(); f_4e2e6e(); if (g_unwind) return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9b9ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9b9eb: mov ecx, edi */
  ecx = edi;
/* d9b9ed: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9b9f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9b9f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b9f5: jne 0xd9ba76 */
  if (!zf) goto L_d9ba76;
L_d9b9f7: /* d9b9f7: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9b9fa: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9b9fc: je 0xd9ba11 */
  if (zf) goto L_d9ba11;
L_d9b9fe: /* d9b9fe: call dword ptr [0xde89a0] */
  esp -= 4; W32(esp, 0xd9ba04u); SPILL(); f_4e2c0c(); if (g_unwind) return; /* Core!?StaticClass@UIntProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9ba04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ba05: mov ecx, edi */
  ecx = edi;
/* d9ba07: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9ba0du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9ba0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ba0f: jne 0xd9ba76 */
  if (!zf) goto L_d9ba76;
L_d9ba11: /* d9ba11: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9ba14: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ba16: je 0xd9ba4e */
  if (zf) goto L_d9ba4e;
L_d9ba18: /* d9ba18: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9ba1eu); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9ba1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ba1f: mov ecx, edi */
  ecx = edi;
/* d9ba21: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9ba27u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9ba27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ba29: je 0xd9ba4e */
  if (zf) goto L_d9ba4e;
L_d9ba2b: /* d9ba2b: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9ba2e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ba30: je 0xd9ba45 */
  if (zf) goto L_d9ba45;
L_d9ba32: /* d9ba32: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9ba38u); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9ba38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ba39: mov ecx, edi */
  ecx = edi;
/* d9ba3b: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9ba41u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9ba41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ba43: jne 0xd9ba47 */
  if (!zf) goto L_d9ba47;
L_d9ba45: /* d9ba45: xor edi, edi */
  edi = 0;
L_d9ba47: /* d9ba47: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* d9ba4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ba4c: je 0xd9ba76 */
  if (zf) goto L_d9ba76;
L_d9ba4e: /* d9ba4e: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* d9ba51: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9ba54: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* d9ba57: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9ba59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ba5a: mov ecx, esi */
  ecx = esi;
/* d9ba5c: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0xd9ba5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ba5f: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9ba62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ba64: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9ba66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ba67: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d9ba6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ba6b: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xd9ba71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ba71: jmp 0xd9bb4e */
  goto L_d9bb4e;
L_d9ba76: /* d9ba76: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* d9ba79: lea edi, [esi + 0x74] */
  edi = (uint32_t)(esi + 0x74u);
/* d9ba7c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9ba7d: mov ecx, edi */
  ecx = edi;
/* d9ba7f: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xd9ba85u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* d9ba85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ba86: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9ba89: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xd9ba8fu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* d9ba8f: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d9ba92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9ba93: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9ba96: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* d9ba99: mov ecx, esp */
  ecx = esp;
/* d9ba9b: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* d9ba9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9ba9f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9baa3: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xd9baa9u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* d9baa9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9baac: call 0xd8115e */
  esp -= 4; W32(esp, 0xd9bab1u); SPILL(); f_d8115e(); if (g_unwind) return; RELOAD();
/* d9bab1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bab3: je 0xd9bb12 */
  if (zf) goto L_d9bb12;
L_d9bab5: /* d9bab5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* d9bab8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9babb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* d9babe: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* d9bac1: push 0xde2ae4 */
  { uint32_t v = 0xde2ae4u; esp -= 4; W32(esp, v); }
/* d9bac6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bac7: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd9bacdu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d9bacd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bad0: mov ebx, eax */
  ebx = eax;
/* d9bad2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9bad5: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* d9bad8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d9badb: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* d9bade: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9bae0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9bae1: mov ecx, esi */
  ecx = esi;
/* d9bae3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d9bae7: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0xd9baeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9baea: mov ecx, ebx */
  ecx = ebx;
/* d9baec: mov edi, eax */
  edi = eax;
/* d9baee: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9baf4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9baf4: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9baf7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9baf9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9bafb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9bafc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bafd: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xd9bb03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9bb03: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9bb06: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9bb0a: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9bb10u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9bb10: jmp 0xd9bb3e */
  goto L_d9bb3e;
L_d9bb12: /* d9bb12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9bb13: mov ecx, edi */
  ecx = edi;
/* d9bb15: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xd9bb1bu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* d9bb1b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9bb1e: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* d9bb21: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9bb24: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* d9bb27: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9bb29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9bb2a: mov ecx, esi */
  ecx = esi;
/* d9bb2c: call dword ptr [eax + 0x60] */
  { uint32_t t = R32((uint32_t)(eax + 0x60u)); esp -= 4; W32(esp, 0xd9bb2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9bb2f: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9bb32: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9bb34: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9bb36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bb37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9bb38: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xd9bb3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9bb3e: /* d9bb3e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9bb41: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9bb45: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9bb4bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9bb4b: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_d9bb4e: /* d9bb4e: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* d9bb51: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9bb54: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* d9bb57: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9bb59: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0xd9bb5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9bb5c: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* d9bb5f: jmp 0xd9b9d1 */
  goto L_d9b9d1;
L_d9bb64: /* d9bb64: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* d9bb67: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d9bb6a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bb6c: je 0xd9bb74 */
  if (zf) goto L_d9bb74;
L_d9bb6e: /* d9bb6e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9bb70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bb71: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xd9bb74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9bb74: /* d9bb74: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* d9bb77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bb79: je 0xd9bb83 */
  if (zf) goto L_d9bb83;
L_d9bb7b: /* d9bb7b: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* d9bb7e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9bb80: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0xd9bb83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9bb83: /* d9bb83: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9bb86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9bb87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9bb88: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9bb8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9bb90: mov esp, ebp */
  esp = ebp;
/* d9bb92: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9bb93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d9bb96(void) {
  LOAD_REGS();
L_d9bb96: /* d9bb96: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d9bb99: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9bb9e: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* d9bba1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9bba2: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d9bba5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9bbaau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9bbaa(); return;
}

void f_d9bbaa(void) {
  LOAD_REGS();
L_d9bbaa: /* d9bbaa: push 0xdc2f90 */
  { uint32_t v = 0xdc2f90u; esp -= 4; W32(esp, v); }
/* d9bbaf: push 0xde2aec */
  { uint32_t v = 0xde2aecu; esp -= 4; W32(esp, v); }
/* d9bbb4: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9bbbau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9bbba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bbbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9bbbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9bbc1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9bbc6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9bbc6: guest_badaddr(0xd9bbc6); return;
}

void f_d9bc60(void) {
  LOAD_REGS();
L_d9bc60: /* d9bc60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9bc61: mov ebp, esp */
  ebp = esp;
/* d9bc63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9bc65: push 0xdb9e71 */
  { uint32_t v = 0xdb9e71u; esp -= 4; W32(esp, v); }
/* d9bc6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9bc70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bc71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9bc78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9bc79: mov eax, 0x2018 */
  eax = 0x2018u;
/* d9bc7e: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd9bc83u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d9bc83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9bc84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9bc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9bc86: mov edi, ecx */
  edi = ecx;
/* d9bc88: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* d9bc8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bc8d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9bc90: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* d9bc93: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9bc9a: jne 0xd9bcb4 */
  if (!zf) goto L_d9bcb4;
L_d9bc9c: /* d9bc9c: push 0x991 */
  { uint32_t v = 0x991u; esp -= 4; W32(esp, v); }
/* d9bca1: push 0xde2f3c */
  { uint32_t v = 0xde2f3cu; esp -= 4; W32(esp, v); }
/* d9bca6: push 0xde2f4c */
  { uint32_t v = 0xde2f4cu; esp -= 4; W32(esp, v); }
/* d9bcab: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9bcb1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9bcb1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9bcb4: /* d9bcb4: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* d9bcb7: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d9bcba: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bcbc: je 0xd9bcc4 */
  if (zf) goto L_d9bcc4;
L_d9bcbe: /* d9bcbe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9bcc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bcc1: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xd9bcc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9bcc4: /* d9bcc4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d9bcc7: mov esi, dword ptr [ebx + 0x3c] */
  esi = R32((uint32_t)(ebx + 0x3cu));
/* d9bcca: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bccc: je 0xd9be4a */
  if (zf) goto L_d9be4a;
L_d9bcd2: /* d9bcd2: call dword ptr [0xde8998] */
  esp -= 4; W32(esp, 0xd9bcd8u); SPILL(); f_4e202c(); if (g_unwind) return; /* Core!?StaticClass@UClassProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9bcd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bcd9: mov ecx, esi */
  ecx = esi;
/* d9bcdb: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9bce1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9bce1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bce3: je 0xd9be4a */
  if (zf) goto L_d9be4a;
L_d9bce9: /* d9bce9: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* d9bcec: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9bcef: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd9bcf5u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d9bcf5: push 0xde2f54 */
  { uint32_t v = 0xde2f54u; esp -= 4; W32(esp, v); }
/* d9bcfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bcfb: call dword ptr [0xde8938] */
  esp -= 4; W32(esp, 0xd9bd01u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* d9bd01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bd04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bd06: jne 0xd9be4a */
  if (!zf) goto L_d9be4a;
L_d9bd0c: /* d9bd0c: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* d9bd0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bd10: call 0xd81541 */
  esp -= 4; W32(esp, 0xd9bd15u); SPILL(); f_d81541(); if (g_unwind) return; RELOAD();
/* d9bd15: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bd18: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* d9bd1b: mov esi, eax */
  esi = eax;
/* d9bd1d: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9bd23u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9bd23: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9bd27: call dword ptr [0xde8a28] */
  esp -= 4; W32(esp, 0xd9bd2du); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* d9bd2d: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* d9bd30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9bd32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9bd33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bd34: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* d9bd37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9bd38: call dword ptr [0xde8a3c] */
  esp -= 4; W32(esp, 0xd9bd3eu); SPILL(); f_4e44d0(); if (g_unwind) return; /* Core!?GetRegistryObjects@UObject@@SAXAAV?$TArray@VFRegistryObjectInfo@@@@PAVUClass@@1H@Z */ RELOAD();
/* d9bd3e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bd41: xor ebx, ebx */
  ebx = 0;
L_d9bd43: /* d9bd43: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9bd46: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9bd48: jge 0xd9be29 */
  if ((sf == of)) goto L_d9be29;
L_d9bd4e: /* d9bd4e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9bd51: mov esi, ebx */
  esi = ebx;
/* d9bd53: imul esi, esi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x3cu);
  esi = (uint32_t)r;
  }
/* d9bd56: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* d9bd59: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9bd5fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9bd5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bd60: lea ecx, [ebp - 0x2028] */
  ecx = (uint32_t)(ebp + 0xffffdfd8u);
/* d9bd66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9bd67: call dword ptr [0xde88b4] */
  esp -= 4; W32(esp, 0xd9bd6du); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* d9bd6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bd70: lea edx, [ebp - 0x2028] */
  edx = (uint32_t)(ebp + 0xffffdfd8u);
/* d9bd76: push 0xde2f64 */
  { uint32_t v = 0xde2f64u; esp -= 4; W32(esp, v); }
/* d9bd7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9bd7c: call dword ptr [0xde8a38] */
  esp -= 4; W32(esp, 0xd9bd82u); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* d9bd82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bd85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bd87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9bd89: je 0xd9bdaa */
  if (zf) goto L_d9bdaa;
L_d9bd8b: /* d9bd8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9bd8d: lea ecx, [ebp - 0x2028] */
  ecx = (uint32_t)(ebp + 0xffffdfd8u);
/* d9bd93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9bd94: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* d9bd99: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9bd9c: push 0xde2f68 */
  { uint32_t v = 0xde2f68u; esp -= 4; W32(esp, v); }
/* d9bda1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bda2: call dword ptr [0xde8914] */
  esp -= 4; W32(esp, 0xd9bda8u); SPILL(); f_4e43db(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBG000H@Z */ RELOAD();
/* d9bda8: jmp 0xd9bdc6 */
  goto L_d9bdc6;
L_d9bdaa: /* d9bdaa: lea edx, [ebp - 0x2028] */
  edx = (uint32_t)(ebp + 0xffffdfd8u);
/* d9bdb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9bdb1: push 0xde2f84 */
  { uint32_t v = 0xde2f84u; esp -= 4; W32(esp, v); }
/* d9bdb6: push 0xde2f90 */
  { uint32_t v = 0xde2f90u; esp -= 4; W32(esp, v); }
/* d9bdbb: push 0xde2f9c */
  { uint32_t v = 0xde2f9cu; esp -= 4; W32(esp, v); }
/* d9bdc0: call dword ptr [0xde89d0] */
  esp -= 4; W32(esp, 0xd9bdc6u); SPILL(); f_4e141f(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBD0PBG1H@Z */ RELOAD();
L_d9bdc6: /* d9bdc6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d9bdc9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bdcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9bdcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bdce: call dword ptr [0xde8938] */
  esp -= 4; W32(esp, 0xd9bdd4u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* d9bdd4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bdd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bdd9: jne 0xd9be23 */
  if (!zf) goto L_d9be23;
L_d9bddb: /* d9bddb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9bdde: lea ecx, [esi + edx] */
  ecx = (uint32_t)(esi + edx);
/* d9bde1: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9bde7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9bde7: mov edi, eax */
  edi = eax;
/* d9bde9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d9bdec: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* d9bdef: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9bdf5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9bdf5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d9bdf8: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* d9bdfb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9bdfd: mov esi, eax */
  esi = eax;
/* d9bdff: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0xd9be02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9be02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9be04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9be06: mov ecx, eax */
  ecx = eax;
/* d9be08: call dword ptr [0xde89dc] */
  esp -= 4; W32(esp, 0xd9be0eu); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* d9be0e: mov ecx, dword ptr [0xde89d8] */
  ecx = R32((uint32_t)(0xde89d8u));
/* d9be14: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9be16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9be18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9be1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9be1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9be1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9be1d: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xd9be20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9be20: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
L_d9be23: /* d9be23: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9be24: jmp 0xd9bd43 */
  goto L_d9bd43;
L_d9be29: /* d9be29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9be2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9be2c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* d9be2f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d9be33: call 0xd8107d */
  esp -= 4; W32(esp, 0xd9be38u); SPILL(); f_d8107d(); if (g_unwind) return; RELOAD();
/* d9be38: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* d9be3b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9be3f: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xd9be45u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* d9be45: jmp 0xd9bef2 */
  goto L_d9bef2;
L_d9be4a: /* d9be4a: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* d9be4d: call dword ptr [0xde8a08] */
  esp -= 4; W32(esp, 0xd9be53u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* d9be53: mov esi, eax */
  esi = eax;
/* d9be55: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9be57: je 0xd9bea2 */
  if (zf) goto L_d9bea2;
L_d9be59: /* d9be59: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd9be5fu); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9be5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9be60: mov ecx, esi */
  ecx = esi;
/* d9be62: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9be68u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9be68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9be6a: je 0xd9bea2 */
  if (zf) goto L_d9bea2;
L_d9be6c: /* d9be6c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d9be6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9be70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9be71: mov ecx, edi */
  ecx = edi;
/* d9be73: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd9be76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9be76: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* d9be79: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9be7b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9be7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9be7e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d9be81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9be82: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xd9be88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9be88: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* d9be8b: call dword ptr [0xde8a34] */
  esp -= 4; W32(esp, 0xd9be91u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* d9be91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9be93: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* d9be98: mov ecx, eax */
  ecx = eax;
/* d9be9a: call dword ptr [0xde8a30] */
  esp -= 4; W32(esp, 0xd9bea0u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* d9bea0: jmp 0xd9bef2 */
  goto L_d9bef2;
L_d9bea2: /* d9bea2: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* d9bea5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bea7: je 0xd9bed5 */
  if (zf) goto L_d9bed5;
L_d9bea9: /* d9bea9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9beab: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xd9beb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9beb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9beb3: je 0xd9bed5 */
  if (zf) goto L_d9bed5;
L_d9beb5: /* d9beb5: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* d9beb8: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* d9bebb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9bebc: call 0xd81384 */
  esp -= 4; W32(esp, 0xd9bec1u); SPILL(); f_d81384(); if (g_unwind) return; RELOAD();
/* d9bec1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bec4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9bec6: je 0xd9bed5 */
  if (zf) goto L_d9bed5;
L_d9bec8: /* d9bec8: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* d9becb: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* d9bece: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* d9bed1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9bed3: jmp 0xd9bedb */
  goto L_d9bedb;
L_d9bed5: /* d9bed5: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* d9bed8: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
L_d9bedb: /* d9bedb: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* d9bede: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9bedf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bee0: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* d9bee3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9bee4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d9bee7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9bee8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9bee9: call dword ptr [0xde8a2c] */
  esp -= 4; W32(esp, 0xd9beefu); SPILL(); f_4e3661(); if (g_unwind) return; /* Core!?GlobalSetProperty@UObject@@SAXPBGPAVUClass@@PAVUProperty@@HH@Z */ RELOAD();
/* d9beef: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9bef2: /* d9bef2: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* d9bef5: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d9bef8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9befa: je 0xd9bf02 */
  if (zf) goto L_d9bf02;
L_d9befc: /* d9befc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9befe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9beff: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xd9bf02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9bf02: /* d9bf02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9bf05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9bf06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9bf07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9bf0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9bf0f: mov esp, ebp */
  esp = ebp;
/* d9bf11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9bf12: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d9bf15(void) {
  LOAD_REGS();
L_d9bf15: /* d9bf15: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9bf18: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9bf1d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* d9bf20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9bf21: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* d9bf24: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9bf29u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9bf29(); return;
}

void f_d9bf29(void) {
  LOAD_REGS();
L_d9bf29: /* d9bf29: push 0xdc2fd0 */
  { uint32_t v = 0xdc2fd0u; esp -= 4; W32(esp, v); }
/* d9bf2e: push 0xde2fa8 */
  { uint32_t v = 0xde2fa8u; esp -= 4; W32(esp, v); }
/* d9bf33: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9bf39u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9bf39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9bf3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9bf3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9bf40: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9bf45u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9bf45: guest_badaddr(0xd9bf45); return;
}

void f_d9c010(void) {
  LOAD_REGS();
L_d9c010: /* d9c010: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d9c014: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c015: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c016: xor edi, edi */
  edi = 0;
/* d9c018: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c01a: mov esi, ecx */
  esi = ecx;
/* d9c01c: jne 0xd9c023 */
  if (!zf) goto L_d9c023;
L_d9c01e: /* d9c01e: mov eax, dword ptr [0xde5030] */
  eax = R32((uint32_t)(0xde5030u));
L_d9c023: /* d9c023: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d9c027: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c028: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d9c02c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c02d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c02e: mov ecx, esi */
  ecx = esi;
/* d9c030: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd9c035u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d9c035: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d9c039: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d9c03d: mov dword ptr [esi], 0xdc19a8 */
  W32((uint32_t)(esi), 0xdc19a8u);
/* d9c043: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* d9c046: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* d9c049: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* d9c04e: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* d9c051: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* d9c054: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* d9c057: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* d9c05a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* d9c05d: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* d9c060: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* d9c063: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* d9c066: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* d9c069: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* d9c06c: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* d9c06f: mov dword ptr [esi + 0x74], edi */
  W32((uint32_t)(esi + 0x74u), edi);
/* d9c072: mov dword ptr [esi + 0x78], edi */
  W32((uint32_t)(esi + 0x78u), edi);
/* d9c075: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* d9c078: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* d9c07e: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* d9c084: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* d9c08a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9c08b: mov eax, esi */
  eax = esi;
/* d9c08d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c08e: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_d9c0d0(void) {
  LOAD_REGS();
L_d9c0d0: /* d9c0d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c0d1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d9c0d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c0d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9c0d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9c0db: mov eax, esp */
  eax = esp;
/* d9c0dd: mov esi, ecx */
  esi = ecx;
/* d9c0df: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* d9c0e3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d9c0e6: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d9c0ea: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9c0f0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d9c0f3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d9c0f7: mov dword ptr [esp + 0x14], esp */
  W32((uint32_t)(esp + 0x14u), esp);
/* d9c0fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c0fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c0fd: mov ecx, esi */
  ecx = esi;
/* d9c0ff: call 0xd81adc */
  esp -= 4; W32(esp, 0xd9c104u); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* d9c104: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* d9c108: mov dword ptr [esi], 0xdc1ac8 */
  W32((uint32_t)(esi), 0xdc1ac8u);
/* d9c10e: mov dword ptr [esi + 0x94], 0 */
  W32((uint32_t)(esi + 0x94u), 0x0u);
/* d9c118: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* d9c11e: mov eax, esi */
  eax = esi;
/* d9c120: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c121: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d9c122: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_d9c150(void) {
  LOAD_REGS();
L_d9c150: /* d9c150: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d9c154: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c155: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c156: xor edi, edi */
  edi = 0;
/* d9c158: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c15a: mov esi, ecx */
  esi = ecx;
/* d9c15c: jne 0xd9c163 */
  if (!zf) goto L_d9c163;
L_d9c15e: /* d9c15e: mov eax, dword ptr [0xde5018] */
  eax = R32((uint32_t)(0xde5018u));
L_d9c163: /* d9c163: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d9c167: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c168: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d9c16c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c16d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c16e: mov ecx, esi */
  ecx = esi;
/* d9c170: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd9c175u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d9c175: mov dword ptr [esi], 0xdc1be8 */
  W32((uint32_t)(esi), 0xdc1be8u);
/* d9c17b: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* d9c17e: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* d9c181: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* d9c186: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* d9c189: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* d9c18c: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* d9c18f: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* d9c192: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* d9c195: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* d9c198: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* d9c19b: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* d9c19e: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* d9c1a1: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* d9c1a4: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* d9c1a7: mov dword ptr [esi + 0x74], edi */
  W32((uint32_t)(esi + 0x74u), edi);
/* d9c1aa: mov dword ptr [esi + 0x78], edi */
  W32((uint32_t)(esi + 0x78u), edi);
/* d9c1ad: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* d9c1b0: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* d9c1b6: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* d9c1bc: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* d9c1c2: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* d9c1c8: mov dword ptr [esi + 0x90], edi */
  W32((uint32_t)(esi + 0x90u), edi);
/* d9c1ce: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* d9c1d4: mov dword ptr [esi + 0x98], edi */
  W32((uint32_t)(esi + 0x98u), edi);
/* d9c1da: mov dword ptr [esi + 0x9c], edi */
  W32((uint32_t)(esi + 0x9cu), edi);
/* d9c1e0: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* d9c1e6: mov dword ptr [esi + 0xa4], edi */
  W32((uint32_t)(esi + 0xa4u), edi);
/* d9c1ec: mov dword ptr [esi + 0xa8], edi */
  W32((uint32_t)(esi + 0xa8u), edi);
/* d9c1f2: mov dword ptr [esi + 0xb0], edi */
  W32((uint32_t)(esi + 0xb0u), edi);
/* d9c1f8: mov dword ptr [esi + 0xb4], edi */
  W32((uint32_t)(esi + 0xb4u), edi);
/* d9c1fe: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* d9c204: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9c205: mov eax, esi */
  eax = esi;
/* d9c207: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c208: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d9c240(void) {
  LOAD_REGS();
L_d9c240: /* d9c240: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d9c244: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c245: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c246: xor edi, edi */
  edi = 0;
/* d9c248: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c24a: mov esi, ecx */
  esi = ecx;
/* d9c24c: jne 0xd9c253 */
  if (!zf) goto L_d9c253;
L_d9c24e: /* d9c24e: mov eax, dword ptr [0xde5164] */
  eax = R32((uint32_t)(0xde5164u));
L_d9c253: /* d9c253: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d9c257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c258: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d9c25c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c25d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c25e: mov ecx, esi */
  ecx = esi;
/* d9c260: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd9c265u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d9c265: mov dword ptr [esi], 0xdc1d28 */
  W32((uint32_t)(esi), 0xdc1d28u);
/* d9c26b: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* d9c26e: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* d9c271: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* d9c276: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* d9c279: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* d9c27c: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* d9c27f: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* d9c282: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* d9c285: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* d9c288: mov eax, 0xdc19a0 */
  eax = 0xdc19a0u;
/* d9c28d: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* d9c290: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* d9c293: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* d9c296: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* d9c299: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9c29a: mov dword ptr [esi + 0x70], 0xffffffff */
  W32((uint32_t)(esi + 0x70u), 0xffffffffu);
/* d9c2a1: mov eax, esi */
  eax = esi;
/* d9c2a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c2a4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d9c2d0(void) {
  LOAD_REGS();
L_d9c2d0: /* d9c2d0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d9c2d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c2d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c2d6: xor edi, edi */
  edi = 0;
/* d9c2d8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c2da: mov esi, ecx */
  esi = ecx;
/* d9c2dc: jne 0xd9c2e3 */
  if (!zf) goto L_d9c2e3;
L_d9c2de: /* d9c2de: mov eax, dword ptr [0xde51a8] */
  eax = R32((uint32_t)(0xde51a8u));
L_d9c2e3: /* d9c2e3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d9c2e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c2e8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d9c2ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c2ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c2ee: mov ecx, esi */
  ecx = esi;
/* d9c2f0: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd9c2f5u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d9c2f5: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* d9c2f8: mov dword ptr [esi], 0xdc1e40 */
  W32((uint32_t)(esi), 0xdc1e40u);
/* d9c2fe: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* d9c303: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* d9c306: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* d9c309: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* d9c30c: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* d9c30f: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* d9c312: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* d9c315: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9c316: mov eax, esi */
  eax = esi;
/* d9c318: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c319: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d9c340(void) {
  LOAD_REGS();
L_d9c340: /* d9c340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c342: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c343: mov esi, ecx */
  esi = ecx;
/* d9c345: xor edi, edi */
  edi = 0;
/* d9c347: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c348: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* d9c34c: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xd9c352u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* d9c352: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d9c356: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d9c35a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d9c35d: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* d9c360: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9c363: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* d9c366: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* d9c369: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* d9c36f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* d9c372: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* d9c376: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* d9c37c: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* d9c37f: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* d9c382: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* d9c385: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9c38bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9c38b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d9c38f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d9c393: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* d9c397: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* d9c39a: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* d9c39d: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* d9c3a1: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* d9c3a4: mov dword ptr [esi], 0xdc1f80 */
  W32((uint32_t)(esi), 0xdc1f80u);
/* d9c3aa: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* d9c3ad: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* d9c3b0: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* d9c3b3: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d9c3b7: lea eax, [esi + 0x64] */
  eax = (uint32_t)(esi + 0x64u);
/* d9c3ba: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d9c3bc: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* d9c3c0: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* d9c3c3: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* d9c3c7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* d9c3ca: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* d9c3ce: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* d9c3d1: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* d9c3d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9c3d5: mov dword ptr [esi + 0x74], 1 */
  W32((uint32_t)(esi + 0x74u), 0x1u);
/* d9c3dc: mov eax, esi */
  eax = esi;
/* d9c3de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c3df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d9c3e0: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_d9c420(void) {
  LOAD_REGS();
L_d9c420: /* d9c420: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9c422: push 0xdb9e9b */
  { uint32_t v = 0xdb9e9bu; esp -= 4; W32(esp, v); }
/* d9c427: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9c42d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c42e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9c435: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c436: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d9c43a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* d9c43e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c43f: mov esi, ecx */
  esi = ecx;
/* d9c441: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d9c445: mov dword ptr [esi + 4], 0xdc198c */
  W32((uint32_t)(esi + 0x4u), 0xdc198cu);
/* d9c44c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c44d: xor edi, edi */
  edi = 0;
/* d9c44f: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* d9c452: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* d9c455: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* d9c459: mov dword ptr [esi], 0xdc3028 */
  W32((uint32_t)(esi), 0xdc3028u);
/* d9c45f: mov dword ptr [esi + 4], 0xdc3010 */
  W32((uint32_t)(esi + 0x4u), 0xdc3010u);
/* d9c466: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d9c469: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* d9c46c: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* d9c46f: mov dword ptr [esi + 0x18], 1 */
  W32((uint32_t)(esi + 0x18u), 0x1u);
/* d9c476: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* d9c479: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* d9c47c: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9c482u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9c482: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* d9c485: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* d9c489: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9c48fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9c48f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d9c493: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9c494: mov eax, esi */
  eax = esi;
/* d9c496: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c497: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9c49e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9c4a1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d9c4e0(void) {
  LOAD_REGS();
L_d9c4e0: /* d9c4e0: xor eax, eax */
  eax = 0;
/* d9c4e2: ret  */
  esp += 4; SPILL(); return;
}

void f_d9c500(void) {
  LOAD_REGS();
L_d9c500: /* d9c500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9c501: mov ebp, esp */
  ebp = esp;
/* d9c503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9c505: push 0xdb9ec6 */
  { uint32_t v = 0xdb9ec6u; esp -= 4; W32(esp, v); }
/* d9c50a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9c510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9c518: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9c51b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c51c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c51d: mov esi, ecx */
  esi = ecx;
/* d9c51f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c520: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9c523: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* d9c526: mov dword ptr [esi], 0xdc3028 */
  W32((uint32_t)(esi), 0xdc3028u);
/* d9c52c: mov dword ptr [esi + 4], 0xdc3010 */
  W32((uint32_t)(esi + 0x4u), 0xdc3010u);
/* d9c533: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9c53a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d9c53e: call 0xd820f9 */
  esp -= 4; W32(esp, 0xd9c543u); SPILL(); f_d820f9(); if (g_unwind) return; RELOAD();
/* d9c543: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* d9c546: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9c54d: call 0xd8222f */
  esp -= 4; W32(esp, 0xd9c552u); SPILL(); f_d8222f(); if (g_unwind) return; RELOAD();
/* d9c552: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* d9c555: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* d9c55c: call 0xd82914 */
  esp -= 4; W32(esp, 0xd9c561u); SPILL(); f_d82914(); if (g_unwind) return; RELOAD();
/* d9c561: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9c564: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9c565: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c566: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9c56d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9c56e: mov esp, ebp */
  esp = ebp;
/* d9c570: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9c571: ret  */
  esp += 4; SPILL(); return;
}

void f_d9c572(void) {
  LOAD_REGS();
L_d9c572: /* d9c572: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9c575: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9c57a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9c57d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c57e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9c581: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9c586u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9c586(); return;
}

void f_d9c586(void) {
  LOAD_REGS();
L_d9c586: /* d9c586: push 0xdc30e0 */
  { uint32_t v = 0xdc30e0u; esp -= 4; W32(esp, v); }
/* d9c58b: push 0xde1dd8 */
  { uint32_t v = 0xde1dd8u; esp -= 4; W32(esp, v); }
/* d9c590: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9c596u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9c596: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9c599: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9c59b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9c59d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9c5a2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9c5a2: guest_badaddr(0xd9c5a2); return;
}

void f_d9c5e0(void) {
  LOAD_REGS();
L_d9c5e0: /* d9c5e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c5e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d9c5e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9c5e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c5e9: mov esi, ecx */
  esi = ecx;
/* d9c5eb: je 0xd9c61d */
  if (zf) goto L_d9c61d;
L_d9c5ed: /* d9c5ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d9c5f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c5f1: push 0xd81a0a */
  { uint32_t v = 0xd81a0au; esp -= 4; W32(esp, v); }
/* d9c5f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d9c5f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c5fa: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* d9c5fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c5fd: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd9c602u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d9c602: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9c605: je 0xd9c615 */
  if (zf) goto L_d9c615;
L_d9c607: /* d9c607: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9c60d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9c60f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9c611: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c612: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9c615u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9c615: /* d9c615: mov eax, edi */
  eax = edi;
/* d9c617: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9c618: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c619: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9c61a: ret 4 */
  esp += 8; SPILL(); return;
L_d9c61d: /* d9c61d: mov ecx, esi */
  ecx = esi;
/* d9c61f: call 0xd81a0a */
  esp -= 4; W32(esp, 0xd9c624u); SPILL(); f_d81a0a(); if (g_unwind) return; RELOAD();
/* d9c624: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9c627: je 0xd9c636 */
  if (zf) goto L_d9c636;
L_d9c629: /* d9c629: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9c62e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9c630: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9c632: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c633: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9c636u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9c636: /* d9c636: mov eax, esi */
  eax = esi;
/* d9c638: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c639: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9c63a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9c660(void) {
  LOAD_REGS();
L_d9c660: /* d9c660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9c661: mov ebp, esp */
  ebp = esp;
/* d9c663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9c665: push 0xdb9ef4 */
  { uint32_t v = 0xdb9ef4u; esp -= 4; W32(esp, v); }
/* d9c66a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9c670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9c678: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9c67b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d9c67e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c67f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c680: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c681: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9c684: mov esi, ecx */
  esi = ecx;
/* d9c686: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d9c689: xor ebx, ebx */
  ebx = 0;
/* d9c68b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c68c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c68d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c68e: mov ecx, esi */
  ecx = esi;
/* d9c690: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* d9c693: call 0xd82324 */
  esp -= 4; W32(esp, 0xd9c698u); SPILL(); f_d82324(); if (g_unwind) return; RELOAD();
/* d9c698: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* d9c69b: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* d9c69e: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* d9c6a1: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* d9c6a4: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* d9c6a7: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* d9c6aa: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d9c6ad: mov dword ptr [esi], 0xdc3170 */
  W32((uint32_t)(esi), 0xdc3170u);
/* d9c6b3: mov dword ptr [esi + 4], 0xdc315c */
  W32((uint32_t)(esi + 0x4u), 0xdc315cu);
/* d9c6ba: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* d9c6bd: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* d9c6c0: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* d9c6c3: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
/* d9c6c6: mov dword ptr [esi + 0x4c], ebx */
  W32((uint32_t)(esi + 0x4cu), ebx);
/* d9c6c9: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
/* d9c6cc: mov dword ptr [esi + 0x54], ebx */
  W32((uint32_t)(esi + 0x54u), ebx);
/* d9c6cf: mov dword ptr [esi + 0x58], ebx */
  W32((uint32_t)(esi + 0x58u), ebx);
/* d9c6d2: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd9c6d8u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d9c6d8: test dword ptr [edi + 0x3c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9c6df: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d9c6e3: je 0xd9c70c */
  if (zf) goto L_d9c70c;
L_d9c6e5: /* d9c6e5: call dword ptr [0xde89b8] */
  esp -= 4; W32(esp, 0xd9c6ebu); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9c6eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c6ec: mov ecx, edi */
  ecx = edi;
/* d9c6ee: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9c6f4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9c6f4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c6f6: je 0xd9c70c */
  if (zf) goto L_d9c70c;
L_d9c6f8: /* d9c6f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c6f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c6fa: mov ecx, esi */
  ecx = esi;
/* d9c6fc: call 0xd825c2 */
  esp -= 4; W32(esp, 0xd9c701u); SPILL(); f_d825c2(); if (g_unwind) return; RELOAD();
/* d9c701: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c703: je 0xd9c70c */
  if (zf) goto L_d9c70c;
L_d9c705: /* d9c705: mov eax, 1 */
  eax = 0x1u;
/* d9c70a: jmp 0xd9c70e */
  goto L_d9c70e;
L_d9c70c: /* d9c70c: xor eax, eax */
  eax = 0;
L_d9c70e: /* d9c70e: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* d9c711: test dword ptr [edi + 0x3c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9c718: je 0xd9c741 */
  if (zf) goto L_d9c741;
L_d9c71a: /* d9c71a: call dword ptr [0xde89b8] */
  esp -= 4; W32(esp, 0xd9c720u); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9c720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c721: mov ecx, edi */
  ecx = edi;
/* d9c723: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9c729u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9c729: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c72b: je 0xd9c741 */
  if (zf) goto L_d9c741;
L_d9c72d: /* d9c72d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c72e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c72f: mov ecx, esi */
  ecx = esi;
/* d9c731: call 0xd825c2 */
  esp -= 4; W32(esp, 0xd9c736u); SPILL(); f_d825c2(); if (g_unwind) return; RELOAD();
/* d9c736: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c738: je 0xd9c741 */
  if (zf) goto L_d9c741;
L_d9c73a: /* d9c73a: mov eax, 1 */
  eax = 0x1u;
/* d9c73f: jmp 0xd9c743 */
  goto L_d9c743;
L_d9c741: /* d9c741: xor eax, eax */
  eax = 0;
L_d9c743: /* d9c743: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* d9c746: test dword ptr [edi + 0x3c], 0x10000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9c74d: je 0xd9c776 */
  if (zf) goto L_d9c776;
L_d9c74f: /* d9c74f: call dword ptr [0xde89b8] */
  esp -= 4; W32(esp, 0xd9c755u); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9c755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c756: mov ecx, edi */
  ecx = edi;
/* d9c758: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9c75eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9c75e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c760: je 0xd9c776 */
  if (zf) goto L_d9c776;
L_d9c762: /* d9c762: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c763: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c764: mov ecx, esi */
  ecx = esi;
/* d9c766: call 0xd825c2 */
  esp -= 4; W32(esp, 0xd9c76bu); SPILL(); f_d825c2(); if (g_unwind) return; RELOAD();
/* d9c76b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c76d: je 0xd9c776 */
  if (zf) goto L_d9c776;
L_d9c76f: /* d9c76f: mov eax, 1 */
  eax = 0x1u;
/* d9c774: jmp 0xd9c778 */
  goto L_d9c778;
L_d9c776: /* d9c776: xor eax, eax */
  eax = 0;
L_d9c778: /* d9c778: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* d9c77b: test dword ptr [edi + 0x3c], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9c782: je 0xd9c79e */
  if (zf) goto L_d9c79e;
L_d9c784: /* d9c784: call dword ptr [0xde89b8] */
  esp -= 4; W32(esp, 0xd9c78au); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9c78a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c78b: mov ecx, edi */
  ecx = edi;
/* d9c78d: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9c793u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9c793: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c795: je 0xd9c79e */
  if (zf) goto L_d9c79e;
L_d9c797: /* d9c797: mov eax, 1 */
  eax = 0x1u;
/* d9c79c: jmp 0xd9c7a0 */
  goto L_d9c7a0;
L_d9c79e: /* d9c79e: xor eax, eax */
  eax = 0;
L_d9c7a0: /* d9c7a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9c7a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c7a3: mov ecx, esi */
  ecx = esi;
/* d9c7a5: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* d9c7a8: call 0xd825c2 */
  esp -= 4; W32(esp, 0xd9c7adu); SPILL(); f_d825c2(); if (g_unwind) return; RELOAD();
/* d9c7ad: xor edx, edx */
  edx = 0;
/* d9c7af: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c7b1: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d9c7b4: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* d9c7b7: call dword ptr [0xde89cc] */
  esp -= 4; W32(esp, 0xd9c7bdu); SPILL(); f_4e381e(); if (g_unwind) return; /* Core!?StaticClass@UStructProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9c7bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c7be: mov ecx, edi */
  ecx = edi;
/* d9c7c0: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9c7c6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9c7c6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c7c8: jne 0xd9c7fb */
  if (!zf) goto L_d9c7fb;
L_d9c7ca: /* d9c7ca: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd9c7d0u); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9c7d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c7d1: mov ecx, edi */
  ecx = edi;
/* d9c7d3: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9c7d9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9c7d9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c7db: je 0xd9c7ea */
  if (zf) goto L_d9c7ea;
L_d9c7dd: /* d9c7dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c7de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c7df: mov ecx, esi */
  ecx = esi;
/* d9c7e1: call 0xd825c2 */
  esp -= 4; W32(esp, 0xd9c7e6u); SPILL(); f_d825c2(); if (g_unwind) return; RELOAD();
/* d9c7e6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c7e8: jne 0xd9c7fb */
  if (!zf) goto L_d9c7fb;
L_d9c7ea: /* d9c7ea: cmp dword ptr [esi + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c7ed: jne 0xd9c7fb */
  if (!zf) goto L_d9c7fb;
L_d9c7ef: /* d9c7ef: cmp dword ptr [edi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9c7f3: jle 0xd9c802 */
  if ((zf || sf != of)) goto L_d9c802;
L_d9c7f5: /* d9c7f5: cmp dword ptr [ebp + 0x1c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9c7f9: jne 0xd9c802 */
  if (!zf) goto L_d9c802;
L_d9c7fb: /* d9c7fb: mov dword ptr [esi + 0x10], 1 */
  W32((uint32_t)(esi + 0x10u), 0x1u);
L_d9c802: /* d9c802: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9c805: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9c806: mov eax, esi */
  eax = esi;
/* d9c808: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c809: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9c810: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9c811: mov esp, ebp */
  esp = ebp;
/* d9c813: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9c814: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_d9c817(void) {
  LOAD_REGS();
L_d9c817: /* d9c817: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d9c81a: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9c81f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9c822: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c823: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9c826: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9c82bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9c82b(); return;
}

void f_d9c82b(void) {
  LOAD_REGS();
L_d9c82b: /* d9c82b: push 0xdc3114 */
  { uint32_t v = 0xdc3114u; esp -= 4; W32(esp, v); }
/* d9c830: push 0xde1dd8 */
  { uint32_t v = 0xde1dd8u; esp -= 4; W32(esp, v); }
/* d9c835: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9c83bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9c83b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9c83e: xor ebx, ebx */
  ebx = 0;
/* d9c840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c841: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c842: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9c847u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9c847: guest_badaddr(0xd9c847); return;
}

void f_d9c8d0(void) {
  LOAD_REGS();
L_d9c8d0: /* d9c8d0: mov eax, 1 */
  eax = 0x1u;
/* d9c8d5: ret  */
  esp += 4; SPILL(); return;
}

void f_d9c8f0(void) {
  LOAD_REGS();
L_d9c8f0: /* d9c8f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9c8f2: push 0xdb9f18 */
  { uint32_t v = 0xdb9f18u; esp -= 4; W32(esp, v); }
/* d9c8f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9c8fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c8fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9c905: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c906: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c907: mov esi, ecx */
  esi = ecx;
/* d9c909: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d9c90d: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* d9c910: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9c918: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9c91eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9c91e: mov ecx, esi */
  ecx = esi;
/* d9c920: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9c928: call 0xd81a0a */
  esp -= 4; W32(esp, 0xd9c92du); SPILL(); f_d81a0a(); if (g_unwind) return; RELOAD();
/* d9c92d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9c931: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c932: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9c939: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9c93c: ret  */
  esp += 4; SPILL(); return;
}

void f_d9c960(void) {
  LOAD_REGS();
L_d9c960: /* d9c960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9c961: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d9c965: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9c968: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c969: mov esi, ecx */
  esi = ecx;
/* d9c96b: je 0xd9c9a0 */
  if (zf) goto L_d9c9a0;
L_d9c96d: /* d9c96d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d9c970: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c971: push 0xd813a2 */
  { uint32_t v = 0xd813a2u; esp -= 4; W32(esp, v); }
/* d9c976: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d9c979: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c97a: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9c97f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c980: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd9c985u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d9c985: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9c988: je 0xd9c998 */
  if (zf) goto L_d9c998;
L_d9c98a: /* d9c98a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9c990: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9c992: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9c994: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9c995: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9c998u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9c998: /* d9c998: mov eax, edi */
  eax = edi;
/* d9c99a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9c99b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c99c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9c99d: ret 4 */
  esp += 8; SPILL(); return;
L_d9c9a0: /* d9c9a0: mov ecx, esi */
  ecx = esi;
/* d9c9a2: call 0xd813a2 */
  esp -= 4; W32(esp, 0xd9c9a7u); SPILL(); f_d813a2(); if (g_unwind) return; RELOAD();
/* d9c9a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9c9aa: je 0xd9c9b9 */
  if (zf) goto L_d9c9b9;
L_d9c9ac: /* d9c9ac: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9c9b1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9c9b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9c9b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c9b6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9c9b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9c9b9: /* d9c9b9: mov eax, esi */
  eax = esi;
/* d9c9bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9c9bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9c9bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9c9e0(void) {
  LOAD_REGS();
L_d9c9e0: /* d9c9e0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d9c9e4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d9c9e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9c9e9: mov esi, ecx */
  esi = ecx;
/* d9c9eb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d9c9ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9c9f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9c9f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9c9f2: mov ecx, esi */
  ecx = esi;
/* d9c9f4: call 0xd82324 */
  esp -= 4; W32(esp, 0xd9c9f9u); SPILL(); f_d82324(); if (g_unwind) return; RELOAD();
/* d9c9f9: mov dword ptr [esi], 0xdc3248 */
  W32((uint32_t)(esi), 0xdc3248u);
/* d9c9ff: mov dword ptr [esi + 4], 0xdc3234 */
  W32((uint32_t)(esi + 0x4u), 0xdc3234u);
/* d9ca06: mov eax, esi */
  eax = esi;
/* d9ca08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9ca09: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d9ca20(void) {
  LOAD_REGS();
L_d9ca20: /* d9ca20: jmp 0xd81a0a */
  SPILL(); f_d81a0a(); return;
}

void f_d9ca40(void) {
  LOAD_REGS();
L_d9ca40: /* d9ca40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9ca41: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d9ca45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9ca48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9ca49: mov esi, ecx */
  esi = ecx;
/* d9ca4b: je 0xd9ca7d */
  if (zf) goto L_d9ca7d;
L_d9ca4d: /* d9ca4d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d9ca50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9ca51: push 0xd81758 */
  { uint32_t v = 0xd81758u; esp -= 4; W32(esp, v); }
/* d9ca56: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d9ca59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ca5a: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* d9ca5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9ca5d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd9ca62u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d9ca62: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9ca65: je 0xd9ca75 */
  if (zf) goto L_d9ca75;
L_d9ca67: /* d9ca67: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9ca6d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9ca6f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ca71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9ca72: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9ca75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9ca75: /* d9ca75: mov eax, edi */
  eax = edi;
/* d9ca77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9ca78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9ca79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9ca7a: ret 4 */
  esp += 8; SPILL(); return;
L_d9ca7d: /* d9ca7d: mov ecx, esi */
  ecx = esi;
/* d9ca7f: call 0xd81758 */
  esp -= 4; W32(esp, 0xd9ca84u); SPILL(); f_d81758(); if (g_unwind) return; RELOAD();
/* d9ca84: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9ca87: je 0xd9ca96 */
  if (zf) goto L_d9ca96;
L_d9ca89: /* d9ca89: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9ca8e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9ca90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ca92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9ca93: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9ca96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9ca96: /* d9ca96: mov eax, esi */
  eax = esi;
/* d9ca98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9ca99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9ca9a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9cac0(void) {
  LOAD_REGS();
L_d9cac0: /* d9cac0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9cac2: push 0xdb9f38 */
  { uint32_t v = 0xdb9f38u; esp -= 4; W32(esp, v); }
/* d9cac7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9cacd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cace: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9cad5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9cad6: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d9cada: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d9cade: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9cadf: mov esi, ecx */
  esi = ecx;
/* d9cae1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d9cae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cae6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9cae7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9cae8: mov ecx, esi */
  ecx = esi;
/* d9caea: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* d9caee: call 0xd82324 */
  esp -= 4; W32(esp, 0xd9caf3u); SPILL(); f_d82324(); if (g_unwind) return; RELOAD();
/* d9caf3: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d9caf7: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* d9cafa: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d9cafe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9cb00: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9cb08: mov dword ptr [esi], 0xdc3318 */
  W32((uint32_t)(esi), 0xdc3318u);
/* d9cb0e: mov dword ptr [esi + 4], 0xdc3300 */
  W32((uint32_t)(esi + 0x4u), 0xdc3300u);
/* d9cb15: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* d9cb18: jne 0xd9cb32 */
  if (!zf) goto L_d9cb32;
L_d9cb1a: /* d9cb1a: push 0x887 */
  { uint32_t v = 0x887u; esp -= 4; W32(esp, v); }
/* d9cb1f: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* d9cb24: push 0xde3638 */
  { uint32_t v = 0xde3638u; esp -= 4; W32(esp, v); }
/* d9cb29: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9cb2fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9cb2f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9cb32: /* d9cb32: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9cb36: mov eax, esi */
  eax = esi;
/* d9cb38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9cb39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9cb40: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9cb43: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_d9cb80(void) {
  LOAD_REGS();
L_d9cb80: /* d9cb80: jmp 0xd81a0a */
  SPILL(); f_d81a0a(); return;
}

void f_d9cba0(void) {
  LOAD_REGS();
L_d9cba0: /* d9cba0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9cba1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d9cba5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9cba9: mov esi, ecx */
  esi = ecx;
/* d9cbab: je 0xd9cbdd */
  if (zf) goto L_d9cbdd;
L_d9cbad: /* d9cbad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d9cbb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9cbb1: push 0xd818fc */
  { uint32_t v = 0xd818fcu; esp -= 4; W32(esp, v); }
/* d9cbb6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d9cbb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cbba: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* d9cbbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9cbbd: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd9cbc2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d9cbc2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cbc5: je 0xd9cbd5 */
  if (zf) goto L_d9cbd5;
L_d9cbc7: /* d9cbc7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9cbcd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9cbcf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9cbd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9cbd2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9cbd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9cbd5: /* d9cbd5: mov eax, edi */
  eax = edi;
/* d9cbd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9cbd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9cbd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9cbda: ret 4 */
  esp += 8; SPILL(); return;
L_d9cbdd: /* d9cbdd: mov ecx, esi */
  ecx = esi;
/* d9cbdf: call 0xd818fc */
  esp -= 4; W32(esp, 0xd9cbe4u); SPILL(); f_d818fc(); if (g_unwind) return; RELOAD();
/* d9cbe4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cbe7: je 0xd9cbf6 */
  if (zf) goto L_d9cbf6;
L_d9cbe9: /* d9cbe9: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9cbee: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9cbf0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9cbf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9cbf3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9cbf6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9cbf6: /* d9cbf6: mov eax, esi */
  eax = esi;
/* d9cbf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9cbf9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9cbfa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9cc20(void) {
  LOAD_REGS();
L_d9cc20: /* d9cc20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9cc22: push 0xdb9f6c */
  { uint32_t v = 0xdb9f6cu; esp -= 4; W32(esp, v); }
/* d9cc27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9cc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cc2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9cc35: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9cc38: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* d9cc3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9cc3d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9cc3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9cc3f: mov edi, ecx */
  edi = ecx;
/* d9cc41: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* d9cc45: xor ebp, ebp */
  ebp = 0;
/* d9cc47: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9cc48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cc49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9cc4a: mov ecx, edi */
  ecx = edi;
/* d9cc4c: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* d9cc50: call 0xd82324 */
  esp -= 4; W32(esp, 0xd9cc55u); SPILL(); f_d82324(); if (g_unwind) return; RELOAD();
/* d9cc55: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* d9cc59: lea ebx, [edi + 0x48] */
  ebx = (uint32_t)(edi + 0x48u);
/* d9cc5c: mov ecx, ebx */
  ecx = ebx;
/* d9cc5e: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* d9cc62: mov dword ptr [edi], 0xdc33e8 */
  W32((uint32_t)(edi), 0xdc33e8u);
/* d9cc68: mov dword ptr [edi + 4], 0xdc33d0 */
  W32((uint32_t)(edi + 0x4u), 0xdc33d0u);
/* d9cc6f: mov dword ptr [edi + 0x3c], edx */
  W32((uint32_t)(edi + 0x3cu), edx);
/* d9cc72: mov dword ptr [edi + 0x40], ebp */
  W32((uint32_t)(edi + 0x40u), ebp);
/* d9cc75: mov dword ptr [edi + 0x44], ebp */
  W32((uint32_t)(edi + 0x44u), ebp);
/* d9cc78: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd9cc7eu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d9cc7e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9cc81: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* d9cc84: mov eax, dword ptr [ecx + 0x498] */
  eax = R32((uint32_t)(ecx + 0x498u));
/* d9cc8a: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cc8c: mov byte ptr [esp + 0x2c], 1 */
  W8((uint32_t)(esp + 0x2cu), 0x1u);
/* d9cc91: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* d9cc95: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* d9cc99: jne 0xd9cca4 */
  if (!zf) goto L_d9cca4;
L_d9cc9b: /* d9cc9b: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cc9e: jne 0xd9ce12 */
  if (!zf) goto L_d9ce12;
L_d9cca4: /* d9cca4: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d9cca8: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9ccaeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9ccae: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* d9ccb3: call dword ptr [0xde8a28] */
  esp -= 4; W32(esp, 0xd9ccb9u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* d9ccb9: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9ccbb: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* d9ccbf: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* d9ccc7: jne 0xd9cce1 */
  if (!zf) goto L_d9cce1;
L_d9ccc9: /* d9ccc9: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* d9ccce: push 0xde35e8 */
  { uint32_t v = 0xde35e8u; esp -= 4; W32(esp, v); }
/* d9ccd3: push 0xde35e0 */
  { uint32_t v = 0xde35e0u; esp -= 4; W32(esp, v); }
/* d9ccd8: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9ccdeu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9ccde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9cce1: /* d9cce1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9cce2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d9cce6: call 0xd821da */
  esp -= 4; W32(esp, 0xd9ccebu); SPILL(); f_d821da(); if (g_unwind) return; RELOAD();
/* d9cceb: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
/* d9ccf0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d9ccf3: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* d9ccf7: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9ccf9: jge 0xd9cd7a */
  if ((sf == of)) goto L_d9cd7a;
L_d9ccfb: /* d9ccfb: jmp 0xd9cd00 */
  goto L_d9cd00;
L_d9cd00: /* d9cd00: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9cd02: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9cd05: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* d9cd08: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* d9cd0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9cd0c: call dword ptr [0xde8a24] */
  esp -= 4; W32(esp, 0xd9cd12u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* d9cd12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9cd14: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
/* d9cd19: je 0xd9cd4a */
  if (zf) goto L_d9cd4a;
L_d9cd1b: /* d9cd1b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9cd1d: mov ebp, dword ptr [ecx + esi*4] */
  ebp = R32((uint32_t)(ecx + esi*4));
/* d9cd20: mov ecx, dword ptr [ebp + 0x498] */
  ecx = R32((uint32_t)(ebp + 0x498u));
/* d9cd26: test ch, 0x10 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cd29: je 0xd9cd4a */
  if (zf) goto L_d9cd4a;
L_d9cd2b: /* d9cd2b: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cd2e: jne 0xd9cd4a */
  if (!zf) goto L_d9cd4a;
L_d9cd30: /* d9cd30: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9cd32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9cd34: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* d9cd38: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9cd3eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9cd3e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* d9cd42: mov dword ptr [edx + eax*4], ebp */
  W32((uint32_t)(edx + eax*4), ebp);
/* d9cd45: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
L_d9cd4a: /* d9cd4a: xor ebp, ebp */
  ebp = 0;
/* d9cd4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d9cd50: /* d9cd50: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d9cd53: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d9cd54: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9cd56: jge 0xd9cd7a */
  if ((sf == of)) goto L_d9cd7a;
L_d9cd58: /* d9cd58: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9cd5a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* d9cd5d: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9cd5f: je 0xd9cd50 */
  if (zf) goto L_d9cd50;
L_d9cd61: /* d9cd61: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d9cd65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9cd66: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9cd6cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9cd6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9cd6e: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
/* d9cd73: je 0xd9cd50 */
  if (zf) goto L_d9cd50;
L_d9cd75: /* d9cd75: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9cd78: jl 0xd9cd00 */
  if ((sf != of)) goto L_d9cd00;
L_d9cd7a: /* d9cd7a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d9cd7e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d9cd82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cd83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9cd84: call 0xd826a8 */
  esp -= 4; W32(esp, 0xd9cd89u); SPILL(); f_d826a8(); if (g_unwind) return; RELOAD();
/* d9cd89: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* d9cd8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9cd90: xor esi, esi */
  esi = 0;
/* d9cd92: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9cd94: jle 0xd9cde8 */
  if ((zf || sf != of)) goto L_d9cde8;
L_d9cd96: /* d9cd96: cmp dword ptr [esp + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9cd9a: jne 0xd9cdba */
  if (!zf) goto L_d9cdba;
L_d9cd9c: /* d9cd9c: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* d9cda0: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* d9cda3: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9cda9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9cda9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cdaa: mov ecx, ebx */
  ecx = ebx;
/* d9cdac: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xd9cdb2u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* d9cdb2: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
L_d9cdba: /* d9cdba: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d9cdbe: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* d9cdc1: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9cdc7u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9cdc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cdc8: mov ecx, 0xde4f60 */
  ecx = 0xde4f60u;
/* d9cdcd: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd9cdd3u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d9cdd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9cdd5: je 0xd9cddf */
  if (zf) goto L_d9cddf;
L_d9cdd7: /* d9cdd7: mov dword ptr [esp + 0x38], 1 */
  W32((uint32_t)(esp + 0x38u), 0x1u);
L_d9cddf: /* d9cddf: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d9cde3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d9cde4: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9cde6: jl 0xd9cd96 */
  if ((sf != of)) goto L_d9cd96;
L_d9cde8: /* d9cde8: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d9cdec: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* d9cdf1: call 0xd82397 */
  esp -= 4; W32(esp, 0xd9cdf6u); SPILL(); f_d82397(); if (g_unwind) return; RELOAD();
/* d9cdf6: cmp dword ptr [esp + 0x38], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9cdfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9cdfb: je 0xd9ce0c */
  if (zf) goto L_d9ce0c;
L_d9cdfd: /* d9cdfd: push 0xde4f60 */
  { uint32_t v = 0xde4f60u; esp -= 4; W32(esp, v); }
/* d9ce02: mov ecx, ebx */
  ecx = ebx;
/* d9ce04: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd9ce0au); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d9ce0a: jmp 0xd9ce27 */
  goto L_d9ce27;
L_d9ce0c: /* d9ce0c: cmp dword ptr [esp + 0x38], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9ce10: jne 0xd9ce27 */
  if (!zf) goto L_d9ce27;
L_d9ce12: /* d9ce12: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* d9ce15: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* d9ce18: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9ce1eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9ce1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ce1f: mov ecx, ebx */
  ecx = ebx;
/* d9ce21: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xd9ce27u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_d9ce27: /* d9ce27: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* d9ce2b: mov eax, edi */
  eax = edi;
/* d9ce2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9ce2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9ce2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9ce30: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9ce37: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9ce3a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d9ccfd(void) {
  LOAD_REGS();
L_d9ccfd: /* d9ccfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d9cd00: /* d9cd00: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9cd02: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9cd05: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* d9cd08: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* d9cd0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9cd0c: call dword ptr [0xde8a24] */
  esp -= 4; W32(esp, 0xd9cd12u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* d9cd12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9cd14: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
/* d9cd19: je 0xd9cd4a */
  if (zf) goto L_d9cd4a;
L_d9cd1b: /* d9cd1b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9cd1d: mov ebp, dword ptr [ecx + esi*4] */
  ebp = R32((uint32_t)(ecx + esi*4));
/* d9cd20: mov ecx, dword ptr [ebp + 0x498] */
  ecx = R32((uint32_t)(ebp + 0x498u));
/* d9cd26: test ch, 0x10 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cd29: je 0xd9cd4a */
  if (zf) goto L_d9cd4a;
L_d9cd2b: /* d9cd2b: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cd2e: jne 0xd9cd4a */
  if (!zf) goto L_d9cd4a;
L_d9cd30: /* d9cd30: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9cd32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9cd34: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* d9cd38: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9cd3eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9cd3e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* d9cd42: mov dword ptr [edx + eax*4], ebp */
  W32((uint32_t)(edx + eax*4), ebp);
/* d9cd45: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
L_d9cd4a: /* d9cd4a: xor ebp, ebp */
  ebp = 0;
/* d9cd4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d9cd50: /* d9cd50: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d9cd53: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d9cd54: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9cd56: jge 0xd9cd7a */
  if ((sf == of)) goto L_d9cd7a;
L_d9cd58: /* d9cd58: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9cd5a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* d9cd5d: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9cd5f: je 0xd9cd50 */
  if (zf) goto L_d9cd50;
L_d9cd61: /* d9cd61: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d9cd65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9cd66: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9cd6cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9cd6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9cd6e: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
/* d9cd73: je 0xd9cd50 */
  if (zf) goto L_d9cd50;
L_d9cd75: /* d9cd75: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9cd78: jl 0xd9cd00 */
  if ((sf != of)) goto L_d9cd00;
L_d9cd7a: /* d9cd7a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d9cd7e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d9cd82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cd83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9cd84: call 0xd826a8 */
  esp -= 4; W32(esp, 0xd9cd89u); SPILL(); f_d826a8(); if (g_unwind) return; RELOAD();
/* d9cd89: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* d9cd8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9cd90: xor esi, esi */
  esi = 0;
/* d9cd92: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9cd94: jle 0xd9cde8 */
  if ((zf || sf != of)) goto L_d9cde8;
L_d9cd96: /* d9cd96: cmp dword ptr [esp + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9cd9a: jne 0xd9cdba */
  if (!zf) goto L_d9cdba;
L_d9cd9c: /* d9cd9c: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* d9cda0: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* d9cda3: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9cda9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9cda9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cdaa: mov ecx, ebx */
  ecx = ebx;
/* d9cdac: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xd9cdb2u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* d9cdb2: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
L_d9cdba: /* d9cdba: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d9cdbe: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* d9cdc1: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9cdc7u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9cdc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cdc8: mov ecx, 0xde4f60 */
  ecx = 0xde4f60u;
/* d9cdcd: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd9cdd3u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d9cdd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9cdd5: je 0xd9cddf */
  if (zf) goto L_d9cddf;
L_d9cdd7: /* d9cdd7: mov dword ptr [esp + 0x38], 1 */
  W32((uint32_t)(esp + 0x38u), 0x1u);
L_d9cddf: /* d9cddf: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d9cde3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d9cde4: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9cde6: jl 0xd9cd96 */
  if ((sf != of)) goto L_d9cd96;
L_d9cde8: /* d9cde8: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d9cdec: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* d9cdf1: call 0xd82397 */
  esp -= 4; W32(esp, 0xd9cdf6u); SPILL(); f_d82397(); if (g_unwind) return; RELOAD();
/* d9cdf6: cmp dword ptr [esp + 0x38], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9cdfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9cdfb: je 0xd9ce0c */
  if (zf) goto L_d9ce0c;
L_d9cdfd: /* d9cdfd: push 0xde4f60 */
  { uint32_t v = 0xde4f60u; esp -= 4; W32(esp, v); }
/* d9ce02: mov ecx, ebx */
  ecx = ebx;
/* d9ce04: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd9ce0au); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d9ce0a: jmp 0xd9ce27 */
  goto L_d9ce27;
L_d9ce0c: /* d9ce0c: cmp dword ptr [esp + 0x38], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9ce10: jne 0xd9ce27 */
  if (!zf) goto L_d9ce27;
L_d9ce12: /* d9ce12: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* d9ce15: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* d9ce18: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9ce1eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9ce1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ce1f: mov ecx, ebx */
  ecx = ebx;
/* d9ce21: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xd9ce27u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_d9ce27: /* d9ce27: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* d9ce2b: mov eax, edi */
  eax = edi;
/* d9ce2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9ce2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9ce2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9ce30: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9ce37: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9ce3a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d9ced0(void) {
  LOAD_REGS();
L_d9ced0: /* d9ced0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9ced2: push 0xdb9f88 */
  { uint32_t v = 0xdb9f88u; esp -= 4; W32(esp, v); }
/* d9ced7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9cedd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cede: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9cee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9cee6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9cee7: mov esi, ecx */
  esi = ecx;
/* d9cee9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d9ceed: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* d9cef0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9cef8: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9cefeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9cefe: mov ecx, esi */
  ecx = esi;
/* d9cf00: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9cf08: call 0xd81a0a */
  esp -= 4; W32(esp, 0xd9cf0du); SPILL(); f_d81a0a(); if (g_unwind) return; RELOAD();
/* d9cf0d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9cf11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9cf12: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9cf19: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9cf1c: ret  */
  esp += 4; SPILL(); return;
}

void f_d9cf40(void) {
  LOAD_REGS();
L_d9cf40: /* d9cf40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9cf41: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d9cf45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cf48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9cf49: mov esi, ecx */
  esi = ecx;
/* d9cf4b: je 0xd9cf7d */
  if (zf) goto L_d9cf7d;
L_d9cf4d: /* d9cf4d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d9cf50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9cf51: push 0xd820c7 */
  { uint32_t v = 0xd820c7u; esp -= 4; W32(esp, v); }
/* d9cf56: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d9cf59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cf5a: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* d9cf5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9cf5d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd9cf62u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d9cf62: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cf65: je 0xd9cf75 */
  if (zf) goto L_d9cf75;
L_d9cf67: /* d9cf67: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9cf6d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9cf6f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9cf71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9cf72: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9cf75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9cf75: /* d9cf75: mov eax, edi */
  eax = edi;
/* d9cf77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9cf78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9cf79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9cf7a: ret 4 */
  esp += 8; SPILL(); return;
L_d9cf7d: /* d9cf7d: mov ecx, esi */
  ecx = esi;
/* d9cf7f: call 0xd820c7 */
  esp -= 4; W32(esp, 0xd9cf84u); SPILL(); f_d820c7(); if (g_unwind) return; RELOAD();
/* d9cf84: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9cf87: je 0xd9cf96 */
  if (zf) goto L_d9cf96;
L_d9cf89: /* d9cf89: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9cf8e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9cf90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9cf92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9cf93: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9cf96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9cf96: /* d9cf96: mov eax, esi */
  eax = esi;
/* d9cf98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9cf99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9cf9a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9cfc0(void) {
  LOAD_REGS();
L_d9cfc0: /* d9cfc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9cfc2: push 0xdb9fa8 */
  { uint32_t v = 0xdb9fa8u; esp -= 4; W32(esp, v); }
/* d9cfc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9cfcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cfce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9cfd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9cfd6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d9cfda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9cfdb: mov esi, ecx */
  esi = ecx;
/* d9cfdd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d9cfe1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9cfe3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9cfe4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9cfe5: mov ecx, esi */
  ecx = esi;
/* d9cfe7: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* d9cfeb: call 0xd82324 */
  esp -= 4; W32(esp, 0xd9cff0u); SPILL(); f_d82324(); if (g_unwind) return; RELOAD();
/* d9cff0: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* d9cff4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9cff5: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* d9cff8: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* d9d000: mov dword ptr [esi], 0xdc34b8 */
  W32((uint32_t)(esi), 0xdc34b8u);
/* d9d006: mov dword ptr [esi + 4], 0xdc34a0 */
  W32((uint32_t)(esi + 0x4u), 0xdc34a0u);
/* d9d00d: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd9d013u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d9d013: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d9d017: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9d01b: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* d9d01e: mov dword ptr [esi + 0x4c], 0 */
  W32((uint32_t)(esi + 0x4cu), 0x0u);
/* d9d025: mov eax, esi */
  eax = esi;
/* d9d027: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d028: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9d02f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d032: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d9d060(void) {
  LOAD_REGS();
L_d9d060: /* d9d060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9d062: push 0xdb9fc8 */
  { uint32_t v = 0xdb9fc8u; esp -= 4; W32(esp, v); }
/* d9d067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9d06d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d06e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9d075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d077: mov esi, ecx */
  esi = ecx;
/* d9d079: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d9d07d: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* d9d080: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9d088: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9d08eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9d08e: mov ecx, esi */
  ecx = esi;
/* d9d090: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9d098: call 0xd81a0a */
  esp -= 4; W32(esp, 0xd9d09du); SPILL(); f_d81a0a(); if (g_unwind) return; RELOAD();
/* d9d09d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9d0a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d0a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9d0a9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d0ac: ret  */
  esp += 4; SPILL(); return;
}

void f_d9d0d0(void) {
  LOAD_REGS();
L_d9d0d0: /* d9d0d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9d0d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d9d0d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d0d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d0d9: mov esi, ecx */
  esi = ecx;
/* d9d0db: je 0xd9d10d */
  if (zf) goto L_d9d10d;
L_d9d0dd: /* d9d0dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d9d0e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d0e1: push 0xd81da7 */
  { uint32_t v = 0xd81da7u; esp -= 4; W32(esp, v); }
/* d9d0e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d9d0e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d0ea: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* d9d0ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d0ed: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd9d0f2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d9d0f2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d0f5: je 0xd9d105 */
  if (zf) goto L_d9d105;
L_d9d0f7: /* d9d0f7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9d0fd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9d0ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9d101: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d102: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9d105u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9d105: /* d9d105: mov eax, edi */
  eax = edi;
/* d9d107: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9d108: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d109: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9d10a: ret 4 */
  esp += 8; SPILL(); return;
L_d9d10d: /* d9d10d: mov ecx, esi */
  ecx = esi;
/* d9d10f: call 0xd81da7 */
  esp -= 4; W32(esp, 0xd9d114u); SPILL(); f_d81da7(); if (g_unwind) return; RELOAD();
/* d9d114: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d117: je 0xd9d126 */
  if (zf) goto L_d9d126;
L_d9d119: /* d9d119: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9d11e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9d120: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9d122: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d123: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9d126u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9d126: /* d9d126: mov eax, esi */
  eax = esi;
/* d9d128: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d129: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9d12a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9d150(void) {
  LOAD_REGS();
L_d9d150: /* d9d150: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9d152: push 0xdb9fe8 */
  { uint32_t v = 0xdb9fe8u; esp -= 4; W32(esp, v); }
/* d9d157: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9d15d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d15e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9d165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d166: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d9d16a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d9d16e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d16f: mov esi, ecx */
  esi = ecx;
/* d9d171: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* d9d175: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d176: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d9d17a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d17b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9d17c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d17d: mov ecx, esi */
  ecx = esi;
/* d9d17f: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* d9d183: call 0xd81735 */
  esp -= 4; W32(esp, 0xd9d188u); SPILL(); f_d81735(); if (g_unwind) return; RELOAD();
/* d9d188: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* d9d18c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* d9d190: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* d9d193: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* d9d196: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9d19e: mov dword ptr [esi], 0xdc3588 */
  W32((uint32_t)(esi), 0xdc3588u);
/* d9d1a4: mov dword ptr [esi + 4], 0xdc3570 */
  W32((uint32_t)(esi + 0x4u), 0xdc3570u);
/* d9d1ab: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* d9d1ae: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9d1b4u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9d1b4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9d1b8: mov eax, esi */
  eax = esi;
/* d9d1ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d1bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9d1c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d1c5: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_d9d1f0(void) {
  LOAD_REGS();
L_d9d1f0: /* d9d1f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9d1f2: push 0xdba008 */
  { uint32_t v = 0xdba008u; esp -= 4; W32(esp, v); }
/* d9d1f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9d1fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d1fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9d205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d206: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d207: mov esi, ecx */
  esi = ecx;
/* d9d209: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d9d20d: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* d9d210: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9d218: call 0xd82397 */
  esp -= 4; W32(esp, 0xd9d21du); SPILL(); f_d82397(); if (g_unwind) return; RELOAD();
/* d9d21d: mov ecx, esi */
  ecx = esi;
/* d9d21f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9d227: call 0xd81da7 */
  esp -= 4; W32(esp, 0xd9d22cu); SPILL(); f_d81da7(); if (g_unwind) return; RELOAD();
/* d9d22c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9d230: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d231: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9d238: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d23b: ret  */
  esp += 4; SPILL(); return;
}

void f_d9d260(void) {
  LOAD_REGS();
L_d9d260: /* d9d260: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9d261: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d9d265: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d269: mov esi, ecx */
  esi = ecx;
/* d9d26b: je 0xd9d29d */
  if (zf) goto L_d9d29d;
L_d9d26d: /* d9d26d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d9d270: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d271: push 0xd8251d */
  { uint32_t v = 0xd8251du; esp -= 4; W32(esp, v); }
/* d9d276: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d9d279: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d27a: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* d9d27c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d27d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd9d282u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d9d282: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d285: je 0xd9d295 */
  if (zf) goto L_d9d295;
L_d9d287: /* d9d287: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9d28d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9d28f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9d291: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d292: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9d295u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9d295: /* d9d295: mov eax, edi */
  eax = edi;
/* d9d297: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9d298: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d299: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9d29a: ret 4 */
  esp += 8; SPILL(); return;
L_d9d29d: /* d9d29d: mov ecx, esi */
  ecx = esi;
/* d9d29f: call 0xd8251d */
  esp -= 4; W32(esp, 0xd9d2a4u); SPILL(); f_d8251d(); if (g_unwind) return; RELOAD();
/* d9d2a4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d2a7: je 0xd9d2b6 */
  if (zf) goto L_d9d2b6;
L_d9d2a9: /* d9d2a9: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9d2ae: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9d2b0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9d2b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d2b3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9d2b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9d2b6: /* d9d2b6: mov eax, esi */
  eax = esi;
/* d9d2b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d2b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9d2ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9d2e0(void) {
  LOAD_REGS();
L_d9d2e0: /* d9d2e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9d2e2: push 0xdba028 */
  { uint32_t v = 0xdba028u; esp -= 4; W32(esp, v); }
/* d9d2e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9d2ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d2ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9d2f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d2f6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d9d2fa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d9d2fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d2ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d300: mov esi, ecx */
  esi = ecx;
/* d9d302: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* d9d306: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* d9d30b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d30c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9d30d: mov ecx, esi */
  ecx = esi;
/* d9d30f: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* d9d313: call 0xd81735 */
  esp -= 4; W32(esp, 0xd9d318u); SPILL(); f_d81735(); if (g_unwind) return; RELOAD();
/* d9d318: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d9d31c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d31d: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* d9d320: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* d9d328: mov dword ptr [esi], 0xdc3658 */
  W32((uint32_t)(esi), 0xdc3658u);
/* d9d32e: mov dword ptr [esi + 4], 0xdc3644 */
  W32((uint32_t)(esi + 0x4u), 0xdc3644u);
/* d9d335: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd9d33bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d9d33b: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* d9d33f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* d9d343: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* d9d346: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9d34a: mov dword ptr [esi + 0x60], 0 */
  W32((uint32_t)(esi + 0x60u), 0x0u);
/* d9d351: mov dword ptr [esi + 0x64], 0 */
  W32((uint32_t)(esi + 0x64u), 0x0u);
/* d9d358: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* d9d35b: mov eax, esi */
  eax = esi;
/* d9d35d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d35e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9d365: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d368: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_d9d3a0(void) {
  LOAD_REGS();
L_d9d3a0: /* d9d3a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9d3a2: push 0xdba048 */
  { uint32_t v = 0xdba048u; esp -= 4; W32(esp, v); }
/* d9d3a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9d3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d3ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9d3b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d3b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d3b7: mov esi, ecx */
  esi = ecx;
/* d9d3b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d9d3bd: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* d9d3c0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9d3c8: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9d3ceu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9d3ce: mov ecx, esi */
  ecx = esi;
/* d9d3d0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9d3d8: call 0xd81da7 */
  esp -= 4; W32(esp, 0xd9d3ddu); SPILL(); f_d81da7(); if (g_unwind) return; RELOAD();
/* d9d3dd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9d3e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d3e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9d3e9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d3ec: ret  */
  esp += 4; SPILL(); return;
}

void f_d9d410(void) {
  LOAD_REGS();
L_d9d410: /* d9d410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9d411: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d9d415: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d418: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d419: mov esi, ecx */
  esi = ecx;
/* d9d41b: je 0xd9d44d */
  if (zf) goto L_d9d44d;
L_d9d41d: /* d9d41d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d9d420: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d421: push 0xd81b1d */
  { uint32_t v = 0xd81b1du; esp -= 4; W32(esp, v); }
/* d9d426: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d9d429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d42a: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* d9d42c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d42d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd9d432u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d9d432: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d435: je 0xd9d445 */
  if (zf) goto L_d9d445;
L_d9d437: /* d9d437: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9d43d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9d43f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9d441: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d442: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9d445u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9d445: /* d9d445: mov eax, edi */
  eax = edi;
/* d9d447: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9d448: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d449: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9d44a: ret 4 */
  esp += 8; SPILL(); return;
L_d9d44d: /* d9d44d: mov ecx, esi */
  ecx = esi;
/* d9d44f: call 0xd81b1d */
  esp -= 4; W32(esp, 0xd9d454u); SPILL(); f_d81b1d(); if (g_unwind) return; RELOAD();
/* d9d454: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d457: je 0xd9d466 */
  if (zf) goto L_d9d466;
L_d9d459: /* d9d459: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9d45e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9d460: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9d462: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d463: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9d466u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9d466: /* d9d466: mov eax, esi */
  eax = esi;
/* d9d468: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d469: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9d46a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9d490(void) {
  LOAD_REGS();
L_d9d490: /* d9d490: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9d492: push 0xdba068 */
  { uint32_t v = 0xdba068u; esp -= 4; W32(esp, v); }
/* d9d497: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9d49d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d49e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9d4a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d4a6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d9d4aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d4ab: mov esi, ecx */
  esi = ecx;
/* d9d4ad: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d9d4b1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9d4b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d4b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d4b5: mov ecx, esi */
  ecx = esi;
/* d9d4b7: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* d9d4bb: call 0xd82324 */
  esp -= 4; W32(esp, 0xd9d4c0u); SPILL(); f_d82324(); if (g_unwind) return; RELOAD();
/* d9d4c0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d9d4c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9d4c5: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* d9d4c8: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* d9d4d0: mov dword ptr [esi], 0xdc3728 */
  W32((uint32_t)(esi), 0xdc3728u);
/* d9d4d6: mov dword ptr [esi + 4], 0xdc3710 */
  W32((uint32_t)(esi + 0x4u), 0xdc3710u);
/* d9d4dd: call dword ptr [0xde8a40] */
  esp -= 4; W32(esp, 0xd9d4e3u); SPILL(); f_4e2dec(); if (g_unwind) return; /* Core!??0FPreferencesInfo@@QAE@ABV0@@Z */ RELOAD();
/* d9d4e3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9d4e7: mov eax, esi */
  eax = esi;
/* d9d4e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d4ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9d4f1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d4f4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d9d520(void) {
  LOAD_REGS();
L_d9d520: /* d9d520: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9d522: push 0xdba088 */
  { uint32_t v = 0xdba088u; esp -= 4; W32(esp, v); }
/* d9d527: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9d52d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d52e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9d535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d536: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d537: mov esi, ecx */
  esi = ecx;
/* d9d539: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d9d53d: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* d9d540: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9d548: call dword ptr [0xde8990] */
  esp -= 4; W32(esp, 0xd9d54eu); SPILL(); f_4e3ad5(); if (g_unwind) return; /* Core!??1FPreferencesInfo@@QAE@XZ */ RELOAD();
/* d9d54e: mov ecx, esi */
  ecx = esi;
/* d9d550: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9d558: call 0xd81a0a */
  esp -= 4; W32(esp, 0xd9d55du); SPILL(); f_d81a0a(); if (g_unwind) return; RELOAD();
/* d9d55d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9d561: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d562: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9d569: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d56c: ret  */
  esp += 4; SPILL(); return;
}

void f_d9d590(void) {
  LOAD_REGS();
L_d9d590: /* d9d590: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9d591: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d9d595: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d598: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d599: mov esi, ecx */
  esi = ecx;
/* d9d59b: je 0xd9d5cd */
  if (zf) goto L_d9d5cd;
L_d9d59d: /* d9d59d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d9d5a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d5a1: push 0xd813f2 */
  { uint32_t v = 0xd813f2u; esp -= 4; W32(esp, v); }
/* d9d5a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d9d5a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d5aa: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* d9d5ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d5ad: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd9d5b2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d9d5b2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d5b5: je 0xd9d5c5 */
  if (zf) goto L_d9d5c5;
L_d9d5b7: /* d9d5b7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9d5bd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9d5bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9d5c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d5c2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9d5c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9d5c5: /* d9d5c5: mov eax, edi */
  eax = edi;
/* d9d5c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9d5c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d5c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9d5ca: ret 4 */
  esp += 8; SPILL(); return;
L_d9d5cd: /* d9d5cd: mov ecx, esi */
  ecx = esi;
/* d9d5cf: call 0xd813f2 */
  esp -= 4; W32(esp, 0xd9d5d4u); SPILL(); f_d813f2(); if (g_unwind) return; RELOAD();
/* d9d5d4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9d5d7: je 0xd9d5e6 */
  if (zf) goto L_d9d5e6;
L_d9d5d9: /* d9d5d9: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9d5de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9d5e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9d5e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d5e3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9d5e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9d5e6: /* d9d5e6: mov eax, esi */
  eax = esi;
/* d9d5e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d5e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9d5ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9d610(void) {
  LOAD_REGS();
L_d9d610: /* d9d610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9d611: mov ebp, esp */
  ebp = esp;
/* d9d613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9d615: push 0xdba0ab */
  { uint32_t v = 0xdba0abu; esp -= 4; W32(esp, v); }
/* d9d61a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9d620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9d628: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9d62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9d62c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d62d: mov ebx, ecx */
  ebx = ecx;
/* d9d62f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d9d631: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d632: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9d635: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9d638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d639: mov ecx, ebx */
  ecx = ebx;
/* d9d63b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9d642: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xd9d645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9d645: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* d9d648: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* d9d64b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* d9d64e: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d9d650: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* d9d653: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d9d656: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d657: call dword ptr [0xde8ed0] */
  esp -= 4; W32(esp, 0xd9d65du); SPILL(); call_ind(R32(0xde8ed0u)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* d9d65d: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d9d663: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d9d666: mov edi, eax */
  edi = eax;
/* d9d668: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9d66b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d66c: je 0xd9d686 */
  if (zf) goto L_d9d686;
L_d9d66e: /* d9d66e: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd9d674u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d9d674: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d677: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* d9d67a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9d67b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d67c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d67d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d67e: call dword ptr [0xde8ca0] */
  esp -= 4; W32(esp, 0xd9d684u); SPILL(); call_ind(R32(0xde8ca0u)); if (g_unwind) return; /* GDI32!GetTextExtentPoint32W */ RELOAD();
/* d9d684: jmp 0xd9d6ef */
  goto L_d9d6ef;
L_d9d686: /* d9d686: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd9d68cu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d9d68c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d68f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9d691: jne 0xd9d698 */
  if (!zf) goto L_d9d698;
L_d9d693: /* d9d693: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9d696: jmp 0xd9d6b9 */
  goto L_d9d6b9;
L_d9d698: /* d9d698: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d699: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd9d69fu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d9d69f: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9d6a2: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9d6a5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9d6a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d6ab: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9d6ae: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd9d6b3u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d9d6b3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9d6b6: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
L_d9d6b9: /* d9d6b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d6ba: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd9d6c0u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d9d6c0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d6c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d6c4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9d6c7: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd9d6cdu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d9d6cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d6d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d6d1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d9d6d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d6d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d6d6: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd9d6dcu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d9d6dc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9d6df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d6e2: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* d9d6e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d6e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9d6e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d6e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d6e9: call dword ptr [0xde8c9c] */
  esp -= 4; W32(esp, 0xd9d6efu); SPILL(); call_ind(R32(0xde8c9cu)); if (g_unwind) return; /* GDI32!GetTextExtentPoint32A */ RELOAD();
L_d9d6ef: /* d9d6ef: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* d9d6f2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d9d6f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d6f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d6f7: call dword ptr [0xde8ed4] */
  esp -= 4; W32(esp, 0xd9d6fdu); SPILL(); call_ind(R32(0xde8ed4u)); if (g_unwind) return; /* USER32!ReleaseDC */ RELOAD();
/* d9d6fd: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9d700: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* d9d706: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9d709: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* d9d70c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* d9d70e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9d710: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d9d715: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* d9d71a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd9d71cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9d71c: mov ecx, eax */
  ecx = eax;
/* d9d71e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9d721: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9d723: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9d727: je 0xd9d757 */
  if (zf) goto L_d9d757;
L_d9d729: /* d9d729: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* d9d72c: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* d9d72e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9d731: mov eax, esp */
  eax = esp;
/* d9d733: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* d9d736: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* d9d739: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9d73f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d9d742: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* d9d745: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* d9d748: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9d74a: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9d74d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d74e: call 0xd821f3 */
  esp -= 4; W32(esp, 0xd9d753u); SPILL(); f_d821f3(); if (g_unwind) return; RELOAD();
/* d9d753: mov edi, eax */
  edi = eax;
/* d9d755: jmp 0xd9d759 */
  goto L_d9d759;
L_d9d757: /* d9d757: xor edi, edi */
  edi = 0;
L_d9d759: /* d9d759: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9d75b: lea esi, [ebx + 0x24] */
  esi = (uint32_t)(ebx + 0x24u);
/* d9d75e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9d760: mov ecx, esi */
  ecx = esi;
/* d9d762: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9d766: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9d76cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9d76c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d9d76e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d9d771: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9d774: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* d9d777: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* d9d77a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* d9d77d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9d77e: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* d9d781: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d9d783: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d784: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d785: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d786: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d9d788: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9d789: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9d78b: mov ecx, edi */
  ecx = edi;
/* d9d78d: call 0xd824fa */
  esp -= 4; W32(esp, 0xd9d792u); SPILL(); f_d824fa(); if (g_unwind) return; RELOAD();
/* d9d792: add dword ptr [ebx + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0x20u), r);
  }
/* d9d795: lea esp, [ebp - 0x48] */
  esp = (uint32_t)(ebp + 0xffffffb8u);
/* d9d798: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9d79b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9d7a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9d7a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9d7a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9d7a5: mov esp, ebp */
  esp = ebp;
/* d9d7a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9d7a8: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d9d7ab(void) {
  LOAD_REGS();
L_d9d7ab: /* d9d7ab: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d9d7ae: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9d7b3: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* d9d7b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d7b7: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d9d7ba: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9d7bfu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9d7bf(); return;
}

void f_d9d7bf(void) {
  LOAD_REGS();
L_d9d7bf: /* d9d7bf: push 0xdc37e0 */
  { uint32_t v = 0xdc37e0u; esp -= 4; W32(esp, v); }
/* d9d7c4: push 0xde21a0 */
  { uint32_t v = 0xde21a0u; esp -= 4; W32(esp, v); }
/* d9d7c9: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9d7cfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9d7cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9d7d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9d7d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9d7d6: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9d7dbu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9d7db: guest_badaddr(0xd9d7db); return;
}

void f_d9d860(void) {
  LOAD_REGS();
L_d9d860: /* d9d860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9d861: mov ebp, esp */
  ebp = esp;
/* d9d863: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9d865: push 0xdba120 */
  { uint32_t v = 0xdba120u; esp -= 4; W32(esp, v); }
/* d9d86a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9d870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d871: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9d878: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9d87b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9d87c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9d87d: mov esi, ecx */
  esi = ecx;
/* d9d87f: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* d9d882: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9d884: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9d885: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9d888: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9d88f: je 0xd9d8a9 */
  if (zf) goto L_d9d8a9;
L_d9d891: /* d9d891: push 0x25c */
  { uint32_t v = 0x25cu; esp -= 4; W32(esp, v); }
/* d9d896: push 0xde2340 */
  { uint32_t v = 0xde2340u; esp -= 4; W32(esp, v); }
/* d9d89b: push 0xde2350 */
  { uint32_t v = 0xde2350u; esp -= 4; W32(esp, v); }
/* d9d8a0: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9d8a6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9d8a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9d8a9: /* d9d8a9: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d9d8ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9d8ae: je 0xd9d8c8 */
  if (zf) goto L_d9d8c8;
L_d9d8b0: /* d9d8b0: push 0x25d */
  { uint32_t v = 0x25du; esp -= 4; W32(esp, v); }
/* d9d8b5: push 0xde2360 */
  { uint32_t v = 0xde2360u; esp -= 4; W32(esp, v); }
/* d9d8ba: push 0xde2370 */
  { uint32_t v = 0xde2370u; esp -= 4; W32(esp, v); }
/* d9d8bf: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9d8c5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9d8c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9d8c8: /* d9d8c8: mov ecx, esi */
  ecx = esi;
/* d9d8ca: call 0xd821bc */
  esp -= 4; W32(esp, 0xd9d8cfu); SPILL(); f_d821bc(); if (g_unwind) return; RELOAD();
/* d9d8cf: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d9d8d2: cmp dword ptr [eax + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9d8d6: je 0xd9d8e2 */
  if (zf) goto L_d9d8e2;
L_d9d8d8: /* d9d8d8: cmp dword ptr [esi + 0x44], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9d8dc: je 0xd9e4c9 */
  if (zf) goto L_d9e4c9;
L_d9d8e2: /* d9d8e2: test dword ptr [eax + 0x3c], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9d8e9: jne 0xd9e4c9 */
  if (!zf) goto L_d9e4c9;
L_d9d8ef: /* d9d8ef: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9d8f5u); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9d8f5: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9d8f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d8f9: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9d8ffu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9d8ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9d901: je 0xd9d9f0 */
  if (zf) goto L_d9d9f0;
L_d9d907: /* d9d907: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9d90a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9d90c: je 0xd9d921 */
  if (zf) goto L_d9d921;
L_d9d90e: /* d9d90e: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9d914u); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9d914: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d915: mov ecx, edi */
  ecx = edi;
/* d9d917: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9d91du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9d91d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9d91f: jne 0xd9d923 */
  if (!zf) goto L_d9d923;
L_d9d921: /* d9d921: xor edi, edi */
  edi = 0;
L_d9d923: /* d9d923: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* d9d926: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9d928: jne 0xd9d9f0 */
  if (!zf) goto L_d9d9f0;
L_d9d92e: /* d9d92e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9d930: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* d9d933: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9d934: mov ecx, esi */
  ecx = esi;
/* d9d936: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xd9d939u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9d939: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9d93c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9d93e: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd9d944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9d944: mov ebx, dword ptr [ebp - 0x60] */
  ebx = R32((uint32_t)(ebp + 0xffffffa0u));
/* d9d947: add eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9d94a: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* d9d94d: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9d952: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* d9d953: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* d9d956: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9d958: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9d95a: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d9d95f: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* d9d961: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9d963u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9d963: mov ecx, eax */
  ecx = eax;
/* d9d965: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* d9d968: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9d96a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9d96e: je 0xd9d982 */
  if (zf) goto L_d9d982;
L_d9d970: /* d9d970: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9d973: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9d975: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9d977: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9d97a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d97b: call 0xd827fc */
  esp -= 4; W32(esp, 0xd9d980u); SPILL(); f_d827fc(); if (g_unwind) return; RELOAD();
/* d9d980: jmp 0xd9d984 */
  goto L_d9d984;
L_d9d982: /* d9d982: xor eax, eax */
  eax = 0;
L_d9d984: /* d9d984: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* d9d987: mov dword ptr [eax + 0x48], esi */
  W32((uint32_t)(eax + 0x48u), esi);
/* d9d98a: mov dword ptr [eax + 0x4c], 0xd816bd */
  W32((uint32_t)(eax + 0x4cu), 0xd816bdu);
/* d9d991: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d9d994: add eax, 0x50 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9d997: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9d999: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9d99c: mov dword ptr [eax + 8], 0xd81ea6 */
  W32((uint32_t)(eax + 0x8u), 0xd81ea6u);
/* d9d9a3: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9d9a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9d9a8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9d9ac: call 0xd81bb8 */
  esp -= 4; W32(esp, 0xd9d9b1u); SPILL(); f_d81bb8(); if (g_unwind) return; RELOAD();
/* d9d9b1: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9d9b4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* d9d9b6: call 0xd81b13 */
  esp -= 4; W32(esp, 0xd9d9bbu); SPILL(); f_d81b13(); if (g_unwind) return; RELOAD();
/* d9d9bb: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9d9be: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* d9d9c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9d9c5: call 0xd8281f */
  esp -= 4; W32(esp, 0xd9d9cau); SPILL(); f_d8281f(); if (g_unwind) return; RELOAD();
/* d9d9ca: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* d9d9cd: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* d9d9d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9d9d2: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9d9d5: mov ecx, esp */
  ecx = esp;
/* d9d9d7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d9d9d9: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* d9d9dc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* d9d9df: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* d9d9e2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* d9d9e5: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* d9d9e8: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9d9eb: call 0xd8171c */
  esp -= 4; W32(esp, 0xd9d9f0u); SPILL(); f_d8171c(); if (g_unwind) return; RELOAD();
L_d9d9f0: /* d9d9f0: call dword ptr [0xde89bc] */
  esp -= 4; W32(esp, 0xd9d9f6u); SPILL(); f_4e1ae1(); if (g_unwind) return; /* Core!?StaticClass@UBoolProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9d9f6: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9d9f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9d9fa: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9da00u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9da00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9da02: jne 0xd9da80 */
  if (!zf) goto L_d9da80;
L_d9da04: /* d9da04: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9da0au); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9da0a: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9da0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9da0e: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9da14u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9da14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9da16: je 0xd9da2b */
  if (zf) goto L_d9da2b;
L_d9da18: /* d9da18: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9da1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9da1c: call 0xd82919 */
  esp -= 4; W32(esp, 0xd9da21u); SPILL(); f_d82919(); if (g_unwind) return; RELOAD();
/* d9da21: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* d9da24: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9da27: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9da29: jne 0xd9da80 */
  if (!zf) goto L_d9da80;
L_d9da2b: /* d9da2b: call dword ptr [0xde89f0] */
  esp -= 4; W32(esp, 0xd9da31u); SPILL(); f_4e253b(); if (g_unwind) return; /* Core!?StaticClass@UNameProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9da31: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9da34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9da35: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9da3bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9da3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9da3d: je 0xd9da5e */
  if (zf) goto L_d9da5e;
L_d9da3f: /* d9da3f: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* d9da44: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d9da47: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xd9da4du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* d9da4d: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* d9da50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9da51: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* d9da54: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xd9da5au); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* d9da5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9da5c: jne 0xd9da80 */
  if (!zf) goto L_d9da80;
L_d9da5e: /* d9da5e: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9da61: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9da63: je 0xd9dc75 */
  if (zf) goto L_d9dc75;
L_d9da69: /* d9da69: call dword ptr [0xde8998] */
  esp -= 4; W32(esp, 0xd9da6fu); SPILL(); f_4e202c(); if (g_unwind) return; /* Core!?StaticClass@UClassProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9da6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9da70: mov ecx, edi */
  ecx = edi;
/* d9da72: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9da78u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9da78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9da7a: je 0xd9dc75 */
  if (zf) goto L_d9dc75;
L_d9da80: /* d9da80: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9da82: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* d9da85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9da86: mov ecx, esi */
  ecx = esi;
/* d9da88: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xd9da8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9da8b: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* d9da8e: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* d9da91: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9da93: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d9da96: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* d9da97: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* d9da98: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* d9da9b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9da9e: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* d9daa1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9daa3: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* d9daa6: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd9daacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9daac: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9daaf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9dab4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9dab6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9dab8: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d9dabd: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* d9dabf: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9dac1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9dac1: mov ebx, eax */
  ebx = eax;
/* d9dac3: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* d9dac6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dac8: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d9dacc: je 0xd9daed */
  if (zf) goto L_d9daed;
L_d9dace: /* d9dace: mov ecx, dword ptr [0xde5198] */
  ecx = R32((uint32_t)(0xde5198u));
/* d9dad4: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9dad7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9dad8: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9dadb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9dadd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dade: mov ecx, ebx */
  ecx = ebx;
/* d9dae0: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd9dae5u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d9dae5: mov dword ptr [ebx], 0xdbf748 */
  W32((uint32_t)(ebx), 0xdbf748u);
/* d9daeb: jmp 0xd9daef */
  goto L_d9daef;
L_d9daed: /* d9daed: xor ebx, ebx */
  ebx = 0;
L_d9daef: /* d9daef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9daf1: mov dword ptr [esi + 0x54], ebx */
  W32((uint32_t)(esi + 0x54u), ebx);
/* d9daf4: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* d9daf7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9daf9: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* d9dafc: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* d9daff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9db01: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9db05: call 0xd81843 */
  esp -= 4; W32(esp, 0xd9db0au); SPILL(); f_d81843(); if (g_unwind) return; RELOAD();
/* d9db0a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9db0d: lea eax, [edi - 0x14] */
  eax = (uint32_t)(edi + 0xffffffecu);
/* d9db10: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9db12: jge 0xd9db16 */
  if ((sf == of)) goto L_d9db16;
L_d9db14: /* d9db14: mov ecx, eax */
  ecx = eax;
L_d9db16: /* d9db16: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9db19: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* d9db1c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9db1d: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* d9db20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9db22: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9db25: mov eax, esp */
  eax = esp;
/* d9db27: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d9db29: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* d9db2c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9db2f: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* d9db32: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* d9db35: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* d9db38: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* d9db3b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d9db3e: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* d9db41: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* d9db44: call 0xd8171c */
  esp -= 4; W32(esp, 0xd9db49u); SPILL(); f_d8171c(); if (g_unwind) return; RELOAD();
/* d9db49: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* d9db4c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9db4f: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9db52: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d9db55: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9db58: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9db5d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9db5f: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d9db64: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* d9db67: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9db69: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* d9db6c: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* d9db6f: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* d9db74: add edi, -2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d9db77: add ebx, -2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d9db7a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9db7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9db7c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9db7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9db81: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* d9db85: je 0xd9db98 */
  if (zf) goto L_d9db98;
L_d9db87: /* d9db87: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* d9db8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9db8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9db8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9db8f: mov ecx, eax */
  ecx = eax;
/* d9db91: call 0xd82928 */
  esp -= 4; W32(esp, 0xd9db96u); SPILL(); f_d82928(); if (g_unwind) return; RELOAD();
/* d9db96: jmp 0xd9db9a */
  goto L_d9db9a;
L_d9db98: /* d9db98: xor eax, eax */
  eax = 0;
L_d9db9a: /* d9db9a: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* d9db9d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* d9dba0: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* d9dba3: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* d9dba6: add eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9dbab: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9dbae: mov dword ptr [eax + 8], 0xd81f2d */
  W32((uint32_t)(eax + 0x8u), 0xd81f2du);
/* d9dbb5: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* d9dbb8: add eax, 0xac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9dbbd: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9dbc0: mov dword ptr [eax + 8], 0xd81f1e */
  W32((uint32_t)(eax + 0x8u), 0xd81f1eu);
/* d9dbc7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d9dbca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dbcc: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9dbd0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9dbd3: je 0xd9dbee */
  if (zf) goto L_d9dbee;
L_d9dbd5: /* d9dbd5: call dword ptr [0xde8998] */
  esp -= 4; W32(esp, 0xd9dbdbu); SPILL(); f_4e202c(); if (g_unwind) return; /* Core!?StaticClass@UClassProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9dbdb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9dbde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dbdf: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9dbe5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9dbe5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dbe7: je 0xd9dbee */
  if (zf) goto L_d9dbee;
L_d9dbe9: /* d9dbe9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9dbec: jmp 0xd9dbf0 */
  goto L_d9dbf0;
L_d9dbee: /* d9dbee: xor eax, eax */
  eax = 0;
L_d9dbf0: /* d9dbf0: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9dbf3: xor edx, edx */
  edx = 0;
/* d9dbf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dbf7: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d9dbfa: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* d9dbfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9dbfd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9dbff: call 0xd81ca8 */
  esp -= 4; W32(esp, 0xd9dc04u); SPILL(); f_d81ca8(); if (g_unwind) return; RELOAD();
/* d9dc04: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9dc07: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* d9dc0a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9dc0d: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* d9dc10: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d9dc12: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* d9dc15: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d9dc17: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d9dc19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9dc1b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9dc1e: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* d9dc21: sub ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* d9dc24: mov edx, esp */
  edx = esp;
/* d9dc26: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* d9dc28: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* d9dc2b: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9dc2e: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* d9dc31: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* d9dc34: call 0xd8171c */
  esp -= 4; W32(esp, 0xd9dc39u); SPILL(); f_d8171c(); if (g_unwind) return; RELOAD();
/* d9dc39: call dword ptr [0xde89bc] */
  esp -= 4; W32(esp, 0xd9dc3fu); SPILL(); f_4e1ae1(); if (g_unwind) return; /* Core!?StaticClass@UBoolProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9dc3f: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9dc42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dc43: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9dc49u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9dc49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dc4b: je 0xd9dd12 */
  if (zf) goto L_d9dd12;
L_d9dc51: /* d9dc51: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9dc54: mov edx, dword ptr [0xde8a4c] */
  edx = R32((uint32_t)(0xde8a4cu));
/* d9dc5a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9dc5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9dc5d: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd9dc63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9dc63: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9dc66: mov edx, dword ptr [0xde8a48] */
  edx = R32((uint32_t)(0xde8a48u));
/* d9dc6c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9dc6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9dc6f: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd9dc75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9dc75: /* d9dc75: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd9dc7bu); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9dc7b: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9dc7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dc7f: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9dc85u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9dc85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dc87: je 0xd9e01c */
  if (zf) goto L_d9e01c;
L_d9dc8d: /* d9dc8d: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* d9dc90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dc92: je 0xd9e01c */
  if (zf) goto L_d9e01c;
L_d9dc98: /* d9dc98: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d9dc9b: test byte ptr [eax + 0x3c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9dc9f: jne 0xd9e01c */
  if (!zf) goto L_d9e01c;
L_d9dca5: /* d9dca5: mov edi, dword ptr [0xde8918] */
  edi = R32((uint32_t)(0xde8918u));
/* d9dcab: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9dcae: mov eax, esp */
  eax = esp;
/* d9dcb0: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9dcb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9dcb5: push 0xde23e0 */
  { uint32_t v = 0xde23e0u; esp -= 4; W32(esp, v); }
/* d9dcba: push 0xde23f0 */
  { uint32_t v = 0xde23f0u; esp -= 4; W32(esp, v); }
/* d9dcbf: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9dcc5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9dcc8: mov dword ptr [eax + 8], 0xd81a73 */
  W32((uint32_t)(eax + 0x8u), 0xd81a73u);
/* d9dccf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9dcd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9dcd1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9dcd3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9dcd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dcd7: mov ecx, esi */
  ecx = esi;
/* d9dcd9: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9dcdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9dcdc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9dcdf: mov eax, esp */
  eax = esp;
/* d9dce1: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9dce4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9dce6: push 0xde23fc */
  { uint32_t v = 0xde23fcu; esp -= 4; W32(esp, v); }
/* d9dceb: push 0xde240c */
  { uint32_t v = 0xde240cu; esp -= 4; W32(esp, v); }
/* d9dcf0: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9dcf6: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9dcf9: mov dword ptr [eax + 8], 0xd81104 */
  W32((uint32_t)(eax + 0x8u), 0xd81104u);
/* d9dd00: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9dd02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9dd02: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9dd04: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9dd07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dd08: mov ecx, esi */
  ecx = esi;
/* d9dd0a: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9dd0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9dd0d: jmp 0xd9e022 */
  goto L_d9e022;
L_d9dd12: /* d9dd12: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9dd18u); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9dd18: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9dd1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dd1c: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9dd22u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9dd22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dd24: je 0xd9dd8a */
  if (zf) goto L_d9dd8a;
L_d9dd26: /* d9dd26: xor ebx, ebx */
  ebx = 0;
L_d9dd28: /* d9dd28: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9dd2b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dd2d: je 0xd9dd42 */
  if (zf) goto L_d9dd42;
L_d9dd2f: /* d9dd2f: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9dd35u); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9dd35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dd36: mov ecx, edi */
  ecx = edi;
/* d9dd38: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9dd3eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9dd3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dd40: jne 0xd9dd44 */
  if (!zf) goto L_d9dd44;
L_d9dd42: /* d9dd42: xor edi, edi */
  edi = 0;
L_d9dd44: /* d9dd44: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* d9dd47: cmp ebx, dword ptr [eax + 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9dd4a: jge 0xd9dc75 */
  if ((sf == of)) goto L_d9dc75;
L_d9dd50: /* d9dd50: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9dd53: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dd55: je 0xd9dd6a */
  if (zf) goto L_d9dd6a;
L_d9dd57: /* d9dd57: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9dd5du); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9dd5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dd5e: mov ecx, edi */
  ecx = edi;
/* d9dd60: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9dd66u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9dd66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dd68: jne 0xd9dd6c */
  if (!zf) goto L_d9dd6c;
L_d9dd6a: /* d9dd6a: xor edi, edi */
  edi = 0;
L_d9dd6c: /* d9dd6c: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* d9dd6f: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* d9dd72: lea ecx, [edx + ebx*4] */
  ecx = (uint32_t)(edx + ebx*4);
/* d9dd75: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd9dd7bu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d9dd7b: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9dd7e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9dd80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dd81: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xd9dd87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9dd87: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9dd88: jmp 0xd9dd28 */
  goto L_d9dd28;
L_d9dd8a: /* d9dd8a: call dword ptr [0xde89f0] */
  esp -= 4; W32(esp, 0xd9dd90u); SPILL(); f_4e253b(); if (g_unwind) return; /* Core!?StaticClass@UNameProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9dd90: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9dd93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9dd94: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9dd9au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9dd9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dd9c: je 0xd9de31 */
  if (zf) goto L_d9de31;
L_d9dda2: /* d9dda2: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* d9dda7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d9ddaa: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xd9ddb0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* d9ddb0: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* d9ddb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ddb4: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* d9ddb7: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xd9ddbdu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* d9ddbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ddbf: je 0xd9de31 */
  if (zf) goto L_d9de31;
L_d9ddc1: /* d9ddc1: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d9ddc4: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9ddcau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9ddca: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9ddcc: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* d9ddcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ddd0: mov ecx, esi */
  ecx = esi;
/* d9ddd2: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* d9ddd6: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0xd9ddd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ddd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9dddb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d9ddde: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xd9dde4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* d9dde4: mov ecx, eax */
  ecx = eax;
/* d9dde6: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd9ddecu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d9ddec: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9ddef: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ddf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ddf2: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xd9ddf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ddf8: xor edi, edi */
  edi = 0;
/* d9ddfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d9de00: /* d9de00: cmp edi, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9de03: jge 0xd9de20 */
  if ((sf == of)) goto L_d9de20;
L_d9de05: /* d9de05: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* d9de08: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* d9de0b: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd9de11u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d9de11: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9de14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9de16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9de17: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xd9de1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9de1d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9de1e: jmp 0xd9de00 */
  goto L_d9de00;
L_d9de20: /* d9de20: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d9de23: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9de27: call 0xd81f32 */
  esp -= 4; W32(esp, 0xd9de2cu); SPILL(); f_d81f32(); if (g_unwind) return; RELOAD();
/* d9de2c: jmp 0xd9dc75 */
  goto L_d9dc75;
L_d9de31: /* d9de31: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d9de34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9de35: call 0xd825ea */
  esp -= 4; W32(esp, 0xd9de3au); SPILL(); f_d825ea(); if (g_unwind) return; RELOAD();
/* d9de3a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9de3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9de3f: je 0xd9dc75 */
  if (zf) goto L_d9dc75;
L_d9de45: /* d9de45: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9de48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9de49: call 0xd81541 */
  esp -= 4; W32(esp, 0xd9de4eu); SPILL(); f_d81541(); if (g_unwind) return; RELOAD();
/* d9de4e: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9de51: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9de54: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9de57: mov ebx, eax */
  ebx = eax;
/* d9de59: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd9de5fu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d9de5f: push 0xde2380 */
  { uint32_t v = 0xde2380u; esp -= 4; W32(esp, v); }
/* d9de64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9de65: call dword ptr [0xde8938] */
  esp -= 4; W32(esp, 0xd9de6bu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* d9de6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9de6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9de70: jne 0xd9dfac */
  if (!zf) goto L_d9dfac;
L_d9de76: /* d9de76: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d9de79: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9de7fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9de7f: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* d9de83: call dword ptr [0xde8a28] */
  esp -= 4; W32(esp, 0xd9de89u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* d9de89: mov edx, dword ptr [ebx + 0x70] */
  edx = R32((uint32_t)(ebx + 0x70u));
/* d9de8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9de8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9de8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9de90: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* d9de93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9de94: call dword ptr [0xde8a3c] */
  esp -= 4; W32(esp, 0xd9de9au); SPILL(); f_4e44d0(); if (g_unwind) return; /* Core!?GetRegistryObjects@UObject@@SAXAAV?$TArray@VFRegistryObjectInfo@@@@PAVUClass@@1H@Z */ RELOAD();
/* d9de9a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9de9d: xor ebx, ebx */
  ebx = 0;
/* d9de9f: nop  */
L_d9dea0: /* d9dea0: cmp ebx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9dea3: jge 0xd9df9b */
  if ((sf == of)) goto L_d9df9b;
L_d9dea9: /* d9dea9: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* d9deac: mov ecx, ebx */
  ecx = ebx;
/* d9deae: imul ecx, ecx, 0x3c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x3cu);
  ecx = (uint32_t)r;
  }
/* d9deb1: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9deb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9deb4: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* d9deb7: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xd9debdu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* d9debd: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9dec0: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* d9dec4: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd9decau); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d9deca: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d9decd: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* d9ded1: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd9ded7u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d9ded7: push 0xde2390 */
  { uint32_t v = 0xde2390u; esp -= 4; W32(esp, v); }
/* d9dedc: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d9dedf: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* d9dee3: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd9dee9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d9dee9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9deeb: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* d9deee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9deef: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* d9def2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9def3: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d9def6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9def7: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* d9defa: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* d9defe: call dword ptr [0xde89d4] */
  esp -= 4; W32(esp, 0xd9df04u); SPILL(); f_4e443a(); if (g_unwind) return; /* Core!?Split@FString@@QBEHABV1@PAV1@1H@Z */ RELOAD();
/* d9df04: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d9df07: mov edi, eax */
  edi = eax;
/* d9df09: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* d9df0d: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9df13u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9df13: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9df15: je 0xd9df3e */
  if (zf) goto L_d9df3e;
L_d9df17: /* d9df17: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9df1a: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9df20u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9df20: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d9df23: mov edi, eax */
  edi = eax;
/* d9df25: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9df2bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9df2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9df2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9df2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9df30: push 0xde2394 */
  { uint32_t v = 0xde2394u; esp -= 4; W32(esp, v); }
/* d9df35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9df36: call dword ptr [0xde8914] */
  esp -= 4; W32(esp, 0xd9df3cu); SPILL(); f_4e43db(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBG000H@Z */ RELOAD();
/* d9df3c: jmp 0xd9df5f */
  goto L_d9df5f;
L_d9df3e: /* d9df3e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* d9df41: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9df47u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9df47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9df49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9df4a: push 0xde23b0 */
  { uint32_t v = 0xde23b0u; esp -= 4; W32(esp, v); }
/* d9df4f: push 0xde23bc */
  { uint32_t v = 0xde23bcu; esp -= 4; W32(esp, v); }
/* d9df54: push 0xde23c8 */
  { uint32_t v = 0xde23c8u; esp -= 4; W32(esp, v); }
/* d9df59: call dword ptr [0xde89d0] */
  esp -= 4; W32(esp, 0xd9df5fu); SPILL(); f_4e141f(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBD0PBG1H@Z */ RELOAD();
L_d9df5f: /* d9df5f: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9df62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9df64: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9df67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9df68: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xd9df6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9df6e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d9df71: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* d9df75: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9df7bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9df7b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9df7e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* d9df82: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9df88u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9df88: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* d9df8b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* d9df8f: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9df95u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9df95: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9df96: jmp 0xd9dea0 */
  goto L_d9dea0;
L_d9df9b: /* d9df9b: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d9df9e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9dfa2: call 0xd81b86 */
  esp -= 4; W32(esp, 0xd9dfa7u); SPILL(); f_d81b86(); if (g_unwind) return; RELOAD();
/* d9dfa7: jmp 0xd9e476 */
  goto L_d9e476;
L_d9dfac: /* d9dfac: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9dfaf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9dfb1: push 0xde23d4 */
  { uint32_t v = 0xde23d4u; esp -= 4; W32(esp, v); }
/* d9dfb6: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd9dfbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9dfbc: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* d9dfbf: call 0xd82630 */
  esp -= 4; W32(esp, 0xd9dfc4u); SPILL(); f_d82630(); if (g_unwind) return; RELOAD();
L_d9dfc4: /* d9dfc4: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
/* d9dfc9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d9dfcc: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* d9dfcf: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9dfd1: jge 0xd9e476 */
  if ((sf == of)) goto L_d9e476;
L_d9dfd7: /* d9dfd7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9dfd9: mov edx, dword ptr [ebx + 0x70] */
  edx = R32((uint32_t)(ebx + 0x70u));
/* d9dfdc: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* d9dfdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9dfe0: call dword ptr [0xde8a24] */
  esp -= 4; W32(esp, 0xd9dfe6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* d9dfe6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dfe8: je 0xd9e012 */
  if (zf) goto L_d9e012;
L_d9dfea: /* d9dfea: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
/* d9dfef: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9dff1: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* d9dff4: test dword ptr [ecx + 0x498], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x498u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9dffe: jne 0xd9e012 */
  if (!zf) goto L_d9e012;
L_d9e000: /* d9e000: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9e006u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9e006: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9e009: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9e00b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e00c: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xd9e012u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9e012: /* d9e012: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* d9e015: call 0xd821da */
  esp -= 4; W32(esp, 0xd9e01au); SPILL(); f_d821da(); if (g_unwind) return; RELOAD();
/* d9e01a: jmp 0xd9dfc4 */
  goto L_d9dfc4;
L_d9e01c: /* d9e01c: mov edi, dword ptr [0xde8918] */
  edi = R32((uint32_t)(0xde8918u));
L_d9e022: /* d9e022: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e025: call dword ptr [0xde8a08] */
  esp -= 4; W32(esp, 0xd9e02bu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* d9e02b: mov ebx, eax */
  ebx = eax;
/* d9e02d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e02f: je 0xd9e0e3 */
  if (zf) goto L_d9e0e3;
L_d9e035: /* d9e035: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd9e03bu); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e03b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e03c: mov ecx, ebx */
  ecx = ebx;
/* d9e03e: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e044u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e044: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e046: je 0xd9e0e3 */
  if (zf) goto L_d9e0e3;
L_d9e04c: /* d9e04c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* d9e04f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e051: je 0xd9e0e3 */
  if (zf) goto L_d9e0e3;
L_d9e057: /* d9e057: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e05a: call dword ptr [0xde8a08] */
  esp -= 4; W32(esp, 0xd9e060u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* d9e060: mov ebx, eax */
  ebx = eax;
/* d9e062: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e064: je 0xd9e079 */
  if (zf) goto L_d9e079;
L_d9e066: /* d9e066: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd9e06cu); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e06c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e06d: mov ecx, ebx */
  ecx = ebx;
/* d9e06f: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e075u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e075: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e077: jne 0xd9e07b */
  if (!zf) goto L_d9e07b;
L_d9e079: /* d9e079: xor ebx, ebx */
  ebx = 0;
L_d9e07b: /* d9e07b: test byte ptr [ebx + 0x3c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x3cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9e07f: jne 0xd9e0e3 */
  if (!zf) goto L_d9e0e3;
L_d9e081: /* d9e081: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e084: mov eax, esp */
  eax = esp;
/* d9e086: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9e089: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9e08b: push 0xde2418 */
  { uint32_t v = 0xde2418u; esp -= 4; W32(esp, v); }
/* d9e090: push 0xde2428 */
  { uint32_t v = 0xde2428u; esp -= 4; W32(esp, v); }
/* d9e095: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9e09b: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9e09e: mov dword ptr [eax + 8], 0xd81aff */
  W32((uint32_t)(eax + 0x8u), 0xd81affu);
/* d9e0a5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9e0a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e0a7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e0a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e0ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e0ad: mov ecx, esi */
  ecx = esi;
/* d9e0af: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9e0b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e0b2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e0b5: mov eax, esp */
  eax = esp;
/* d9e0b7: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9e0ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9e0bc: push 0xde2438 */
  { uint32_t v = 0xde2438u; esp -= 4; W32(esp, v); }
/* d9e0c1: push 0xde2448 */
  { uint32_t v = 0xde2448u; esp -= 4; W32(esp, v); }
/* d9e0c6: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9e0cc: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9e0cf: mov dword ptr [eax + 8], 0xd81230 */
  W32((uint32_t)(eax + 0x8u), 0xd81230u);
/* d9e0d6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9e0d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e0d8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e0da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e0dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e0de: mov ecx, esi */
  ecx = esi;
/* d9e0e0: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9e0e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9e0e3: /* d9e0e3: call dword ptr [0xde89cc] */
  esp -= 4; W32(esp, 0xd9e0e9u); SPILL(); f_4e381e(); if (g_unwind) return; /* Core!?StaticClass@UStructProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e0e9: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e0ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e0ed: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e0f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e0f3: xor ebx, ebx */
  ebx = 0;
/* d9e0f5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e0f7: je 0xd9e199 */
  if (zf) goto L_d9e199;
L_d9e0fd: /* d9e0fd: mov ebx, dword ptr [esi + 0x3c] */
  ebx = R32((uint32_t)(esi + 0x3cu));
/* d9e100: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e102: je 0xd9e117 */
  if (zf) goto L_d9e117;
L_d9e104: /* d9e104: call dword ptr [0xde89cc] */
  esp -= 4; W32(esp, 0xd9e10au); SPILL(); f_4e381e(); if (g_unwind) return; /* Core!?StaticClass@UStructProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e10a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e10b: mov ecx, ebx */
  ecx = ebx;
/* d9e10d: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e113u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e113: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e115: jne 0xd9e119 */
  if (!zf) goto L_d9e119;
L_d9e117: /* d9e117: xor ebx, ebx */
  ebx = 0;
L_d9e119: /* d9e119: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* d9e11c: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9e122u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9e122: push 0xde2458 */
  { uint32_t v = 0xde2458u; esp -= 4; W32(esp, v); }
/* d9e127: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e128: call dword ptr [0xde8938] */
  esp -= 4; W32(esp, 0xd9e12eu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* d9e12e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e131: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e133: jne 0xd9e197 */
  if (!zf) goto L_d9e197;
L_d9e135: /* d9e135: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e138: mov eax, esp */
  eax = esp;
/* d9e13a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9e13d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9e13f: push 0xde2464 */
  { uint32_t v = 0xde2464u; esp -= 4; W32(esp, v); }
/* d9e144: push 0xde2474 */
  { uint32_t v = 0xde2474u; esp -= 4; W32(esp, v); }
/* d9e149: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9e14f: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9e152: mov dword ptr [eax + 8], 0xd81d2f */
  W32((uint32_t)(eax + 0x8u), 0xd81d2fu);
/* d9e159: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9e15bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e15b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e15d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e161: mov ecx, esi */
  ecx = esi;
/* d9e163: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9e166u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e166: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e169: mov eax, esp */
  eax = esp;
/* d9e16b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9e16e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9e170: push 0xde2484 */
  { uint32_t v = 0xde2484u; esp -= 4; W32(esp, v); }
/* d9e175: push 0xde2494 */
  { uint32_t v = 0xde2494u; esp -= 4; W32(esp, v); }
/* d9e17a: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9e180: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9e183: mov dword ptr [eax + 8], 0xd81168 */
  W32((uint32_t)(eax + 0x8u), 0xd81168u);
/* d9e18a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9e18cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e18c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e18e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e191: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e192: mov ecx, esi */
  ecx = esi;
/* d9e194: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9e197u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9e197: /* d9e197: xor ebx, ebx */
  ebx = 0;
L_d9e199: /* d9e199: call dword ptr [0xde89b8] */
  esp -= 4; W32(esp, 0xd9e19fu); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e19f: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e1a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e1a3: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e1a9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e1a9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e1ab: je 0xd9e2bc */
  if (zf) goto L_d9e2bc;
L_d9e1b1: /* d9e1b1: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* d9e1b4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e1b7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e1b9: mov eax, esp */
  eax = esp;
/* d9e1bb: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9e1be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e1bf: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9e1c2: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9e1c8: je 0xd9e234 */
  if (zf) goto L_d9e234;
L_d9e1ca: /* d9e1ca: push 0xde24a0 */
  { uint32_t v = 0xde24a0u; esp -= 4; W32(esp, v); }
/* d9e1cf: push 0xde24b0 */
  { uint32_t v = 0xde24b0u; esp -= 4; W32(esp, v); }
/* d9e1d4: mov dword ptr [eax + 8], 0xd817df */
  W32((uint32_t)(eax + 0x8u), 0xd817dfu);
/* d9e1db: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9e1ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e1dd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e1df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e1e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e1e3: mov ecx, esi */
  ecx = esi;
/* d9e1e5: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9e1e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e1e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e1eb: mov eax, esp */
  eax = esp;
/* d9e1ed: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9e1f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e1f1: push 0xde24bc */
  { uint32_t v = 0xde24bcu; esp -= 4; W32(esp, v); }
/* d9e1f6: push 0xde24cc */
  { uint32_t v = 0xde24ccu; esp -= 4; W32(esp, v); }
/* d9e1fb: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9e201: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9e204: mov dword ptr [eax + 8], 0xd824e6 */
  W32((uint32_t)(eax + 0x8u), 0xd824e6u);
/* d9e20b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9e20du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e20d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e20f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e213: mov ecx, esi */
  ecx = esi;
/* d9e215: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9e218u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e218: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e21b: mov eax, esp */
  eax = esp;
/* d9e21d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9e220: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e221: push 0xde24d8 */
  { uint32_t v = 0xde24d8u; esp -= 4; W32(esp, v); }
/* d9e226: mov dword ptr [eax + 8], 0xd81a41 */
  W32((uint32_t)(eax + 0x8u), 0xd81a41u);
/* d9e22d: push 0xde24e8 */
  { uint32_t v = 0xde24e8u; esp -= 4; W32(esp, v); }
/* d9e232: jmp 0xd9e2a6 */
  goto L_d9e2a6;
L_d9e234: /* d9e234: push 0xde24f4 */
  { uint32_t v = 0xde24f4u; esp -= 4; W32(esp, v); }
/* d9e239: push 0xde2504 */
  { uint32_t v = 0xde2504u; esp -= 4; W32(esp, v); }
/* d9e23e: mov dword ptr [eax + 8], 0xd82635 */
  W32((uint32_t)(eax + 0x8u), 0xd82635u);
/* d9e245: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9e247u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e247: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e249: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e24c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e24d: mov ecx, esi */
  ecx = esi;
/* d9e24f: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9e252u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e252: cmp dword ptr [esi + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e255: je 0xd9e25c */
  if (zf) goto L_d9e25c;
L_d9e257: /* d9e257: cmp dword ptr [esi + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e25a: je 0xd9e28c */
  if (zf) goto L_d9e28c;
L_d9e25c: /* d9e25c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e25f: mov eax, esp */
  eax = esp;
/* d9e261: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9e264: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e265: push 0xde2514 */
  { uint32_t v = 0xde2514u; esp -= 4; W32(esp, v); }
/* d9e26a: push 0xde2524 */
  { uint32_t v = 0xde2524u; esp -= 4; W32(esp, v); }
/* d9e26f: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9e275: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9e278: mov dword ptr [eax + 8], 0xd81a41 */
  W32((uint32_t)(eax + 0x8u), 0xd81a41u);
/* d9e27f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9e281u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e281: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e283: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e286: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e287: mov ecx, esi */
  ecx = esi;
/* d9e289: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9e28cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9e28c: /* d9e28c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e28f: mov eax, esp */
  eax = esp;
/* d9e291: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9e294: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e295: push 0xde2530 */
  { uint32_t v = 0xde2530u; esp -= 4; W32(esp, v); }
/* d9e29a: mov dword ptr [eax + 8], 0xd817df */
  W32((uint32_t)(eax + 0x8u), 0xd817dfu);
/* d9e2a1: push 0xde2540 */
  { uint32_t v = 0xde2540u; esp -= 4; W32(esp, v); }
L_d9e2a6: /* d9e2a6: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9e2a9: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9e2af: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9e2b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e2b1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e2b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e2b6: mov ecx, esi */
  ecx = esi;
/* d9e2b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e2b9: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9e2bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9e2bc: /* d9e2bc: call dword ptr [0xde899c] */
  esp -= 4; W32(esp, 0xd9e2c2u); SPILL(); f_4e2e6e(); if (g_unwind) return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e2c2: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e2c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e2c6: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e2ccu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e2cc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e2ce: jne 0xd9e376 */
  if (!zf) goto L_d9e376;
L_d9e2d4: /* d9e2d4: call dword ptr [0xde89a0] */
  esp -= 4; W32(esp, 0xd9e2dau); SPILL(); f_4e2c0c(); if (g_unwind) return; /* Core!?StaticClass@UIntProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e2da: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e2de: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e2e4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e2e4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e2e6: jne 0xd9e376 */
  if (!zf) goto L_d9e376;
L_d9e2ec: /* d9e2ec: call dword ptr [0xde89f0] */
  esp -= 4; W32(esp, 0xd9e2f2u); SPILL(); f_4e253b(); if (g_unwind) return; /* Core!?StaticClass@UNameProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e2f2: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e2f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e2f6: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e2fcu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e2fc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e2fe: je 0xd9e31f */
  if (zf) goto L_d9e31f;
L_d9e300: /* d9e300: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* d9e305: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d9e308: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xd9e30eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* d9e30e: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* d9e311: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e312: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* d9e315: call dword ptr [0xde8a04] */
  esp -= 4; W32(esp, 0xd9e31bu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* d9e31b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e31d: jne 0xd9e376 */
  if (!zf) goto L_d9e376;
L_d9e31f: /* d9e31f: call dword ptr [0xde8a44] */
  esp -= 4; W32(esp, 0xd9e325u); SPILL(); f_4e2563(); if (g_unwind) return; /* Core!?StaticClass@UStrProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e325: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e328: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e329: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e32fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e32f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e331: jne 0xd9e376 */
  if (!zf) goto L_d9e376;
L_d9e333: /* d9e333: call dword ptr [0xde89b8] */
  esp -= 4; W32(esp, 0xd9e339u); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e339: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e33c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e33d: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e343u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e343: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e345: jne 0xd9e376 */
  if (!zf) goto L_d9e376;
L_d9e347: /* d9e347: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9e34du); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e34d: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e351: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e357u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e357: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e359: je 0xd9e476 */
  if (zf) goto L_d9e476;
L_d9e35f: /* d9e35f: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e362: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9e363: call 0xd82919 */
  esp -= 4; W32(esp, 0xd9e368u); SPILL(); f_d82919(); if (g_unwind) return; RELOAD();
/* d9e368: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* d9e36b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e36e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e370: jne 0xd9e476 */
  if (!zf) goto L_d9e476;
L_d9e376: /* d9e376: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e378: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* d9e37b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e37c: mov ecx, esi */
  ecx = esi;
/* d9e37e: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0xd9e381u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e381: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9e384: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9e386: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd9e38cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e38c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9e38d: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* d9e390: dec dword ptr [ebp - 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffa0u), r);
  }
/* d9e393: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9e399u); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9e399: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9e39c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e39d: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9e3a3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9e3a3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e3a5: je 0xd9e3af */
  if (zf) goto L_d9e3af;
L_d9e3a7: /* d9e3a7: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* d9e3aa: add eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9e3ad: jmp 0xd9e3b7 */
  goto L_d9e3b7;
L_d9e3af: /* d9e3af: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* d9e3b2: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* d9e3b5: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_d9e3b7: /* d9e3b7: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* d9e3bd: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* d9e3c0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* d9e3c2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9e3c4: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d9e3c9: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* d9e3cb: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd9e3cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e3cd: mov edi, eax */
  edi = eax;
/* d9e3cf: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* d9e3d2: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e3d4: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* d9e3d8: je 0xd9e42d */
  if (zf) goto L_d9e42d;
L_d9e3da: /* d9e3da: mov ecx, dword ptr [0xde5164] */
  ecx = R32((uint32_t)(0xde5164u));
/* d9e3e0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9e3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9e3e4: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9e3e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e3e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e3e9: mov ecx, edi */
  ecx = edi;
/* d9e3eb: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd9e3f0u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d9e3f0: mov dword ptr [edi], 0xdc1d28 */
  W32((uint32_t)(edi), 0xdc1d28u);
/* d9e3f6: mov dword ptr [edi + 0x44], ebx */
  W32((uint32_t)(edi + 0x44u), ebx);
/* d9e3f9: mov dword ptr [edi + 0x48], ebx */
  W32((uint32_t)(edi + 0x48u), ebx);
/* d9e3fc: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* d9e401: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* d9e404: mov dword ptr [edi + 0x4c], eax */
  W32((uint32_t)(edi + 0x4cu), eax);
/* d9e407: mov dword ptr [edi + 0x50], ebx */
  W32((uint32_t)(edi + 0x50u), ebx);
/* d9e40a: mov dword ptr [edi + 0x54], ebx */
  W32((uint32_t)(edi + 0x54u), ebx);
/* d9e40d: mov eax, 0xdc19a0 */
  eax = 0xdc19a0u;
/* d9e412: mov dword ptr [edi + 0x58], eax */
  W32((uint32_t)(edi + 0x58u), eax);
/* d9e415: mov dword ptr [edi + 0x5c], ebx */
  W32((uint32_t)(edi + 0x5cu), ebx);
/* d9e418: mov dword ptr [edi + 0x60], ebx */
  W32((uint32_t)(edi + 0x60u), ebx);
/* d9e41b: mov dword ptr [edi + 0x64], eax */
  W32((uint32_t)(edi + 0x64u), eax);
/* d9e41e: mov dword ptr [edi + 0x68], ebx */
  W32((uint32_t)(edi + 0x68u), ebx);
/* d9e421: mov dword ptr [edi + 0x6c], ebx */
  W32((uint32_t)(edi + 0x6cu), ebx);
/* d9e424: mov dword ptr [edi + 0x70], 0xffffffff */
  W32((uint32_t)(edi + 0x70u), 0xffffffffu);
/* d9e42b: jmp 0xd9e42f */
  goto L_d9e42f;
L_d9e42d: /* d9e42d: xor edi, edi */
  edi = 0;
L_d9e42f: /* d9e42f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e430: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e431: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e432: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* d9e435: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* d9e438: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e439: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* d9e43c: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d9e43f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e440: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9e444: call 0xd8263f */
  esp -= 4; W32(esp, 0xd9e449u); SPILL(); f_d8263f(); if (g_unwind) return; RELOAD();
/* d9e449: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* d9e44c: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* d9e44f: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* d9e452: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* d9e455: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e456: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e459: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9e45a: mov ebx, esp */
  ebx = esp;
/* d9e45c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d9e45d: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* d9e45f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* d9e462: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d9e465: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* d9e468: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* d9e46b: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* d9e46e: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* d9e471: call 0xd8171c */
  esp -= 4; W32(esp, 0xd9e476u); SPILL(); f_d8171c(); if (g_unwind) return; RELOAD();
L_d9e476: /* d9e476: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e478: mov ecx, esi */
  ecx = esi;
/* d9e47a: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xd9e480u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e480: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9e482: mov ecx, esi */
  ecx = esi;
/* d9e484: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd9e487u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e487: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d9e48a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e48c: je 0xd9e495 */
  if (zf) goto L_d9e495;
L_d9e48e: /* d9e48e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9e490: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9e492: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xd9e495u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9e495: /* d9e495: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9e498: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e49a: je 0xd9e4a3 */
  if (zf) goto L_d9e4a3;
L_d9e49c: /* d9e49c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9e49e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9e4a0: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xd9e4a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9e4a3: /* d9e4a3: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9e4a6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e4a8: je 0xd9e4b1 */
  if (zf) goto L_d9e4b1;
L_d9e4aa: /* d9e4aa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9e4ac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9e4ae: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xd9e4b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9e4b1: /* d9e4b1: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* d9e4b4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e4b6: je 0xd9e4bf */
  if (zf) goto L_d9e4bf;
L_d9e4b8: /* d9e4b8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9e4ba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9e4bc: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xd9e4bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9e4bf: /* d9e4bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e4c1: mov ecx, esi */
  ecx = esi;
/* d9e4c3: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xd9e4c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9e4c9: /* d9e4c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9e4cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9e4cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9e4ce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9e4d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9e4d6: mov esp, ebp */
  esp = ebp;
/* d9e4d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9e4d9: ret  */
  esp += 4; SPILL(); return;
}

void f_d9e4da(void) {
  LOAD_REGS();
L_d9e4da: /* d9e4da: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9e4dd: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9e4e2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d9e4e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9e4e6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* d9e4e9: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9e4eeu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9e4ee(); return;
}

void f_d9e4ee(void) {
  LOAD_REGS();
L_d9e4ee: /* d9e4ee: push 0xdc3814 */
  { uint32_t v = 0xdc3814u; esp -= 4; W32(esp, v); }
/* d9e4f3: push 0xde254c */
  { uint32_t v = 0xde254cu; esp -= 4; W32(esp, v); }
/* d9e4f8: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9e4feu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9e4fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e501: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9e503: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9e505: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9e50au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9e50a: guest_badaddr(0xd9e50a); return;
}

void f_d9e840(void) {
  LOAD_REGS();
L_d9e840: /* d9e840: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9e841: mov ebp, esp */
  ebp = esp;
/* d9e843: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9e845: push 0xdba150 */
  { uint32_t v = 0xdba150u; esp -= 4; W32(esp, v); }
/* d9e84a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9e850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e851: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9e858: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e85b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e85c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9e85d: mov esi, ecx */
  esi = ecx;
/* d9e85f: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* d9e862: xor ecx, ecx */
  ecx = 0;
/* d9e864: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9e866: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9e867: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9e86a: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* d9e86d: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* d9e870: je 0xd9e87a */
  if (zf) goto L_d9e87a;
L_d9e872: /* d9e872: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d9e875: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* d9e878: jmp 0xd9e87d */
  goto L_d9e87d;
L_d9e87a: /* d9e87a: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
L_d9e87d: /* d9e87d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d9e880: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9e885u); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9e885: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* d9e888: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e88a: je 0xd9e921 */
  if (zf) goto L_d9e921;
L_d9e890: /* d9e890: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* d9e893: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9e894: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* d9e897: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xd9e89du); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* d9e89d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e89f: je 0xd9e916 */
  if (zf) goto L_d9e916;
L_d9e8a1: /* d9e8a1: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9e8a4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9e8a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e8a7: mov ecx, esi */
  ecx = esi;
/* d9e8a9: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9e8acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e8ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e8ae: je 0xd9e916 */
  if (zf) goto L_d9e916;
L_d9e8b0: /* d9e8b0: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9e8b6: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9e8b8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9e8ba: push 0xde28e0 */
  { uint32_t v = 0xde28e0u; esp -= 4; W32(esp, v); }
/* d9e8bf: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9e8c4: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9e8c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9e8c6: mov ebx, eax */
  ebx = eax;
/* d9e8c8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9e8ca: je 0xd9e8f8 */
  if (zf) goto L_d9e8f8;
L_d9e8cc: /* d9e8cc: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* d9e8cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e8d0: mov ecx, edi */
  ecx = edi;
/* d9e8d2: call dword ptr [0xde89e4] */
  esp -= 4; W32(esp, 0xd9e8d8u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* d9e8d8: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* d9e8db: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9e8dd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9e8e0: push 0x29a */
  { uint32_t v = 0x29au; esp -= 4; W32(esp, v); }
/* d9e8e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9e8e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9e8e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9e8e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9e8ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9e8eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e8ec: mov ecx, ebx */
  ecx = ebx;
/* d9e8ee: call 0xd81609 */
  esp -= 4; W32(esp, 0xd9e8f3u); SPILL(); f_d81609(); if (g_unwind) return; RELOAD();
/* d9e8f3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9e8f6: jmp 0xd9e8ff */
  goto L_d9e8ff;
L_d9e8f8: /* d9e8f8: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_d9e8ff: /* d9e8ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9e901: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* d9e904: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9e906: mov ecx, ebx */
  ecx = ebx;
/* d9e908: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9e90eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9e90e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d9e910: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9e913: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_d9e916: /* d9e916: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* d9e919: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* d9e91c: jmp 0xd9e87d */
  goto L_d9e87d;
L_d9e921: /* d9e921: mov ecx, esi */
  ecx = esi;
/* d9e923: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9e928u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9e928: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9e92b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9e92c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9e92d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9e934: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9e935: mov esp, ebp */
  esp = ebp;
/* d9e937: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9e938: ret  */
  esp += 4; SPILL(); return;
}

void f_d9e939(void) {
  LOAD_REGS();
L_d9e939: /* d9e939: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* d9e93c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9e941: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* d9e944: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9e945: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* d9e948: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9e94du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9e94d(); return;
}

void f_d9e94d(void) {
  LOAD_REGS();
L_d9e94d: /* d9e94d: push 0xdc385c */
  { uint32_t v = 0xdc385cu; esp -= 4; W32(esp, v); }
/* d9e952: push 0xde28fc */
  { uint32_t v = 0xde28fcu; esp -= 4; W32(esp, v); }
/* d9e957: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9e95du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9e95d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9e960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9e962: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9e964: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9e969u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9e969: guest_badaddr(0xd9e969); return;
}

void f_d9e9c0(void) {
  LOAD_REGS();
L_d9e9c0: /* d9e9c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9e9c1: mov ebp, esp */
  ebp = esp;
/* d9e9c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9e9c5: push 0xdba176 */
  { uint32_t v = 0xdba176u; esp -= 4; W32(esp, v); }
/* d9e9ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9e9d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9e9d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9e9d8: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e9db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9e9dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9e9dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9e9de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9e9e1: mov esi, ecx */
  esi = ecx;
/* d9e9e3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9e9ea: call 0xd82892 */
  esp -= 4; W32(esp, 0xd9e9efu); SPILL(); f_d82892(); if (g_unwind) return; RELOAD();
/* d9e9ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9e9f2: mov eax, esp */
  eax = esp;
/* d9e9f4: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9e9f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9e9f9: push 0xde290c */
  { uint32_t v = 0xde290cu; esp -= 4; W32(esp, v); }
/* d9e9fe: push 0xde291c */
  { uint32_t v = 0xde291cu; esp -= 4; W32(esp, v); }
/* d9ea03: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9ea09: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9ea0c: mov dword ptr [eax + 8], 0xd8275c */
  W32((uint32_t)(eax + 0x8u), 0xd8275cu);
/* d9ea13: call dword ptr [0xde8918] */
  esp -= 4; W32(esp, 0xd9ea19u); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* d9ea19: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9ea1b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9ea1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ea1f: mov ecx, esi */
  ecx = esi;
/* d9ea21: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd9ea24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ea24: mov edi, dword ptr [esi + 0x20] */
  edi = R32((uint32_t)(esi + 0x20u));
/* d9ea27: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d9ea2a: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d9ea2c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d9ea2f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9ea32: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9ea34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9ea35: mov ecx, esi */
  ecx = esi;
/* d9ea37: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xd9ea3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ea3a: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* d9ea3d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9ea40: mov ebx, dword ptr [eax + 0xc] */
  ebx = R32((uint32_t)(eax + 0xcu));
/* d9ea43: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9ea46: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d9ea48: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9ea4a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d9ea4d: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* d9ea50: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ea52: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* d9ea53: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* d9ea56: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd9ea5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ea5c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9ea5f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9ea64: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9ea66: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ea68: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d9ea6d: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* d9ea6f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9ea71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ea71: mov ecx, eax */
  ecx = eax;
/* d9ea73: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9ea76: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ea78: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9ea7c: je 0xd9ea9e */
  if (zf) goto L_d9ea9e;
L_d9ea7e: /* d9ea7e: mov edx, dword ptr [0xde5198] */
  edx = R32((uint32_t)(0xde5198u));
/* d9ea84: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9ea87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9ea88: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9ea8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9ea8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ea8e: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd9ea93u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d9ea93: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d9ea96: mov dword ptr [eax], 0xdbf748 */
  W32((uint32_t)(eax), 0xdbf748u);
/* d9ea9c: jmp 0xd9eaa0 */
  goto L_d9eaa0;
L_d9ea9e: /* d9ea9e: xor eax, eax */
  eax = 0;
L_d9eaa0: /* d9eaa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9eaa2: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* d9eaa5: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* d9eaa8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9eaaa: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* d9eaad: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d9eab0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9eab2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9eab6: call 0xd81843 */
  esp -= 4; W32(esp, 0xd9eabbu); SPILL(); f_d81843(); if (g_unwind) return; RELOAD();
/* d9eabb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9eabe: lea eax, [edi - 0x14] */
  eax = (uint32_t)(edi + 0xffffffecu);
/* d9eac1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9eac3: jl 0xd9eaca */
  if ((sf != of)) goto L_d9eaca;
L_d9eac5: /* d9eac5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9eac8: jmp 0xd9eacf */
  goto L_d9eacf;
L_d9eaca: /* d9eaca: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9eacd: mov ecx, eax */
  ecx = eax;
L_d9eacf: /* d9eacf: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* d9ead2: mov eax, ebx */
  eax = ebx;
/* d9ead4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9ead5: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* d9ead8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9eada: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9eadd: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* d9eae0: mov eax, esp */
  eax = esp;
/* d9eae2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d9eae4: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* d9eae7: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* d9eaea: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* d9eaed: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d9eaf0: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d9eaf3: mov edx, edi */
  edx = edi;
/* d9eaf5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d9eaf8: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* d9eafb: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* d9eafe: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* d9eb01: call 0xd8171c */
  esp -= 4; W32(esp, 0xd9eb06u); SPILL(); f_d8171c(); if (g_unwind) return; RELOAD();
/* d9eb06: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* d9eb09: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d9eb0c: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* d9eb0f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9eb14: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9eb16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9eb18: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* d9eb1b: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9eb1e: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d9eb23: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* d9eb26: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* d9eb29: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* d9eb2e: add edi, -2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d9eb31: add ebx, -2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d9eb34: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9eb36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9eb36: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9eb39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9eb3b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d9eb3f: je 0xd9eb52 */
  if (zf) goto L_d9eb52;
L_d9eb41: /* d9eb41: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d9eb44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9eb46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9eb48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9eb49: mov ecx, eax */
  ecx = eax;
/* d9eb4b: call 0xd82928 */
  esp -= 4; W32(esp, 0xd9eb50u); SPILL(); f_d82928(); if (g_unwind) return; RELOAD();
/* d9eb50: jmp 0xd9eb54 */
  goto L_d9eb54;
L_d9eb52: /* d9eb52: xor eax, eax */
  eax = 0;
L_d9eb54: /* d9eb54: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* d9eb57: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* d9eb5a: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* d9eb5d: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* d9eb60: add eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9eb65: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9eb68: mov dword ptr [eax + 8], 0xd8141a */
  W32((uint32_t)(eax + 0x8u), 0xd8141au);
/* d9eb6f: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* d9eb72: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* d9eb74: add eax, 0xac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9eb79: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9eb7b: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d9eb7e: mov dword ptr [eax + 8], 0xd814d8 */
  W32((uint32_t)(eax + 0x8u), 0xd814d8u);
/* d9eb85: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d9eb88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9eb8a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9eb8e: call 0xd81ca8 */
  esp -= 4; W32(esp, 0xd9eb93u); SPILL(); f_d81ca8(); if (g_unwind) return; RELOAD();
/* d9eb93: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9eb96: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9eb99: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* d9eb9c: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* d9eb9f: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d9eba1: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* d9eba4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d9eba6: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d9eba8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9ebaa: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9ebad: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* d9ebb0: sub ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* d9ebb3: mov edx, esp */
  edx = esp;
/* d9ebb5: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* d9ebb7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* d9ebba: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d9ebbd: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* d9ebc0: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* d9ebc3: call 0xd8171c */
  esp -= 4; W32(esp, 0xd9ebc8u); SPILL(); f_d8171c(); if (g_unwind) return; RELOAD();
/* d9ebc8: call dword ptr [0xde8a28] */
  esp -= 4; W32(esp, 0xd9ebceu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* d9ebce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ebd0: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d9ebd3: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* d9ebda: jne 0xd9ebf4 */
  if (!zf) goto L_d9ebf4;
L_d9ebdc: /* d9ebdc: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* d9ebe1: push 0xde35e8 */
  { uint32_t v = 0xde35e8u; esp -= 4; W32(esp, v); }
/* d9ebe6: push 0xde35e0 */
  { uint32_t v = 0xde35e0u; esp -= 4; W32(esp, v); }
/* d9ebeb: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9ebf1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9ebf1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9ebf4: /* d9ebf4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* d9ebf7: call 0xd821da */
  esp -= 4; W32(esp, 0xd9ebfcu); SPILL(); f_d821da(); if (g_unwind) return; RELOAD();
/* d9ebfc: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9ebff: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_d9ec02: /* d9ec02: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
/* d9ec07: cmp edi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9ec0a: jge 0xd9ec71 */
  if ((sf == of)) goto L_d9ec71;
L_d9ec0c: /* d9ec0c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d9ec0e: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* d9ec11: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* d9ec14: mov eax, dword ptr [edx + 0x6c] */
  eax = R32((uint32_t)(edx + 0x6cu));
/* d9ec17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ec18: call dword ptr [0xde8a24] */
  esp -= 4; W32(esp, 0xd9ec1eu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* d9ec1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ec20: je 0xd9ec4e */
  if (zf) goto L_d9ec4e;
L_d9ec22: /* d9ec22: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
/* d9ec27: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9ec29: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* d9ec2c: mov edx, dword ptr [ecx + 0x498] */
  edx = R32((uint32_t)(ecx + 0x498u));
/* d9ec32: test dh, 0x10 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9ec35: je 0xd9ec53 */
  if (zf) goto L_d9ec53;
L_d9ec37: /* d9ec37: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9ec3a: jne 0xd9ec53 */
  if (!zf) goto L_d9ec53;
L_d9ec3c: /* d9ec3c: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9ec42u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9ec42: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d9ec45: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ec47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ec48: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xd9ec4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9ec4e: /* d9ec4e: mov eax, dword ptr [0xde8950] */
  eax = R32((uint32_t)(0xde8950u));
L_d9ec53: /* d9ec53: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d9ec56: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9ec57: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9ec59: jge 0xd9ec71 */
  if ((sf == of)) goto L_d9ec71;
L_d9ec5b: /* d9ec5b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9ec5d: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* d9ec60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ec62: je 0xd9ec53 */
  if (zf) goto L_d9ec53;
L_d9ec64: /* d9ec64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9ec65: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9ec6bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9ec6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ec6d: je 0xd9ec4e */
  if (zf) goto L_d9ec4e;
L_d9ec6f: /* d9ec6f: jmp 0xd9ec02 */
  goto L_d9ec02;
L_d9ec71: /* d9ec71: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* d9ec74: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9ec7au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9ec7a: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d9ec7d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ec7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ec80: call dword ptr [edx + 0x100] */
  { uint32_t t = R32((uint32_t)(edx + 0x100u)); esp -= 4; W32(esp, 0xd9ec86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ec86: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d9ec89: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ec8b: xor ebx, ebx */
  ebx = 0;
/* d9ec8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9ec8f: setl bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* d9ec92: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* d9ec93: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* d9ec95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9ec96: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xd9ec9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ec9c: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d9ec9f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9eca1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9eca3: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xd9eca6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9eca6: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* d9eca9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ecab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9ecad: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xd9ecb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ecb0: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* d9ecb3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d9ecb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9ecb7: call dword ptr [0xde8ed8] */
  esp -= 4; W32(esp, 0xd9ecbdu); SPILL(); call_ind(R32(0xde8ed8u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* d9ecbd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9ecc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9ecc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9ecc2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9ecc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9ecca: mov esp, ebp */
  esp = ebp;
/* d9eccc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9eccd: ret  */
  esp += 4; SPILL(); return;
}

void f_d9ecce(void) {
  LOAD_REGS();
L_d9ecce: /* d9ecce: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d9ecd1: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9ecd6: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* d9ecd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ecda: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* d9ecdd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9ece2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9ece2(); return;
}

void f_d9ece2(void) {
  LOAD_REGS();
L_d9ece2: /* d9ece2: push 0xdc3890 */
  { uint32_t v = 0xdc3890u; esp -= 4; W32(esp, v); }
/* d9ece7: push 0xde2920 */
  { uint32_t v = 0xde2920u; esp -= 4; W32(esp, v); }
/* d9ecec: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9ecf2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9ecf2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9ecf5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9ecf7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9ecf9: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9ecfeu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9ecfe: guest_badaddr(0xd9ecfe); return;
}

void f_d9edd0(void) {
  LOAD_REGS();
L_d9edd0: /* d9edd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9edd1: mov ebp, esp */
  ebp = esp;
/* d9edd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9edd5: push 0xdba19b */
  { uint32_t v = 0xdba19bu; esp -= 4; W32(esp, v); }
/* d9edda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9ede0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ede1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9ede8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9edeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9edec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9eded: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9edee: mov esi, ecx */
  esi = ecx;
/* d9edf0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9edf2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9edf5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9edf7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9edfe: call dword ptr [eax + 0xf4] */
  { uint32_t t = R32((uint32_t)(eax + 0xf4u)); esp -= 4; W32(esp, 0xd9ee04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ee04: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9ee0a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9ee0c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ee0e: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d9ee13: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* d9ee15: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9ee17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ee17: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9ee1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9ee1c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9ee20: je 0xd9ee63 */
  if (zf) goto L_d9ee63;
L_d9ee22: /* d9ee22: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* d9ee25: mov edi, 3 */
  edi = 0x3u;
/* d9ee2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ee2b: mov ecx, esi */
  ecx = esi;
/* d9ee2d: mov ebx, edi */
  ebx = edi;
/* d9ee2f: call 0xd8284c */
  esp -= 4; W32(esp, 0xd9ee34u); SPILL(); f_d8284c(); if (g_unwind) return; RELOAD();
/* d9ee34: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9ee36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9ee37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9ee38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9ee3b: mov ecx, esp */
  ecx = esp;
/* d9ee3d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d9ee3f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d9ee42: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* d9ee45: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* d9ee48: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* d9ee4b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* d9ee4e: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* d9ee51: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9ee54: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d9ee57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ee58: xor eax, eax */
  eax = 0;
/* d9ee5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ee5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9ee5c: call 0xd81361 */
  esp -= 4; W32(esp, 0xd9ee61u); SPILL(); f_d81361(); if (g_unwind) return; RELOAD();
/* d9ee61: jmp 0xd9ee65 */
  goto L_d9ee65;
L_d9ee63: /* d9ee63: xor eax, eax */
  eax = 0;
L_d9ee65: /* d9ee65: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d9ee68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9ee69: mov ecx, esi */
  ecx = esi;
/* d9ee6b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9ee6f: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* d9ee75: call 0xd81f14 */
  esp -= 4; W32(esp, 0xd9ee7au); SPILL(); f_d81f14(); if (g_unwind) return; RELOAD();
/* d9ee7a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9ee7c: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* d9ee7f: mov ecx, esi */
  ecx = esi;
/* d9ee81: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd9ee87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ee87: mov ecx, dword ptr [esi + 0xf0] */
  ecx = R32((uint32_t)(esi + 0xf0u));
/* d9ee8d: mov dword ptr [ecx + 0x4c], eax */
  W32((uint32_t)(ecx + 0x4cu), eax);
/* d9ee90: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* d9ee93: mov dword ptr [ecx + 0x50], edi */
  W32((uint32_t)(ecx + 0x50u), edi);
/* d9ee96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9ee97: mov ecx, esi */
  ecx = esi;
/* d9ee99: call 0xd8284c */
  esp -= 4; W32(esp, 0xd9ee9eu); SPILL(); f_d8284c(); if (g_unwind) return; RELOAD();
/* d9ee9e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9eea0: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d9eea3: mov ebx, dword ptr [esi + 0xf0] */
  ebx = R32((uint32_t)(esi + 0xf0u));
/* d9eea9: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* d9eeac: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d9eeaf: add ebx, 0x64 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d9eeb2: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d9eeb5: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* d9eeb7: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* d9eeba: sub ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d9eebd: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* d9eec0: mov dword ptr [ebx + 0xc], edi */
  W32((uint32_t)(ebx + 0xcu), edi);
/* d9eec3: mov ecx, dword ptr [esi + 0xf0] */
  ecx = R32((uint32_t)(esi + 0xf0u));
/* d9eec9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9eecb: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd9eed1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9eed1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9eed4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9eed5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9eed6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9eedd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9eede: mov esp, ebp */
  esp = ebp;
/* d9eee0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9eee1: ret  */
  esp += 4; SPILL(); return;
}

void f_d9eee2(void) {
  LOAD_REGS();
L_d9eee2: /* d9eee2: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* d9eee5: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9eeea: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* d9eeed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9eeee: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d9eef1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9eef6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9eef6(); return;
}

void f_d9eef6(void) {
  LOAD_REGS();
L_d9eef6: /* d9eef6: push 0xdc38dc */
  { uint32_t v = 0xdc38dcu; esp -= 4; W32(esp, v); }
/* d9eefb: push 0xde2a3c */
  { uint32_t v = 0xde2a3cu; esp -= 4; W32(esp, v); }
/* d9ef00: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9ef06u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9ef06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9ef09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9ef0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9ef0d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9ef12u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9ef12: guest_badaddr(0xd9ef12); return;
}

void f_d9ef80(void) {
  LOAD_REGS();
L_d9ef80: /* d9ef80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9ef81: mov ebp, esp */
  ebp = esp;
/* d9ef83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9ef85: push 0xdba1c0 */
  { uint32_t v = 0xdba1c0u; esp -= 4; W32(esp, v); }
/* d9ef8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9ef90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ef91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9ef98: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9ef9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9ef9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9ef9d: mov esi, ecx */
  esi = ecx;
/* d9ef9f: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* d9efa2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d9efa5: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* d9efa8: xor ebx, ebx */
  ebx = 0;
/* d9efaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9efab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9efad: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d9efb0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9efb3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d9efb6: je 0xd9f1f1 */
  if (zf) goto L_d9f1f1;
L_d9efbc: /* d9efbc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9efbe: je 0xd9f128 */
  if (zf) goto L_d9f128;
L_d9efc4: /* d9efc4: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* d9efca: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9efcd: je 0xd9f128 */
  if (zf) goto L_d9f128;
L_d9efd3: /* d9efd3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9efd6: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* d9efd9: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9efdfu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9efdf: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9efe2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9efe3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9efe6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9efea: call 0xd81546 */
  esp -= 4; W32(esp, 0xd9efefu); SPILL(); f_d81546(); if (g_unwind) return; RELOAD();
/* d9efef: nop  */
L_d9eff0: /* d9eff0: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9eff3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9eff5: je 0xd9f027 */
  if (zf) goto L_d9f027;
L_d9eff7: /* d9eff7: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9effa: lea edi, [ebx + 0x40] */
  edi = (uint32_t)(ebx + 0x40u);
/* d9effd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9effe: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9f004: call 0xd81f8c */
  esp -= 4; W32(esp, 0xd9f009u); SPILL(); f_d81f8c(); if (g_unwind) return; RELOAD();
/* d9f009: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f00c: jne 0xd9f017 */
  if (!zf) goto L_d9f017;
L_d9f00e: /* d9f00e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f00f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f012: call 0xd82621 */
  esp -= 4; W32(esp, 0xd9f017u); SPILL(); f_d82621(); if (g_unwind) return; RELOAD();
L_d9f017: /* d9f017: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* d9f01a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f01d: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* d9f020: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f025u); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f025: jmp 0xd9eff0 */
  goto L_d9eff0;
L_d9f027: /* d9f027: xor ebx, ebx */
  ebx = 0;
L_d9f029: /* d9f029: cmp ebx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9f02c: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d9f02f: jge 0xd9f0fe */
  if ((sf == of)) goto L_d9f0fe;
L_d9f035: /* d9f035: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d9f038: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f03a: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* d9f03d: je 0xd9f047 */
  if (zf) goto L_d9f047;
L_d9f03f: /* d9f03f: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d9f042: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9f045: jmp 0xd9f04e */
  goto L_d9f04e;
L_d9f047: /* d9f047: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_d9f04e: /* d9f04e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f051: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f056u); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f056: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9f059: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f05b: je 0xd9f0f8 */
  if (zf) goto L_d9f0f8;
L_d9f061: /* d9f061: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* d9f064: lea edx, [ecx + ebx*4] */
  edx = (uint32_t)(ecx + ebx*4);
/* d9f067: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f068: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* d9f06b: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xd9f071u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* d9f071: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f073: je 0xd9f0ed */
  if (zf) goto L_d9f0ed;
L_d9f075: /* d9f075: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* d9f078: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9f07a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f07b: mov ecx, esi */
  ecx = esi;
/* d9f07d: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xd9f080u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f080: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f082: je 0xd9f0ed */
  if (zf) goto L_d9f0ed;
L_d9f084: /* d9f084: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* d9f08a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* d9f08c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9f08e: push 0xde2de4 */
  { uint32_t v = 0xde2de4u; esp -= 4; W32(esp, v); }
/* d9f093: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9f098: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd9f09au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f09a: mov ebx, eax */
  ebx = eax;
/* d9f09c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f09e: je 0xd9f0cc */
  if (zf) goto L_d9f0cc;
L_d9f0a0: /* d9f0a0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d9f0a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f0a4: mov ecx, edi */
  ecx = edi;
/* d9f0a6: call dword ptr [0xde89e4] */
  esp -= 4; W32(esp, 0xd9f0acu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* d9f0ac: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* d9f0af: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d9f0b1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9f0b4: push 0x29a */
  { uint32_t v = 0x29au; esp -= 4; W32(esp, v); }
/* d9f0b9: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9f0bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f0bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f0bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f0be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f0bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f0c0: mov ecx, ebx */
  ecx = ebx;
/* d9f0c2: call 0xd81609 */
  esp -= 4; W32(esp, 0xd9f0c7u); SPILL(); f_d81609(); if (g_unwind) return; RELOAD();
/* d9f0c7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9f0ca: jmp 0xd9f0d3 */
  goto L_d9f0d3;
L_d9f0cc: /* d9f0cc: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_d9f0d3: /* d9f0d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f0d5: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* d9f0d8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f0da: mov ecx, ebx */
  ecx = ebx;
/* d9f0dc: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f0e2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f0e2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d9f0e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9f0e7: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f0ea: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_d9f0ed: /* d9f0ed: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* d9f0f0: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* d9f0f3: jmp 0xd9f04e */
  goto L_d9f04e;
L_d9f0f8: /* d9f0f8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9f0f9: jmp 0xd9f029 */
  goto L_d9f029;
L_d9f0fe: /* d9f0fe: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f101: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9f105: call 0xd81f32 */
  esp -= 4; W32(esp, 0xd9f10au); SPILL(); f_d81f32(); if (g_unwind) return; RELOAD();
L_d9f10a: /* d9f10a: mov ecx, esi */
  ecx = esi;
/* d9f10c: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f111u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f111: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9f114: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* d9f117: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f11a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f11b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f11c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f124: mov esp, ebp */
  esp = ebp;
/* d9f126: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f127: ret  */
  esp += 4; SPILL(); return;
L_d9f128: /* d9f128: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f12b: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9f131u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9f131: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d9f134: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f136: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d9f13a: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* d9f13d: je 0xd9f147 */
  if (zf) goto L_d9f147;
L_d9f13f: /* d9f13f: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d9f142: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9f145: jmp 0xd9f14a */
  goto L_d9f14a;
L_d9f147: /* d9f147: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
L_d9f14a: /* d9f14a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f14d: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f152u); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f152: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9f155: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f157: je 0xd9f190 */
  if (zf) goto L_d9f190;
L_d9f159: /* d9f159: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* d9f15c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f15e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f15f: mov ecx, esi */
  ecx = esi;
/* d9f161: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9f164u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f164: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f166: je 0xd9f188 */
  if (zf) goto L_d9f188;
L_d9f168: /* d9f168: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f16b: lea edi, [ebx + 0x40] */
  edi = (uint32_t)(ebx + 0x40u);
/* d9f16e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f16f: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9f175: call 0xd81f8c */
  esp -= 4; W32(esp, 0xd9f17au); SPILL(); f_d81f8c(); if (g_unwind) return; RELOAD();
/* d9f17a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f17d: jne 0xd9f188 */
  if (!zf) goto L_d9f188;
L_d9f17f: /* d9f17f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f180: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f183: call 0xd82621 */
  esp -= 4; W32(esp, 0xd9f188u); SPILL(); f_d82621(); if (g_unwind) return; RELOAD();
L_d9f188: /* d9f188: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* d9f18b: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* d9f18e: jmp 0xd9f14a */
  goto L_d9f14a;
L_d9f190: /* d9f190: xor ebx, ebx */
  ebx = 0;
L_d9f192: /* d9f192: cmp ebx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9f195: jge 0xd9f0fe */
  if ((sf == of)) goto L_d9f0fe;
L_d9f19b: /* d9f19b: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* d9f1a1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* d9f1a3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9f1a5: push 0xde2e00 */
  { uint32_t v = 0xde2e00u; esp -= 4; W32(esp, v); }
/* d9f1aa: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* d9f1ac: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd9f1aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f1ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f1b0: je 0xd9f1d0 */
  if (zf) goto L_d9f1d0;
L_d9f1b2: /* d9f1b2: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* d9f1b5: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* d9f1b8: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f1bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f1bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f1be: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d9f1c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f1c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f1c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f1c4: mov ecx, eax */
  ecx = eax;
/* d9f1c6: call 0xd81f5f */
  esp -= 4; W32(esp, 0xd9f1cbu); SPILL(); f_d81f5f(); if (g_unwind) return; RELOAD();
/* d9f1cb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9f1ce: jmp 0xd9f1d7 */
  goto L_d9f1d7;
L_d9f1d0: /* d9f1d0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9f1d7: /* d9f1d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f1d9: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* d9f1dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f1de: mov ecx, edi */
  ecx = edi;
/* d9f1e0: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f1e6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f1e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d9f1e8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f1eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d9f1ee: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9f1ef: jmp 0xd9f192 */
  goto L_d9f192;
L_d9f1f1: /* d9f1f1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f1f3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* d9f1f6: je 0xd9f200 */
  if (zf) goto L_d9f200;
L_d9f1f8: /* d9f1f8: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d9f1fb: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9f1fe: jmp 0xd9f203 */
  goto L_d9f203;
L_d9f200: /* d9f200: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
L_d9f203: /* d9f203: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f206: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f20bu); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f20b: jmp 0xd9f210 */
  goto L_d9f210;
L_d9f210: /* d9f210: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9f213: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f215: je 0xd9f10a */
  if (zf) goto L_d9f10a;
L_d9f21b: /* d9f21b: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9f21e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f221: mov ecx, esi */
  ecx = esi;
/* d9f223: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9f226u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f226: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f228: je 0xd9f2bd */
  if (zf) goto L_d9f2bd;
L_d9f22e: /* d9f22e: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* d9f231: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f232: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f235: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9f23b: call 0xd81f8c */
  esp -= 4; W32(esp, 0xd9f240u); SPILL(); f_d81f8c(); if (g_unwind) return; RELOAD();
/* d9f240: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f243: jne 0xd9f2bd */
  if (!zf) goto L_d9f2bd;
L_d9f245: /* d9f245: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d9f247: mov ecx, edi */
  ecx = edi;
/* d9f249: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0xd9f24cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f24c: mov ebx, eax */
  ebx = eax;
/* d9f24e: call dword ptr [0xde8980] */
  esp -= 4; W32(esp, 0xd9f254u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* d9f254: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f256: je 0xd9f2bd */
  if (zf) goto L_d9f2bd;
L_d9f258: /* d9f258: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9f25d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9f25f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9f261: push 0xde2e1c */
  { uint32_t v = 0xde2e1cu; esp -= 4; W32(esp, v); }
/* d9f266: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9f26b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9f26du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f26d: mov ebx, eax */
  ebx = eax;
/* d9f26f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f271: je 0xd9f29f */
  if (zf) goto L_d9f29f;
L_d9f273: /* d9f273: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d9f276: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f277: mov ecx, edi */
  ecx = edi;
/* d9f279: call dword ptr [0xde89e4] */
  esp -= 4; W32(esp, 0xd9f27fu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* d9f27f: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* d9f282: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9f284: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9f287: push 0x29a */
  { uint32_t v = 0x29au; esp -= 4; W32(esp, v); }
/* d9f28c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9f28e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f28f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f291: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f293: mov ecx, ebx */
  ecx = ebx;
/* d9f295: call 0xd81609 */
  esp -= 4; W32(esp, 0xd9f29au); SPILL(); f_d81609(); if (g_unwind) return; RELOAD();
/* d9f29a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9f29d: jmp 0xd9f2a6 */
  goto L_d9f2a6;
L_d9f29f: /* d9f29f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9f2a6: /* d9f2a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f2a8: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* d9f2ab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f2ad: mov ecx, ebx */
  ecx = ebx;
/* d9f2af: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f2b5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f2b5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d9f2b7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f2ba: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_d9f2bd: /* d9f2bd: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* d9f2c0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f2c3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9f2c6: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f2cbu); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f2cb: xor ebx, ebx */
  ebx = 0;
/* d9f2cd: jmp 0xd9f210 */
  goto L_d9f210;
}

void f_d9f128(void) {
  LOAD_REGS();
  goto L_d9f128;
L_d9f0fe: /* d9f0fe: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f101: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9f105: call 0xd81f32 */
  esp -= 4; W32(esp, 0xd9f10au); SPILL(); f_d81f32(); if (g_unwind) return; RELOAD();
/* d9f10a: mov ecx, esi */
  ecx = esi;
/* d9f10c: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f111u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f111: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9f114: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* d9f117: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f11a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f11b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f11c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f124: mov esp, ebp */
  esp = ebp;
/* d9f126: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f127: ret  */
  esp += 4; SPILL(); return;
L_d9f128: /* d9f128: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f12b: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9f131u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9f131: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d9f134: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f136: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d9f13a: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* d9f13d: je 0xd9f147 */
  if (zf) goto L_d9f147;
L_d9f13f: /* d9f13f: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d9f142: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9f145: jmp 0xd9f14a */
  goto L_d9f14a;
L_d9f147: /* d9f147: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
L_d9f14a: /* d9f14a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f14d: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f152u); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f152: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9f155: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f157: je 0xd9f190 */
  if (zf) goto L_d9f190;
L_d9f159: /* d9f159: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* d9f15c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f15e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f15f: mov ecx, esi */
  ecx = esi;
/* d9f161: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9f164u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f164: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f166: je 0xd9f188 */
  if (zf) goto L_d9f188;
L_d9f168: /* d9f168: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f16b: lea edi, [ebx + 0x40] */
  edi = (uint32_t)(ebx + 0x40u);
/* d9f16e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f16f: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9f175: call 0xd81f8c */
  esp -= 4; W32(esp, 0xd9f17au); SPILL(); f_d81f8c(); if (g_unwind) return; RELOAD();
/* d9f17a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f17d: jne 0xd9f188 */
  if (!zf) goto L_d9f188;
L_d9f17f: /* d9f17f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f180: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f183: call 0xd82621 */
  esp -= 4; W32(esp, 0xd9f188u); SPILL(); f_d82621(); if (g_unwind) return; RELOAD();
L_d9f188: /* d9f188: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* d9f18b: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* d9f18e: jmp 0xd9f14a */
  goto L_d9f14a;
L_d9f190: /* d9f190: xor ebx, ebx */
  ebx = 0;
L_d9f192: /* d9f192: cmp ebx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9f195: jge 0xd9f0fe */
  if ((sf == of)) goto L_d9f0fe;
L_d9f19b: /* d9f19b: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* d9f1a1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* d9f1a3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9f1a5: push 0xde2e00 */
  { uint32_t v = 0xde2e00u; esp -= 4; W32(esp, v); }
/* d9f1aa: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* d9f1ac: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd9f1aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f1ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f1b0: je 0xd9f1d0 */
  if (zf) goto L_d9f1d0;
L_d9f1b2: /* d9f1b2: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* d9f1b5: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* d9f1b8: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f1bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f1bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f1be: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d9f1c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f1c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f1c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f1c4: mov ecx, eax */
  ecx = eax;
/* d9f1c6: call 0xd81f5f */
  esp -= 4; W32(esp, 0xd9f1cbu); SPILL(); f_d81f5f(); if (g_unwind) return; RELOAD();
/* d9f1cb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9f1ce: jmp 0xd9f1d7 */
  goto L_d9f1d7;
L_d9f1d0: /* d9f1d0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9f1d7: /* d9f1d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f1d9: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* d9f1dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f1de: mov ecx, edi */
  ecx = edi;
/* d9f1e0: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f1e6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f1e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d9f1e8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f1eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d9f1ee: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9f1ef: jmp 0xd9f192 */
  goto L_d9f192;
}

void f_d9f147(void) {
  LOAD_REGS();
  goto L_d9f147;
L_d9f0fe: /* d9f0fe: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f101: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9f105: call 0xd81f32 */
  esp -= 4; W32(esp, 0xd9f10au); SPILL(); f_d81f32(); if (g_unwind) return; RELOAD();
/* d9f10a: mov ecx, esi */
  ecx = esi;
/* d9f10c: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f111u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f111: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9f114: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* d9f117: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f11a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f11b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f11c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f124: mov esp, ebp */
  esp = ebp;
/* d9f126: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f127: ret  */
  esp += 4; SPILL(); return;
L_d9f147: /* d9f147: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
L_d9f14a: /* d9f14a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f14d: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f152u); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f152: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9f155: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f157: je 0xd9f190 */
  if (zf) goto L_d9f190;
L_d9f159: /* d9f159: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* d9f15c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f15e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f15f: mov ecx, esi */
  ecx = esi;
/* d9f161: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9f164u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f164: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f166: je 0xd9f188 */
  if (zf) goto L_d9f188;
L_d9f168: /* d9f168: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f16b: lea edi, [ebx + 0x40] */
  edi = (uint32_t)(ebx + 0x40u);
/* d9f16e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f16f: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9f175: call 0xd81f8c */
  esp -= 4; W32(esp, 0xd9f17au); SPILL(); f_d81f8c(); if (g_unwind) return; RELOAD();
/* d9f17a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f17d: jne 0xd9f188 */
  if (!zf) goto L_d9f188;
L_d9f17f: /* d9f17f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f180: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f183: call 0xd82621 */
  esp -= 4; W32(esp, 0xd9f188u); SPILL(); f_d82621(); if (g_unwind) return; RELOAD();
L_d9f188: /* d9f188: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* d9f18b: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* d9f18e: jmp 0xd9f14a */
  goto L_d9f14a;
L_d9f190: /* d9f190: xor ebx, ebx */
  ebx = 0;
L_d9f192: /* d9f192: cmp ebx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9f195: jge 0xd9f0fe */
  if ((sf == of)) goto L_d9f0fe;
L_d9f19b: /* d9f19b: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* d9f1a1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* d9f1a3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9f1a5: push 0xde2e00 */
  { uint32_t v = 0xde2e00u; esp -= 4; W32(esp, v); }
/* d9f1aa: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* d9f1ac: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd9f1aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f1ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f1b0: je 0xd9f1d0 */
  if (zf) goto L_d9f1d0;
L_d9f1b2: /* d9f1b2: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* d9f1b5: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* d9f1b8: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f1bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f1bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f1be: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d9f1c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f1c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f1c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f1c4: mov ecx, eax */
  ecx = eax;
/* d9f1c6: call 0xd81f5f */
  esp -= 4; W32(esp, 0xd9f1cbu); SPILL(); f_d81f5f(); if (g_unwind) return; RELOAD();
/* d9f1cb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9f1ce: jmp 0xd9f1d7 */
  goto L_d9f1d7;
L_d9f1d0: /* d9f1d0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9f1d7: /* d9f1d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f1d9: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* d9f1dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f1de: mov ecx, edi */
  ecx = edi;
/* d9f1e0: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f1e6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f1e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d9f1e8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f1eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d9f1ee: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9f1ef: jmp 0xd9f192 */
  goto L_d9f192;
}

void f_d9f190(void) {
  LOAD_REGS();
  goto L_d9f190;
L_d9f0fe: /* d9f0fe: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f101: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9f105: call 0xd81f32 */
  esp -= 4; W32(esp, 0xd9f10au); SPILL(); f_d81f32(); if (g_unwind) return; RELOAD();
/* d9f10a: mov ecx, esi */
  ecx = esi;
/* d9f10c: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f111u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f111: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9f114: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* d9f117: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f11a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f11b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f11c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f124: mov esp, ebp */
  esp = ebp;
/* d9f126: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f127: ret  */
  esp += 4; SPILL(); return;
L_d9f190: /* d9f190: xor ebx, ebx */
  ebx = 0;
L_d9f192: /* d9f192: cmp ebx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9f195: jge 0xd9f0fe */
  if ((sf == of)) goto L_d9f0fe;
L_d9f19b: /* d9f19b: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* d9f1a1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* d9f1a3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9f1a5: push 0xde2e00 */
  { uint32_t v = 0xde2e00u; esp -= 4; W32(esp, v); }
/* d9f1aa: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* d9f1ac: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd9f1aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f1ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f1b0: je 0xd9f1d0 */
  if (zf) goto L_d9f1d0;
L_d9f1b2: /* d9f1b2: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* d9f1b5: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* d9f1b8: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f1bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f1bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f1be: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d9f1c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f1c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f1c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f1c4: mov ecx, eax */
  ecx = eax;
/* d9f1c6: call 0xd81f5f */
  esp -= 4; W32(esp, 0xd9f1cbu); SPILL(); f_d81f5f(); if (g_unwind) return; RELOAD();
/* d9f1cb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9f1ce: jmp 0xd9f1d7 */
  goto L_d9f1d7;
L_d9f1d0: /* d9f1d0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9f1d7: /* d9f1d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f1d9: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* d9f1dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f1de: mov ecx, edi */
  ecx = edi;
/* d9f1e0: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f1e6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f1e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d9f1e8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f1eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d9f1ee: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9f1ef: jmp 0xd9f192 */
  goto L_d9f192;
}

void f_d9f1d0(void) {
  LOAD_REGS();
  goto L_d9f1d0;
L_d9f0fe: /* d9f0fe: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d9f101: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9f105: call 0xd81f32 */
  esp -= 4; W32(esp, 0xd9f10au); SPILL(); f_d81f32(); if (g_unwind) return; RELOAD();
/* d9f10a: mov ecx, esi */
  ecx = esi;
/* d9f10c: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f111u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f111: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9f114: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* d9f117: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f11a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f11b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f11c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f124: mov esp, ebp */
  esp = ebp;
/* d9f126: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f127: ret  */
  esp += 4; SPILL(); return;
L_d9f192: /* d9f192: cmp ebx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9f195: jge 0xd9f0fe */
  if ((sf == of)) goto L_d9f0fe;
L_d9f19b: /* d9f19b: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* d9f1a1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* d9f1a3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9f1a5: push 0xde2e00 */
  { uint32_t v = 0xde2e00u; esp -= 4; W32(esp, v); }
/* d9f1aa: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* d9f1ac: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd9f1aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f1ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f1b0: je 0xd9f1d0 */
  if (zf) goto L_d9f1d0;
L_d9f1b2: /* d9f1b2: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* d9f1b5: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* d9f1b8: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f1bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f1bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f1be: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d9f1c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f1c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f1c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f1c4: mov ecx, eax */
  ecx = eax;
/* d9f1c6: call 0xd81f5f */
  esp -= 4; W32(esp, 0xd9f1cbu); SPILL(); f_d81f5f(); if (g_unwind) return; RELOAD();
/* d9f1cb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9f1ce: jmp 0xd9f1d7 */
  goto L_d9f1d7;
L_d9f1d0: /* d9f1d0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9f1d7: /* d9f1d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f1d9: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* d9f1dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f1de: mov ecx, edi */
  ecx = edi;
/* d9f1e0: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f1e6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f1e6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d9f1e8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f1eb: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d9f1ee: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9f1ef: jmp 0xd9f192 */
  goto L_d9f192;
}

void f_d9f1f1(void) {
  LOAD_REGS();
  goto L_d9f1f1;
L_d9f10a: /* d9f10a: mov ecx, esi */
  ecx = esi;
/* d9f10c: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f111u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f111: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9f114: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* d9f117: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f11a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f11b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f11c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f124: mov esp, ebp */
  esp = ebp;
/* d9f126: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f127: ret  */
  esp += 4; SPILL(); return;
L_d9f1f1: /* d9f1f1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f1f3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* d9f1f6: je 0xd9f200 */
  if (zf) goto L_d9f200;
L_d9f1f8: /* d9f1f8: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d9f1fb: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9f1fe: jmp 0xd9f203 */
  goto L_d9f203;
L_d9f200: /* d9f200: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
L_d9f203: /* d9f203: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f206: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f20bu); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f20b: jmp 0xd9f210 */
  goto L_d9f210;
L_d9f210: /* d9f210: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9f213: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f215: je 0xd9f10a */
  if (zf) goto L_d9f10a;
L_d9f21b: /* d9f21b: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9f21e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f221: mov ecx, esi */
  ecx = esi;
/* d9f223: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9f226u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f226: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f228: je 0xd9f2bd */
  if (zf) goto L_d9f2bd;
L_d9f22e: /* d9f22e: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* d9f231: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f232: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f235: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9f23b: call 0xd81f8c */
  esp -= 4; W32(esp, 0xd9f240u); SPILL(); f_d81f8c(); if (g_unwind) return; RELOAD();
/* d9f240: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f243: jne 0xd9f2bd */
  if (!zf) goto L_d9f2bd;
L_d9f245: /* d9f245: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d9f247: mov ecx, edi */
  ecx = edi;
/* d9f249: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0xd9f24cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f24c: mov ebx, eax */
  ebx = eax;
/* d9f24e: call dword ptr [0xde8980] */
  esp -= 4; W32(esp, 0xd9f254u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* d9f254: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f256: je 0xd9f2bd */
  if (zf) goto L_d9f2bd;
L_d9f258: /* d9f258: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9f25d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9f25f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9f261: push 0xde2e1c */
  { uint32_t v = 0xde2e1cu; esp -= 4; W32(esp, v); }
/* d9f266: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9f26b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9f26du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f26d: mov ebx, eax */
  ebx = eax;
/* d9f26f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f271: je 0xd9f29f */
  if (zf) goto L_d9f29f;
L_d9f273: /* d9f273: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d9f276: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f277: mov ecx, edi */
  ecx = edi;
/* d9f279: call dword ptr [0xde89e4] */
  esp -= 4; W32(esp, 0xd9f27fu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* d9f27f: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* d9f282: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9f284: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9f287: push 0x29a */
  { uint32_t v = 0x29au; esp -= 4; W32(esp, v); }
/* d9f28c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9f28e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f28f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f291: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f293: mov ecx, ebx */
  ecx = ebx;
/* d9f295: call 0xd81609 */
  esp -= 4; W32(esp, 0xd9f29au); SPILL(); f_d81609(); if (g_unwind) return; RELOAD();
/* d9f29a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9f29d: jmp 0xd9f2a6 */
  goto L_d9f2a6;
L_d9f29f: /* d9f29f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9f2a6: /* d9f2a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f2a8: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* d9f2ab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f2ad: mov ecx, ebx */
  ecx = ebx;
/* d9f2af: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f2b5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f2b5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d9f2b7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f2ba: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_d9f2bd: /* d9f2bd: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* d9f2c0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f2c3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9f2c6: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f2cbu); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f2cb: xor ebx, ebx */
  ebx = 0;
/* d9f2cd: jmp 0xd9f210 */
  goto L_d9f210;
}

void f_d9f200(void) {
  LOAD_REGS();
  goto L_d9f200;
L_d9f10a: /* d9f10a: mov ecx, esi */
  ecx = esi;
/* d9f10c: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f111u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f111: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9f114: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* d9f117: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f11a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f11b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f11c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f124: mov esp, ebp */
  esp = ebp;
/* d9f126: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f127: ret  */
  esp += 4; SPILL(); return;
L_d9f200: /* d9f200: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* d9f203: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f206: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f20bu); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f20b: jmp 0xd9f210 */
  goto L_d9f210;
L_d9f210: /* d9f210: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9f213: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f215: je 0xd9f10a */
  if (zf) goto L_d9f10a;
L_d9f21b: /* d9f21b: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9f21e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f221: mov ecx, esi */
  ecx = esi;
/* d9f223: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9f226u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f226: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f228: je 0xd9f2bd */
  if (zf) goto L_d9f2bd;
L_d9f22e: /* d9f22e: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* d9f231: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f232: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f235: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9f23b: call 0xd81f8c */
  esp -= 4; W32(esp, 0xd9f240u); SPILL(); f_d81f8c(); if (g_unwind) return; RELOAD();
/* d9f240: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f243: jne 0xd9f2bd */
  if (!zf) goto L_d9f2bd;
L_d9f245: /* d9f245: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d9f247: mov ecx, edi */
  ecx = edi;
/* d9f249: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0xd9f24cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f24c: mov ebx, eax */
  ebx = eax;
/* d9f24e: call dword ptr [0xde8980] */
  esp -= 4; W32(esp, 0xd9f254u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* d9f254: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f256: je 0xd9f2bd */
  if (zf) goto L_d9f2bd;
L_d9f258: /* d9f258: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9f25d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9f25f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9f261: push 0xde2e1c */
  { uint32_t v = 0xde2e1cu; esp -= 4; W32(esp, v); }
/* d9f266: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9f26b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9f26du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f26d: mov ebx, eax */
  ebx = eax;
/* d9f26f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f271: je 0xd9f29f */
  if (zf) goto L_d9f29f;
L_d9f273: /* d9f273: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d9f276: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f277: mov ecx, edi */
  ecx = edi;
/* d9f279: call dword ptr [0xde89e4] */
  esp -= 4; W32(esp, 0xd9f27fu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* d9f27f: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* d9f282: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9f284: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9f287: push 0x29a */
  { uint32_t v = 0x29au; esp -= 4; W32(esp, v); }
/* d9f28c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9f28e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f28f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f291: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f293: mov ecx, ebx */
  ecx = ebx;
/* d9f295: call 0xd81609 */
  esp -= 4; W32(esp, 0xd9f29au); SPILL(); f_d81609(); if (g_unwind) return; RELOAD();
/* d9f29a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9f29d: jmp 0xd9f2a6 */
  goto L_d9f2a6;
L_d9f29f: /* d9f29f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9f2a6: /* d9f2a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f2a8: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* d9f2ab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f2ad: mov ecx, ebx */
  ecx = ebx;
/* d9f2af: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f2b5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f2b5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d9f2b7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f2ba: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_d9f2bd: /* d9f2bd: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* d9f2c0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f2c3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9f2c6: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f2cbu); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f2cb: xor ebx, ebx */
  ebx = 0;
/* d9f2cd: jmp 0xd9f210 */
  goto L_d9f210;
}

void f_d9f20d(void) {
  LOAD_REGS();
  goto L_d9f20d;
L_d9f10a: /* d9f10a: mov ecx, esi */
  ecx = esi;
/* d9f10c: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f111u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f111: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9f114: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* d9f117: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f11a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f11b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f11c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f124: mov esp, ebp */
  esp = ebp;
/* d9f126: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f127: ret  */
  esp += 4; SPILL(); return;
L_d9f20d: /* d9f20d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d9f210: /* d9f210: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9f213: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f215: je 0xd9f10a */
  if (zf) goto L_d9f10a;
L_d9f21b: /* d9f21b: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9f21e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f221: mov ecx, esi */
  ecx = esi;
/* d9f223: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9f226u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f226: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f228: je 0xd9f2bd */
  if (zf) goto L_d9f2bd;
L_d9f22e: /* d9f22e: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* d9f231: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f232: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f235: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9f23b: call 0xd81f8c */
  esp -= 4; W32(esp, 0xd9f240u); SPILL(); f_d81f8c(); if (g_unwind) return; RELOAD();
/* d9f240: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f243: jne 0xd9f2bd */
  if (!zf) goto L_d9f2bd;
L_d9f245: /* d9f245: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d9f247: mov ecx, edi */
  ecx = edi;
/* d9f249: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0xd9f24cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f24c: mov ebx, eax */
  ebx = eax;
/* d9f24e: call dword ptr [0xde8980] */
  esp -= 4; W32(esp, 0xd9f254u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* d9f254: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f256: je 0xd9f2bd */
  if (zf) goto L_d9f2bd;
L_d9f258: /* d9f258: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9f25d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9f25f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9f261: push 0xde2e1c */
  { uint32_t v = 0xde2e1cu; esp -= 4; W32(esp, v); }
/* d9f266: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9f26b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9f26du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f26d: mov ebx, eax */
  ebx = eax;
/* d9f26f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f271: je 0xd9f29f */
  if (zf) goto L_d9f29f;
L_d9f273: /* d9f273: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d9f276: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f277: mov ecx, edi */
  ecx = edi;
/* d9f279: call dword ptr [0xde89e4] */
  esp -= 4; W32(esp, 0xd9f27fu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* d9f27f: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* d9f282: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9f284: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9f287: push 0x29a */
  { uint32_t v = 0x29au; esp -= 4; W32(esp, v); }
/* d9f28c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9f28e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f28f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f291: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f293: mov ecx, ebx */
  ecx = ebx;
/* d9f295: call 0xd81609 */
  esp -= 4; W32(esp, 0xd9f29au); SPILL(); f_d81609(); if (g_unwind) return; RELOAD();
/* d9f29a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9f29d: jmp 0xd9f2a6 */
  goto L_d9f2a6;
L_d9f29f: /* d9f29f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9f2a6: /* d9f2a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f2a8: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* d9f2ab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f2ad: mov ecx, ebx */
  ecx = ebx;
/* d9f2af: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f2b5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f2b5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d9f2b7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f2ba: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_d9f2bd: /* d9f2bd: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* d9f2c0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d9f2c3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9f2c6: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f2cbu); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f2cb: xor ebx, ebx */
  ebx = 0;
/* d9f2cd: jmp 0xd9f210 */
  goto L_d9f210;
}

void f_d9f2d2(void) {
  LOAD_REGS();
L_d9f2d2: /* d9f2d2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9f2d5: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9f2da: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* d9f2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f2de: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* d9f2e1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9f2e6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9f2e6(); return;
}

void f_d9f2e6(void) {
  LOAD_REGS();
L_d9f2e6: /* d9f2e6: push 0xdc3914 */
  { uint32_t v = 0xdc3914u; esp -= 4; W32(esp, v); }
/* d9f2eb: push 0xde2e38 */
  { uint32_t v = 0xde2e38u; esp -= 4; W32(esp, v); }
/* d9f2f0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9f2f6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9f2f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9f2f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9f2fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9f2fd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9f302u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9f302: guest_badaddr(0xd9f302); return;
}

void f_d9f400(void) {
  LOAD_REGS();
L_d9f400: /* d9f400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9f401: mov ebp, esp */
  ebp = esp;
/* d9f403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9f405: push 0xdba1d8 */
  { uint32_t v = 0xdba1d8u; esp -= 4; W32(esp, v); }
/* d9f40a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9f410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9f418: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9f41b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9f41c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f41d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f41e: mov esi, ecx */
  esi = ecx;
/* d9f420: xor ebx, ebx */
  ebx = 0;
/* d9f422: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* d9f425: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9f428: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d9f42b: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9f431u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9f431: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d9f434: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f436: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9f43a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9f43d: je 0xd9f447 */
  if (zf) goto L_d9f447;
L_d9f43f: /* d9f43f: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d9f442: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9f445: jmp 0xd9f44a */
  goto L_d9f44a;
L_d9f447: /* d9f447: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_d9f44a: /* d9f44a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d9f44d: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f452u); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f452: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* d9f455: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f457: je 0xd9f47c */
  if (zf) goto L_d9f47c;
L_d9f459: /* d9f459: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9f45c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f45e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f45f: mov ecx, esi */
  ecx = esi;
/* d9f461: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9f464u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f464: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f466: je 0xd9f474 */
  if (zf) goto L_d9f474;
L_d9f468: /* d9f468: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* d9f46b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f46c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* d9f46f: call 0xd82621 */
  esp -= 4; W32(esp, 0xd9f474u); SPILL(); f_d82621(); if (g_unwind) return; RELOAD();
L_d9f474: /* d9f474: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* d9f477: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d9f47a: jmp 0xd9f44a */
  goto L_d9f44a;
L_d9f47c: /* d9f47c: xor edi, edi */
  edi = 0;
/* d9f47e: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_d9f481: /* d9f481: cmp edi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9f484: jge 0xd9f4da */
  if ((sf == of)) goto L_d9f4da;
L_d9f486: /* d9f486: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9f48b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9f48d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9f48f: push 0xde2f08 */
  { uint32_t v = 0xde2f08u; esp -= 4; W32(esp, v); }
/* d9f494: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* d9f496: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9f498u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f498: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f49a: je 0xd9f4b9 */
  if (zf) goto L_d9f4b9;
L_d9f49c: /* d9f49c: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9f49f: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* d9f4a2: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9f4a5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f4a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f4a8: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d9f4ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f4ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f4ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f4ae: mov ecx, eax */
  ecx = eax;
/* d9f4b0: call 0xd81f5f */
  esp -= 4; W32(esp, 0xd9f4b5u); SPILL(); f_d81f5f(); if (g_unwind) return; RELOAD();
/* d9f4b5: mov ebx, eax */
  ebx = eax;
/* d9f4b7: jmp 0xd9f4bb */
  goto L_d9f4bb;
L_d9f4b9: /* d9f4b9: xor ebx, ebx */
  ebx = 0;
L_d9f4bb: /* d9f4bb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f4bd: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* d9f4c0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f4c2: mov ecx, edi */
  ecx = edi;
/* d9f4c4: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f4cau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f4ca: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d9f4cc: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* d9f4cf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d9f4d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9f4d3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9f4d6: mov edi, eax */
  edi = eax;
/* d9f4d8: jmp 0xd9f481 */
  goto L_d9f481;
L_d9f4da: /* d9f4da: mov ecx, esi */
  ecx = esi;
/* d9f4dc: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f4e1u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f4e1: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* d9f4e4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9f4e8: call 0xd81f32 */
  esp -= 4; W32(esp, 0xd9f4edu); SPILL(); f_d81f32(); if (g_unwind) return; RELOAD();
/* d9f4ed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f4f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f4f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f4f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f4f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f4fa: mov esp, ebp */
  esp = ebp;
/* d9f4fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f4fd: ret  */
  esp += 4; SPILL(); return;
}

void f_d9f4fe(void) {
  LOAD_REGS();
L_d9f4fe: /* d9f4fe: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* d9f501: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9f506: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* d9f509: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f50a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* d9f50d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9f512u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9f512(); return;
}

void f_d9f512(void) {
  LOAD_REGS();
L_d9f512: /* d9f512: push 0xdc3948 */
  { uint32_t v = 0xdc3948u; esp -= 4; W32(esp, v); }
/* d9f517: push 0xde2f24 */
  { uint32_t v = 0xde2f24u; esp -= 4; W32(esp, v); }
/* d9f51c: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9f522u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9f522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9f525: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9f527: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9f529: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9f52eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9f52e: guest_badaddr(0xd9f52e); return;
}

void f_d9f580(void) {
  LOAD_REGS();
L_d9f580: /* d9f580: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9f581: mov ebp, esp */
  ebp = esp;
/* d9f583: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9f585: push 0xdba1f0 */
  { uint32_t v = 0xdba1f0u; esp -= 4; W32(esp, v); }
/* d9f58a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9f590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f591: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9f598: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9f59b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9f59c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f59d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f59e: xor edi, edi */
  edi = 0;
/* d9f5a0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9f5a3: mov esi, ecx */
  esi = ecx;
/* d9f5a5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* d9f5a8: call 0xd8263a */
  esp -= 4; W32(esp, 0xd9f5adu); SPILL(); f_d8263a(); if (g_unwind) return; RELOAD();
/* d9f5ad: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* d9f5b0: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f5b2: je 0xd9f6dc */
  if (zf) goto L_d9f6dc;
L_d9f5b8: /* d9f5b8: cmp dword ptr [esi + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f5bb: jne 0xd9f6c4 */
  if (!zf) goto L_d9f6c4;
L_d9f5c1: /* d9f5c1: call dword ptr [0xde8a34] */
  esp -= 4; W32(esp, 0xd9f5c7u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* d9f5c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f5c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f5c9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f5cb: mov ecx, eax */
  ecx = eax;
/* d9f5cd: call dword ptr [0xde8a50] */
  esp -= 4; W32(esp, 0xd9f5d3u); SPILL(); f_4e2743(); if (g_unwind) return; /* Core!?LoadConfig@UObject@@QAEXHPAVUClass@@PBG@Z */ RELOAD();
/* d9f5d3: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* d9f5d6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f5d8: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d9f5db: je 0xd9f5e5 */
  if (zf) goto L_d9f5e5;
L_d9f5dd: /* d9f5dd: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d9f5e0: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* d9f5e3: jmp 0xd9f5e8 */
  goto L_d9f5e8;
L_d9f5e5: /* d9f5e5: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
L_d9f5e8: /* d9f5e8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* d9f5eb: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9f5f0u); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9f5f0: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9f5f3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f5f5: je 0xd9f6c4 */
  if (zf) goto L_d9f6c4;
L_d9f5fb: /* d9f5fb: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9f5fe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f601: mov ecx, esi */
  ecx = esi;
/* d9f603: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9f606u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f606: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f608: je 0xd9f6b9 */
  if (zf) goto L_d9f6b9;
L_d9f60e: /* d9f60e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d9f610: mov ecx, edi */
  ecx = edi;
/* d9f612: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0xd9f615u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f615: cmp dword ptr [esi + 0x60], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9f618: je 0xd9f627 */
  if (zf) goto L_d9f627;
L_d9f61a: /* d9f61a: test dword ptr [edi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f621: jne 0xd9f6b9 */
  if (!zf) goto L_d9f6b9;
L_d9f627: /* d9f627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9f629: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d9f62c: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xd9f632u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* d9f632: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* d9f635: lea ebx, [esi + 0x5c] */
  ebx = (uint32_t)(esi + 0x5cu);
/* d9f638: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f639: mov ecx, ebx */
  ecx = ebx;
/* d9f63b: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xd9f641u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* d9f641: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f643: jne 0xd9f653 */
  if (!zf) goto L_d9f653;
L_d9f645: /* d9f645: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9f646: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* d9f649: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xd9f64fu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* d9f64f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f651: je 0xd9f6b9 */
  if (zf) goto L_d9f6b9;
L_d9f653: /* d9f653: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9f659: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9f65b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9f65d: push 0xde2fd8 */
  { uint32_t v = 0xde2fd8u; esp -= 4; W32(esp, v); }
/* d9f662: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9f667: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9f669u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f669: mov ebx, eax */
  ebx = eax;
/* d9f66b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f66d: je 0xd9f69b */
  if (zf) goto L_d9f69b;
L_d9f66f: /* d9f66f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* d9f672: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f673: mov ecx, edi */
  ecx = edi;
/* d9f675: call dword ptr [0xde89e4] */
  esp -= 4; W32(esp, 0xd9f67bu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* d9f67b: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* d9f67e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9f680: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9f683: push 0x29a */
  { uint32_t v = 0x29au; esp -= 4; W32(esp, v); }
/* d9f688: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9f68a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f68b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f68c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f68d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f68e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f68f: mov ecx, ebx */
  ecx = ebx;
/* d9f691: call 0xd81609 */
  esp -= 4; W32(esp, 0xd9f696u); SPILL(); f_d81609(); if (g_unwind) return; RELOAD();
/* d9f696: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9f699: jmp 0xd9f6a2 */
  goto L_d9f6a2;
L_d9f69b: /* d9f69b: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_d9f6a2: /* d9f6a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f6a4: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* d9f6a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f6a9: mov ecx, ebx */
  ecx = ebx;
/* d9f6ab: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f6b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f6b1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d9f6b3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9f6b6: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_d9f6b9: /* d9f6b9: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* d9f6bc: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* d9f6bf: jmp 0xd9f5e8 */
  goto L_d9f5e8;
L_d9f6c4: /* d9f6c4: mov ecx, esi */
  ecx = esi;
/* d9f6c6: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f6cbu); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f6cb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f6ce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f6d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f6d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f6d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f6d8: mov esp, ebp */
  esp = ebp;
/* d9f6da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f6db: ret  */
  esp += 4; SPILL(); return;
L_d9f6dc: /* d9f6dc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f6de: mov ecx, esi */
  ecx = esi;
/* d9f6e0: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* d9f6e3: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xd9f6e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f6e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f6e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f6ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f6eb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f6f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f6f3: mov esp, ebp */
  esp = ebp;
/* d9f6f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f6f6: ret  */
  esp += 4; SPILL(); return;
}

void f_d9f6f7(void) {
  LOAD_REGS();
L_d9f6f7: /* d9f6f7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d9f6fa: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9f6ff: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* d9f702: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f703: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d9f706: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9f70bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9f70b(); return;
}

void f_d9f70b(void) {
  LOAD_REGS();
L_d9f70b: /* d9f70b: push 0xdc397c */
  { uint32_t v = 0xdc397cu; esp -= 4; W32(esp, v); }
/* d9f710: push 0xde2ff4 */
  { uint32_t v = 0xde2ff4u; esp -= 4; W32(esp, v); }
/* d9f715: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9f71bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9f71b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9f71e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9f720: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9f722: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9f727u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9f727: guest_badaddr(0xd9f727); return;
}

void f_d9f7a0(void) {
  LOAD_REGS();
L_d9f7a0: /* d9f7a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9f7a1: mov ebp, esp */
  ebp = esp;
/* d9f7a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9f7a5: push 0xdba222 */
  { uint32_t v = 0xdba222u; esp -= 4; W32(esp, v); }
/* d9f7aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9f7b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f7b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9f7b8: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9f7bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9f7bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f7bd: mov ebx, ecx */
  ebx = ecx;
/* d9f7bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9f7c0: xor esi, esi */
  esi = 0;
/* d9f7c2: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9f7c5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9f7c8: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d9f7cb: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* d9f7ce: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd9f7d4u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d9f7d4: lea ecx, [ebx + 0x3c] */
  ecx = (uint32_t)(ebx + 0x3cu);
/* d9f7d7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9f7db: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9f7e1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9f7e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f7e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f7e3: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* d9f7e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f7e7: call dword ptr [0xde8a54] */
  esp -= 4; W32(esp, 0xd9f7edu); SPILL(); f_4e2554(); if (g_unwind) return; /* Core!?GetPreferences@UObject@@SAXAAV?$TArray@VFPreferencesInfo@@@@PBGH@Z */ RELOAD();
/* d9f7ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9f7f0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_d9f7f3: /* d9f7f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9f7f6: cmp ecx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9f7f9: jge 0xd9f968 */
  if ((sf == of)) goto L_d9f968;
L_d9f7ff: /* d9f7ff: xor edi, edi */
  edi = 0;
L_d9f801: /* d9f801: cmp edi, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9f804: jge 0xd9f863 */
  if ((sf == of)) goto L_d9f863;
L_d9f806: /* d9f806: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* d9f809: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* d9f80c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9f80e: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* d9f811: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f812: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd9f818u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f818: mov ebx, eax */
  ebx = eax;
/* d9f81a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9f81d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* d9f820: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* d9f823: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9f825: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d9f829: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9f82fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9f82f: mov ecx, ebx */
  ecx = ebx;
/* d9f831: mov esi, eax */
  esi = eax;
/* d9f833: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9f839u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9f839: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f83a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f83b: call dword ptr [0xde8938] */
  esp -= 4; W32(esp, 0xd9f841u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* d9f841: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9f844: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f846: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d9f849: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* d9f84c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9f850: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9f856u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9f856: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9f858: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9f85b: jne 0xd9f860 */
  if (!zf) goto L_d9f860;
L_d9f85d: /* d9f85d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9f85e: jmp 0xd9f801 */
  goto L_d9f801;
L_d9f860: /* d9f860: cmp edi, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_d9f863: /* d9f863: jne 0xd9f960 */
  if (!zf) goto L_d9f960;
L_d9f869: /* d9f869: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* d9f86c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* d9f86f: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* d9f872: push 0xde4f5c */
  { uint32_t v = 0xde4f5cu; esp -= 4; W32(esp, v); }
/* d9f877: lea ecx, [esi + eax + 0x18] */
  ecx = (uint32_t)(esi + eax + 0x18u);
/* d9f87b: call dword ptr [0xde8960] */
  esp -= 4; W32(esp, 0xd9f881u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* d9f881: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f883: je 0xd9f8fa */
  if (zf) goto L_d9f8fa;
L_d9f885: /* d9f885: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9f88b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9f88d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9f88f: push 0xde3040 */
  { uint32_t v = 0xde3040u; esp -= 4; W32(esp, v); }
/* d9f894: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* d9f896: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9f898u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f898: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f89a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* d9f89d: je 0xd9f8dc */
  if (zf) goto L_d9f8dc;
L_d9f89f: /* d9f89f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* d9f8a2: lea edi, [esi + eax] */
  edi = (uint32_t)(esi + eax);
/* d9f8a5: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* d9f8a8: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9f8aeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9f8ae: mov ecx, edi */
  ecx = edi;
/* d9f8b0: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d9f8b3: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9f8b9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9f8b9: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* d9f8bc: mov edx, dword ptr [esi + ecx + 0x24] */
  edx = R32((uint32_t)(esi + ecx + 0x24u));
/* d9f8c0: mov ecx, dword ptr [esi + ecx + 0x28] */
  ecx = R32((uint32_t)(esi + ecx + 0x28u));
/* d9f8c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f8c5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9f8c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9f8c9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* d9f8cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f8cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f8ce: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* d9f8d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9f8d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f8d3: call 0xd81db6 */
  esp -= 4; W32(esp, 0xd9f8d8u); SPILL(); f_d81db6(); if (g_unwind) return; RELOAD();
/* d9f8d8: mov edi, eax */
  edi = eax;
/* d9f8da: jmp 0xd9f8de */
  goto L_d9f8de;
L_d9f8dc: /* d9f8dc: xor edi, edi */
  edi = 0;
L_d9f8de: /* d9f8de: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f8e0: lea esi, [ebx + 0x30] */
  esi = (uint32_t)(ebx + 0x30u);
/* d9f8e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f8e5: mov ecx, esi */
  ecx = esi;
/* d9f8e7: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f8edu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f8ed: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d9f8ef: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* d9f8f2: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* d9f8f5: jmp 0xd9f7f3 */
  goto L_d9f7f3;
L_d9f8fa: /* d9f8fa: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* d9f900: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* d9f902: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9f904: push 0xde3064 */
  { uint32_t v = 0xde3064u; esp -= 4; W32(esp, v); }
/* d9f909: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* d9f90b: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd9f90du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9f90d: mov edi, eax */
  edi = eax;
/* d9f90f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9f911: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* d9f914: je 0xd9f94a */
  if (zf) goto L_d9f94a;
L_d9f916: /* d9f916: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* d9f919: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* d9f91c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f91e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9f91f: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d9f921: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f922: mov ecx, edi */
  ecx = edi;
/* d9f924: call 0xd82324 */
  esp -= 4; W32(esp, 0xd9f929u); SPILL(); f_d82324(); if (g_unwind) return; RELOAD();
/* d9f929: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9f92a: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* d9f92d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* d9f931: mov dword ptr [edi], 0xdc3728 */
  W32((uint32_t)(edi), 0xdc3728u);
/* d9f937: mov dword ptr [edi + 4], 0xdc3710 */
  W32((uint32_t)(edi + 0x4u), 0xdc3710u);
/* d9f93e: call dword ptr [0xde8a40] */
  esp -= 4; W32(esp, 0xd9f944u); SPILL(); f_4e2dec(); if (g_unwind) return; /* Core!??0FPreferencesInfo@@QAE@ABV0@@Z */ RELOAD();
/* d9f944: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9f948: jmp 0xd9f94c */
  goto L_d9f94c;
L_d9f94a: /* d9f94a: xor edi, edi */
  edi = 0;
L_d9f94c: /* d9f94c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9f94e: lea esi, [ebx + 0x30] */
  esi = (uint32_t)(ebx + 0x30u);
/* d9f951: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9f953: mov ecx, esi */
  ecx = esi;
/* d9f955: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9f95bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9f95b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9f95d: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
L_d9f960: /* d9f960: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* d9f963: jmp 0xd9f7f3 */
  goto L_d9f7f3;
L_d9f968: /* d9f968: mov ecx, ebx */
  ecx = ebx;
/* d9f96a: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9f96fu); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9f96f: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* d9f972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9f973: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9f975: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9f978: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* d9f97c: call 0xd82379 */
  esp -= 4; W32(esp, 0xd9f981u); SPILL(); f_d82379(); if (g_unwind) return; RELOAD();
/* d9f981: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9f984: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9f988: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xd9f98eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* d9f98e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9f991: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9f992: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9f993: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9f99a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9f99b: mov esp, ebp */
  esp = ebp;
/* d9f99d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9f99e: ret  */
  esp += 4; SPILL(); return;
}

void f_d9f99f(void) {
  LOAD_REGS();
L_d9f99f: /* d9f99f: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9f9a2: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9f9a7: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* d9f9aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9f9ab: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* d9f9ae: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9f9b3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9f9b3(); return;
}

void f_d9f9b3(void) {
  LOAD_REGS();
L_d9f9b3: /* d9f9b3: push 0xdc39b0 */
  { uint32_t v = 0xdc39b0u; esp -= 4; W32(esp, v); }
/* d9f9b8: push 0xde307c */
  { uint32_t v = 0xde307cu; esp -= 4; W32(esp, v); }
/* d9f9bd: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9f9c3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9f9c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9f9c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9f9c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9f9ca: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9f9cfu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9f9cf: guest_badaddr(0xd9f9cf); return;
}

void f_d9fa60(void) {
  LOAD_REGS();
L_d9fa60: /* d9fa60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9fa61: mov ebp, esp */
  ebp = esp;
/* d9fa63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9fa65: push 0xdba240 */
  { uint32_t v = 0xdba240u; esp -= 4; W32(esp, v); }
/* d9fa6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9fa70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fa71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9fa78: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9fa7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9fa7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9fa7d: mov esi, ecx */
  esi = ecx;
/* d9fa7f: mov ebx, dword ptr [esi + 0x3c] */
  ebx = R32((uint32_t)(esi + 0x3cu));
/* d9fa82: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* d9fa85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9fa86: xor edi, edi */
  edi = 0;
/* d9fa88: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9fa8b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9fa8e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* d9fa91: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* d9fa94: jle 0xd9fb0d */
  if ((zf || sf != of)) goto L_d9fb0d;
L_d9fa96: /* d9fa96: cmp dword ptr [esi + 0x44], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9fa9a: jne 0xd9fb0d */
  if (!zf) goto L_d9fb0d;
L_d9fa9c: /* d9fa9c: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* d9fa9f: nop  */
L_d9faa0: /* d9faa0: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d9faa3: cmp edi, dword ptr [eax + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9faa6: jge 0xd9fd40 */
  if ((sf == of)) goto L_d9fd40;
L_d9faac: /* d9faac: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9fab2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9fab4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9fab6: push 0xde3094 */
  { uint32_t v = 0xde3094u; esp -= 4; W32(esp, v); }
/* d9fabb: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9fac0: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9fac2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9fac2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fac4: je 0xd9faec */
  if (zf) goto L_d9faec;
L_d9fac6: /* d9fac6: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* d9fac9: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* d9facc: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* d9facf: push 0x29a */
  { uint32_t v = 0x29au; esp -= 4; W32(esp, v); }
/* d9fad4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9fad5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9fad6: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* d9fad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9fada: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9fadb: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d9fade: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9fadf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9fae0: mov ecx, eax */
  ecx = eax;
/* d9fae2: call 0xd81609 */
  esp -= 4; W32(esp, 0xd9fae7u); SPILL(); f_d81609(); if (g_unwind) return; RELOAD();
/* d9fae7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9faea: jmp 0xd9faf3 */
  goto L_d9faf3;
L_d9faec: /* d9faec: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_d9faf3: /* d9faf3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9faf5: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* d9faf8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9fafa: mov ecx, ebx */
  ecx = ebx;
/* d9fafc: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9fb02u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9fb02: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d9fb04: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9fb07: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d9fb0a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9fb0b: jmp 0xd9faa0 */
  goto L_d9faa0;
L_d9fb0d: /* d9fb0d: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9fb0f: je 0xd9fbb5 */
  if (zf) goto L_d9fbb5;
L_d9fb15: /* d9fb15: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd9fb1bu); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9fb1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fb1c: mov ecx, ebx */
  ecx = ebx;
/* d9fb1e: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9fb24u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9fb24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fb26: je 0xd9fbb5 */
  if (zf) goto L_d9fbb5;
L_d9fb2c: /* d9fb2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9fb2e: xor edi, edi */
  edi = 0;
/* d9fb30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9fb31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9fb32: mov ecx, esi */
  ecx = esi;
/* d9fb34: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* d9fb37: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd9fb3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9fb3a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9fb3c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9fb3f: je 0xd9fd40 */
  if (zf) goto L_d9fd40;
L_d9fb45: /* d9fb45: cmp edi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9fb48: jge 0xd9fd40 */
  if ((sf == of)) goto L_d9fd40;
L_d9fb4e: /* d9fb4e: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9fb54: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9fb56: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9fb58: push 0xde30b0 */
  { uint32_t v = 0xde30b0u; esp -= 4; W32(esp, v); }
/* d9fb5d: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9fb62: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9fb64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9fb64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fb66: je 0xd9fb8e */
  if (zf) goto L_d9fb8e;
L_d9fb68: /* d9fb68: mov edx, dword ptr [ebx + 0x6c] */
  edx = R32((uint32_t)(ebx + 0x6cu));
/* d9fb6b: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* d9fb6e: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* d9fb71: push 0x29a */
  { uint32_t v = 0x29au; esp -= 4; W32(esp, v); }
/* d9fb76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9fb77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9fb78: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* d9fb7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9fb7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9fb7d: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d9fb80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9fb81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9fb82: mov ecx, eax */
  ecx = eax;
/* d9fb84: call 0xd81609 */
  esp -= 4; W32(esp, 0xd9fb89u); SPILL(); f_d81609(); if (g_unwind) return; RELOAD();
/* d9fb89: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9fb8c: jmp 0xd9fb95 */
  goto L_d9fb95;
L_d9fb8e: /* d9fb8e: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_d9fb95: /* d9fb95: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9fb97: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* d9fb9a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9fb9c: mov ecx, ebx */
  ecx = ebx;
/* d9fb9e: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9fba4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9fba4: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d9fba6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9fba9: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* d9fbac: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d9fbaf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9fbb2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9fbb3: jmp 0xd9fb45 */
  goto L_d9fb45;
L_d9fbb5: /* d9fbb5: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9fbb8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fbba: je 0xd9fc83 */
  if (zf) goto L_d9fc83;
L_d9fbc0: /* d9fbc0: call dword ptr [0xde89cc] */
  esp -= 4; W32(esp, 0xd9fbc6u); SPILL(); f_4e381e(); if (g_unwind) return; /* Core!?StaticClass@UStructProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9fbc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fbc7: mov ecx, edi */
  ecx = edi;
/* d9fbc9: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9fbcfu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9fbcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fbd1: je 0xd9fc83 */
  if (zf) goto L_d9fc83;
L_d9fbd7: /* d9fbd7: mov edi, dword ptr [edi + 0x6c] */
  edi = R32((uint32_t)(edi + 0x6cu));
/* d9fbda: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fbdc: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* d9fbdf: je 0xd9fbe9 */
  if (zf) goto L_d9fbe9;
L_d9fbe1: /* d9fbe1: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d9fbe4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9fbe7: jmp 0xd9fbf0 */
  goto L_d9fbf0;
L_d9fbe9: /* d9fbe9: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9fbf0: /* d9fbf0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* d9fbf3: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9fbf8u); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9fbf8: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9fbfb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fbfd: je 0xd9fd40 */
  if (zf) goto L_d9fd40;
L_d9fc03: /* d9fc03: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* d9fc06: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9fc08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fc09: mov ecx, esi */
  ecx = esi;
/* d9fc0b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xd9fc0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9fc0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fc10: je 0xd9fc78 */
  if (zf) goto L_d9fc78;
L_d9fc12: /* d9fc12: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9fc18: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9fc1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9fc1c: push 0xde30cc */
  { uint32_t v = 0xde30ccu; esp -= 4; W32(esp, v); }
/* d9fc21: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9fc26: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9fc28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9fc28: mov edi, eax */
  edi = eax;
/* d9fc2a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fc2c: je 0xd9fc5a */
  if (zf) goto L_d9fc5a;
L_d9fc2e: /* d9fc2e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* d9fc31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fc32: mov ecx, ebx */
  ecx = ebx;
/* d9fc34: call dword ptr [0xde89e4] */
  esp -= 4; W32(esp, 0xd9fc3au); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* d9fc3a: mov ecx, dword ptr [ebx + 0x48] */
  ecx = R32((uint32_t)(ebx + 0x48u));
/* d9fc3d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9fc3f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d9fc42: push 0x29a */
  { uint32_t v = 0x29au; esp -= 4; W32(esp, v); }
/* d9fc47: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9fc49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9fc4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9fc4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9fc4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9fc4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fc4e: mov ecx, edi */
  ecx = edi;
/* d9fc50: call 0xd81609 */
  esp -= 4; W32(esp, 0xd9fc55u); SPILL(); f_d81609(); if (g_unwind) return; RELOAD();
/* d9fc55: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9fc58: jmp 0xd9fc61 */
  goto L_d9fc61;
L_d9fc5a: /* d9fc5a: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_d9fc61: /* d9fc61: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9fc63: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* d9fc66: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9fc68: mov ecx, edi */
  ecx = edi;
/* d9fc6a: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9fc70u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9fc70: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d9fc72: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9fc75: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_d9fc78: /* d9fc78: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* d9fc7b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9fc7e: jmp 0xd9fbf0 */
  goto L_d9fbf0;
L_d9fc83: /* d9fc83: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9fc86: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fc88: je 0xd9fd40 */
  if (zf) goto L_d9fd40;
L_d9fc8e: /* d9fc8e: call dword ptr [0xde89b8] */
  esp -= 4; W32(esp, 0xd9fc94u); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9fc94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fc95: mov ecx, edi */
  ecx = edi;
/* d9fc97: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9fc9du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9fc9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fc9f: je 0xd9fd40 */
  if (zf) goto L_d9fd40;
L_d9fca5: /* d9fca5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9fca7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9fca9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9fcaa: mov ecx, esi */
  ecx = esi;
/* d9fcac: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0xd9fcafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9fcaf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d9fcb1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9fcb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fcb6: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9fcbb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9fcbd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9fcbf: je 0xd9fd0e */
  if (zf) goto L_d9fd0e;
L_d9fcc1: /* d9fcc1: push 0xde30e8 */
  { uint32_t v = 0xde30e8u; esp -= 4; W32(esp, v); }
/* d9fcc6: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* d9fcc8: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9fccau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9fcca: mov edi, eax */
  edi = eax;
/* d9fccc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fcce: je 0xd9fcf4 */
  if (zf) goto L_d9fcf4;
L_d9fcd0: /* d9fcd0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9fcd3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9fcd5: call dword ptr [0xde89b0] */
  esp -= 4; W32(esp, 0xd9fcdbu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* d9fcdb: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* d9fcde: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d9fce1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9fce2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9fce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fce5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9fce7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9fce8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9fce9: mov ecx, edi */
  ecx = edi;
/* d9fceb: call 0xd827a7 */
  esp -= 4; W32(esp, 0xd9fcf0u); SPILL(); f_d827a7(); if (g_unwind) return; RELOAD();
/* d9fcf0: mov edi, eax */
  edi = eax;
/* d9fcf2: jmp 0xd9fcf6 */
  goto L_d9fcf6;
L_d9fcf4: /* d9fcf4: xor edi, edi */
  edi = 0;
L_d9fcf6: /* d9fcf6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d9fcf8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9fcfa: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9fcfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9fcfe: mov ecx, edi */
  ecx = edi;
/* d9fd00: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xd9fd06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9fd06: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* d9fd09: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* d9fd0c: jmp 0xd9fd37 */
  goto L_d9fd37;
L_d9fd0e: /* d9fd0e: push 0xde3104 */
  { uint32_t v = 0xde3104u; esp -= 4; W32(esp, v); }
/* d9fd13: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* d9fd15: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9fd17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9fd17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fd19: je 0xd9fd2d */
  if (zf) goto L_d9fd2d;
L_d9fd1b: /* d9fd1b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9fd1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9fd1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9fd20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9fd21: mov ecx, eax */
  ecx = eax;
/* d9fd23: call 0xd82969 */
  esp -= 4; W32(esp, 0xd9fd28u); SPILL(); f_d82969(); if (g_unwind) return; RELOAD();
/* d9fd28: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9fd2b: jmp 0xd9fd34 */
  goto L_d9fd34;
L_d9fd2d: /* d9fd2d: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_d9fd34: /* d9fd34: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
L_d9fd37: /* d9fd37: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* d9fd3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9fd3b: call 0xd820d6 */
  esp -= 4; W32(esp, 0xd9fd40u); SPILL(); f_d820d6(); if (g_unwind) return; RELOAD();
L_d9fd40: /* d9fd40: mov ecx, esi */
  ecx = esi;
/* d9fd42: call 0xd81807 */
  esp -= 4; W32(esp, 0xd9fd47u); SPILL(); f_d81807(); if (g_unwind) return; RELOAD();
/* d9fd47: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9fd4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9fd4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9fd4c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9fd53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9fd54: mov esp, ebp */
  esp = ebp;
/* d9fd56: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9fd57: ret  */
  esp += 4; SPILL(); return;
}
