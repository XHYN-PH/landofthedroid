#include "recomp.h"
#include "rec_mod.h"

void f_5147c0(void) {
  LOAD_REGS();
L_5147c0: /* 5147c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5147c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5147c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5147c3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 5147c7: xor ebx, ebx */
  ebx = 0;
/* 5147c9: mov dword ptr [0x5afecc], ebx */
  W32((uint32_t)(0x5afeccu), ebx);
/* 5147cf: mov dword ptr [0x5afec4], ebx */
  W32((uint32_t)(0x5afec4u), ebx);
/* 5147d5: mov dword ptr [0x5afed0], ebx */
  W32((uint32_t)(0x5afed0u), ebx);
/* 5147db: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5147de: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5147e1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5147e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5147e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5147e6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5147e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5147e8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5147eb: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5147f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5147f2: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 5147f8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5147fa: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 5147ff: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 514805: mov ebp, eax */
  ebp = eax;
/* 514807: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51480b: je 0x51481d */
  if (zf) goto L_51481d;
L_51480d: /* 51480d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51480f: je 0x51481d */
  if (zf) goto L_51481d;
L_514811: /* 514811: test byte ptr [eax + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 514815: je 0x51481d */
  if (zf) goto L_51481d;
L_514817: /* 514817: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 514819: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51481a: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51481du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51481d: /* 51481d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 514820: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 514823: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 514826: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 514827: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51482a: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51482e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51482f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514830: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514837: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 514839: je 0x51485a */
  if (zf) goto L_51485a;
L_51483b: /* 51483b: cmp dword ptr [esp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51483f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 514841: je 0x514851 */
  if (zf) goto L_514851;
L_514843: /* 514843: mov ecx, dword ptr [ebp + 0x6c] */
  ecx = R32((uint32_t)(ebp + 0x6cu));
/* 514846: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 514848: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 51484a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51484b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51484c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51484d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51484e: ret 8 */
  esp += 12; SPILL(); return;
L_514851: /* 514851: mov edx, dword ptr [ebp + 0x6c] */
  edx = R32((uint32_t)(ebp + 0x6cu));
/* 514854: not edx */
  edx = ~edx;
/* 514856: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 514858: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_51485a: /* 51485a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51485b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51485c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51485d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51485e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5148a0(void) {
  LOAD_REGS();
L_5148a0: /* 5148a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5148a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5148a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5148a5: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 5148a9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 5148ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5148ae: xor edi, edi */
  edi = 0;
/* 5148b0: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 5148b4: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 5148b7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5148ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5148bb: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 5148be: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 5148c2: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 5148c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5148c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5148c8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 5148cc: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5148d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5148d3: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5148d7: je 0x51490d */
  if (zf) goto L_51490d;
L_5148d9: /* 5148d9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 5148dd: add dword ptr [eax + 0xc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 5148e1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 5148e5: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 5148e8: movzx esi, byte ptr [eax] */
  esi = (uint32_t)(R8((uint32_t)(eax)));
/* 5148eb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5148ef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5148f0: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 5148f3: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 5148f7: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 5148fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5148fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5148fd: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514904u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514904: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 514905: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514906: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 514907: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51490a: ret 8 */
  esp += 12; SPILL(); return;
L_51490d: /* 51490d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 514911: push 0x5a60a4 */
  { uint32_t v = 0x5a60a4u; esp -= 4; W32(esp, v); }
/* 514916: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514917: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51491cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51491c: mov ecx, dword ptr [0x5b215c] */
  ecx = R32((uint32_t)(0x5b215cu));
/* 514922: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 514925: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 514927: je 0x51492e */
  if (zf) goto L_51492e;
L_514929: /* 514929: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51492b: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x51492eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51492e: /* 51492e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 514932: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 514935: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 514938: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51493b: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 51493e: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 514942: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 514945: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 514947: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 514948: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51494b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 51494f: add dword ptr [eax + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 514952: cmp dword ptr [esp + 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 514956: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 51495c: mov dword ptr [0x5afec4], edi */
  W32((uint32_t)(0x5afec4u), edi);
/* 514962: mov dword ptr [0x5afed0], edi */
  W32((uint32_t)(0x5afed0u), edi);
/* 514968: je 0x514989 */
  if (zf) goto L_514989;
L_51496a: /* 51496a: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* 51496d: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 514971: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 514975: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 514979: xor eax, eax */
  eax = 0;
/* 51497b: mov ebx, ecx */
  ebx = ecx;
/* 51497d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 514980: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 514983: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 514985: mov ecx, ebx */
  ecx = ebx;
/* 514987: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_514989: /* 514989: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51498a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51498b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51498c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51498f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5149e0(void) {
  LOAD_REGS();
L_5149e0: /* 5149e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5149e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5149e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5149e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 5149e7: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 5149ea: mov esi, ecx */
  esi = ecx;
/* 5149ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 5149ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5149f0: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5149f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5149f4: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 5149f7: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 5149f9: mov ecx, esi */
  ecx = esi;
/* 5149fb: call 0x4e2aea */
  esp -= 4; W32(esp, 0x514a00u); SPILL(); f_4e2aea(); if (g_unwind) return; RELOAD();
/* 514a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514a01: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 514a05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514a06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 514a07: mov ecx, esi */
  ecx = esi;
/* 514a09: call dword ptr [ebx + 0x50] */
  { uint32_t t = R32((uint32_t)(ebx + 0x50u)); esp -= 4; W32(esp, 0x514a0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514a0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 514a0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514a0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 514a0f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514a30(void) {
  LOAD_REGS();
L_514a30: /* 514a30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 514a34: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 514a37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514a38: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 514a3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514a3b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 514a3f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 514a42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514a43: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 514a46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 514a48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514a49: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x514a4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514a4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514a4d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514a60(void) {
  LOAD_REGS();
L_514a60: /* 514a60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 514a61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514a62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 514a63: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 514a67: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 514a6a: mov esi, ecx */
  esi = ecx;
/* 514a6c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 514a6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 514a70: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514a73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514a74: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 514a77: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 514a79: mov ecx, esi */
  ecx = esi;
/* 514a7b: call 0x4e2aea */
  esp -= 4; W32(esp, 0x514a80u); SPILL(); f_4e2aea(); if (g_unwind) return; RELOAD();
/* 514a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514a81: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 514a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514a86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 514a87: mov ecx, esi */
  ecx = esi;
/* 514a89: call dword ptr [ebx + 0x50] */
  { uint32_t t = R32((uint32_t)(ebx + 0x50u)); esp -= 4; W32(esp, 0x514a8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514a8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 514a8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514a8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 514a8f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514ab0(void) {
  LOAD_REGS();
L_514ab0: /* 514ab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 514ab1: mov ebp, esp */
  ebp = esp;
/* 514ab3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 514ab5: push 0x557280 */
  { uint32_t v = 0x557280u; esp -= 4; W32(esp, v); }
/* 514aba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 514ac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514ac1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 514ac8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 514acb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 514acc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514acd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 514ace: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 514ad1: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 514ad4: mov ebx, ecx */
  ebx = ecx;
/* 514ad6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 514ad8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514adb: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 514ade: mov esi, dword ptr [ecx + 0x48] */
  esi = R32((uint32_t)(ecx + 0x48u));
/* 514ae1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 514ae3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514ae6: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 514ae8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 514aeb: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 514aee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 514af0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514af2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 514af5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 514afc: je 0x514b14 */
  if (zf) goto L_514b14;
L_514afe: /* 514afe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 514b00: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x514b03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514b03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514b05: je 0x514b41 */
  if (zf) goto L_514b41;
L_514b07: /* 514b07: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 514b0d: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_514b14: /* 514b14: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 514b17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 514b19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514b1a: mov ecx, ebx */
  ecx = ebx;
/* 514b1c: call 0x4e2aea */
  esp -= 4; W32(esp, 0x514b21u); SPILL(); f_4e2aea(); if (g_unwind) return; RELOAD();
/* 514b21: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 514b23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514b24: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 514b27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514b28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 514b29: mov ecx, ebx */
  ecx = ebx;
L_514b2b: /* 514b2b: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x514b2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514b2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 514b31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 514b32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514b33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 514b3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 514b3b: mov esp, ebp */
  esp = ebp;
/* 514b3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 514b3e: ret 8 */
  esp += 12; SPILL(); return;
L_514b41: /* 514b41: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 514b43: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514b45: je 0x514b14 */
  if (zf) goto L_514b14;
L_514b47: /* 514b47: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 514b4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 514b4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514b4d: call 0x4e2aea */
  esp -= 4; W32(esp, 0x514b52u); SPILL(); f_4e2aea(); if (g_unwind) return; RELOAD();
/* 514b52: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 514b54: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 514b56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514b57: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 514b5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514b5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 514b5c: jmp 0x514b2b */
  goto L_514b2b;
}

void f_514b5e(void) {
  LOAD_REGS();
L_514b5e: /* 514b5e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 514b61: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 514b66: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 514b69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 514b6a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 514b6d: call 0x554df6 */
  esp -= 4; W32(esp, 0x514b72u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_514b72(); return;
}

void f_514b72(void) {
  LOAD_REGS();
L_514b72: /* 514b72: push 0x56be84 */
  { uint32_t v = 0x56be84u; esp -= 4; W32(esp, v); }
/* 514b77: push 0x5a60d0 */
  { uint32_t v = 0x5a60d0u; esp -= 4; W32(esp, v); }
/* 514b7c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x514b81u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 514b81: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 514b84: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 514b87: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 514b8a: mov ebx, dword ptr [ecx + 0x48] */
  ebx = R32((uint32_t)(ecx + 0x48u));
/* 514b8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 514b90: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 514b92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514b93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 514b95: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x514b9au); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 514b9a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 514b9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514b9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 514ba0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x514ba5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 514ba5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514ba6: push 0x5a60d8 */
  { uint32_t v = 0x5a60d8u; esp -= 4; W32(esp, v); }
/* 514bab: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x514bb0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 514bb0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 514bb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 514bb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 514bb7: call 0x554df6 */
  esp -= 4; W32(esp, 0x514bbcu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_514bbc: guest_badaddr(0x514bbc); return;
}

void f_514c10(void) {
  LOAD_REGS();
L_514c10: /* 514c10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514c11: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 514c15: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 514c18: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 514c1a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 514c1d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 514c20: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 514c24: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 514c27: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 514c29: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 514c2b: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 514c2d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 514c2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514c30: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514c50(void) {
  LOAD_REGS();
L_514c50: /* 514c50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 514c51: mov ebp, esp */
  ebp = esp;
/* 514c53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 514c55: push 0x557290 */
  { uint32_t v = 0x557290u; esp -= 4; W32(esp, v); }
/* 514c5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 514c60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514c61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 514c68: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 514c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 514c6c: xor ebx, ebx */
  ebx = 0;
/* 514c6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514c6f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 514c72: mov dword ptr [0x5afecc], ebx */
  W32((uint32_t)(0x5afeccu), ebx);
/* 514c78: mov dword ptr [0x5afec4], ebx */
  W32((uint32_t)(0x5afec4u), ebx);
/* 514c7e: mov dword ptr [0x5afed0], ebx */
  W32((uint32_t)(0x5afed0u), ebx);
/* 514c84: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 514c87: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 514c8a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 514c8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 514c8e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 514c91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 514c92: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 514c93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514c94: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 514c97: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 514c9a: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514ca1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514ca1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 514ca4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 514ca7: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 514cad: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 514cb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 514cb1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 514cb4: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 514cb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514cb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514cb9: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514cc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514cc0: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 514cc2: je 0x514ccf */
  if (zf) goto L_514ccf;
L_514cc4: /* 514cc4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 514cc7: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 514cca: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 514ccd: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_514ccf: /* 514ccf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 514cd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 514cd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514cd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 514cdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 514cdc: mov esp, ebp */
  esp = ebp;
/* 514cde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 514cdf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514ce2(void) {
  LOAD_REGS();
L_514ce2: /* 514ce2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 514ce5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 514cea: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 514ced: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514cee: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 514cf1: call 0x554df6 */
  esp -= 4; W32(esp, 0x514cf6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_514cf6(); return;
}

void f_514cf6(void) {
  LOAD_REGS();
L_514cf6: /* 514cf6: push 0x56becc */
  { uint32_t v = 0x56beccu; esp -= 4; W32(esp, v); }
/* 514cfb: push 0x5a6130 */
  { uint32_t v = 0x5a6130u; esp -= 4; W32(esp, v); }
/* 514d00: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x514d05u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 514d05: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 514d08: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 514d0b: mov ebx, dword ptr [ecx + 0x48] */
  ebx = R32((uint32_t)(ecx + 0x48u));
/* 514d0e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 514d11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 514d14: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 514d16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 514d17: xor ebx, ebx */
  ebx = 0;
/* 514d19: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 514d1a: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x514d1fu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 514d1f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 514d22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514d23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 514d24: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x514d29u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 514d29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514d2a: push 0x5a6138 */
  { uint32_t v = 0x5a6138u; esp -= 4; W32(esp, v); }
/* 514d2f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x514d34u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 514d34: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 514d37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 514d38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 514d39: call 0x554df6 */
  esp -= 4; W32(esp, 0x514d3eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_514d3e: guest_badaddr(0x514d3e); return;
}

void f_514d80(void) {
  LOAD_REGS();
L_514d80: /* 514d80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 514d84: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 514d87: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 514d89: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514d8c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 514d8f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 514d93: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 514d95: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514db0(void) {
  LOAD_REGS();
L_514db0: /* 514db0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 514db4: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 514db7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 514db9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514dbc: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 514dbf: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 514dc3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 514dc5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514de0(void) {
  LOAD_REGS();
L_514de0: /* 514de0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 514de4: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 514de7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 514de9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514dec: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 514def: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 514df3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 514df5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514e10(void) {
  LOAD_REGS();
L_514e10: /* 514e10: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 514e14: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 514e17: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 514e19: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514e1c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 514e1f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 514e23: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 514e25: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514e40(void) {
  LOAD_REGS();
L_514e40: /* 514e40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514e41: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 514e45: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 514e48: mov byte ptr [esp + 3], 0 */
  W8((uint32_t)(esp + 0x3u), 0x0u);
/* 514e4d: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 514e50: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 514e51: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 514e54: lea ecx, [esp + 3] */
  ecx = (uint32_t)(esp + 0x3u);
/* 514e58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514e59: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 514e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514e5d: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514e64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514e64: movzx edx, byte ptr [esp + 3] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x3u)));
/* 514e69: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 514e6d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 514e6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 514e70: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514e90(void) {
  LOAD_REGS();
L_514e90: /* 514e90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514e91: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 514e95: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 514e98: mov byte ptr [esp + 3], 0 */
  W8((uint32_t)(esp + 0x3u), 0x0u);
/* 514e9d: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 514ea0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 514ea1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 514ea4: lea ecx, [esp + 3] */
  ecx = (uint32_t)(esp + 0x3u);
/* 514ea8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514ea9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 514eac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514ead: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514eb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514eb4: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 514eb8: xor edx, edx */
  edx = 0;
/* 514eba: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 514ebc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 514ec0: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 514ec3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 514ec5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 514ec6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514ee0(void) {
  LOAD_REGS();
L_514ee0: /* 514ee0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514ee1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 514ee5: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 514ee8: mov byte ptr [esp + 3], 0 */
  W8((uint32_t)(esp + 0x3u), 0x0u);
/* 514eed: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 514ef0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 514ef1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 514ef4: lea ecx, [esp + 3] */
  ecx = (uint32_t)(esp + 0x3u);
/* 514ef8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514ef9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 514efc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514efd: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514f04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514f04: movzx edx, byte ptr [esp + 3] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x3u)));
/* 514f09: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 514f0d: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 514f11: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 514f15: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 514f17: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 514f18: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514f30(void) {
  LOAD_REGS();
L_514f30: /* 514f30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514f31: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 514f35: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 514f38: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 514f40: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 514f43: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 514f44: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 514f47: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 514f4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514f4c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 514f4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514f50: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514f57: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 514f5b: mov al, byte ptr [esp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp))) & 0xffu);
/* 514f5f: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 514f61: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 514f62: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514f80(void) {
  LOAD_REGS();
L_514f80: /* 514f80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514f81: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 514f85: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 514f88: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 514f90: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 514f93: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 514f94: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 514f97: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 514f9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514f9c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 514f9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514fa0: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514fa7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514fa7: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 514fab: xor edx, edx */
  edx = 0;
/* 514fad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514faf: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 514fb3: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 514fb6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 514fb8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 514fb9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514fd0(void) {
  LOAD_REGS();
L_514fd0: /* 514fd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514fd1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 514fd5: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 514fd8: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 514fe0: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 514fe3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 514fe4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 514fe7: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 514feb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514fec: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 514fef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514ff0: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514ff7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514ff7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 514ffb: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 514fff: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 515001: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515002: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515020(void) {
  LOAD_REGS();
L_515020: /* 515020: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515021: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 515025: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 515028: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 515030: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 515033: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 515034: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 515037: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 51503b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51503c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51503f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515040: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515047u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515047: mov dl, byte ptr [esp] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp))) & 0xffu);
/* 51504b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51504f: and dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 515052: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 515054: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515055: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515070(void) {
  LOAD_REGS();
L_515070: /* 515070: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515071: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 515075: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 515078: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 515080: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 515083: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 515084: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 515087: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 51508b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51508c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51508f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515090: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515097u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515097: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 51509b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51509f: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5150a2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 5150a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5150a5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5150c0(void) {
  LOAD_REGS();
L_5150c0: /* 5150c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5150c1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5150c5: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 5150c8: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 5150d0: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 5150d3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 5150d4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 5150d7: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 5150db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5150dc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 5150df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5150e0: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5150e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5150e7: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 5150eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5150ef: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5150f2: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 5150f6: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 5150fa: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 5150fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5150fd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515110(void) {
  LOAD_REGS();
L_515110: /* 515110: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515111: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 515115: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 515118: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 515120: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 515123: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 515124: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515125: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 515128: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 515129: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51512d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51512e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 515131: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515132: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515139u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515139: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51513d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51513f: mov edi, 0x5a0da8 */
  edi = 0x5a0da8u;
/* 515144: jne 0x51514b */
  if (!zf) goto L_51514b;
L_515146: /* 515146: mov edi, 0x5a0e28 */
  edi = 0x5a0e28u;
L_51514b: /* 51514b: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 51514f: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 515151: je 0x51518d */
  if (zf) goto L_51518d;
L_515153: /* 515153: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 515157: je 0x515165 */
  if (zf) goto L_515165;
L_515159: /* 515159: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51515a: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x51515fu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 51515f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 515162: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515163: jmp 0x515167 */
  goto L_515167;
L_515165: /* 515165: xor eax, eax */
  eax = 0;
L_515167: /* 515167: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 515169: mov ecx, esi */
  ecx = esi;
/* 51516b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51516e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 515171: call 0x4e4502 */
  esp -= 4; W32(esp, 0x515176u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 515176: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 515179: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51517b: je 0x51518d */
  if (zf) goto L_51518d;
L_51517d: /* 51517d: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 515180: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 515182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 515183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 515184: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515185: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51518au); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51518a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51518d: /* 51518d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51518e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51518f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515190: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5151d0(void) {
  LOAD_REGS();
L_5151d0: /* 5151d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5151d1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5151d5: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 5151d8: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 5151e0: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 5151e3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 5151e4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 5151e7: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 5151eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5151ec: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 5151ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5151f0: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5151f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5151f7: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 5151fb: call 0x554f00 */
  esp -= 4; W32(esp, 0x515200u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 515200: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 515204: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 515206: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515207: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515220(void) {
  LOAD_REGS();
L_515220: /* 515220: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515221: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 515225: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 515228: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 515230: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 515233: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 515234: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 515237: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 51523b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51523c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51523f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515240: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515247u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515247: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 51524b: call 0x554f00 */
  esp -= 4; W32(esp, 0x515250u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 515250: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 515254: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 515256: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515257: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515270(void) {
  LOAD_REGS();
L_515270: /* 515270: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515271: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 515275: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 515278: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 515280: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 515283: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 515284: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 515287: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 51528b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51528c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51528f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515290: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515297u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515297: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 51529b: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 5152a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 5152a3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 5152a6: jnp 0x5152b7 */
  if (!pf) goto L_5152b7;
L_5152a8: /* 5152a8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 5152ac: mov eax, 1 */
  eax = 0x1u;
/* 5152b1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 5152b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5152b4: ret 8 */
  esp += 12; SPILL(); return;
L_5152b7: /* 5152b7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5152bb: xor eax, eax */
  eax = 0;
/* 5152bd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 5152bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5152c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5152f0(void) {
  LOAD_REGS();
L_5152f0: /* 5152f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5152f1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5152f5: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 5152f8: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 515300: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 515303: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 515304: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 515307: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 51530b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51530c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51530f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515310: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515317u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515317: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 51531b: xor edx, edx */
  edx = 0;
/* 51531d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51531f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 515323: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 515326: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 515328: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515329: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515340(void) {
  LOAD_REGS();
L_515340: /* 515340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515341: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 515345: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 515348: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 515350: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 515353: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 515354: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515355: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 515358: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 515359: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51535d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51535e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 515361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515362: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515369u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515369: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51536d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51536f: je 0x51537e */
  if (zf) goto L_51537e;
L_515371: /* 515371: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 515373: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 515375: call 0x4e2cde */
  esp -= 4; W32(esp, 0x51537au); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 51537a: mov edi, eax */
  edi = eax;
/* 51537c: jmp 0x515383 */
  goto L_515383;
L_51537e: /* 51537e: mov edi, 0x5a6208 */
  edi = 0x5a6208u;
L_515383: /* 515383: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 515387: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 515389: je 0x5153c5 */
  if (zf) goto L_5153c5;
L_51538b: /* 51538b: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 51538f: je 0x51539d */
  if (zf) goto L_51539d;
L_515391: /* 515391: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 515392: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x515397u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 515397: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51539a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51539b: jmp 0x51539f */
  goto L_51539f;
L_51539d: /* 51539d: xor eax, eax */
  eax = 0;
L_51539f: /* 51539f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5153a1: mov ecx, esi */
  ecx = esi;
/* 5153a3: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5153a6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 5153a9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5153aeu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5153ae: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5153b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5153b3: je 0x5153c5 */
  if (zf) goto L_5153c5;
L_5153b5: /* 5153b5: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 5153b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5153ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5153bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5153bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5153bd: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x5153c2u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 5153c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5153c5: /* 5153c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5153c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5153c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5153c8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515400(void) {
  LOAD_REGS();
L_515400: /* 515400: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515401: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 515405: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 515408: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 515410: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 515413: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 515414: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 515417: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 51541b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51541c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51541f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515420: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515427u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515427: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 51542b: xor edx, edx */
  edx = 0;
/* 51542d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51542f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 515433: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 515436: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 515438: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515439: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515450(void) {
  LOAD_REGS();
L_515450: /* 515450: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515452: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515456: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515459: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51545c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 515464: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515467: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515468: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51546b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51546f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515471: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515478u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515478: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51547b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51547c: mov eax, edx */
  eax = edx;
/* 51547e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515481: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515484: jne 0x515496 */
  if (!zf) goto L_515496;
L_515486: /* 515486: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515489: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51548b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51548c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51548d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515490: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515496u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515496: /* 515496: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51549a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 51549e: xor ecx, ecx */
  ecx = 0;
/* 5154a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5154a2: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 5154a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5154a6: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 5154a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5154a9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5154d0(void) {
  LOAD_REGS();
L_5154d0: /* 5154d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5154d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5154d2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5154d6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5154d9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5154dc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5154e4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5154e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5154e8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5154eb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5154ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5154f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5154f1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5154f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5154f8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5154fb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5154ff: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 515507: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51550a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51550b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51550e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51550f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515510: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515513: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51551au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51551a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51551d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51551e: mov eax, edx */
  eax = edx;
/* 515520: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515523: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515526: jne 0x515538 */
  if (!zf) goto L_515538;
L_515528: /* 515528: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51552b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51552d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51552e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51552f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515532: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515538u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515538: /* 515538: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51553c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 515540: xor edx, edx */
  edx = 0;
/* 515542: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515544: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 515547: xor eax, eax */
  eax = 0;
/* 515549: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51554b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51554f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 515552: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515553: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 515555: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 515557: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 515559: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51555a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51555c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51555d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515590(void) {
  LOAD_REGS();
L_515590: /* 515590: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515591: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515592: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515596: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515599: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51559c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5155a4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5155a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5155a8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5155ab: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5155af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5155b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5155b1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5155b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5155b8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5155bb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5155bf: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5155c7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5155ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5155cb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5155ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5155cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5155d0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5155d3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5155dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5155da: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5155dd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5155de: mov eax, edx */
  eax = edx;
/* 5155e0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5155e3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5155e6: jne 0x5155f8 */
  if (!zf) goto L_5155f8;
L_5155e8: /* 5155e8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5155eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5155ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5155ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5155ef: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5155f2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5155f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5155f8: /* 5155f8: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5155fc: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 515600: xor edx, edx */
  edx = 0;
/* 515602: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515604: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 515607: xor eax, eax */
  eax = 0;
/* 515609: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51560b: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 51560e: xor ecx, ecx */
  ecx = 0;
/* 515610: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515611: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 515613: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 515617: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 51561a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51561c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51561d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515650(void) {
  LOAD_REGS();
L_515650: /* 515650: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515651: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515652: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515656: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515659: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51565c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51565d: xor edi, edi */
  edi = 0;
/* 51565f: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 515663: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515666: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515667: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51566a: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51566e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51566f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515670: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515677u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515677: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51567a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 51567e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51567f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515682: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 515685: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 515688: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51568a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51568d: je 0x5156ce */
  if (zf) goto L_5156ce;
L_51568f: /* 51568f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 515693: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 515697: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51569a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51569b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51569e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51569f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5156a0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5156a3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5156aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5156aa: cmp dword ptr [esp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5156ae: je 0x5156bb */
  if (zf) goto L_5156bb;
L_5156b0: /* 5156b0: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5156b4: je 0x5156bb */
  if (zf) goto L_5156bb;
L_5156b6: /* 5156b6: mov edi, 1 */
  edi = 0x1u;
L_5156bb: /* 5156bb: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 5156bf: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 5156c1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5156c4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5156c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5156c6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5156c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5156ca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5156cb: ret 8 */
  esp += 12; SPILL(); return;
L_5156ce: /* 5156ce: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 5156d2: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 5156d4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5156d7: movzx ecx, cx */
  ecx = (uint32_t)((ecx & 0xffffu));
/* 5156da: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5156dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5156dd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5156e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5156e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5156e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515720(void) {
  LOAD_REGS();
L_515720: /* 515720: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515722: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515726: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515729: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51572c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 515734: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515737: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515738: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51573b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51573f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515741: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515748u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515748: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51574b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51574f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 515757: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51575a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51575b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51575e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51575f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515760: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515763: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51576au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51576a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51576d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51576e: mov eax, edx */
  eax = edx;
/* 515770: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515773: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515776: jne 0x515788 */
  if (!zf) goto L_515788;
L_515778: /* 515778: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51577b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51577d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51577e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51577f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515782: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515788u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515788: /* 515788: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51578c: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* 515790: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 515794: xor edx, edx */
  edx = 0;
/* 515796: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515798: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 51579b: xor eax, eax */
  eax = 0;
/* 51579d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51579f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 5157a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5157a3: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 5157a5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 5157a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5157a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5157e0(void) {
  LOAD_REGS();
L_5157e0: /* 5157e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5157e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5157e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5157e6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5157e9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5157ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5157ed: xor edi, edi */
  edi = 0;
/* 5157ef: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 5157f3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5157f6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5157f7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5157fa: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 5157fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5157ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515800: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515807u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515807: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51580a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 51580e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51580f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515812: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 515815: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 515818: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51581a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51581d: jne 0x51585e */
  if (!zf) goto L_51585e;
L_51581f: /* 51581f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 515823: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 515827: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51582a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51582b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51582e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51582f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515830: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515833: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51583au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51583a: cmp dword ptr [esp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51583e: jne 0x515846 */
  if (!zf) goto L_515846;
L_515840: /* 515840: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 515844: je 0x51584b */
  if (zf) goto L_51584b;
L_515846: /* 515846: mov edi, 1 */
  edi = 0x1u;
L_51584b: /* 51584b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51584f: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 515851: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515854: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515855: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 515856: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515859: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51585a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51585b: ret 8 */
  esp += 12; SPILL(); return;
L_51585e: /* 51585e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 515862: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 515868: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51586b: movzx ecx, cx */
  ecx = (uint32_t)((ecx & 0xffffu));
/* 51586e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 515870: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 515871: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515874: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515875: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515876: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5158b0(void) {
  LOAD_REGS();
L_5158b0: /* 5158b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5158b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5158b2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5158b6: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 5158c0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5158c3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5158c6: mov byte ptr [esp + 7], 0 */
  W8((uint32_t)(esp + 0x7u), 0x0u);
/* 5158cb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5158ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5158cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5158d0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5158d3: lea eax, [esp + 0xb] */
  eax = (uint32_t)(esp + 0xbu);
/* 5158d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5158d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5158d9: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5158e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5158e0: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 5158e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5158e8: je 0x5158f5 */
  if (zf) goto L_5158f5;
L_5158ea: /* 5158ea: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 5158ef: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5158f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5158f2: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x5158f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5158f5: /* 5158f5: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 5158fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5158fc: mov edi, eax */
  edi = eax;
/* 5158fe: jne 0x515904 */
  if (!zf) goto L_515904;
L_515900: /* 515900: lea edi, [esp + 0xb] */
  edi = (uint32_t)(esp + 0xbu);
L_515904: /* 515904: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515907: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51590b: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 515910: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515913: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515914: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515917: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515918: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515919: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51591c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515923: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 515926: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 515927: mov eax, edx */
  eax = edx;
/* 515929: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51592c: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51592f: jne 0x515941 */
  if (!zf) goto L_515941;
L_515931: /* 515931: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515934: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 515936: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515937: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515938: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51593b: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515941u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515941: /* 515941: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 515943: imul byte ptr [esp + 0x10] */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)(R8((uint32_t)(esp + 0x10u)));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* 515947: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51594b: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 51594d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51594e: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 515950: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515951: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515952: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515990(void) {
  LOAD_REGS();
L_515990: /* 515990: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515991: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 515992: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515993: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 515997: xor ebx, ebx */
  ebx = 0;
/* 515999: mov dword ptr [0x5afecc], ebx */
  W32((uint32_t)(0x5afeccu), ebx);
/* 51599f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5159a2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5159a5: mov byte ptr [esp + 0xb], bl */
  W8((uint32_t)(esp + 0xbu), (ebx & 0xffu));
/* 5159a9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5159ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5159ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5159ae: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5159b1: lea eax, [esp + 0xf] */
  eax = (uint32_t)(esp + 0xfu);
/* 5159b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5159b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5159b7: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5159beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5159be: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 5159c4: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5159c6: je 0x5159d3 */
  if (zf) goto L_5159d3;
L_5159c8: /* 5159c8: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 5159cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5159cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5159d0: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x5159d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5159d3: /* 5159d3: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 5159d9: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5159db: jne 0x5159e1 */
  if (!zf) goto L_5159e1;
L_5159dd: /* 5159dd: lea edi, [esp + 0xf] */
  edi = (uint32_t)(esp + 0xfu);
L_5159e1: /* 5159e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5159e4: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 5159e8: mov byte ptr [esp + 0x14], bl */
  W8((uint32_t)(esp + 0x14u), (ebx & 0xffu));
/* 5159ec: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5159ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5159f0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5159f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5159f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5159f5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5159f8: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5159ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5159ff: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 515a02: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 515a03: mov eax, edx */
  eax = edx;
/* 515a05: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515a08: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515a0b: jne 0x515a1c */
  if (!zf) goto L_515a1c;
L_515a0d: /* 515a0d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515a10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 515a11: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515a12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515a13: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515a16: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515a1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515a1c: /* 515a1c: mov cl, byte ptr [esp + 0x14] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 515a20: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515a22: je 0x515a3f */
  if (zf) goto L_515a3f;
L_515a24: /* 515a24: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 515a27: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 515a2a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 515a2b: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x515a2b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 515a2d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 515a31: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 515a33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 515a34: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 515a37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515a38: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 515a3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 515a3b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515a3c: ret 8 */
  esp += 12; SPILL(); return;
L_515a3f: /* 515a3f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 515a43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 515a44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515a45: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 515a47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 515a48: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515a49: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515a80(void) {
  LOAD_REGS();
L_515a80: /* 515a80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515a81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515a82: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515a86: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 515a90: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515a93: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515a96: mov byte ptr [esp + 7], 0 */
  W8((uint32_t)(esp + 0x7u), 0x0u);
/* 515a9b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515a9e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515a9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 515aa0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515aa3: lea eax, [esp + 0xb] */
  eax = (uint32_t)(esp + 0xbu);
/* 515aa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515aa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515aa9: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515ab0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515ab0: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 515ab6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515ab8: je 0x515ac5 */
  if (zf) goto L_515ac5;
L_515aba: /* 515aba: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 515abf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 515ac1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515ac2: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x515ac5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515ac5: /* 515ac5: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 515acb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515acd: jne 0x515ad3 */
  if (!zf) goto L_515ad3;
L_515acf: /* 515acf: lea edi, [esp + 0xb] */
  edi = (uint32_t)(esp + 0xbu);
L_515ad3: /* 515ad3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515ad6: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 515ada: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 515adf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515ae2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515ae3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515ae6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515ae7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515ae8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515aeb: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515af2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515af2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 515af5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 515af6: mov eax, edx */
  eax = edx;
/* 515af8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515afb: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515afe: jne 0x515b10 */
  if (!zf) goto L_515b10;
L_515b00: /* 515b00: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515b03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 515b05: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515b06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515b07: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515b0a: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515b10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515b10: /* 515b10: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 515b12: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 515b16: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 515b1a: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 515b1c: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 515b1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 515b1f: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 515b21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515b22: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515b23: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515b60(void) {
  LOAD_REGS();
L_515b60: /* 515b60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515b61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515b62: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515b66: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 515b70: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515b73: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515b76: mov byte ptr [esp + 7], 0 */
  W8((uint32_t)(esp + 0x7u), 0x0u);
/* 515b7b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515b7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515b7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 515b80: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515b83: lea eax, [esp + 0xb] */
  eax = (uint32_t)(esp + 0xbu);
/* 515b87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515b88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515b89: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515b90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515b90: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 515b96: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515b98: je 0x515ba5 */
  if (zf) goto L_515ba5;
L_515b9a: /* 515b9a: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 515b9f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 515ba1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515ba2: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x515ba5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515ba5: /* 515ba5: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 515bab: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515bad: jne 0x515bb3 */
  if (!zf) goto L_515bb3;
L_515baf: /* 515baf: lea edi, [esp + 0xb] */
  edi = (uint32_t)(esp + 0xbu);
L_515bb3: /* 515bb3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515bb6: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 515bba: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 515bbf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515bc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515bc3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515bc6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515bc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515bc8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515bcb: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515bd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515bd2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 515bd5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 515bd6: mov eax, edx */
  eax = edx;
/* 515bd8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515bdb: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515bde: jne 0x515bf0 */
  if (!zf) goto L_515bf0;
L_515be0: /* 515be0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515be3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 515be5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515be6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515be7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515bea: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515bf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515bf0: /* 515bf0: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 515bf2: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 515bf6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 515bfa: sub al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 515bfc: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 515bfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 515bff: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 515c01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515c02: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515c03: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515c40(void) {
  LOAD_REGS();
L_515c40: /* 515c40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515c41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515c42: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515c46: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 515c50: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515c53: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515c56: mov byte ptr [esp + 7], 0 */
  W8((uint32_t)(esp + 0x7u), 0x0u);
/* 515c5b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515c5e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515c5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 515c60: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515c63: lea eax, [esp + 0xb] */
  eax = (uint32_t)(esp + 0xbu);
/* 515c67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515c68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515c69: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515c70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515c70: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 515c76: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515c78: je 0x515c85 */
  if (zf) goto L_515c85;
L_515c7a: /* 515c7a: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 515c7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 515c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515c82: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x515c85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515c85: /* 515c85: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 515c8b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515c8d: jne 0x515c93 */
  if (!zf) goto L_515c93;
L_515c8f: /* 515c8f: lea edi, [esp + 0xb] */
  edi = (uint32_t)(esp + 0xbu);
L_515c93: /* 515c93: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 515c96: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 515c97: mov eax, edx */
  eax = edx;
/* 515c99: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515c9c: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515c9f: jne 0x515cb1 */
  if (!zf) goto L_515cb1;
L_515ca1: /* 515ca1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515ca4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 515ca6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515ca7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515ca8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515cab: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515cb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515cb1: /* 515cb1: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 515cb3: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 515cb7: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 515cb9: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 515cbb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 515cbc: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 515cbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515cbf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515cc0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515d00(void) {
  LOAD_REGS();
L_515d00: /* 515d00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515d01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515d02: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515d06: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 515d10: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515d13: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515d16: mov byte ptr [esp + 7], 0 */
  W8((uint32_t)(esp + 0x7u), 0x0u);
/* 515d1b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515d1e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515d1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 515d20: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515d23: lea eax, [esp + 0xb] */
  eax = (uint32_t)(esp + 0xbu);
/* 515d27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515d28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515d29: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515d30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515d30: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 515d36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515d38: je 0x515d45 */
  if (zf) goto L_515d45;
L_515d3a: /* 515d3a: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 515d3f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 515d41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515d42: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x515d45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515d45: /* 515d45: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 515d4b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515d4d: jne 0x515d53 */
  if (!zf) goto L_515d53;
L_515d4f: /* 515d4f: lea edi, [esp + 0xb] */
  edi = (uint32_t)(esp + 0xbu);
L_515d53: /* 515d53: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 515d56: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 515d57: mov eax, edx */
  eax = edx;
/* 515d59: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515d5c: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515d5f: jne 0x515d71 */
  if (!zf) goto L_515d71;
L_515d61: /* 515d61: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515d64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 515d66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515d67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515d68: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515d6b: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515d71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515d71: /* 515d71: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 515d73: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 515d77: dec al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 515d79: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 515d7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 515d7c: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 515d7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515d7f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515d80: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515dc0(void) {
  LOAD_REGS();
L_515dc0: /* 515dc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515dc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515dc2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515dc6: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 515dd0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515dd3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515dd6: mov byte ptr [esp + 7], 0 */
  W8((uint32_t)(esp + 0x7u), 0x0u);
/* 515ddb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515dde: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515ddf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 515de0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515de3: lea eax, [esp + 0xb] */
  eax = (uint32_t)(esp + 0xbu);
/* 515de7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515de8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515de9: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515df0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515df0: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 515df6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515df8: je 0x515e05 */
  if (zf) goto L_515e05;
L_515dfa: /* 515dfa: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 515dff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 515e01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515e02: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x515e05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515e05: /* 515e05: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 515e0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515e0c: mov edi, eax */
  edi = eax;
/* 515e0e: jne 0x515e14 */
  if (!zf) goto L_515e14;
L_515e10: /* 515e10: lea edi, [esp + 0xb] */
  edi = (uint32_t)(esp + 0xbu);
L_515e14: /* 515e14: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 515e17: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 515e18: mov eax, edx */
  eax = edx;
/* 515e1a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515e1d: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515e20: jne 0x515e32 */
  if (!zf) goto L_515e32;
L_515e22: /* 515e22: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515e25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 515e27: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515e28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515e29: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515e2c: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515e32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515e32: /* 515e32: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 515e34: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 515e38: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 515e3a: inc byte ptr [edi] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(edi), r);
  }
/* 515e3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 515e3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515e3e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515e3f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515e80(void) {
  LOAD_REGS();
L_515e80: /* 515e80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515e81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515e82: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515e86: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 515e90: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515e93: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515e96: mov byte ptr [esp + 7], 0 */
  W8((uint32_t)(esp + 0x7u), 0x0u);
/* 515e9b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515e9e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515e9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 515ea0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515ea3: lea eax, [esp + 0xb] */
  eax = (uint32_t)(esp + 0xbu);
/* 515ea7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515ea8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515ea9: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515eb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515eb0: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 515eb6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515eb8: je 0x515ec5 */
  if (zf) goto L_515ec5;
L_515eba: /* 515eba: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 515ebf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 515ec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515ec2: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x515ec5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515ec5: /* 515ec5: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 515eca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 515ecc: mov edi, eax */
  edi = eax;
/* 515ece: jne 0x515ed4 */
  if (!zf) goto L_515ed4;
L_515ed0: /* 515ed0: lea edi, [esp + 0xb] */
  edi = (uint32_t)(esp + 0xbu);
L_515ed4: /* 515ed4: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 515ed7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 515ed8: mov eax, edx */
  eax = edx;
/* 515eda: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515edd: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515ee0: jne 0x515ef2 */
  if (!zf) goto L_515ef2;
L_515ee2: /* 515ee2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515ee5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 515ee7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515ee8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515ee9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515eec: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515ef2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515ef2: /* 515ef2: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 515ef4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 515ef8: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 515efa: dec byte ptr [edi] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(edi), r);
  }
/* 515efc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 515efd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515efe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515eff: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515f40(void) {
  LOAD_REGS();
L_515f40: /* 515f40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515f41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515f42: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515f46: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515f49: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515f4c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 515f54: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515f57: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515f58: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515f5b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 515f5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515f60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515f61: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515f68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515f68: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 515f6b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 515f6c: mov eax, edx */
  eax = edx;
/* 515f6e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 515f71: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 515f74: jne 0x515f86 */
  if (!zf) goto L_515f86;
L_515f76: /* 515f76: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515f79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 515f7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515f7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515f7d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515f80: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x515f86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_515f86: /* 515f86: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 515f8a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 515f8e: not ecx */
  ecx = ~ecx;
/* 515f90: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 515f92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 515f93: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 515f94: ret 8 */
  esp += 12; SPILL(); return;
}

void f_515fc0(void) {
  LOAD_REGS();
L_515fc0: /* 515fc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515fc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515fc2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 515fc6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515fc9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515fcc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 515fd4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515fd7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515fd8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 515fdb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 515fdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 515fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 515fe1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x515fe8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 515fe8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 515feb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 515fef: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 515ff7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 515ffa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 515ffb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 515ffe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 515fff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516000: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516003: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51600au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51600a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51600d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51600e: mov eax, edx */
  eax = edx;
/* 516010: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516013: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 516016: jne 0x516028 */
  if (!zf) goto L_516028;
L_516018: /* 516018: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51601b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51601d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51601e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51601f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516022: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516028u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516028: /* 516028: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 51602c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 516030: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 516034: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 516036: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516037: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 516039: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51603a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516060(void) {
  LOAD_REGS();
L_516060: /* 516060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516061: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516062: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516066: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516069: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51606c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516074: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516077: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516078: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51607b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51607f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516081: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516088u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516088: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51608b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51608c: mov eax, edx */
  eax = edx;
/* 51608e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516091: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516094: jne 0x5160a6 */
  if (!zf) goto L_5160a6;
L_516096: /* 516096: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516099: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51609b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51609c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51609d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5160a0: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5160a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5160a6: /* 5160a6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5160aa: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 5160ae: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 5160b0: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 5160b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5160b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5160b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5160e0(void) {
  LOAD_REGS();
L_5160e0: /* 5160e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5160e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5160e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5160e6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5160e9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5160ec: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5160f4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5160f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5160f8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5160fb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5160ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516101: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516108: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51610b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51610f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 516117: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51611a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51611b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51611e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51611f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516120: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516123: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51612au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51612a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51612d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51612e: mov eax, edx */
  eax = edx;
/* 516130: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516133: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516136: jne 0x516148 */
  if (!zf) goto L_516148;
L_516138: /* 516138: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51613b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51613d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51613e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51613f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516142: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516148u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516148: /* 516148: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 51614c: imul edx, dword ptr [esp + 4] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4u)));
  edx = (uint32_t)r;
  }
/* 516151: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 516155: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 516157: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516158: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 516159: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516180(void) {
  LOAD_REGS();
L_516180: /* 516180: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516181: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516182: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516186: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516189: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51618c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51618d: xor edi, edi */
  edi = 0;
/* 51618f: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 516193: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516196: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516197: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51619a: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51619e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51619f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5161a0: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5161a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5161a7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5161aa: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 5161ae: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 5161b2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5161b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5161b6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5161b9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5161ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5161bb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5161be: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5161c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5161c5: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5161c8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5161c9: mov eax, edx */
  eax = edx;
/* 5161cb: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5161ce: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5161d1: jne 0x5161e2 */
  if (!zf) goto L_5161e2;
L_5161d3: /* 5161d3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5161d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5161d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5161d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5161d9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5161dc: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5161e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5161e2: /* 5161e2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5161e6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5161e8: je 0x5161fd */
  if (zf) goto L_5161fd;
L_5161ea: /* 5161ea: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5161ee: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5161ef: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x5161ef);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 5161f1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 5161f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5161f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5161f7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 5161f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5161fa: ret 8 */
  esp += 12; SPILL(); return;
L_5161fd: /* 5161fd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 516201: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 516203: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 516204: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516205: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 516206: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516240(void) {
  LOAD_REGS();
L_516240: /* 516240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516241: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516242: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516246: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516249: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51624c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516254: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516257: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516258: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51625b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51625f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516260: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516261: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516268u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516268: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51626b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51626f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 516277: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51627a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51627b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51627e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51627f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516280: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516283: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51628au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51628a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51628d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51628e: mov eax, edx */
  eax = edx;
/* 516290: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516293: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516296: jne 0x5162a8 */
  if (!zf) goto L_5162a8;
L_516298: /* 516298: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51629b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51629d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51629e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51629f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5162a2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5162a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5162a8: /* 5162a8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5162ac: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 5162b0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5162b4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5162b6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 5162b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5162b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5162ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5162e0(void) {
  LOAD_REGS();
L_5162e0: /* 5162e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5162e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5162e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5162e6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5162e9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5162ec: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5162f4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5162f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5162f8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5162fb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5162ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516301: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516308u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516308: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51630b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51630f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 516317: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51631a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51631b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51631e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51631f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516320: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516323: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51632au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51632a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51632d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51632e: mov eax, edx */
  eax = edx;
/* 516330: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516333: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516336: jne 0x516348 */
  if (!zf) goto L_516348;
L_516338: /* 516338: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51633b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51633d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51633e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51633f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516342: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516348u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516348: /* 516348: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51634c: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 516350: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 516352: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 516356: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 516358: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516359: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51635a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516380(void) {
  LOAD_REGS();
L_516380: /* 516380: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516381: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516382: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516386: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516389: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51638c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516394: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516397: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516398: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51639b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51639f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5163a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5163a1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5163a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5163a8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5163ab: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5163af: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5163b7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5163ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5163bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5163be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5163bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5163c0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5163c3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5163cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5163ca: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5163cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5163ce: mov eax, edx */
  eax = edx;
/* 5163d0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5163d3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 5163d6: jne 0x5163e8 */
  if (!zf) goto L_5163e8;
L_5163d8: /* 5163d8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5163db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5163dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5163de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5163df: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5163e2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5163e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5163e8: /* 5163e8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 5163ec: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5163f0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 5163f4: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 5163f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5163f7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 5163f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5163fa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516420(void) {
  LOAD_REGS();
L_516420: /* 516420: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516421: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516422: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516426: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516429: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51642c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516434: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516437: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516438: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51643b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51643f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516441: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516448u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516448: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51644b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51644f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 516457: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51645a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51645b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51645e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51645f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516460: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516463: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51646au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51646a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51646d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51646e: mov eax, edx */
  eax = edx;
/* 516470: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516473: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 516476: jne 0x516488 */
  if (!zf) goto L_516488;
L_516478: /* 516478: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51647b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51647d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51647e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51647f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516482: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516488u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516488: /* 516488: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 51648c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 516490: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 516494: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* 516496: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516497: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 516499: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51649a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5164c0(void) {
  LOAD_REGS();
L_5164c0: /* 5164c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5164c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5164c2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5164c6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5164c9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5164cc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5164d4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5164d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5164d8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5164db: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5164df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5164e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5164e1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5164e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5164e8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5164eb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5164ef: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5164f7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5164fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5164fb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5164fe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5164ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516500: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516503: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51650au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51650a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51650d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51650e: mov eax, edx */
  eax = edx;
/* 516510: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516513: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516516: jne 0x516528 */
  if (!zf) goto L_516528;
L_516518: /* 516518: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51651b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51651d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51651e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51651f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516522: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516528: /* 516528: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51652c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 516530: xor edx, edx */
  edx = 0;
/* 516532: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 516534: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 516538: setl dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 51653b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51653c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51653e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51653f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516580(void) {
  LOAD_REGS();
L_516580: /* 516580: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516582: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516586: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516589: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51658c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516594: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516597: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516598: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51659b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51659f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5165a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5165a1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5165a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5165a8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5165ab: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5165af: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5165b7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5165ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5165bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5165be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5165bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5165c0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5165c3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5165cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5165ca: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5165cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5165ce: mov eax, edx */
  eax = edx;
/* 5165d0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5165d3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5165d6: jne 0x5165e8 */
  if (!zf) goto L_5165e8;
L_5165d8: /* 5165d8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5165db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5165dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5165de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5165df: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5165e2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5165e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5165e8: /* 5165e8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5165ec: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5165f0: xor edx, edx */
  edx = 0;
/* 5165f2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5165f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5165f8: setg dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 5165fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5165fc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 5165fe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5165ff: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516640(void) {
  LOAD_REGS();
L_516640: /* 516640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516641: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516642: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516646: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516649: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51664c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516654: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516657: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516658: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51665b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51665f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516661: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516668u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516668: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51666b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51666f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 516677: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51667a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51667b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51667e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51667f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516680: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516683: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51668au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51668a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51668d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51668e: mov eax, edx */
  eax = edx;
/* 516690: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516693: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516696: jne 0x5166a8 */
  if (!zf) goto L_5166a8;
L_516698: /* 516698: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51669b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51669d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51669e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51669f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5166a2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5166a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5166a8: /* 5166a8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5166ac: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5166b0: xor edx, edx */
  edx = 0;
/* 5166b2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5166b4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5166b8: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 5166bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5166bc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 5166be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5166bf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516700(void) {
  LOAD_REGS();
L_516700: /* 516700: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516701: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516702: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516706: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516709: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51670c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516714: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516717: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516718: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51671b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51671f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516721: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516728u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516728: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51672b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51672f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 516737: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51673a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51673b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51673e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51673f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516740: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516743: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51674au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51674a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51674d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51674e: mov eax, edx */
  eax = edx;
/* 516750: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516753: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516756: jne 0x516768 */
  if (!zf) goto L_516768;
L_516758: /* 516758: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51675b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51675d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51675e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51675f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516762: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516768u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516768: /* 516768: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51676c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 516770: xor edx, edx */
  edx = 0;
/* 516772: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 516774: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 516778: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 51677b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51677c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51677e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51677f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5167c0(void) {
  LOAD_REGS();
L_5167c0: /* 5167c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5167c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5167c2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5167c6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5167c9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5167cc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5167d4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5167d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5167d8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5167db: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5167df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5167e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5167e1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5167e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5167e8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5167eb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5167ef: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5167f7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5167fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5167fb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5167fe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5167ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516800: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516803: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51680au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51680a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51680d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51680e: mov eax, edx */
  eax = edx;
/* 516810: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516813: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516816: jne 0x516828 */
  if (!zf) goto L_516828;
L_516818: /* 516818: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51681b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51681d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51681e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51681f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516822: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516828u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516828: /* 516828: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51682c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 516830: xor edx, edx */
  edx = 0;
/* 516832: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 516834: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 516838: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 51683b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51683c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51683e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51683f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516880(void) {
  LOAD_REGS();
L_516880: /* 516880: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516882: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516886: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516889: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51688c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516894: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516897: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516898: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51689b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51689f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5168a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5168a1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5168a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5168a8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5168ab: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5168af: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5168b7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5168ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5168bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5168be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5168bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5168c0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5168c3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5168cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5168ca: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5168cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5168ce: mov eax, edx */
  eax = edx;
/* 5168d0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5168d3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5168d6: jne 0x5168e8 */
  if (!zf) goto L_5168e8;
L_5168d8: /* 5168d8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5168db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5168dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5168de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5168df: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5168e2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5168e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5168e8: /* 5168e8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5168ec: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5168f0: xor edx, edx */
  edx = 0;
/* 5168f2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5168f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5168f8: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 5168fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5168fc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 5168fe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5168ff: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516940(void) {
  LOAD_REGS();
L_516940: /* 516940: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516941: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516942: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516946: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516949: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51694c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516954: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516957: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516958: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51695b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51695f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516961: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516968u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516968: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51696b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51696f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 516977: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51697a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51697b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51697e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51697f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516980: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516983: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51698au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51698a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51698d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51698e: mov eax, edx */
  eax = edx;
/* 516990: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516993: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516996: jne 0x5169a8 */
  if (!zf) goto L_5169a8;
L_516998: /* 516998: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51699b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51699d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51699e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51699f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5169a2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5169a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5169a8: /* 5169a8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5169ac: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 5169b0: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5169b2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 5169b6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 5169b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5169b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5169ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5169e0(void) {
  LOAD_REGS();
L_5169e0: /* 5169e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5169e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5169e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5169e6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5169e9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5169ec: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5169f4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5169f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5169f8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5169fb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5169ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516a00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516a01: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516a08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516a08: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516a0b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 516a0f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 516a17: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516a1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516a1b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516a1e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516a1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516a20: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516a23: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516a2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516a2a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 516a2d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 516a2e: mov eax, edx */
  eax = edx;
/* 516a30: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516a33: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516a36: jne 0x516a48 */
  if (!zf) goto L_516a48;
L_516a38: /* 516a38: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516a3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 516a3d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516a3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516a3f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516a42: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516a48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516a48: /* 516a48: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 516a4c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 516a50: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 516a52: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 516a56: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 516a58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516a59: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 516a5a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516a80(void) {
  LOAD_REGS();
L_516a80: /* 516a80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516a81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516a82: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516a86: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516a89: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516a8c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516a94: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516a97: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516a98: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516a9b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 516a9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516aa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516aa1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516aa8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516aa8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516aab: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 516aaf: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 516ab7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516aba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516abb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516abe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516abf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516ac0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516ac3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516acau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516aca: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 516acd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 516ace: mov eax, edx */
  eax = edx;
/* 516ad0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516ad3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516ad6: jne 0x516ae8 */
  if (!zf) goto L_516ae8;
L_516ad8: /* 516ad8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516adb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 516add: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516ade: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516adf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516ae2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516ae8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516ae8: /* 516ae8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 516aec: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 516af0: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 516af2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 516af6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 516af8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516af9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 516afa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516b20(void) {
  LOAD_REGS();
L_516b20: /* 516b20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516b21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516b22: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516b26: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 516b30: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516b33: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516b36: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516b3e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516b41: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516b42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 516b43: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516b46: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 516b4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516b4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516b4c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516b53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516b53: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 516b59: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516b5b: je 0x516b68 */
  if (zf) goto L_516b68;
L_516b5d: /* 516b5d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 516b62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 516b64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516b65: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x516b68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516b68: /* 516b68: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 516b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516b6f: mov edi, eax */
  edi = eax;
/* 516b71: jne 0x516b77 */
  if (!zf) goto L_516b77;
L_516b73: /* 516b73: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_516b77: /* 516b77: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516b7a: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 516b7e: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 516b86: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516b89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516b8a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516b8d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516b8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516b8f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516b92: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516b99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516b99: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 516b9c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 516b9d: mov eax, edx */
  eax = edx;
/* 516b9f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516ba2: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516ba5: jne 0x516bb7 */
  if (!zf) goto L_516bb7;
L_516ba7: /* 516ba7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516baa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 516bac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516bad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516bae: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516bb1: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516bb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516bb7: /* 516bb7: fild dword ptr [edi] */
  { double v = (double)(int32_t)R32((uint32_t)(edi)); FPUSH(v); }
/* 516bb9: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 516bbd: call 0x554f00 */
  esp -= 4; W32(esp, 0x516bc2u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 516bc2: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 516bc6: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 516bc8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 516bc9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 516bcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516bcc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 516bcd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516c00(void) {
  LOAD_REGS();
L_516c00: /* 516c00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516c01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516c02: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516c06: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 516c10: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516c13: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516c16: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516c1e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516c21: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516c22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 516c23: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516c26: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 516c2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516c2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516c2c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516c33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516c33: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 516c39: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516c3b: je 0x516c48 */
  if (zf) goto L_516c48;
L_516c3d: /* 516c3d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 516c42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 516c44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516c45: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x516c48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516c48: /* 516c48: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 516c4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516c4f: mov edi, eax */
  edi = eax;
/* 516c51: jne 0x516c57 */
  if (!zf) goto L_516c57;
L_516c53: /* 516c53: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_516c57: /* 516c57: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516c5a: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 516c5e: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 516c66: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516c69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516c6a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516c6d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516c6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516c6f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516c72: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516c79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516c79: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 516c7c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 516c7d: mov eax, edx */
  eax = edx;
/* 516c7f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516c82: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516c85: jne 0x516c97 */
  if (!zf) goto L_516c97;
L_516c87: /* 516c87: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516c8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 516c8c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516c8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516c8e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516c91: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516c97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516c97: /* 516c97: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 516c9b: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 516ca1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 516ca3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 516ca6: jnp 0x516cc1 */
  if (!pf) goto L_516cc1;
L_516ca8: /* 516ca8: fild dword ptr [edi] */
  { double v = (double)(int32_t)R32((uint32_t)(edi)); FPUSH(v); }
/* 516caa: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
/* 516cae: call 0x554f00 */
  esp -= 4; W32(esp, 0x516cb3u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 516cb3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 516cb7: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 516cb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 516cba: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 516cbc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516cbd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 516cbe: ret 8 */
  esp += 12; SPILL(); return;
L_516cc1: /* 516cc1: fld dword ptr [0x56947c] */
  { double v = F32((uint32_t)(0x56947cu)); FPUSH(v); }
/* 516cc7: call 0x554f00 */
  esp -= 4; W32(esp, 0x516cccu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 516ccc: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 516cd0: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 516cd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 516cd3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 516cd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516cd6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 516cd7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516d20(void) {
  LOAD_REGS();
L_516d20: /* 516d20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516d21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 516d22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516d23: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 516d27: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 516d31: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516d34: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516d37: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 516d3f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516d42: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516d43: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516d46: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 516d4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516d4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516d4c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516d53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516d53: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 516d59: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516d5b: je 0x516d68 */
  if (zf) goto L_516d68;
L_516d5d: /* 516d5d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 516d62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 516d64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516d65: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x516d68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516d68: /* 516d68: mov ebx, dword ptr [0x5afecc] */
  ebx = R32((uint32_t)(0x5afeccu));
/* 516d6e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516d70: jne 0x516d76 */
  if (!zf) goto L_516d76;
L_516d72: /* 516d72: lea ebx, [esp + 8] */
  ebx = (uint32_t)(esp + 0x8u);
L_516d76: /* 516d76: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516d79: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 516d7d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 516d85: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516d88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516d89: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516d8c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516d8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516d8e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516d91: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516d98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516d98: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 516d9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 516d9c: mov eax, edx */
  eax = edx;
/* 516d9e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516da1: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516da4: jne 0x516db6 */
  if (!zf) goto L_516db6;
L_516da6: /* 516da6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516da9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 516dab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516dac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516dad: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516db0: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516db6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516db6: /* 516db6: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 516db8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 516dbc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 516dbe: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 516dc0: mov ebx, eax */
  ebx = eax;
/* 516dc2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 516dc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516dc7: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 516dc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 516dca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 516dcb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516e00(void) {
  LOAD_REGS();
L_516e00: /* 516e00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516e01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 516e02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516e03: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 516e07: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 516e11: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516e14: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516e17: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 516e1f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516e22: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516e23: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516e26: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 516e2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516e2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516e2c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516e33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516e33: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 516e39: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516e3b: je 0x516e48 */
  if (zf) goto L_516e48;
L_516e3d: /* 516e3d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 516e42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 516e44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516e45: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x516e48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516e48: /* 516e48: mov ebx, dword ptr [0x5afecc] */
  ebx = R32((uint32_t)(0x5afeccu));
/* 516e4e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516e50: jne 0x516e56 */
  if (!zf) goto L_516e56;
L_516e52: /* 516e52: lea ebx, [esp + 8] */
  ebx = (uint32_t)(esp + 0x8u);
L_516e56: /* 516e56: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516e59: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 516e5d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 516e65: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516e68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516e69: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516e6c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516e6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516e6e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516e71: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516e78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516e78: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 516e7b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 516e7c: mov eax, edx */
  eax = edx;
/* 516e7e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516e81: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516e84: jne 0x516e96 */
  if (!zf) goto L_516e96;
L_516e86: /* 516e86: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516e89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 516e8b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516e8d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516e90: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516e96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516e96: /* 516e96: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 516e98: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 516e9c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 516e9e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 516ea0: mov ebx, eax */
  ebx = eax;
/* 516ea2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 516ea6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516ea7: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 516ea9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 516eaa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 516eab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516ee0(void) {
  LOAD_REGS();
L_516ee0: /* 516ee0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516ee1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516ee2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516ee6: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 516ef0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516ef3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516ef6: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516efe: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516f01: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516f02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 516f03: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516f06: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 516f0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516f0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516f0c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516f13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516f13: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 516f19: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516f1b: je 0x516f28 */
  if (zf) goto L_516f28;
L_516f1d: /* 516f1d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 516f22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 516f24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516f25: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x516f28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516f28: /* 516f28: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 516f2e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516f30: jne 0x516f36 */
  if (!zf) goto L_516f36;
L_516f32: /* 516f32: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_516f36: /* 516f36: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 516f39: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 516f3a: mov eax, edx */
  eax = edx;
/* 516f3c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516f3f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 516f42: jne 0x516f54 */
  if (!zf) goto L_516f54;
L_516f44: /* 516f44: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516f47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 516f49: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516f4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516f4b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516f4e: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x516f54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516f54: /* 516f54: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 516f56: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 516f5a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516f5b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 516f5d: mov edi, eax */
  edi = eax;
/* 516f5f: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 516f61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 516f62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 516f63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 516f64: ret 8 */
  esp += 12; SPILL(); return;
}

void f_516fa0(void) {
  LOAD_REGS();
L_516fa0: /* 516fa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 516fa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516fa2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 516fa6: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 516fb0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 516fb3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 516fb6: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 516fbe: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 516fc1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 516fc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 516fc3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 516fc6: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 516fca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516fcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 516fcc: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x516fd3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 516fd3: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 516fd9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516fdb: je 0x516fe8 */
  if (zf) goto L_516fe8;
L_516fdd: /* 516fdd: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 516fe2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 516fe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 516fe5: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x516fe8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_516fe8: /* 516fe8: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 516fee: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 516ff0: jne 0x516ff6 */
  if (!zf) goto L_516ff6;
L_516ff2: /* 516ff2: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_516ff6: /* 516ff6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 516ff9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 516ffa: mov eax, edx */
  eax = edx;
/* 516ffc: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 516fff: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517002: jne 0x517014 */
  if (!zf) goto L_517014;
L_517004: /* 517004: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517007: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 517009: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51700a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51700b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51700e: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517014u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517014: /* 517014: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 517016: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 51701a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 51701b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 51701d: mov edi, eax */
  edi = eax;
/* 51701f: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 517021: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 517022: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517023: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517024: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517060(void) {
  LOAD_REGS();
L_517060: /* 517060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517061: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517062: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517066: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 517070: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517073: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517076: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51707e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517081: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517082: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 517083: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517086: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51708a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51708b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51708c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517093u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517093: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 517099: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51709b: je 0x5170a8 */
  if (zf) goto L_5170a8;
L_51709d: /* 51709d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 5170a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5170a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5170a5: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x5170a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5170a8: /* 5170a8: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 5170ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5170af: mov edi, eax */
  edi = eax;
/* 5170b1: jne 0x5170b7 */
  if (!zf) goto L_5170b7;
L_5170b3: /* 5170b3: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_5170b7: /* 5170b7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5170ba: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5170bb: mov eax, edx */
  eax = edx;
/* 5170bd: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5170c0: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5170c3: jne 0x5170d5 */
  if (!zf) goto L_5170d5;
L_5170c5: /* 5170c5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5170c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5170ca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5170cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5170cc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5170cf: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5170d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5170d5: /* 5170d5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 5170d7: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 5170db: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 5170dd: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 5170df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5170e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5170e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5170e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517120(void) {
  LOAD_REGS();
L_517120: /* 517120: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517121: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517122: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517126: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 517130: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517133: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517136: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51713e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517141: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517142: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 517143: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517146: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51714a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51714b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51714c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517153u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517153: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 517159: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51715b: je 0x517168 */
  if (zf) goto L_517168;
L_51715d: /* 51715d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 517162: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 517164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517165: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x517168u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517168: /* 517168: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 51716d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51716f: mov edi, eax */
  edi = eax;
/* 517171: jne 0x517177 */
  if (!zf) goto L_517177;
L_517173: /* 517173: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_517177: /* 517177: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51717a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51717b: mov eax, edx */
  eax = edx;
/* 51717d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517180: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517183: jne 0x517195 */
  if (!zf) goto L_517195;
L_517185: /* 517185: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51718a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51718b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51718c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51718f: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517195u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517195: /* 517195: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 517197: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51719b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51719d: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
/* 51719f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5171a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5171a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5171a2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5171e0(void) {
  LOAD_REGS();
L_5171e0: /* 5171e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5171e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5171e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5171e6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5171e9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5171ec: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5171f4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5171f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5171f8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5171fb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5171ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517201: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517208u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517208: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51720b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51720c: mov eax, edx */
  eax = edx;
/* 51720e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517211: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517214: jne 0x517226 */
  if (!zf) goto L_517226;
L_517216: /* 517216: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517219: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51721b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51721c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51721d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517220: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517226u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517226: /* 517226: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51722a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51722c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51722d: jle 0x517243 */
  if ((zf || sf != of)) goto L_517243;
L_51722f: /* 51722f: call 0x4e3d0f */
  esp -= 4; W32(esp, 0x517234u); SPILL(); f_4e3d0f(); if (g_unwind) return; RELOAD();
/* 517234: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 517235: idiv dword ptr [esp] */
  { int32_t d = (int32_t)R32((uint32_t)(esp)); if (!d) d = (int32_t)guest_divzero(0x517235);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 517239: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51723d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51723f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517240: ret 8 */
  esp += 12; SPILL(); return;
L_517243: /* 517243: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 517247: xor eax, eax */
  eax = 0;
/* 517249: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51724b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51724c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517270(void) {
  LOAD_REGS();
L_517270: /* 517270: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517271: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517272: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517276: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517279: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51727c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517284: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517287: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517288: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51728b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51728f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517290: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517291: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517298u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517298: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51729b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51729f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5172a7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5172aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5172ab: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5172ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5172af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5172b0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5172b3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5172bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5172ba: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5172bd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5172be: mov eax, edx */
  eax = edx;
/* 5172c0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5172c3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5172c6: jne 0x5172d8 */
  if (!zf) goto L_5172d8;
L_5172c8: /* 5172c8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5172cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5172cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5172ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5172cf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5172d2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5172d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5172d8: /* 5172d8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5172dc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5172e0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5172e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5172e3: jg 0x5172ef */
  if ((!zf && sf == of)) goto L_5172ef;
L_5172e5: /* 5172e5: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 5172e9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 5172eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5172ec: ret 8 */
  esp += 12; SPILL(); return;
L_5172ef: /* 5172ef: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5172f3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5172f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5172f6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517330(void) {
  LOAD_REGS();
L_517330: /* 517330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517331: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517332: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517336: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517339: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51733c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517344: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517347: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517348: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51734b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51734f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517351: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517358u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517358: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51735b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51735f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517367: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51736a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51736b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51736e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51736f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517370: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517373: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51737au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51737a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51737d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51737e: mov eax, edx */
  eax = edx;
/* 517380: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517383: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517386: jne 0x517398 */
  if (!zf) goto L_517398;
L_517388: /* 517388: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51738b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51738d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51738e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51738f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517392: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517398u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517398: /* 517398: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51739c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5173a0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5173a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5173a3: jl 0x5173af */
  if ((sf != of)) goto L_5173af;
L_5173a5: /* 5173a5: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 5173a9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 5173ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5173ac: ret 8 */
  esp += 12; SPILL(); return;
L_5173af: /* 5173af: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5173b3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5173b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5173b6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5173f0(void) {
  LOAD_REGS();
L_5173f0: /* 5173f0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5173f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5173f4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 5173f8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5173fb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5173fe: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517406: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517409: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51740a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51740d: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 517411: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517412: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517413: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51741au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51741a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51741d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 517421: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 517429: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51742c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51742d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517430: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517431: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517432: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517435: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51743cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51743c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51743f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517442: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 51744a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51744d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51744e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517451: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 517455: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517456: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517457: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51745eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51745e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 517461: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 517462: mov eax, edx */
  eax = edx;
/* 517464: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517467: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51746a: jne 0x51747c */
  if (!zf) goto L_51747c;
L_51746c: /* 51746c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51746f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 517471: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517472: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517473: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517476: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51747cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51747c: /* 51747c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 517480: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 517484: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 517486: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517487: jl 0x51749d */
  if ((sf != of)) goto L_51749d;
L_517489: /* 517489: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 51748d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51748f: jge 0x51749d */
  if ((sf == of)) goto L_51749d;
L_517491: /* 517491: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 517495: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 517497: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51749a: ret 8 */
  esp += 12; SPILL(); return;
L_51749d: /* 51749d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 5174a1: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 5174a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5174a6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5174e0(void) {
  LOAD_REGS();
L_5174e0: /* 5174e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5174e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5174e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5174e6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5174e9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5174ec: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5174f4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5174f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5174f8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5174fb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5174ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517501: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517508u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517508: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51750b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51750c: mov eax, edx */
  eax = edx;
/* 51750e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517511: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517514: jne 0x517526 */
  if (!zf) goto L_517526;
L_517516: /* 517516: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517519: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51751b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51751c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51751d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517520: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517526u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517526: /* 517526: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51752a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51752e: fchs  */
  ST0 = -ST0;
/* 517530: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517531: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 517533: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517534: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517560(void) {
  LOAD_REGS();
L_517560: /* 517560: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517561: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517562: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517566: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517569: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51756c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517574: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517577: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517578: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51757b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51757f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517581: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517588u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517588: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51758b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51758f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517597: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51759a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51759b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51759e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51759f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5175a0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5175a3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5175aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5175aa: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5175ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5175ae: mov eax, edx */
  eax = edx;
/* 5175b0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5175b3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5175b6: jne 0x5175c8 */
  if (!zf) goto L_5175c8;
L_5175b8: /* 5175b8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5175bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5175bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5175be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5175bf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5175c2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5175c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5175c8: /* 5175c8: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 5175cc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5175cf: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5175d3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 5175d7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5175da: call 0x4e2abd */
  esp -= 4; W32(esp, 0x5175dfu); SPILL(); f_4e2abd(); if (g_unwind) return; RELOAD();
/* 5175df: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 5175e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5175e6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 5175e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5175e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5175ea: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517620(void) {
  LOAD_REGS();
L_517620: /* 517620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517621: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517622: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517626: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517629: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51762c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517634: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517637: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517638: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51763b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51763f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517641: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517648u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517648: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51764b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51764f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517657: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51765a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51765b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51765e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51765f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517660: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517663: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51766au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51766a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51766d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51766e: mov eax, edx */
  eax = edx;
/* 517670: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517673: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517676: jne 0x517688 */
  if (!zf) goto L_517688;
L_517678: /* 517678: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51767b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51767d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51767e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51767f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517682: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517688u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517688: /* 517688: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51768c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 517690: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 517694: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517695: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 517697: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517698: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5176c0(void) {
  LOAD_REGS();
L_5176c0: /* 5176c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5176c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5176c2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5176c6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5176c9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5176cc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5176d4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5176d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5176d8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5176db: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5176df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5176e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5176e1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5176e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5176e8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5176eb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5176ef: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5176f7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5176fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5176fb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5176fe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5176ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517700: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517703: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51770au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51770a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51770d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51770e: mov eax, edx */
  eax = edx;
/* 517710: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517713: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517716: jne 0x517728 */
  if (!zf) goto L_517728;
L_517718: /* 517718: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51771b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51771d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51771e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51771f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517722: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517728u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517728: /* 517728: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51772c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 517730: fdiv dword ptr [esp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xcu)));
/* 517734: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517735: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 517737: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517738: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517760(void) {
  LOAD_REGS();
L_517760: /* 517760: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517761: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517762: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517766: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517769: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51776c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517774: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517777: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517778: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51777b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51777f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517781: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517788u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517788: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51778b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51778f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517797: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51779a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51779b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51779e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51779f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5177a0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5177a3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5177aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5177aa: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5177ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5177ae: mov eax, edx */
  eax = edx;
/* 5177b0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5177b3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5177b6: jne 0x5177c8 */
  if (!zf) goto L_5177c8;
L_5177b8: /* 5177b8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5177bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5177bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5177be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5177bf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5177c2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5177c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5177c8: /* 5177c8: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 5177cc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5177cf: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5177d3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 5177d7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5177da: call 0x4e1587 */
  esp -= 4; W32(esp, 0x5177dfu); SPILL(); f_4e1587(); if (g_unwind) return; RELOAD();
/* 5177df: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 5177e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5177e6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 5177e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5177e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5177ea: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517820(void) {
  LOAD_REGS();
L_517820: /* 517820: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517822: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517826: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517829: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51782c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517834: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517837: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517838: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51783b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51783f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517841: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517848u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517848: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51784b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51784f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517857: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51785a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51785b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51785e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51785f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517860: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517863: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51786au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51786a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51786d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51786e: mov eax, edx */
  eax = edx;
/* 517870: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517873: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517876: jne 0x517888 */
  if (!zf) goto L_517888;
L_517878: /* 517878: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51787b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51787d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51787e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51787f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517882: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517888u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517888: /* 517888: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51788c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 517890: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 517894: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517895: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 517897: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517898: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5178c0(void) {
  LOAD_REGS();
L_5178c0: /* 5178c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5178c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5178c2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5178c6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5178c9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5178cc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5178d4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5178d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5178d8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5178db: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5178df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5178e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5178e1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5178e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5178e8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5178eb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5178ef: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5178f7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5178fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5178fb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5178fe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5178ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517900: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517903: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51790au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51790a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51790d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51790e: mov eax, edx */
  eax = edx;
/* 517910: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517913: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517916: jne 0x517928 */
  if (!zf) goto L_517928;
L_517918: /* 517918: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51791b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51791d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51791e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51791f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517922: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517928: /* 517928: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51792c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 517930: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 517934: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517935: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 517937: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517938: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517960(void) {
  LOAD_REGS();
L_517960: /* 517960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517962: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517966: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517969: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51796c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517974: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517977: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517978: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51797b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51797f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517981: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517988u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517988: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51798b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51798f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517997: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51799a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51799b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51799e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51799f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5179a0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5179a3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5179aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5179aa: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5179ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5179ae: mov eax, edx */
  eax = edx;
/* 5179b0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5179b3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5179b6: jne 0x5179c8 */
  if (!zf) goto L_5179c8;
L_5179b8: /* 5179b8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5179bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5179bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5179be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5179bf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5179c2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5179c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5179c8: /* 5179c8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5179cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5179cd: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 5179d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 5179d3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 5179d6: jp 0x5179e7 */
  if (pf) goto L_5179e7;
L_5179d8: /* 5179d8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 5179dc: mov eax, 1 */
  eax = 0x1u;
/* 5179e1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 5179e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5179e4: ret 8 */
  esp += 12; SPILL(); return;
L_5179e7: /* 5179e7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5179eb: xor eax, eax */
  eax = 0;
/* 5179ed: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 5179ef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5179f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517a30(void) {
  LOAD_REGS();
L_517a30: /* 517a30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517a31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517a32: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517a36: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517a39: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517a3c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517a44: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517a47: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517a48: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517a4b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 517a4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517a51: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517a58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517a58: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517a5b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 517a5f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517a67: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517a6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517a6b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517a6e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517a6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517a70: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517a73: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517a7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517a7a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 517a7d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 517a7e: mov eax, edx */
  eax = edx;
/* 517a80: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517a83: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517a86: jne 0x517a98 */
  if (!zf) goto L_517a98;
L_517a88: /* 517a88: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517a8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 517a8d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517a8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517a8f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517a92: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517a98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517a98: /* 517a98: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 517a9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517a9d: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 517aa1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 517aa3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 517aa6: jne 0x517ab7 */
  if (!zf) goto L_517ab7;
L_517aa8: /* 517aa8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 517aac: mov eax, 1 */
  eax = 0x1u;
/* 517ab1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 517ab3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517ab4: ret 8 */
  esp += 12; SPILL(); return;
L_517ab7: /* 517ab7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 517abb: xor eax, eax */
  eax = 0;
/* 517abd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 517abf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517ac0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517b00(void) {
  LOAD_REGS();
L_517b00: /* 517b00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517b01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517b02: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517b06: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517b09: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517b0c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517b14: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517b17: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517b18: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517b1b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 517b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517b21: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517b28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517b28: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517b2b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 517b2f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517b37: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517b3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517b3b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517b3e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517b3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517b40: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517b43: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517b4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517b4a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 517b4d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 517b4e: mov eax, edx */
  eax = edx;
/* 517b50: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517b53: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517b56: jne 0x517b68 */
  if (!zf) goto L_517b68;
L_517b58: /* 517b58: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517b5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 517b5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517b5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517b5f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517b62: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517b68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517b68: /* 517b68: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 517b6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517b6d: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 517b71: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 517b73: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 517b76: jp 0x517b87 */
  if (pf) goto L_517b87;
L_517b78: /* 517b78: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 517b7c: mov eax, 1 */
  eax = 0x1u;
/* 517b81: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 517b83: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517b84: ret 8 */
  esp += 12; SPILL(); return;
L_517b87: /* 517b87: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 517b8b: xor eax, eax */
  eax = 0;
/* 517b8d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 517b8f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517b90: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517bd0(void) {
  LOAD_REGS();
L_517bd0: /* 517bd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517bd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517bd2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517bd6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517bd9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517bdc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517be4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517be7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517be8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517beb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 517bef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517bf1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517bf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517bf8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517bfb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 517bff: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517c07: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517c0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517c0b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517c0e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517c0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517c10: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517c13: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517c1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517c1a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 517c1d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 517c1e: mov eax, edx */
  eax = edx;
/* 517c20: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517c23: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517c26: jne 0x517c38 */
  if (!zf) goto L_517c38;
L_517c28: /* 517c28: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517c2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 517c2d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517c2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517c2f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517c32: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517c38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517c38: /* 517c38: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 517c3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517c3d: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 517c41: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 517c43: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 517c46: jne 0x517c57 */
  if (!zf) goto L_517c57;
L_517c48: /* 517c48: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 517c4c: mov eax, 1 */
  eax = 0x1u;
/* 517c51: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 517c53: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517c54: ret 8 */
  esp += 12; SPILL(); return;
L_517c57: /* 517c57: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 517c5b: xor eax, eax */
  eax = 0;
/* 517c5d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 517c5f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517c60: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517ca0(void) {
  LOAD_REGS();
L_517ca0: /* 517ca0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517ca1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517ca2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517ca6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517ca9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517cac: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517cb4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517cb7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517cb8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517cbb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 517cbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517cc1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517cc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517cc8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517ccb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 517ccf: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517cd7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517cda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517cdb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517cde: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517cdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517ce0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517ce3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517ceau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517cea: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 517ced: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 517cee: mov eax, edx */
  eax = edx;
/* 517cf0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517cf3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517cf6: jne 0x517d08 */
  if (!zf) goto L_517d08;
L_517cf8: /* 517cf8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517cfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 517cfd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517cfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517cff: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517d02: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517d08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517d08: /* 517d08: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 517d0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517d0d: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 517d11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 517d13: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 517d16: jp 0x517d27 */
  if (pf) goto L_517d27;
L_517d18: /* 517d18: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 517d1c: mov eax, 1 */
  eax = 0x1u;
/* 517d21: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 517d23: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517d24: ret 8 */
  esp += 12; SPILL(); return;
L_517d27: /* 517d27: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 517d2b: xor eax, eax */
  eax = 0;
/* 517d2d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 517d2f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517d30: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517d70(void) {
  LOAD_REGS();
L_517d70: /* 517d70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517d71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517d72: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517d76: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517d79: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517d7c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517d84: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517d87: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517d88: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517d8b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 517d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517d91: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517d98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517d98: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517d9b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 517d9f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517da7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517daa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517dab: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517dae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517daf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517db0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517db3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517dbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517dba: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 517dbd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 517dbe: mov eax, edx */
  eax = edx;
/* 517dc0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517dc3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517dc6: jne 0x517dd8 */
  if (!zf) goto L_517dd8;
L_517dc8: /* 517dc8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517dcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 517dcd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517dce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517dcf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517dd2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517dd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517dd8: /* 517dd8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 517ddc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517ddd: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 517de1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 517de3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 517de6: jnp 0x517df7 */
  if (!pf) goto L_517df7;
L_517de8: /* 517de8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 517dec: mov eax, 1 */
  eax = 0x1u;
/* 517df1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 517df3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517df4: ret 8 */
  esp += 12; SPILL(); return;
L_517df7: /* 517df7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 517dfb: xor eax, eax */
  eax = 0;
/* 517dfd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 517dff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517e00: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517e40(void) {
  LOAD_REGS();
L_517e40: /* 517e40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517e41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517e42: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517e46: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517e49: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517e4c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517e54: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517e57: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517e58: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517e5b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 517e5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517e60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517e61: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517e68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517e68: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517e6b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 517e6f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 517e77: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517e7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517e7b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517e7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517e7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517e80: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517e83: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517e8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517e8a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 517e8d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 517e8e: mov eax, edx */
  eax = edx;
/* 517e90: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517e93: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517e96: jne 0x517ea8 */
  if (!zf) goto L_517ea8;
L_517e98: /* 517e98: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517e9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 517e9d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517e9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517e9f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517ea2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517ea8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517ea8: /* 517ea8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 517eac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517ead: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 517eb1: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 517eb7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 517eb9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 517ebc: je 0x517ec0 */
  if (zf) goto L_517ec0;
L_517ebe: /* 517ebe: fchs  */
  ST0 = -ST0;
L_517ec0: /* 517ec0: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 517ec6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 517ec8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 517ecb: jp 0x517edc */
  if (pf) goto L_517edc;
L_517ecd: /* 517ecd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 517ed1: mov eax, 1 */
  eax = 0x1u;
/* 517ed6: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 517ed8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517ed9: ret 8 */
  esp += 12; SPILL(); return;
L_517edc: /* 517edc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 517ee0: xor eax, eax */
  eax = 0;
/* 517ee2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 517ee4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517ee5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_517f20(void) {
  LOAD_REGS();
L_517f20: /* 517f20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517f21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517f22: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 517f26: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 517f30: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517f33: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517f36: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 517f3e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517f41: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517f42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 517f43: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517f46: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 517f4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517f4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517f4c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517f53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517f53: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 517f59: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 517f5b: je 0x517f68 */
  if (zf) goto L_517f68;
L_517f5d: /* 517f5d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 517f62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 517f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 517f65: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x517f68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517f68: /* 517f68: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 517f6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 517f6f: mov edi, eax */
  edi = eax;
/* 517f71: jne 0x517f77 */
  if (!zf) goto L_517f77;
L_517f73: /* 517f73: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_517f77: /* 517f77: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 517f7a: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 517f7e: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 517f86: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 517f89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 517f8a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517f8d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517f8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517f8f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517f92: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x517f99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 517f99: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 517f9c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 517f9d: mov eax, edx */
  eax = edx;
/* 517f9f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 517fa2: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 517fa5: jne 0x517fb7 */
  if (!zf) goto L_517fb7;
L_517fa7: /* 517fa7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 517faa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 517fac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 517fad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 517fae: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 517fb1: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x517fb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_517fb7: /* 517fb7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 517fbb: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 517fbf: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 517fc1: fst dword ptr [edi] */
  WF32((uint32_t)(edi), ST0);
/* 517fc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 517fc4: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 517fc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 517fc7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 517fc8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518000(void) {
  LOAD_REGS();
L_518000: /* 518000: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518001: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518002: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 518006: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 518010: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518013: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518016: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51801e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518021: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518022: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 518023: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518026: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51802a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51802b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51802c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518033u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518033: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 518039: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51803b: je 0x518048 */
  if (zf) goto L_518048;
L_51803d: /* 51803d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 518042: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 518044: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518045: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x518048u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518048: /* 518048: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 51804d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51804f: mov edi, eax */
  edi = eax;
/* 518051: jne 0x518057 */
  if (!zf) goto L_518057;
L_518053: /* 518053: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_518057: /* 518057: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51805a: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51805e: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 518066: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518069: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51806a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51806d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51806e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51806f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518072: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518079u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518079: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51807c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51807d: mov eax, edx */
  eax = edx;
/* 51807f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518082: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518085: jne 0x518097 */
  if (!zf) goto L_518097;
L_518087: /* 518087: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51808a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51808c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51808d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51808e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518091: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518097u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518097: /* 518097: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 518099: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51809d: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
/* 5180a1: fst dword ptr [edi] */
  WF32((uint32_t)(edi), ST0);
/* 5180a3: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 5180a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5180a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5180a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5180a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5180e0(void) {
  LOAD_REGS();
L_5180e0: /* 5180e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5180e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5180e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5180e6: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 5180f0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5180f3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5180f6: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5180fe: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518101: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518102: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 518103: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518106: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51810a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51810b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51810c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518113u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518113: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 518119: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51811b: je 0x518128 */
  if (zf) goto L_518128;
L_51811d: /* 51811d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 518122: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 518124: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518125: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x518128u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518128: /* 518128: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 51812d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51812f: mov edi, eax */
  edi = eax;
/* 518131: jne 0x518137 */
  if (!zf) goto L_518137;
L_518133: /* 518133: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_518137: /* 518137: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51813a: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51813e: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 518146: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518149: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51814a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51814d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51814e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51814f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518152: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518159u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518159: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51815c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51815d: mov eax, edx */
  eax = edx;
/* 51815f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518162: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518165: jne 0x518177 */
  if (!zf) goto L_518177;
L_518167: /* 518167: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51816a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51816c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51816d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51816e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518171: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518177u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518177: /* 518177: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51817b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51817f: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 518181: fst dword ptr [edi] */
  WF32((uint32_t)(edi), ST0);
/* 518183: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 518184: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 518186: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 518187: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 518188: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5181c0(void) {
  LOAD_REGS();
L_5181c0: /* 5181c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5181c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5181c2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5181c6: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 5181d0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5181d3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5181d6: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5181de: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5181e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5181e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5181e3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5181e6: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 5181ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5181eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5181ec: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5181f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5181f3: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 5181f9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5181fb: je 0x518208 */
  if (zf) goto L_518208;
L_5181fd: /* 5181fd: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 518202: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 518204: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518205: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x518208u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518208: /* 518208: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 51820d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51820f: mov edi, eax */
  edi = eax;
/* 518211: jne 0x518217 */
  if (!zf) goto L_518217;
L_518213: /* 518213: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_518217: /* 518217: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51821a: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51821e: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 518226: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518229: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51822a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51822d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51822e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51822f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518232: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518239u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518239: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51823c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51823d: mov eax, edx */
  eax = edx;
/* 51823f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518242: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518245: jne 0x518257 */
  if (!zf) goto L_518257;
L_518247: /* 518247: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51824a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51824c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51824d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51824e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518251: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518257u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518257: /* 518257: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 518259: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51825d: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 518261: fst dword ptr [edi] */
  WF32((uint32_t)(edi), ST0);
/* 518263: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 518264: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 518266: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 518267: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 518268: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5182a0(void) {
  LOAD_REGS();
L_5182a0: /* 5182a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5182a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5182a2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5182a6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5182a9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5182ac: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5182b4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5182b7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5182b8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5182bb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5182bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5182c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5182c1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5182c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5182c8: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5182cb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5182cc: mov eax, edx */
  eax = edx;
/* 5182ce: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5182d1: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5182d4: jne 0x5182e6 */
  if (!zf) goto L_5182e6;
L_5182d6: /* 5182d6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5182d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5182db: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5182dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5182dd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5182e0: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5182e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5182e6: /* 5182e6: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5182ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5182eb: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 5182f1: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 5182f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 5182f7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5182fa: jne 0x518306 */
  if (!zf) goto L_518306;
L_5182fc: /* 5182fc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 518300: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 518302: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 518303: ret 8 */
  esp += 12; SPILL(); return;
L_518306: /* 518306: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 51830a: fchs  */
  ST0 = -ST0;
/* 51830c: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 51830e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51830f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518340(void) {
  LOAD_REGS();
L_518340: /* 518340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518342: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 518346: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518349: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51834c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518354: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518357: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518358: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51835b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51835f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518361: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518368u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518368: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51836b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51836c: mov eax, edx */
  eax = edx;
/* 51836e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518371: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518374: jne 0x518386 */
  if (!zf) goto L_518386;
L_518376: /* 518376: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518379: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51837b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51837c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51837d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518380: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518386u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518386: /* 518386: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51838a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51838d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 518390: call 0x4e3e0e */
  esp -= 4; W32(esp, 0x518395u); SPILL(); f_4e3e0e(); if (g_unwind) return; RELOAD();
/* 518395: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 518399: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51839c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 51839e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51839f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5183a0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5183d0(void) {
  LOAD_REGS();
L_5183d0: /* 5183d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5183d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5183d2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5183d6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5183d9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5183dc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5183e4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5183e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5183e8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5183eb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5183ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5183f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5183f1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5183f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5183f8: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5183fb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5183fc: mov eax, edx */
  eax = edx;
/* 5183fe: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518401: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518404: jne 0x518416 */
  if (!zf) goto L_518416;
L_518406: /* 518406: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518409: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51840b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51840c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51840d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518410: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518416u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518416: /* 518416: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51841a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51841d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 518420: call 0x4e1e0b */
  esp -= 4; W32(esp, 0x518425u); SPILL(); f_4e1e0b(); if (g_unwind) return; RELOAD();
/* 518425: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 518429: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51842c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 51842e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51842f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 518430: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518460(void) {
  LOAD_REGS();
L_518460: /* 518460: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518461: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518462: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 518466: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518469: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51846c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518474: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518477: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518478: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51847b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51847f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518481: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518488u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518488: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51848b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51848c: mov eax, edx */
  eax = edx;
/* 51848e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518491: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518494: jne 0x5184a6 */
  if (!zf) goto L_5184a6;
L_518496: /* 518496: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518499: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51849b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51849c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51849d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5184a0: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5184a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5184a6: /* 5184a6: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5184aa: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5184ad: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5184b0: call 0x4e1807 */
  esp -= 4; W32(esp, 0x5184b5u); SPILL(); f_4e1807(); if (g_unwind) return; RELOAD();
/* 5184b5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 5184b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5184bc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 5184be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5184bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5184c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5184f0(void) {
  LOAD_REGS();
L_5184f0: /* 5184f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5184f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5184f2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5184f6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5184f9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5184fc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518504: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518507: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518508: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51850b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51850f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518511: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518518u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518518: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51851b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51851c: mov eax, edx */
  eax = edx;
/* 51851e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518521: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518524: jne 0x518536 */
  if (!zf) goto L_518536;
L_518526: /* 518526: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518529: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51852b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51852c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51852d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518530: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518536u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518536: /* 518536: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51853a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51853d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 518540: call 0x4e1212 */
  esp -= 4; W32(esp, 0x518545u); SPILL(); f_4e1212(); if (g_unwind) return; RELOAD();
/* 518545: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 518549: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51854c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 51854e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51854f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 518550: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518580(void) {
  LOAD_REGS();
L_518580: /* 518580: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518582: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 518586: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518589: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51858c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518594: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518597: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518598: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51859b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51859f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5185a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5185a1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5185a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5185a8: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5185ab: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5185ac: mov eax, edx */
  eax = edx;
/* 5185ae: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5185b1: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5185b4: jne 0x5185c6 */
  if (!zf) goto L_5185c6;
L_5185b6: /* 5185b6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5185b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5185bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5185bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5185bd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5185c0: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5185c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5185c6: /* 5185c6: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5185ca: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5185cd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5185d0: call 0x4e2a3b */
  esp -= 4; W32(esp, 0x5185d5u); SPILL(); f_4e2a3b(); if (g_unwind) return; RELOAD();
/* 5185d5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 5185d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5185dc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 5185de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5185df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5185e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518610(void) {
  LOAD_REGS();
L_518610: /* 518610: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518611: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518612: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 518616: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518619: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51861c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518624: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518627: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518628: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51862b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51862f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518631: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518638u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518638: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51863b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51863f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 518647: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51864a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51864b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51864e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51864f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518650: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518653: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51865au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51865a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51865d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51865e: mov eax, edx */
  eax = edx;
/* 518660: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518663: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518666: jne 0x518678 */
  if (!zf) goto L_518678;
L_518668: /* 518668: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51866b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51866d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51866e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51866f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518672: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518678u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518678: /* 518678: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51867c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51867f: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 518683: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 518687: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 51868a: call 0x4e2eff */
  esp -= 4; W32(esp, 0x51868fu); SPILL(); f_4e2eff(); if (g_unwind) return; RELOAD();
/* 51868f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 518693: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 518696: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 518698: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 518699: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51869a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5186d0(void) {
  LOAD_REGS();
L_5186d0: /* 5186d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5186d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5186d2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5186d6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5186d9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5186dc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5186e4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5186e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5186e8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5186eb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5186ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5186f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5186f1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5186f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5186f8: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5186fb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5186fc: mov eax, edx */
  eax = edx;
/* 5186fe: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518701: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518704: jne 0x518716 */
  if (!zf) goto L_518716;
L_518706: /* 518706: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518709: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51870b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51870c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51870d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518710: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518716u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518716: /* 518716: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51871a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51871d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 518720: call 0x4e325b */
  esp -= 4; W32(esp, 0x518725u); SPILL(); f_4e325b(); if (g_unwind) return; RELOAD();
/* 518725: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 518729: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51872c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 51872e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51872f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 518730: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518760(void) {
  LOAD_REGS();
L_518760: /* 518760: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518761: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518762: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 518766: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518769: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51876c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518774: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518777: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518778: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51877b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51877f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518781: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518788u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518788: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51878b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51878c: mov eax, edx */
  eax = edx;
/* 51878e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518791: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518794: jne 0x5187a6 */
  if (!zf) goto L_5187a6;
L_518796: /* 518796: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51879b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51879c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51879d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5187a0: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5187a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5187a6: /* 5187a6: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5187aa: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5187ad: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5187b0: call 0x4e321f */
  esp -= 4; W32(esp, 0x5187b5u); SPILL(); f_4e321f(); if (g_unwind) return; RELOAD();
/* 5187b5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 5187b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5187bc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 5187be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5187bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5187c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5187f0(void) {
  LOAD_REGS();
L_5187f0: /* 5187f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5187f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5187f2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5187f6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5187f9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5187fc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518804: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518807: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518808: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51880b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51880f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518810: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518811: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518818u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518818: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51881b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51881c: mov eax, edx */
  eax = edx;
/* 51881e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518821: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518824: jne 0x518836 */
  if (!zf) goto L_518836;
L_518826: /* 518826: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518829: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51882b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51882c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51882d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518830: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518836u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518836: /* 518836: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51883a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51883d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 518840: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x518845u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 518845: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 518849: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51884c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 51884e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51884f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 518850: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518880(void) {
  LOAD_REGS();
L_518880: /* 518880: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518882: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 518886: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518889: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51888c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518894: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518897: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518898: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51889b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51889f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5188a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5188a1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5188a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5188a8: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5188ab: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5188ac: mov eax, edx */
  eax = edx;
/* 5188ae: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5188b1: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5188b4: jne 0x5188c6 */
  if (!zf) goto L_5188c6;
L_5188b6: /* 5188b6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5188b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5188bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5188bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5188bd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5188c0: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5188c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5188c6: /* 5188c6: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5188ca: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5188ce: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 5188d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5188d3: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 5188d5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5188d6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518900(void) {
  LOAD_REGS();
L_518900: /* 518900: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 518904: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 518907: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 518908: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51890b: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51890e: jne 0x518920 */
  if (!zf) goto L_518920;
L_518910: /* 518910: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 518911: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 518913: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 518916: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 518919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51891a: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518920u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518920: /* 518920: call 0x4e1fc3 */
  esp -= 4; W32(esp, 0x518925u); SPILL(); f_4e1fc3(); if (g_unwind) return; RELOAD();
/* 518925: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 518929: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 51892b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518940(void) {
  LOAD_REGS();
L_518940: /* 518940: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518941: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518942: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 518946: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518949: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51894c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518954: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518957: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518958: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51895b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51895f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518961: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518968u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518968: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51896b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51896f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 518977: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51897a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51897b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51897e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51897f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518980: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518983: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51898au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51898a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51898d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51898e: mov eax, edx */
  eax = edx;
/* 518990: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518993: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518996: jne 0x5189a8 */
  if (!zf) goto L_5189a8;
L_518998: /* 518998: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51899b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51899d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51899e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51899f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5189a2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5189a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5189a8: /* 5189a8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5189ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5189ad: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 5189b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 5189b3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 5189b6: jp 0x5189c6 */
  if (pf) goto L_5189c6;
L_5189b8: /* 5189b8: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 5189bc: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 5189c0: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 5189c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5189c3: ret 8 */
  esp += 12; SPILL(); return;
L_5189c6: /* 5189c6: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 5189ca: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5189ce: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 5189d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5189d1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518a10(void) {
  LOAD_REGS();
L_518a10: /* 518a10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518a11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518a12: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 518a16: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518a19: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518a1c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518a24: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518a27: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518a28: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518a2b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 518a2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518a30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518a31: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518a38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518a38: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518a3b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 518a3f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 518a47: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518a4b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518a4e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518a4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518a50: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518a53: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518a5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518a5a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 518a5d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 518a5e: mov eax, edx */
  eax = edx;
/* 518a60: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518a63: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518a66: jne 0x518a78 */
  if (!zf) goto L_518a78;
L_518a68: /* 518a68: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518a6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 518a6d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518a6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518a6f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518a72: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518a78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518a78: /* 518a78: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 518a7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 518a7d: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 518a81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 518a83: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 518a86: jne 0x518a96 */
  if (!zf) goto L_518a96;
L_518a88: /* 518a88: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 518a8c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 518a90: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 518a92: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 518a93: ret 8 */
  esp += 12; SPILL(); return;
L_518a96: /* 518a96: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 518a9a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 518a9e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 518aa0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 518aa1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518ae0(void) {
  LOAD_REGS();
L_518ae0: /* 518ae0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 518ae3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518ae4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 518ae8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518aeb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518aee: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518af6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518af9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518afa: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518afd: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 518b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518b02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518b03: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518b0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518b0a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518b0d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 518b11: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 518b19: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518b1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518b1d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518b20: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518b21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518b22: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518b25: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518b2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518b2c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518b2f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518b32: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 518b3a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518b3d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518b3e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518b41: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 518b45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518b46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518b47: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518b4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518b4e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 518b51: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 518b52: mov eax, edx */
  eax = edx;
/* 518b54: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518b57: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518b5a: jne 0x518b6c */
  if (!zf) goto L_518b6c;
L_518b5c: /* 518b5c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518b5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 518b61: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518b62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518b63: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518b66: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518b6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518b6c: /* 518b6c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 518b70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 518b71: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 518b75: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 518b77: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 518b7a: jp 0x518b8c */
  if (pf) goto L_518b8c;
L_518b7c: /* 518b7c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 518b80: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 518b84: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 518b86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 518b89: ret 8 */
  esp += 12; SPILL(); return;
L_518b8c: /* 518b8c: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 518b90: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 518b94: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 518b96: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 518b99: jp 0x518bab */
  if (pf) goto L_518bab;
L_518b9b: /* 518b9b: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 518b9f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 518ba3: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 518ba5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 518ba8: ret 8 */
  esp += 12; SPILL(); return;
L_518bab: /* 518bab: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 518baf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 518bb3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 518bb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 518bb8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518c00(void) {
  LOAD_REGS();
L_518c00: /* 518c00: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 518c03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518c04: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 518c08: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518c0b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518c0e: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 518c16: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518c19: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518c1a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518c1d: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 518c21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518c22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518c23: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518c2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518c2a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518c2d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 518c31: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 518c39: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518c3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518c3d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518c40: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518c41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518c42: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518c45: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518c4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518c4c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518c4f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518c52: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518c5a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518c5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518c5e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518c61: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 518c65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518c66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518c67: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518c6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518c6e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 518c71: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 518c72: mov eax, edx */
  eax = edx;
/* 518c74: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518c77: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518c7a: jne 0x518c8c */
  if (!zf) goto L_518c8c;
L_518c7c: /* 518c7c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518c7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 518c81: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518c82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518c83: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518c86: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518c8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518c8c: /* 518c8c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 518c90: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 518c94: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 518c98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 518c99: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 518c9d: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 518ca1: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 518ca3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 518ca6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518ce0(void) {
  LOAD_REGS();
L_518ce0: /* 518ce0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 518ce3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518ce4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 518ce8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518ceb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518cee: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518cf6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518cf9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518cfa: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518cfd: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 518d01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518d02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518d03: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518d0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518d0a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518d0d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 518d11: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 518d19: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518d1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518d1d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518d20: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518d21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518d22: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518d25: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518d2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518d2c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 518d2f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518d32: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 518d3a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 518d3d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518d3e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518d41: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 518d45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518d46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518d47: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518d4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518d4e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 518d51: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 518d52: mov eax, edx */
  eax = edx;
/* 518d54: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 518d57: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 518d5a: jne 0x518d6c */
  if (!zf) goto L_518d6c;
L_518d5c: /* 518d5c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 518d5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 518d61: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 518d62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518d63: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 518d66: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x518d6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_518d6c: /* 518d6c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 518d70: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 518d74: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 518d78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 518d79: fld dword ptr [0x56bf08] */
  { double v = F32((uint32_t)(0x56bf08u)); FPUSH(v); }
/* 518d7f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 518d81: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 518d83: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 518d87: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 518d89: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 518d8b: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 518d8f: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 518d93: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 518d95: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 518d99: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 518d9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 518d9e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518df0(void) {
  LOAD_REGS();
L_518df0: /* 518df0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 518df4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 518df7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 518df9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 518dfc: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 518dff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 518e03: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 518e05: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 518e08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 518e09: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 518e0b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 518e0e: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 518e11: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 518e14: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 518e17: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 518e19: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 518e1c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 518e1f: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 518e22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 518e23: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518e40(void) {
  LOAD_REGS();
L_518e40: /* 518e40: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 518e43: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 518e47: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 518e4a: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 518e52: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518e5a: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 518e62: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 518e65: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 518e66: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 518e69: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 518e6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518e6e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 518e71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518e72: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518e79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518e79: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 518e7d: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 518e83: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 518e85: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 518e88: jp 0x518ec4 */
  if (pf) goto L_518ec4;
L_518e8a: /* 518e8a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 518e8e: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 518e94: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 518e96: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 518e99: jp 0x518ec4 */
  if (pf) goto L_518ec4;
L_518e9b: /* 518e9b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 518e9f: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 518ea5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 518ea7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 518eaa: jp 0x518ec4 */
  if (pf) goto L_518ec4;
L_518eac: /* 518eac: mov eax, 1 */
  eax = 0x1u;
/* 518eb1: xor edx, edx */
  edx = 0;
/* 518eb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 518eb5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 518eb9: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 518ebc: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 518ebe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 518ec1: ret 8 */
  esp += 12; SPILL(); return;
L_518ec4: /* 518ec4: xor eax, eax */
  eax = 0;
/* 518ec6: xor edx, edx */
  edx = 0;
/* 518ec8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 518eca: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 518ece: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 518ed1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 518ed3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 518ed6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518f10(void) {
  LOAD_REGS();
L_518f10: /* 518f10: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 518f13: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 518f17: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 518f1a: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 518f22: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518f2a: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 518f32: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 518f35: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 518f36: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 518f39: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 518f3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518f3e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 518f41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518f42: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518f49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518f49: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 518f4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 518f4e: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 518f52: call 0x4e2dfb */
  esp -= 4; W32(esp, 0x518f57u); SPILL(); f_4e2dfb(); if (g_unwind) return; RELOAD();
/* 518f57: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 518f59: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 518f5d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 518f5f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 518f62: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 518f65: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 518f68: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 518f6b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 518f6e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_518fa0(void) {
  LOAD_REGS();
L_518fa0: /* 518fa0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 518fa3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 518fa7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 518faa: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 518fb2: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 518fba: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 518fc2: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 518fc5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 518fc6: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 518fc9: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 518fcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 518fce: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 518fd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 518fd2: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x518fd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 518fd9: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 518fdd: mov eax, 0xffff */
  eax = 0xffffu;
/* 518fe2: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 518fe4: jne 0x51900a */
  if (!zf) goto L_51900a;
L_518fe6: /* 518fe6: test dword ptr [esp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 518fea: jne 0x51900a */
  if (!zf) goto L_51900a;
L_518fec: /* 518fec: test dword ptr [esp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 518ff0: jne 0x51900a */
  if (!zf) goto L_51900a;
L_518ff2: /* 518ff2: mov eax, 1 */
  eax = 0x1u;
/* 518ff7: xor edx, edx */
  edx = 0;
/* 518ff9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 518ffb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 518fff: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 519002: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 519004: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519007: ret 8 */
  esp += 12; SPILL(); return;
L_51900a: /* 51900a: xor eax, eax */
  eax = 0;
/* 51900c: xor edx, edx */
  edx = 0;
/* 51900e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 519010: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 519014: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 519017: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 519019: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51901c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519040(void) {
  LOAD_REGS();
L_519040: /* 519040: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519043: xor eax, eax */
  eax = 0;
/* 519045: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 519049: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 51904d: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 519051: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 519055: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 519058: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 51905b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51905c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51905d: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 519060: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 519061: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 519065: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519066: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 519069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51906a: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519071u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519071: mov ecx, 0xc */
  ecx = 0xcu;
/* 519076: mov esi, 0x5b31c0 */
  esi = 0x5b31c0u;
/* 51907b: lea edi, [esp + 0x44] */
  edi = (uint32_t)(esp + 0x44u);
/* 51907f: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 519083: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 519085: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 519086: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 51908a: call 0x4e3a8f */
  esp -= 4; W32(esp, 0x51908fu); SPILL(); f_4e3a8f(); if (g_unwind) return; RELOAD();
/* 51908f: mov esi, eax */
  esi = eax;
/* 519091: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 519095: mov ecx, 0xc */
  ecx = 0xcu;
/* 51909a: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
/* 51909e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 5190a0: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 5190a4: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 5190a8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5190aa: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 5190ae: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 5190b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5190b2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5190b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5190b6: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5190b9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5190e0(void) {
  LOAD_REGS();
L_5190e0: /* 5190e0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5190e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5190e4: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 5190e8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5190eb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5190ee: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5190f1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5190f2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5190f5: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 5190f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5190fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5190fb: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519102u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519102: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 519105: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519106: mov eax, edx */
  eax = edx;
/* 519108: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51910b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51910e: jne 0x519120 */
  if (!zf) goto L_519120;
L_519110: /* 519110: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519113: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 519115: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519116: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519117: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51911a: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x519120u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519120: /* 519120: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 519124: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 519128: fchs  */
  ST0 = -ST0;
/* 51912a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51912b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 51912f: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 519133: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 519137: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 519139: fchs  */
  ST0 = -ST0;
/* 51913b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 51913f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 519143: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 519147: fchs  */
  ST0 = -ST0;
/* 519149: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 51914c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 519150: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 519154: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 519157: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51915a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519180(void) {
  LOAD_REGS();
L_519180: /* 519180: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519184: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 519188: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51918b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51918e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519191: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519192: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519195: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 519199: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51919a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51919b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5191a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5191a2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5191a5: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 5191a9: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 5191b1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5191b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5191b5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5191b8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5191b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5191ba: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5191bd: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5191c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5191c4: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5191c7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5191c8: mov eax, edx */
  eax = edx;
/* 5191ca: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5191cd: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5191d0: jne 0x5191e2 */
  if (!zf) goto L_5191e2;
L_5191d2: /* 5191d2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5191d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5191d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5191d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5191d9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5191dc: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5191e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5191e2: /* 5191e2: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 5191e6: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 5191ea: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 5191ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5191ef: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 5191f3: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 5191f7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 5191fb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 5191fd: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 519201: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 519205: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 519209: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 51920d: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 519211: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 519214: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 519218: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51921c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51921f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519222: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519260(void) {
  LOAD_REGS();
L_519260: /* 519260: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519263: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519264: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 519268: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51926b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51926e: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 519276: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519279: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51927a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51927d: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 519281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519282: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519283: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51928au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51928a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51928d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519290: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 519294: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519295: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519298: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519299: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51929a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51929d: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5192a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5192a4: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5192a7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5192a8: mov eax, edx */
  eax = edx;
/* 5192aa: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5192ad: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5192b0: jne 0x5192c2 */
  if (!zf) goto L_5192c2;
L_5192b2: /* 5192b2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5192b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5192b7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5192b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5192b9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5192bc: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5192c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5192c2: /* 5192c2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 5192c6: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 5192ca: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 5192ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5192cf: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 5192d3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5192d7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 5192db: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 5192dd: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 5192e1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5192e5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 5192e9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5192ed: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 5192f1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 5192f4: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 5192f8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5192fc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 5192ff: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519302: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519340(void) {
  LOAD_REGS();
L_519340: /* 519340: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519343: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519344: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 519348: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51934b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51934e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519351: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519352: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519355: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 519359: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51935a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51935b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519362u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519362: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519365: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519368: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51936c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51936d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519370: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519371: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519372: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519375: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51937cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51937c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51937f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519380: mov eax, edx */
  eax = edx;
/* 519382: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 519385: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 519388: jne 0x51939a */
  if (!zf) goto L_51939a;
L_51938a: /* 51938a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51938d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51938f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519391: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519394: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51939au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51939a: /* 51939a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51939e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 5193a2: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 5193a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5193a7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 5193ab: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 5193af: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 5193b3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 5193b5: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 5193b9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 5193bd: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 5193c1: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5193c5: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 5193c9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 5193cc: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5193d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5193d4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 5193d7: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5193da: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519410(void) {
  LOAD_REGS();
L_519410: /* 519410: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519413: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519414: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 519418: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51941b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51941e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519421: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519422: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519425: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 519429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51942a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51942b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519432u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519432: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519435: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 519439: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 519441: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519444: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519445: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519448: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519449: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51944a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51944d: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519454u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519454: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 519457: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519458: mov eax, edx */
  eax = edx;
/* 51945a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51945d: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 519460: jne 0x519472 */
  if (!zf) goto L_519472;
L_519462: /* 519462: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519465: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 519467: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519469: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51946c: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x519472u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519472: /* 519472: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 519478: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 51947c: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 519480: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519481: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 519485: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 519487: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 51948b: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 51948f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 519493: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 519495: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 519497: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 51949b: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 51949f: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 5194a3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 5194a6: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5194aa: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5194ae: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 5194b1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5194b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5194f0(void) {
  LOAD_REGS();
L_5194f0: /* 5194f0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5194f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5194f4: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 5194f8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5194fb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5194fe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519501: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519502: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519505: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 519509: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51950a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51950b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519512u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519512: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519515: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519518: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51951c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51951d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519520: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519521: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519522: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519525: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51952cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51952c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51952f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519530: mov eax, edx */
  eax = edx;
/* 519532: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 519535: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 519538: jne 0x51954a */
  if (!zf) goto L_51954a;
L_51953a: /* 51953a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51953d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51953f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519541: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519544: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51954au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51954a: /* 51954a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51954e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 519552: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 519556: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519557: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 51955b: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 51955f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 519563: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 519565: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 519569: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 51956d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 519571: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 519575: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 519579: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51957c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 519580: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 519584: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 519587: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51958a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5195c0(void) {
  LOAD_REGS();
L_5195c0: /* 5195c0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5195c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5195c4: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 5195c8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5195cb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5195ce: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5195d1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5195d2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5195d5: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 5195d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5195da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5195db: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5195e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5195e2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5195e5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5195e8: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 5195ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5195ed: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5195f0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5195f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5195f2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5195f5: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5195fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5195fc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5195ff: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519600: mov eax, edx */
  eax = edx;
/* 519602: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 519605: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 519608: jne 0x51961a */
  if (!zf) goto L_51961a;
L_51960a: /* 51960a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51960d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51960f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519611: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519614: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51961au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51961a: /* 51961a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51961e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 519622: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 519626: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519627: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 51962b: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 51962f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 519633: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 519635: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 519639: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 51963d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 519641: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 519645: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 519649: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51964c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 519650: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 519654: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 519657: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51965a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519690(void) {
  LOAD_REGS();
L_519690: /* 519690: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519697: mov esi, dword ptr [esp + 0x8c] */
  esi = R32((uint32_t)(esp + 0x8cu));
/* 51969e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5196a1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5196a4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5196a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5196a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5196a9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5196ac: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 5196b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5196b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5196b2: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5196b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5196b9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5196bc: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5196bf: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 5196c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5196c4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5196c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5196c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5196c9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5196cc: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5196d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5196d3: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5196d6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5196d7: mov eax, edx */
  eax = edx;
/* 5196d9: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5196dc: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5196df: jne 0x5196f1 */
  if (!zf) goto L_5196f1;
L_5196e1: /* 5196e1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5196e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5196e6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5196e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5196e8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5196eb: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5196f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5196f1: /* 5196f1: mov ecx, 0xc */
  ecx = 0xcu;
/* 5196f6: mov esi, 0x5b31c0 */
  esi = 0x5b31c0u;
/* 5196fb: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 5196ff: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 519703: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 519705: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 519706: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 51970a: call 0x4e3a8f */
  esp -= 4; W32(esp, 0x51970fu); SPILL(); f_4e3a8f(); if (g_unwind) return; RELOAD();
/* 51970f: mov esi, eax */
  esi = eax;
/* 519711: mov ecx, 0xc */
  ecx = 0xcu;
/* 519716: lea edi, [esp + 0x5c] */
  edi = (uint32_t)(esp + 0x5cu);
/* 51971a: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51971e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 519720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519721: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 519725: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519726: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 51972a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51972b: call 0x4e24fa */
  esp -= 4; W32(esp, 0x519730u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 519730: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 519734: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 51973b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 51973f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 519741: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 519745: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519748: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 51974b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51974c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 51974f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519750: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519756: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5197a0(void) {
  LOAD_REGS();
L_5197a0: /* 5197a0: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5197a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5197a7: mov esi, dword ptr [esp + 0x8c] */
  esi = R32((uint32_t)(esp + 0x8cu));
/* 5197ae: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5197b1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5197b4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5197b7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5197b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5197b9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5197bc: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 5197c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5197c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5197c2: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5197c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5197c9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5197cc: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5197cf: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 5197d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5197d4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5197d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5197d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5197d9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5197dc: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5197e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5197e3: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5197e6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5197e7: mov eax, edx */
  eax = edx;
/* 5197e9: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5197ec: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5197ef: jne 0x519801 */
  if (!zf) goto L_519801;
L_5197f1: /* 5197f1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5197f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5197f6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5197f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5197f8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5197fb: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x519801u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519801: /* 519801: mov ecx, 0xc */
  ecx = 0xcu;
/* 519806: mov esi, 0x5b31c0 */
  esi = 0x5b31c0u;
/* 51980b: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 51980f: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 519813: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 519815: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 519816: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 51981a: call 0x4e13e8 */
  esp -= 4; W32(esp, 0x51981fu); SPILL(); f_4e13e8(); if (g_unwind) return; RELOAD();
/* 51981f: mov esi, eax */
  esi = eax;
/* 519821: mov ecx, 0xc */
  ecx = 0xcu;
/* 519826: lea edi, [esp + 0x5c] */
  edi = (uint32_t)(esp + 0x5cu);
/* 51982a: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51982e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 519830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519831: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 519835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519836: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 51983a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51983b: call 0x4e24fa */
  esp -= 4; W32(esp, 0x519840u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 519840: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 519844: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 51984b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 51984f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 519851: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 519855: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519858: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 51985b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51985c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 51985f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519860: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519866: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5198b0(void) {
  LOAD_REGS();
L_5198b0: /* 5198b0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5198b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5198b4: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 5198b8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5198bb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5198be: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5198c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5198c2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5198c5: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5198c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5198ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5198cb: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5198d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5198d2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5198d5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5198d8: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 5198dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5198dd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5198e0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5198e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5198e2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5198e5: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5198ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5198ec: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5198ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5198f0: mov eax, edx */
  eax = edx;
/* 5198f2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5198f5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5198f8: jne 0x51990a */
  if (!zf) goto L_51990a;
L_5198fa: /* 5198fa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5198fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5198ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519901: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519904: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51990au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51990a: /* 51990a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51990e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51990f: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 519913: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 519915: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 519918: jp 0x519949 */
  if (pf) goto L_519949;
L_51991a: /* 51991a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51991e: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 519922: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 519924: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 519927: jp 0x519949 */
  if (pf) goto L_519949;
L_519929: /* 519929: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 51992d: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 519931: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 519933: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 519936: jp 0x519949 */
  if (pf) goto L_519949;
L_519938: /* 519938: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 51993c: mov eax, 1 */
  eax = 0x1u;
/* 519941: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 519943: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519946: ret 8 */
  esp += 12; SPILL(); return;
L_519949: /* 519949: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51994d: xor eax, eax */
  eax = 0;
/* 51994f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 519951: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519954: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519990(void) {
  LOAD_REGS();
L_519990: /* 519990: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519993: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519994: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 519998: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51999b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51999e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5199a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5199a2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5199a5: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5199a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5199aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5199ab: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5199b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5199b2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5199b5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5199b8: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 5199bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5199bd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5199c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5199c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5199c2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5199c5: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5199ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5199cc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5199cf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5199d0: mov eax, edx */
  eax = edx;
/* 5199d2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5199d5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5199d8: jne 0x5199ea */
  if (!zf) goto L_5199ea;
L_5199da: /* 5199da: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5199dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5199df: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5199e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5199e1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5199e4: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5199eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5199ea: /* 5199ea: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5199ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5199ef: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 5199f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 5199f5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 5199f8: jp 0x519a26 */
  if (pf) goto L_519a26;
L_5199fa: /* 5199fa: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5199fe: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 519a02: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 519a04: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 519a07: jp 0x519a26 */
  if (pf) goto L_519a26;
L_519a09: /* 519a09: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 519a0d: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 519a11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 519a13: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 519a16: jp 0x519a26 */
  if (pf) goto L_519a26;
L_519a18: /* 519a18: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 519a1c: xor eax, eax */
  eax = 0;
/* 519a1e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 519a20: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519a23: ret 8 */
  esp += 12; SPILL(); return;
L_519a26: /* 519a26: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 519a2a: mov eax, 1 */
  eax = 0x1u;
/* 519a2f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 519a31: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519a34: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519a70(void) {
  LOAD_REGS();
L_519a70: /* 519a70: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519a73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519a74: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 519a78: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519a7b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519a7e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519a81: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519a82: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519a85: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 519a89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519a8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519a8b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519a92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519a92: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519a95: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519a98: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 519a9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519a9d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519aa0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519aa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519aa2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519aa5: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519aacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519aac: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 519aaf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519ab0: mov eax, edx */
  eax = edx;
/* 519ab2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 519ab5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 519ab8: jne 0x519aca */
  if (!zf) goto L_519aca;
L_519aba: /* 519aba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519abd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 519abf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519ac1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519ac4: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x519acau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519aca: /* 519aca: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 519ace: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 519ad2: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 519ad6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519ad7: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 519adb: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 519adf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 519ae1: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 519ae5: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 519ae9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 519aeb: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 519aed: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519af0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519b30(void) {
  LOAD_REGS();
L_519b30: /* 519b30: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519b33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519b34: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 519b38: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519b3b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519b3e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519b41: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519b42: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519b45: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 519b49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519b4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519b4b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519b52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519b52: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519b55: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519b58: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 519b5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519b5d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519b60: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519b61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519b62: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519b65: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519b6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519b6c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 519b6f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519b70: mov eax, edx */
  eax = edx;
/* 519b72: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 519b75: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 519b78: jne 0x519b8a */
  if (!zf) goto L_519b8a;
L_519b7a: /* 519b7a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519b7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 519b7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519b80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519b81: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519b84: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x519b8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519b8a: /* 519b8a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 519b8e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 519b92: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 519b96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519b97: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 519b9b: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 519b9f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 519ba1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 519ba5: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 519ba9: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 519bad: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 519baf: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 519bb3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 519bb7: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 519bbb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 519bbd: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 519bc1: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 519bc5: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 519bc9: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 519bcd: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 519bd0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 519bd4: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 519bd8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 519bda: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 519bde: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 519be2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 519be5: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519be8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519c20(void) {
  LOAD_REGS();
L_519c20: /* 519c20: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519c23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519c24: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 519c28: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 519c32: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519c35: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519c38: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519c3b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519c3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 519c3d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519c40: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 519c44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519c45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519c46: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519c4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519c4d: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 519c53: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 519c55: je 0x519c62 */
  if (zf) goto L_519c62;
L_519c57: /* 519c57: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 519c5c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 519c5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519c5f: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x519c62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519c62: /* 519c62: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 519c68: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 519c6a: jne 0x519c70 */
  if (!zf) goto L_519c70;
L_519c6c: /* 519c6c: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_519c70: /* 519c70: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519c73: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 519c77: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 519c7f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519c82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519c83: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519c86: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519c87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519c88: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519c8b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519c92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519c92: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 519c95: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519c96: mov eax, edx */
  eax = edx;
/* 519c98: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 519c9b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 519c9e: jne 0x519cb0 */
  if (!zf) goto L_519cb0;
L_519ca0: /* 519ca0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519ca3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 519ca5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519ca6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519ca7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519caa: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x519cb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519cb0: /* 519cb0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 519cb4: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 519cb8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 519cbc: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 519cbe: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 519cc0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 519cc2: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 519cc5: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 519cc8: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 519ccb: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 519cce: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 519cd0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 519cd2: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 519cd5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 519cd8: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 519cdb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 519cdc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 519cdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519ce0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519ce3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519d30(void) {
  LOAD_REGS();
L_519d30: /* 519d30: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519d33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519d34: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 519d38: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 519d42: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519d45: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519d48: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519d4b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519d4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 519d4d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519d50: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 519d54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519d55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519d56: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519d5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519d5d: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 519d63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 519d65: je 0x519d72 */
  if (zf) goto L_519d72;
L_519d67: /* 519d67: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 519d6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 519d6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519d6f: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x519d72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519d72: /* 519d72: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 519d78: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 519d7a: jne 0x519d80 */
  if (!zf) goto L_519d80;
L_519d7c: /* 519d7c: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
L_519d80: /* 519d80: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519d83: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519d86: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 519d8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519d8b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519d8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519d8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519d90: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519d93: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519d9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519d9a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 519d9d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519d9e: mov eax, edx */
  eax = edx;
/* 519da0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 519da3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 519da6: jne 0x519db8 */
  if (!zf) goto L_519db8;
L_519da8: /* 519da8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519dab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 519dad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519dae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519daf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519db2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x519db8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519db8: /* 519db8: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 519dbc: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 519dc0: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 519dc2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 519dc4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 519dc8: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 519dcb: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 519dce: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 519dd2: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 519dd5: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 519dd8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 519dda: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 519ddc: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 519ddf: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 519de2: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 519de5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 519de6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 519de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519dea: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519ded: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519e20(void) {
  LOAD_REGS();
L_519e20: /* 519e20: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519e23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519e24: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 519e28: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 519e32: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519e35: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519e38: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519e3b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519e3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 519e3d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519e40: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 519e44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519e45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519e46: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519e4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519e4d: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 519e53: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 519e55: je 0x519e62 */
  if (zf) goto L_519e62;
L_519e57: /* 519e57: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 519e5c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 519e5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519e5f: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x519e62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519e62: /* 519e62: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 519e68: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 519e6a: jne 0x519e70 */
  if (!zf) goto L_519e70;
L_519e6c: /* 519e6c: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_519e70: /* 519e70: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519e73: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 519e77: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 519e7f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519e82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519e83: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519e86: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519e87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519e88: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519e8b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519e92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519e92: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 519e95: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519e96: mov eax, edx */
  eax = edx;
/* 519e98: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 519e9b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 519e9e: jne 0x519eb0 */
  if (!zf) goto L_519eb0;
L_519ea0: /* 519ea0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519ea3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 519ea5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519ea6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519ea7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519eaa: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x519eb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519eb0: /* 519eb0: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 519eb6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 519eba: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 519ebe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 519ec0: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 519ec2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 519ec4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 519ec6: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 519ec9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 519ecc: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 519ecf: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 519ed2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 519ed4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 519ed6: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 519ed9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 519edc: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 519edf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 519ee0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 519ee3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519ee4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519ee7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_519f30(void) {
  LOAD_REGS();
L_519f30: /* 519f30: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 519f33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519f34: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 519f38: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 519f42: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519f45: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519f48: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519f4b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519f4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 519f4d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519f50: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 519f54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519f55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519f56: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519f5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519f5d: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 519f63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 519f65: je 0x519f72 */
  if (zf) goto L_519f72;
L_519f67: /* 519f67: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 519f6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 519f6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 519f6f: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x519f72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519f72: /* 519f72: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 519f78: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 519f7a: jne 0x519f80 */
  if (!zf) goto L_519f80;
L_519f7c: /* 519f7c: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
L_519f80: /* 519f80: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 519f83: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 519f86: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 519f8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 519f8b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519f8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519f8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519f90: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519f93: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x519f9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 519f9a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 519f9d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 519f9e: mov eax, edx */
  eax = edx;
/* 519fa0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 519fa3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 519fa6: jne 0x519fb8 */
  if (!zf) goto L_519fb8;
L_519fa8: /* 519fa8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 519fab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 519fad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 519fae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 519faf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 519fb2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x519fb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_519fb8: /* 519fb8: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 519fbc: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 519fc0: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 519fc2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 519fc4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 519fc8: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 519fcb: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 519fce: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 519fd2: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 519fd5: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 519fd8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 519fda: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 519fdc: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 519fdf: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 519fe2: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 519fe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 519fe6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 519fe9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 519fea: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 519fed: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51a020(void) {
  LOAD_REGS();
L_51a020: /* 51a020: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a023: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a024: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 51a028: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 51a032: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a035: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a038: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a03b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a03c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51a03d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a040: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51a044: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a045: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a046: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a04du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a04d: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51a053: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51a055: je 0x51a062 */
  if (zf) goto L_51a062;
L_51a057: /* 51a057: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51a05c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51a05e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a05f: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51a062u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a062: /* 51a062: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 51a068: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51a06a: jne 0x51a070 */
  if (!zf) goto L_51a070;
L_51a06c: /* 51a06c: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
L_51a070: /* 51a070: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a073: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a076: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51a07a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51a07b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a07e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a07f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a080: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a083: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a08au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a08a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51a08d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51a08e: mov eax, edx */
  eax = edx;
/* 51a090: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51a093: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51a096: jne 0x51a0a8 */
  if (!zf) goto L_51a0a8;
L_51a098: /* 51a098: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a09b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51a09d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a09e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a09f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a0a2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51a0a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a0a8: /* 51a0a8: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 51a0aa: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 51a0ae: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 51a0b2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 51a0b4: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 51a0b7: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 51a0bb: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 51a0be: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 51a0c1: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 51a0c5: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 51a0c8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 51a0ca: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51a0cc: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51a0cf: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51a0d2: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 51a0d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51a0d6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51a0d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51a0da: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a0dd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51a110(void) {
  LOAD_REGS();
L_51a110: /* 51a110: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a113: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a114: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 51a118: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a11b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a11e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a121: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a122: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a125: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51a129: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a12a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a12b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a132u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a132: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51a135: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51a136: mov eax, edx */
  eax = edx;
/* 51a138: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51a13b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51a13e: jne 0x51a150 */
  if (!zf) goto L_51a150;
L_51a140: /* 51a140: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a143: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51a145: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a146: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a147: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a14a: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51a150u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a150: /* 51a150: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51a154: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a157: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 51a15b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51a15f: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 51a163: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 51a165: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51a169: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 51a16d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 51a16f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 51a172: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x51a177u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 51a177: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51a17b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a17e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 51a180: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51a181: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a184: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51a1b0(void) {
  LOAD_REGS();
L_51a1b0: /* 51a1b0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a1b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a1b4: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 51a1b8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a1bb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a1be: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a1c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a1c2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a1c5: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51a1c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a1ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a1cb: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a1d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a1d2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51a1d5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51a1d6: mov eax, edx */
  eax = edx;
/* 51a1d8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51a1db: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51a1de: jne 0x51a1f0 */
  if (!zf) goto L_51a1f0;
L_51a1e0: /* 51a1e0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a1e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51a1e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a1e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a1e7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a1ea: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51a1f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a1f0: /* 51a1f0: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51a1f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51a1f5: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51a1f9: call 0x4e3b5c */
  esp -= 4; W32(esp, 0x51a1feu); SPILL(); f_4e3b5c(); if (g_unwind) return; RELOAD();
/* 51a1fe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 51a200: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 51a204: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51a206: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 51a209: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51a20c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 51a20f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51a212: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51a213: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a216: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51a240(void) {
  LOAD_REGS();
L_51a240: /* 51a240: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a246: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51a247: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51a248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a249: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 51a250: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51a251: xor edi, edi */
  edi = 0;
/* 51a253: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 51a259: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a25c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a25f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a262: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a263: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a266: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 51a26d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a26e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a26f: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a276u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a276: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51a27c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a27e: je 0x51a28b */
  if (zf) goto L_51a28b;
L_51a280: /* 51a280: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51a285: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51a287: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a288: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51a28bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a28b: /* 51a28b: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 51a290: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a292: mov ebp, eax */
  ebp = eax;
/* 51a294: jne 0x51a29d */
  if (!zf) goto L_51a29d;
L_51a296: /* 51a296: lea ebp, [esp + 0x88] */
  ebp = (uint32_t)(esp + 0x88u);
L_51a29d: /* 51a29d: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 51a2a3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a2a6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a2a9: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 51a2ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51a2ae: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a2b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a2b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a2b3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a2b6: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a2bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a2bd: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51a2c3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a2c5: je 0x51a2d2 */
  if (zf) goto L_51a2d2;
L_51a2c7: /* 51a2c7: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51a2cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51a2ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a2cf: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51a2d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a2d2: /* 51a2d2: mov ebx, dword ptr [0x5afecc] */
  ebx = R32((uint32_t)(0x5afeccu));
/* 51a2d8: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a2da: jne 0x51a2e0 */
  if (!zf) goto L_51a2e0;
L_51a2dc: /* 51a2dc: lea ebx, [esp + 0x7c] */
  ebx = (uint32_t)(esp + 0x7cu);
L_51a2e0: /* 51a2e0: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 51a2e6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a2e9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a2ec: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 51a2f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51a2f4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a2f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a2f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a2f9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a2fc: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a303u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a303: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51a309: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a30b: je 0x51a318 */
  if (zf) goto L_51a318;
L_51a30d: /* 51a30d: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51a312: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51a314: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a315: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51a318u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a318: /* 51a318: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 51a31e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51a320: jne 0x51a329 */
  if (!zf) goto L_51a329;
L_51a322: /* 51a322: lea edi, [esp + 0x94] */
  edi = (uint32_t)(esp + 0x94u);
L_51a329: /* 51a329: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51a32c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51a32d: mov eax, edx */
  eax = edx;
/* 51a32f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51a332: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51a335: jne 0x51a347 */
  if (!zf) goto L_51a347;
L_51a337: /* 51a337: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a33a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51a33c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a33d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a33e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a341: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51a347u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a347: /* 51a347: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 51a34f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51a353: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 51a357: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 51a35f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51a363: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 51a367: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 51a36f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 51a373: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 51a377: mov ecx, ebp */
  ecx = ebp;
/* 51a379: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51a37b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 51a37e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 51a381: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 51a385: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 51a389: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 51a38d: mov edx, ebx */
  edx = ebx;
/* 51a38f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 51a391: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 51a394: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 51a397: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 51a39b: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 51a39f: mov eax, edi */
  eax = edi;
/* 51a3a1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 51a3a3: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 51a3a7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 51a3ab: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 51a3ae: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 51a3b1: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 51a3b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51a3b6: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 51a3ba: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 51a3be: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 51a3c2: call 0x4e405c */
  esp -= 4; W32(esp, 0x51a3c7u); SPILL(); f_4e405c(); if (g_unwind) return; RELOAD();
/* 51a3c7: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 51a3cb: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 51a3ce: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 51a3d2: mov dword ptr [ebp + 4], eax */
  W32((uint32_t)(ebp + 0x4u), eax);
/* 51a3d5: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 51a3d9: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 51a3dc: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 51a3e0: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 51a3e2: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 51a3e6: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 51a3e9: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 51a3ed: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 51a3f0: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 51a3f4: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 51a3f6: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 51a3fa: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 51a3fd: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 51a401: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 51a404: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51a405: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51a406: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51a407: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51a408: add esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a40e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51a4a0(void) {
  LOAD_REGS();
L_51a4a0: /* 51a4a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51a4a4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 51a4a7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a4aa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51a4ab: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51a4ae: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51a4b1: jne 0x51a4c3 */
  if (!zf) goto L_51a4c3;
L_51a4b3: /* 51a4b3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51a4b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51a4b6: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51a4b9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51a4bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a4bd: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51a4c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a4c3: /* 51a4c3: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 51a4c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a4c8: call 0x4e274d */
  esp -= 4; W32(esp, 0x51a4cdu); SPILL(); f_4e274d(); if (g_unwind) return; RELOAD();
/* 51a4cd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 51a4cf: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 51a4d3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51a4d5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 51a4d8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 51a4db: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 51a4de: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 51a4e1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a4e4: ret 8 */
  esp += 12; SPILL(); return;
}
