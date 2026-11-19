#include "recomp.h"
#include "rec_mod.h"

void f_f2755e(void) {
  LOAD_REGS();
L_f2755e: /* f2755e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f27561: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f27566: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f27569: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2756a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f2756d: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf27572u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f27572(); return;
}

void f_f27572(void) {
  LOAD_REGS();
L_f27572: /* f27572: push 0xf31910 */
  { uint32_t v = 0xf31910u; esp -= 4; W32(esp, v); }
/* f27577: push 0xf35f48 */
  { uint32_t v = 0xf35f48u; esp -= 4; W32(esp, v); }
/* f2757c: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf27582u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f27582: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27585: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f27587: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f27589: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2758eu); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f2758e: guest_badaddr(0xf2758e); return;
}

void f_f276a0(void) {
  LOAD_REGS();
L_f276a0: /* f276a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f276a1: mov ebp, esp */
  ebp = esp;
/* f276a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f276a5: push 0xf2d340 */
  { uint32_t v = 0xf2d340u; esp -= 4; W32(esp, v); }
/* f276aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f276b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f276b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f276b8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f276bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f276bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f276bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f276be: xor ebx, ebx */
  ebx = 0;
/* f276c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f276c3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f276c6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f276c9: xor edi, edi */
  edi = 0;
/* f276cb: jmp 0xf276d0 */
  goto L_f276d0;
L_f276d0: /* f276d0: cmp edi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f276d6: jge 0xf276f4 */
  if ((sf == of)) goto L_f276f4;
L_f276d8: /* f276d8: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f276db: mov eax, edi */
  eax = edi;
/* f276dd: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f276e0: mov eax, dword ptr [eax + edx] */
  eax = R32((uint32_t)(eax + edx));
/* f276e3: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f276e6: jne 0xf276f1 */
  if (!zf) goto L_f276f1;
L_f276e8: /* f276e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f276e9: call 0xf2116d */
  esp -= 4; W32(esp, 0xf276eeu); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f276ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f276f1: /* f276f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f276f2: jmp 0xf276d0 */
  goto L_f276d0;
L_f276f4: /* f276f4: call dword ptr [0xf37084] */
  { uint32_t t = R32((uint32_t)(0xf37084u)); esp -= 4; W32(esp, 0xf276fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f276fa: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f276fd: cmp dword ptr [ecx + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27700: je 0xf277ff */
  if (zf) goto L_f277ff;
L_f27706: /* f27706: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f27707: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f27708: call dword ptr [0xf385fc] */
  esp -= 4; W32(esp, 0xf2770eu); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* f2770e: mov ecx, dword ptr [0xf385a0] */
  ecx = R32((uint32_t)(0xf385a0u));
/* f27714: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f27716: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27717: push 0xf35f50 */
  { uint32_t v = 0xf35f50u; esp -= 4; W32(esp, v); }
/* f2771c: push 0x30e */
  { uint32_t v = 0x30eu; esp -= 4; W32(esp, v); }
/* f27721: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f27722: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf27728u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f27728: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f2772b: mov esi, dword ptr [eax + 0x5c] */
  esi = R32((uint32_t)(eax + 0x5cu));
/* f2772e: mov cl, byte ptr [eax + 0x60] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x60u))) & 0xffu);
/* f27731: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27734: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* f27735: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f27738: je 0xf277c3 */
  if (zf) goto L_f277c3;
L_f2773e: /* f2773e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f27741: imul esi, esi, 0x44 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x44u);
  esi = (uint32_t)r;
  }
/* f27744: mov ecx, dword ptr [eax + 0x94] */
  ecx = R32((uint32_t)(eax + 0x94u));
/* f2774a: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2774c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2774d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2774f: call dword ptr [0xf37178] */
  { uint32_t t = R32((uint32_t)(0xf37178u)); esp -= 4; W32(esp, 0xf27755u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27755: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f27758: mov eax, dword ptr [edx + 0x94] */
  eax = R32((uint32_t)(edx + 0x94u));
/* f2775e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f27760: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27763: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f27766: mov ecx, 0x10 */
  ecx = 0x10u;
/* f2776b: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2776e: xor eax, eax */
  eax = 0;
/* f27770: mov ebx, ecx */
  ebx = ecx;
/* f27772: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* f27775: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f27778: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* f2777a: mov ecx, ebx */
  ecx = ebx;
/* f2777c: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* f2777e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f27781: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* f27787: mov ecx, dword ptr [0xf38438] */
  ecx = R32((uint32_t)(0xf38438u));
/* f2778d: mov eax, dword ptr [edx + esi + 0x34] */
  eax = R32((uint32_t)(edx + esi + 0x34u));
/* f27791: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f27793: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f27795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27796: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf27799u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27799: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2779c: mov ecx, dword ptr [eax + 0x94] */
  ecx = R32((uint32_t)(eax + 0x94u));
/* f277a2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f277a4: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f277a7: mov ecx, 0x44 */
  ecx = 0x44u;
/* f277ac: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f277af: xor eax, eax */
  eax = 0;
/* f277b1: mov ebx, ecx */
  ebx = ecx;
/* f277b3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* f277b6: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f277b9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* f277bb: mov ecx, ebx */
  ecx = ebx;
/* f277bd: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* f277bf: xor ebx, ebx */
  ebx = 0;
/* f277c1: jmp 0xf277f9 */
  goto L_f277f9;
L_f277c3: /* f277c3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f277c6: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* f277cc: lea esi, [esi + esi*4] */
  esi = (uint32_t)(esi + esi*4);
/* f277cf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f277d2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f277d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f277d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f277d7: call dword ptr [0xf37178] */
  { uint32_t t = R32((uint32_t)(0xf37178u)); esp -= 4; W32(esp, 0xf277ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f277dd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f277e0: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* f277e6: mov dword ptr [esi + edx], ebx */
  W32((uint32_t)(esi + edx), ebx);
/* f277e9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f277ec: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* f277f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f277f5: mov dword ptr [ecx + esi + 4], ebx */
  W32((uint32_t)(ecx + esi + 0x4u), ebx);
L_f277f9: /* f277f9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f277fc: mov dword ptr [edx + 0x5c], ebx */
  W32((uint32_t)(edx + 0x5cu), ebx);
L_f277ff: /* f277ff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f27802: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27803: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27804: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2780b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2780c: mov esp, ebp */
  esp = ebp;
/* f2780e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2780f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f276cd(void) {
  LOAD_REGS();
L_f276cd: /* f276cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f276d0: /* f276d0: cmp edi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f276d6: jge 0xf276f4 */
  if ((sf == of)) goto L_f276f4;
L_f276d8: /* f276d8: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f276db: mov eax, edi */
  eax = edi;
/* f276dd: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f276e0: mov eax, dword ptr [eax + edx] */
  eax = R32((uint32_t)(eax + edx));
/* f276e3: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f276e6: jne 0xf276f1 */
  if (!zf) goto L_f276f1;
L_f276e8: /* f276e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f276e9: call 0xf2116d */
  esp -= 4; W32(esp, 0xf276eeu); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f276ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f276f1: /* f276f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f276f2: jmp 0xf276d0 */
  goto L_f276d0;
L_f276f4: /* f276f4: call dword ptr [0xf37084] */
  { uint32_t t = R32((uint32_t)(0xf37084u)); esp -= 4; W32(esp, 0xf276fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f276fa: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f276fd: cmp dword ptr [ecx + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27700: je 0xf277ff */
  if (zf) goto L_f277ff;
L_f27706: /* f27706: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f27707: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f27708: call dword ptr [0xf385fc] */
  esp -= 4; W32(esp, 0xf2770eu); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* f2770e: mov ecx, dword ptr [0xf385a0] */
  ecx = R32((uint32_t)(0xf385a0u));
/* f27714: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f27716: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27717: push 0xf35f50 */
  { uint32_t v = 0xf35f50u; esp -= 4; W32(esp, v); }
/* f2771c: push 0x30e */
  { uint32_t v = 0x30eu; esp -= 4; W32(esp, v); }
/* f27721: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f27722: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf27728u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f27728: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f2772b: mov esi, dword ptr [eax + 0x5c] */
  esi = R32((uint32_t)(eax + 0x5cu));
/* f2772e: mov cl, byte ptr [eax + 0x60] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x60u))) & 0xffu);
/* f27731: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27734: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* f27735: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f27738: je 0xf277c3 */
  if (zf) goto L_f277c3;
L_f2773e: /* f2773e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f27741: imul esi, esi, 0x44 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x44u);
  esi = (uint32_t)r;
  }
/* f27744: mov ecx, dword ptr [eax + 0x94] */
  ecx = R32((uint32_t)(eax + 0x94u));
/* f2774a: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2774c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2774d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2774f: call dword ptr [0xf37178] */
  { uint32_t t = R32((uint32_t)(0xf37178u)); esp -= 4; W32(esp, 0xf27755u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27755: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f27758: mov eax, dword ptr [edx + 0x94] */
  eax = R32((uint32_t)(edx + 0x94u));
/* f2775e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f27760: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27763: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f27766: mov ecx, 0x10 */
  ecx = 0x10u;
/* f2776b: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2776e: xor eax, eax */
  eax = 0;
/* f27770: mov ebx, ecx */
  ebx = ecx;
/* f27772: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* f27775: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f27778: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* f2777a: mov ecx, ebx */
  ecx = ebx;
/* f2777c: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* f2777e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f27781: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* f27787: mov ecx, dword ptr [0xf38438] */
  ecx = R32((uint32_t)(0xf38438u));
/* f2778d: mov eax, dword ptr [edx + esi + 0x34] */
  eax = R32((uint32_t)(edx + esi + 0x34u));
/* f27791: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f27793: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f27795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27796: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf27799u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27799: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2779c: mov ecx, dword ptr [eax + 0x94] */
  ecx = R32((uint32_t)(eax + 0x94u));
/* f277a2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f277a4: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f277a7: mov ecx, 0x44 */
  ecx = 0x44u;
/* f277ac: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f277af: xor eax, eax */
  eax = 0;
/* f277b1: mov ebx, ecx */
  ebx = ecx;
/* f277b3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* f277b6: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f277b9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* f277bb: mov ecx, ebx */
  ecx = ebx;
/* f277bd: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* f277bf: xor ebx, ebx */
  ebx = 0;
/* f277c1: jmp 0xf277f9 */
  goto L_f277f9;
L_f277c3: /* f277c3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f277c6: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* f277cc: lea esi, [esi + esi*4] */
  esi = (uint32_t)(esi + esi*4);
/* f277cf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f277d2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f277d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f277d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f277d7: call dword ptr [0xf37178] */
  { uint32_t t = R32((uint32_t)(0xf37178u)); esp -= 4; W32(esp, 0xf277ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f277dd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f277e0: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* f277e6: mov dword ptr [esi + edx], ebx */
  W32((uint32_t)(esi + edx), ebx);
/* f277e9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f277ec: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* f277f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f277f5: mov dword ptr [ecx + esi + 4], ebx */
  W32((uint32_t)(ecx + esi + 0x4u), ebx);
L_f277f9: /* f277f9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f277fc: mov dword ptr [edx + 0x5c], ebx */
  W32((uint32_t)(edx + 0x5cu), ebx);
L_f277ff: /* f277ff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f27802: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27803: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27804: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2780b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2780c: mov esp, ebp */
  esp = ebp;
/* f2780e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2780f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f27812(void) {
  LOAD_REGS();
L_f27812: /* f27812: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f27815: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f2781a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f2781d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2781e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f27821: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf27826u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f27826(); return;
}

void f_f27826(void) {
  LOAD_REGS();
L_f27826: /* f27826: push 0xf31960 */
  { uint32_t v = 0xf31960u; esp -= 4; W32(esp, v); }
/* f2782b: push 0xf35f7c */
  { uint32_t v = 0xf35f7cu; esp -= 4; W32(esp, v); }
/* f27830: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf27836u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f27836: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27839: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2783b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2783d: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf27842u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f27842: guest_badaddr(0xf27842); return;
}

void f_f278c0(void) {
  LOAD_REGS();
L_f278c0: /* f278c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f278c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f278c2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* f278c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f278c7: xor eax, eax */
  eax = 0;
/* f278c9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f278cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f278cc: mov esi, ecx */
  esi = ecx;
/* f278ce: jne 0xf27911 */
  if (!zf) goto L_f27911;
L_f278d0: /* f278d0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f278d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f278d6: jne 0xf27911 */
  if (!zf) goto L_f27911;
L_f278d8: /* f278d8: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* f278de: xor edi, edi */
  edi = 0;
/* f278e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f278e2: jle 0xf27905 */
  if ((zf || sf != of)) goto L_f27905;
L_f278e4: /* f278e4: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
L_f278e6: /* f278e6: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* f278e9: test byte ptr [eax + ebp + 0x44], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ebp + 0x44u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f278ed: jne 0xf278f7 */
  if (!zf) goto L_f278f7;
L_f278ef: /* f278ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f278f0: mov ecx, esi */
  ecx = esi;
/* f278f2: call 0xf2116d */
  esp -= 4; W32(esp, 0xf278f7u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
L_f278f7: /* f278f7: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* f278fd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f278fe: add ebp, 0x54 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f27901: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f27903: jl 0xf278e6 */
  if ((sf != of)) goto L_f278e6;
L_f27905: /* f27905: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27906: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27907: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f27908: mov eax, 1 */
  eax = 0x1u;
/* f2790d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2790e: ret 8 */
  esp += 12; SPILL(); return;
L_f27911: /* f27911: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* f27917: xor edi, edi */
  edi = 0;
/* f27919: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f2791b: jle 0xf27967 */
  if ((zf || sf != of)) goto L_f27967;
L_f2791d: /* f2791d: xor ebx, ebx */
  ebx = 0;
/* f2791f: nop  */
L_f27920: /* f27920: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f27924: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f27926: je 0xf2793f */
  if (zf) goto L_f2793f;
L_f27928: /* f27928: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2792a: mov ecx, dword ptr [esi + 0x7c] */
  ecx = R32((uint32_t)(esi + 0x7cu));
/* f2792d: je 0xf2793a */
  if (zf) goto L_f2793a;
L_f2792f: /* f2792f: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f27931: cmp ebp, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27934: jne 0xf27959 */
  if (!zf) goto L_f27959;
L_f27936: /* f27936: cmp edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27938: jmp 0xf2794a */
  goto L_f2794a;
L_f2793a: /* f2793a: cmp edx, dword ptr [ebx + ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2793d: jmp 0xf2794a */
  goto L_f2794a;
L_f2793f: /* f2793f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f27941: je 0xf27959 */
  if (zf) goto L_f27959;
L_f27943: /* f27943: mov edx, dword ptr [esi + 0x7c] */
  edx = R32((uint32_t)(esi + 0x7cu));
/* f27946: cmp ebp, dword ptr [edx + ebx + 8] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ebx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_f2794a: /* f2794a: jne 0xf27959 */
  if (!zf) goto L_f27959;
L_f2794c: /* f2794c: mov ecx, esi */
  ecx = esi;
/* f2794e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2794f: call 0xf2116d */
  esp -= 4; W32(esp, 0xf27954u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f27954: mov eax, 1 */
  eax = 0x1u;
L_f27959: /* f27959: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* f2795f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f27960: add ebx, 0x54 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f27963: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f27965: jl 0xf27920 */
  if ((sf != of)) goto L_f27920;
L_f27967: /* f27967: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27968: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27969: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2796a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2796b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f279a0(void) {
  LOAD_REGS();
L_f279a0: /* f279a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f279a1: mov ebp, esp */
  ebp = esp;
/* f279a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f279a5: push 0xf2d350 */
  { uint32_t v = 0xf2d350u; esp -= 4; W32(esp, v); }
/* f279aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f279b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f279b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f279b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f279bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f279bc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f279bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f279c0: xor esi, esi */
  esi = 0;
/* f279c2: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f279c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f279c5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f279c8: mov edi, ecx */
  edi = ecx;
/* f279ca: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* f279cd: jne 0xf279e7 */
  if (!zf) goto L_f279e7;
L_f279cf: /* f279cf: push 0x364 */
  { uint32_t v = 0x364u; esp -= 4; W32(esp, v); }
/* f279d4: push 0xf3601c */
  { uint32_t v = 0xf3601cu; esp -= 4; W32(esp, v); }
/* f279d9: push 0xf36034 */
  { uint32_t v = 0xf36034u; esp -= 4; W32(esp, v); }
/* f279de: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf279e4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f279e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f279e7: /* f279e7: mov ecx, ebx */
  ecx = ebx;
/* f279e9: call dword ptr [0xf38604] */
  esp -= 4; W32(esp, 0xf279efu); SPILL(); f_4e1ba9(); if (g_unwind) return; /* Core!?IsValid@UObject@@QAEHXZ */ RELOAD();
/* f279ef: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f279f1: jne 0xf27a10 */
  if (!zf) goto L_f27a10;
L_f279f3: /* f279f3: push 0x365 */
  { uint32_t v = 0x365u; esp -= 4; W32(esp, v); }
/* f279f8: push 0xf3603c */
  { uint32_t v = 0xf3603cu; esp -= 4; W32(esp, v); }
/* f279fd: push 0xf36054 */
  { uint32_t v = 0xf36054u; esp -= 4; W32(esp, v); }
/* f27a02: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf27a08u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f27a08: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27a0b: jmp 0xf27a10 */
  goto L_f27a10;
L_f27a10: /* f27a10: cmp esi, dword ptr [edi + 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f27a16: jge 0xf27a77 */
  if ((sf == of)) goto L_f27a77;
L_f27a18: /* f27a18: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* f27a1b: mov eax, esi */
  eax = esi;
/* f27a1d: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f27a20: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f27a22: cmp dword ptr [eax + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27a25: jne 0xf27a44 */
  if (!zf) goto L_f27a44;
L_f27a27: /* f27a27: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* f27a2a: and dl, 0xe */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f27a2d: cmp dl, 8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f27a30: jne 0xf27a3d */
  if (!zf) goto L_f27a3d;
L_f27a32: /* f27a32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f27a33: mov ecx, edi */
  ecx = edi;
/* f27a35: call 0xf2116d */
  esp -= 4; W32(esp, 0xf27a3au); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f27a3a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f27a3b: jmp 0xf27a10 */
  goto L_f27a10;
L_f27a3d: /* f27a3d: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
L_f27a44: /* f27a44: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f27a45: jmp 0xf27a10 */
  goto L_f27a10;
L_f27a77: /* f27a77: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f27a7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27a7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27a7c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f27a83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f27a84: mov esp, ebp */
  esp = ebp;
/* f27a86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f27a87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f27a0d(void) {
  LOAD_REGS();
L_f27a0d: /* f27a0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f27a10: /* f27a10: cmp esi, dword ptr [edi + 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f27a16: jge 0xf27a77 */
  if ((sf == of)) goto L_f27a77;
L_f27a18: /* f27a18: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* f27a1b: mov eax, esi */
  eax = esi;
/* f27a1d: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f27a20: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f27a22: cmp dword ptr [eax + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27a25: jne 0xf27a44 */
  if (!zf) goto L_f27a44;
L_f27a27: /* f27a27: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* f27a2a: and dl, 0xe */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f27a2d: cmp dl, 8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f27a30: jne 0xf27a3d */
  if (!zf) goto L_f27a3d;
L_f27a32: /* f27a32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f27a33: mov ecx, edi */
  ecx = edi;
/* f27a35: call 0xf2116d */
  esp -= 4; W32(esp, 0xf27a3au); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f27a3a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f27a3b: jmp 0xf27a10 */
  goto L_f27a10;
L_f27a3d: /* f27a3d: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
L_f27a44: /* f27a44: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f27a45: jmp 0xf27a10 */
  goto L_f27a10;
L_f27a77: /* f27a77: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f27a7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27a7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27a7c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f27a83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f27a84: mov esp, ebp */
  esp = ebp;
/* f27a86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f27a87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f27a47(void) {
  LOAD_REGS();
L_f27a47: /* f27a47: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f27a4a: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f27a4f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f27a52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f27a53: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f27a56: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf27a5bu); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f27a5b(); return;
}

void f_f27a5b(void) {
  LOAD_REGS();
L_f27a5b: /* f27a5b: push 0xf319b4 */
  { uint32_t v = 0xf319b4u; esp -= 4; W32(esp, v); }
/* f27a60: push 0xf36068 */
  { uint32_t v = 0xf36068u; esp -= 4; W32(esp, v); }
/* f27a65: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf27a6bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f27a6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27a6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f27a70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f27a72: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf27a77u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
/* f27a77: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f27a7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27a7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27a7c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f27a83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f27a84: mov esp, ebp */
  esp = ebp;
/* f27a86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f27a87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f27ad0(void) {
  LOAD_REGS();
L_f27ad0: /* f27ad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f27ad1: mov ebp, esp */
  ebp = esp;
/* f27ad3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f27ad5: push 0xf2d360 */
  { uint32_t v = 0xf2d360u; esp -= 4; W32(esp, v); }
/* f27ada: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f27ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27ae1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f27ae8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f27aeb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f27aee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f27aef: mov ebx, dword ptr [0xf38614] */
  ebx = R32((uint32_t)(0xf38614u));
/* f27af5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f27af6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f27af7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f27afa: mov esi, ecx */
  esi = ecx;
/* f27afc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f27aff: push 0xf3613c */
  { uint32_t v = 0xf3613cu; esp -= 4; W32(esp, v); }
/* f27b04: xor edi, edi */
  edi = 0;
/* f27b06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f27b07: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f27b0a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f27b0d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf27b0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27b0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27b12: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27b14: je 0xf27b63 */
  if (zf) goto L_f27b63;
L_f27b16: /* f27b16: xor ebx, ebx */
  ebx = 0;
/* f27b18: mov edi, 1 */
  edi = 0x1u;
/* f27b1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f27b20: /* f27b20: cmp ebx, dword ptr [esi + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f27b23: jge 0xf27b4e */
  if ((sf == of)) goto L_f27b4e;
L_f27b25: /* f27b25: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* f27b28: mov eax, ebx */
  eax = ebx;
/* f27b2a: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f27b2d: lea ecx, [edx + eax] */
  ecx = (uint32_t)(edx + eax);
/* f27b30: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* f27b33: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f27b35: je 0xf27b4b */
  if (zf) goto L_f27b4b;
L_f27b37: /* f27b37: mov dword ptr [ecx + 0x50], edi */
  W32((uint32_t)(ecx + 0x50u), edi);
/* f27b3a: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* f27b3d: mov edx, dword ptr [ecx + eax + 4] */
  edx = R32((uint32_t)(ecx + eax + 0x4u));
/* f27b41: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f27b42: call dword ptr [0xf370c4] */
  { uint32_t t = R32((uint32_t)(0xf370c4u)); esp -= 4; W32(esp, 0xf27b48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27b48: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f27b4b: /* f27b4b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f27b4c: jmp 0xf27b20 */
  goto L_f27b20;
L_f27b4e: /* f27b4e: mov eax, edi */
  eax = edi;
/* f27b50: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f27b53: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f27b5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27b5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27b5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f27b5d: mov esp, ebp */
  esp = ebp;
/* f27b5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f27b60: ret 8 */
  esp += 12; SPILL(); return;
L_f27b63: /* f27b63: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f27b66: push 0xf36154 */
  { uint32_t v = 0xf36154u; esp -= 4; W32(esp, v); }
/* f27b6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27b6c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf27b6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27b6e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27b71: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27b73: je 0xf27bb2 */
  if (zf) goto L_f27bb2;
L_f27b75: /* f27b75: xor ebx, ebx */
  ebx = 0;
L_f27b77: /* f27b77: cmp ebx, dword ptr [esi + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f27b7a: jge 0xf27c25 */
  if ((sf == of)) goto L_f27c25;
L_f27b80: /* f27b80: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* f27b83: mov eax, ebx */
  eax = ebx;
/* f27b85: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f27b88: mov edx, dword ptr [ecx + eax + 0x48] */
  edx = R32((uint32_t)(ecx + eax + 0x48u));
/* f27b8c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f27b8e: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27b90: je 0xf27baf */
  if (zf) goto L_f27baf;
L_f27b92: /* f27b92: mov dword ptr [ecx + 0x50], edi */
  W32((uint32_t)(ecx + 0x50u), edi);
/* f27b95: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* f27b98: mov ecx, dword ptr [eax + edx + 0x4c] */
  ecx = R32((uint32_t)(eax + edx + 0x4cu));
/* f27b9c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f27b9e: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27ba0: je 0xf27baf */
  if (zf) goto L_f27baf;
L_f27ba2: /* f27ba2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* f27ba5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27ba6: call dword ptr [0xf37128] */
  { uint32_t t = R32((uint32_t)(0xf37128u)); esp -= 4; W32(esp, 0xf27bacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27bac: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f27baf: /* f27baf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f27bb0: jmp 0xf27b77 */
  goto L_f27b77;
L_f27bb2: /* f27bb2: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* f27bb5: push 0xf36170 */
  { uint32_t v = 0xf36170u; esp -= 4; W32(esp, v); }
/* f27bba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f27bbb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf27bbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27bbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27bc0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27bc2: je 0xf27be5 */
  if (zf) goto L_f27be5;
L_f27bc4: /* f27bc4: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
L_f27bc6: /* f27bc6: cmp edi, dword ptr [esi + 0x58] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f27bc9: jge 0xf27c25 */
  if ((sf == of)) goto L_f27c25;
L_f27bcb: /* f27bcb: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* f27bce: mov edx, edi */
  edx = edi;
/* f27bd0: imul edx, edx, 0x54 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x54u);
  edx = (uint32_t)r;
  }
/* f27bd3: test byte ptr [edx + eax + 0x44], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x44u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f27bd7: jne 0xf27be2 */
  if (!zf) goto L_f27be2;
L_f27bd9: /* f27bd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f27bda: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* f27bdd: call 0xf2116d */
  esp -= 4; W32(esp, 0xf27be2u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
L_f27be2: /* f27be2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f27be3: jmp 0xf27bc6 */
  goto L_f27bc6;
L_f27be5: /* f27be5: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* f27be8: push 0xf36188 */
  { uint32_t v = 0xf36188u; esp -= 4; W32(esp, v); }
/* f27bed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f27bee: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf27bf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27bf0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27bf3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27bf5: je 0xf27c3d */
  if (zf) goto L_f27c3d;
L_f27bf7: /* f27bf7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f27bfa: push 0xf371a4 */
  { uint32_t v = 0xf371a4u; esp -= 4; W32(esp, v); }
/* f27bff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f27c00: call dword ptr [0xf38610] */
  esp -= 4; W32(esp, 0xf27c06u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* f27c06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27c09: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27c0b: je 0xf27c25 */
  if (zf) goto L_f27c25;
L_f27c0d: /* f27c0d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f27c10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27c11: call dword ptr [0xf3860c] */
  esp -= 4; W32(esp, 0xf27c17u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* f27c17: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f27c1a: mov ecx, dword ptr [0xf38608] */
  ecx = R32((uint32_t)(0xf38608u));
/* f27c20: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* f27c22: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f27c25: /* f27c25: mov eax, 1 */
  eax = 0x1u;
/* f27c2a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f27c2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f27c34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27c35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27c36: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f27c37: mov esp, ebp */
  esp = ebp;
/* f27c39: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f27c3a: ret 8 */
  esp += 12; SPILL(); return;
L_f27c3d: /* f27c3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* f27c40: push 0xf361a4 */
  { uint32_t v = 0xf361a4u; esp -= 4; W32(esp, v); }
/* f27c45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f27c46: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf27c48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27c48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27c4b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27c4d: je 0xf27c8e */
  if (zf) goto L_f27c8e;
L_f27c4f: /* f27c4f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f27c52: push 0xf371a8 */
  { uint32_t v = 0xf371a8u; esp -= 4; W32(esp, v); }
/* f27c57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27c58: call dword ptr [0xf38610] */
  esp -= 4; W32(esp, 0xf27c5eu); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* f27c5e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27c61: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f27c63: je 0xf27c25 */
  if (zf) goto L_f27c25;
L_f27c65: /* f27c65: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f27c68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f27c69: call dword ptr [0xf3860c] */
  esp -= 4; W32(esp, 0xf27c6fu); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* f27c6f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f27c72: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f27c75: mov eax, dword ptr [esi - 0x28] */
  eax = R32((uint32_t)(esi + 0xffffffd8u));
/* f27c78: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27c7b: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* f27c7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f27c7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f27c80: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* f27c86: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf27c8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27c8c: jmp 0xf27c25 */
  goto L_f27c25;
L_f27c8e: /* f27c8e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f27c91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27c92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27c93: xor eax, eax */
  eax = 0;
/* f27c95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f27c9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f27c9d: mov esp, ebp */
  esp = ebp;
/* f27c9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f27ca0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f27ca3(void) {
  LOAD_REGS();
L_f27ca3: /* f27ca3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f27ca6: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f27cab: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* f27cae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f27caf: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* f27cb2: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf27cb7u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f27cb7(); return;
}

void f_f27cb7(void) {
  LOAD_REGS();
L_f27cb7: /* f27cb7: push 0xf31a00 */
  { uint32_t v = 0xf31a00u; esp -= 4; W32(esp, v); }
/* f27cbc: push 0xf361b4 */
  { uint32_t v = 0xf361b4u; esp -= 4; W32(esp, v); }
/* f27cc1: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf27cc7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f27cc7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27cca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f27ccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f27cce: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf27cd3u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f27cd3: guest_badaddr(0xf27cd3); return;
}

void f_f27d70(void) {
  LOAD_REGS();
L_f27d70: /* f27d70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f27d71: mov ebp, esp */
  ebp = esp;
/* f27d73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f27d75: push 0xf2d370 */
  { uint32_t v = 0xf2d370u; esp -= 4; W32(esp, v); }
/* f27d7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f27d80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27d81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f27d88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f27d8b: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* f27d8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f27d8f: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f27d95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f27d96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f27d97: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f27d9a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f27da1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f27da3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f27da6: jnp 0xf27e41 */
  if (!pf) goto L_f27e41;
L_f27dac: /* f27dac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f27daf: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f27db2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f27db4: je 0xf27e41 */
  if (zf) goto L_f27e41;
L_f27dba: /* f27dba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f27dbc: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0xf27dc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f27dc2: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f27dc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27dc8: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* f27dcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27dcc: call 0xf2124e */
  esp -= 4; W32(esp, 0xf27dd1u); SPILL(); f_f2124e(); if (g_unwind) return; RELOAD();
/* f27dd1: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f27dd4: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* f27dd7: mov ecx, dword ptr [0xf38618] */
  ecx = R32((uint32_t)(0xf38618u));
/* f27ddd: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* f27ddf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27de2: fdivr dword ptr [ebp + 8] */
  ST0 = (F32((uint32_t)(ebp + 0x8u))) / ST0;
/* f27de5: fsubr dword ptr [0xf3112c] */
  ST0 = (F32((uint32_t)(0xf3112cu))) - ST0;
/* f27deb: fcom dword ptr [0xf31a98] */
  fpu_com(ST0, F32((uint32_t)(0xf31a98u)));
/* f27df1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f27df3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f27df6: jp 0xf27e32 */
  if (pf) goto L_f27e32;
L_f27df8: /* f27df8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f27dfa: fld dword ptr [0xf31a98] */
  { double v = F32((uint32_t)(0xf31a98u)); FPUSH(v); }
/* f27e00: jmp 0xf27e47 */
  goto L_f27e47;
L_f27e32: /* f27e32: fcom dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
/* f27e38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f27e3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f27e3d: jnp 0xf27e47 */
  if (!pf) goto L_f27e47;
L_f27e3f: /* f27e3f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f27e41: /* f27e41: fld dword ptr [0xf3112c] */
  { double v = F32((uint32_t)(0xf3112cu)); FPUSH(v); }
L_f27e47: /* f27e47: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27e4a: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f27e50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f27e52: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f27e55: jnp 0xf27ea0 */
  if (!pf) goto L_f27ea0;
L_f27e57: /* f27e57: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27e5a: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f27e60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f27e62: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f27e65: jnp 0xf27e7f */
  if (!pf) goto L_f27e7f;
L_f27e67: /* f27e67: mov dword ptr [ebp + 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0x18u), 0x3f800000u);
/* f27e6e: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27e71: fmul dword ptr [0xf31a40] */
  ST0 = ST0 * (F32((uint32_t)(0xf31a40u)));
/* f27e77: fadd dword ptr [0xf31a3c] */
  ST0 = ST0 + (F32((uint32_t)(0xf31a3cu)));
/* f27e7d: jmp 0xf27ea6 */
  goto L_f27ea6;
L_f27e7f: /* f27e7f: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27e82: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f27e88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f27e8a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f27e8d: jnp 0xf27ea0 */
  if (!pf) goto L_f27ea0;
L_f27e8f: /* f27e8f: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27e92: fmul dword ptr [0xf31a40] */
  ST0 = ST0 * (F32((uint32_t)(0xf31a40u)));
/* f27e98: fadd dword ptr [0xf31a3c] */
  ST0 = ST0 + (F32((uint32_t)(0xf31a3cu)));
/* f27e9e: jmp 0xf27ea6 */
  goto L_f27ea6;
L_f27ea0: /* f27ea0: fld dword ptr [0xf31124] */
  { double v = F32((uint32_t)(0xf31124u)); FPUSH(v); }
L_f27ea6: /* f27ea6: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* f27ea9: mov eax, ecx */
  eax = ecx;
/* f27eab: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* f27eae: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f27eb1: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* f27eb4: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27eb7: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* f27eba: mov ecx, eax */
  ecx = eax;
/* f27ebc: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f27ebf: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* f27ec2: fiadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0x18u)));
/* f27ec5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f27ec8: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f27ecb: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* f27ece: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27ecf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27ed0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f27ed7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f27ed8: fiadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0x18u)));
/* f27edb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f27edd: fmul st(2) */
  ST0 = ST0 * STI(2);
/* f27edf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f27ee1: fstp st(1) */
  STI(1) = ST0; FPOP();
/* f27ee3: mov esp, ebp */
  esp = ebp;
/* f27ee5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f27ee6: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_f27e02(void) {
  LOAD_REGS();
L_f27e02: /* f27e02: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f27e05: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f27e0a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f27e0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27e0e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f27e11: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf27e16u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f27e16(); return;
}

void f_f27e16(void) {
  LOAD_REGS();
L_f27e16: /* f27e16: push 0xf31a48 */
  { uint32_t v = 0xf31a48u; esp -= 4; W32(esp, v); }
/* f27e1b: push 0xf361dc */
  { uint32_t v = 0xf361dcu; esp -= 4; W32(esp, v); }
/* f27e20: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf27e26u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f27e26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f27e29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f27e2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f27e2d: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf27e32u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
/* f27e32: fcom dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
/* f27e38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f27e3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f27e3d: jnp 0xf27e47 */
  if (!pf) goto L_f27e47;
L_f27e3f: /* f27e3f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f27e41: fld dword ptr [0xf3112c] */
  { double v = F32((uint32_t)(0xf3112cu)); FPUSH(v); }
L_f27e47: /* f27e47: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27e4a: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f27e50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f27e52: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f27e55: jnp 0xf27ea0 */
  if (!pf) goto L_f27ea0;
L_f27e57: /* f27e57: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27e5a: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f27e60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f27e62: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f27e65: jnp 0xf27e7f */
  if (!pf) goto L_f27e7f;
L_f27e67: /* f27e67: mov dword ptr [ebp + 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0x18u), 0x3f800000u);
/* f27e6e: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27e71: fmul dword ptr [0xf31a40] */
  ST0 = ST0 * (F32((uint32_t)(0xf31a40u)));
/* f27e77: fadd dword ptr [0xf31a3c] */
  ST0 = ST0 + (F32((uint32_t)(0xf31a3cu)));
/* f27e7d: jmp 0xf27ea6 */
  goto L_f27ea6;
L_f27e7f: /* f27e7f: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27e82: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f27e88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f27e8a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f27e8d: jnp 0xf27ea0 */
  if (!pf) goto L_f27ea0;
L_f27e8f: /* f27e8f: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27e92: fmul dword ptr [0xf31a40] */
  ST0 = ST0 * (F32((uint32_t)(0xf31a40u)));
/* f27e98: fadd dword ptr [0xf31a3c] */
  ST0 = ST0 + (F32((uint32_t)(0xf31a3cu)));
/* f27e9e: jmp 0xf27ea6 */
  goto L_f27ea6;
L_f27ea0: /* f27ea0: fld dword ptr [0xf31124] */
  { double v = F32((uint32_t)(0xf31124u)); FPUSH(v); }
L_f27ea6: /* f27ea6: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* f27ea9: mov eax, ecx */
  eax = ecx;
/* f27eab: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* f27eae: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f27eb1: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* f27eb4: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f27eb7: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* f27eba: mov ecx, eax */
  ecx = eax;
/* f27ebc: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f27ebf: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* f27ec2: fiadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0x18u)));
/* f27ec5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f27ec8: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f27ecb: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* f27ece: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f27ecf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27ed0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f27ed7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f27ed8: fiadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0x18u)));
/* f27edb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f27edd: fmul st(2) */
  ST0 = ST0 * STI(2);
/* f27edf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f27ee1: fstp st(1) */
  STI(1) = ST0; FPOP();
/* f27ee3: mov esp, ebp */
  esp = ebp;
/* f27ee5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f27ee6: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_f27f50(void) {
  LOAD_REGS();
L_f27f50: /* f27f50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f27f54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f27f56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f27f57: mov esi, ecx */
  esi = ecx;
/* f27f59: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f27f5b: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* f27f62: jne 0xf27f7c */
  if (!zf) goto L_f27f7c;
L_f27f64: /* f27f64: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* f27f69: push 0xf36ef8 */
  { uint32_t v = 0xf36ef8u; esp -= 4; W32(esp, v); }
/* f27f6e: push 0xf36ef0 */
  { uint32_t v = 0xf36ef0u; esp -= 4; W32(esp, v); }
/* f27f73: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf27f79u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f27f79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f27f7c: /* f27f7c: mov ecx, esi */
  ecx = esi;
/* f27f7e: call 0xf2120d */
  esp -= 4; W32(esp, 0xf27f83u); SPILL(); f_f2120d(); if (g_unwind) return; RELOAD();
/* f27f83: mov eax, esi */
  eax = esi;
/* f27f85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27f86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f27fa0(void) {
  LOAD_REGS();
L_f27fa0: /* f27fa0: mov eax, dword ptr [0xf38718] */
  eax = R32((uint32_t)(0xf38718u));
/* f27fa5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f27fa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f27fa8: mov esi, ecx */
  esi = ecx;
/* f27faa: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f27fac: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* f27fb3: jne 0xf27fcd */
  if (!zf) goto L_f27fcd;
L_f27fb5: /* f27fb5: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* f27fba: push 0xf36ef8 */
  { uint32_t v = 0xf36ef8u; esp -= 4; W32(esp, v); }
/* f27fbf: push 0xf36ef0 */
  { uint32_t v = 0xf36ef0u; esp -= 4; W32(esp, v); }
/* f27fc4: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf27fcau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f27fca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f27fcd: /* f27fcd: mov ecx, esi */
  ecx = esi;
/* f27fcf: call 0xf2120d */
  esp -= 4; W32(esp, 0xf27fd4u); SPILL(); f_f2120d(); if (g_unwind) return; RELOAD();
/* f27fd4: mov eax, esi */
  eax = esi;
/* f27fd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f27fd7: ret  */
  esp += 4; SPILL(); return;
}

void f_f27ff0(void) {
  LOAD_REGS();
L_f27ff0: /* f27ff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f27ff2: push 0xf2d389 */
  { uint32_t v = 0xf2d389u; esp -= 4; W32(esp, v); }
/* f27ff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f27ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f27ffe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f28005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f28006: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f28007: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f28008: mov esi, ecx */
  esi = ecx;
/* f2800a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2800b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f2800f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f28012: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f28014: mov ebx, dword ptr [0xf38460] */
  ebx = R32((uint32_t)(0xf38460u));
/* f2801a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f28022: jge 0xf28038 */
  if ((sf == of)) goto L_f28038;
L_f28024: /* f28024: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f28029: push 0xf355c8 */
  { uint32_t v = 0xf355c8u; esp -= 4; W32(esp, v); }
/* f2802e: push 0xf355a4 */
  { uint32_t v = 0xf355a4u; esp -= 4; W32(esp, v); }
/* f28033: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf28035u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28035: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f28038: /* f28038: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2803b: jle 0xf28051 */
  if ((zf || sf != of)) goto L_f28051;
L_f2803d: /* f2803d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f28042: push 0xf355c8 */
  { uint32_t v = 0xf355c8u; esp -= 4; W32(esp, v); }
/* f28047: push 0xf35588 */
  { uint32_t v = 0xf35588u; esp -= 4; W32(esp, v); }
/* f2804c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2804eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2804e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f28051: /* f28051: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f28053: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f28054: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f28056: mov ecx, esi */
  ecx = esi;
/* f28058: call dword ptr [0xf3845c] */
  esp -= 4; W32(esp, 0xf2805eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f2805e: mov ecx, esi */
  ecx = esi;
/* f28060: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f28068: call dword ptr [0xf38454] */
  esp -= 4; W32(esp, 0xf2806eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f2806e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f28072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f28074: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f28075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2807c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2807f: ret  */
  esp += 4; SPILL(); return;
}

void f_f280b0(void) {
  LOAD_REGS();
L_f280b0: /* f280b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f280b1: mov ebp, esp */
  ebp = esp;
/* f280b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f280b5: push 0xf2d3e7 */
  { uint32_t v = 0xf2d3e7u; esp -= 4; W32(esp, v); }
/* f280ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f280c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f280c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f280c8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f280cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f280cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f280cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f280ce: mov esi, ecx */
  esi = ecx;
/* f280d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f280d3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* f280d6: call dword ptr [0xf38624] */
  esp -= 4; W32(esp, 0xf280dcu); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* f280dc: mov eax, dword ptr [0xf38620] */
  eax = R32((uint32_t)(0xf38620u));
/* f280e1: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* f280e4: lea ebx, [esi + 0x54] */
  ebx = (uint32_t)(esi + 0x54u);
/* f280e7: xor edi, edi */
  edi = 0;
/* f280e9: mov ecx, ebx */
  ecx = ebx;
/* f280eb: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f280ee: mov dword ptr [esi], 0xf31020 */
  W32((uint32_t)(esi), 0xf31020u);
/* f280f4: mov dword ptr [esi + 0x28], 0xf3101c */
  W32((uint32_t)(esi + 0x28u), 0xf3101cu);
/* f280fb: call dword ptr [0xf3861c] */
  esp -= 4; W32(esp, 0xf28101u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f28101: mov dword ptr [esi + 0x70], edi */
  W32((uint32_t)(esi + 0x70u), edi);
/* f28104: mov dword ptr [esi + 0x74], edi */
  W32((uint32_t)(esi + 0x74u), edi);
/* f28107: mov dword ptr [esi + 0x78], edi */
  W32((uint32_t)(esi + 0x78u), edi);
/* f2810a: mov dword ptr [esi + 0x7c], edi */
  W32((uint32_t)(esi + 0x7cu), edi);
/* f2810d: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* f28113: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* f28119: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
/* f2811f: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* f28125: mov dword ptr [esi + 0x90], edi */
  W32((uint32_t)(esi + 0x90u), edi);
/* f2812b: mov dword ptr [esi + 0x94], edi */
  W32((uint32_t)(esi + 0x94u), edi);
/* f28131: mov dword ptr [esi + 0x98], edi */
  W32((uint32_t)(esi + 0x98u), edi);
/* f28137: mov dword ptr [esi + 0x9c], edi */
  W32((uint32_t)(esi + 0x9cu), edi);
/* f2813d: lea ecx, [esi + 0xe8] */
  ecx = (uint32_t)(esi + 0xe8u);
/* f28143: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* f28147: call 0xf21041 */
  esp -= 4; W32(esp, 0xf2814cu); SPILL(); f_f21041(); if (g_unwind) return; RELOAD();
/* f2814c: mov edx, edi */
  edx = edi;
/* f2814e: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* f28151: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f28153: mov eax, edi */
  eax = edi;
/* f28155: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* f28158: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* f2815b: push 0xf37190 */
  { uint32_t v = 0xf37190u; esp -= 4; W32(esp, v); }
/* f28160: mov ecx, ebx */
  ecx = ebx;
/* f28162: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f28166: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* f28169: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* f2816c: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* f2816f: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* f28172: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* f28175: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* f28178: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* f2817b: call dword ptr [0xf385e4] */
  esp -= 4; W32(esp, 0xf28181u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* f28181: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f28184: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28185: mov eax, esi */
  eax = esi;
/* f28187: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f28188: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2818f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f28190: mov esp, ebp */
  esp = ebp;
/* f28192: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f28193: ret  */
  esp += 4; SPILL(); return;
}

void f_f28194(void) {
  LOAD_REGS();
L_f28194: /* f28194: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f28197: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f2819c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f2819f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f281a0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f281a3: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf281a8u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f281a8(); return;
}

void f_f281a8(void) {
  LOAD_REGS();
L_f281a8: /* f281a8: push 0xf31aa0 */
  { uint32_t v = 0xf31aa0u; esp -= 4; W32(esp, v); }
/* f281ad: push 0xf3568c */
  { uint32_t v = 0xf3568cu; esp -= 4; W32(esp, v); }
/* f281b2: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf281b8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f281b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f281bb: xor edi, edi */
  edi = 0;
/* f281bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f281be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f281bf: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf281c4u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f281c4: guest_badaddr(0xf281c4); return;
}

void f_f28220(void) {
  LOAD_REGS();
L_f28220: /* f28220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f28221: mov ebp, esp */
  ebp = esp;
/* f28223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f28225: push 0xf2d410 */
  { uint32_t v = 0xf2d410u; esp -= 4; W32(esp, v); }
/* f2822a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f28230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28231: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f28238: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2823b: mov eax, dword ptr [0xf386fc] */
  eax = R32((uint32_t)(0xf386fcu));
/* f28240: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f28241: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f28242: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f28243: mov esi, ecx */
  esi = ecx;
/* f28245: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f28247: xor edi, edi */
  edi = 0;
/* f28249: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2824b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f2824e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f28251: je 0xf2842c */
  if (zf) goto L_f2842c;
L_f28257: /* f28257: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* f28259: xor ebx, ebx */
  ebx = 0;
/* f2825b: jmp 0xf28260 */
  goto L_f28260;
L_f28260: /* f28260: cmp ebx, dword ptr [esi + 0x80] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28266: jge 0xf2828b */
  if ((sf == of)) goto L_f2828b;
L_f28268: /* f28268: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f28269: mov ecx, esi */
  ecx = esi;
/* f2826b: call 0xf2116d */
  esp -= 4; W32(esp, 0xf28270u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f28270: mov ecx, dword ptr [esi + 0x7c] */
  ecx = R32((uint32_t)(esi + 0x7cu));
/* f28273: mov eax, ebx */
  eax = ebx;
/* f28275: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f28278: lea edx, [ecx + eax + 4] */
  edx = (uint32_t)(ecx + eax + 0x4u);
/* f2827c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2827d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2827f: call dword ptr [0xf370f8] */
  { uint32_t t = R32((uint32_t)(0xf370f8u)); esp -= 4; W32(esp, 0xf28285u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28285: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28288: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f28289: jmp 0xf28260 */
  goto L_f28260;
L_f2828b: /* f2828b: lea ecx, [esi + 0x7c] */
  ecx = (uint32_t)(esi + 0x7cu);
/* f2828e: xor eax, eax */
  eax = 0;
L_f28290: /* f28290: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28293: jge 0xf28298 */
  if ((sf == of)) goto L_f28298;
L_f28295: /* f28295: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f28296: jmp 0xf28290 */
  goto L_f28290;
L_f28298: /* f28298: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* f2829a: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* f2829d: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* f282a0: call dword ptr [0xf38458] */
  esp -= 4; W32(esp, 0xf282a6u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f282a6: cmp dword ptr [esi + 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f282a9: je 0xf282fc */
  if (zf) goto L_f282fc;
L_f282ab: /* f282ab: mov eax, dword ptr [0xf38718] */
  eax = R32((uint32_t)(0xf38718u));
/* f282b0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f282b2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f282b5: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
/* f282bc: jne 0xf282d6 */
  if (!zf) goto L_f282d6;
L_f282be: /* f282be: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* f282c3: push 0xf36ef8 */
  { uint32_t v = 0xf36ef8u; esp -= 4; W32(esp, v); }
/* f282c8: push 0xf36ef0 */
  { uint32_t v = 0xf36ef0u; esp -= 4; W32(esp, v); }
/* f282cd: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf282d3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f282d3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f282d6: /* f282d6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f282d9: call 0xf2120d */
  esp -= 4; W32(esp, 0xf282deu); SPILL(); f_f2120d(); if (g_unwind) return; RELOAD();
/* f282de: mov eax, dword ptr [0xf385ac] */
  eax = R32((uint32_t)(0xf385acu));
/* f282e3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* f282e6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f282e9: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f282eb: jge 0xf282fc */
  if ((sf == of)) goto L_f282fc;
L_f282ed: /* f282ed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f282ef: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* f282f2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f282f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f282f5: mov ecx, esi */
  ecx = esi;
/* f282f7: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf282fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f282fa: jmp 0xf282d6 */
  goto L_f282d6;
L_f282fc: /* f282fc: xor ebx, ebx */
  ebx = 0;
/* f282fe: mov edi, edi */
  edi = edi;
L_f28300: /* f28300: cmp ebx, dword ptr [esi + 0x8c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28306: jge 0xf28323 */
  if ((sf == of)) goto L_f28323;
L_f28308: /* f28308: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* f2830e: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* f28311: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* f28314: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f28315: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f28317: call dword ptr [0xf37178] */
  { uint32_t t = R32((uint32_t)(0xf37178u)); esp -= 4; W32(esp, 0xf2831du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2831d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28320: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f28321: jmp 0xf28300 */
  goto L_f28300;
L_f28323: /* f28323: lea ebx, [esi + 0x88] */
  ebx = (uint32_t)(esi + 0x88u);
/* f28329: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f28330: /* f28330: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28333: jge 0xf28349 */
  if ((sf == of)) goto L_f28349;
L_f28335: /* f28335: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* f28337: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* f2833a: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f2833d: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* f28340: call dword ptr [0xf38444] */
  esp -= 4; W32(esp, 0xf28346u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f28346: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f28347: jmp 0xf28330 */
  goto L_f28330;
L_f28349: /* f28349: xor edi, edi */
  edi = 0;
/* f2834b: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* f2834d: mov ecx, ebx */
  ecx = ebx;
/* f2834f: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* f28352: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* f28355: call dword ptr [0xf38458] */
  esp -= 4; W32(esp, 0xf2835bu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f2835b: jmp 0xf28360 */
  goto L_f28360;
L_f28360: /* f28360: cmp edi, dword ptr [esi + 0x98] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x98u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28366: jge 0xf28384 */
  if ((sf == of)) goto L_f28384;
L_f28368: /* f28368: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* f2836e: mov edx, edi */
  edx = edi;
/* f28370: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f28373: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f28375: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f28376: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f28378: call dword ptr [0xf37178] */
  { uint32_t t = R32((uint32_t)(0xf37178u)); esp -= 4; W32(esp, 0xf2837eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2837e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28381: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f28382: jmp 0xf28360 */
  goto L_f28360;
L_f28384: /* f28384: lea edi, [esi + 0x94] */
  edi = (uint32_t)(esi + 0x94u);
/* f2838a: xor ebx, ebx */
  ebx = 0;
/* f2838c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f28390: /* f28390: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28393: jge 0xf283aa */
  if ((sf == of)) goto L_f283aa;
L_f28395: /* f28395: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f28397: mov eax, ebx */
  eax = ebx;
/* f28399: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* f2839c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2839e: lea ecx, [eax + 0x38] */
  ecx = (uint32_t)(eax + 0x38u);
/* f283a1: call dword ptr [0xf38444] */
  esp -= 4; W32(esp, 0xf283a7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f283a7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f283a8: jmp 0xf28390 */
  goto L_f28390;
L_f283aa: /* f283aa: xor eax, eax */
  eax = 0;
/* f283ac: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* f283ae: mov ecx, edi */
  ecx = edi;
/* f283b0: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* f283b3: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* f283b6: call dword ptr [0xf38458] */
  esp -= 4; W32(esp, 0xf283bcu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f283bc: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* f283c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f283c3: call dword ptr [0xf370b4] */
  { uint32_t t = R32((uint32_t)(0xf370b4u)); esp -= 4; W32(esp, 0xf283c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f283ce: call dword ptr [0xf370ac] */
  { uint32_t t = R32((uint32_t)(0xf370acu)); esp -= 4; W32(esp, 0xf283d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283d4: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* f283da: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f283de: call dword ptr [0xf37100] */
  { uint32_t t = R32((uint32_t)(0xf37100u)); esp -= 4; W32(esp, 0xf283e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283e4: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* f283ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f283ee: call dword ptr [0xf37188] */
  { uint32_t t = R32((uint32_t)(0xf37188u)); esp -= 4; W32(esp, 0xf283f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283f4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f283f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f283fb: mov ecx, esi */
  ecx = esi;
/* f283fd: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xf28400u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28400: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* f28406: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f28407: call dword ptr [0xf385a4] */
  esp -= 4; W32(esp, 0xf2840du); SPILL(); f_4e1ef1(); if (g_unwind) return; /* Core!?appFreeDllHandle@@YAXPAX@Z */ RELOAD();
/* f2840d: mov edx, dword ptr [0xf385a0] */
  edx = R32((uint32_t)(0xf385a0u));
/* f28413: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f28415: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28418: push 0xf35930 */
  { uint32_t v = 0xf35930u; esp -= 4; W32(esp, v); }
/* f2841d: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* f28422: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28423: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf28429u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f28429: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2842c: /* f2842c: mov ecx, esi */
  ecx = esi;
/* f2842e: call dword ptr [0xf38574] */
  esp -= 4; W32(esp, 0xf28434u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* f28434: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f28437: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28438: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f28439: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f28440: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f28441: mov esp, ebp */
  esp = ebp;
/* f28443: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f28444: ret  */
  esp += 4; SPILL(); return;
}

void f_f2825d(void) {
  LOAD_REGS();
L_f2825d: /* f2825d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f28260: /* f28260: cmp ebx, dword ptr [esi + 0x80] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28266: jge 0xf2828b */
  if ((sf == of)) goto L_f2828b;
L_f28268: /* f28268: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f28269: mov ecx, esi */
  ecx = esi;
/* f2826b: call 0xf2116d */
  esp -= 4; W32(esp, 0xf28270u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f28270: mov ecx, dword ptr [esi + 0x7c] */
  ecx = R32((uint32_t)(esi + 0x7cu));
/* f28273: mov eax, ebx */
  eax = ebx;
/* f28275: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f28278: lea edx, [ecx + eax + 4] */
  edx = (uint32_t)(ecx + eax + 0x4u);
/* f2827c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2827d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2827f: call dword ptr [0xf370f8] */
  { uint32_t t = R32((uint32_t)(0xf370f8u)); esp -= 4; W32(esp, 0xf28285u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28285: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28288: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f28289: jmp 0xf28260 */
  goto L_f28260;
L_f2828b: /* f2828b: lea ecx, [esi + 0x7c] */
  ecx = (uint32_t)(esi + 0x7cu);
/* f2828e: xor eax, eax */
  eax = 0;
L_f28290: /* f28290: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28293: jge 0xf28298 */
  if ((sf == of)) goto L_f28298;
L_f28295: /* f28295: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f28296: jmp 0xf28290 */
  goto L_f28290;
L_f28298: /* f28298: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* f2829a: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* f2829d: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* f282a0: call dword ptr [0xf38458] */
  esp -= 4; W32(esp, 0xf282a6u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f282a6: cmp dword ptr [esi + 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f282a9: je 0xf282fc */
  if (zf) goto L_f282fc;
L_f282ab: /* f282ab: mov eax, dword ptr [0xf38718] */
  eax = R32((uint32_t)(0xf38718u));
/* f282b0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f282b2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f282b5: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
/* f282bc: jne 0xf282d6 */
  if (!zf) goto L_f282d6;
L_f282be: /* f282be: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* f282c3: push 0xf36ef8 */
  { uint32_t v = 0xf36ef8u; esp -= 4; W32(esp, v); }
/* f282c8: push 0xf36ef0 */
  { uint32_t v = 0xf36ef0u; esp -= 4; W32(esp, v); }
/* f282cd: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf282d3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f282d3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f282d6: /* f282d6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f282d9: call 0xf2120d */
  esp -= 4; W32(esp, 0xf282deu); SPILL(); f_f2120d(); if (g_unwind) return; RELOAD();
/* f282de: mov eax, dword ptr [0xf385ac] */
  eax = R32((uint32_t)(0xf385acu));
/* f282e3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* f282e6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f282e9: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f282eb: jge 0xf282fc */
  if ((sf == of)) goto L_f282fc;
L_f282ed: /* f282ed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f282ef: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* f282f2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f282f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f282f5: mov ecx, esi */
  ecx = esi;
/* f282f7: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf282fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f282fa: jmp 0xf282d6 */
  goto L_f282d6;
L_f282fc: /* f282fc: xor ebx, ebx */
  ebx = 0;
/* f282fe: mov edi, edi */
  edi = edi;
L_f28300: /* f28300: cmp ebx, dword ptr [esi + 0x8c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28306: jge 0xf28323 */
  if ((sf == of)) goto L_f28323;
L_f28308: /* f28308: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* f2830e: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* f28311: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* f28314: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f28315: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f28317: call dword ptr [0xf37178] */
  { uint32_t t = R32((uint32_t)(0xf37178u)); esp -= 4; W32(esp, 0xf2831du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2831d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28320: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f28321: jmp 0xf28300 */
  goto L_f28300;
L_f28323: /* f28323: lea ebx, [esi + 0x88] */
  ebx = (uint32_t)(esi + 0x88u);
/* f28329: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f28330: /* f28330: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28333: jge 0xf28349 */
  if ((sf == of)) goto L_f28349;
L_f28335: /* f28335: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* f28337: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* f2833a: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f2833d: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* f28340: call dword ptr [0xf38444] */
  esp -= 4; W32(esp, 0xf28346u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f28346: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f28347: jmp 0xf28330 */
  goto L_f28330;
L_f28349: /* f28349: xor edi, edi */
  edi = 0;
/* f2834b: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* f2834d: mov ecx, ebx */
  ecx = ebx;
/* f2834f: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* f28352: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* f28355: call dword ptr [0xf38458] */
  esp -= 4; W32(esp, 0xf2835bu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f2835b: jmp 0xf28360 */
  goto L_f28360;
L_f28360: /* f28360: cmp edi, dword ptr [esi + 0x98] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x98u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28366: jge 0xf28384 */
  if ((sf == of)) goto L_f28384;
L_f28368: /* f28368: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* f2836e: mov edx, edi */
  edx = edi;
/* f28370: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f28373: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f28375: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f28376: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f28378: call dword ptr [0xf37178] */
  { uint32_t t = R32((uint32_t)(0xf37178u)); esp -= 4; W32(esp, 0xf2837eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2837e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28381: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f28382: jmp 0xf28360 */
  goto L_f28360;
L_f28384: /* f28384: lea edi, [esi + 0x94] */
  edi = (uint32_t)(esi + 0x94u);
/* f2838a: xor ebx, ebx */
  ebx = 0;
/* f2838c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f28390: /* f28390: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28393: jge 0xf283aa */
  if ((sf == of)) goto L_f283aa;
L_f28395: /* f28395: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f28397: mov eax, ebx */
  eax = ebx;
/* f28399: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* f2839c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2839e: lea ecx, [eax + 0x38] */
  ecx = (uint32_t)(eax + 0x38u);
/* f283a1: call dword ptr [0xf38444] */
  esp -= 4; W32(esp, 0xf283a7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f283a7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f283a8: jmp 0xf28390 */
  goto L_f28390;
L_f283aa: /* f283aa: xor eax, eax */
  eax = 0;
/* f283ac: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* f283ae: mov ecx, edi */
  ecx = edi;
/* f283b0: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* f283b3: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* f283b6: call dword ptr [0xf38458] */
  esp -= 4; W32(esp, 0xf283bcu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f283bc: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* f283c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f283c3: call dword ptr [0xf370b4] */
  { uint32_t t = R32((uint32_t)(0xf370b4u)); esp -= 4; W32(esp, 0xf283c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f283ce: call dword ptr [0xf370ac] */
  { uint32_t t = R32((uint32_t)(0xf370acu)); esp -= 4; W32(esp, 0xf283d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283d4: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* f283da: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f283de: call dword ptr [0xf37100] */
  { uint32_t t = R32((uint32_t)(0xf37100u)); esp -= 4; W32(esp, 0xf283e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283e4: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* f283ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f283ee: call dword ptr [0xf37188] */
  { uint32_t t = R32((uint32_t)(0xf37188u)); esp -= 4; W32(esp, 0xf283f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283f4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f283f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f283fb: mov ecx, esi */
  ecx = esi;
/* f283fd: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xf28400u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28400: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* f28406: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f28407: call dword ptr [0xf385a4] */
  esp -= 4; W32(esp, 0xf2840du); SPILL(); f_4e1ef1(); if (g_unwind) return; /* Core!?appFreeDllHandle@@YAXPAX@Z */ RELOAD();
/* f2840d: mov edx, dword ptr [0xf385a0] */
  edx = R32((uint32_t)(0xf385a0u));
/* f28413: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f28415: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28418: push 0xf35930 */
  { uint32_t v = 0xf35930u; esp -= 4; W32(esp, v); }
/* f2841d: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* f28422: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28423: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf28429u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f28429: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2842c: mov ecx, esi */
  ecx = esi;
/* f2842e: call dword ptr [0xf38574] */
  esp -= 4; W32(esp, 0xf28434u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* f28434: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f28437: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28438: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f28439: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f28440: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f28441: mov esp, ebp */
  esp = ebp;
/* f28443: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f28444: ret  */
  esp += 4; SPILL(); return;
}

void f_f2835d(void) {
  LOAD_REGS();
L_f2835d: /* f2835d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f28360: /* f28360: cmp edi, dword ptr [esi + 0x98] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x98u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28366: jge 0xf28384 */
  if ((sf == of)) goto L_f28384;
L_f28368: /* f28368: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* f2836e: mov edx, edi */
  edx = edi;
/* f28370: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f28373: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f28375: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f28376: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f28378: call dword ptr [0xf37178] */
  { uint32_t t = R32((uint32_t)(0xf37178u)); esp -= 4; W32(esp, 0xf2837eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2837e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28381: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f28382: jmp 0xf28360 */
  goto L_f28360;
L_f28384: /* f28384: lea edi, [esi + 0x94] */
  edi = (uint32_t)(esi + 0x94u);
/* f2838a: xor ebx, ebx */
  ebx = 0;
/* f2838c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f28390: /* f28390: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28393: jge 0xf283aa */
  if ((sf == of)) goto L_f283aa;
L_f28395: /* f28395: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f28397: mov eax, ebx */
  eax = ebx;
/* f28399: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* f2839c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2839e: lea ecx, [eax + 0x38] */
  ecx = (uint32_t)(eax + 0x38u);
/* f283a1: call dword ptr [0xf38444] */
  esp -= 4; W32(esp, 0xf283a7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f283a7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f283a8: jmp 0xf28390 */
  goto L_f28390;
L_f283aa: /* f283aa: xor eax, eax */
  eax = 0;
/* f283ac: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* f283ae: mov ecx, edi */
  ecx = edi;
/* f283b0: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* f283b3: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* f283b6: call dword ptr [0xf38458] */
  esp -= 4; W32(esp, 0xf283bcu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f283bc: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* f283c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f283c3: call dword ptr [0xf370b4] */
  { uint32_t t = R32((uint32_t)(0xf370b4u)); esp -= 4; W32(esp, 0xf283c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f283ce: call dword ptr [0xf370ac] */
  { uint32_t t = R32((uint32_t)(0xf370acu)); esp -= 4; W32(esp, 0xf283d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283d4: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* f283da: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f283de: call dword ptr [0xf37100] */
  { uint32_t t = R32((uint32_t)(0xf37100u)); esp -= 4; W32(esp, 0xf283e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283e4: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* f283ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f283ee: call dword ptr [0xf37188] */
  { uint32_t t = R32((uint32_t)(0xf37188u)); esp -= 4; W32(esp, 0xf283f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f283f4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f283f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f283f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f283fb: mov ecx, esi */
  ecx = esi;
/* f283fd: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xf28400u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28400: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* f28406: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f28407: call dword ptr [0xf385a4] */
  esp -= 4; W32(esp, 0xf2840du); SPILL(); f_4e1ef1(); if (g_unwind) return; /* Core!?appFreeDllHandle@@YAXPAX@Z */ RELOAD();
/* f2840d: mov edx, dword ptr [0xf385a0] */
  edx = R32((uint32_t)(0xf385a0u));
/* f28413: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f28415: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28418: push 0xf35930 */
  { uint32_t v = 0xf35930u; esp -= 4; W32(esp, v); }
/* f2841d: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* f28422: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28423: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf28429u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f28429: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2842c: mov ecx, esi */
  ecx = esi;
/* f2842e: call dword ptr [0xf38574] */
  esp -= 4; W32(esp, 0xf28434u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* f28434: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f28437: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28438: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f28439: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f28440: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f28441: mov esp, ebp */
  esp = ebp;
/* f28443: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f28444: ret  */
  esp += 4; SPILL(); return;
}

void f_f28445(void) {
  LOAD_REGS();
L_f28445: /* f28445: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f28448: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f2844d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f28450: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f28451: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f28454: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28459u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28459(); return;
}

void f_f28459(void) {
  LOAD_REGS();
L_f28459: /* f28459: push 0xf31af8 */
  { uint32_t v = 0xf31af8u; esp -= 4; W32(esp, v); }
/* f2845e: push 0xf35974 */
  { uint32_t v = 0xf35974u; esp -= 4; W32(esp, v); }
/* f28463: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf28469u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f28469: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2846c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2846e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f28470: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28475u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f28475: guest_badaddr(0xf28475); return;
}

void f_f28520(void) {
  LOAD_REGS();
L_f28520: /* f28520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f28521: mov ebp, esp */
  ebp = esp;
/* f28523: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f28525: push 0xf2d420 */
  { uint32_t v = 0xf2d420u; esp -= 4; W32(esp, v); }
/* f2852a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f28530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28531: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f28538: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2853b: mov eax, dword ptr [0xf386fc] */
  eax = R32((uint32_t)(0xf386fcu));
/* f28540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f28541: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f28542: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f28543: mov esi, ecx */
  esi = ecx;
/* f28545: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f28547: xor edi, edi */
  edi = 0;
/* f28549: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2854b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f2854e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f28551: jne 0xf288eb */
  if (!zf) goto L_f288eb;
L_f28557: /* f28557: cmp dword ptr [esi + 0xdc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xdcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2855d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f28561: mov dword ptr [esi + 0xa8], edi */
  W32((uint32_t)(esi + 0xa8u), edi);
/* f28567: jne 0xf285a6 */
  if (!zf) goto L_f285a6;
L_f28569: /* f28569: push 0xf359dc */
  { uint32_t v = 0xf359dcu; esp -= 4; W32(esp, v); }
/* f2856e: call dword ptr [0xf38628] */
  esp -= 4; W32(esp, 0xf28574u); SPILL(); f_4e15b9(); if (g_unwind) return; /* Core!?appGetDllHandle@@YAPAXPBG@Z */ RELOAD();
/* f28574: mov ebx, dword ptr [0xf3859c] */
  ebx = R32((uint32_t)(0xf3859cu));
/* f2857a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2857d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2857f: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* f28585: jne 0xf285ac */
  if (!zf) goto L_f285ac;
L_f28587: /* f28587: mov ecx, dword ptr [0xf385a0] */
  ecx = R32((uint32_t)(0xf385a0u));
/* f2858d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2858f: push 0xf359f8 */
  { uint32_t v = 0xf359f8u; esp -= 4; W32(esp, v); }
/* f28594: push 0xf35a18 */
  { uint32_t v = 0xf35a18u; esp -= 4; W32(esp, v); }
/* f28599: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* f2859e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2859f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf285a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f285a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f285a4: jmp 0xf285ac */
  goto L_f285ac;
L_f285a6: /* f285a6: mov ebx, dword ptr [0xf3859c] */
  ebx = R32((uint32_t)(0xf3859cu));
L_f285ac: /* f285ac: cmp dword ptr [esi + 0xa8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xa8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f285b2: jne 0xf285fb */
  if (!zf) goto L_f285fb;
L_f285b4: /* f285b4: push 0xf35a6c */
  { uint32_t v = 0xf35a6cu; esp -= 4; W32(esp, v); }
/* f285b9: call dword ptr [0xf38628] */
  esp -= 4; W32(esp, 0xf285bfu); SPILL(); f_4e15b9(); if (g_unwind) return; /* Core!?appGetDllHandle@@YAPAXPBG@Z */ RELOAD();
/* f285bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f285c2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f285c4: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* f285ca: jne 0xf285fb */
  if (!zf) goto L_f285fb;
L_f285cc: /* f285cc: mov eax, dword ptr [0xf385a0] */
  eax = R32((uint32_t)(0xf385a0u));
/* f285d1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f285d3: push 0xf35a8c */
  { uint32_t v = 0xf35a8cu; esp -= 4; W32(esp, v); }
/* f285d8: push 0xf35ab0 */
  { uint32_t v = 0xf35ab0u; esp -= 4; W32(esp, v); }
/* f285dd: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* f285e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f285e3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf285e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f285e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f285e8: xor eax, eax */
  eax = 0;
/* f285ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f285ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f285f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f285f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f285f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f285f7: mov esp, ebp */
  esp = ebp;
/* f285f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f285fa: ret  */
  esp += 4; SPILL(); return;
L_f285fb: /* f285fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f285fc: mov ecx, esi */
  ecx = esi;
/* f285fe: mov dword ptr [0xf37138], 1 */
  W32((uint32_t)(0xf37138u), 0x1u);
/* f28608: call 0xf211db */
  esp -= 4; W32(esp, 0xf2860du); SPILL(); f_f211db(); if (g_unwind) return; RELOAD();
/* f2860d: cmp dword ptr [0xf37138], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf37138u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28613: je 0xf286fc */
  if (zf) goto L_f286fc;
L_f28619: /* f28619: cmp dword ptr [esi + 0xd0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xd0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2861f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f28622: je 0xf2862e */
  if (zf) goto L_f2862e;
L_f28624: /* f28624: mov dword ptr [esi + 0xd4], 1 */
  W32((uint32_t)(esi + 0xd4u), 0x1u);
L_f2862e: /* f2862e: cmp dword ptr [esi + 0xd8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xd8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28634: je 0xf2863d */
  if (zf) goto L_f2863d;
L_f28636: /* f28636: mov eax, 0xf35af8 */
  eax = 0xf35af8u;
/* f2863b: jmp 0xf2864f */
  goto L_f2864f;
L_f2863d: /* f2863d: cmp dword ptr [esi + 0xd4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xd4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28643: mov eax, 0xf35b04 */
  eax = 0xf35b04u;
/* f28648: jne 0xf2864f */
  if (!zf) goto L_f2864f;
L_f2864a: /* f2864a: mov eax, 0xf35b14 */
  eax = 0xf35b14u;
L_f2864f: /* f2864f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28650: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* f28654: call dword ptr [0xf37158] */
  { uint32_t t = R32((uint32_t)(0xf37158u)); esp -= 4; W32(esp, 0xf2865au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2865a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2865d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2865f: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* f28665: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f28668: jne 0xf2867f */
  if (!zf) goto L_f2867f;
L_f2866a: /* f2866a: mov edx, dword ptr [0xf385a0] */
  edx = R32((uint32_t)(0xf385a0u));
/* f28670: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f28672: push 0xf35b28 */
  { uint32_t v = 0xf35b28u; esp -= 4; W32(esp, v); }
/* f28677: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* f2867c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2867d: jmp 0xf286f7 */
  goto L_f286f7;
L_f2867f: /* f2867f: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* f28685: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f28688: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f28689: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2868a: mov dword ptr [ebp - 0x44], 0x1007 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1007u);
/* f28691: mov dword ptr [ebp - 0x40], 0xac44 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0xac44u);
/* f28698: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* f2869b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* f2869f: call dword ptr [0xf3715c] */
  { uint32_t t = R32((uint32_t)(0xf3715cu)); esp -= 4; W32(esp, 0xf286a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f286a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f286a8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f286aa: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* f286b0: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f286b3: jne 0xf286bc */
  if (!zf) goto L_f286bc;
L_f286b5: /* f286b5: push 0xf35b78 */
  { uint32_t v = 0xf35b78u; esp -= 4; W32(esp, v); }
/* f286ba: jmp 0xf286ea */
  goto L_f286ea;
L_f286bc: /* f286bc: mov edx, dword ptr [esi + 0xa4] */
  edx = R32((uint32_t)(esi + 0xa4u));
/* f286c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f286c3: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* f286c7: call dword ptr [0xf370ac] */
  { uint32_t t = R32((uint32_t)(0xf370acu)); esp -= 4; W32(esp, 0xf286cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f286cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f286d0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f286d2: push 0xf35bc4 */
  { uint32_t v = 0xf35bc4u; esp -= 4; W32(esp, v); }
/* f286d7: mov ecx, esi */
  ecx = esi;
/* f286d9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f286dc: call 0xf21195 */
  esp -= 4; W32(esp, 0xf286e1u); SPILL(); f_f21195(); if (g_unwind) return; RELOAD();
/* f286e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f286e3: je 0xf2870f */
  if (zf) goto L_f2870f;
L_f286e5: /* f286e5: push 0xf35bd0 */
  { uint32_t v = 0xf35bd0u; esp -= 4; W32(esp, v); }
L_f286ea: /* f286ea: mov eax, dword ptr [0xf385a0] */
  eax = R32((uint32_t)(0xf385a0u));
/* f286ef: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f286f1: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* f286f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_f286f7: /* f286f7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf286f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f286f9: /* f286f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f286fc: /* f286fc: xor eax, eax */
  eax = 0;
/* f286fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f28701: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f28708: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28709: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2870a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2870b: mov esp, ebp */
  esp = ebp;
/* f2870d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2870e: ret  */
  esp += 4; SPILL(); return;
L_f2870f: /* f2870f: cmp dword ptr [esi + 0xc4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xc4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28715: je 0xf286fc */
  if (zf) goto L_f286fc;
L_f28717: /* f28717: lea ebx, [esi + 0x7c] */
  ebx = (uint32_t)(esi + 0x7cu);
/* f2871a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2871b: mov ecx, ebx */
  ecx = ebx;
/* f2871d: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* f28721: call 0xf212c1 */
  esp -= 4; W32(esp, 0xf28726u); SPILL(); f_f212c1(); if (g_unwind) return; RELOAD();
/* f28726: xor edi, edi */
  edi = 0;
/* f28728: jmp 0xf28730 */
  goto L_f28730;
L_f28730: /* f28730: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* f28736: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28739: jle 0xf28740 */
  if ((zf || sf != of)) goto L_f28740;
L_f2873b: /* f2873b: mov eax, 0x20 */
  eax = 0x20u;
L_f28740: /* f28740: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28742: jge 0xf28793 */
  if ((sf == of)) goto L_f28793;
L_f28744: /* f28744: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f28747: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f28748: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2874a: call dword ptr [0xf37168] */
  { uint32_t t = R32((uint32_t)(0xf37168u)); esp -= 4; W32(esp, 0xf28750u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28750: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28753: call dword ptr [0xf37084] */
  { uint32_t t = R32((uint32_t)(0xf37084u)); esp -= 4; W32(esp, 0xf28759u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28759: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2875b: jne 0xf28793 */
  if (!zf) goto L_f28793;
L_f2875d: /* f2875d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2875f: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* f28761: mov ecx, ebx */
  ecx = ebx;
/* f28763: call dword ptr [0xf385cc] */
  esp -= 4; W32(esp, 0xf28769u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f28769: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* f2876b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2876e: mov eax, edi */
  eax = edi;
/* f28770: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f28773: mov dword ptr [eax + ecx + 4], edx */
  W32((uint32_t)(eax + ecx + 0x4u), edx);
/* f28777: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* f2877d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f28780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28781: push 0x1021 */
  { uint32_t v = 0x1021u; esp -= 4; W32(esp, v); }
/* f28786: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f28787: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2878du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2878d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28790: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f28791: jmp 0xf28730 */
  goto L_f28730;
L_f28793: /* f28793: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* f28799: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2879b: jne 0xf287bb */
  if (!zf) goto L_f287bb;
L_f2879d: /* f2879d: mov edx, dword ptr [0xf385a0] */
  edx = R32((uint32_t)(0xf385a0u));
/* f287a3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f287a5: push 0xf35c40 */
  { uint32_t v = 0xf35c40u; esp -= 4; W32(esp, v); }
/* f287aa: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* f287af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f287b0: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf287b6u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f287b6: jmp 0xf286f9 */
  goto L_f286f9;
L_f287bb: /* f287bb: xor ebx, ebx */
  ebx = 0;
/* f287bd: lea edi, [esi + 0x94] */
  edi = (uint32_t)(esi + 0x94u);
/* f287c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f287c4: mov ecx, edi */
  ecx = edi;
/* f287c6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f287c9: call 0xf21104 */
  esp -= 4; W32(esp, 0xf287ceu); SPILL(); f_f21104(); if (g_unwind) return; RELOAD();
/* f287ce: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f287d0: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* f287d2: mov ecx, edi */
  ecx = edi;
/* f287d4: call dword ptr [0xf385cc] */
  esp -= 4; W32(esp, 0xf287dau); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f287da: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f287e0: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f287e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f287e8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f287eb: jp 0xf287f7 */
  if (pf) goto L_f287f7;
L_f287ed: /* f287ed: mov dword ptr [esi + 0xc0], 0x3f800000 */
  W32((uint32_t)(esi + 0xc0u), 0x3f800000u);
L_f287f7: /* f287f7: push 0xd002 */
  { uint32_t v = 0xd002u; esp -= 4; W32(esp, v); }
/* f287fc: call dword ptr [0xf370e8] */
  { uint32_t t = R32((uint32_t)(0xf370e8u)); esp -= 4; W32(esp, 0xf28802u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28802: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f28808: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2880b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2880c: call dword ptr [0xf37108] */
  { uint32_t t = R32((uint32_t)(0xf37108u)); esp -= 4; W32(esp, 0xf28812u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28812: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28815: mov dword ptr [esi + 0x60], ebx */
  W32((uint32_t)(esi + 0x60u), ebx);
/* f28818: push 0xf35c90 */
  { uint32_t v = 0xf35c90u; esp -= 4; W32(esp, v); }
/* f2881d: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* f28821: mov dword ptr [0xf3718c], ebx */
  W32((uint32_t)(0xf3718cu), ebx);
/* f28827: mov dword ptr [0xf37124], ebx */
  W32((uint32_t)(0xf37124u), ebx);
/* f2882d: call dword ptr [0xf3716c] */
  { uint32_t t = R32((uint32_t)(0xf3716cu)); esp -= 4; W32(esp, 0xf28833u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28833: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* f28839: xor edx, edx */
  edx = 0;
/* f2883b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2883e: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f28840: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f28843: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28845: mov eax, edx */
  eax = edx;
/* f28847: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f28849: /* f28849: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2884b: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f2884d: /* f2884d: push 0xf35c98 */
  { uint32_t v = 0xf35c98u; esp -= 4; W32(esp, v); }
/* f28852: call dword ptr [0xf370d8] */
  { uint32_t t = R32((uint32_t)(0xf370d8u)); esp -= 4; W32(esp, 0xf28858u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28858: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2885b: push 0xf35ca0 */
  { uint32_t v = 0xf35ca0u; esp -= 4; W32(esp, v); }
/* f28860: mov dword ptr [0xf37124], eax */
  W32((uint32_t)(0xf37124u), eax);
/* f28865: call dword ptr [0xf370d8] */
  { uint32_t t = R32((uint32_t)(0xf370d8u)); esp -= 4; W32(esp, 0xf2886bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2886b: mov ecx, dword ptr [0xf37124] */
  ecx = R32((uint32_t)(0xf37124u));
/* f28871: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28874: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28876: mov dword ptr [0xf3718c], eax */
  W32((uint32_t)(0xf3718cu), eax);
/* f2887b: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f2887d: /* f2887d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2887f: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f28881: /* f28881: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f28883: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f28886: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28887: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f28888: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* f2888a: push 0xf3113c */
  { uint32_t v = 0xf3113cu; esp -= 4; W32(esp, v); }
/* f2888f: mov dword ptr [ebp - 0x14], 0x13 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x13u);
/* f28896: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xf28898u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28898: mov ecx, dword ptr [0xf385a0] */
  ecx = R32((uint32_t)(0xf385a0u));
/* f2889e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f288a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f288a3: push 0xf35ca8 */
  { uint32_t v = 0xf35ca8u; esp -= 4; W32(esp, v); }
/* f288a8: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* f288ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f288ae: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf288b4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f288b4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f288b7: /* f288b7: lea ecx, [esi + 0xe8] */
  ecx = (uint32_t)(esi + 0xe8u);
/* f288bd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f288c0: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
/* f288c3: call 0xf21230 */
  esp -= 4; W32(esp, 0xf288c8u); SPILL(); f_f21230(); if (g_unwind) return; RELOAD();
/* f288c8: mov eax, dword ptr [0xf386fc] */
  eax = R32((uint32_t)(0xf386fcu));
/* f288cd: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* f288cf: mov ecx, dword ptr [0xf385a0] */
  ecx = R32((uint32_t)(0xf385a0u));
/* f288d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f288d7: push 0xf35cd8 */
  { uint32_t v = 0xf35cd8u; esp -= 4; W32(esp, v); }
/* f288dc: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* f288e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f288e2: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf288e8u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f288e8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f288eb: /* f288eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f288ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f288ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f288f0: mov eax, 1 */
  eax = 0x1u;
/* f288f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f288fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f288fd: mov esp, ebp */
  esp = ebp;
/* f288ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f28900: ret  */
  esp += 4; SPILL(); return;
}

void f_f2870f(void) {
  LOAD_REGS();
  goto L_f2870f;
L_f286f9: /* f286f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f286fc: /* f286fc: xor eax, eax */
  eax = 0;
/* f286fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f28701: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f28708: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28709: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2870a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2870b: mov esp, ebp */
  esp = ebp;
/* f2870d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2870e: ret  */
  esp += 4; SPILL(); return;
L_f2870f: /* f2870f: cmp dword ptr [esi + 0xc4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xc4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28715: je 0xf286fc */
  if (zf) goto L_f286fc;
L_f28717: /* f28717: lea ebx, [esi + 0x7c] */
  ebx = (uint32_t)(esi + 0x7cu);
/* f2871a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2871b: mov ecx, ebx */
  ecx = ebx;
/* f2871d: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* f28721: call 0xf212c1 */
  esp -= 4; W32(esp, 0xf28726u); SPILL(); f_f212c1(); if (g_unwind) return; RELOAD();
/* f28726: xor edi, edi */
  edi = 0;
/* f28728: jmp 0xf28730 */
  goto L_f28730;
L_f28730: /* f28730: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* f28736: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28739: jle 0xf28740 */
  if ((zf || sf != of)) goto L_f28740;
L_f2873b: /* f2873b: mov eax, 0x20 */
  eax = 0x20u;
L_f28740: /* f28740: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28742: jge 0xf28793 */
  if ((sf == of)) goto L_f28793;
L_f28744: /* f28744: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f28747: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f28748: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2874a: call dword ptr [0xf37168] */
  { uint32_t t = R32((uint32_t)(0xf37168u)); esp -= 4; W32(esp, 0xf28750u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28750: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28753: call dword ptr [0xf37084] */
  { uint32_t t = R32((uint32_t)(0xf37084u)); esp -= 4; W32(esp, 0xf28759u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28759: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2875b: jne 0xf28793 */
  if (!zf) goto L_f28793;
L_f2875d: /* f2875d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2875f: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* f28761: mov ecx, ebx */
  ecx = ebx;
/* f28763: call dword ptr [0xf385cc] */
  esp -= 4; W32(esp, 0xf28769u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f28769: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* f2876b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2876e: mov eax, edi */
  eax = edi;
/* f28770: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f28773: mov dword ptr [eax + ecx + 4], edx */
  W32((uint32_t)(eax + ecx + 0x4u), edx);
/* f28777: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* f2877d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f28780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28781: push 0x1021 */
  { uint32_t v = 0x1021u; esp -= 4; W32(esp, v); }
/* f28786: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f28787: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2878du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2878d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28790: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f28791: jmp 0xf28730 */
  goto L_f28730;
L_f28793: /* f28793: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* f28799: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2879b: jne 0xf287bb */
  if (!zf) goto L_f287bb;
L_f2879d: /* f2879d: mov edx, dword ptr [0xf385a0] */
  edx = R32((uint32_t)(0xf385a0u));
/* f287a3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f287a5: push 0xf35c40 */
  { uint32_t v = 0xf35c40u; esp -= 4; W32(esp, v); }
/* f287aa: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* f287af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f287b0: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf287b6u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f287b6: jmp 0xf286f9 */
  goto L_f286f9;
L_f287bb: /* f287bb: xor ebx, ebx */
  ebx = 0;
/* f287bd: lea edi, [esi + 0x94] */
  edi = (uint32_t)(esi + 0x94u);
/* f287c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f287c4: mov ecx, edi */
  ecx = edi;
/* f287c6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f287c9: call 0xf21104 */
  esp -= 4; W32(esp, 0xf287ceu); SPILL(); f_f21104(); if (g_unwind) return; RELOAD();
/* f287ce: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f287d0: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* f287d2: mov ecx, edi */
  ecx = edi;
/* f287d4: call dword ptr [0xf385cc] */
  esp -= 4; W32(esp, 0xf287dau); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f287da: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f287e0: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f287e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f287e8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f287eb: jp 0xf287f7 */
  if (pf) goto L_f287f7;
L_f287ed: /* f287ed: mov dword ptr [esi + 0xc0], 0x3f800000 */
  W32((uint32_t)(esi + 0xc0u), 0x3f800000u);
L_f287f7: /* f287f7: push 0xd002 */
  { uint32_t v = 0xd002u; esp -= 4; W32(esp, v); }
/* f287fc: call dword ptr [0xf370e8] */
  { uint32_t t = R32((uint32_t)(0xf370e8u)); esp -= 4; W32(esp, 0xf28802u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28802: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f28808: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2880b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2880c: call dword ptr [0xf37108] */
  { uint32_t t = R32((uint32_t)(0xf37108u)); esp -= 4; W32(esp, 0xf28812u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28812: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28815: mov dword ptr [esi + 0x60], ebx */
  W32((uint32_t)(esi + 0x60u), ebx);
/* f28818: push 0xf35c90 */
  { uint32_t v = 0xf35c90u; esp -= 4; W32(esp, v); }
/* f2881d: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* f28821: mov dword ptr [0xf3718c], ebx */
  W32((uint32_t)(0xf3718cu), ebx);
/* f28827: mov dword ptr [0xf37124], ebx */
  W32((uint32_t)(0xf37124u), ebx);
/* f2882d: call dword ptr [0xf3716c] */
  { uint32_t t = R32((uint32_t)(0xf3716cu)); esp -= 4; W32(esp, 0xf28833u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28833: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* f28839: xor edx, edx */
  edx = 0;
/* f2883b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2883e: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f28840: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f28843: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28845: mov eax, edx */
  eax = edx;
/* f28847: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f28849: /* f28849: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2884b: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f2884d: /* f2884d: push 0xf35c98 */
  { uint32_t v = 0xf35c98u; esp -= 4; W32(esp, v); }
/* f28852: call dword ptr [0xf370d8] */
  { uint32_t t = R32((uint32_t)(0xf370d8u)); esp -= 4; W32(esp, 0xf28858u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28858: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2885b: push 0xf35ca0 */
  { uint32_t v = 0xf35ca0u; esp -= 4; W32(esp, v); }
/* f28860: mov dword ptr [0xf37124], eax */
  W32((uint32_t)(0xf37124u), eax);
/* f28865: call dword ptr [0xf370d8] */
  { uint32_t t = R32((uint32_t)(0xf370d8u)); esp -= 4; W32(esp, 0xf2886bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2886b: mov ecx, dword ptr [0xf37124] */
  ecx = R32((uint32_t)(0xf37124u));
/* f28871: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28874: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28876: mov dword ptr [0xf3718c], eax */
  W32((uint32_t)(0xf3718cu), eax);
/* f2887b: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f2887d: /* f2887d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2887f: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f28881: /* f28881: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f28883: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f28886: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28887: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f28888: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* f2888a: push 0xf3113c */
  { uint32_t v = 0xf3113cu; esp -= 4; W32(esp, v); }
/* f2888f: mov dword ptr [ebp - 0x14], 0x13 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x13u);
/* f28896: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xf28898u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28898: mov ecx, dword ptr [0xf385a0] */
  ecx = R32((uint32_t)(0xf385a0u));
/* f2889e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f288a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f288a3: push 0xf35ca8 */
  { uint32_t v = 0xf35ca8u; esp -= 4; W32(esp, v); }
/* f288a8: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* f288ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f288ae: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf288b4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f288b4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f288b7: /* f288b7: lea ecx, [esi + 0xe8] */
  ecx = (uint32_t)(esi + 0xe8u);
/* f288bd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f288c0: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
/* f288c3: call 0xf21230 */
  esp -= 4; W32(esp, 0xf288c8u); SPILL(); f_f21230(); if (g_unwind) return; RELOAD();
/* f288c8: mov eax, dword ptr [0xf386fc] */
  eax = R32((uint32_t)(0xf386fcu));
/* f288cd: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* f288cf: mov ecx, dword ptr [0xf385a0] */
  ecx = R32((uint32_t)(0xf385a0u));
/* f288d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f288d7: push 0xf35cd8 */
  { uint32_t v = 0xf35cd8u; esp -= 4; W32(esp, v); }
/* f288dc: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* f288e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f288e2: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf288e8u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f288e8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f288eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f288ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f288ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f288f0: mov eax, 1 */
  eax = 0x1u;
/* f288f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f288fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f288fd: mov esp, ebp */
  esp = ebp;
/* f288ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f28900: ret  */
  esp += 4; SPILL(); return;
}

void f_f2872a(void) {
  LOAD_REGS();
  goto L_f2872a;
L_f286f9: /* f286f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f286fc: xor eax, eax */
  eax = 0;
/* f286fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f28701: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f28708: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28709: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2870a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2870b: mov esp, ebp */
  esp = ebp;
/* f2870d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2870e: ret  */
  esp += 4; SPILL(); return;
L_f2872a: /* f2872a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f28730: /* f28730: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* f28736: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28739: jle 0xf28740 */
  if ((zf || sf != of)) goto L_f28740;
L_f2873b: /* f2873b: mov eax, 0x20 */
  eax = 0x20u;
L_f28740: /* f28740: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28742: jge 0xf28793 */
  if ((sf == of)) goto L_f28793;
L_f28744: /* f28744: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f28747: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f28748: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2874a: call dword ptr [0xf37168] */
  { uint32_t t = R32((uint32_t)(0xf37168u)); esp -= 4; W32(esp, 0xf28750u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28750: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28753: call dword ptr [0xf37084] */
  { uint32_t t = R32((uint32_t)(0xf37084u)); esp -= 4; W32(esp, 0xf28759u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28759: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2875b: jne 0xf28793 */
  if (!zf) goto L_f28793;
L_f2875d: /* f2875d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2875f: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* f28761: mov ecx, ebx */
  ecx = ebx;
/* f28763: call dword ptr [0xf385cc] */
  esp -= 4; W32(esp, 0xf28769u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f28769: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* f2876b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2876e: mov eax, edi */
  eax = edi;
/* f28770: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f28773: mov dword ptr [eax + ecx + 4], edx */
  W32((uint32_t)(eax + ecx + 0x4u), edx);
/* f28777: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* f2877d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f28780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28781: push 0x1021 */
  { uint32_t v = 0x1021u; esp -= 4; W32(esp, v); }
/* f28786: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f28787: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2878du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2878d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28790: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f28791: jmp 0xf28730 */
  goto L_f28730;
L_f28793: /* f28793: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* f28799: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2879b: jne 0xf287bb */
  if (!zf) goto L_f287bb;
L_f2879d: /* f2879d: mov edx, dword ptr [0xf385a0] */
  edx = R32((uint32_t)(0xf385a0u));
/* f287a3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f287a5: push 0xf35c40 */
  { uint32_t v = 0xf35c40u; esp -= 4; W32(esp, v); }
/* f287aa: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* f287af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f287b0: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf287b6u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f287b6: jmp 0xf286f9 */
  goto L_f286f9;
L_f287bb: /* f287bb: xor ebx, ebx */
  ebx = 0;
/* f287bd: lea edi, [esi + 0x94] */
  edi = (uint32_t)(esi + 0x94u);
/* f287c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f287c4: mov ecx, edi */
  ecx = edi;
/* f287c6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f287c9: call 0xf21104 */
  esp -= 4; W32(esp, 0xf287ceu); SPILL(); f_f21104(); if (g_unwind) return; RELOAD();
/* f287ce: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f287d0: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* f287d2: mov ecx, edi */
  ecx = edi;
/* f287d4: call dword ptr [0xf385cc] */
  esp -= 4; W32(esp, 0xf287dau); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f287da: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f287e0: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f287e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f287e8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f287eb: jp 0xf287f7 */
  if (pf) goto L_f287f7;
L_f287ed: /* f287ed: mov dword ptr [esi + 0xc0], 0x3f800000 */
  W32((uint32_t)(esi + 0xc0u), 0x3f800000u);
L_f287f7: /* f287f7: push 0xd002 */
  { uint32_t v = 0xd002u; esp -= 4; W32(esp, v); }
/* f287fc: call dword ptr [0xf370e8] */
  { uint32_t t = R32((uint32_t)(0xf370e8u)); esp -= 4; W32(esp, 0xf28802u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28802: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f28808: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2880b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2880c: call dword ptr [0xf37108] */
  { uint32_t t = R32((uint32_t)(0xf37108u)); esp -= 4; W32(esp, 0xf28812u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28812: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28815: mov dword ptr [esi + 0x60], ebx */
  W32((uint32_t)(esi + 0x60u), ebx);
/* f28818: push 0xf35c90 */
  { uint32_t v = 0xf35c90u; esp -= 4; W32(esp, v); }
/* f2881d: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* f28821: mov dword ptr [0xf3718c], ebx */
  W32((uint32_t)(0xf3718cu), ebx);
/* f28827: mov dword ptr [0xf37124], ebx */
  W32((uint32_t)(0xf37124u), ebx);
/* f2882d: call dword ptr [0xf3716c] */
  { uint32_t t = R32((uint32_t)(0xf3716cu)); esp -= 4; W32(esp, 0xf28833u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28833: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* f28839: xor edx, edx */
  edx = 0;
/* f2883b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2883e: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f28840: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f28843: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28845: mov eax, edx */
  eax = edx;
/* f28847: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f28849: /* f28849: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2884b: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f2884d: /* f2884d: push 0xf35c98 */
  { uint32_t v = 0xf35c98u; esp -= 4; W32(esp, v); }
/* f28852: call dword ptr [0xf370d8] */
  { uint32_t t = R32((uint32_t)(0xf370d8u)); esp -= 4; W32(esp, 0xf28858u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28858: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2885b: push 0xf35ca0 */
  { uint32_t v = 0xf35ca0u; esp -= 4; W32(esp, v); }
/* f28860: mov dword ptr [0xf37124], eax */
  W32((uint32_t)(0xf37124u), eax);
/* f28865: call dword ptr [0xf370d8] */
  { uint32_t t = R32((uint32_t)(0xf370d8u)); esp -= 4; W32(esp, 0xf2886bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2886b: mov ecx, dword ptr [0xf37124] */
  ecx = R32((uint32_t)(0xf37124u));
/* f28871: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28874: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28876: mov dword ptr [0xf3718c], eax */
  W32((uint32_t)(0xf3718cu), eax);
/* f2887b: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f2887d: /* f2887d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2887f: je 0xf288b7 */
  if (zf) goto L_f288b7;
L_f28881: /* f28881: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f28883: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f28886: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28887: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f28888: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* f2888a: push 0xf3113c */
  { uint32_t v = 0xf3113cu; esp -= 4; W32(esp, v); }
/* f2888f: mov dword ptr [ebp - 0x14], 0x13 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x13u);
/* f28896: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xf28898u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28898: mov ecx, dword ptr [0xf385a0] */
  ecx = R32((uint32_t)(0xf385a0u));
/* f2889e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f288a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f288a3: push 0xf35ca8 */
  { uint32_t v = 0xf35ca8u; esp -= 4; W32(esp, v); }
/* f288a8: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* f288ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f288ae: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf288b4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f288b4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f288b7: /* f288b7: lea ecx, [esi + 0xe8] */
  ecx = (uint32_t)(esi + 0xe8u);
/* f288bd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f288c0: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
/* f288c3: call 0xf21230 */
  esp -= 4; W32(esp, 0xf288c8u); SPILL(); f_f21230(); if (g_unwind) return; RELOAD();
/* f288c8: mov eax, dword ptr [0xf386fc] */
  eax = R32((uint32_t)(0xf386fcu));
/* f288cd: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* f288cf: mov ecx, dword ptr [0xf385a0] */
  ecx = R32((uint32_t)(0xf385a0u));
/* f288d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f288d7: push 0xf35cd8 */
  { uint32_t v = 0xf35cd8u; esp -= 4; W32(esp, v); }
/* f288dc: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* f288e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f288e2: call dword ptr [0xf3859c] */
  esp -= 4; W32(esp, 0xf288e8u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f288e8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f288eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f288ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f288ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f288f0: mov eax, 1 */
  eax = 0x1u;
/* f288f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f288fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f288fd: mov esp, ebp */
  esp = ebp;
/* f288ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f28900: ret  */
  esp += 4; SPILL(); return;
}

void f_f28901(void) {
  LOAD_REGS();
L_f28901: /* f28901: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* f28904: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f28909: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f2890c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2890d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f28910: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28915u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28915(); return;
}

void f_f28915(void) {
  LOAD_REGS();
L_f28915: /* f28915: push 0xf31c4c */
  { uint32_t v = 0xf31c4cu; esp -= 4; W32(esp, v); }
/* f2891a: push 0xf35cd0 */
  { uint32_t v = 0xf35cd0u; esp -= 4; W32(esp, v); }
/* f2891f: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf28925u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f28925: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28928: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2892a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2892c: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28931u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28931(); return;
}

void f_f28931(void) {
  LOAD_REGS();
L_f28931: /* f28931: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* f28934: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f28939: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* f2893c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2893d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f28940: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28945u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28945(); return;
}

void f_f28945(void) {
  LOAD_REGS();
L_f28945: /* f28945: push 0xf31c18 */
  { uint32_t v = 0xf31c18u; esp -= 4; W32(esp, v); }
/* f2894a: push 0xf35c88 */
  { uint32_t v = 0xf35c88u; esp -= 4; W32(esp, v); }
/* f2894f: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf28955u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f28955: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28958: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2895a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2895c: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28961u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28961(); return;
}

void f_f28961(void) {
  LOAD_REGS();
L_f28961: /* f28961: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* f28964: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f28969: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* f2896c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2896d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* f28970: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28975u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28975(); return;
}

void f_f28975(void) {
  LOAD_REGS();
L_f28975: /* f28975: push 0xf31be4 */
  { uint32_t v = 0xf31be4u; esp -= 4; W32(esp, v); }
/* f2897a: push 0xf35bbc */
  { uint32_t v = 0xf35bbcu; esp -= 4; W32(esp, v); }
/* f2897f: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf28985u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f28985: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28988: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2898a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2898c: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28991u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28991(); return;
}

void f_f28991(void) {
  LOAD_REGS();
L_f28991: /* f28991: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* f28994: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f28999: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f2899c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2899d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f289a0: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf289a5u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f289a5(); return;
}

void f_f289a5(void) {
  LOAD_REGS();
L_f289a5: /* f289a5: push 0xf31bbc */
  { uint32_t v = 0xf31bbcu; esp -= 4; W32(esp, v); }
/* f289aa: push 0xf35b6c */
  { uint32_t v = 0xf35b6cu; esp -= 4; W32(esp, v); }
/* f289af: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf289b5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f289b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f289b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f289ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f289bc: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf289c1u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f289c1(); return;
}

void f_f289c1(void) {
  LOAD_REGS();
L_f289c1: /* f289c1: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* f289c4: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f289c9: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* f289cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f289cd: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* f289d0: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf289d5u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f289d5(); return;
}

void f_f289d5(void) {
  LOAD_REGS();
L_f289d5: /* f289d5: push 0xf31b98 */
  { uint32_t v = 0xf31b98u; esp -= 4; W32(esp, v); }
/* f289da: push 0xf35b20 */
  { uint32_t v = 0xf35b20u; esp -= 4; W32(esp, v); }
/* f289df: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf289e5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f289e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f289e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f289ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f289ec: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf289f1u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f289f1(); return;
}

void f_f289f1(void) {
  LOAD_REGS();
L_f289f1: /* f289f1: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* f289f4: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f289f9: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* f289fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f289fd: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f28a00: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28a05u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28a05(); return;
}

void f_f28a05(void) {
  LOAD_REGS();
L_f28a05: /* f28a05: push 0xf31b74 */
  { uint32_t v = 0xf31b74u; esp -= 4; W32(esp, v); }
/* f28a0a: push 0xf35af0 */
  { uint32_t v = 0xf35af0u; esp -= 4; W32(esp, v); }
/* f28a0f: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf28a15u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f28a15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28a18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f28a1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f28a1c: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28a21u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28a21(); return;
}

void f_f28a21(void) {
  LOAD_REGS();
L_f28a21: /* f28a21: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* f28a24: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f28a29: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f28a2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f28a2d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* f28a30: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28a35u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28a35(); return;
}

void f_f28a35(void) {
  LOAD_REGS();
L_f28a35: /* f28a35: push 0xf31b38 */
  { uint32_t v = 0xf31b38u; esp -= 4; W32(esp, v); }
/* f28a3a: push 0xf35d18 */
  { uint32_t v = 0xf35d18u; esp -= 4; W32(esp, v); }
/* f28a3f: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf28a45u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f28a45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28a48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f28a4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f28a4c: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28a51u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f28a51: guest_badaddr(0xf28a51); return;
}

void f_f28bb0(void) {
  LOAD_REGS();
L_f28bb0: /* f28bb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f28bb1: mov ebp, esp */
  ebp = esp;
/* f28bb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f28bb5: push 0xf2d430 */
  { uint32_t v = 0xf2d430u; esp -= 4; W32(esp, v); }
/* f28bba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f28bc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28bc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f28bc8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f28bcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f28bcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f28bcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f28bce: xor esi, esi */
  esi = 0;
/* f28bd0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f28bd3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f28bd6: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* f28bd9: xor edi, edi */
  edi = 0;
/* f28bdb: jmp 0xf28be0 */
  goto L_f28be0;
L_f28be0: /* f28be0: cmp edi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28be6: jge 0xf28c09 */
  if ((sf == of)) goto L_f28c09;
L_f28be8: /* f28be8: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f28beb: mov eax, edi */
  eax = edi;
/* f28bed: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f28bf0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f28bf2: cmp dword ptr [eax + 0x4c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28bf5: je 0xf28c06 */
  if (zf) goto L_f28c06;
L_f28bf7: /* f28bf7: test byte ptr [eax + 0x44], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f28bfb: jne 0xf28c06 */
  if (!zf) goto L_f28c06;
L_f28bfd: /* f28bfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f28bfe: call 0xf2116d */
  esp -= 4; W32(esp, 0xf28c03u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f28c03: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f28c06: /* f28c06: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f28c07: jmp 0xf28be0 */
  goto L_f28be0;
L_f28c09: /* f28c09: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f28c0c: xor eax, eax */
  eax = 0;
/* f28c0e: mov edi, edi */
  edi = edi;
L_f28c10: /* f28c10: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28c13: jge 0xf28c18 */
  if ((sf == of)) goto L_f28c18;
L_f28c15: /* f28c15: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f28c16: jmp 0xf28c10 */
  goto L_f28c10;
L_f28c18: /* f28c18: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f28c1a: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* f28c1d: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* f28c20: call dword ptr [0xf38458] */
  esp -= 4; W32(esp, 0xf28c26u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f28c26: mov eax, dword ptr [0xf3862c] */
  eax = R32((uint32_t)(0xf3862cu));
/* f28c2b: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28c2d: jne 0xf28cd2 */
  if (!zf) goto L_f28cd2;
L_f28c33: /* f28c33: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f28c36: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28c38: je 0xf28cd2 */
  if (zf) goto L_f28cd2;
L_f28c3e: /* f28c3e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f28c41: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28c43: je 0xf28cd2 */
  if (zf) goto L_f28cd2;
L_f28c49: /* f28c49: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f28c4b: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0xf28c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28c51: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28c53: je 0xf28cd2 */
  if (zf) goto L_f28cd2;
L_f28c55: /* f28c55: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f28c58: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f28c5b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f28c5d: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0xf28c63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28c63: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* f28c69: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28c6b: je 0xf28cd2 */
  if (zf) goto L_f28cd2;
L_f28c6d: /* f28c6d: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* f28c70: cmp dword ptr [esi + 0x104], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x104u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28c76: jle 0xf28c90 */
  if ((zf || sf != of)) goto L_f28c90;
L_f28c78: /* f28c78: push 0x17d */
  { uint32_t v = 0x17du; esp -= 4; W32(esp, v); }
/* f28c7d: push 0xf35d20 */
  { uint32_t v = 0xf35d20u; esp -= 4; W32(esp, v); }
/* f28c82: push 0xf35d38 */
  { uint32_t v = 0xf35d38u; esp -= 4; W32(esp, v); }
/* f28c87: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf28c8du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f28c8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f28c90: /* f28c90: xor ecx, ecx */
  ecx = 0;
L_f28c92: /* f28c92: cmp ecx, dword ptr [esi + 0x104] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x104u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28c98: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f28c9b: jge 0xf28cd2 */
  if ((sf == of)) goto L_f28cd2;
L_f28c9d: /* f28c9d: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* f28ca0: lea ebx, [eax + ecx*4] */
  ebx = (uint32_t)(eax + ecx*4);
/* f28ca3: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* f28ca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28ca7: je 0xf28ccf */
  if (zf) goto L_f28ccf;
L_f28ca9: /* f28ca9: mov edx, dword ptr [eax + 0xa8] */
  edx = R32((uint32_t)(eax + 0xa8u));
/* f28caf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28cb1: je 0xf28ccf */
  if (zf) goto L_f28ccf;
L_f28cb3: /* f28cb3: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f28cb6: add edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f28cb9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f28cbb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f28cbd: mov ecx, edi */
  ecx = edi;
/* f28cbf: call dword ptr [0xf38448] */
  esp -= 4; W32(esp, 0xf28cc5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f28cc5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f28cc7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f28cc9: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* f28ccc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_f28ccf: /* f28ccf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f28cd0: jmp 0xf28c92 */
  goto L_f28c92;
L_f28cd2: /* f28cd2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f28cd5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f28cd8: cmp dword ptr [eax + 0x2c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28cdb: je 0xf28dc0 */
  if (zf) goto L_f28dc0;
L_f28ce1: /* f28ce1: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* f28ce4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f28ce7: add eax, 0x64 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f28cea: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f28ced: mov ecx, 0xc */
  ecx = 0xcu;
/* f28cf2: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f28cf5: xor eax, eax */
  eax = 0;
/* f28cf7: mov ebx, ecx */
  ebx = ecx;
/* f28cf9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* f28cfc: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f28cff: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* f28d01: mov ecx, ebx */
  ecx = ebx;
/* f28d03: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* f28d05: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f28d08: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f28d0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28d0d: je 0xf28dc0 */
  if (zf) goto L_f28dc0;
L_f28d13: /* f28d13: mov eax, dword ptr [edi + 0xcc] */
  eax = R32((uint32_t)(edi + 0xccu));
/* f28d19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28d1b: je 0xf28dc0 */
  if (zf) goto L_f28dc0;
L_f28d21: /* f28d21: mov eax, dword ptr [0xf38718] */
  eax = R32((uint32_t)(0xf38718u));
/* f28d26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28d28: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f28d2b: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* f28d32: jne 0xf28d4f */
  if (!zf) goto L_f28d4f;
L_f28d34: /* f28d34: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* f28d39: push 0xf36ef8 */
  { uint32_t v = 0xf36ef8u; esp -= 4; W32(esp, v); }
/* f28d3e: push 0xf36ef0 */
  { uint32_t v = 0xf36ef0u; esp -= 4; W32(esp, v); }
/* f28d43: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf28d49u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f28d49: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f28d4c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f28d4f: /* f28d4f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f28d52: call 0xf2120d */
  esp -= 4; W32(esp, 0xf28d57u); SPILL(); f_f2120d(); if (g_unwind) return; RELOAD();
/* f28d57: mov esi, dword ptr [0xf385ac] */
  esi = R32((uint32_t)(0xf385acu));
/* f28d5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f28d60: /* f28d60: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f28d63: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f28d66: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28d68: jge 0xf28dc0 */
  if ((sf == of)) goto L_f28dc0;
L_f28d6a: /* f28d6a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f28d6c: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* f28d6f: test byte ptr [eax + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f28d73: jne 0xf28d86 */
  if (!zf) goto L_f28d86;
L_f28d75: /* f28d75: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f28d77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28d78: mov ecx, edi */
  ecx = edi;
/* f28d7a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf28d7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28d7d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f28d80: mov esi, dword ptr [0xf385ac] */
  esi = R32((uint32_t)(0xf385acu));
L_f28d86: /* f28d86: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f28d89: call 0xf2120d */
  esp -= 4; W32(esp, 0xf28d8eu); SPILL(); f_f2120d(); if (g_unwind) return; RELOAD();
/* f28d8e: jmp 0xf28d60 */
  goto L_f28d60;
L_f28dc0: /* f28dc0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f28dc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28dc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f28dc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f28dcc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f28dcd: mov esp, ebp */
  esp = ebp;
/* f28dcf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f28dd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f28bdd(void) {
  LOAD_REGS();
L_f28bdd: /* f28bdd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f28be0: /* f28be0: cmp edi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28be6: jge 0xf28c09 */
  if ((sf == of)) goto L_f28c09;
L_f28be8: /* f28be8: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f28beb: mov eax, edi */
  eax = edi;
/* f28bed: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f28bf0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f28bf2: cmp dword ptr [eax + 0x4c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28bf5: je 0xf28c06 */
  if (zf) goto L_f28c06;
L_f28bf7: /* f28bf7: test byte ptr [eax + 0x44], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f28bfb: jne 0xf28c06 */
  if (!zf) goto L_f28c06;
L_f28bfd: /* f28bfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f28bfe: call 0xf2116d */
  esp -= 4; W32(esp, 0xf28c03u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f28c03: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f28c06: /* f28c06: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f28c07: jmp 0xf28be0 */
  goto L_f28be0;
L_f28c09: /* f28c09: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f28c0c: xor eax, eax */
  eax = 0;
/* f28c0e: mov edi, edi */
  edi = edi;
L_f28c10: /* f28c10: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28c13: jge 0xf28c18 */
  if ((sf == of)) goto L_f28c18;
L_f28c15: /* f28c15: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f28c16: jmp 0xf28c10 */
  goto L_f28c10;
L_f28c18: /* f28c18: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f28c1a: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* f28c1d: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* f28c20: call dword ptr [0xf38458] */
  esp -= 4; W32(esp, 0xf28c26u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f28c26: mov eax, dword ptr [0xf3862c] */
  eax = R32((uint32_t)(0xf3862cu));
/* f28c2b: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28c2d: jne 0xf28cd2 */
  if (!zf) goto L_f28cd2;
L_f28c33: /* f28c33: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f28c36: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28c38: je 0xf28cd2 */
  if (zf) goto L_f28cd2;
L_f28c3e: /* f28c3e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f28c41: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28c43: je 0xf28cd2 */
  if (zf) goto L_f28cd2;
L_f28c49: /* f28c49: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f28c4b: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0xf28c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28c51: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28c53: je 0xf28cd2 */
  if (zf) goto L_f28cd2;
L_f28c55: /* f28c55: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f28c58: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f28c5b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f28c5d: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0xf28c63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28c63: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* f28c69: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28c6b: je 0xf28cd2 */
  if (zf) goto L_f28cd2;
L_f28c6d: /* f28c6d: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* f28c70: cmp dword ptr [esi + 0x104], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x104u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28c76: jle 0xf28c90 */
  if ((zf || sf != of)) goto L_f28c90;
L_f28c78: /* f28c78: push 0x17d */
  { uint32_t v = 0x17du; esp -= 4; W32(esp, v); }
/* f28c7d: push 0xf35d20 */
  { uint32_t v = 0xf35d20u; esp -= 4; W32(esp, v); }
/* f28c82: push 0xf35d38 */
  { uint32_t v = 0xf35d38u; esp -= 4; W32(esp, v); }
/* f28c87: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf28c8du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f28c8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f28c90: /* f28c90: xor ecx, ecx */
  ecx = 0;
L_f28c92: /* f28c92: cmp ecx, dword ptr [esi + 0x104] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x104u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28c98: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f28c9b: jge 0xf28cd2 */
  if ((sf == of)) goto L_f28cd2;
L_f28c9d: /* f28c9d: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* f28ca0: lea ebx, [eax + ecx*4] */
  ebx = (uint32_t)(eax + ecx*4);
/* f28ca3: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* f28ca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28ca7: je 0xf28ccf */
  if (zf) goto L_f28ccf;
L_f28ca9: /* f28ca9: mov edx, dword ptr [eax + 0xa8] */
  edx = R32((uint32_t)(eax + 0xa8u));
/* f28caf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28cb1: je 0xf28ccf */
  if (zf) goto L_f28ccf;
L_f28cb3: /* f28cb3: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f28cb6: add edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f28cb9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f28cbb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f28cbd: mov ecx, edi */
  ecx = edi;
/* f28cbf: call dword ptr [0xf38448] */
  esp -= 4; W32(esp, 0xf28cc5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f28cc5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f28cc7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f28cc9: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* f28ccc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_f28ccf: /* f28ccf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f28cd0: jmp 0xf28c92 */
  goto L_f28c92;
L_f28cd2: /* f28cd2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f28cd5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f28cd8: cmp dword ptr [eax + 0x2c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28cdb: je 0xf28dc0 */
  if (zf) goto L_f28dc0;
L_f28ce1: /* f28ce1: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* f28ce4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f28ce7: add eax, 0x64 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f28cea: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f28ced: mov ecx, 0xc */
  ecx = 0xcu;
/* f28cf2: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f28cf5: xor eax, eax */
  eax = 0;
/* f28cf7: mov ebx, ecx */
  ebx = ecx;
/* f28cf9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* f28cfc: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* f28cff: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* f28d01: mov ecx, ebx */
  ecx = ebx;
/* f28d03: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* f28d05: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f28d08: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f28d0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28d0d: je 0xf28dc0 */
  if (zf) goto L_f28dc0;
L_f28d13: /* f28d13: mov eax, dword ptr [edi + 0xcc] */
  eax = R32((uint32_t)(edi + 0xccu));
/* f28d19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28d1b: je 0xf28dc0 */
  if (zf) goto L_f28dc0;
L_f28d21: /* f28d21: mov eax, dword ptr [0xf38718] */
  eax = R32((uint32_t)(0xf38718u));
/* f28d26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28d28: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f28d2b: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* f28d32: jne 0xf28d4f */
  if (!zf) goto L_f28d4f;
L_f28d34: /* f28d34: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* f28d39: push 0xf36ef8 */
  { uint32_t v = 0xf36ef8u; esp -= 4; W32(esp, v); }
/* f28d3e: push 0xf36ef0 */
  { uint32_t v = 0xf36ef0u; esp -= 4; W32(esp, v); }
/* f28d43: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf28d49u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f28d49: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f28d4c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f28d4f: /* f28d4f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f28d52: call 0xf2120d */
  esp -= 4; W32(esp, 0xf28d57u); SPILL(); f_f2120d(); if (g_unwind) return; RELOAD();
/* f28d57: mov esi, dword ptr [0xf385ac] */
  esi = R32((uint32_t)(0xf385acu));
/* f28d5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f28d60: /* f28d60: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f28d63: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f28d66: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28d68: jge 0xf28dc0 */
  if ((sf == of)) goto L_f28dc0;
L_f28d6a: /* f28d6a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f28d6c: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* f28d6f: test byte ptr [eax + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f28d73: jne 0xf28d86 */
  if (!zf) goto L_f28d86;
L_f28d75: /* f28d75: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f28d77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28d78: mov ecx, edi */
  ecx = edi;
/* f28d7a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf28d7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28d7d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f28d80: mov esi, dword ptr [0xf385ac] */
  esi = R32((uint32_t)(0xf385acu));
L_f28d86: /* f28d86: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f28d89: call 0xf2120d */
  esp -= 4; W32(esp, 0xf28d8eu); SPILL(); f_f2120d(); if (g_unwind) return; RELOAD();
/* f28d8e: jmp 0xf28d60 */
  goto L_f28d60;
L_f28dc0: /* f28dc0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f28dc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28dc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f28dc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f28dcc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f28dcd: mov esp, ebp */
  esp = ebp;
/* f28dcf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f28dd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f28d90(void) {
  LOAD_REGS();
L_f28d90: /* f28d90: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f28d93: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f28d98: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f28d9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f28d9c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f28d9f: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28da4u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f28da4(); return;
}

void f_f28da4(void) {
  LOAD_REGS();
L_f28da4: /* f28da4: push 0xf31c70 */
  { uint32_t v = 0xf31c70u; esp -= 4; W32(esp, v); }
/* f28da9: push 0xf35d68 */
  { uint32_t v = 0xf35d68u; esp -= 4; W32(esp, v); }
/* f28dae: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf28db4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f28db4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28db7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f28db9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f28dbb: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf28dc0u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
/* f28dc0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f28dc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28dc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f28dc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f28dcc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f28dcd: mov esp, ebp */
  esp = ebp;
/* f28dcf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f28dd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f28e70(void) {
  LOAD_REGS();
L_f28e70: /* f28e70: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f28e73: mov eax, dword ptr [0xf38718] */
  eax = R32((uint32_t)(0xf38718u));
/* f28e78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28e7a: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* f28e7e: mov dword ptr [esp + 4], 0xffffffff */
  W32((uint32_t)(esp + 0x4u), 0xffffffffu);
/* f28e86: jne 0xf28ea0 */
  if (!zf) goto L_f28ea0;
L_f28e88: /* f28e88: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* f28e8d: push 0xf36ef8 */
  { uint32_t v = 0xf36ef8u; esp -= 4; W32(esp, v); }
/* f28e92: push 0xf36ef0 */
  { uint32_t v = 0xf36ef0u; esp -= 4; W32(esp, v); }
/* f28e97: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf28e9du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f28e9d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f28ea0: /* f28ea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f28ea1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f28ea2: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f28ea6: call 0xf2120d */
  esp -= 4; W32(esp, 0xf28eabu); SPILL(); f_f2120d(); if (g_unwind) return; RELOAD();
/* f28eab: mov eax, dword ptr [0xf385ac] */
  eax = R32((uint32_t)(0xf385acu));
/* f28eb0: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* f28eb4: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28eb7: jge 0xf28eea */
  if ((sf == of)) goto L_f28eea;
L_f28eb9: /* f28eb9: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f28ebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f28ec0: /* f28ec0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f28ec2: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* f28ec5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f28ec6: lea ecx, [eax + 0x48] */
  ecx = (uint32_t)(eax + 0x48u);
/* f28ec9: call dword ptr [0xf38630] */
  esp -= 4; W32(esp, 0xf28ecfu); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* f28ecf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f28ed1: jne 0xf28ef4 */
  if (!zf) goto L_f28ef4;
L_f28ed3: /* f28ed3: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f28ed7: call 0xf2120d */
  esp -= 4; W32(esp, 0xf28edcu); SPILL(); f_f2120d(); if (g_unwind) return; RELOAD();
/* f28edc: mov eax, dword ptr [0xf385ac] */
  eax = R32((uint32_t)(0xf385acu));
/* f28ee1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* f28ee5: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f28ee8: jl 0xf28ec0 */
  if ((sf != of)) goto L_f28ec0;
L_f28eea: /* f28eea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28eeb: xor eax, eax */
  eax = 0;
/* f28eed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f28eee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28ef1: ret 4 */
  esp += 8; SPILL(); return;
L_f28ef4: /* f28ef4: mov ecx, dword ptr [0xf385ac] */
  ecx = R32((uint32_t)(0xf385acu));
/* f28efa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f28efc: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* f28eff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f28f00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f28f01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f28f04: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f28f40(void) {
  LOAD_REGS();
L_f28f40: /* f28f40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f28f41: mov ebp, esp */
  ebp = esp;
/* f28f43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f28f45: push 0xf2d440 */
  { uint32_t v = 0xf2d440u; esp -= 4; W32(esp, v); }
/* f28f4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f28f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28f51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f28f58: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f28f5b: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f28f5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f28f5f: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f28f65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f28f66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f28f67: xor edi, edi */
  edi = 0;
/* f28f69: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f28f6c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f28f6e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f28f71: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f28f74: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f28f77: jp 0xf28f91 */
  if (pf) goto L_f28f91;
L_f28f79: /* f28f79: push 0x26b */
  { uint32_t v = 0x26bu; esp -= 4; W32(esp, v); }
/* f28f7e: push 0xf35f84 */
  { uint32_t v = 0xf35f84u; esp -= 4; W32(esp, v); }
/* f28f83: push 0xf35f9c */
  { uint32_t v = 0xf35f9cu; esp -= 4; W32(esp, v); }
/* f28f88: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf28f8eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f28f8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f28f91: /* f28f91: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f28f94: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28f96: jne 0xf28fb3 */
  if (!zf) goto L_f28fb3;
L_f28f98: /* f28f98: push 0x26c */
  { uint32_t v = 0x26cu; esp -= 4; W32(esp, v); }
/* f28f9d: push 0xf35fa4 */
  { uint32_t v = 0xf35fa4u; esp -= 4; W32(esp, v); }
/* f28fa2: push 0xf35fbc */
  { uint32_t v = 0xf35fbcu; esp -= 4; W32(esp, v); }
/* f28fa7: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf28fadu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f28fad: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f28fb0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f28fb3: /* f28fb3: cmp dword ptr [ecx + 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x2cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28fb6: je 0xf292c8 */
  if (zf) goto L_f292c8;
L_f28fbc: /* f28fbc: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f28fbf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28fc1: je 0xf292c8 */
  if (zf) goto L_f292c8;
L_f28fc7: /* f28fc7: cmp dword ptr [eax + 0x5c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28fca: jne 0xf28fe1 */
  if (!zf) goto L_f28fe1;
L_f28fcc: /* f28fcc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f28fce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f28fcf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf28fd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f28fd2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f28fd5: cmp dword ptr [eax + 0x5c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f28fd8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f28fdb: je 0xf292c8 */
  if (zf) goto L_f292c8;
L_f28fe1: /* f28fe1: mov eax, dword ptr [ecx + 0xec] */
  eax = R32((uint32_t)(ecx + 0xecu));
/* f28fe7: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f28fed: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f28ff0: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f28ff3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f28ff5: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f28ff7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f28ffa: mov ecx, dword ptr [eax + 0xf8] */
  ecx = R32((uint32_t)(eax + 0xf8u));
/* f29000: mov edx, dword ptr [0xf38720] */
  edx = R32((uint32_t)(0xf38720u));
/* f29006: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* f29009: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* f2900c: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2900e: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
/* f29011: test dl, 8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29014: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29017: jne 0xf29025 */
  if (!zf) goto L_f29025;
L_f29019: /* f29019: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* f2901c: fmul dword ptr [ebx + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xb8u)));
/* f29022: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
L_f29025: /* f29025: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* f29028: fcomp dword ptr [0xf31da0] */
  fpu_com(ST0, F32((uint32_t)(0xf31da0u)));
  FPOP();
/* f2902e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29030: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f29033: jp 0xf2903e */
  if (pf) goto L_f2903e;
L_f29035: /* f29035: mov dword ptr [ebp + 0x28], 0x3f000000 */
  W32((uint32_t)(ebp + 0x28u), 0x3f000000u);
/* f2903c: jmp 0xf29055 */
  goto L_f29055;
L_f2903e: /* f2903e: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* f29041: fcomp dword ptr [0xf31118] */
  fpu_com(ST0, F32((uint32_t)(0xf31118u)));
  FPOP();
/* f29047: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29049: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2904c: jnp 0xf29055 */
  if (!pf) goto L_f29055;
L_f2904e: /* f2904e: mov dword ptr [ebp + 0x28], 0x40000000 */
  W32((uint32_t)(ebp + 0x28u), 0x40000000u);
L_f29055: /* f29055: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* f29058: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f2905e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29060: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f29063: jnp 0xf292c8 */
  if (!pf) goto L_f292c8;
L_f29069: /* f29069: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* f2906c: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f29072: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29074: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f29077: jnp 0xf29082 */
  if (!pf) goto L_f29082;
L_f29079: /* f29079: mov dword ptr [ebp + 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0x20u), 0x3f800000u);
/* f29080: jmp 0xf29096 */
  goto L_f29096;
L_f29082: /* f29082: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* f29085: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f2908b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2908d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f29090: jnp 0xf292c8 */
  if (!pf) goto L_f292c8;
L_f29096: /* f29096: fld dword ptr [ebp + 0x34] */
  { double v = F32((uint32_t)(ebp + 0x34u)); FPUSH(v); }
/* f29099: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f2909f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f290a1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f290a4: jnp 0xf290b9 */
  if (!pf) goto L_f290b9;
L_f290a6: /* f290a6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f290a9: mov eax, ecx */
  eax = ecx;
/* f290ab: and al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f290ad: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f290af: jne 0xf290b9 */
  if (!zf) goto L_f290b9;
L_f290b1: /* f290b1: fld dword ptr [ebp + 0x34] */
  { double v = F32((uint32_t)(ebp + 0x34u)); FPUSH(v); }
/* f290b4: jmp 0xf29209 */
  goto L_f29209;
L_f290b9: /* f290b9: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f290bc: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* f290bf: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f290c2: jne 0xf291d3 */
  if (!zf) goto L_f291d3;
L_f290c8: /* f290c8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f290cb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f290cd: je 0xf291d3 */
  if (zf) goto L_f291d3;
L_f290d3: /* f290d3: cmp dword ptr [eax + 0xb4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f290d9: je 0xf291d3 */
  if (zf) goto L_f291d3;
L_f290df: /* f290df: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f290e2: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f290e8: mov eax, dword ptr [edx + 0xf4] */
  eax = R32((uint32_t)(edx + 0xf4u));
/* f290ee: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f290f1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f290f5: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f290f8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f290fa: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f290fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f290ff: movzx esi, byte ptr [eax + 0x2ca] */
  esi = (uint32_t)(R8((uint32_t)(eax + 0x2cau)));
/* f29106: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* f2910c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2910e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2910f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29110: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29113: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29116: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* f29118: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2911b: mov esi, esp */
  esi = esp;
/* f2911d: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* f2911f: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* f29122: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f29125: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* f29128: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f2912b: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* f2912e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f29131: mov eax, esp */
  eax = esp;
/* f29133: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* f29135: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* f29138: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* f2913b: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* f2913e: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* f29141: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xf29147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29147: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f29149: jne 0xf291ae */
  if (!zf) goto L_f291ae;
L_f2914b: /* f2914b: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* f2914e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f29151: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* f29157: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* f2915d: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* f29163: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f29166: mov edx, esp */
  edx = esp;
/* f29168: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* f2916a: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* f2916d: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* f29170: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* f29173: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* f29176: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29177: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* f2917a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2917b: call dword ptr [0xf3872c] */
  esp -= 4; W32(esp, 0xf29181u); SPILL(); f_6c9192(); if (g_unwind) return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */ RELOAD();
/* f29181: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f29184: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* f2918a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2918d: movzx eax, byte ptr [eax + 0x6c] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x6cu)));
/* f29191: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29194: movzx eax, byte ptr [ebp - 0x54] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffacu)));
/* f29198: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29199: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xf2919fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2919f: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f291a2: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* f291a5: fmul dword ptr [0xf31d9c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d9cu)));
/* f291ab: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_f291ae: /* f291ae: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f291b1: mov edx, dword ptr [ecx + 0xf4] */
  edx = R32((uint32_t)(ecx + 0xf4u));
/* f291b7: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f291bc: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f291bf: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* f291c2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f291c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f291c6: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f291c9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f291cb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f291cd: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* f291d0: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
L_f291d3: /* f291d3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f291d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f291d7: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* f291da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f291db: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* f291de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f291df: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* f291e2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f291e5: mov eax, esp */
  eax = esp;
/* f291e7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f291e9: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* f291ec: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* f291ef: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* f291f2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* f291f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f291f6: mov ecx, ebx */
  ecx = ebx;
/* f291f8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f291fb: call 0xf21037 */
  esp -= 4; W32(esp, 0xf29200u); SPILL(); f_f21037(); if (g_unwind) return; RELOAD();
/* f29200: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f29203: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29206: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_f29209: /* f29209: test cl, 0xe */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2920c: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2920f: jne 0xf29224 */
  if (!zf) goto L_f29224;
L_f29211: /* f29211: mov eax, dword ptr [0xf3782c] */
  eax = R32((uint32_t)(0xf3782cu));
/* f29216: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f29217: mov dword ptr [0xf3782c], eax */
  W32((uint32_t)(0xf3782cu), eax);
/* f2921c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f2921f: mov ecx, eax */
  ecx = eax;
/* f29221: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
L_f29224: /* f29224: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* f29227: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* f2922b: xor edx, edx */
  edx = 0;
/* f2922d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f29230: /* f29230: cmp edx, dword ptr [ebx + 0x80] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f29236: jge 0xf292a1 */
  if ((sf == of)) goto L_f292a1;
L_f29238: /* f29238: mov edi, dword ptr [ebx + 0x7c] */
  edi = R32((uint32_t)(ebx + 0x7cu));
/* f2923b: mov eax, edx */
  eax = edx;
/* f2923d: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f29240: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f29242: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* f29245: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f29247: test eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2924c: jne 0xf2928b */
  if (!zf) goto L_f2928b;
L_f2924e: /* f2924e: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29251: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f29253: jne 0xf292c8 */
  if (!zf) goto L_f292c8;
L_f29255: /* f29255: mov esi, edx */
  esi = edx;
/* f29257: xor edi, edi */
  edi = 0;
/* f29259: jmp 0xf292a3 */
  goto L_f292a3;
L_f2928b: /* f2928b: fcom dword ptr [edi + 0x18] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x18u)));
/* f2928e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29290: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29293: jne 0xf2929c */
  if (!zf) goto L_f2929c;
L_f29295: /* f29295: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f29297: mov esi, edx */
  esi = edx;
/* f29299: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
L_f2929c: /* f2929c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f2929d: xor edi, edi */
  edi = 0;
/* f2929f: jmp 0xf29230 */
  goto L_f29230;
L_f292a1: /* f292a1: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f292a3: /* f292a3: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f292a6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f292a9: jne 0xf292dd */
  if (!zf) goto L_f292dd;
L_f292ab: /* f292ab: mov edx, dword ptr [0xf38720] */
  edx = R32((uint32_t)(0xf38720u));
/* f292b1: mov ecx, dword ptr [ebx + 0xec] */
  ecx = R32((uint32_t)(ebx + 0xecu));
/* f292b7: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* f292ba: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* f292bd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f292bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f292c1: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f292c4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f292c6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_f292c8: /* f292c8: xor eax, eax */
  eax = 0;
/* f292ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f292cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f292d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f292d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f292d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f292d7: mov esp, ebp */
  esp = ebp;
/* f292d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f292da: ret 0x30 */
  esp += 52; SPILL(); return;
L_f292dd: /* f292dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f292de: mov ecx, ebx */
  ecx = ebx;
/* f292e0: call 0xf2116d */
  esp -= 4; W32(esp, 0xf292e5u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f292e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f292e8: cmp esi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f292ee: jl 0xf29308 */
  if ((sf != of)) goto L_f29308;
L_f292f0: /* f292f0: push 0x2cc */
  { uint32_t v = 0x2ccu; esp -= 4; W32(esp, v); }
/* f292f5: push 0xf35fd4 */
  { uint32_t v = 0xf35fd4u; esp -= 4; W32(esp, v); }
/* f292fa: push 0xf35fec */
  { uint32_t v = 0xf35fecu; esp -= 4; W32(esp, v); }
/* f292ff: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf29305u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f29305: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f29308: /* f29308: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2930b: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f2930e: imul esi, esi, 0x54 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x54u);
  esi = (uint32_t)r;
  }
/* f29311: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f29314: fstp dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0); FPOP();
/* f29318: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f2931b: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f29321: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29323: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29326: jne 0xf2932d */
  if (!zf) goto L_f2932d;
L_f29328: /* f29328: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f2932b: jmp 0xf29333 */
  goto L_f29333;
L_f2932d: /* f2932d: fld dword ptr [0xf3112c] */
  { double v = F32((uint32_t)(0xf3112cu)); FPUSH(v); }
L_f29333: /* f29333: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29336: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f29339: fstp dword ptr [edx + esi + 0x24] */
  WF32((uint32_t)(edx + esi + 0x24u), ST0); FPOP();
/* f2933d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29340: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29343: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f29346: fstp dword ptr [ecx + esi + 0x28] */
  WF32((uint32_t)(ecx + esi + 0x28u), ST0); FPOP();
/* f2934a: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* f2934d: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2934f: jne 0xf2947b */
  if (!zf) goto L_f2947b;
L_f29355: /* f29355: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f29358: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2935a: je 0xf2947b */
  if (zf) goto L_f2947b;
L_f29360: /* f29360: cmp dword ptr [eax + 0xb4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f29366: je 0xf2947b */
  if (zf) goto L_f2947b;
L_f2936c: /* f2936c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2936f: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f29375: mov eax, dword ptr [edx + 0xf4] */
  eax = R32((uint32_t)(edx + 0xf4u));
/* f2937b: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2937e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f29382: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f29385: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f29387: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f29389: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f2938c: movzx edi, byte ptr [eax + 0x2ca] */
  edi = (uint32_t)(R8((uint32_t)(eax + 0x2cau)));
/* f29393: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* f29399: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2939b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2939c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2939d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f293a0: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f293a3: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* f293a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f293a8: mov edi, esp */
  edi = esp;
/* f293aa: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* f293ac: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* f293af: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f293b2: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* f293b5: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* f293b8: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* f293bb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f293be: mov eax, esp */
  eax = esp;
/* f293c0: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* f293c2: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* f293c5: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* f293c8: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* f293cb: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* f293ce: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xf293d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f293d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f293d6: jne 0xf2945a */
  if (!zf) goto L_f2945a;
L_f293dc: /* f293dc: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* f293df: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f293e2: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* f293e8: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* f293ee: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* f293f4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f293f7: mov edx, esp */
  edx = esp;
/* f293f9: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* f293fb: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* f293fe: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* f29401: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* f29404: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* f29407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29408: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* f2940b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2940c: call dword ptr [0xf3872c] */
  esp -= 4; W32(esp, 0xf29412u); SPILL(); f_6c9192(); if (g_unwind) return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */ RELOAD();
/* f29412: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f29415: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* f2941b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2941e: movzx eax, byte ptr [eax + 0x6c] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x6cu)));
/* f29422: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29425: movzx eax, byte ptr [ebp - 0x54] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffacu)));
/* f29429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2942a: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xf29430u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29430: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29433: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f29436: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f29439: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* f2943c: fst dword ptr [edx + esi + 0x20] */
  WF32((uint32_t)(edx + esi + 0x20u), ST0);
/* f29440: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29443: fmul dword ptr [0xf31d9c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d9cu)));
/* f29449: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2944c: fst dword ptr [ecx + esi + 0x24] */
  WF32((uint32_t)(ecx + esi + 0x24u), ST0);
/* f29450: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29453: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f29456: fstp dword ptr [eax + esi + 0x28] */
  WF32((uint32_t)(eax + esi + 0x28u), ST0); FPOP();
L_f2945a: /* f2945a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2945d: mov edx, dword ptr [ecx + 0xf4] */
  edx = R32((uint32_t)(ecx + 0xf4u));
/* f29463: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f29468: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2946b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* f2946e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f29470: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29472: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29475: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f29477: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f29479: xor edi, edi */
  edi = 0;
L_f2947b: /* f2947b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2947e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f29481: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29484: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f29487: mov dword ptr [esi + ecx], edx */
  W32((uint32_t)(esi + ecx), edx);
/* f2948a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2948d: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29490: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f29493: mov dword ptr [ecx + esi + 0x48], edx */
  W32((uint32_t)(ecx + esi + 0x48u), edx);
/* f29497: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2949a: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2949d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f294a0: mov dword ptr [ecx + esi + 8], edx */
  W32((uint32_t)(ecx + esi + 0x8u), edx);
/* f294a4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f294a7: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f294aa: fstp dword ptr [ecx + esi + 0x18] */
  WF32((uint32_t)(ecx + esi + 0x18u), ST0); FPOP();
/* f294ae: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* f294b1: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f294b3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f294b6: je 0xf29532 */
  if (zf) goto L_f29532;
L_f294b8: /* f294b8: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f294bf: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* f294c6: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* f294cd: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* f294d0: jmp 0xf29535 */
  goto L_f29535;
L_f29532: /* f29532: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
L_f29535: /* f29535: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29538: mov ecx, dword ptr [edx + 0x7c] */
  ecx = R32((uint32_t)(edx + 0x7cu));
/* f2953b: lea edx, [ecx + esi + 0xc] */
  edx = (uint32_t)(ecx + esi + 0xcu);
/* f2953f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f29541: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* f29543: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f29546: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* f29549: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2954c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2954f: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f29552: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f29558: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2955a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2955d: jnp 0xf29564 */
  if (!pf) goto L_f29564;
L_f2955f: /* f2955f: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f29562: jmp 0xf2956a */
  goto L_f2956a;
L_f29564: /* f29564: fld dword ptr [0xf310f4] */
  { double v = F32((uint32_t)(0xf310f4u)); FPUSH(v); }
L_f2956a: /* f2956a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2956d: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f29570: fstp dword ptr [edx + esi + 0x1c] */
  WF32((uint32_t)(edx + esi + 0x1cu), ST0); FPOP();
/* f29574: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29577: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* f2957a: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2957d: mov eax, dword ptr [ecx + 0x138] */
  eax = R32((uint32_t)(ecx + 0x138u));
/* f29583: mov dword ptr [edx + esi + 0x2c], eax */
  W32((uint32_t)(edx + esi + 0x2cu), eax);
/* f29587: mov ecx, dword ptr [ecx + 0x13c] */
  ecx = R32((uint32_t)(ecx + 0x13cu));
/* f2958d: mov dword ptr [edx + esi + 0x30], ecx */
  W32((uint32_t)(edx + esi + 0x30u), ecx);
/* f29591: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* f29594: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29597: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2959a: fstp dword ptr [eax + esi + 0x38] */
  WF32((uint32_t)(eax + esi + 0x38u), ST0); FPOP();
/* f2959e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295a1: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f295a4: mov dword ptr [edx + esi + 0x3c], edi */
  W32((uint32_t)(edx + esi + 0x3cu), edi);
/* f295a8: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* f295ab: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f295b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f295b3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f295b6: jne 0xf295bf */
  if (!zf) goto L_f295bf;
L_f295b8: /* f295b8: mov eax, 1 */
  eax = 0x1u;
/* f295bd: jmp 0xf295c1 */
  goto L_f295c1;
L_f295bf: /* f295bf: xor eax, eax */
  eax = 0;
L_f295c1: /* f295c1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295c4: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f295c7: mov dword ptr [edx + esi + 0x40], eax */
  W32((uint32_t)(edx + esi + 0x40u), eax);
/* f295cb: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* f295ce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f295d1: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f295d4: fstp dword ptr [ecx + esi + 0x34] */
  WF32((uint32_t)(ecx + esi + 0x34u), ST0); FPOP();
/* f295d8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295db: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f295de: mov dword ptr [eax + esi + 0x4c], 1 */
  W32((uint32_t)(eax + esi + 0x4cu), 0x1u);
/* f295e6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295e9: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f295ec: mov dword ptr [edx + esi + 0x50], edi */
  W32((uint32_t)(edx + esi + 0x50u), edi);
/* f295f0: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* f295f3: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f295f5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f295f8: je 0xf2960f */
  if (zf) goto L_f2960f;
L_f295fa: /* f295fa: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* f295fd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29600: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f29603: mov edi, dword ptr [ecx + 0x94] */
  edi = R32((uint32_t)(ecx + 0x94u));
/* f29609: mov edx, dword ptr [edx + edi - 0x30] */
  edx = R32((uint32_t)(edx + edi + 0xffffffd0u));
/* f2960d: jmp 0xf29622 */
  goto L_f29622;
L_f2960f: /* f2960f: mov ecx, dword ptr [ecx + 0x5c] */
  ecx = R32((uint32_t)(ecx + 0x5cu));
/* f29612: lea edx, [ecx + ecx*4] */
  edx = (uint32_t)(ecx + ecx*4);
/* f29615: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29618: mov edi, dword ptr [ecx + 0x88] */
  edi = R32((uint32_t)(ecx + 0x88u));
/* f2961e: mov edx, dword ptr [edi + edx*4 - 0x10] */
  edx = R32((uint32_t)(edi + edx*4 + 0xfffffff0u));
L_f29622: /* f29622: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* f29624: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f29627: mov dword ptr [eax + esi + 0x44], edx */
  W32((uint32_t)(eax + esi + 0x44u), edx);
/* f2962b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2962e: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f29631: mov ebx, dword ptr [0xf37124] */
  ebx = R32((uint32_t)(0xf37124u));
/* f29637: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f29639: mov edi, dword ptr [esi + edx + 4] */
  edi = R32((uint32_t)(esi + edx + 0x4u));
/* f2963d: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* f29640: jne 0xf29647 */
  if (!zf) goto L_f29647;
L_f29642: /* f29642: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* f29645: jmp 0xf296a6 */
  goto L_f296a6;
L_f29647: /* f29647: test byte ptr [ebp + 0x2c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x2cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2964b: je 0xf29656 */
  if (zf) goto L_f29656;
L_f2964d: /* f2964d: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* f29654: jmp 0xf29689 */
  goto L_f29689;
L_f29656: /* f29656: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f29659: fld dword ptr [esi + eax + 0x24] */
  { double v = F32((uint32_t)(esi + eax + 0x24u)); FPUSH(v); }
/* f2965d: fdiv dword ptr [ebp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x24u)));
/* f29660: fcom dword ptr [0xf31d1c] */
  fpu_com(ST0, F32((uint32_t)(0xf31d1cu)));
/* f29666: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29668: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2966b: je 0xf29675 */
  if (zf) goto L_f29675;
L_f2966d: /* f2966d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2966f: fld dword ptr [0xf31d1c] */
  { double v = F32((uint32_t)(0xf31d1cu)); FPUSH(v); }
L_f29675: /* f29675: fldln2  */
  FPUSH(0.693147180559945309417);
/* f29677: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f29679: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
/* f2967b: fmul qword ptr [0xf31d10] */
  ST0 = ST0 * (F64((uint32_t)(0xf31d10u)));
/* f29681: call 0xf2bb70 */
  esp -= 4; W32(esp, 0xf29686u); SPILL(); f_f2bb70(); if (g_unwind) return; RELOAD();
/* f29686: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_f29689: /* f29689: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2968b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f2968e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2968f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29690: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* f29692: push 0xf3114c */
  { uint32_t v = 0xf3114cu; esp -= 4; W32(esp, v); }
/* f29697: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf29699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29699: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2969c: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2969f: fld dword ptr [eax + esi + 0x24] */
  { double v = F32((uint32_t)(eax + esi + 0x24u)); FPUSH(v); }
/* f296a3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f296a6: /* f296a6: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f296ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f296ad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f296b0: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f296b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f296b6: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf296bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f296bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f296bf: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f296c2: mov ecx, dword ptr [edx + esi + 0x40] */
  ecx = R32((uint32_t)(edx + esi + 0x40u));
/* f296c6: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* f296c9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f296cc: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f296cf: jne 0xf296dc */
  if (!zf) goto L_f296dc;
L_f296d1: /* f296d1: fld dword ptr [0xf31124] */
  { double v = F32((uint32_t)(0xf31124u)); FPUSH(v); }
/* f296d7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f296da: jmp 0xf29710 */
  goto L_f29710;
L_f296dc: /* f296dc: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* f296df: fcom dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
/* f296e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f296e7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f296ea: jp 0xf296f5 */
  if (pf) goto L_f296f5;
L_f296ec: /* f296ec: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* f296f3: jmp 0xf2970e */
  goto L_f2970e;
L_f296f5: /* f296f5: fcom dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
/* f296fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f296fd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f29700: jp 0xf29707 */
  if (pf) goto L_f29707;
L_f29702: /* f29702: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f29705: jmp 0xf29710 */
  goto L_f29710;
L_f29707: /* f29707: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
L_f2970e: /* f2970e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f29710: /* f29710: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f29713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29714: push 0x100a */
  { uint32_t v = 0x100au; esp -= 4; W32(esp, v); }
/* f29719: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2971a: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf29720u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29720: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29723: mov eax, dword ptr [ecx + 0xe0] */
  eax = R32((uint32_t)(ecx + 0xe0u));
/* f29729: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2972c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2972e: jne 0xf29743 */
  if (!zf) goto L_f29743;
L_f29730: /* f29730: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* f29733: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29734: push 0x1003 */
  { uint32_t v = 0x1003u; esp -= 4; W32(esp, v); }
/* f29739: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2973a: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf29740u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29740: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f29743: /* f29743: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29746: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29749: mov edx, dword ptr [ecx + esi + 0x44] */
  edx = R32((uint32_t)(ecx + esi + 0x44u));
/* f2974d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* f2974f: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f29752: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29753: push 0x1007 */
  { uint32_t v = 0x1007u; esp -= 4; W32(esp, v); }
/* f29758: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29759: call dword ptr [0xf37120] */
  { uint32_t t = R32((uint32_t)(0xf37120u)); esp -= 4; W32(esp, 0xf2975fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2975f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29762: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29765: fld dword ptr [ecx + esi + 0x14] */
  { double v = F32((uint32_t)(ecx + esi + 0x14u)); FPUSH(v); }
/* f29769: lea esi, [ecx + esi + 0xc] */
  esi = (uint32_t)(ecx + esi + 0xcu);
/* f2976d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29773: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29776: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f29779: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* f2977c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29782: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29783: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f29785: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2978a: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29791: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* f29794: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* f29797: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2979d: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* f297a0: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf297a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f297a6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f297a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f297ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f297ae: je 0xf297b7 */
  if (zf) goto L_f297b7;
L_f297b0: /* f297b0: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f297b5: jmp 0xf297cf */
  goto L_f297cf;
L_f297b7: /* f297b7: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f297be: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* f297c5: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* f297cc: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
L_f297cf: /* f297cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f297d1: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* f297d4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* f297d7: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* f297da: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f297dd: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f297e0: test byte ptr [ebp + 0x2c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x2cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f297e4: jne 0xf29825 */
  if (!zf) goto L_f29825;
L_f297e6: /* f297e6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f297e9: call dword ptr [0xf38634] */
  esp -= 4; W32(esp, 0xf297efu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* f297ef: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f297f2: fcomp dword ptr [0xf31d04] */
  fpu_com(ST0, F32((uint32_t)(0xf31d04u)));
  FPOP();
/* f297f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f297fa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f297fd: je 0xf29825 */
  if (zf) goto L_f29825;
L_f297ff: /* f297ff: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* f29802: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29808: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* f2980b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2980e: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29814: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* f29817: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* f2981a: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29820: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* f29823: jmp 0xf2984c */
  goto L_f2984c;
L_f29825: /* f29825: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f2982c: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* f2982f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* f29836: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* f29839: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* f29840: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* f29843: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* f29846: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* f29849: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_f2984c: /* f2984c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f2984f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f29850: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f29855: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29856: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2985cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2985c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2985f: mov eax, dword ptr [edx + 0xc0] */
  eax = R32((uint32_t)(edx + 0xc0u));
/* f29865: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29869: push 0x1021 */
  { uint32_t v = 0x1021u; esp -= 4; W32(esp, v); }
/* f2986e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2986f: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf29875u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29875: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* f29878: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2987b: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2987d: je 0xf29883 */
  if (zf) goto L_f29883;
L_f2987f: /* f2987f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f29881: jmp 0xf29885 */
  goto L_f29885;
L_f29883: /* f29883: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_f29885: /* f29885: push 0x202 */
  { uint32_t v = 0x202u; esp -= 4; W32(esp, v); }
/* f2988a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2988b: call dword ptr [0xf37120] */
  { uint32_t t = R32((uint32_t)(0xf37120u)); esp -= 4; W32(esp, 0xf29891u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29891: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* f29894: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29897: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29899: je 0xf298bd */
  if (zf) goto L_f298bd;
L_f2989b: /* f2989b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f2989e: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* f298a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f298a4: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f298a7: mov ecx, dword ptr [eax + 0x94] */
  ecx = R32((uint32_t)(eax + 0x94u));
/* f298ad: lea edx, [edx + ecx - 0x44] */
  edx = (uint32_t)(edx + ecx + 0xffffffbcu);
/* f298b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f298b2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f298b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f298b5: call dword ptr [0xf37094] */
  { uint32_t t = R32((uint32_t)(0xf37094u)); esp -= 4; W32(esp, 0xf298bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f298bb: jmp 0xf298e0 */
  goto L_f298e0;
L_f298bd: /* f298bd: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f298c0: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* f298c3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f298c6: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* f298c9: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* f298cf: mov ecx, dword ptr [eax + ecx*4 - 0x14] */
  ecx = R32((uint32_t)(eax + ecx*4 + 0xffffffecu));
/* f298d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f298d4: push 0x1009 */
  { uint32_t v = 0x1009u; esp -= 4; W32(esp, v); }
/* f298d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f298da: call dword ptr [0xf37120] */
  { uint32_t t = R32((uint32_t)(0xf37120u)); esp -= 4; W32(esp, 0xf298e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f298e0: /* f298e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f298e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f298e4: call dword ptr [0xf37128] */
  { uint32_t t = R32((uint32_t)(0xf37128u)); esp -= 4; W32(esp, 0xf298eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f298ea: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f298ed: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f298f3: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* f298f9: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f298fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f298ff: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f29902: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f29904: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29906: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29909: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2990b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2990c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2990e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f29911: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f29912: mov eax, 1 */
  eax = 0x1u;
/* f29917: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2991e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2991f: mov esp, ebp */
  esp = ebp;
/* f29921: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f29922: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_f2925b(void) {
  LOAD_REGS();
L_f2925b: /* f2925b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2925e: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f29263: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* f29266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29267: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f2926a: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2926fu); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f2926f(); return;
}

void f_f2926f(void) {
  LOAD_REGS();
  goto L_f2926f;
L_f29230: /* f29230: cmp edx, dword ptr [ebx + 0x80] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f29236: jge 0xf292a1 */
  if ((sf == of)) goto L_f292a1;
L_f29238: /* f29238: mov edi, dword ptr [ebx + 0x7c] */
  edi = R32((uint32_t)(ebx + 0x7cu));
/* f2923b: mov eax, edx */
  eax = edx;
/* f2923d: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* f29240: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f29242: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* f29245: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f29247: test eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2924c: jne 0xf2928b */
  if (!zf) goto L_f2928b;
L_f2924e: /* f2924e: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29251: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f29253: jne 0xf292c8 */
  if (!zf) goto L_f292c8;
L_f29255: /* f29255: mov esi, edx */
  esi = edx;
/* f29257: xor edi, edi */
  edi = 0;
/* f29259: jmp 0xf292a3 */
  goto L_f292a3;
L_f2926f: /* f2926f: push 0xf31d78 */
  { uint32_t v = 0xf31d78u; esp -= 4; W32(esp, v); }
/* f29274: push 0xf35fc4 */
  { uint32_t v = 0xf35fc4u; esp -= 4; W32(esp, v); }
/* f29279: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf2927fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f2927f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29282: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f29284: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f29286: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2928bu); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f2928b: /* f2928b: fcom dword ptr [edi + 0x18] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x18u)));
/* f2928e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29290: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29293: jne 0xf2929c */
  if (!zf) goto L_f2929c;
L_f29295: /* f29295: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f29297: mov esi, edx */
  esi = edx;
/* f29299: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
L_f2929c: /* f2929c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f2929d: xor edi, edi */
  edi = 0;
/* f2929f: jmp 0xf29230 */
  goto L_f29230;
L_f292a1: /* f292a1: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f292a3: /* f292a3: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f292a6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f292a9: jne 0xf292dd */
  if (!zf) goto L_f292dd;
L_f292ab: /* f292ab: mov edx, dword ptr [0xf38720] */
  edx = R32((uint32_t)(0xf38720u));
/* f292b1: mov ecx, dword ptr [ebx + 0xec] */
  ecx = R32((uint32_t)(ebx + 0xecu));
/* f292b7: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* f292ba: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* f292bd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f292bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f292c1: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f292c4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f292c6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_f292c8: /* f292c8: xor eax, eax */
  eax = 0;
/* f292ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f292cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f292d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f292d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f292d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f292d7: mov esp, ebp */
  esp = ebp;
/* f292d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f292da: ret 0x30 */
  esp += 52; SPILL(); return;
L_f292dd: /* f292dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f292de: mov ecx, ebx */
  ecx = ebx;
/* f292e0: call 0xf2116d */
  esp -= 4; W32(esp, 0xf292e5u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f292e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f292e8: cmp esi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f292ee: jl 0xf29308 */
  if ((sf != of)) goto L_f29308;
L_f292f0: /* f292f0: push 0x2cc */
  { uint32_t v = 0x2ccu; esp -= 4; W32(esp, v); }
/* f292f5: push 0xf35fd4 */
  { uint32_t v = 0xf35fd4u; esp -= 4; W32(esp, v); }
/* f292fa: push 0xf35fec */
  { uint32_t v = 0xf35fecu; esp -= 4; W32(esp, v); }
/* f292ff: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf29305u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f29305: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f29308: /* f29308: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2930b: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f2930e: imul esi, esi, 0x54 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x54u);
  esi = (uint32_t)r;
  }
/* f29311: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f29314: fstp dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0); FPOP();
/* f29318: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f2931b: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f29321: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29323: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29326: jne 0xf2932d */
  if (!zf) goto L_f2932d;
L_f29328: /* f29328: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f2932b: jmp 0xf29333 */
  goto L_f29333;
L_f2932d: /* f2932d: fld dword ptr [0xf3112c] */
  { double v = F32((uint32_t)(0xf3112cu)); FPUSH(v); }
L_f29333: /* f29333: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29336: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f29339: fstp dword ptr [edx + esi + 0x24] */
  WF32((uint32_t)(edx + esi + 0x24u), ST0); FPOP();
/* f2933d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29340: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29343: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f29346: fstp dword ptr [ecx + esi + 0x28] */
  WF32((uint32_t)(ecx + esi + 0x28u), ST0); FPOP();
/* f2934a: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* f2934d: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2934f: jne 0xf2947b */
  if (!zf) goto L_f2947b;
L_f29355: /* f29355: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f29358: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2935a: je 0xf2947b */
  if (zf) goto L_f2947b;
L_f29360: /* f29360: cmp dword ptr [eax + 0xb4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f29366: je 0xf2947b */
  if (zf) goto L_f2947b;
L_f2936c: /* f2936c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2936f: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f29375: mov eax, dword ptr [edx + 0xf4] */
  eax = R32((uint32_t)(edx + 0xf4u));
/* f2937b: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2937e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f29382: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f29385: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f29387: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f29389: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f2938c: movzx edi, byte ptr [eax + 0x2ca] */
  edi = (uint32_t)(R8((uint32_t)(eax + 0x2cau)));
/* f29393: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* f29399: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2939b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2939c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2939d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f293a0: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f293a3: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* f293a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f293a8: mov edi, esp */
  edi = esp;
/* f293aa: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* f293ac: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* f293af: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f293b2: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* f293b5: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* f293b8: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* f293bb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f293be: mov eax, esp */
  eax = esp;
/* f293c0: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* f293c2: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* f293c5: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* f293c8: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* f293cb: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* f293ce: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xf293d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f293d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f293d6: jne 0xf2945a */
  if (!zf) goto L_f2945a;
L_f293dc: /* f293dc: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* f293df: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f293e2: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* f293e8: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* f293ee: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* f293f4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f293f7: mov edx, esp */
  edx = esp;
/* f293f9: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* f293fb: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* f293fe: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* f29401: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* f29404: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* f29407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29408: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* f2940b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2940c: call dword ptr [0xf3872c] */
  esp -= 4; W32(esp, 0xf29412u); SPILL(); f_6c9192(); if (g_unwind) return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */ RELOAD();
/* f29412: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f29415: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* f2941b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2941e: movzx eax, byte ptr [eax + 0x6c] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x6cu)));
/* f29422: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29425: movzx eax, byte ptr [ebp - 0x54] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffacu)));
/* f29429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2942a: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xf29430u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29430: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29433: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f29436: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f29439: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* f2943c: fst dword ptr [edx + esi + 0x20] */
  WF32((uint32_t)(edx + esi + 0x20u), ST0);
/* f29440: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29443: fmul dword ptr [0xf31d9c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d9cu)));
/* f29449: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2944c: fst dword ptr [ecx + esi + 0x24] */
  WF32((uint32_t)(ecx + esi + 0x24u), ST0);
/* f29450: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29453: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f29456: fstp dword ptr [eax + esi + 0x28] */
  WF32((uint32_t)(eax + esi + 0x28u), ST0); FPOP();
L_f2945a: /* f2945a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2945d: mov edx, dword ptr [ecx + 0xf4] */
  edx = R32((uint32_t)(ecx + 0xf4u));
/* f29463: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f29468: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2946b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* f2946e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f29470: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29472: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29475: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f29477: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f29479: xor edi, edi */
  edi = 0;
L_f2947b: /* f2947b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2947e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f29481: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29484: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f29487: mov dword ptr [esi + ecx], edx */
  W32((uint32_t)(esi + ecx), edx);
/* f2948a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2948d: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29490: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f29493: mov dword ptr [ecx + esi + 0x48], edx */
  W32((uint32_t)(ecx + esi + 0x48u), edx);
/* f29497: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2949a: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2949d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f294a0: mov dword ptr [ecx + esi + 8], edx */
  W32((uint32_t)(ecx + esi + 0x8u), edx);
/* f294a4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f294a7: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f294aa: fstp dword ptr [ecx + esi + 0x18] */
  WF32((uint32_t)(ecx + esi + 0x18u), ST0); FPOP();
/* f294ae: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* f294b1: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f294b3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f294b6: je 0xf29532 */
  if (zf) goto L_f29532;
L_f294b8: /* f294b8: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f294bf: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* f294c6: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* f294cd: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* f294d0: jmp 0xf29535 */
  goto L_f29535;
L_f29532: /* f29532: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
L_f29535: /* f29535: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29538: mov ecx, dword ptr [edx + 0x7c] */
  ecx = R32((uint32_t)(edx + 0x7cu));
/* f2953b: lea edx, [ecx + esi + 0xc] */
  edx = (uint32_t)(ecx + esi + 0xcu);
/* f2953f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f29541: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* f29543: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f29546: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* f29549: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2954c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2954f: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f29552: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f29558: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2955a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2955d: jnp 0xf29564 */
  if (!pf) goto L_f29564;
L_f2955f: /* f2955f: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f29562: jmp 0xf2956a */
  goto L_f2956a;
L_f29564: /* f29564: fld dword ptr [0xf310f4] */
  { double v = F32((uint32_t)(0xf310f4u)); FPUSH(v); }
L_f2956a: /* f2956a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2956d: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f29570: fstp dword ptr [edx + esi + 0x1c] */
  WF32((uint32_t)(edx + esi + 0x1cu), ST0); FPOP();
/* f29574: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29577: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* f2957a: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2957d: mov eax, dword ptr [ecx + 0x138] */
  eax = R32((uint32_t)(ecx + 0x138u));
/* f29583: mov dword ptr [edx + esi + 0x2c], eax */
  W32((uint32_t)(edx + esi + 0x2cu), eax);
/* f29587: mov ecx, dword ptr [ecx + 0x13c] */
  ecx = R32((uint32_t)(ecx + 0x13cu));
/* f2958d: mov dword ptr [edx + esi + 0x30], ecx */
  W32((uint32_t)(edx + esi + 0x30u), ecx);
/* f29591: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* f29594: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29597: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2959a: fstp dword ptr [eax + esi + 0x38] */
  WF32((uint32_t)(eax + esi + 0x38u), ST0); FPOP();
/* f2959e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295a1: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f295a4: mov dword ptr [edx + esi + 0x3c], edi */
  W32((uint32_t)(edx + esi + 0x3cu), edi);
/* f295a8: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* f295ab: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f295b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f295b3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f295b6: jne 0xf295bf */
  if (!zf) goto L_f295bf;
L_f295b8: /* f295b8: mov eax, 1 */
  eax = 0x1u;
/* f295bd: jmp 0xf295c1 */
  goto L_f295c1;
L_f295bf: /* f295bf: xor eax, eax */
  eax = 0;
L_f295c1: /* f295c1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295c4: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f295c7: mov dword ptr [edx + esi + 0x40], eax */
  W32((uint32_t)(edx + esi + 0x40u), eax);
/* f295cb: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* f295ce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f295d1: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f295d4: fstp dword ptr [ecx + esi + 0x34] */
  WF32((uint32_t)(ecx + esi + 0x34u), ST0); FPOP();
/* f295d8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295db: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f295de: mov dword ptr [eax + esi + 0x4c], 1 */
  W32((uint32_t)(eax + esi + 0x4cu), 0x1u);
/* f295e6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295e9: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f295ec: mov dword ptr [edx + esi + 0x50], edi */
  W32((uint32_t)(edx + esi + 0x50u), edi);
/* f295f0: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* f295f3: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f295f5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f295f8: je 0xf2960f */
  if (zf) goto L_f2960f;
L_f295fa: /* f295fa: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* f295fd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29600: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f29603: mov edi, dword ptr [ecx + 0x94] */
  edi = R32((uint32_t)(ecx + 0x94u));
/* f29609: mov edx, dword ptr [edx + edi - 0x30] */
  edx = R32((uint32_t)(edx + edi + 0xffffffd0u));
/* f2960d: jmp 0xf29622 */
  goto L_f29622;
L_f2960f: /* f2960f: mov ecx, dword ptr [ecx + 0x5c] */
  ecx = R32((uint32_t)(ecx + 0x5cu));
/* f29612: lea edx, [ecx + ecx*4] */
  edx = (uint32_t)(ecx + ecx*4);
/* f29615: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29618: mov edi, dword ptr [ecx + 0x88] */
  edi = R32((uint32_t)(ecx + 0x88u));
/* f2961e: mov edx, dword ptr [edi + edx*4 - 0x10] */
  edx = R32((uint32_t)(edi + edx*4 + 0xfffffff0u));
L_f29622: /* f29622: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* f29624: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f29627: mov dword ptr [eax + esi + 0x44], edx */
  W32((uint32_t)(eax + esi + 0x44u), edx);
/* f2962b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2962e: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f29631: mov ebx, dword ptr [0xf37124] */
  ebx = R32((uint32_t)(0xf37124u));
/* f29637: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f29639: mov edi, dword ptr [esi + edx + 4] */
  edi = R32((uint32_t)(esi + edx + 0x4u));
/* f2963d: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* f29640: jne 0xf29647 */
  if (!zf) goto L_f29647;
L_f29642: /* f29642: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* f29645: jmp 0xf296a6 */
  goto L_f296a6;
L_f29647: /* f29647: test byte ptr [ebp + 0x2c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x2cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2964b: je 0xf29656 */
  if (zf) goto L_f29656;
L_f2964d: /* f2964d: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* f29654: jmp 0xf29689 */
  goto L_f29689;
L_f29656: /* f29656: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f29659: fld dword ptr [esi + eax + 0x24] */
  { double v = F32((uint32_t)(esi + eax + 0x24u)); FPUSH(v); }
/* f2965d: fdiv dword ptr [ebp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x24u)));
/* f29660: fcom dword ptr [0xf31d1c] */
  fpu_com(ST0, F32((uint32_t)(0xf31d1cu)));
/* f29666: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29668: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2966b: je 0xf29675 */
  if (zf) goto L_f29675;
L_f2966d: /* f2966d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2966f: fld dword ptr [0xf31d1c] */
  { double v = F32((uint32_t)(0xf31d1cu)); FPUSH(v); }
L_f29675: /* f29675: fldln2  */
  FPUSH(0.693147180559945309417);
/* f29677: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f29679: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
/* f2967b: fmul qword ptr [0xf31d10] */
  ST0 = ST0 * (F64((uint32_t)(0xf31d10u)));
/* f29681: call 0xf2bb70 */
  esp -= 4; W32(esp, 0xf29686u); SPILL(); f_f2bb70(); if (g_unwind) return; RELOAD();
/* f29686: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_f29689: /* f29689: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2968b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f2968e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2968f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29690: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* f29692: push 0xf3114c */
  { uint32_t v = 0xf3114cu; esp -= 4; W32(esp, v); }
/* f29697: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf29699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29699: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2969c: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2969f: fld dword ptr [eax + esi + 0x24] */
  { double v = F32((uint32_t)(eax + esi + 0x24u)); FPUSH(v); }
/* f296a3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f296a6: /* f296a6: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f296ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f296ad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f296b0: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f296b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f296b6: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf296bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f296bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f296bf: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f296c2: mov ecx, dword ptr [edx + esi + 0x40] */
  ecx = R32((uint32_t)(edx + esi + 0x40u));
/* f296c6: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* f296c9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f296cc: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f296cf: jne 0xf296dc */
  if (!zf) goto L_f296dc;
L_f296d1: /* f296d1: fld dword ptr [0xf31124] */
  { double v = F32((uint32_t)(0xf31124u)); FPUSH(v); }
/* f296d7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f296da: jmp 0xf29710 */
  goto L_f29710;
L_f296dc: /* f296dc: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* f296df: fcom dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
/* f296e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f296e7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f296ea: jp 0xf296f5 */
  if (pf) goto L_f296f5;
L_f296ec: /* f296ec: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* f296f3: jmp 0xf2970e */
  goto L_f2970e;
L_f296f5: /* f296f5: fcom dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
/* f296fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f296fd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f29700: jp 0xf29707 */
  if (pf) goto L_f29707;
L_f29702: /* f29702: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f29705: jmp 0xf29710 */
  goto L_f29710;
L_f29707: /* f29707: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
L_f2970e: /* f2970e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f29710: /* f29710: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f29713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29714: push 0x100a */
  { uint32_t v = 0x100au; esp -= 4; W32(esp, v); }
/* f29719: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2971a: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf29720u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29720: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29723: mov eax, dword ptr [ecx + 0xe0] */
  eax = R32((uint32_t)(ecx + 0xe0u));
/* f29729: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2972c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2972e: jne 0xf29743 */
  if (!zf) goto L_f29743;
L_f29730: /* f29730: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* f29733: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29734: push 0x1003 */
  { uint32_t v = 0x1003u; esp -= 4; W32(esp, v); }
/* f29739: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2973a: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf29740u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29740: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f29743: /* f29743: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29746: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29749: mov edx, dword ptr [ecx + esi + 0x44] */
  edx = R32((uint32_t)(ecx + esi + 0x44u));
/* f2974d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* f2974f: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f29752: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29753: push 0x1007 */
  { uint32_t v = 0x1007u; esp -= 4; W32(esp, v); }
/* f29758: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29759: call dword ptr [0xf37120] */
  { uint32_t t = R32((uint32_t)(0xf37120u)); esp -= 4; W32(esp, 0xf2975fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2975f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29762: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29765: fld dword ptr [ecx + esi + 0x14] */
  { double v = F32((uint32_t)(ecx + esi + 0x14u)); FPUSH(v); }
/* f29769: lea esi, [ecx + esi + 0xc] */
  esi = (uint32_t)(ecx + esi + 0xcu);
/* f2976d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29773: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29776: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f29779: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* f2977c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29782: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29783: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f29785: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2978a: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29791: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* f29794: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* f29797: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2979d: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* f297a0: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf297a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f297a6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f297a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f297ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f297ae: je 0xf297b7 */
  if (zf) goto L_f297b7;
L_f297b0: /* f297b0: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f297b5: jmp 0xf297cf */
  goto L_f297cf;
L_f297b7: /* f297b7: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f297be: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* f297c5: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* f297cc: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
L_f297cf: /* f297cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f297d1: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* f297d4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* f297d7: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* f297da: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f297dd: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f297e0: test byte ptr [ebp + 0x2c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x2cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f297e4: jne 0xf29825 */
  if (!zf) goto L_f29825;
L_f297e6: /* f297e6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f297e9: call dword ptr [0xf38634] */
  esp -= 4; W32(esp, 0xf297efu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* f297ef: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f297f2: fcomp dword ptr [0xf31d04] */
  fpu_com(ST0, F32((uint32_t)(0xf31d04u)));
  FPOP();
/* f297f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f297fa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f297fd: je 0xf29825 */
  if (zf) goto L_f29825;
L_f297ff: /* f297ff: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* f29802: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29808: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* f2980b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2980e: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29814: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* f29817: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* f2981a: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29820: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* f29823: jmp 0xf2984c */
  goto L_f2984c;
L_f29825: /* f29825: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f2982c: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* f2982f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* f29836: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* f29839: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* f29840: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* f29843: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* f29846: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* f29849: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_f2984c: /* f2984c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f2984f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f29850: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f29855: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29856: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2985cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2985c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2985f: mov eax, dword ptr [edx + 0xc0] */
  eax = R32((uint32_t)(edx + 0xc0u));
/* f29865: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29869: push 0x1021 */
  { uint32_t v = 0x1021u; esp -= 4; W32(esp, v); }
/* f2986e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2986f: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf29875u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29875: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* f29878: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2987b: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2987d: je 0xf29883 */
  if (zf) goto L_f29883;
L_f2987f: /* f2987f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f29881: jmp 0xf29885 */
  goto L_f29885;
L_f29883: /* f29883: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_f29885: /* f29885: push 0x202 */
  { uint32_t v = 0x202u; esp -= 4; W32(esp, v); }
/* f2988a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2988b: call dword ptr [0xf37120] */
  { uint32_t t = R32((uint32_t)(0xf37120u)); esp -= 4; W32(esp, 0xf29891u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29891: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* f29894: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29897: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29899: je 0xf298bd */
  if (zf) goto L_f298bd;
L_f2989b: /* f2989b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f2989e: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* f298a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f298a4: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f298a7: mov ecx, dword ptr [eax + 0x94] */
  ecx = R32((uint32_t)(eax + 0x94u));
/* f298ad: lea edx, [edx + ecx - 0x44] */
  edx = (uint32_t)(edx + ecx + 0xffffffbcu);
/* f298b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f298b2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f298b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f298b5: call dword ptr [0xf37094] */
  { uint32_t t = R32((uint32_t)(0xf37094u)); esp -= 4; W32(esp, 0xf298bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f298bb: jmp 0xf298e0 */
  goto L_f298e0;
L_f298bd: /* f298bd: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f298c0: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* f298c3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f298c6: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* f298c9: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* f298cf: mov ecx, dword ptr [eax + ecx*4 - 0x14] */
  ecx = R32((uint32_t)(eax + ecx*4 + 0xffffffecu));
/* f298d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f298d4: push 0x1009 */
  { uint32_t v = 0x1009u; esp -= 4; W32(esp, v); }
/* f298d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f298da: call dword ptr [0xf37120] */
  { uint32_t t = R32((uint32_t)(0xf37120u)); esp -= 4; W32(esp, 0xf298e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f298e0: /* f298e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f298e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f298e4: call dword ptr [0xf37128] */
  { uint32_t t = R32((uint32_t)(0xf37128u)); esp -= 4; W32(esp, 0xf298eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f298ea: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f298ed: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f298f3: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* f298f9: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f298fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f298ff: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f29902: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f29904: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29906: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29909: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2990b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2990c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2990e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f29911: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f29912: mov eax, 1 */
  eax = 0x1u;
/* f29917: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2991e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2991f: mov esp, ebp */
  esp = ebp;
/* f29921: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f29922: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_f294d2(void) {
  LOAD_REGS();
L_f294d2: /* f294d2: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* f294d5: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f294da: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* f294dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f294de: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* f294e1: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf294e6u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f294e6(); return;
}

void f_f294e6(void) {
  LOAD_REGS();
L_f294e6: /* f294e6: push 0xf31d54 */
  { uint32_t v = 0xf31d54u; esp -= 4; W32(esp, v); }
/* f294eb: push 0xf36004 */
  { uint32_t v = 0xf36004u; esp -= 4; W32(esp, v); }
/* f294f0: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf294f6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f294f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f294f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f294fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f294fd: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf29502u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f29502(); return;
}

void f_f29502(void) {
  LOAD_REGS();
L_f29502: /* f29502: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* f29505: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f2950a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* f2950d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2950e: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* f29511: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf29516u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f29516(); return;
}

void f_f29516(void) {
  LOAD_REGS();
L_f29516: /* f29516: push 0xf31d20 */
  { uint32_t v = 0xf31d20u; esp -= 4; W32(esp, v); }
/* f2951b: push 0xf3600c */
  { uint32_t v = 0xf3600cu; esp -= 4; W32(esp, v); }
/* f29520: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf29526u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f29526: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29529: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2952b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2952d: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf29532u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
/* f29532: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* f29535: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29538: mov ecx, dword ptr [edx + 0x7c] */
  ecx = R32((uint32_t)(edx + 0x7cu));
/* f2953b: lea edx, [ecx + esi + 0xc] */
  edx = (uint32_t)(ecx + esi + 0xcu);
/* f2953f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f29541: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* f29543: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f29546: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* f29549: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2954c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2954f: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f29552: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f29558: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2955a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2955d: jnp 0xf29564 */
  if (!pf) goto L_f29564;
L_f2955f: /* f2955f: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* f29562: jmp 0xf2956a */
  goto L_f2956a;
L_f29564: /* f29564: fld dword ptr [0xf310f4] */
  { double v = F32((uint32_t)(0xf310f4u)); FPUSH(v); }
L_f2956a: /* f2956a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2956d: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f29570: fstp dword ptr [edx + esi + 0x1c] */
  WF32((uint32_t)(edx + esi + 0x1cu), ST0); FPOP();
/* f29574: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29577: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* f2957a: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2957d: mov eax, dword ptr [ecx + 0x138] */
  eax = R32((uint32_t)(ecx + 0x138u));
/* f29583: mov dword ptr [edx + esi + 0x2c], eax */
  W32((uint32_t)(edx + esi + 0x2cu), eax);
/* f29587: mov ecx, dword ptr [ecx + 0x13c] */
  ecx = R32((uint32_t)(ecx + 0x13cu));
/* f2958d: mov dword ptr [edx + esi + 0x30], ecx */
  W32((uint32_t)(edx + esi + 0x30u), ecx);
/* f29591: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* f29594: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29597: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2959a: fstp dword ptr [eax + esi + 0x38] */
  WF32((uint32_t)(eax + esi + 0x38u), ST0); FPOP();
/* f2959e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295a1: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f295a4: mov dword ptr [edx + esi + 0x3c], edi */
  W32((uint32_t)(edx + esi + 0x3cu), edi);
/* f295a8: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* f295ab: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f295b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f295b3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f295b6: jne 0xf295bf */
  if (!zf) goto L_f295bf;
L_f295b8: /* f295b8: mov eax, 1 */
  eax = 0x1u;
/* f295bd: jmp 0xf295c1 */
  goto L_f295c1;
L_f295bf: /* f295bf: xor eax, eax */
  eax = 0;
L_f295c1: /* f295c1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295c4: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f295c7: mov dword ptr [edx + esi + 0x40], eax */
  W32((uint32_t)(edx + esi + 0x40u), eax);
/* f295cb: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* f295ce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f295d1: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f295d4: fstp dword ptr [ecx + esi + 0x34] */
  WF32((uint32_t)(ecx + esi + 0x34u), ST0); FPOP();
/* f295d8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295db: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f295de: mov dword ptr [eax + esi + 0x4c], 1 */
  W32((uint32_t)(eax + esi + 0x4cu), 0x1u);
/* f295e6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f295e9: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f295ec: mov dword ptr [edx + esi + 0x50], edi */
  W32((uint32_t)(edx + esi + 0x50u), edi);
/* f295f0: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* f295f3: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f295f5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f295f8: je 0xf2960f */
  if (zf) goto L_f2960f;
L_f295fa: /* f295fa: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* f295fd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29600: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f29603: mov edi, dword ptr [ecx + 0x94] */
  edi = R32((uint32_t)(ecx + 0x94u));
/* f29609: mov edx, dword ptr [edx + edi - 0x30] */
  edx = R32((uint32_t)(edx + edi + 0xffffffd0u));
/* f2960d: jmp 0xf29622 */
  goto L_f29622;
L_f2960f: /* f2960f: mov ecx, dword ptr [ecx + 0x5c] */
  ecx = R32((uint32_t)(ecx + 0x5cu));
/* f29612: lea edx, [ecx + ecx*4] */
  edx = (uint32_t)(ecx + ecx*4);
/* f29615: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29618: mov edi, dword ptr [ecx + 0x88] */
  edi = R32((uint32_t)(ecx + 0x88u));
/* f2961e: mov edx, dword ptr [edi + edx*4 - 0x10] */
  edx = R32((uint32_t)(edi + edx*4 + 0xfffffff0u));
L_f29622: /* f29622: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* f29624: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f29627: mov dword ptr [eax + esi + 0x44], edx */
  W32((uint32_t)(eax + esi + 0x44u), edx);
/* f2962b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2962e: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f29631: mov ebx, dword ptr [0xf37124] */
  ebx = R32((uint32_t)(0xf37124u));
/* f29637: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f29639: mov edi, dword ptr [esi + edx + 4] */
  edi = R32((uint32_t)(esi + edx + 0x4u));
/* f2963d: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* f29640: jne 0xf29647 */
  if (!zf) goto L_f29647;
L_f29642: /* f29642: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* f29645: jmp 0xf296a6 */
  goto L_f296a6;
L_f29647: /* f29647: test byte ptr [ebp + 0x2c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x2cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2964b: je 0xf29656 */
  if (zf) goto L_f29656;
L_f2964d: /* f2964d: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* f29654: jmp 0xf29689 */
  goto L_f29689;
L_f29656: /* f29656: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f29659: fld dword ptr [esi + eax + 0x24] */
  { double v = F32((uint32_t)(esi + eax + 0x24u)); FPUSH(v); }
/* f2965d: fdiv dword ptr [ebp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x24u)));
/* f29660: fcom dword ptr [0xf31d1c] */
  fpu_com(ST0, F32((uint32_t)(0xf31d1cu)));
/* f29666: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29668: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2966b: je 0xf29675 */
  if (zf) goto L_f29675;
L_f2966d: /* f2966d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2966f: fld dword ptr [0xf31d1c] */
  { double v = F32((uint32_t)(0xf31d1cu)); FPUSH(v); }
L_f29675: /* f29675: fldln2  */
  FPUSH(0.693147180559945309417);
/* f29677: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f29679: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
/* f2967b: fmul qword ptr [0xf31d10] */
  ST0 = ST0 * (F64((uint32_t)(0xf31d10u)));
/* f29681: call 0xf2bb70 */
  esp -= 4; W32(esp, 0xf29686u); SPILL(); f_f2bb70(); if (g_unwind) return; RELOAD();
/* f29686: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_f29689: /* f29689: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2968b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f2968e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2968f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29690: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* f29692: push 0xf3114c */
  { uint32_t v = 0xf3114cu; esp -= 4; W32(esp, v); }
/* f29697: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf29699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29699: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2969c: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2969f: fld dword ptr [eax + esi + 0x24] */
  { double v = F32((uint32_t)(eax + esi + 0x24u)); FPUSH(v); }
/* f296a3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f296a6: /* f296a6: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f296ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f296ad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f296b0: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f296b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f296b6: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf296bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f296bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f296bf: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f296c2: mov ecx, dword ptr [edx + esi + 0x40] */
  ecx = R32((uint32_t)(edx + esi + 0x40u));
/* f296c6: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* f296c9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f296cc: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f296cf: jne 0xf296dc */
  if (!zf) goto L_f296dc;
L_f296d1: /* f296d1: fld dword ptr [0xf31124] */
  { double v = F32((uint32_t)(0xf31124u)); FPUSH(v); }
/* f296d7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f296da: jmp 0xf29710 */
  goto L_f29710;
L_f296dc: /* f296dc: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* f296df: fcom dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
/* f296e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f296e7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f296ea: jp 0xf296f5 */
  if (pf) goto L_f296f5;
L_f296ec: /* f296ec: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* f296f3: jmp 0xf2970e */
  goto L_f2970e;
L_f296f5: /* f296f5: fcom dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
/* f296fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f296fd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f29700: jp 0xf29707 */
  if (pf) goto L_f29707;
L_f29702: /* f29702: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f29705: jmp 0xf29710 */
  goto L_f29710;
L_f29707: /* f29707: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
L_f2970e: /* f2970e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f29710: /* f29710: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f29713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29714: push 0x100a */
  { uint32_t v = 0x100au; esp -= 4; W32(esp, v); }
/* f29719: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2971a: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf29720u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29720: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29723: mov eax, dword ptr [ecx + 0xe0] */
  eax = R32((uint32_t)(ecx + 0xe0u));
/* f29729: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2972c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2972e: jne 0xf29743 */
  if (!zf) goto L_f29743;
L_f29730: /* f29730: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* f29733: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29734: push 0x1003 */
  { uint32_t v = 0x1003u; esp -= 4; W32(esp, v); }
/* f29739: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2973a: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf29740u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29740: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f29743: /* f29743: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29746: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29749: mov edx, dword ptr [ecx + esi + 0x44] */
  edx = R32((uint32_t)(ecx + esi + 0x44u));
/* f2974d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* f2974f: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f29752: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29753: push 0x1007 */
  { uint32_t v = 0x1007u; esp -= 4; W32(esp, v); }
/* f29758: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29759: call dword ptr [0xf37120] */
  { uint32_t t = R32((uint32_t)(0xf37120u)); esp -= 4; W32(esp, 0xf2975fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2975f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29762: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f29765: fld dword ptr [ecx + esi + 0x14] */
  { double v = F32((uint32_t)(ecx + esi + 0x14u)); FPUSH(v); }
/* f29769: lea esi, [ecx + esi + 0xc] */
  esi = (uint32_t)(ecx + esi + 0xcu);
/* f2976d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29773: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29776: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f29779: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* f2977c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29782: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29783: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f29785: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2978a: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29791: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* f29794: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* f29797: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2979d: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* f297a0: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf297a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f297a6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f297a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f297ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f297ae: je 0xf297b7 */
  if (zf) goto L_f297b7;
L_f297b0: /* f297b0: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f297b5: jmp 0xf297cf */
  goto L_f297cf;
L_f297b7: /* f297b7: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f297be: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* f297c5: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* f297cc: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
L_f297cf: /* f297cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f297d1: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* f297d4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* f297d7: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* f297da: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f297dd: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f297e0: test byte ptr [ebp + 0x2c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x2cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f297e4: jne 0xf29825 */
  if (!zf) goto L_f29825;
L_f297e6: /* f297e6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f297e9: call dword ptr [0xf38634] */
  esp -= 4; W32(esp, 0xf297efu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* f297ef: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f297f2: fcomp dword ptr [0xf31d04] */
  fpu_com(ST0, F32((uint32_t)(0xf31d04u)));
  FPOP();
/* f297f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f297fa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f297fd: je 0xf29825 */
  if (zf) goto L_f29825;
L_f297ff: /* f297ff: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* f29802: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29808: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* f2980b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2980e: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29814: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* f29817: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* f2981a: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f29820: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* f29823: jmp 0xf2984c */
  goto L_f2984c;
L_f29825: /* f29825: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f2982c: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* f2982f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* f29836: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* f29839: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* f29840: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* f29843: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* f29846: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* f29849: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_f2984c: /* f2984c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f2984f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f29850: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f29855: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29856: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2985cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2985c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2985f: mov eax, dword ptr [edx + 0xc0] */
  eax = R32((uint32_t)(edx + 0xc0u));
/* f29865: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29869: push 0x1021 */
  { uint32_t v = 0x1021u; esp -= 4; W32(esp, v); }
/* f2986e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2986f: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf29875u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29875: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* f29878: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2987b: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2987d: je 0xf29883 */
  if (zf) goto L_f29883;
L_f2987f: /* f2987f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f29881: jmp 0xf29885 */
  goto L_f29885;
L_f29883: /* f29883: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_f29885: /* f29885: push 0x202 */
  { uint32_t v = 0x202u; esp -= 4; W32(esp, v); }
/* f2988a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2988b: call dword ptr [0xf37120] */
  { uint32_t t = R32((uint32_t)(0xf37120u)); esp -= 4; W32(esp, 0xf29891u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29891: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* f29894: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29897: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29899: je 0xf298bd */
  if (zf) goto L_f298bd;
L_f2989b: /* f2989b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f2989e: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* f298a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f298a4: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f298a7: mov ecx, dword ptr [eax + 0x94] */
  ecx = R32((uint32_t)(eax + 0x94u));
/* f298ad: lea edx, [edx + ecx - 0x44] */
  edx = (uint32_t)(edx + ecx + 0xffffffbcu);
/* f298b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f298b2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f298b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f298b5: call dword ptr [0xf37094] */
  { uint32_t t = R32((uint32_t)(0xf37094u)); esp -= 4; W32(esp, 0xf298bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f298bb: jmp 0xf298e0 */
  goto L_f298e0;
L_f298bd: /* f298bd: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f298c0: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* f298c3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f298c6: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* f298c9: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* f298cf: mov ecx, dword ptr [eax + ecx*4 - 0x14] */
  ecx = R32((uint32_t)(eax + ecx*4 + 0xffffffecu));
/* f298d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f298d4: push 0x1009 */
  { uint32_t v = 0x1009u; esp -= 4; W32(esp, v); }
/* f298d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f298da: call dword ptr [0xf37120] */
  { uint32_t t = R32((uint32_t)(0xf37120u)); esp -= 4; W32(esp, 0xf298e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f298e0: /* f298e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f298e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f298e4: call dword ptr [0xf37128] */
  { uint32_t t = R32((uint32_t)(0xf37128u)); esp -= 4; W32(esp, 0xf298eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f298ea: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f298ed: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f298f3: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* f298f9: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f298fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f298ff: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f29902: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f29904: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29906: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29909: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2990b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2990c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2990e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f29911: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f29912: mov eax, 1 */
  eax = 0x1u;
/* f29917: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2991e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2991f: mov esp, ebp */
  esp = ebp;
/* f29921: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f29922: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_f29925(void) {
  LOAD_REGS();
L_f29925: /* f29925: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* f29928: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f2992d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* f29930: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f29931: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* f29934: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf29939u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f29939(); return;
}

void f_f29939(void) {
  LOAD_REGS();
L_f29939: /* f29939: push 0xf31cbc */
  { uint32_t v = 0xf31cbcu; esp -= 4; W32(esp, v); }
/* f2993e: push 0xf36014 */
  { uint32_t v = 0xf36014u; esp -= 4; W32(esp, v); }
/* f29943: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf29949u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f29949: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2994c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2994e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f29950: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf29955u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f29955: guest_badaddr(0xf29955); return;
}

void f_f29bf0(void) {
  LOAD_REGS();
L_f29bf0: /* f29bf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f29bf1: mov ebp, esp */
  ebp = esp;
/* f29bf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f29bf5: push 0xf2d450 */
  { uint32_t v = 0xf2d450u; esp -= 4; W32(esp, v); }
/* f29bfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f29c00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29c01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f29c08: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f29c0b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f29c0e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f29c11: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* f29c14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f29c15: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f29c18: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29c1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f29c1c: mov ebx, eax */
  ebx = eax;
/* f29c1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f29c1f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f29c22: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f29c29: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* f29c2c: xor eax, eax */
  eax = 0;
/* f29c2e: mov edi, edi */
  edi = edi;
L_f29c30: /* f29c30: cmp eax, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f29c36: jge 0xf29c4f */
  if ((sf == of)) goto L_f29c4f;
L_f29c38: /* f29c38: mov edi, dword ptr [ecx + 0x7c] */
  edi = R32((uint32_t)(ecx + 0x7cu));
/* f29c3b: mov esi, eax */
  esi = eax;
/* f29c3d: imul esi, esi, 0x54 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x54u);
  esi = (uint32_t)r;
  }
/* f29c40: cmp dword ptr [esi + edi + 0x48], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + edi + 0x48u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f29c44: je 0xf29c49 */
  if (zf) goto L_f29c49;
L_f29c46: /* f29c46: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f29c47: jmp 0xf29c30 */
  goto L_f29c30;
L_f29c49: /* f29c49: cmp eax, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_f29c4f: /* f29c4f: jne 0xf29d03 */
  if (!zf) goto L_f29d03;
L_f29c55: /* f29c55: mov eax, edx */
  eax = edx;
L_f29c57: /* f29c57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f29c59: je 0xf29d16 */
  if (zf) goto L_f29d16;
L_f29c5f: /* f29c5f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f29c62: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* f29c65: cmp eax, dword ptr [edx + 0x548] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x548u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f29c6b: je 0xf29c72 */
  if (zf) goto L_f29c72;
L_f29c6d: /* f29c6d: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* f29c70: jmp 0xf29c57 */
  goto L_f29c57;
L_f29c72: /* f29c72: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f29c75: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f29c77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f29c79: call dword ptr [0xf38448] */
  esp -= 4; W32(esp, 0xf29c7fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f29c7f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f29c82: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f29c85: mov esi, eax */
  esi = eax;
/* f29c87: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f29c8a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f29c8c: mov dword ptr [esi + ecx], edx */
  W32((uint32_t)(esi + ecx), edx);
/* f29c8f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f29c92: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* f29c94: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29c97: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f29c9a: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* f29ca0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29ca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29ca3: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f29ca5: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf29cabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29cab: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f29cae: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f29cb1: mov ecx, dword ptr [eax + 0x2c4] */
  ecx = R32((uint32_t)(eax + 0x2c4u));
/* f29cb7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f29cba: push 0x32 */
  { uint32_t v = 0x32u; esp -= 4; W32(esp, v); }
/* f29cbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f29cbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29cbe: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29cc3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f29cc5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f29cc8: mov ecx, esp */
  ecx = esp;
/* f29cca: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f29ccc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* f29ccf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f29cd2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* f29cd5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* f29cd8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29cdb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f29cde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29cdf: call 0xf21037 */
  esp -= 4; W32(esp, 0xf29ce4u); SPILL(); f_f21037(); if (g_unwind) return; RELOAD();
/* f29ce4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f29ce7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f29cea: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* f29ced: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f29cf0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29cf2: mov dword ptr [edx + esi + 8], 0x32 */
  W32((uint32_t)(edx + esi + 0x8u), 0x32u);
/* f29cfa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f29cfd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f29cff: mov dword ptr [ecx + esi + 0xc], ebx */
  W32((uint32_t)(ecx + esi + 0xcu), ebx);
L_f29d03: /* f29d03: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f29d06: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f29d0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f29d0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f29d0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f29d10: mov esp, ebp */
  esp = ebp;
/* f29d12: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f29d13: ret 0x10 */
  esp += 20; SPILL(); return;
L_f29d16: /* f29d16: mov edx, dword ptr [ecx + 0xf4] */
  edx = R32((uint32_t)(ecx + 0xf4u));
/* f29d1c: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f29d21: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f29d24: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* f29d27: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f29d29: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f29d2b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f29d2e: movzx esi, byte ptr [eax + 0x2ca] */
  esi = (uint32_t)(R8((uint32_t)(eax + 0x2cau)));
/* f29d35: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f29d38: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29d3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f29d3b: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* f29d3e: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f29d40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29d41: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f29d44: mov edi, esp */
  edi = esp;
/* f29d46: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* f29d48: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* f29d4b: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* f29d4e: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* f29d51: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* f29d54: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29d59: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* f29d5b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f29d5e: mov esi, esp */
  esi = esp;
/* f29d60: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* f29d62: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* f29d65: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f29d68: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* f29d6b: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* f29d72: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f29d75: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xf29d7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29d7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f29d7d: jne 0xf29dd8 */
  if (!zf) goto L_f29dd8;
L_f29d7f: /* f29d7f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f29d82: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* f29d88: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* f29d8a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f29d8d: mov edx, esp */
  edx = esp;
/* f29d8f: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* f29d91: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* f29d94: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f29d97: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* f29d9a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f29d9d: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* f29da3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f29da6: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* f29dac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29dad: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* f29db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29db1: call dword ptr [0xf3872c] */
  esp -= 4; W32(esp, 0xf29db7u); SPILL(); f_6c9192(); if (g_unwind) return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */ RELOAD();
/* f29db7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29dba: movzx eax, byte ptr [eax + 0x6c] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x6cu)));
/* f29dbe: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f29dc1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29dc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29dc4: movzx eax, byte ptr [ebp - 0x2c] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffd4u)));
/* f29dc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29dc9: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xf29dcfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29dcf: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f29dd2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f29dd5: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_f29dd8: /* f29dd8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29ddb: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f29de1: mov eax, dword ptr [edx + 0xf4] */
  eax = R32((uint32_t)(edx + 0xf4u));
/* f29de7: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f29dea: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f29ded: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f29def: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29df1: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29df4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f29df6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f29df8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f29dfb: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* f29e01: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* f29e04: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* f29e06: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* f29e0c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* f29e0f: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* f29e15: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* f29e18: fld dword ptr [eax + 0x2c4] */
  { double v = F32((uint32_t)(eax + 0x2c4u)); FPUSH(v); }
/* f29e1e: mov eax, dword ptr [0xf38618] */
  eax = R32((uint32_t)(0xf38618u));
/* f29e23: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* f29e25: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f29e28: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* f29e2a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* f29e2c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* f29e2e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* f29e30: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f29e32: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* f29e34: fmul st(5) */
  ST0 = ST0 * STI(5);
/* f29e36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f29e38: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* f29e3a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* f29e3c: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f29e3e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f29e40: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f29e42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f29e44: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f29e46: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f29e49: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f29e4b: jne 0xf29d03 */
  if (!zf) goto L_f29d03;
L_f29e51: /* f29e51: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f29e54: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f29e56: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f29e58: call dword ptr [0xf38448] */
  esp -= 4; W32(esp, 0xf29e5eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f29e5e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f29e61: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29e63: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f29e66: mov esi, eax */
  esi = eax;
/* f29e68: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f29e6b: mov dword ptr [esi + edx], eax */
  W32((uint32_t)(esi + edx), eax);
/* f29e6e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f29e71: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* f29e73: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f29e76: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f29e79: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* f29e7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29e81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f29e82: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f29e84: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf29e8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f29e8a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f29e8d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f29e90: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f29e93: fmul dword ptr [eax + 0x2c4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2c4u)));
/* f29e99: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* f29e9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f29e9c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f29e9f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f29ea2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f29ea3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f29ea8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f29eaa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f29ead: mov edx, esp */
  edx = esp;
/* f29eaf: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* f29eb1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f29eb4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f29eb7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* f29eba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f29ebd: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f29ec0: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f29ec3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f29ec4: call 0xf21037 */
  esp -= 4; W32(esp, 0xf29ec9u); SPILL(); f_f21037(); if (g_unwind) return; RELOAD();
/* f29ec9: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f29ecc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f29ecf: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* f29ed2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f29ed5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f29ed7: mov dword ptr [edx + esi + 8], 0x22 */
  W32((uint32_t)(edx + esi + 0x8u), 0x22u);
/* f29edf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f29ee2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f29ee4: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f29ee7: mov dword ptr [ecx + esi + 0xc], edx */
  W32((uint32_t)(ecx + esi + 0xcu), edx);
/* f29eeb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f29eee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f29eef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f29ef0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f29ef7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f29ef8: mov esp, ebp */
  esp = ebp;
/* f29efa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f29efb: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f29efe(void) {
  LOAD_REGS();
L_f29efe: /* f29efe: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f29f01: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f29f06: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f29f09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f29f0a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f29f0d: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf29f12u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f29f12(); return;
}

void f_f29f12(void) {
  LOAD_REGS();
L_f29f12: /* f29f12: push 0xf31da8 */
  { uint32_t v = 0xf31da8u; esp -= 4; W32(esp, v); }
/* f29f17: push 0xf360b4 */
  { uint32_t v = 0xf360b4u; esp -= 4; W32(esp, v); }
/* f29f1c: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf29f22u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f29f22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f29f25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f29f27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f29f29: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf29f2eu); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f29f2e: guest_badaddr(0xf29f2e); return;
}

void f_f2a000(void) {
  LOAD_REGS();
L_f2a000: /* f2a000: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f2a001: mov ebp, esp */
  ebp = esp;
/* f2a003: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f2a005: push 0xf2d468 */
  { uint32_t v = 0xf2d468u; esp -= 4; W32(esp, v); }
/* f2a00a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f2a010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a011: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f2a018: sub esp, 0xf0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2a01e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2a01f: mov eax, ecx */
  eax = ecx;
/* f2a021: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2a022: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f2a025: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* f2a028: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a02a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2a02b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f2a02e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f2a035: je 0xf2b224 */
  if (zf) goto L_f2b224;
L_f2a03b: /* f2a03b: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2a041: mov eax, dword ptr [eax + 0xf0] */
  eax = R32((uint32_t)(eax + 0xf0u));
/* f2a047: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2a04a: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2a04d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2a04f: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f2a051: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f2a054: lea ecx, [eax + 0x194] */
  ecx = (uint32_t)(eax + 0x194u);
/* f2a05a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2a05c: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* f2a05f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* f2a062: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* f2a065: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2a068: add eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2a06b: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* f2a06e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* f2a071: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f2a074: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* f2a07b: mov dword ptr [ebp - 0x78], 0x447a0000 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x447a0000u);
/* f2a082: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* f2a089: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* f2a090: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* f2a093: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* f2a096: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a099: lea edi, [ebp - 0xac] */
  edi = (uint32_t)(ebp + 0xffffff54u);
/* f2a09f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f2a0a1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* f2a0a3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f2a0a5: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* f2a0a8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f2a0aa: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* f2a0ad: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f2a0af: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* f2a0b2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f2a0b5: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* f2a0b8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f2a0bb: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* f2a0be: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f2a0c1: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* f2a0c4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f2a0c7: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* f2a0ca: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* f2a0cc: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* f2a0ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a0d0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a0d2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a0d4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* f2a0d7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* f2a0da: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* f2a0dd: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* f2a0e0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* f2a0e3: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* f2a0e6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* f2a0e9: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* f2a0ec: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* f2a0ee: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* f2a0f0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a0f2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a0f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a0f6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* f2a0f9: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* f2a0fc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* f2a0ff: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* f2a102: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* f2a105: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* f2a108: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* f2a10b: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* f2a10e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* f2a110: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* f2a112: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a114: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a116: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a118: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* f2a11a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* f2a11c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f2a11e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* f2a121: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* f2a124: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* f2a127: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* f2a12d: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* f2a133: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* f2a139: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* f2a13c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a13f: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* f2a142: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* f2a145: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* f2a14b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f2a14e: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* f2a150: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* f2a152: and ecx, 0xfffff830 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffff830u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f2a158: add ecx, 0x3e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2a15e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f2a161: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2a164: add edx, 0x54 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2a167: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* f2a16d: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* f2a173: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* f2a176: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* f2a180: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* f2a18a: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* f2a194: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* f2a197: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* f2a19a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a19d: lea edi, [ebp - 0x7c] */
  edi = (uint32_t)(ebp + 0xffffff84u);
/* f2a1a0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f2a1a2: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* f2a1a4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f2a1a6: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* f2a1a9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f2a1ab: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* f2a1ae: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* f2a1b0: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* f2a1b3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f2a1b6: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* f2a1b9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f2a1bc: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* f2a1bf: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f2a1c2: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* f2a1c5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* f2a1c8: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* f2a1cb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* f2a1cd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* f2a1cf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a1d1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a1d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a1d5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* f2a1d8: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* f2a1db: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* f2a1de: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* f2a1e1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* f2a1e4: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* f2a1e7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* f2a1ea: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* f2a1ed: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* f2a1ef: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* f2a1f1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a1f3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a1f5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a1f7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* f2a1fa: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* f2a1fd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* f2a200: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* f2a203: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* f2a206: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* f2a209: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* f2a20c: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* f2a20f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* f2a211: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* f2a213: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a215: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* f2a217: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a219: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* f2a21b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* f2a21d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f2a21f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* f2a222: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* f2a225: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* f2a228: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* f2a22b: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* f2a22e: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* f2a231: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* f2a234: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* f2a237: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* f2a23a: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* f2a23d: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* f2a243: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* f2a246: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* f2a248: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* f2a24e: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* f2a251: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* f2a254: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* f2a257: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* f2a25a: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* f2a25d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* f2a25f: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* f2a262: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* f2a265: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* f2a268: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* f2a26b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* f2a26d: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* f2a270: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* f2a273: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* f2a276: call dword ptr [0xf38644] */
  esp -= 4; W32(esp, 0xf2a27cu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* f2a27c: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* f2a282: call dword ptr [0xf38644] */
  esp -= 4; W32(esp, 0xf2a288u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* f2a288: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* f2a28b: call dword ptr [0xf38644] */
  esp -= 4; W32(esp, 0xf2a291u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* f2a291: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a294: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2a297: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* f2a29a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2a29c: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0xf2a2a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a2a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a2a5: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2a2a8: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* f2a2ae: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* f2a2b1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2a2b3: mov dword ptr [ebp - 0x9c], esi */
  W32((uint32_t)(ebp + 0xffffff64u), esi);
/* f2a2b9: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0xf2a2bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a2bf: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2a2c2: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* f2a2c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2a2cb: mov ecx, esp */
  ecx = esp;
/* f2a2cd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2a2cf: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2a2d2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* f2a2d5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2a2d8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* f2a2db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a2dc: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* f2a2df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a2e0: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* f2a2e6: call dword ptr [0xf3872c] */
  esp -= 4; W32(esp, 0xf2a2ecu); SPILL(); f_6c9192(); if (g_unwind) return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */ RELOAD();
/* f2a2ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2a2ee: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a2f1: add edx, 0x64 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2a2f4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* f2a2f6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f2a2f9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* f2a2fc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2a2ff: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2a302: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a305: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f2a308: fld qword ptr [eax + 0x138] */
  { double v = F64((uint32_t)(eax + 0x138u)); FPUSH(v); }
/* f2a30e: mov edx, dword ptr [eax + 0x138] */
  edx = R32((uint32_t)(eax + 0x138u));
/* f2a314: fsub qword ptr [ecx + 0x34] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x34u)));
/* f2a317: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2a31a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2a31c: mov eax, dword ptr [eax + 0x13c] */
  eax = R32((uint32_t)(eax + 0x13cu));
/* f2a322: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* f2a325: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* f2a328: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2a32b: fcomp dword ptr [0xf31f00] */
  fpu_com(ST0, F32((uint32_t)(0xf31f00u)));
  FPOP();
/* f2a331: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a333: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a336: jp 0xf2a341 */
  if (pf) goto L_f2a341;
L_f2a338: /* f2a338: mov dword ptr [ebp - 0x40], 0x38d1b717 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x38d1b717u);
/* f2a33f: jmp 0xf2a358 */
  goto L_f2a358;
L_f2a341: /* f2a341: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2a344: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2a34a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a34c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a34f: jnp 0xf2a358 */
  if (!pf) goto L_f2a358;
L_f2a351: /* f2a351: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
L_f2a358: /* f2a358: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a35b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f2a35e: fsub dword ptr [ecx + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4cu)));
/* f2a361: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f2a364: fsub dword ptr [ecx + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x48u)));
/* f2a367: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2a36a: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f2a36d: fsub dword ptr [ecx + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x44u)));
/* f2a370: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* f2a376: fld dword ptr [0xf3112c] */
  { double v = F32((uint32_t)(0xf3112cu)); FPUSH(v); }
/* f2a37c: fdiv dword ptr [ebp - 0x40] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffc0u)));
/* f2a37f: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* f2a382: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* f2a384: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* f2a387: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f2a38a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* f2a38d: fmul dword ptr [ebp - 0x94] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff6cu)));
/* f2a393: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* f2a396: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* f2a399: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* f2a39c: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f2a39f: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* f2a3a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a3a4: je 0xf2a3c9 */
  if (zf) goto L_f2a3c9;
L_f2a3a6: /* f2a3a6: mov edx, dword ptr [eax + 0x534] */
  edx = R32((uint32_t)(eax + 0x534u));
/* f2a3ac: test dh, 0x48 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a3af: je 0xf2a3c9 */
  if (zf) goto L_f2a3c9;
L_f2a3b1: /* f2a3b1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f2a3b3: mov ecx, esi */
  ecx = esi;
/* f2a3b5: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xf2a3bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a3bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a3bd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a3c0: jne 0xf2a3c9 */
  if (!zf) goto L_f2a3c9;
L_f2a3c2: /* f2a3c2: mov ebx, 1 */
  ebx = 0x1u;
/* f2a3c7: jmp 0xf2a3df */
  goto L_f2a3df;
L_f2a3c9: /* f2a3c9: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* f2a3cc: xor ebx, ebx */
  ebx = 0;
/* f2a3ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a3d0: je 0xf2a3df */
  if (zf) goto L_f2a3df;
L_f2a3d2: /* f2a3d2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2a3d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2a3d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2a3d6: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf2a3dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a3dc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a3df: /* f2a3df: mov dword ptr [ecx + 0x50], ebx */
  W32((uint32_t)(ecx + 0x50u), ebx);
/* f2a3e2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a3e5: xor edi, edi */
  edi = 0;
/* f2a3e7: jmp 0xf2a3f0 */
  goto L_f2a3f0;
L_f2a3f0: /* f2a3f0: cmp edi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a3f6: jge 0xf2a47e */
  if ((sf == of)) goto L_f2a47e;
L_f2a3fc: /* f2a3fc: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2a3ff: mov esi, edi */
  esi = edi;
/* f2a401: imul esi, esi, 0x54 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x54u);
  esi = (uint32_t)r;
  }
/* f2a404: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* f2a407: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* f2a40a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a40c: je 0xf2a478 */
  if (zf) goto L_f2a478;
L_f2a40e: /* f2a40e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a411: je 0xf2a478 */
  if (zf) goto L_f2a478;
L_f2a413: /* f2a413: test byte ptr [eax + 0x44], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a417: jne 0xf2a478 */
  if (!zf) goto L_f2a478;
L_f2a419: /* f2a419: mov ecx, dword ptr [ecx + 0x7c] */
  ecx = R32((uint32_t)(ecx + 0x7cu));
/* f2a41c: mov edx, dword ptr [esi + ecx + 4] */
  edx = R32((uint32_t)(esi + ecx + 0x4u));
/* f2a420: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* f2a423: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a424: push 0x1010 */
  { uint32_t v = 0x1010u; esp -= 4; W32(esp, v); }
/* f2a429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a42a: call dword ptr [0xf370a4] */
  { uint32_t t = R32((uint32_t)(0xf370a4u)); esp -= 4; W32(esp, 0xf2a430u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a430: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a433: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a436: cmp eax, 0x1014 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1014u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a43b: jne 0xf2a475 */
  if (!zf) goto L_f2a475;
L_f2a43d: /* f2a43d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a440: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2a443: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f2a445: test byte ptr [esi + 0x44], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x44u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a449: je 0xf2a46f */
  if (zf) goto L_f2a46f;
L_f2a44b: /* f2a44b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f2a44d: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* f2a450: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* f2a456: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* f2a459: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2a45b: mov edx, dword ptr [eax - 0x1c] */
  edx = R32((uint32_t)(eax + 0xffffffe4u));
/* f2a45e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a460: je 0xf2a46f */
  if (zf) goto L_f2a46f;
L_f2a462: /* f2a462: mov dword ptr [eax - 0x18], 1 */
  W32((uint32_t)(eax + 0xffffffe8u), 0x1u);
/* f2a469: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a46c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f2a46d: jmp 0xf2a3f0 */
  goto L_f2a3f0;
L_f2a46f: /* f2a46f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2a470: call 0xf2116d */
  esp -= 4; W32(esp, 0xf2a475u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
L_f2a475: /* f2a475: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a478: /* f2a478: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f2a479: jmp 0xf2a3f0 */
  goto L_f2a3f0;
L_f2a47e: /* f2a47e: xor eax, eax */
  eax = 0;
/* f2a480: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a482: je 0xf2a639 */
  if (zf) goto L_f2a639;
L_f2a488: /* f2a488: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f2a48b: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* f2a48e: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* f2a491: mov ecx, dword ptr [0xf3862c] */
  ecx = R32((uint32_t)(0xf3862cu));
/* f2a497: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a499: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f2a49d: je 0xf2a4a3 */
  if (zf) goto L_f2a4a3;
L_f2a49f: /* f2a49f: xor esi, esi */
  esi = 0;
/* f2a4a1: jmp 0xf2a4af */
  goto L_f2a4af;
L_f2a4a3: /* f2a4a3: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* f2a4a9: mov esi, dword ptr [edx + 0x104] */
  esi = R32((uint32_t)(edx + 0x104u));
L_f2a4af: /* f2a4af: mov edi, dword ptr [ebp - 0x9c] */
  edi = R32((uint32_t)(ebp + 0xffffff64u));
L_f2a4b5: /* f2a4b5: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a4b8: jge 0xf2a4e3 */
  if ((sf == of)) goto L_f2a4e3;
L_f2a4ba: /* f2a4ba: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2a4bd: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* f2a4c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a4c2: je 0xf2a4e0 */
  if (zf) goto L_f2a4e0;
L_f2a4c4: /* f2a4c4: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* f2a4ca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a4cc: je 0xf2a4e0 */
  if (zf) goto L_f2a4e0;
L_f2a4ce: /* f2a4ce: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f2a4d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a4d2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a4d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2a4d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a4d7: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* f2a4da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a4db: call 0xf210a0 */
  esp -= 4; W32(esp, 0xf2a4e0u); SPILL(); f_f210a0(); if (g_unwind) return; RELOAD();
L_f2a4e0: /* f2a4e0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f2a4e1: jmp 0xf2a4b5 */
  goto L_f2a4b5;
L_f2a4e3: /* f2a4e3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a4e6: xor esi, esi */
  esi = 0;
L_f2a4e8: /* f2a4e8: cmp esi, dword ptr [ecx + 0x74] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x74u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a4eb: jge 0xf2a516 */
  if ((sf == of)) goto L_f2a516;
L_f2a4ed: /* f2a4ed: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* f2a4f0: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* f2a4f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a4f5: je 0xf2a513 */
  if (zf) goto L_f2a513;
L_f2a4f7: /* f2a4f7: mov edx, dword ptr [eax + 0xa8] */
  edx = R32((uint32_t)(eax + 0xa8u));
/* f2a4fd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a4ff: je 0xf2a513 */
  if (zf) goto L_f2a513;
L_f2a501: /* f2a501: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* f2a504: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a505: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2a506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a507: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* f2a50a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a50b: call 0xf210a0 */
  esp -= 4; W32(esp, 0xf2a510u); SPILL(); f_f210a0(); if (g_unwind) return; RELOAD();
/* f2a510: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a513: /* f2a513: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f2a514: jmp 0xf2a4e8 */
  goto L_f2a4e8;
L_f2a516: /* f2a516: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* f2a519: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a51b: je 0xf2a62d */
  if (zf) goto L_f2a62d;
L_f2a521: /* f2a521: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* f2a524: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a526: call 0xf2115e */
  esp -= 4; W32(esp, 0xf2a52bu); SPILL(); f_f2115e(); if (g_unwind) return; RELOAD();
/* f2a52b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a52e: xor esi, esi */
  esi = 0;
L_f2a530: /* f2a530: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a533: mov dword ptr [ebp - 0x60], esi */
  W32((uint32_t)(ebp + 0xffffffa0u), esi);
/* f2a536: jge 0xf2a62d */
  if ((sf == of)) goto L_f2a62d;
L_f2a53c: /* f2a53c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* f2a53f: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f2a542: mov ecx, dword ptr [esi + edx] */
  ecx = R32((uint32_t)(esi + edx));
/* f2a545: movzx eax, byte ptr [ecx + 0x2c9] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x2c9u)));
/* f2a54c: lea edi, [esi + edx] */
  edi = (uint32_t)(esi + edx);
/* f2a54f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f2a552: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2a555: fmul dword ptr [0xf31efc] */
  ST0 = ST0 * (F32((uint32_t)(0xf31efcu)));
/* f2a55b: fcom dword ptr [0xf31da0] */
  fpu_com(ST0, F32((uint32_t)(0xf31da0u)));
/* f2a561: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a563: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a566: jp 0xf2a571 */
  if (pf) goto L_f2a571;
L_f2a568: /* f2a568: mov dword ptr [ebp - 0x2c], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f000000u);
/* f2a56f: jmp 0xf2a58a */
  goto L_f2a58a;
L_f2a571: /* f2a571: fcom dword ptr [0xf31118] */
  fpu_com(ST0, F32((uint32_t)(0xf31118u)));
/* f2a577: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a579: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a57c: jp 0xf2a583 */
  if (pf) goto L_f2a583;
L_f2a57e: /* f2a57e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* f2a581: jmp 0xf2a58c */
  goto L_f2a58c;
L_f2a583: /* f2a583: mov dword ptr [ebp - 0x2c], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x40000000u);
L_f2a58a: /* f2a58a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2a58c: /* f2a58c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a58f: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* f2a595: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2a597: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a598: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf2a59eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a59e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2a5a1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f2a5a3: fld dword ptr [edx + 0x2c4] */
  { double v = F32((uint32_t)(edx + 0x2c4u)); FPUSH(v); }
/* f2a5a9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a5ac: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f2a5b2: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* f2a5b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a5b7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a5ba: jnp 0xf2a5c4 */
  if (!pf) goto L_f2a5c4;
L_f2a5bc: /* f2a5bc: mov eax, dword ptr [edx + 0x2c4] */
  eax = R32((uint32_t)(edx + 0x2c4u));
/* f2a5c2: jmp 0xf2a5cc */
  goto L_f2a5cc;
L_f2a5c4: /* f2a5c4: mov ecx, dword ptr [0xf38608] */
  ecx = R32((uint32_t)(0xf38608u));
/* f2a5ca: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_f2a5cc: /* f2a5cc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a5cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2a5d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2a5d3: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* f2a5d6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2a5d8: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* f2a5db: mov ecx, dword ptr [esi + ecx + 8] */
  ecx = R32((uint32_t)(esi + ecx + 0x8u));
/* f2a5df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a5e0: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2a5e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a5e4: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* f2a5e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a5e8: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* f2a5eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a5ec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2a5ef: lea ecx, [edx + 0x170] */
  ecx = (uint32_t)(edx + 0x170u);
/* f2a5f5: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* f2a5f7: mov edi, esp */
  edi = esp;
/* f2a5f9: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* f2a5fb: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* f2a5fe: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2a601: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* f2a604: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* f2a607: mov ecx, dword ptr [edx + 0xa8] */
  ecx = R32((uint32_t)(edx + 0xa8u));
/* f2a60d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a60e: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* f2a611: mov ecx, dword ptr [esi + ecx + 0xc] */
  ecx = R32((uint32_t)(esi + ecx + 0xcu));
/* f2a615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a616: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a619: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a61a: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf2a620u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a620: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a622: je 0xf2a62d */
  if (zf) goto L_f2a62d;
L_f2a624: /* f2a624: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* f2a627: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f2a628: jmp 0xf2a530 */
  goto L_f2a530;
L_f2a62d: /* f2a62d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f2a630: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f2a634: call 0xf21028 */
  esp -= 4; W32(esp, 0xf2a639u); SPILL(); f_f21028(); if (g_unwind) return; RELOAD();
L_f2a639: /* f2a639: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a63c: xor edi, edi */
  edi = 0;
/* f2a63e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f2a641: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* f2a645: jmp 0xf2a650 */
  goto L_f2a650;
L_f2a650: /* f2a650: cmp edi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a656: jge 0xf2a76d */
  if ((sf == of)) goto L_f2a76d;
L_f2a65c: /* f2a65c: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2a65f: mov edx, edi */
  edx = edi;
/* f2a661: imul edx, edx, 0x54 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x54u);
  edx = (uint32_t)r;
  }
/* f2a664: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2a666: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* f2a669: and al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f2a66b: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f2a66d: jne 0xf2a6f5 */
  if (!zf) goto L_f2a6f5;
L_f2a673: /* f2a673: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* f2a676: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a678: je 0xf2a6f5 */
  if (zf) goto L_f2a6f5;
L_f2a67a: /* f2a67a: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* f2a680: mov eax, dword ptr [0xf38618] */
  eax = R32((uint32_t)(0xf38618u));
/* f2a685: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* f2a688: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* f2a68e: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* f2a691: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* f2a697: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f2a69a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f2a69c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* f2a69e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* f2a6a0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* f2a6a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a6a4: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* f2a6a6: fmul st(4) */
  ST0 = ST0 * STI(4);
/* f2a6a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a6aa: fstp st(3) */
  STI(3) = ST0; FPOP();
/* f2a6ac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2a6ae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2a6b0: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* f2a6b3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* f2a6b5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f2a6b7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* f2a6b9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f2a6bb: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* f2a6bd: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f2a6bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a6c1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2a6c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a6c6: je 0xf2a6ec */
  if (zf) goto L_f2a6ec;
L_f2a6c8: /* f2a6c8: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* f2a6ce: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a6d0: jne 0xf2a6ec */
  if (!zf) goto L_f2a6ec;
L_f2a6d2: /* f2a6d2: mov eax, dword ptr [0xf3862c] */
  eax = R32((uint32_t)(0xf3862cu));
/* f2a6d7: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a6da: je 0xf2a6f5 */
  if (zf) goto L_f2a6f5;
L_f2a6dc: /* f2a6dc: fld dword ptr [esi + 0x2c4] */
  { double v = F32((uint32_t)(esi + 0x2c4u)); FPUSH(v); }
/* f2a6e2: fcomp dword ptr [edx + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x1cu)));
  FPOP();
/* f2a6e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a6e7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a6ea: jnp 0xf2a6f5 */
  if (!pf) goto L_f2a6f5;
L_f2a6ec: /* f2a6ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2a6ed: call 0xf2116d */
  esp -= 4; W32(esp, 0xf2a6f2u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f2a6f2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a6f5: /* f2a6f5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f2a6f6: jmp 0xf2a650 */
  goto L_f2a650;
L_f2a76d: /* f2a76d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a770: xor esi, esi */
  esi = 0;
/* f2a772: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* f2a775: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f2a779: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* f2a77c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f2a780: /* f2a780: cmp esi, dword ptr [eax + 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a786: jge 0xf2b042 */
  if ((sf == of)) goto L_f2b042;
L_f2a78c: /* f2a78c: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a78f: imul esi, esi, 0x54 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x54u);
  esi = (uint32_t)r;
  }
/* f2a792: mov ecx, dword ptr [ecx + esi + 8] */
  ecx = R32((uint32_t)(ecx + esi + 0x8u));
/* f2a796: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a798: je 0xf2a7bf */
  if (zf) goto L_f2a7bf;
L_f2a79a: /* f2a79a: call dword ptr [0xf38604] */
  esp -= 4; W32(esp, 0xf2a7a0u); SPILL(); f_4e1ba9(); if (g_unwind) return; /* Core!?IsValid@UObject@@QAEHXZ */ RELOAD();
/* f2a7a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7a2: jne 0xf2a7bc */
  if (!zf) goto L_f2a7bc;
L_f2a7a4: /* f2a7a4: push 0x47f */
  { uint32_t v = 0x47fu; esp -= 4; W32(esp, v); }
/* f2a7a9: push 0xf360cc */
  { uint32_t v = 0xf360ccu; esp -= 4; W32(esp, v); }
/* f2a7ae: push 0xf360e4 */
  { uint32_t v = 0xf360e4u; esp -= 4; W32(esp, v); }
/* f2a7b3: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf2a7b9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f2a7b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2a7bc: /* f2a7bc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a7bf: /* f2a7bf: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2a7c2: lea ecx, [esi + edx] */
  ecx = (uint32_t)(esi + edx);
/* f2a7c5: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* f2a7c8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7ca: je 0xf2b034 */
  if (zf) goto L_f2b034;
L_f2a7d0: /* f2a7d0: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* f2a7d3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7d5: jne 0xf2b034 */
  if (!zf) goto L_f2b034;
L_f2a7db: /* f2a7db: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a7de: test byte ptr [esi + ecx + 0x44], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx + 0x44u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7e3: je 0xf2a9b2 */
  if (zf) goto L_f2a9b2;
L_f2a7e9: /* f2a7e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a7ec: xor ebx, ebx */
  ebx = 0;
/* f2a7ee: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* f2a7f1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f2a7f4: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2a7f7: mov ecx, dword ptr [ecx + 0x94] */
  ecx = R32((uint32_t)(ecx + 0x94u));
/* f2a7fd: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* f2a800: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f2a802: mov edx, dword ptr [edx + 0x5c] */
  edx = R32((uint32_t)(edx + 0x5cu));
/* f2a805: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* f2a808: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f2a80b: lea edi, [edx + ecx - 0x44] */
  edi = (uint32_t)(edx + ecx + 0xffffffbcu);
/* f2a80f: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* f2a812: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a813: push 0x1016 */
  { uint32_t v = 0x1016u; esp -= 4; W32(esp, v); }
/* f2a818: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a819: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* f2a81d: call dword ptr [0xf370a4] */
  { uint32_t t = R32((uint32_t)(0xf370a4u)); esp -= 4; W32(esp, 0xf2a823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a823: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f2a826: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a829: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a82b: je 0xf2a845 */
  if (zf) goto L_f2a845;
L_f2a82d: /* f2a82d: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* f2a830: mov eax, dword ptr [0xf385f0] */
  eax = R32((uint32_t)(0xf385f0u));
/* f2a835: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f2a838: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a839: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2a83b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f2a83c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a83d: call dword ptr [0xf38640] */
  esp -= 4; W32(esp, 0xf2a843u); SPILL(); f_4e28e2(); if (g_unwind) return; /* Core!?QueryStream@FFileStream@@QAEHHAAH@Z */ RELOAD();
/* f2a843: mov ebx, eax */
  ebx = eax;
L_f2a845: /* f2a845: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* f2a848: mov ecx, dword ptr [0xf3863c] */
  ecx = R32((uint32_t)(0xf3863cu));
/* f2a84e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2a850: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* f2a853: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* f2a856: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f2a859: cmp ecx, dword ptr [eax + edx - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a85d: je 0xf2a870 */
  if (zf) goto L_f2a870;
L_f2a85f: /* f2a85f: xor ecx, ecx */
  ecx = 0;
/* f2a861: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* f2a864: mov edx, dword ptr [0xf3863c] */
  edx = R32((uint32_t)(0xf3863cu));
/* f2a86a: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f2a86c: mov dword ptr [eax + edx - 8], ecx */
  W32((uint32_t)(eax + edx + 0xfffffff8u), ecx);
L_f2a870: /* f2a870: call dword ptr [0xf37084] */
  { uint32_t t = R32((uint32_t)(0xf37084u)); esp -= 4; W32(esp, 0xf2a876u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a876: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* f2a879: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a87b: je 0xf2a939 */
  if (zf) goto L_f2a939;
L_f2a881: /* f2a881: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a886: jne 0xf2a939 */
  if (!zf) goto L_f2a939;
L_f2a88c: /* f2a88c: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f2a88f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a891: je 0xf2a91e */
  if (zf) goto L_f2a91e;
L_f2a897: /* f2a897: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* f2a89a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a89d: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* f2a8a0: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2a8a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8a4: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* f2a8a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a8aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8ab: call dword ptr [0xf37170] */
  { uint32_t t = R32((uint32_t)(0xf37170u)); esp -= 4; W32(esp, 0xf2a8b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8b1: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* f2a8b4: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2a8b7: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* f2a8ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8be: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* f2a8c1: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* f2a8c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8c7: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* f2a8ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8cc: call dword ptr [0xf370b0] */
  { uint32_t t = R32((uint32_t)(0xf370b0u)); esp -= 4; W32(esp, 0xf2a8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8d2: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* f2a8d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a8d8: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* f2a8db: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a8de: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8e2: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2a8e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a8e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8e9: call dword ptr [0xf37094] */
  { uint32_t t = R32((uint32_t)(0xf37094u)); esp -= 4; W32(esp, 0xf2a8efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8ef: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2a8f2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* f2a8f5: mov edx, dword ptr [0xf385f0] */
  edx = R32((uint32_t)(0xf385f0u));
/* f2a8fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8ff: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f2a900: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a902: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a903: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f2a905: call dword ptr [0xf385f8] */
  esp -= 4; W32(esp, 0xf2a90bu); SPILL(); f_4e1573(); if (g_unwind) return; /* Core!?RequestChunks@FFileStream@@QAEXHHPAX@Z */ RELOAD();
/* f2a90b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* f2a90e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f2a90f: and eax, 0x80000003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f2a914: jns 0xf2a91b */
  if (!sf) goto L_f2a91b;
L_f2a916: /* f2a916: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f2a917: or eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f2a91a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_f2a91b: /* f2a91b: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
L_f2a91e: /* f2a91e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a920: jne 0xf2a939 */
  if (!zf) goto L_f2a939;
L_f2a922: /* f2a922: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* f2a925: mov edx, dword ptr [0xf385f0] */
  edx = R32((uint32_t)(0xf385f0u));
/* f2a92b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f2a92c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2a92d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a92e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f2a930: call dword ptr [0xf385ec] */
  esp -= 4; W32(esp, 0xf2a936u); SPILL(); f_4e3f6c(); if (g_unwind) return; /* Core!?DestroyStream@FFileStream@@QAEXHH@Z */ RELOAD();
/* f2a936: mov dword ptr [edi + 0x28], ebx */
  W32((uint32_t)(edi + 0x28u), ebx);
L_f2a939: /* f2a939: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2a93c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a93e: je 0xf2a95b */
  if (zf) goto L_f2a95b;
L_f2a940: /* f2a940: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a943: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a946: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2a94a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a94b: call dword ptr [0xf37128] */
  { uint32_t t = R32((uint32_t)(0xf37128u)); esp -= 4; W32(esp, 0xf2a951u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a951: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a954: mov dword ptr [edi + 0x2c], 0 */
  W32((uint32_t)(edi + 0x2cu), 0x0u);
L_f2a95b: /* f2a95b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a95e: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* f2a964: mov edx, dword ptr [0xf38720] */
  edx = R32((uint32_t)(0xf38720u));
/* f2a96a: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* f2a96d: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* f2a970: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f2a977: jmp 0xf2a9c4 */
  goto L_f2a9c4;
L_f2a9b2: /* f2a9b2: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2a9b8: mov eax, dword ptr [eax + 0x104] */
  eax = R32((uint32_t)(eax + 0x104u));
/* f2a9be: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2a9c1: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
L_f2a9c4: /* f2a9c4: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2a9c6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a9c9: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* f2a9d0: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* f2a9d7: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* f2a9de: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2a9e1: fld dword ptr [eax + esi + 0x34] */
  { double v = F32((uint32_t)(eax + esi + 0x34u)); FPUSH(v); }
/* f2a9e5: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2a9e8: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2a9eb: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* f2a9ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a9f0: je 0xf2ab64 */
  if (zf) goto L_f2ab64;
L_f2a9f6: /* f2a9f6: test byte ptr [edx + 0x44], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x44u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a9fa: jne 0xf2ab64 */
  if (!zf) goto L_f2ab64;
L_f2aa00: /* f2aa00: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2aa05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2aa07: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2aa0a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* f2aa0c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f2aa0f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* f2aa12: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2aa15: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2aa18: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aa1b: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aa1e: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* f2aa21: test byte ptr [eax + 0x44], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2aa25: jne 0xf2aa94 */
  if (!zf) goto L_f2aa94;
L_f2aa27: /* f2aa27: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2aa2a: fld dword ptr [eax + 0x190] */
  { double v = F32((uint32_t)(eax + 0x190u)); FPUSH(v); }
/* f2aa30: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2aa35: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* f2aa38: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* f2aa3b: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* f2aa3e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2aa41: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* f2aa43: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* f2aa46: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* f2aa4c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa52: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2aa55: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa5b: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* f2aa61: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa67: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* f2aa6d: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* f2aa73: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f2aa76: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* f2aa7c: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* f2aa82: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f2aa85: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* f2aa8b: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* f2aa91: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
L_f2aa94: /* f2aa94: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aa97: mov al, byte ptr [edx + esi + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi + 0x44u))) & 0xffu);
/* f2aa9b: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2aa9d: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2aa9f: je 0xf2ab10 */
  if (zf) goto L_f2ab10;
L_f2aaa1: /* f2aaa1: mov eax, dword ptr [ecx + 0xe0] */
  eax = R32((uint32_t)(ecx + 0xe0u));
/* f2aaa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2aaa9: jne 0xf2ab10 */
  if (!zf) goto L_f2ab10;
L_f2aaab: /* f2aaab: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2aaae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2aab0: movzx ecx, byte ptr [eax + 0x2c9] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2c9u)));
/* f2aab7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f2aaba: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2aabd: fmul dword ptr [0xf31efc] */
  ST0 = ST0 * (F32((uint32_t)(0xf31efcu)));
/* f2aac3: fcom dword ptr [0xf31da0] */
  fpu_com(ST0, F32((uint32_t)(0xf31da0u)));
/* f2aac9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2aacb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2aace: jp 0xf2aad9 */
  if (pf) goto L_f2aad9;
L_f2aad0: /* f2aad0: mov dword ptr [ebp - 0x60], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f000000u);
/* f2aad7: jmp 0xf2aaf2 */
  goto L_f2aaf2;
L_f2aad9: /* f2aad9: fcom dword ptr [0xf31118] */
  fpu_com(ST0, F32((uint32_t)(0xf31118u)));
/* f2aadf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2aae1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2aae4: jp 0xf2aaeb */
  if (pf) goto L_f2aaeb;
L_f2aae6: /* f2aae6: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* f2aae9: jmp 0xf2aaf4 */
  goto L_f2aaf4;
L_f2aaeb: /* f2aaeb: mov dword ptr [ebp - 0x60], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x40000000u);
L_f2aaf2: /* f2aaf2: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2aaf4: /* f2aaf4: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* f2aaf7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* f2aafa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aafb: push 0x1003 */
  { uint32_t v = 0x1003u; esp -= 4; W32(esp, v); }
/* f2ab00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ab01: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2ab07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ab07: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* f2ab0a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab0d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2ab10: /* f2ab10: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2ab13: mov eax, dword ptr [edx + esi + 0x48] */
  eax = R32((uint32_t)(edx + esi + 0x48u));
/* f2ab17: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2ab19: and al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f2ab1b: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f2ab1d: jne 0xf2ab64 */
  if (!zf) goto L_f2ab64;
L_f2ab1f: /* f2ab1f: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* f2ab25: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ab27: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f2ab2a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f2ab2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ab2d: mov ecx, edx */
  ecx = edx;
/* f2ab2f: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf2ab35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ab35: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2ab38: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab3b: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* f2ab41: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2ab44: fst dword ptr [edx + esi + 0x34] */
  WF32((uint32_t)(edx + esi + 0x34u), ST0);
/* f2ab48: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab4b: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2ab4e: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2ab51: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2ab54: mov bl, byte ptr [eax + 0x28] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x28u))) & 0xffu);
/* f2ab57: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ab59: je 0xf2ab64 */
  if (zf) goto L_f2ab64;
L_f2ab5b: /* f2ab5b: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* f2ab5e: fmul dword ptr [0xf31e7c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31e7cu)));
L_f2ab64: /* f2ab64: cmp dword ptr [edx + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2ab68: jne 0xf2abad */
  if (!zf) goto L_f2abad;
L_f2ab6a: /* f2ab6a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2ab6d: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2ab73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ab75: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ab78: jp 0xf2ab86 */
  if (pf) goto L_f2ab86;
L_f2ab7a: /* f2ab7a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2ab7d: fadd dword ptr [edx + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x3cu)));
/* f2ab80: fstp dword ptr [edx + 0x3c] */
  WF32((uint32_t)(edx + 0x3cu), ST0); FPOP();
/* f2ab83: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2ab86: /* f2ab86: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2ab89: fld dword ptr [edx + esi + 0x3c] */
  { double v = F32((uint32_t)(edx + esi + 0x3cu)); FPUSH(v); }
/* f2ab8d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2ab8f: fcomp dword ptr [edx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x38u)));
  FPOP();
/* f2ab92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ab94: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ab97: jne 0xf2aba5 */
  if (!zf) goto L_f2aba5;
L_f2ab99: /* f2ab99: mov dword ptr [edx + 0x40], 0 */
  W32((uint32_t)(edx + 0x40u), 0x0u);
/* f2aba0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aba3: jmp 0xf2abad */
  goto L_f2abad;
L_f2aba5: /* f2aba5: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* f2aba8: fdiv dword ptr [edx + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x38u)));
/* f2abab: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_f2abad: /* f2abad: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2abb0: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2abb3: cmp dword ptr [edx + 0x40], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x40u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2abb7: jne 0xf2ac32 */
  if (!zf) goto L_f2ac32;
L_f2abb9: /* f2abb9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2abbc: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2abc2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2abc4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2abc7: jp 0xf2abd5 */
  if (pf) goto L_f2abd5;
L_f2abc9: /* f2abc9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2abcc: fadd dword ptr [edx + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x3cu)));
/* f2abcf: fstp dword ptr [edx + 0x3c] */
  WF32((uint32_t)(edx + 0x3cu), ST0); FPOP();
/* f2abd2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2abd5: /* f2abd5: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2abd8: fld dword ptr [edx + esi + 0x3c] */
  { double v = F32((uint32_t)(edx + esi + 0x3cu)); FPUSH(v); }
/* f2abdc: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2abde: fcomp dword ptr [edx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x38u)));
  FPOP();
/* f2abe1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2abe3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2abe6: jne 0xf2ac24 */
  if (!zf) goto L_f2ac24;
L_f2abe8: /* f2abe8: mov al, byte ptr [edx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x44u))) & 0xffu);
/* f2abeb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2abed: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2abef: je 0xf2ac0a */
  if (zf) goto L_f2ac0a;
L_f2abf1: /* f2abf1: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f2abf3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2abf5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2abf6: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf2abf9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2abf9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2abfc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2abff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2ac00: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2ac03: mov esi, ecx */
  esi = ecx;
/* f2ac05: jmp 0xf2a780 */
  goto L_f2a780;
L_f2ac0a: /* f2ac0a: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2ac0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2ac0e: call 0xf2116d */
  esp -= 4; W32(esp, 0xf2ac13u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f2ac13: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2ac16: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ac19: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2ac1a: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2ac1d: mov esi, ecx */
  esi = ecx;
/* f2ac1f: jmp 0xf2a780 */
  goto L_f2a780;
L_f2ac24: /* f2ac24: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* f2ac27: fdiv dword ptr [edx + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x38u)));
/* f2ac2a: fsubr dword ptr [0xf3112c] */
  ST0 = (F32((uint32_t)(0xf3112cu))) - ST0;
/* f2ac30: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_f2ac32: /* f2ac32: fcom dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
/* f2ac38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ac3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ac3d: jp 0xf2ac48 */
  if (pf) goto L_f2ac48;
L_f2ac3f: /* f2ac3f: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f2ac46: jmp 0xf2ac61 */
  goto L_f2ac61;
L_f2ac48: /* f2ac48: fcom dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
/* f2ac4e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ac50: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ac53: jp 0xf2ac5a */
  if (pf) goto L_f2ac5a;
L_f2ac55: /* f2ac55: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* f2ac58: jmp 0xf2ac63 */
  goto L_f2ac63;
L_f2ac5a: /* f2ac5a: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
L_f2ac61: /* f2ac61: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2ac63: /* f2ac63: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* f2ac66: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* f2ac69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ac6a: push 0x100a */
  { uint32_t v = 0x100au; esp -= 4; W32(esp, v); }
/* f2ac6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ac70: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2ac76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ac76: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ac79: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2ac7c: mov dl, byte ptr [eax + esi + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0x44u))) & 0xffu);
/* f2ac80: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2ac82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2ac85: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ac88: jne 0xf2aee9 */
  if (!zf) goto L_f2aee9;
L_f2ac8e: /* f2ac8e: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* f2ac91: mov eax, dword ptr [ecx + 0xf4] */
  eax = R32((uint32_t)(ecx + 0xf4u));
/* f2ac97: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2ac9d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f2aca0: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2aca3: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2aca6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2aca8: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f2acaa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2acad: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2acb0: mov eax, dword ptr [ecx + esi + 8] */
  eax = R32((uint32_t)(ecx + esi + 0x8u));
/* f2acb4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2acb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2acb8: je 0xf2acc3 */
  if (zf) goto L_f2acc3;
L_f2acba: /* f2acba: movzx edx, byte ptr [eax + 0x2ca] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2cau)));
/* f2acc1: jmp 0xf2acc5 */
  goto L_f2acc5;
L_f2acc3: /* f2acc3: xor edx, edx */
  edx = 0;
L_f2acc5: /* f2acc5: mov edi, dword ptr [ebp - 0x9c] */
  edi = R32((uint32_t)(ebp + 0xffffff64u));
/* f2accb: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* f2accd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2acce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2accf: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2acd2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2acd5: mov edx, esp */
  edx = esp;
/* f2acd7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f2acd9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2acdc: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f2acdf: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2ace2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2ace5: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2ace8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2acea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2aced: mov edx, esp */
  edx = esp;
/* f2acef: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f2acf1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f2acf4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2acf7: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f2acfa: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f2acfd: mov ecx, edi */
  ecx = edi;
/* f2acff: call dword ptr [ebx + 0xf8] */
  { uint32_t t = R32((uint32_t)(ebx + 0xf8u)); esp -= 4; W32(esp, 0xf2ad05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ad05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2ad07: jne 0xf2ad91 */
  if (!zf) goto L_f2ad91;
L_f2ad0d: /* f2ad0d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad10: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2ad13: lea ecx, [edx + esi + 0xc] */
  ecx = (uint32_t)(edx + esi + 0xcu);
/* f2ad17: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* f2ad19: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2ad1c: mov edx, esp */
  edx = esp;
/* f2ad1e: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* f2ad20: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* f2ad23: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2ad26: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* f2ad29: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f2ad2c: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* f2ad2f: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* f2ad32: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* f2ad38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ad39: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* f2ad3f: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* f2ad42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ad43: call dword ptr [0xf3872c] */
  esp -= 4; W32(esp, 0xf2ad49u); SPILL(); f_6c9192(); if (g_unwind) return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */ RELOAD();
/* f2ad49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad4c: movzx edx, byte ptr [ecx + 0x6c] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x6cu)));
/* f2ad50: movzx ecx, byte ptr [ebp - 0x70] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffff90u)));
/* f2ad54: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f2ad56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ad57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ad58: mov ecx, edi */
  ecx = edi;
/* f2ad5a: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0xf2ad60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ad60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad63: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2ad66: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2ad69: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f2ad6c: fst dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0);
/* f2ad70: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad73: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* f2ad79: fmul dword ptr [0xf31d9c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d9cu)));
/* f2ad7f: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f2ad84: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2ad87: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* f2ad8a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f2ad8d: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2ad8f: jmp 0xf2ad9e */
  goto L_f2ad9e;
L_f2ad91: /* f2ad91: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad94: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ad97: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2ad9a: fstp dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0); FPOP();
L_f2ad9e: /* f2ad9e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ada1: mov edx, dword ptr [ecx + 0xf4] */
  edx = R32((uint32_t)(ecx + 0xf4u));
/* f2ada7: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f2adac: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2adaf: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* f2adb2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2adb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2adb6: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2adb9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2adbb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2adbd: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f2adc0: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* f2adc3: fld dword ptr [edx + esi + 0x28] */
  { double v = F32((uint32_t)(edx + esi + 0x28u)); FPUSH(v); }
/* f2adc7: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* f2adca: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* f2adcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2adcf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2add2: jnp 0xf2adf9 */
  if (!pf) goto L_f2adf9;
L_f2add4: /* f2add4: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2add7: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2adda: mov edx, dword ptr [eax + 0x138] */
  edx = R32((uint32_t)(eax + 0x138u));
/* f2ade0: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* f2ade3: mov eax, dword ptr [eax + 0x13c] */
  eax = R32((uint32_t)(eax + 0x13cu));
/* f2ade9: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* f2adec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2adef: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2adf2: fstp dword ptr [edx + esi + 0x28] */
  WF32((uint32_t)(edx + esi + 0x28u), ST0); FPOP();
/* f2adf6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_f2adf9: /* f2adf9: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* f2adfc: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* f2adff: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2ae05: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* f2ae08: fsub qword ptr [ecx + 0x2c] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x2cu)));
/* f2ae0b: fcom qword ptr [0xf31e70] */
  fpu_com(ST0, F64((uint32_t)(0xf31e70u)));
/* f2ae11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae13: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ae16: jp 0xf2ae28 */
  if (pf) goto L_f2ae28;
L_f2ae18: /* f2ae18: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae1b: fsub dword ptr [ecx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x24u)));
/* f2ae1e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* f2ae20: fadd dword ptr [ecx + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x24u)));
/* f2ae23: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f2ae26: jmp 0xf2ae33 */
  goto L_f2ae33;
L_f2ae28: /* f2ae28: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2ae2b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ae2d: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* f2ae30: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_f2ae33: /* f2ae33: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae36: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2ae3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae3e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae41: je 0xf2ae4a */
  if (zf) goto L_f2ae4a;
L_f2ae43: /* f2ae43: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
L_f2ae4a: /* f2ae4a: mov ebx, dword ptr [0xf37124] */
  ebx = R32((uint32_t)(0xf37124u));
/* f2ae50: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae53: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae55: jne 0xf2ae70 */
  if (!zf) goto L_f2ae70;
L_f2ae57: /* f2ae57: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2ae5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ae5e: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* f2ae61: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2ae65: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2ae68: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f2ae6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ae6e: jmp 0xf2aedd */
  goto L_f2aedd;
L_f2ae70: /* f2ae70: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* f2ae73: fdiv dword ptr [esi + eax + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esi + eax + 0x1cu)));
/* f2ae77: fcom dword ptr [0xf31d1c] */
  fpu_com(ST0, F32((uint32_t)(0xf31d1cu)));
/* f2ae7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae7f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae82: je 0xf2ae8c */
  if (zf) goto L_f2ae8c;
L_f2ae84: /* f2ae84: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ae86: fld dword ptr [0xf31d1c] */
  { double v = F32((uint32_t)(0xf31d1cu)); FPUSH(v); }
L_f2ae8c: /* f2ae8c: fldln2  */
  FPUSH(0.693147180559945309417);
/* f2ae8e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f2ae90: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
/* f2ae92: fmul qword ptr [0xf31d10] */
  ST0 = ST0 * (F64((uint32_t)(0xf31d10u)));
/* f2ae98: call 0xf2bb70 */
  esp -= 4; W32(esp, 0xf2ae9du); SPILL(); f_f2bb70(); if (g_unwind) return; RELOAD();
/* f2ae9d: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* f2aea3: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* f2aea6: mov eax, dword ptr [esi + edx + 4] */
  eax = R32((uint32_t)(esi + edx + 0x4u));
/* f2aeaa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2aeac: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* f2aeb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aeb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aeb4: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* f2aeb6: push 0xf3114c */
  { uint32_t v = 0xf3114cu; esp -= 4; W32(esp, v); }
/* f2aebb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2aebdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2aebd: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2aec0: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aec6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2aec9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aeca: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aecd: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aed0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2aed3: mov eax, dword ptr [edx + esi + 4] */
  eax = R32((uint32_t)(edx + esi + 0x4u));
/* f2aed7: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f2aedc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_f2aedd: /* f2aedd: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2aee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2aee3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aee6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2aee9: /* f2aee9: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aeec: mov eax, dword ptr [edx + esi + 0x44] */
  eax = R32((uint32_t)(edx + esi + 0x44u));
/* f2aef0: lea edi, [edx + esi] */
  edi = (uint32_t)(edx + esi);
/* f2aef3: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* f2aef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aef7: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2aefa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2aefb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aefc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2aeff: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* f2af02: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* f2af04: mov eax, esp */
  eax = esp;
/* f2af06: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f2af08: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* f2af0b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f2af0e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f2af11: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f2af14: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f2af17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2af18: call 0xf21037 */
  esp -= 4; W32(esp, 0xf2af1du); SPILL(); f_f21037(); if (g_unwind) return; RELOAD();
/* f2af1d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2af20: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2af23: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* f2af26: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2af29: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2af2c: test byte ptr [esi + edx + 0x44], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edx + 0x44u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2af31: jne 0xf2b034 */
  if (!zf) goto L_f2b034;
L_f2af37: /* f2af37: mov eax, edx */
  eax = edx;
/* f2af39: fld dword ptr [esi + eax + 0x14] */
  { double v = F32((uint32_t)(esi + eax + 0x14u)); FPUSH(v); }
/* f2af3d: lea eax, [esi + eax + 0xc] */
  eax = (uint32_t)(esi + eax + 0xcu);
/* f2af41: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f2af4a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* f2af4d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af53: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* f2af55: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af5b: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* f2af61: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* f2af67: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* f2af6d: call dword ptr [0xf38634] */
  esp -= 4; W32(esp, 0xf2af73u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* f2af73: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2af76: fcomp dword ptr [0xf31d04] */
  fpu_com(ST0, F32((uint32_t)(0xf31d04u)));
  FPOP();
/* f2af7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2af7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2af81: jne 0xf2afbe */
  if (!zf) goto L_f2afbe;
L_f2af83: /* f2af83: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* f2af8d: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* f2af93: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* f2af9d: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* f2afa3: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* f2afad: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* f2afb3: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* f2afb6: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f2afb9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* f2afbc: jmp 0xf2afe2 */
  goto L_f2afe2;
L_f2afbe: /* f2afbe: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* f2afc1: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afc7: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* f2afca: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* f2afcd: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afd3: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* f2afd6: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* f2afd9: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afdf: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
L_f2afe2: /* f2afe2: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* f2afe8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2afeb: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2aff1: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* f2aff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aff8: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2affd: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* f2b003: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2b006: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* f2b00a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b00b: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2b011u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b011: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b014: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2b017: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b01a: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* f2b01d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b01e: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2b022: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f2b027: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b028: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2b02eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b02e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b031: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2b034: /* f2b034: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2b037: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2b038: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2b03b: mov esi, ecx */
  esi = ecx;
/* f2b03d: jmp 0xf2a780 */
  goto L_f2a780;
L_f2b042: /* f2b042: mov ebx, dword ptr [0xf38638] */
  ebx = R32((uint32_t)(0xf38638u));
/* f2b048: mov dword ptr [ebp - 0x18], 2 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x2u);
/* f2b04f: mov edi, 0xc */
  edi = 0xcu;
/* f2b054: lea esi, [ebp - 0xc4] */
  esi = (uint32_t)(ebp + 0xffffff3cu);
/* f2b05a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f2b060: /* f2b060: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* f2b063: js 0xf2b070 */
  if (sf) goto L_f2b070;
L_f2b065: /* f2b065: mov ecx, esi */
  ecx = esi;
/* f2b067: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2b069u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b069: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b06c: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f2b06e: jmp 0xf2b060 */
  goto L_f2b060;
L_f2b070: /* f2b070: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* f2b073: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* f2b076: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* f2b079: fchs  */
  ST0 = -ST0;
/* f2b07b: mov dword ptr [ebp - 0xc4], ecx */
  W32((uint32_t)(ebp + 0xffffff3cu), ecx);
/* f2b081: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* f2b084: mov dword ptr [ebp - 0xc0], edx */
  W32((uint32_t)(ebp + 0xffffff40u), edx);
/* f2b08a: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* f2b08d: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* f2b093: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* f2b099: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* f2b09c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* f2b09f: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* f2b0a5: fchs  */
  ST0 = -ST0;
/* f2b0a7: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* f2b0aa: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* f2b0b0: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* f2b0b6: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* f2b0bc: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* f2b0c6: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* f2b0cc: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* f2b0cf: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* f2b0d9: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* f2b0df: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* f2b0e2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2b0e5: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2b0e8: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* f2b0f2: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* f2b0f8: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* f2b0fb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f2b0fd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2b100: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f2b103: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2b106: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f2b109: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f2b10c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b112: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* f2b115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b116: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2b11b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f2b11e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f2b121: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b127: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f2b12a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f2b12d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b133: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2b139: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f2b13c: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b142u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b142: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b145: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* f2b14b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b14c: push 0x100f */
  { uint32_t v = 0x100fu; esp -= 4; W32(esp, v); }
/* f2b151: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b157u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b157: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b15a: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* f2b15d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b15e: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f2b163: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b169: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b16c: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* f2b16f: mov edx, dword ptr [eax + 0x394] */
  edx = R32((uint32_t)(eax + 0x394u));
/* f2b175: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b178: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b179: call 0xf210f5 */
  esp -= 4; W32(esp, 0xf2b17eu); SPILL(); f_f210f5(); if (g_unwind) return; RELOAD();
/* f2b17e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b181: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2b184: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2b18a: lea esi, [ecx + 0x3c] */
  esi = (uint32_t)(ecx + 0x3cu);
/* f2b18d: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* f2b18f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2b191: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2b194: jp 0xf2b1aa */
  if (pf) goto L_f2b1aa;
L_f2b196: /* f2b196: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* f2b19c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f2b19e: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* f2b1a4: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* f2b1a7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2b1aa: /* f2b1aa: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2b1ad: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2b1b3: lea esi, [ecx + 0x3c] */
  esi = (uint32_t)(ecx + 0x3cu);
/* f2b1b6: fsub qword ptr [esi] */
  ST0 = ST0 - (F64((uint32_t)(esi)));
/* f2b1b8: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* f2b1be: fmul dword ptr [0xf31e68] */
  ST0 = ST0 * (F32((uint32_t)(0xf31e68u)));
/* f2b1c4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f2b1c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2b1c8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2b1cb: jp 0xf2b207 */
  if (pf) goto L_f2b207;
L_f2b1cd: /* f2b1cd: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* f2b1d3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f2b1d5: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* f2b1db: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* f2b1de: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b1e1: mov eax, dword ptr [edx + 0xa4] */
  eax = R32((uint32_t)(edx + 0xa4u));
/* f2b1e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b1e8: call dword ptr [0xf370b4] */
  { uint32_t t = R32((uint32_t)(0xf370b4u)); esp -= 4; W32(esp, 0xf2b1eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b1ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b1f1: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* f2b1f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b1fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b1fb: call dword ptr [0xf370a8] */
  { uint32_t t = R32((uint32_t)(0xf370a8u)); esp -= 4; W32(esp, 0xf2b201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b201: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b204: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2b207: /* f2b207: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* f2b20d: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2b213: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2b216: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2b219: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2b21b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2b21d: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2b220: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2b222: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_f2b224: /* f2b224: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f2b227: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2b228: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2b229: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2b230: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2b231: mov esp, ebp */
  esp = ebp;
/* f2b233: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2b234: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f2a3e9(void) {
  LOAD_REGS();
L_f2a3e9: /* f2a3e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f2a3f0: /* f2a3f0: cmp edi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a3f6: jge 0xf2a47e */
  if ((sf == of)) goto L_f2a47e;
L_f2a3fc: /* f2a3fc: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2a3ff: mov esi, edi */
  esi = edi;
/* f2a401: imul esi, esi, 0x54 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x54u);
  esi = (uint32_t)r;
  }
/* f2a404: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* f2a407: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* f2a40a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a40c: je 0xf2a478 */
  if (zf) goto L_f2a478;
L_f2a40e: /* f2a40e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a411: je 0xf2a478 */
  if (zf) goto L_f2a478;
L_f2a413: /* f2a413: test byte ptr [eax + 0x44], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a417: jne 0xf2a478 */
  if (!zf) goto L_f2a478;
L_f2a419: /* f2a419: mov ecx, dword ptr [ecx + 0x7c] */
  ecx = R32((uint32_t)(ecx + 0x7cu));
/* f2a41c: mov edx, dword ptr [esi + ecx + 4] */
  edx = R32((uint32_t)(esi + ecx + 0x4u));
/* f2a420: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* f2a423: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a424: push 0x1010 */
  { uint32_t v = 0x1010u; esp -= 4; W32(esp, v); }
/* f2a429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a42a: call dword ptr [0xf370a4] */
  { uint32_t t = R32((uint32_t)(0xf370a4u)); esp -= 4; W32(esp, 0xf2a430u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a430: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a433: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a436: cmp eax, 0x1014 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1014u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a43b: jne 0xf2a475 */
  if (!zf) goto L_f2a475;
L_f2a43d: /* f2a43d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a440: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2a443: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f2a445: test byte ptr [esi + 0x44], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x44u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a449: je 0xf2a46f */
  if (zf) goto L_f2a46f;
L_f2a44b: /* f2a44b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f2a44d: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* f2a450: mov edx, dword ptr [ecx + 0x94] */
  edx = R32((uint32_t)(ecx + 0x94u));
/* f2a456: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* f2a459: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2a45b: mov edx, dword ptr [eax - 0x1c] */
  edx = R32((uint32_t)(eax + 0xffffffe4u));
/* f2a45e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a460: je 0xf2a46f */
  if (zf) goto L_f2a46f;
L_f2a462: /* f2a462: mov dword ptr [eax - 0x18], 1 */
  W32((uint32_t)(eax + 0xffffffe8u), 0x1u);
/* f2a469: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a46c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f2a46d: jmp 0xf2a3f0 */
  goto L_f2a3f0;
L_f2a46f: /* f2a46f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2a470: call 0xf2116d */
  esp -= 4; W32(esp, 0xf2a475u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
L_f2a475: /* f2a475: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a478: /* f2a478: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f2a479: jmp 0xf2a3f0 */
  goto L_f2a3f0;
L_f2a47e: /* f2a47e: xor eax, eax */
  eax = 0;
/* f2a480: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a482: je 0xf2a639 */
  if (zf) goto L_f2a639;
L_f2a488: /* f2a488: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f2a48b: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* f2a48e: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* f2a491: mov ecx, dword ptr [0xf3862c] */
  ecx = R32((uint32_t)(0xf3862cu));
/* f2a497: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a499: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f2a49d: je 0xf2a4a3 */
  if (zf) goto L_f2a4a3;
L_f2a49f: /* f2a49f: xor esi, esi */
  esi = 0;
/* f2a4a1: jmp 0xf2a4af */
  goto L_f2a4af;
L_f2a4a3: /* f2a4a3: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* f2a4a9: mov esi, dword ptr [edx + 0x104] */
  esi = R32((uint32_t)(edx + 0x104u));
L_f2a4af: /* f2a4af: mov edi, dword ptr [ebp - 0x9c] */
  edi = R32((uint32_t)(ebp + 0xffffff64u));
L_f2a4b5: /* f2a4b5: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a4b8: jge 0xf2a4e3 */
  if ((sf == of)) goto L_f2a4e3;
L_f2a4ba: /* f2a4ba: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2a4bd: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* f2a4c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a4c2: je 0xf2a4e0 */
  if (zf) goto L_f2a4e0;
L_f2a4c4: /* f2a4c4: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* f2a4ca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a4cc: je 0xf2a4e0 */
  if (zf) goto L_f2a4e0;
L_f2a4ce: /* f2a4ce: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f2a4d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a4d2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a4d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2a4d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a4d7: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* f2a4da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a4db: call 0xf210a0 */
  esp -= 4; W32(esp, 0xf2a4e0u); SPILL(); f_f210a0(); if (g_unwind) return; RELOAD();
L_f2a4e0: /* f2a4e0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f2a4e1: jmp 0xf2a4b5 */
  goto L_f2a4b5;
L_f2a4e3: /* f2a4e3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a4e6: xor esi, esi */
  esi = 0;
L_f2a4e8: /* f2a4e8: cmp esi, dword ptr [ecx + 0x74] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x74u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a4eb: jge 0xf2a516 */
  if ((sf == of)) goto L_f2a516;
L_f2a4ed: /* f2a4ed: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* f2a4f0: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* f2a4f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a4f5: je 0xf2a513 */
  if (zf) goto L_f2a513;
L_f2a4f7: /* f2a4f7: mov edx, dword ptr [eax + 0xa8] */
  edx = R32((uint32_t)(eax + 0xa8u));
/* f2a4fd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a4ff: je 0xf2a513 */
  if (zf) goto L_f2a513;
L_f2a501: /* f2a501: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* f2a504: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a505: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2a506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a507: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* f2a50a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a50b: call 0xf210a0 */
  esp -= 4; W32(esp, 0xf2a510u); SPILL(); f_f210a0(); if (g_unwind) return; RELOAD();
/* f2a510: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a513: /* f2a513: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f2a514: jmp 0xf2a4e8 */
  goto L_f2a4e8;
L_f2a516: /* f2a516: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* f2a519: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a51b: je 0xf2a62d */
  if (zf) goto L_f2a62d;
L_f2a521: /* f2a521: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* f2a524: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a526: call 0xf2115e */
  esp -= 4; W32(esp, 0xf2a52bu); SPILL(); f_f2115e(); if (g_unwind) return; RELOAD();
/* f2a52b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a52e: xor esi, esi */
  esi = 0;
L_f2a530: /* f2a530: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a533: mov dword ptr [ebp - 0x60], esi */
  W32((uint32_t)(ebp + 0xffffffa0u), esi);
/* f2a536: jge 0xf2a62d */
  if ((sf == of)) goto L_f2a62d;
L_f2a53c: /* f2a53c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* f2a53f: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f2a542: mov ecx, dword ptr [esi + edx] */
  ecx = R32((uint32_t)(esi + edx));
/* f2a545: movzx eax, byte ptr [ecx + 0x2c9] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x2c9u)));
/* f2a54c: lea edi, [esi + edx] */
  edi = (uint32_t)(esi + edx);
/* f2a54f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f2a552: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2a555: fmul dword ptr [0xf31efc] */
  ST0 = ST0 * (F32((uint32_t)(0xf31efcu)));
/* f2a55b: fcom dword ptr [0xf31da0] */
  fpu_com(ST0, F32((uint32_t)(0xf31da0u)));
/* f2a561: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a563: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a566: jp 0xf2a571 */
  if (pf) goto L_f2a571;
L_f2a568: /* f2a568: mov dword ptr [ebp - 0x2c], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f000000u);
/* f2a56f: jmp 0xf2a58a */
  goto L_f2a58a;
L_f2a571: /* f2a571: fcom dword ptr [0xf31118] */
  fpu_com(ST0, F32((uint32_t)(0xf31118u)));
/* f2a577: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a579: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a57c: jp 0xf2a583 */
  if (pf) goto L_f2a583;
L_f2a57e: /* f2a57e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* f2a581: jmp 0xf2a58c */
  goto L_f2a58c;
L_f2a583: /* f2a583: mov dword ptr [ebp - 0x2c], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x40000000u);
L_f2a58a: /* f2a58a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2a58c: /* f2a58c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a58f: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* f2a595: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2a597: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a598: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf2a59eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a59e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2a5a1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f2a5a3: fld dword ptr [edx + 0x2c4] */
  { double v = F32((uint32_t)(edx + 0x2c4u)); FPUSH(v); }
/* f2a5a9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a5ac: fcomp dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
  FPOP();
/* f2a5b2: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* f2a5b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a5b7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a5ba: jnp 0xf2a5c4 */
  if (!pf) goto L_f2a5c4;
L_f2a5bc: /* f2a5bc: mov eax, dword ptr [edx + 0x2c4] */
  eax = R32((uint32_t)(edx + 0x2c4u));
/* f2a5c2: jmp 0xf2a5cc */
  goto L_f2a5cc;
L_f2a5c4: /* f2a5c4: mov ecx, dword ptr [0xf38608] */
  ecx = R32((uint32_t)(0xf38608u));
/* f2a5ca: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_f2a5cc: /* f2a5cc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a5cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2a5d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2a5d3: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* f2a5d6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2a5d8: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* f2a5db: mov ecx, dword ptr [esi + ecx + 8] */
  ecx = R32((uint32_t)(esi + ecx + 0x8u));
/* f2a5df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a5e0: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2a5e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a5e4: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* f2a5e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a5e8: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* f2a5eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a5ec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2a5ef: lea ecx, [edx + 0x170] */
  ecx = (uint32_t)(edx + 0x170u);
/* f2a5f5: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* f2a5f7: mov edi, esp */
  edi = esp;
/* f2a5f9: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* f2a5fb: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* f2a5fe: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2a601: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* f2a604: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* f2a607: mov ecx, dword ptr [edx + 0xa8] */
  ecx = R32((uint32_t)(edx + 0xa8u));
/* f2a60d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a60e: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* f2a611: mov ecx, dword ptr [esi + ecx + 0xc] */
  ecx = R32((uint32_t)(esi + ecx + 0xcu));
/* f2a615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a616: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a619: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a61a: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf2a620u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a620: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a622: je 0xf2a62d */
  if (zf) goto L_f2a62d;
L_f2a624: /* f2a624: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* f2a627: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f2a628: jmp 0xf2a530 */
  goto L_f2a530;
L_f2a62d: /* f2a62d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f2a630: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f2a634: call 0xf21028 */
  esp -= 4; W32(esp, 0xf2a639u); SPILL(); f_f21028(); if (g_unwind) return; RELOAD();
L_f2a639: /* f2a639: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a63c: xor edi, edi */
  edi = 0;
/* f2a63e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f2a641: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* f2a645: jmp 0xf2a650 */
  goto L_f2a650;
L_f2a650: /* f2a650: cmp edi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a656: jge 0xf2a76d */
  if ((sf == of)) goto L_f2a76d;
L_f2a65c: /* f2a65c: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2a65f: mov edx, edi */
  edx = edi;
/* f2a661: imul edx, edx, 0x54 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x54u);
  edx = (uint32_t)r;
  }
/* f2a664: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2a666: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* f2a669: and al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f2a66b: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f2a66d: jne 0xf2a6f5 */
  if (!zf) goto L_f2a6f5;
L_f2a673: /* f2a673: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* f2a676: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a678: je 0xf2a6f5 */
  if (zf) goto L_f2a6f5;
L_f2a67a: /* f2a67a: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* f2a680: mov eax, dword ptr [0xf38618] */
  eax = R32((uint32_t)(0xf38618u));
/* f2a685: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* f2a688: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* f2a68e: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* f2a691: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* f2a697: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f2a69a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f2a69c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* f2a69e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* f2a6a0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* f2a6a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a6a4: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* f2a6a6: fmul st(4) */
  ST0 = ST0 * STI(4);
/* f2a6a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a6aa: fstp st(3) */
  STI(3) = ST0; FPOP();
/* f2a6ac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2a6ae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2a6b0: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* f2a6b3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* f2a6b5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f2a6b7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* f2a6b9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f2a6bb: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* f2a6bd: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f2a6bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a6c1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2a6c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a6c6: je 0xf2a6ec */
  if (zf) goto L_f2a6ec;
L_f2a6c8: /* f2a6c8: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* f2a6ce: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a6d0: jne 0xf2a6ec */
  if (!zf) goto L_f2a6ec;
L_f2a6d2: /* f2a6d2: mov eax, dword ptr [0xf3862c] */
  eax = R32((uint32_t)(0xf3862cu));
/* f2a6d7: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a6da: je 0xf2a6f5 */
  if (zf) goto L_f2a6f5;
L_f2a6dc: /* f2a6dc: fld dword ptr [esi + 0x2c4] */
  { double v = F32((uint32_t)(esi + 0x2c4u)); FPUSH(v); }
/* f2a6e2: fcomp dword ptr [edx + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x1cu)));
  FPOP();
/* f2a6e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a6e7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a6ea: jnp 0xf2a6f5 */
  if (!pf) goto L_f2a6f5;
L_f2a6ec: /* f2a6ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2a6ed: call 0xf2116d */
  esp -= 4; W32(esp, 0xf2a6f2u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f2a6f2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a6f5: /* f2a6f5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f2a6f6: jmp 0xf2a650 */
  goto L_f2a650;
L_f2a76d: /* f2a76d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a770: xor esi, esi */
  esi = 0;
/* f2a772: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* f2a775: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f2a779: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* f2a77c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f2a780: /* f2a780: cmp esi, dword ptr [eax + 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a786: jge 0xf2b042 */
  if ((sf == of)) goto L_f2b042;
L_f2a78c: /* f2a78c: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a78f: imul esi, esi, 0x54 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x54u);
  esi = (uint32_t)r;
  }
/* f2a792: mov ecx, dword ptr [ecx + esi + 8] */
  ecx = R32((uint32_t)(ecx + esi + 0x8u));
/* f2a796: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a798: je 0xf2a7bf */
  if (zf) goto L_f2a7bf;
L_f2a79a: /* f2a79a: call dword ptr [0xf38604] */
  esp -= 4; W32(esp, 0xf2a7a0u); SPILL(); f_4e1ba9(); if (g_unwind) return; /* Core!?IsValid@UObject@@QAEHXZ */ RELOAD();
/* f2a7a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7a2: jne 0xf2a7bc */
  if (!zf) goto L_f2a7bc;
L_f2a7a4: /* f2a7a4: push 0x47f */
  { uint32_t v = 0x47fu; esp -= 4; W32(esp, v); }
/* f2a7a9: push 0xf360cc */
  { uint32_t v = 0xf360ccu; esp -= 4; W32(esp, v); }
/* f2a7ae: push 0xf360e4 */
  { uint32_t v = 0xf360e4u; esp -= 4; W32(esp, v); }
/* f2a7b3: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf2a7b9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f2a7b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2a7bc: /* f2a7bc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a7bf: /* f2a7bf: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2a7c2: lea ecx, [esi + edx] */
  ecx = (uint32_t)(esi + edx);
/* f2a7c5: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* f2a7c8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7ca: je 0xf2b034 */
  if (zf) goto L_f2b034;
L_f2a7d0: /* f2a7d0: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* f2a7d3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7d5: jne 0xf2b034 */
  if (!zf) goto L_f2b034;
L_f2a7db: /* f2a7db: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a7de: test byte ptr [esi + ecx + 0x44], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx + 0x44u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7e3: je 0xf2a9b2 */
  if (zf) goto L_f2a9b2;
L_f2a7e9: /* f2a7e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a7ec: xor ebx, ebx */
  ebx = 0;
/* f2a7ee: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* f2a7f1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f2a7f4: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2a7f7: mov ecx, dword ptr [ecx + 0x94] */
  ecx = R32((uint32_t)(ecx + 0x94u));
/* f2a7fd: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* f2a800: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f2a802: mov edx, dword ptr [edx + 0x5c] */
  edx = R32((uint32_t)(edx + 0x5cu));
/* f2a805: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* f2a808: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f2a80b: lea edi, [edx + ecx - 0x44] */
  edi = (uint32_t)(edx + ecx + 0xffffffbcu);
/* f2a80f: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* f2a812: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a813: push 0x1016 */
  { uint32_t v = 0x1016u; esp -= 4; W32(esp, v); }
/* f2a818: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a819: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* f2a81d: call dword ptr [0xf370a4] */
  { uint32_t t = R32((uint32_t)(0xf370a4u)); esp -= 4; W32(esp, 0xf2a823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a823: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f2a826: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a829: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a82b: je 0xf2a845 */
  if (zf) goto L_f2a845;
L_f2a82d: /* f2a82d: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* f2a830: mov eax, dword ptr [0xf385f0] */
  eax = R32((uint32_t)(0xf385f0u));
/* f2a835: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f2a838: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a839: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2a83b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f2a83c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a83d: call dword ptr [0xf38640] */
  esp -= 4; W32(esp, 0xf2a843u); SPILL(); f_4e28e2(); if (g_unwind) return; /* Core!?QueryStream@FFileStream@@QAEHHAAH@Z */ RELOAD();
/* f2a843: mov ebx, eax */
  ebx = eax;
L_f2a845: /* f2a845: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* f2a848: mov ecx, dword ptr [0xf3863c] */
  ecx = R32((uint32_t)(0xf3863cu));
/* f2a84e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2a850: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* f2a853: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* f2a856: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f2a859: cmp ecx, dword ptr [eax + edx - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a85d: je 0xf2a870 */
  if (zf) goto L_f2a870;
L_f2a85f: /* f2a85f: xor ecx, ecx */
  ecx = 0;
/* f2a861: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* f2a864: mov edx, dword ptr [0xf3863c] */
  edx = R32((uint32_t)(0xf3863cu));
/* f2a86a: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f2a86c: mov dword ptr [eax + edx - 8], ecx */
  W32((uint32_t)(eax + edx + 0xfffffff8u), ecx);
L_f2a870: /* f2a870: call dword ptr [0xf37084] */
  { uint32_t t = R32((uint32_t)(0xf37084u)); esp -= 4; W32(esp, 0xf2a876u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a876: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* f2a879: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a87b: je 0xf2a939 */
  if (zf) goto L_f2a939;
L_f2a881: /* f2a881: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a886: jne 0xf2a939 */
  if (!zf) goto L_f2a939;
L_f2a88c: /* f2a88c: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f2a88f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a891: je 0xf2a91e */
  if (zf) goto L_f2a91e;
L_f2a897: /* f2a897: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* f2a89a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a89d: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* f2a8a0: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2a8a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8a4: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* f2a8a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a8aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8ab: call dword ptr [0xf37170] */
  { uint32_t t = R32((uint32_t)(0xf37170u)); esp -= 4; W32(esp, 0xf2a8b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8b1: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* f2a8b4: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2a8b7: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* f2a8ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8be: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* f2a8c1: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* f2a8c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8c7: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* f2a8ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8cc: call dword ptr [0xf370b0] */
  { uint32_t t = R32((uint32_t)(0xf370b0u)); esp -= 4; W32(esp, 0xf2a8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8d2: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* f2a8d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a8d8: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* f2a8db: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a8de: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8e2: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2a8e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a8e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8e9: call dword ptr [0xf37094] */
  { uint32_t t = R32((uint32_t)(0xf37094u)); esp -= 4; W32(esp, 0xf2a8efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8ef: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2a8f2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* f2a8f5: mov edx, dword ptr [0xf385f0] */
  edx = R32((uint32_t)(0xf385f0u));
/* f2a8fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8ff: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f2a900: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a902: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a903: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f2a905: call dword ptr [0xf385f8] */
  esp -= 4; W32(esp, 0xf2a90bu); SPILL(); f_4e1573(); if (g_unwind) return; /* Core!?RequestChunks@FFileStream@@QAEXHHPAX@Z */ RELOAD();
/* f2a90b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* f2a90e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f2a90f: and eax, 0x80000003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f2a914: jns 0xf2a91b */
  if (!sf) goto L_f2a91b;
L_f2a916: /* f2a916: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f2a917: or eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f2a91a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_f2a91b: /* f2a91b: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
L_f2a91e: /* f2a91e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a920: jne 0xf2a939 */
  if (!zf) goto L_f2a939;
L_f2a922: /* f2a922: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* f2a925: mov edx, dword ptr [0xf385f0] */
  edx = R32((uint32_t)(0xf385f0u));
/* f2a92b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f2a92c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2a92d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a92e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f2a930: call dword ptr [0xf385ec] */
  esp -= 4; W32(esp, 0xf2a936u); SPILL(); f_4e3f6c(); if (g_unwind) return; /* Core!?DestroyStream@FFileStream@@QAEXHH@Z */ RELOAD();
/* f2a936: mov dword ptr [edi + 0x28], ebx */
  W32((uint32_t)(edi + 0x28u), ebx);
L_f2a939: /* f2a939: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2a93c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a93e: je 0xf2a95b */
  if (zf) goto L_f2a95b;
L_f2a940: /* f2a940: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a943: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a946: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2a94a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a94b: call dword ptr [0xf37128] */
  { uint32_t t = R32((uint32_t)(0xf37128u)); esp -= 4; W32(esp, 0xf2a951u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a951: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a954: mov dword ptr [edi + 0x2c], 0 */
  W32((uint32_t)(edi + 0x2cu), 0x0u);
L_f2a95b: /* f2a95b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a95e: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* f2a964: mov edx, dword ptr [0xf38720] */
  edx = R32((uint32_t)(0xf38720u));
/* f2a96a: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* f2a96d: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* f2a970: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f2a977: jmp 0xf2a9c4 */
  goto L_f2a9c4;
L_f2a9b2: /* f2a9b2: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2a9b8: mov eax, dword ptr [eax + 0x104] */
  eax = R32((uint32_t)(eax + 0x104u));
/* f2a9be: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2a9c1: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
L_f2a9c4: /* f2a9c4: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2a9c6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a9c9: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* f2a9d0: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* f2a9d7: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* f2a9de: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2a9e1: fld dword ptr [eax + esi + 0x34] */
  { double v = F32((uint32_t)(eax + esi + 0x34u)); FPUSH(v); }
/* f2a9e5: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2a9e8: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2a9eb: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* f2a9ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a9f0: je 0xf2ab64 */
  if (zf) goto L_f2ab64;
L_f2a9f6: /* f2a9f6: test byte ptr [edx + 0x44], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x44u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a9fa: jne 0xf2ab64 */
  if (!zf) goto L_f2ab64;
L_f2aa00: /* f2aa00: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2aa05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2aa07: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2aa0a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* f2aa0c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f2aa0f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* f2aa12: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2aa15: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2aa18: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aa1b: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aa1e: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* f2aa21: test byte ptr [eax + 0x44], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2aa25: jne 0xf2aa94 */
  if (!zf) goto L_f2aa94;
L_f2aa27: /* f2aa27: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2aa2a: fld dword ptr [eax + 0x190] */
  { double v = F32((uint32_t)(eax + 0x190u)); FPUSH(v); }
/* f2aa30: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2aa35: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* f2aa38: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* f2aa3b: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* f2aa3e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2aa41: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* f2aa43: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* f2aa46: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* f2aa4c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa52: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2aa55: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa5b: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* f2aa61: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa67: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* f2aa6d: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* f2aa73: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f2aa76: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* f2aa7c: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* f2aa82: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f2aa85: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* f2aa8b: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* f2aa91: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
L_f2aa94: /* f2aa94: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aa97: mov al, byte ptr [edx + esi + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi + 0x44u))) & 0xffu);
/* f2aa9b: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2aa9d: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2aa9f: je 0xf2ab10 */
  if (zf) goto L_f2ab10;
L_f2aaa1: /* f2aaa1: mov eax, dword ptr [ecx + 0xe0] */
  eax = R32((uint32_t)(ecx + 0xe0u));
/* f2aaa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2aaa9: jne 0xf2ab10 */
  if (!zf) goto L_f2ab10;
L_f2aaab: /* f2aaab: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2aaae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2aab0: movzx ecx, byte ptr [eax + 0x2c9] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2c9u)));
/* f2aab7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f2aaba: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2aabd: fmul dword ptr [0xf31efc] */
  ST0 = ST0 * (F32((uint32_t)(0xf31efcu)));
/* f2aac3: fcom dword ptr [0xf31da0] */
  fpu_com(ST0, F32((uint32_t)(0xf31da0u)));
/* f2aac9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2aacb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2aace: jp 0xf2aad9 */
  if (pf) goto L_f2aad9;
L_f2aad0: /* f2aad0: mov dword ptr [ebp - 0x60], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f000000u);
/* f2aad7: jmp 0xf2aaf2 */
  goto L_f2aaf2;
L_f2aad9: /* f2aad9: fcom dword ptr [0xf31118] */
  fpu_com(ST0, F32((uint32_t)(0xf31118u)));
/* f2aadf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2aae1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2aae4: jp 0xf2aaeb */
  if (pf) goto L_f2aaeb;
L_f2aae6: /* f2aae6: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* f2aae9: jmp 0xf2aaf4 */
  goto L_f2aaf4;
L_f2aaeb: /* f2aaeb: mov dword ptr [ebp - 0x60], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x40000000u);
L_f2aaf2: /* f2aaf2: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2aaf4: /* f2aaf4: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* f2aaf7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* f2aafa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aafb: push 0x1003 */
  { uint32_t v = 0x1003u; esp -= 4; W32(esp, v); }
/* f2ab00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ab01: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2ab07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ab07: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* f2ab0a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab0d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2ab10: /* f2ab10: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2ab13: mov eax, dword ptr [edx + esi + 0x48] */
  eax = R32((uint32_t)(edx + esi + 0x48u));
/* f2ab17: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2ab19: and al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f2ab1b: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f2ab1d: jne 0xf2ab64 */
  if (!zf) goto L_f2ab64;
L_f2ab1f: /* f2ab1f: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* f2ab25: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ab27: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f2ab2a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f2ab2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ab2d: mov ecx, edx */
  ecx = edx;
/* f2ab2f: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf2ab35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ab35: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2ab38: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab3b: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* f2ab41: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2ab44: fst dword ptr [edx + esi + 0x34] */
  WF32((uint32_t)(edx + esi + 0x34u), ST0);
/* f2ab48: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab4b: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2ab4e: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2ab51: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2ab54: mov bl, byte ptr [eax + 0x28] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x28u))) & 0xffu);
/* f2ab57: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ab59: je 0xf2ab64 */
  if (zf) goto L_f2ab64;
L_f2ab5b: /* f2ab5b: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* f2ab5e: fmul dword ptr [0xf31e7c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31e7cu)));
L_f2ab64: /* f2ab64: cmp dword ptr [edx + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2ab68: jne 0xf2abad */
  if (!zf) goto L_f2abad;
L_f2ab6a: /* f2ab6a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2ab6d: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2ab73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ab75: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ab78: jp 0xf2ab86 */
  if (pf) goto L_f2ab86;
L_f2ab7a: /* f2ab7a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2ab7d: fadd dword ptr [edx + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x3cu)));
/* f2ab80: fstp dword ptr [edx + 0x3c] */
  WF32((uint32_t)(edx + 0x3cu), ST0); FPOP();
/* f2ab83: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2ab86: /* f2ab86: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2ab89: fld dword ptr [edx + esi + 0x3c] */
  { double v = F32((uint32_t)(edx + esi + 0x3cu)); FPUSH(v); }
/* f2ab8d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2ab8f: fcomp dword ptr [edx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x38u)));
  FPOP();
/* f2ab92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ab94: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ab97: jne 0xf2aba5 */
  if (!zf) goto L_f2aba5;
L_f2ab99: /* f2ab99: mov dword ptr [edx + 0x40], 0 */
  W32((uint32_t)(edx + 0x40u), 0x0u);
/* f2aba0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aba3: jmp 0xf2abad */
  goto L_f2abad;
L_f2aba5: /* f2aba5: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* f2aba8: fdiv dword ptr [edx + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x38u)));
/* f2abab: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_f2abad: /* f2abad: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2abb0: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2abb3: cmp dword ptr [edx + 0x40], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x40u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2abb7: jne 0xf2ac32 */
  if (!zf) goto L_f2ac32;
L_f2abb9: /* f2abb9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2abbc: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2abc2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2abc4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2abc7: jp 0xf2abd5 */
  if (pf) goto L_f2abd5;
L_f2abc9: /* f2abc9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2abcc: fadd dword ptr [edx + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x3cu)));
/* f2abcf: fstp dword ptr [edx + 0x3c] */
  WF32((uint32_t)(edx + 0x3cu), ST0); FPOP();
/* f2abd2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2abd5: /* f2abd5: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2abd8: fld dword ptr [edx + esi + 0x3c] */
  { double v = F32((uint32_t)(edx + esi + 0x3cu)); FPUSH(v); }
/* f2abdc: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2abde: fcomp dword ptr [edx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x38u)));
  FPOP();
/* f2abe1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2abe3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2abe6: jne 0xf2ac24 */
  if (!zf) goto L_f2ac24;
L_f2abe8: /* f2abe8: mov al, byte ptr [edx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x44u))) & 0xffu);
/* f2abeb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2abed: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2abef: je 0xf2ac0a */
  if (zf) goto L_f2ac0a;
L_f2abf1: /* f2abf1: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f2abf3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2abf5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2abf6: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf2abf9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2abf9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2abfc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2abff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2ac00: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2ac03: mov esi, ecx */
  esi = ecx;
/* f2ac05: jmp 0xf2a780 */
  goto L_f2a780;
L_f2ac0a: /* f2ac0a: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2ac0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2ac0e: call 0xf2116d */
  esp -= 4; W32(esp, 0xf2ac13u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f2ac13: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2ac16: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ac19: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2ac1a: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2ac1d: mov esi, ecx */
  esi = ecx;
/* f2ac1f: jmp 0xf2a780 */
  goto L_f2a780;
L_f2ac24: /* f2ac24: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* f2ac27: fdiv dword ptr [edx + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x38u)));
/* f2ac2a: fsubr dword ptr [0xf3112c] */
  ST0 = (F32((uint32_t)(0xf3112cu))) - ST0;
/* f2ac30: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_f2ac32: /* f2ac32: fcom dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
/* f2ac38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ac3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ac3d: jp 0xf2ac48 */
  if (pf) goto L_f2ac48;
L_f2ac3f: /* f2ac3f: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f2ac46: jmp 0xf2ac61 */
  goto L_f2ac61;
L_f2ac48: /* f2ac48: fcom dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
/* f2ac4e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ac50: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ac53: jp 0xf2ac5a */
  if (pf) goto L_f2ac5a;
L_f2ac55: /* f2ac55: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* f2ac58: jmp 0xf2ac63 */
  goto L_f2ac63;
L_f2ac5a: /* f2ac5a: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
L_f2ac61: /* f2ac61: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2ac63: /* f2ac63: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* f2ac66: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* f2ac69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ac6a: push 0x100a */
  { uint32_t v = 0x100au; esp -= 4; W32(esp, v); }
/* f2ac6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ac70: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2ac76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ac76: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ac79: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2ac7c: mov dl, byte ptr [eax + esi + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0x44u))) & 0xffu);
/* f2ac80: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2ac82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2ac85: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ac88: jne 0xf2aee9 */
  if (!zf) goto L_f2aee9;
L_f2ac8e: /* f2ac8e: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* f2ac91: mov eax, dword ptr [ecx + 0xf4] */
  eax = R32((uint32_t)(ecx + 0xf4u));
/* f2ac97: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2ac9d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f2aca0: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2aca3: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2aca6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2aca8: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f2acaa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2acad: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2acb0: mov eax, dword ptr [ecx + esi + 8] */
  eax = R32((uint32_t)(ecx + esi + 0x8u));
/* f2acb4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2acb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2acb8: je 0xf2acc3 */
  if (zf) goto L_f2acc3;
L_f2acba: /* f2acba: movzx edx, byte ptr [eax + 0x2ca] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2cau)));
/* f2acc1: jmp 0xf2acc5 */
  goto L_f2acc5;
L_f2acc3: /* f2acc3: xor edx, edx */
  edx = 0;
L_f2acc5: /* f2acc5: mov edi, dword ptr [ebp - 0x9c] */
  edi = R32((uint32_t)(ebp + 0xffffff64u));
/* f2accb: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* f2accd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2acce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2accf: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2acd2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2acd5: mov edx, esp */
  edx = esp;
/* f2acd7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f2acd9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2acdc: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f2acdf: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2ace2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2ace5: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2ace8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2acea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2aced: mov edx, esp */
  edx = esp;
/* f2acef: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f2acf1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f2acf4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2acf7: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f2acfa: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f2acfd: mov ecx, edi */
  ecx = edi;
/* f2acff: call dword ptr [ebx + 0xf8] */
  { uint32_t t = R32((uint32_t)(ebx + 0xf8u)); esp -= 4; W32(esp, 0xf2ad05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ad05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2ad07: jne 0xf2ad91 */
  if (!zf) goto L_f2ad91;
L_f2ad0d: /* f2ad0d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad10: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2ad13: lea ecx, [edx + esi + 0xc] */
  ecx = (uint32_t)(edx + esi + 0xcu);
/* f2ad17: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* f2ad19: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2ad1c: mov edx, esp */
  edx = esp;
/* f2ad1e: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* f2ad20: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* f2ad23: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2ad26: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* f2ad29: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f2ad2c: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* f2ad2f: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* f2ad32: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* f2ad38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ad39: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* f2ad3f: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* f2ad42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ad43: call dword ptr [0xf3872c] */
  esp -= 4; W32(esp, 0xf2ad49u); SPILL(); f_6c9192(); if (g_unwind) return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */ RELOAD();
/* f2ad49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad4c: movzx edx, byte ptr [ecx + 0x6c] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x6cu)));
/* f2ad50: movzx ecx, byte ptr [ebp - 0x70] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffff90u)));
/* f2ad54: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f2ad56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ad57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ad58: mov ecx, edi */
  ecx = edi;
/* f2ad5a: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0xf2ad60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ad60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad63: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2ad66: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2ad69: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f2ad6c: fst dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0);
/* f2ad70: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad73: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* f2ad79: fmul dword ptr [0xf31d9c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d9cu)));
/* f2ad7f: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f2ad84: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2ad87: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* f2ad8a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f2ad8d: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2ad8f: jmp 0xf2ad9e */
  goto L_f2ad9e;
L_f2ad91: /* f2ad91: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad94: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ad97: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2ad9a: fstp dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0); FPOP();
L_f2ad9e: /* f2ad9e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ada1: mov edx, dword ptr [ecx + 0xf4] */
  edx = R32((uint32_t)(ecx + 0xf4u));
/* f2ada7: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f2adac: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2adaf: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* f2adb2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2adb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2adb6: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2adb9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2adbb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2adbd: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f2adc0: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* f2adc3: fld dword ptr [edx + esi + 0x28] */
  { double v = F32((uint32_t)(edx + esi + 0x28u)); FPUSH(v); }
/* f2adc7: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* f2adca: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* f2adcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2adcf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2add2: jnp 0xf2adf9 */
  if (!pf) goto L_f2adf9;
L_f2add4: /* f2add4: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2add7: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2adda: mov edx, dword ptr [eax + 0x138] */
  edx = R32((uint32_t)(eax + 0x138u));
/* f2ade0: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* f2ade3: mov eax, dword ptr [eax + 0x13c] */
  eax = R32((uint32_t)(eax + 0x13cu));
/* f2ade9: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* f2adec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2adef: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2adf2: fstp dword ptr [edx + esi + 0x28] */
  WF32((uint32_t)(edx + esi + 0x28u), ST0); FPOP();
/* f2adf6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_f2adf9: /* f2adf9: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* f2adfc: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* f2adff: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2ae05: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* f2ae08: fsub qword ptr [ecx + 0x2c] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x2cu)));
/* f2ae0b: fcom qword ptr [0xf31e70] */
  fpu_com(ST0, F64((uint32_t)(0xf31e70u)));
/* f2ae11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae13: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ae16: jp 0xf2ae28 */
  if (pf) goto L_f2ae28;
L_f2ae18: /* f2ae18: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae1b: fsub dword ptr [ecx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x24u)));
/* f2ae1e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* f2ae20: fadd dword ptr [ecx + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x24u)));
/* f2ae23: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f2ae26: jmp 0xf2ae33 */
  goto L_f2ae33;
L_f2ae28: /* f2ae28: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2ae2b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ae2d: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* f2ae30: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_f2ae33: /* f2ae33: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae36: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2ae3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae3e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae41: je 0xf2ae4a */
  if (zf) goto L_f2ae4a;
L_f2ae43: /* f2ae43: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
L_f2ae4a: /* f2ae4a: mov ebx, dword ptr [0xf37124] */
  ebx = R32((uint32_t)(0xf37124u));
/* f2ae50: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae53: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae55: jne 0xf2ae70 */
  if (!zf) goto L_f2ae70;
L_f2ae57: /* f2ae57: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2ae5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ae5e: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* f2ae61: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2ae65: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2ae68: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f2ae6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ae6e: jmp 0xf2aedd */
  goto L_f2aedd;
L_f2ae70: /* f2ae70: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* f2ae73: fdiv dword ptr [esi + eax + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esi + eax + 0x1cu)));
/* f2ae77: fcom dword ptr [0xf31d1c] */
  fpu_com(ST0, F32((uint32_t)(0xf31d1cu)));
/* f2ae7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae7f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae82: je 0xf2ae8c */
  if (zf) goto L_f2ae8c;
L_f2ae84: /* f2ae84: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ae86: fld dword ptr [0xf31d1c] */
  { double v = F32((uint32_t)(0xf31d1cu)); FPUSH(v); }
L_f2ae8c: /* f2ae8c: fldln2  */
  FPUSH(0.693147180559945309417);
/* f2ae8e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f2ae90: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
/* f2ae92: fmul qword ptr [0xf31d10] */
  ST0 = ST0 * (F64((uint32_t)(0xf31d10u)));
/* f2ae98: call 0xf2bb70 */
  esp -= 4; W32(esp, 0xf2ae9du); SPILL(); f_f2bb70(); if (g_unwind) return; RELOAD();
/* f2ae9d: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* f2aea3: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* f2aea6: mov eax, dword ptr [esi + edx + 4] */
  eax = R32((uint32_t)(esi + edx + 0x4u));
/* f2aeaa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2aeac: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* f2aeb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aeb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aeb4: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* f2aeb6: push 0xf3114c */
  { uint32_t v = 0xf3114cu; esp -= 4; W32(esp, v); }
/* f2aebb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2aebdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2aebd: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2aec0: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aec6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2aec9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aeca: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aecd: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aed0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2aed3: mov eax, dword ptr [edx + esi + 4] */
  eax = R32((uint32_t)(edx + esi + 0x4u));
/* f2aed7: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f2aedc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_f2aedd: /* f2aedd: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2aee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2aee3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aee6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2aee9: /* f2aee9: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aeec: mov eax, dword ptr [edx + esi + 0x44] */
  eax = R32((uint32_t)(edx + esi + 0x44u));
/* f2aef0: lea edi, [edx + esi] */
  edi = (uint32_t)(edx + esi);
/* f2aef3: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* f2aef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aef7: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2aefa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2aefb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aefc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2aeff: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* f2af02: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* f2af04: mov eax, esp */
  eax = esp;
/* f2af06: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f2af08: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* f2af0b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f2af0e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f2af11: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f2af14: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f2af17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2af18: call 0xf21037 */
  esp -= 4; W32(esp, 0xf2af1du); SPILL(); f_f21037(); if (g_unwind) return; RELOAD();
/* f2af1d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2af20: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2af23: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* f2af26: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2af29: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2af2c: test byte ptr [esi + edx + 0x44], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edx + 0x44u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2af31: jne 0xf2b034 */
  if (!zf) goto L_f2b034;
L_f2af37: /* f2af37: mov eax, edx */
  eax = edx;
/* f2af39: fld dword ptr [esi + eax + 0x14] */
  { double v = F32((uint32_t)(esi + eax + 0x14u)); FPUSH(v); }
/* f2af3d: lea eax, [esi + eax + 0xc] */
  eax = (uint32_t)(esi + eax + 0xcu);
/* f2af41: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f2af4a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* f2af4d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af53: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* f2af55: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af5b: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* f2af61: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* f2af67: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* f2af6d: call dword ptr [0xf38634] */
  esp -= 4; W32(esp, 0xf2af73u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* f2af73: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2af76: fcomp dword ptr [0xf31d04] */
  fpu_com(ST0, F32((uint32_t)(0xf31d04u)));
  FPOP();
/* f2af7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2af7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2af81: jne 0xf2afbe */
  if (!zf) goto L_f2afbe;
L_f2af83: /* f2af83: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* f2af8d: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* f2af93: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* f2af9d: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* f2afa3: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* f2afad: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* f2afb3: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* f2afb6: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f2afb9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* f2afbc: jmp 0xf2afe2 */
  goto L_f2afe2;
L_f2afbe: /* f2afbe: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* f2afc1: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afc7: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* f2afca: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* f2afcd: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afd3: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* f2afd6: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* f2afd9: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afdf: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
L_f2afe2: /* f2afe2: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* f2afe8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2afeb: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2aff1: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* f2aff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aff8: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2affd: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* f2b003: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2b006: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* f2b00a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b00b: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2b011u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b011: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b014: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2b017: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b01a: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* f2b01d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b01e: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2b022: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f2b027: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b028: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2b02eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b02e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b031: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2b034: /* f2b034: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2b037: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2b038: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2b03b: mov esi, ecx */
  esi = ecx;
/* f2b03d: jmp 0xf2a780 */
  goto L_f2a780;
L_f2b042: /* f2b042: mov ebx, dword ptr [0xf38638] */
  ebx = R32((uint32_t)(0xf38638u));
/* f2b048: mov dword ptr [ebp - 0x18], 2 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x2u);
/* f2b04f: mov edi, 0xc */
  edi = 0xcu;
/* f2b054: lea esi, [ebp - 0xc4] */
  esi = (uint32_t)(ebp + 0xffffff3cu);
/* f2b05a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f2b060: /* f2b060: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* f2b063: js 0xf2b070 */
  if (sf) goto L_f2b070;
L_f2b065: /* f2b065: mov ecx, esi */
  ecx = esi;
/* f2b067: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2b069u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b069: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b06c: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f2b06e: jmp 0xf2b060 */
  goto L_f2b060;
L_f2b070: /* f2b070: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* f2b073: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* f2b076: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* f2b079: fchs  */
  ST0 = -ST0;
/* f2b07b: mov dword ptr [ebp - 0xc4], ecx */
  W32((uint32_t)(ebp + 0xffffff3cu), ecx);
/* f2b081: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* f2b084: mov dword ptr [ebp - 0xc0], edx */
  W32((uint32_t)(ebp + 0xffffff40u), edx);
/* f2b08a: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* f2b08d: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* f2b093: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* f2b099: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* f2b09c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* f2b09f: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* f2b0a5: fchs  */
  ST0 = -ST0;
/* f2b0a7: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* f2b0aa: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* f2b0b0: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* f2b0b6: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* f2b0bc: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* f2b0c6: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* f2b0cc: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* f2b0cf: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* f2b0d9: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* f2b0df: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* f2b0e2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2b0e5: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2b0e8: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* f2b0f2: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* f2b0f8: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* f2b0fb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f2b0fd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2b100: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f2b103: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2b106: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f2b109: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f2b10c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b112: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* f2b115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b116: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2b11b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f2b11e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f2b121: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b127: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f2b12a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f2b12d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b133: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2b139: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f2b13c: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b142u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b142: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b145: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* f2b14b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b14c: push 0x100f */
  { uint32_t v = 0x100fu; esp -= 4; W32(esp, v); }
/* f2b151: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b157u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b157: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b15a: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* f2b15d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b15e: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f2b163: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b169: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b16c: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* f2b16f: mov edx, dword ptr [eax + 0x394] */
  edx = R32((uint32_t)(eax + 0x394u));
/* f2b175: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b178: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b179: call 0xf210f5 */
  esp -= 4; W32(esp, 0xf2b17eu); SPILL(); f_f210f5(); if (g_unwind) return; RELOAD();
/* f2b17e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b181: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2b184: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2b18a: lea esi, [ecx + 0x3c] */
  esi = (uint32_t)(ecx + 0x3cu);
/* f2b18d: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* f2b18f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2b191: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2b194: jp 0xf2b1aa */
  if (pf) goto L_f2b1aa;
L_f2b196: /* f2b196: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* f2b19c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f2b19e: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* f2b1a4: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* f2b1a7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2b1aa: /* f2b1aa: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2b1ad: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2b1b3: lea esi, [ecx + 0x3c] */
  esi = (uint32_t)(ecx + 0x3cu);
/* f2b1b6: fsub qword ptr [esi] */
  ST0 = ST0 - (F64((uint32_t)(esi)));
/* f2b1b8: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* f2b1be: fmul dword ptr [0xf31e68] */
  ST0 = ST0 * (F32((uint32_t)(0xf31e68u)));
/* f2b1c4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f2b1c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2b1c8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2b1cb: jp 0xf2b207 */
  if (pf) goto L_f2b207;
L_f2b1cd: /* f2b1cd: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* f2b1d3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f2b1d5: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* f2b1db: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* f2b1de: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b1e1: mov eax, dword ptr [edx + 0xa4] */
  eax = R32((uint32_t)(edx + 0xa4u));
/* f2b1e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b1e8: call dword ptr [0xf370b4] */
  { uint32_t t = R32((uint32_t)(0xf370b4u)); esp -= 4; W32(esp, 0xf2b1eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b1ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b1f1: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* f2b1f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b1fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b1fb: call dword ptr [0xf370a8] */
  { uint32_t t = R32((uint32_t)(0xf370a8u)); esp -= 4; W32(esp, 0xf2b201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b201: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b204: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2b207: /* f2b207: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* f2b20d: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2b213: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2b216: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2b219: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2b21b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2b21d: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2b220: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2b222: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2b224: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f2b227: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2b228: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2b229: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2b230: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2b231: mov esp, ebp */
  esp = ebp;
/* f2b233: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2b234: ret 4 */
  esp += 8; SPILL(); return;
}
