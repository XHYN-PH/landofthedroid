#include "recomp.h"
#include "rec_mod.h"

void f_78408b(void) {
  LOAD_REGS();
L_78408b: /* 78408b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78408e: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 784094: mov dword ptr [ebx + 0x32c], ecx */
  W32((uint32_t)(ebx + 0x32cu), ecx);
/* 78409a: xor eax, eax */
  eax = 0;
/* 78409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7840a0: /* 7840a0: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7840a6: jge 0x7840cb */
  if ((sf == of)) goto L_7840cb;
L_7840a8: /* 7840a8: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7840ae: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840b2: je 0x7840c8 */
  if (zf) goto L_7840c8;
L_7840b4: /* 7840b4: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840ba: jne 0x7840c2 */
  if (!zf) goto L_7840c2;
L_7840bc: /* 7840bc: mov dword ptr [ebx + 0x328], eax */
  W32((uint32_t)(ebx + 0x328u), eax);
L_7840c2: /* 7840c2: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_7840c8: /* 7840c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7840c9: jmp 0x7840a0 */
  goto L_7840a0;
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7840cb(void) {
  LOAD_REGS();
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7841dc(void) {
  LOAD_REGS();
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7841ec(void) {
  LOAD_REGS();
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_784459(void) {
  LOAD_REGS();
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7844bc(void) {
  LOAD_REGS();
L_7844bc: /* 7844bc: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7844bf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7844c4: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7844c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7844c8: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 7844cb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7844d0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7844d0(); return;
}

void f_7844d0(void) {
  LOAD_REGS();
L_7844d0: /* 7844d0: push 0xa096ac */
  { uint32_t v = 0xa096acu; esp -= 4; W32(esp, v); }
/* 7844d5: push 0xac6bf4 */
  { uint32_t v = 0xac6bf4u; esp -= 4; W32(esp, v); }
/* 7844da: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7844e0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7844e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7844e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7844e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7844e7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7844ecu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7844ec(); return;
}

void f_7844ec(void) {
  LOAD_REGS();
L_7844ec: /* 7844ec: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7844ef: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7844f4: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 7844f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7844f8: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7844fb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x784500u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_784500(); return;
}

void f_784500(void) {
  LOAD_REGS();
L_784500: /* 784500: push 0xa09690 */
  { uint32_t v = 0xa09690u; esp -= 4; W32(esp, v); }
/* 784505: push 0xac6ab8 */
  { uint32_t v = 0xac6ab8u; esp -= 4; W32(esp, v); }
/* 78450a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x784510u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 784510: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784513: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784515: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784517: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78451cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78451c(); return;
}

void f_78451c(void) {
  LOAD_REGS();
L_78451c: /* 78451c: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 78451f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 784524: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 784527: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784528: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 78452b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x784530u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_784530(); return;
}

void f_784530(void) {
  LOAD_REGS();
L_784530: /* 784530: push 0xa0965c */
  { uint32_t v = 0xa0965cu; esp -= 4; W32(esp, v); }
/* 784535: push 0xac6a80 */
  { uint32_t v = 0xac6a80u; esp -= 4; W32(esp, v); }
/* 78453a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x784540u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 784540: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784543: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784545: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784547: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78454cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78454c(); return;
}

void f_78454c(void) {
  LOAD_REGS();
L_78454c: /* 78454c: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 78454f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 784554: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 784557: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784558: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 78455b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x784560u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_784560(); return;
}

void f_784560(void) {
  LOAD_REGS();
  goto L_784560;
L_783c5e: /* 783c5e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 783c64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 783c66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783c67: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x783c6du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 783c6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783c70: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 783c73: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 783c7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 783c7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 783c7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 783c7d: mov esp, ebp */
  esp = ebp;
/* 783c7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 783c80: ret 4 */
  esp += 8; SPILL(); return;
L_784560: /* 784560: push 0xa09630 */
  { uint32_t v = 0xa09630u; esp -= 4; W32(esp, v); }
/* 784565: push 0xac6a4c */
  { uint32_t v = 0xac6a4cu; esp -= 4; W32(esp, v); }
/* 78456a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x784570u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 784570: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784573: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784575: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784577: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78457cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 78457c: push 0xac6950 */
  { uint32_t v = 0xac6950u; esp -= 4; W32(esp, v); }
/* 784581: jmp 0x783c5e */
  goto L_783c5e;
}

void f_784586(void) {
  LOAD_REGS();
L_784586: /* 784586: mov eax, dword ptr [ebp - 0xc8] */
  eax = R32((uint32_t)(ebp + 0xffffff38u));
/* 78458c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 784591: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 784594: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784595: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 784598: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78459du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78459d(); return;
}

void f_78459d(void) {
  LOAD_REGS();
L_78459d: /* 78459d: push 0xa09600 */
  { uint32_t v = 0xa09600u; esp -= 4; W32(esp, v); }
/* 7845a2: push 0xac6cf0 */
  { uint32_t v = 0xac6cf0u; esp -= 4; W32(esp, v); }
/* 7845a7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7845adu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7845ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7845b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7845b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7845b4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7845b9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7845b9: guest_badaddr(0x7845b9); return;
}

void f_784880(void) {
  LOAD_REGS();
L_784880: /* 784880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784881: mov esi, ecx */
  esi = ecx;
/* 784883: call 0x6c6dde */
  esp -= 4; W32(esp, 0x784888u); SPILL(); f_6c6dde(); if (g_unwind) return; RELOAD();
/* 784888: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78488d: je 0x78489c */
  if (zf) goto L_78489c;
L_78488f: /* 78488f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 784894: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 784896: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 784898: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784899: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x78489cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_78489c: /* 78489c: mov eax, esi */
  eax = esi;
/* 78489e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78489f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7848c0(void) {
  LOAD_REGS();
L_7848c0: /* 7848c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7848c1: mov ebp, esp */
  ebp = esp;
/* 7848c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7848c5: push 0x9cca10 */
  { uint32_t v = 0x9cca10u; esp -= 4; W32(esp, v); }
/* 7848ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7848d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7848d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7848d8: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7848db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7848dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7848dd: mov esi, ecx */
  esi = ecx;
/* 7848df: cmp byte ptr [esi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7848e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7848e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7848e7: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7848ea: je 0x784904 */
  if (zf) goto L_784904;
L_7848ec: /* 7848ec: push 0x514 */
  { uint32_t v = 0x514u; esp -= 4; W32(esp, v); }
/* 7848f1: push 0xac75d4 */
  { uint32_t v = 0xac75d4u; esp -= 4; W32(esp, v); }
/* 7848f6: push 0xac75e4 */
  { uint32_t v = 0xac75e4u; esp -= 4; W32(esp, v); }
/* 7848fb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784901u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784901: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784904: /* 784904: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 784906: mov ecx, esi */
  ecx = esi;
/* 784908: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x78490eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78490e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784910: je 0x78492a */
  if (zf) goto L_78492a;
L_784912: /* 784912: push 0x518 */
  { uint32_t v = 0x518u; esp -= 4; W32(esp, v); }
/* 784917: push 0xac7604 */
  { uint32_t v = 0xac7604u; esp -= 4; W32(esp, v); }
/* 78491c: push 0xac7614 */
  { uint32_t v = 0xac7614u; esp -= 4; W32(esp, v); }
/* 784921: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784927u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784927: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78492a: /* 78492a: mov edi, dword ptr [esi + 0xd0] */
  edi = R32((uint32_t)(esi + 0xd0u));
/* 784930: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784932: je 0x784945 */
  if (zf) goto L_784945;
L_784934: /* 784934: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 784939: mov ecx, edi */
  ecx = edi;
/* 78493b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x784941u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 784941: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784943: jne 0x78494c */
  if (!zf) goto L_78494c;
L_784945: /* 784945: push 0xac7620 */
  { uint32_t v = 0xac7620u; esp -= 4; W32(esp, v); }
/* 78494a: jmp 0x7849a5 */
  goto L_7849a5;
L_78494c: /* 78494c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 78494e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78494f: mov ecx, edi */
  ecx = edi;
/* 784951: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x784957u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784957: mov ebx, eax */
  ebx = eax;
/* 784959: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78495b: jne 0x784964 */
  if (!zf) goto L_784964;
L_78495d: /* 78495d: push 0xac7670 */
  { uint32_t v = 0xac7670u; esp -= 4; W32(esp, v); }
/* 784962: jmp 0x7849a5 */
  goto L_7849a5;
L_784964: /* 784964: mov eax, dword ptr [ebx + 0x318] */
  eax = R32((uint32_t)(ebx + 0x318u));
/* 78496a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78496c: jne 0x7849b7 */
  if (!zf) goto L_7849b7;
L_78496e: /* 78496e: mov eax, dword ptr [ebx + 0x2f4] */
  eax = R32((uint32_t)(ebx + 0x2f4u));
/* 784974: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784976: jne 0x784988 */
  if (!zf) goto L_784988;
L_784978: /* 784978: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784979: call 0x6c56c3 */
  esp -= 4; W32(esp, 0x78497eu); SPILL(); f_6c56c3(); if (g_unwind) return; RELOAD();
/* 78497e: mov eax, dword ptr [ebx + 0x2f4] */
  eax = R32((uint32_t)(ebx + 0x2f4u));
/* 784984: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784986: je 0x7849b7 */
  if (zf) goto L_7849b7;
L_784988: /* 784988: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 78498e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78498f: call 0x6c75a9 */
  esp -= 4; W32(esp, 0x784994u); SPILL(); f_6c75a9(); if (g_unwind) return; RELOAD();
/* 784994: mov esi, eax */
  esi = eax;
/* 784996: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784999: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78499b: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 78499e: jne 0x7849ca */
  if (!zf) goto L_7849ca;
L_7849a0: /* 7849a0: push 0xac76d8 */
  { uint32_t v = 0xac76d8u; esp -= 4; W32(esp, v); }
L_7849a5: /* 7849a5: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7849ab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7849ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7849ae: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7849b4u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7849b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7849b7: /* 7849b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7849ba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7849c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7849c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7849c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7849c4: mov esp, ebp */
  esp = ebp;
/* 7849c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7849c7: ret 4 */
  esp += 8; SPILL(); return;
L_7849ca: /* 7849ca: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 7849d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7849d2: jl 0x7849dc */
  if ((sf != of)) goto L_7849dc;
L_7849d4: /* 7849d4: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7849da: jl 0x7849f4 */
  if ((sf != of)) goto L_7849f4;
L_7849dc: /* 7849dc: push 0x530 */
  { uint32_t v = 0x530u; esp -= 4; W32(esp, v); }
/* 7849e1: push 0xac7748 */
  { uint32_t v = 0xac7748u; esp -= 4; W32(esp, v); }
/* 7849e6: push 0xac7758 */
  { uint32_t v = 0xac7758u; esp -= 4; W32(esp, v); }
/* 7849eb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7849f1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7849f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7849f4: /* 7849f4: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 7849fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7849fc: jl 0x784a06 */
  if ((sf != of)) goto L_784a06;
L_7849fe: /* 7849fe: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784a04: jl 0x784a1e */
  if ((sf != of)) goto L_784a1e;
L_784a06: /* 784a06: push 0x531 */
  { uint32_t v = 0x531u; esp -= 4; W32(esp, v); }
/* 784a0b: push 0xac77a4 */
  { uint32_t v = 0xac77a4u; esp -= 4; W32(esp, v); }
/* 784a10: push 0xac77b8 */
  { uint32_t v = 0xac77b8u; esp -= 4; W32(esp, v); }
/* 784a15: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784a1bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784a1b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784a1e: /* 784a1e: mov edi, dword ptr [ebx + 0x328] */
  edi = R32((uint32_t)(ebx + 0x328u));
/* 784a24: cmp edi, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784a2a: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 784a31: jg 0x784af1 */
  if ((!zf && sf == of)) goto L_784af1;
L_784a37: /* 784a37: jmp 0x784a40 */
  goto L_784a40;
L_784a40: /* 784a40: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 784a46: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 784a49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784a4b: je 0x784ae2 */
  if (zf) goto L_784ae2;
L_784a51: /* 784a51: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784a57: mov ecx, dword ptr [ecx + 0x15220] */
  ecx = R32((uint32_t)(ecx + 0x15220u));
/* 784a5d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784a5f: je 0x784a70 */
  if (zf) goto L_784a70;
L_784a61: /* 784a61: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 784a66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784a67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784a68: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x784a6du); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 784a6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784a70: /* 784a70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784a73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784a75: jne 0x784adb */
  if (!zf) goto L_784adb;
L_784a77: /* 784a77: mov edx, dword ptr [ebx + 0x2e8] */
  edx = R32((uint32_t)(ebx + 0x2e8u));
/* 784a7d: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 784a80: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 784a83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784a84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784a86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784a87: call 0x90be60 */
  esp -= 4; W32(esp, 0x784a8cu); SPILL(); f_90be60(); if (g_unwind) return; RELOAD();
/* 784a8c: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 784a8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784a90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784a92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784a93: call 0x90be60 */
  esp -= 4; W32(esp, 0x784a98u); SPILL(); f_90be60(); if (g_unwind) return; RELOAD();
/* 784a98: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 784a9b: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 784a9e: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 784aa1: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 784aa4: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 784aa7: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 784aaa: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 784aad: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 784ab0: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 784ab3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 784ab5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 784ab7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 784ab9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 784abc: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 784abe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 784ac0: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 784ac2: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 784ac5: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 784acb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784acd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784ad0: je 0x784c31 */
  if (zf) goto L_784c31;
L_784ad6: /* 784ad6: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784ad9: jmp 0x784ae2 */
  goto L_784ae2;
L_784adb: /* 784adb: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_784ae2: /* 784ae2: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 784ae8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 784ae9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784aeb: jle 0x784a40 */
  if ((zf || sf != of)) goto L_784a40;
L_784af1: /* 784af1: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784af4: lea ecx, [edi + 0x188] */
  ecx = (uint32_t)(edi + 0x188u);
/* 784afa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 784b01: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x784b07u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 784b07: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 784b0a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 784b0d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 784b10: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 784b13: fcomp dword ptr [esi + 0x8c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8cu)));
  FPOP();
/* 784b19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784b1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784b1e: jp 0x784b37 */
  if (pf) goto L_784b37;
L_784b20: /* 784b20: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 784b23: fcomp dword ptr [esi + 0x8c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8cu)));
  FPOP();
/* 784b29: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784b2b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784b2e: jne 0x784b37 */
  if (!zf) goto L_784b37;
L_784b30: /* 784b30: mov ecx, edi */
  ecx = edi;
/* 784b32: call 0x6c44a3 */
  esp -= 4; W32(esp, 0x784b37u); SPILL(); f_6c44a3(); if (g_unwind) return; RELOAD();
L_784b37: /* 784b37: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784b3a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 784b3d: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 784b40: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784b46: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 784b4d: mov dword ptr [ebp - 0x24], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f000000u);
/* 784b54: fst dword ptr [ebx + 0x344] */
  WF32((uint32_t)(ebx + 0x344u), ST0);
/* 784b5a: mov dword ptr [ebp - 0x28], 0x447a0000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x447a0000u);
/* 784b61: fcomp dword ptr [ebx + 0x348] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x348u)));
  FPOP();
/* 784b67: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784b69: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784b6c: jne 0x784bbe */
  if (!zf) goto L_784bbe;
L_784b6e: /* 784b6e: mov eax, dword ptr [ebx + 0x34c] */
  eax = R32((uint32_t)(ebx + 0x34cu));
/* 784b74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784b76: je 0x784bbe */
  if (zf) goto L_784bbe;
L_784b78: /* 784b78: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784b7d: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 784b82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784b83: call 0x7822a0 */
  esp -= 4; W32(esp, 0x784b88u); SPILL(); f_7822a0(); if (g_unwind) return; RELOAD();
/* 784b88: mov dword ptr [ebx + 0x34c], 0 */
  W32((uint32_t)(ebx + 0x34cu), 0x0u);
/* 784b92: mov al, byte ptr [esi + 0xb8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xb8u))) & 0xffu);
/* 784b98: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784b9b: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784b9d: je 0x784c9f */
  if (zf) goto L_784c9f;
L_784ba3: /* 784ba3: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784ba9: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x784bafu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 784baf: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 784bb2: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784bb8: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784bbe: /* 784bbe: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784bc5: je 0x784c9f */
  if (zf) goto L_784c9f;
L_784bcb: /* 784bcb: mov eax, dword ptr [ebx + 0x34c] */
  eax = R32((uint32_t)(ebx + 0x34cu));
/* 784bd1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784bd3: jne 0x784c9f */
  if (!zf) goto L_784c9f;
L_784bd9: /* 784bd9: fld dword ptr [ebx + 0x344] */
  { double v = F32((uint32_t)(ebx + 0x344u)); FPUSH(v); }
/* 784bdf: fcomp dword ptr [ebx + 0x350] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x350u)));
  FPOP();
/* 784be5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784be7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784bea: jne 0x784c9f */
  if (!zf) goto L_784c9f;
L_784bf0: /* 784bf0: mov ecx, edi */
  ecx = edi;
/* 784bf2: call 0x6c47e6 */
  esp -= 4; W32(esp, 0x784bf7u); SPILL(); f_6c47e6(); if (g_unwind) return; RELOAD();
/* 784bf7: mov edi, dword ptr [ebx + 0x328] */
  edi = R32((uint32_t)(ebx + 0x328u));
/* 784bfd: xor esi, esi */
  esi = 0;
/* 784bff: nop  */
L_784c00: /* 784c00: cmp edi, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784c06: jg 0x784c72 */
  if ((!zf && sf == of)) goto L_784c72;
L_784c08: /* 784c08: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784c0a: jne 0x784c72 */
  if (!zf) goto L_784c72;
L_784c0c: /* 784c0c: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 784c12: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 784c15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784c17: je 0x784c2e */
  if (zf) goto L_784c2e;
L_784c19: /* 784c19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c1a: call 0x925ce0 */
  esp -= 4; W32(esp, 0x784c1fu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 784c1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784c21: je 0x784c2e */
  if (zf) goto L_784c2e;
L_784c23: /* 784c23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c24: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784c29u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784c29: mov esi, 1 */
  esi = 0x1u;
L_784c2e: /* 784c2e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 784c2f: jmp 0x784c00 */
  goto L_784c00;
L_784c31: /* 784c31: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 784c37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784c39: push 0xac7808 */
  { uint32_t v = 0xac7808u; esp -= 4; W32(esp, v); }
/* 784c3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c3f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784c45u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784c45: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
/* 784c48: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 784c4e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784c51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 784c53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784c56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784c58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c59: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x784c5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784c5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 784c62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 784c63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 784c64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 784c6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 784c6c: mov esp, ebp */
  esp = ebp;
/* 784c6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 784c6f: ret 4 */
  esp += 8; SPILL(); return;
L_784c72: /* 784c72: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784c75: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784c78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784c79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784c7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784c7b: call 0x7822a0 */
  esp -= 4; W32(esp, 0x784c80u); SPILL(); f_7822a0(); if (g_unwind) return; RELOAD();
/* 784c80: fld dword ptr [ebx + 0x344] */
  { double v = F32((uint32_t)(ebx + 0x344u)); FPUSH(v); }
/* 784c86: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 784c8c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784c8f: mov dword ptr [ebx + 0x34c], 1 */
  W32((uint32_t)(ebx + 0x34cu), 0x1u);
/* 784c99: fstp dword ptr [ebx + 0x348] */
  WF32((uint32_t)(ebx + 0x348u), ST0); FPOP();
L_784c9f: /* 784c9f: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 784ca5: mov eax, dword ptr [edx + 0x15224] */
  eax = R32((uint32_t)(edx + 0x15224u));
/* 784cab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784cad: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 784cb4: je 0x7849b7 */
  if (zf) goto L_7849b7;
L_784cba: /* 784cba: xor edi, edi */
  edi = 0;
L_784cbc: /* 784cbc: cmp edi, dword ptr [ebx + 0x320] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784cc2: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 784cc5: jge 0x7849b7 */
  if ((sf == of)) goto L_7849b7;
L_784ccb: /* 784ccb: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 784cd1: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 784cd4: mov edx, dword ptr [ecx + eax*8 + 0x18] */
  edx = R32((uint32_t)(ecx + eax*8 + 0x18u));
/* 784cd8: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 784cdb: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 784ce1: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 784ce4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784ce6: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 784ce9: je 0x784ed9 */
  if (zf) goto L_784ed9;
L_784cef: /* 784cef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784cf0: call 0x925ce0 */
  esp -= 4; W32(esp, 0x784cf5u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 784cf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784cf7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784cfa: je 0x784ed9 */
  if (zf) goto L_784ed9;
L_784d00: /* 784d00: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 784d03: fadd dword ptr [esi + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x20u)));
/* 784d06: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 784d09: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 784d0c: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 784d0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784d10: mov ecx, esi */
  ecx = esi;
/* 784d12: call dword ptr [0xcfa57c] */
  esp -= 4; W32(esp, 0x784d18u); SPILL(); f_4e3562(); if (g_unwind) return; /* Core!?Eval@FInterpCurve@@QAEMM@Z */ RELOAD();
/* 784d18: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 784d1b: fmul dword ptr [0xa093dc] */
  ST0 = ST0 * (F32((uint32_t)(0xa093dcu)));
/* 784d21: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 784d24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784d25: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 784d28: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 784d2b: call dword ptr [0xcfa57c] */
  esp -= 4; W32(esp, 0x784d31u); SPILL(); f_4e3562(); if (g_unwind) return; /* Core!?Eval@FInterpCurve@@QAEMM@Z */ RELOAD();
/* 784d31: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784d34: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 784d37: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784d3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784d3b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 784d3e: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784d43u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784d43: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 784d46: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784d48: jne 0x784d62 */
  if (!zf) goto L_784d62;
L_784d4a: /* 784d4a: push 0x5ba */
  { uint32_t v = 0x5bau; esp -= 4; W32(esp, v); }
/* 784d4f: push 0xac7880 */
  { uint32_t v = 0xac7880u; esp -= 4; W32(esp, v); }
/* 784d54: push 0xac7890 */
  { uint32_t v = 0xac7890u; esp -= 4; W32(esp, v); }
/* 784d59: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784d5fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784d5f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784d62: /* 784d62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d63: call 0x90fe50 */
  esp -= 4; W32(esp, 0x784d68u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 784d68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784d6a: jne 0x784d72 */
  if (!zf) goto L_784d72;
L_784d6c: /* 784d6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d6d: call 0x90ff80 */
  esp -= 4; W32(esp, 0x784d72u); SPILL(); f_90ff80(); if (g_unwind) return; RELOAD();
L_784d72: /* 784d72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d73: call 0x90fe50 */
  esp -= 4; W32(esp, 0x784d78u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 784d78: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784d7b: je 0x784d95 */
  if (zf) goto L_784d95;
L_784d7d: /* 784d7d: push 0x5bf */
  { uint32_t v = 0x5bfu; esp -= 4; W32(esp, v); }
/* 784d82: push 0xac7894 */
  { uint32_t v = 0xac7894u; esp -= 4; W32(esp, v); }
/* 784d87: push 0xac78a4 */
  { uint32_t v = 0xac78a4u; esp -= 4; W32(esp, v); }
/* 784d8c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784d92u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784d92: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784d95: /* 784d95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d96: call 0x90fe20 */
  esp -= 4; W32(esp, 0x784d9bu); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 784d9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d9c: mov edi, eax */
  edi = eax;
/* 784d9e: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x784da3u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 784da3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784da4: call 0x90bd30 */
  esp -= 4; W32(esp, 0x784da9u); SPILL(); f_90bd30(); if (g_unwind) return; RELOAD();
/* 784da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784daa: call 0x912e10 */
  esp -= 4; W32(esp, 0x784dafu); SPILL(); f_912e10(); if (g_unwind) return; RELOAD();
/* 784daf: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 784db2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784db5: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 784db8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784dba: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x784dbfu); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 784dbf: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784dc2: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784dc5: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 784dc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784dc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784dca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784dcb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784dcc: call 0x90fae0 */
  esp -= 4; W32(esp, 0x784dd1u); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 784dd1: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 784dd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784dd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784dda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784ddb: call 0x90fb10 */
  esp -= 4; W32(esp, 0x784de0u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 784de0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784de2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784de3: call 0x90fb40 */
  esp -= 4; W32(esp, 0x784de8u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 784de8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784de9: call 0x90f9b0 */
  esp -= 4; W32(esp, 0x784deeu); SPILL(); f_90f9b0(); if (g_unwind) return; RELOAD();
/* 784dee: mov esi, eax */
  esi = eax;
/* 784df0: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784df5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784df6: call 0x9120f0 */
  esp -= 4; W32(esp, 0x784dfbu); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 784dfb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 784dfe: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 784e01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784e03: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784e06: jp 0x784e40 */
  if (pf) goto L_784e40;
L_784e08: /* 784e08: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 784e0b: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784e0e: jmp 0x784e46 */
  goto L_784e46;
L_784e40: /* 784e40: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 784e43: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_784e46: /* 784e46: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784e49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784e4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e4b: call 0x912090 */
  esp -= 4; W32(esp, 0x784e50u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 784e50: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784e53: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 784e56: fcomp qword ptr [0xa09718] */
  fpu_com(ST0, F64((uint32_t)(0xa09718u)));
  FPOP();
/* 784e5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784e5e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784e61: jp 0x784e6d */
  if (pf) goto L_784e6d;
L_784e63: /* 784e63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784e65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e66: call 0x911f10 */
  esp -= 4; W32(esp, 0x784e6bu); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 784e6b: jmp 0x784ec8 */
  goto L_784ec8;
L_784e6d: /* 784e6d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 784e6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e70: call 0x911f10 */
  esp -= 4; W32(esp, 0x784e75u); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 784e75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784e77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e78: call 0x912000 */
  esp -= 4; W32(esp, 0x784e7du); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 784e7d: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784e82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e83: call 0x912310 */
  esp -= 4; W32(esp, 0x784e88u); SPILL(); f_912310(); if (g_unwind) return; RELOAD();
/* 784e88: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784e8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e8e: call 0x9122d0 */
  esp -= 4; W32(esp, 0x784e93u); SPILL(); f_9122d0(); if (g_unwind) return; RELOAD();
/* 784e93: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 784e99: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784e9c: fdiv dword ptr [edx + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x1cu)));
/* 784e9f: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 784ea5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 784ea8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 784eaa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784eac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784eaf: jp 0x784eb6 */
  if (pf) goto L_784eb6;
L_784eb1: /* 784eb1: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784eb4: jmp 0x784ebe */
  goto L_784ebe;
L_784eb6: /* 784eb6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784eb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784ebb: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_784ebe: /* 784ebe: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784ec1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784ec2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784ec3: call 0x9122b0 */
  esp -= 4; W32(esp, 0x784ec8u); SPILL(); f_9122b0(); if (g_unwind) return; RELOAD();
L_784ec8: /* 784ec8: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 784ecb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784ecc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784ece: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784ed0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784ed1: call 0x90fbe0 */
  esp -= 4; W32(esp, 0x784ed6u); SPILL(); f_90fbe0(); if (g_unwind) return; RELOAD();
/* 784ed6: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_784ed9: /* 784ed9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 784eda: jmp 0x784cbc */
  goto L_784cbc;
}

void f_7849ca(void) {
  LOAD_REGS();
  goto L_7849ca;
L_7849b7: /* 7849b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7849ba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7849c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7849c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7849c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7849c4: mov esp, ebp */
  esp = ebp;
/* 7849c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7849c7: ret 4 */
  esp += 8; SPILL(); return;
L_7849ca: /* 7849ca: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 7849d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7849d2: jl 0x7849dc */
  if ((sf != of)) goto L_7849dc;
L_7849d4: /* 7849d4: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7849da: jl 0x7849f4 */
  if ((sf != of)) goto L_7849f4;
L_7849dc: /* 7849dc: push 0x530 */
  { uint32_t v = 0x530u; esp -= 4; W32(esp, v); }
/* 7849e1: push 0xac7748 */
  { uint32_t v = 0xac7748u; esp -= 4; W32(esp, v); }
/* 7849e6: push 0xac7758 */
  { uint32_t v = 0xac7758u; esp -= 4; W32(esp, v); }
/* 7849eb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7849f1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7849f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7849f4: /* 7849f4: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 7849fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7849fc: jl 0x784a06 */
  if ((sf != of)) goto L_784a06;
L_7849fe: /* 7849fe: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784a04: jl 0x784a1e */
  if ((sf != of)) goto L_784a1e;
L_784a06: /* 784a06: push 0x531 */
  { uint32_t v = 0x531u; esp -= 4; W32(esp, v); }
/* 784a0b: push 0xac77a4 */
  { uint32_t v = 0xac77a4u; esp -= 4; W32(esp, v); }
/* 784a10: push 0xac77b8 */
  { uint32_t v = 0xac77b8u; esp -= 4; W32(esp, v); }
/* 784a15: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784a1bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784a1b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784a1e: /* 784a1e: mov edi, dword ptr [ebx + 0x328] */
  edi = R32((uint32_t)(ebx + 0x328u));
/* 784a24: cmp edi, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784a2a: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 784a31: jg 0x784af1 */
  if ((!zf && sf == of)) goto L_784af1;
L_784a37: /* 784a37: jmp 0x784a40 */
  goto L_784a40;
L_784a40: /* 784a40: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 784a46: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 784a49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784a4b: je 0x784ae2 */
  if (zf) goto L_784ae2;
L_784a51: /* 784a51: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784a57: mov ecx, dword ptr [ecx + 0x15220] */
  ecx = R32((uint32_t)(ecx + 0x15220u));
/* 784a5d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784a5f: je 0x784a70 */
  if (zf) goto L_784a70;
L_784a61: /* 784a61: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 784a66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784a67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784a68: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x784a6du); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 784a6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784a70: /* 784a70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784a73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784a75: jne 0x784adb */
  if (!zf) goto L_784adb;
L_784a77: /* 784a77: mov edx, dword ptr [ebx + 0x2e8] */
  edx = R32((uint32_t)(ebx + 0x2e8u));
/* 784a7d: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 784a80: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 784a83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784a84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784a86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784a87: call 0x90be60 */
  esp -= 4; W32(esp, 0x784a8cu); SPILL(); f_90be60(); if (g_unwind) return; RELOAD();
/* 784a8c: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 784a8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784a90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784a92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784a93: call 0x90be60 */
  esp -= 4; W32(esp, 0x784a98u); SPILL(); f_90be60(); if (g_unwind) return; RELOAD();
/* 784a98: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 784a9b: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 784a9e: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 784aa1: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 784aa4: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 784aa7: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 784aaa: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 784aad: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 784ab0: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 784ab3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 784ab5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 784ab7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 784ab9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 784abc: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 784abe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 784ac0: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 784ac2: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 784ac5: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 784acb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784acd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784ad0: je 0x784c31 */
  if (zf) goto L_784c31;
L_784ad6: /* 784ad6: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784ad9: jmp 0x784ae2 */
  goto L_784ae2;
L_784adb: /* 784adb: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_784ae2: /* 784ae2: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 784ae8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 784ae9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784aeb: jle 0x784a40 */
  if ((zf || sf != of)) goto L_784a40;
L_784af1: /* 784af1: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784af4: lea ecx, [edi + 0x188] */
  ecx = (uint32_t)(edi + 0x188u);
/* 784afa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 784b01: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x784b07u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 784b07: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 784b0a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 784b0d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 784b10: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 784b13: fcomp dword ptr [esi + 0x8c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8cu)));
  FPOP();
/* 784b19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784b1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784b1e: jp 0x784b37 */
  if (pf) goto L_784b37;
L_784b20: /* 784b20: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 784b23: fcomp dword ptr [esi + 0x8c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8cu)));
  FPOP();
/* 784b29: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784b2b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784b2e: jne 0x784b37 */
  if (!zf) goto L_784b37;
L_784b30: /* 784b30: mov ecx, edi */
  ecx = edi;
/* 784b32: call 0x6c44a3 */
  esp -= 4; W32(esp, 0x784b37u); SPILL(); f_6c44a3(); if (g_unwind) return; RELOAD();
L_784b37: /* 784b37: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784b3a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 784b3d: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 784b40: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784b46: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 784b4d: mov dword ptr [ebp - 0x24], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f000000u);
/* 784b54: fst dword ptr [ebx + 0x344] */
  WF32((uint32_t)(ebx + 0x344u), ST0);
/* 784b5a: mov dword ptr [ebp - 0x28], 0x447a0000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x447a0000u);
/* 784b61: fcomp dword ptr [ebx + 0x348] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x348u)));
  FPOP();
/* 784b67: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784b69: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784b6c: jne 0x784bbe */
  if (!zf) goto L_784bbe;
L_784b6e: /* 784b6e: mov eax, dword ptr [ebx + 0x34c] */
  eax = R32((uint32_t)(ebx + 0x34cu));
/* 784b74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784b76: je 0x784bbe */
  if (zf) goto L_784bbe;
L_784b78: /* 784b78: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784b7d: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 784b82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784b83: call 0x7822a0 */
  esp -= 4; W32(esp, 0x784b88u); SPILL(); f_7822a0(); if (g_unwind) return; RELOAD();
/* 784b88: mov dword ptr [ebx + 0x34c], 0 */
  W32((uint32_t)(ebx + 0x34cu), 0x0u);
/* 784b92: mov al, byte ptr [esi + 0xb8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xb8u))) & 0xffu);
/* 784b98: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784b9b: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784b9d: je 0x784c9f */
  if (zf) goto L_784c9f;
L_784ba3: /* 784ba3: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784ba9: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x784bafu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 784baf: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 784bb2: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784bb8: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784bbe: /* 784bbe: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784bc5: je 0x784c9f */
  if (zf) goto L_784c9f;
L_784bcb: /* 784bcb: mov eax, dword ptr [ebx + 0x34c] */
  eax = R32((uint32_t)(ebx + 0x34cu));
/* 784bd1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784bd3: jne 0x784c9f */
  if (!zf) goto L_784c9f;
L_784bd9: /* 784bd9: fld dword ptr [ebx + 0x344] */
  { double v = F32((uint32_t)(ebx + 0x344u)); FPUSH(v); }
/* 784bdf: fcomp dword ptr [ebx + 0x350] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x350u)));
  FPOP();
/* 784be5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784be7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784bea: jne 0x784c9f */
  if (!zf) goto L_784c9f;
L_784bf0: /* 784bf0: mov ecx, edi */
  ecx = edi;
/* 784bf2: call 0x6c47e6 */
  esp -= 4; W32(esp, 0x784bf7u); SPILL(); f_6c47e6(); if (g_unwind) return; RELOAD();
/* 784bf7: mov edi, dword ptr [ebx + 0x328] */
  edi = R32((uint32_t)(ebx + 0x328u));
/* 784bfd: xor esi, esi */
  esi = 0;
/* 784bff: nop  */
L_784c00: /* 784c00: cmp edi, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784c06: jg 0x784c72 */
  if ((!zf && sf == of)) goto L_784c72;
L_784c08: /* 784c08: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784c0a: jne 0x784c72 */
  if (!zf) goto L_784c72;
L_784c0c: /* 784c0c: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 784c12: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 784c15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784c17: je 0x784c2e */
  if (zf) goto L_784c2e;
L_784c19: /* 784c19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c1a: call 0x925ce0 */
  esp -= 4; W32(esp, 0x784c1fu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 784c1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784c21: je 0x784c2e */
  if (zf) goto L_784c2e;
L_784c23: /* 784c23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c24: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784c29u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784c29: mov esi, 1 */
  esi = 0x1u;
L_784c2e: /* 784c2e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 784c2f: jmp 0x784c00 */
  goto L_784c00;
L_784c31: /* 784c31: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 784c37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784c39: push 0xac7808 */
  { uint32_t v = 0xac7808u; esp -= 4; W32(esp, v); }
/* 784c3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c3f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784c45u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784c45: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
/* 784c48: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 784c4e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784c51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 784c53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784c56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784c58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c59: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x784c5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784c5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 784c62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 784c63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 784c64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 784c6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 784c6c: mov esp, ebp */
  esp = ebp;
/* 784c6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 784c6f: ret 4 */
  esp += 8; SPILL(); return;
L_784c72: /* 784c72: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784c75: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784c78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784c79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784c7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784c7b: call 0x7822a0 */
  esp -= 4; W32(esp, 0x784c80u); SPILL(); f_7822a0(); if (g_unwind) return; RELOAD();
/* 784c80: fld dword ptr [ebx + 0x344] */
  { double v = F32((uint32_t)(ebx + 0x344u)); FPUSH(v); }
/* 784c86: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 784c8c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784c8f: mov dword ptr [ebx + 0x34c], 1 */
  W32((uint32_t)(ebx + 0x34cu), 0x1u);
/* 784c99: fstp dword ptr [ebx + 0x348] */
  WF32((uint32_t)(ebx + 0x348u), ST0); FPOP();
L_784c9f: /* 784c9f: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 784ca5: mov eax, dword ptr [edx + 0x15224] */
  eax = R32((uint32_t)(edx + 0x15224u));
/* 784cab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784cad: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 784cb4: je 0x7849b7 */
  if (zf) goto L_7849b7;
L_784cba: /* 784cba: xor edi, edi */
  edi = 0;
L_784cbc: /* 784cbc: cmp edi, dword ptr [ebx + 0x320] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784cc2: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 784cc5: jge 0x7849b7 */
  if ((sf == of)) goto L_7849b7;
L_784ccb: /* 784ccb: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 784cd1: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 784cd4: mov edx, dword ptr [ecx + eax*8 + 0x18] */
  edx = R32((uint32_t)(ecx + eax*8 + 0x18u));
/* 784cd8: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 784cdb: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 784ce1: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 784ce4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784ce6: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 784ce9: je 0x784ed9 */
  if (zf) goto L_784ed9;
L_784cef: /* 784cef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784cf0: call 0x925ce0 */
  esp -= 4; W32(esp, 0x784cf5u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 784cf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784cf7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784cfa: je 0x784ed9 */
  if (zf) goto L_784ed9;
L_784d00: /* 784d00: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 784d03: fadd dword ptr [esi + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x20u)));
/* 784d06: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 784d09: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 784d0c: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 784d0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784d10: mov ecx, esi */
  ecx = esi;
/* 784d12: call dword ptr [0xcfa57c] */
  esp -= 4; W32(esp, 0x784d18u); SPILL(); f_4e3562(); if (g_unwind) return; /* Core!?Eval@FInterpCurve@@QAEMM@Z */ RELOAD();
/* 784d18: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 784d1b: fmul dword ptr [0xa093dc] */
  ST0 = ST0 * (F32((uint32_t)(0xa093dcu)));
/* 784d21: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 784d24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784d25: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 784d28: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 784d2b: call dword ptr [0xcfa57c] */
  esp -= 4; W32(esp, 0x784d31u); SPILL(); f_4e3562(); if (g_unwind) return; /* Core!?Eval@FInterpCurve@@QAEMM@Z */ RELOAD();
/* 784d31: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784d34: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 784d37: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784d3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784d3b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 784d3e: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784d43u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784d43: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 784d46: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784d48: jne 0x784d62 */
  if (!zf) goto L_784d62;
L_784d4a: /* 784d4a: push 0x5ba */
  { uint32_t v = 0x5bau; esp -= 4; W32(esp, v); }
/* 784d4f: push 0xac7880 */
  { uint32_t v = 0xac7880u; esp -= 4; W32(esp, v); }
/* 784d54: push 0xac7890 */
  { uint32_t v = 0xac7890u; esp -= 4; W32(esp, v); }
/* 784d59: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784d5fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784d5f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784d62: /* 784d62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d63: call 0x90fe50 */
  esp -= 4; W32(esp, 0x784d68u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 784d68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784d6a: jne 0x784d72 */
  if (!zf) goto L_784d72;
L_784d6c: /* 784d6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d6d: call 0x90ff80 */
  esp -= 4; W32(esp, 0x784d72u); SPILL(); f_90ff80(); if (g_unwind) return; RELOAD();
L_784d72: /* 784d72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d73: call 0x90fe50 */
  esp -= 4; W32(esp, 0x784d78u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 784d78: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784d7b: je 0x784d95 */
  if (zf) goto L_784d95;
L_784d7d: /* 784d7d: push 0x5bf */
  { uint32_t v = 0x5bfu; esp -= 4; W32(esp, v); }
/* 784d82: push 0xac7894 */
  { uint32_t v = 0xac7894u; esp -= 4; W32(esp, v); }
/* 784d87: push 0xac78a4 */
  { uint32_t v = 0xac78a4u; esp -= 4; W32(esp, v); }
/* 784d8c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784d92u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784d92: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784d95: /* 784d95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d96: call 0x90fe20 */
  esp -= 4; W32(esp, 0x784d9bu); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 784d9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d9c: mov edi, eax */
  edi = eax;
/* 784d9e: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x784da3u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 784da3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784da4: call 0x90bd30 */
  esp -= 4; W32(esp, 0x784da9u); SPILL(); f_90bd30(); if (g_unwind) return; RELOAD();
/* 784da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784daa: call 0x912e10 */
  esp -= 4; W32(esp, 0x784dafu); SPILL(); f_912e10(); if (g_unwind) return; RELOAD();
/* 784daf: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 784db2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784db5: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 784db8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784dba: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x784dbfu); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 784dbf: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784dc2: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784dc5: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 784dc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784dc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784dca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784dcb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784dcc: call 0x90fae0 */
  esp -= 4; W32(esp, 0x784dd1u); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 784dd1: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 784dd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784dd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784dda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784ddb: call 0x90fb10 */
  esp -= 4; W32(esp, 0x784de0u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 784de0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784de2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784de3: call 0x90fb40 */
  esp -= 4; W32(esp, 0x784de8u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 784de8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784de9: call 0x90f9b0 */
  esp -= 4; W32(esp, 0x784deeu); SPILL(); f_90f9b0(); if (g_unwind) return; RELOAD();
/* 784dee: mov esi, eax */
  esi = eax;
/* 784df0: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784df5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784df6: call 0x9120f0 */
  esp -= 4; W32(esp, 0x784dfbu); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 784dfb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 784dfe: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 784e01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784e03: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784e06: jp 0x784e40 */
  if (pf) goto L_784e40;
L_784e08: /* 784e08: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 784e0b: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784e0e: jmp 0x784e46 */
  goto L_784e46;
L_784e40: /* 784e40: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 784e43: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_784e46: /* 784e46: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784e49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784e4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e4b: call 0x912090 */
  esp -= 4; W32(esp, 0x784e50u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 784e50: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784e53: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 784e56: fcomp qword ptr [0xa09718] */
  fpu_com(ST0, F64((uint32_t)(0xa09718u)));
  FPOP();
/* 784e5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784e5e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784e61: jp 0x784e6d */
  if (pf) goto L_784e6d;
L_784e63: /* 784e63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784e65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e66: call 0x911f10 */
  esp -= 4; W32(esp, 0x784e6bu); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 784e6b: jmp 0x784ec8 */
  goto L_784ec8;
L_784e6d: /* 784e6d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 784e6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e70: call 0x911f10 */
  esp -= 4; W32(esp, 0x784e75u); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 784e75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784e77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e78: call 0x912000 */
  esp -= 4; W32(esp, 0x784e7du); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 784e7d: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784e82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e83: call 0x912310 */
  esp -= 4; W32(esp, 0x784e88u); SPILL(); f_912310(); if (g_unwind) return; RELOAD();
/* 784e88: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784e8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e8e: call 0x9122d0 */
  esp -= 4; W32(esp, 0x784e93u); SPILL(); f_9122d0(); if (g_unwind) return; RELOAD();
/* 784e93: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 784e99: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784e9c: fdiv dword ptr [edx + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x1cu)));
/* 784e9f: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 784ea5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 784ea8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 784eaa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784eac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784eaf: jp 0x784eb6 */
  if (pf) goto L_784eb6;
L_784eb1: /* 784eb1: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784eb4: jmp 0x784ebe */
  goto L_784ebe;
L_784eb6: /* 784eb6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784eb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784ebb: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_784ebe: /* 784ebe: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784ec1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784ec2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784ec3: call 0x9122b0 */
  esp -= 4; W32(esp, 0x784ec8u); SPILL(); f_9122b0(); if (g_unwind) return; RELOAD();
L_784ec8: /* 784ec8: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 784ecb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784ecc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784ece: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784ed0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784ed1: call 0x90fbe0 */
  esp -= 4; W32(esp, 0x784ed6u); SPILL(); f_90fbe0(); if (g_unwind) return; RELOAD();
/* 784ed6: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_784ed9: /* 784ed9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 784eda: jmp 0x784cbc */
  goto L_784cbc;
}

void f_784a39(void) {
  LOAD_REGS();
  goto L_784a39;
L_7849b7: /* 7849b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7849ba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7849c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7849c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7849c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7849c4: mov esp, ebp */
  esp = ebp;
/* 7849c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7849c7: ret 4 */
  esp += 8; SPILL(); return;
L_784a39: /* 784a39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_784a40: /* 784a40: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 784a46: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 784a49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784a4b: je 0x784ae2 */
  if (zf) goto L_784ae2;
L_784a51: /* 784a51: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784a57: mov ecx, dword ptr [ecx + 0x15220] */
  ecx = R32((uint32_t)(ecx + 0x15220u));
/* 784a5d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784a5f: je 0x784a70 */
  if (zf) goto L_784a70;
L_784a61: /* 784a61: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 784a66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784a67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784a68: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x784a6du); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 784a6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784a70: /* 784a70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784a73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784a75: jne 0x784adb */
  if (!zf) goto L_784adb;
L_784a77: /* 784a77: mov edx, dword ptr [ebx + 0x2e8] */
  edx = R32((uint32_t)(ebx + 0x2e8u));
/* 784a7d: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 784a80: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 784a83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784a84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784a86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784a87: call 0x90be60 */
  esp -= 4; W32(esp, 0x784a8cu); SPILL(); f_90be60(); if (g_unwind) return; RELOAD();
/* 784a8c: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 784a8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784a90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784a92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784a93: call 0x90be60 */
  esp -= 4; W32(esp, 0x784a98u); SPILL(); f_90be60(); if (g_unwind) return; RELOAD();
/* 784a98: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 784a9b: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 784a9e: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 784aa1: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 784aa4: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 784aa7: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 784aaa: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 784aad: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 784ab0: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 784ab3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 784ab5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 784ab7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 784ab9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 784abc: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 784abe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 784ac0: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 784ac2: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 784ac5: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 784acb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784acd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784ad0: je 0x784c31 */
  if (zf) goto L_784c31;
L_784ad6: /* 784ad6: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784ad9: jmp 0x784ae2 */
  goto L_784ae2;
L_784adb: /* 784adb: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_784ae2: /* 784ae2: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 784ae8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 784ae9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784aeb: jle 0x784a40 */
  if ((zf || sf != of)) goto L_784a40;
L_784af1: /* 784af1: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784af4: lea ecx, [edi + 0x188] */
  ecx = (uint32_t)(edi + 0x188u);
/* 784afa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 784b01: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x784b07u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 784b07: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 784b0a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 784b0d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 784b10: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 784b13: fcomp dword ptr [esi + 0x8c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8cu)));
  FPOP();
/* 784b19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784b1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784b1e: jp 0x784b37 */
  if (pf) goto L_784b37;
L_784b20: /* 784b20: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 784b23: fcomp dword ptr [esi + 0x8c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8cu)));
  FPOP();
/* 784b29: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784b2b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784b2e: jne 0x784b37 */
  if (!zf) goto L_784b37;
L_784b30: /* 784b30: mov ecx, edi */
  ecx = edi;
/* 784b32: call 0x6c44a3 */
  esp -= 4; W32(esp, 0x784b37u); SPILL(); f_6c44a3(); if (g_unwind) return; RELOAD();
L_784b37: /* 784b37: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784b3a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 784b3d: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 784b40: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784b46: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 784b4d: mov dword ptr [ebp - 0x24], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f000000u);
/* 784b54: fst dword ptr [ebx + 0x344] */
  WF32((uint32_t)(ebx + 0x344u), ST0);
/* 784b5a: mov dword ptr [ebp - 0x28], 0x447a0000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x447a0000u);
/* 784b61: fcomp dword ptr [ebx + 0x348] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x348u)));
  FPOP();
/* 784b67: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784b69: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784b6c: jne 0x784bbe */
  if (!zf) goto L_784bbe;
L_784b6e: /* 784b6e: mov eax, dword ptr [ebx + 0x34c] */
  eax = R32((uint32_t)(ebx + 0x34cu));
/* 784b74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784b76: je 0x784bbe */
  if (zf) goto L_784bbe;
L_784b78: /* 784b78: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784b7d: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 784b82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784b83: call 0x7822a0 */
  esp -= 4; W32(esp, 0x784b88u); SPILL(); f_7822a0(); if (g_unwind) return; RELOAD();
/* 784b88: mov dword ptr [ebx + 0x34c], 0 */
  W32((uint32_t)(ebx + 0x34cu), 0x0u);
/* 784b92: mov al, byte ptr [esi + 0xb8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xb8u))) & 0xffu);
/* 784b98: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784b9b: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784b9d: je 0x784c9f */
  if (zf) goto L_784c9f;
L_784ba3: /* 784ba3: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784ba9: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x784bafu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 784baf: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 784bb2: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784bb8: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784bbe: /* 784bbe: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784bc5: je 0x784c9f */
  if (zf) goto L_784c9f;
L_784bcb: /* 784bcb: mov eax, dword ptr [ebx + 0x34c] */
  eax = R32((uint32_t)(ebx + 0x34cu));
/* 784bd1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784bd3: jne 0x784c9f */
  if (!zf) goto L_784c9f;
L_784bd9: /* 784bd9: fld dword ptr [ebx + 0x344] */
  { double v = F32((uint32_t)(ebx + 0x344u)); FPUSH(v); }
/* 784bdf: fcomp dword ptr [ebx + 0x350] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x350u)));
  FPOP();
/* 784be5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784be7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784bea: jne 0x784c9f */
  if (!zf) goto L_784c9f;
L_784bf0: /* 784bf0: mov ecx, edi */
  ecx = edi;
/* 784bf2: call 0x6c47e6 */
  esp -= 4; W32(esp, 0x784bf7u); SPILL(); f_6c47e6(); if (g_unwind) return; RELOAD();
/* 784bf7: mov edi, dword ptr [ebx + 0x328] */
  edi = R32((uint32_t)(ebx + 0x328u));
/* 784bfd: xor esi, esi */
  esi = 0;
/* 784bff: nop  */
L_784c00: /* 784c00: cmp edi, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784c06: jg 0x784c72 */
  if ((!zf && sf == of)) goto L_784c72;
L_784c08: /* 784c08: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784c0a: jne 0x784c72 */
  if (!zf) goto L_784c72;
L_784c0c: /* 784c0c: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 784c12: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 784c15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784c17: je 0x784c2e */
  if (zf) goto L_784c2e;
L_784c19: /* 784c19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c1a: call 0x925ce0 */
  esp -= 4; W32(esp, 0x784c1fu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 784c1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784c21: je 0x784c2e */
  if (zf) goto L_784c2e;
L_784c23: /* 784c23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c24: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784c29u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784c29: mov esi, 1 */
  esi = 0x1u;
L_784c2e: /* 784c2e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 784c2f: jmp 0x784c00 */
  goto L_784c00;
L_784c31: /* 784c31: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 784c37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784c39: push 0xac7808 */
  { uint32_t v = 0xac7808u; esp -= 4; W32(esp, v); }
/* 784c3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c3f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784c45u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784c45: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
/* 784c48: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 784c4e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784c51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 784c53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784c56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784c58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784c59: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x784c5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784c5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 784c62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 784c63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 784c64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 784c6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 784c6c: mov esp, ebp */
  esp = ebp;
/* 784c6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 784c6f: ret 4 */
  esp += 8; SPILL(); return;
L_784c72: /* 784c72: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784c75: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784c78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784c79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784c7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784c7b: call 0x7822a0 */
  esp -= 4; W32(esp, 0x784c80u); SPILL(); f_7822a0(); if (g_unwind) return; RELOAD();
/* 784c80: fld dword ptr [ebx + 0x344] */
  { double v = F32((uint32_t)(ebx + 0x344u)); FPUSH(v); }
/* 784c86: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 784c8c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784c8f: mov dword ptr [ebx + 0x34c], 1 */
  W32((uint32_t)(ebx + 0x34cu), 0x1u);
/* 784c99: fstp dword ptr [ebx + 0x348] */
  WF32((uint32_t)(ebx + 0x348u), ST0); FPOP();
L_784c9f: /* 784c9f: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 784ca5: mov eax, dword ptr [edx + 0x15224] */
  eax = R32((uint32_t)(edx + 0x15224u));
/* 784cab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784cad: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 784cb4: je 0x7849b7 */
  if (zf) goto L_7849b7;
L_784cba: /* 784cba: xor edi, edi */
  edi = 0;
L_784cbc: /* 784cbc: cmp edi, dword ptr [ebx + 0x320] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784cc2: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 784cc5: jge 0x7849b7 */
  if ((sf == of)) goto L_7849b7;
L_784ccb: /* 784ccb: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 784cd1: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 784cd4: mov edx, dword ptr [ecx + eax*8 + 0x18] */
  edx = R32((uint32_t)(ecx + eax*8 + 0x18u));
/* 784cd8: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 784cdb: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 784ce1: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 784ce4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784ce6: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 784ce9: je 0x784ed9 */
  if (zf) goto L_784ed9;
L_784cef: /* 784cef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784cf0: call 0x925ce0 */
  esp -= 4; W32(esp, 0x784cf5u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 784cf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784cf7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784cfa: je 0x784ed9 */
  if (zf) goto L_784ed9;
L_784d00: /* 784d00: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 784d03: fadd dword ptr [esi + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x20u)));
/* 784d06: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 784d09: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 784d0c: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 784d0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784d10: mov ecx, esi */
  ecx = esi;
/* 784d12: call dword ptr [0xcfa57c] */
  esp -= 4; W32(esp, 0x784d18u); SPILL(); f_4e3562(); if (g_unwind) return; /* Core!?Eval@FInterpCurve@@QAEMM@Z */ RELOAD();
/* 784d18: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 784d1b: fmul dword ptr [0xa093dc] */
  ST0 = ST0 * (F32((uint32_t)(0xa093dcu)));
/* 784d21: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 784d24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784d25: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 784d28: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 784d2b: call dword ptr [0xcfa57c] */
  esp -= 4; W32(esp, 0x784d31u); SPILL(); f_4e3562(); if (g_unwind) return; /* Core!?Eval@FInterpCurve@@QAEMM@Z */ RELOAD();
/* 784d31: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784d34: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 784d37: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784d3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784d3b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 784d3e: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784d43u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784d43: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 784d46: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784d48: jne 0x784d62 */
  if (!zf) goto L_784d62;
L_784d4a: /* 784d4a: push 0x5ba */
  { uint32_t v = 0x5bau; esp -= 4; W32(esp, v); }
/* 784d4f: push 0xac7880 */
  { uint32_t v = 0xac7880u; esp -= 4; W32(esp, v); }
/* 784d54: push 0xac7890 */
  { uint32_t v = 0xac7890u; esp -= 4; W32(esp, v); }
/* 784d59: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784d5fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784d5f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784d62: /* 784d62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d63: call 0x90fe50 */
  esp -= 4; W32(esp, 0x784d68u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 784d68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784d6a: jne 0x784d72 */
  if (!zf) goto L_784d72;
L_784d6c: /* 784d6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d6d: call 0x90ff80 */
  esp -= 4; W32(esp, 0x784d72u); SPILL(); f_90ff80(); if (g_unwind) return; RELOAD();
L_784d72: /* 784d72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d73: call 0x90fe50 */
  esp -= 4; W32(esp, 0x784d78u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 784d78: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784d7b: je 0x784d95 */
  if (zf) goto L_784d95;
L_784d7d: /* 784d7d: push 0x5bf */
  { uint32_t v = 0x5bfu; esp -= 4; W32(esp, v); }
/* 784d82: push 0xac7894 */
  { uint32_t v = 0xac7894u; esp -= 4; W32(esp, v); }
/* 784d87: push 0xac78a4 */
  { uint32_t v = 0xac78a4u; esp -= 4; W32(esp, v); }
/* 784d8c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784d92u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784d92: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784d95: /* 784d95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d96: call 0x90fe20 */
  esp -= 4; W32(esp, 0x784d9bu); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 784d9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d9c: mov edi, eax */
  edi = eax;
/* 784d9e: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x784da3u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 784da3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784da4: call 0x90bd30 */
  esp -= 4; W32(esp, 0x784da9u); SPILL(); f_90bd30(); if (g_unwind) return; RELOAD();
/* 784da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784daa: call 0x912e10 */
  esp -= 4; W32(esp, 0x784dafu); SPILL(); f_912e10(); if (g_unwind) return; RELOAD();
/* 784daf: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 784db2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784db5: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 784db8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784dba: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x784dbfu); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 784dbf: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784dc2: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784dc5: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 784dc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784dc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784dca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784dcb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784dcc: call 0x90fae0 */
  esp -= 4; W32(esp, 0x784dd1u); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 784dd1: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 784dd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784dd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784dda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784ddb: call 0x90fb10 */
  esp -= 4; W32(esp, 0x784de0u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 784de0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784de2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784de3: call 0x90fb40 */
  esp -= 4; W32(esp, 0x784de8u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 784de8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784de9: call 0x90f9b0 */
  esp -= 4; W32(esp, 0x784deeu); SPILL(); f_90f9b0(); if (g_unwind) return; RELOAD();
/* 784dee: mov esi, eax */
  esi = eax;
/* 784df0: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784df5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784df6: call 0x9120f0 */
  esp -= 4; W32(esp, 0x784dfbu); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 784dfb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 784dfe: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 784e01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784e03: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784e06: jp 0x784e40 */
  if (pf) goto L_784e40;
L_784e08: /* 784e08: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 784e0b: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784e0e: jmp 0x784e46 */
  goto L_784e46;
L_784e40: /* 784e40: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 784e43: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_784e46: /* 784e46: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784e49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784e4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e4b: call 0x912090 */
  esp -= 4; W32(esp, 0x784e50u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 784e50: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784e53: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 784e56: fcomp qword ptr [0xa09718] */
  fpu_com(ST0, F64((uint32_t)(0xa09718u)));
  FPOP();
/* 784e5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784e5e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784e61: jp 0x784e6d */
  if (pf) goto L_784e6d;
L_784e63: /* 784e63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784e65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e66: call 0x911f10 */
  esp -= 4; W32(esp, 0x784e6bu); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 784e6b: jmp 0x784ec8 */
  goto L_784ec8;
L_784e6d: /* 784e6d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 784e6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e70: call 0x911f10 */
  esp -= 4; W32(esp, 0x784e75u); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 784e75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784e77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e78: call 0x912000 */
  esp -= 4; W32(esp, 0x784e7du); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 784e7d: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784e82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e83: call 0x912310 */
  esp -= 4; W32(esp, 0x784e88u); SPILL(); f_912310(); if (g_unwind) return; RELOAD();
/* 784e88: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784e8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e8e: call 0x9122d0 */
  esp -= 4; W32(esp, 0x784e93u); SPILL(); f_9122d0(); if (g_unwind) return; RELOAD();
/* 784e93: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 784e99: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784e9c: fdiv dword ptr [edx + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x1cu)));
/* 784e9f: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 784ea5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 784ea8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 784eaa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784eac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784eaf: jp 0x784eb6 */
  if (pf) goto L_784eb6;
L_784eb1: /* 784eb1: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784eb4: jmp 0x784ebe */
  goto L_784ebe;
L_784eb6: /* 784eb6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784eb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784ebb: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_784ebe: /* 784ebe: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784ec1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784ec2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784ec3: call 0x9122b0 */
  esp -= 4; W32(esp, 0x784ec8u); SPILL(); f_9122b0(); if (g_unwind) return; RELOAD();
L_784ec8: /* 784ec8: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 784ecb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784ecc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784ece: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784ed0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784ed1: call 0x90fbe0 */
  esp -= 4; W32(esp, 0x784ed6u); SPILL(); f_90fbe0(); if (g_unwind) return; RELOAD();
/* 784ed6: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_784ed9: /* 784ed9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 784eda: jmp 0x784cbc */
  goto L_784cbc;
}

void f_784e10(void) {
  LOAD_REGS();
L_784e10: /* 784e10: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 784e13: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 784e18: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 784e1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784e1c: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 784e1f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x784e24u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_784e24(); return;
}

void f_784e24(void) {
  LOAD_REGS();
  goto L_784e24;
L_7849b7: /* 7849b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7849ba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7849c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7849c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7849c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7849c4: mov esp, ebp */
  esp = ebp;
/* 7849c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7849c7: ret 4 */
  esp += 8; SPILL(); return;
L_784cbc: /* 784cbc: cmp edi, dword ptr [ebx + 0x320] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784cc2: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 784cc5: jge 0x7849b7 */
  if ((sf == of)) goto L_7849b7;
L_784ccb: /* 784ccb: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 784cd1: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 784cd4: mov edx, dword ptr [ecx + eax*8 + 0x18] */
  edx = R32((uint32_t)(ecx + eax*8 + 0x18u));
/* 784cd8: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 784cdb: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 784ce1: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 784ce4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784ce6: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 784ce9: je 0x784ed9 */
  if (zf) goto L_784ed9;
L_784cef: /* 784cef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784cf0: call 0x925ce0 */
  esp -= 4; W32(esp, 0x784cf5u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 784cf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784cf7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784cfa: je 0x784ed9 */
  if (zf) goto L_784ed9;
L_784d00: /* 784d00: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 784d03: fadd dword ptr [esi + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x20u)));
/* 784d06: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 784d09: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 784d0c: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 784d0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784d10: mov ecx, esi */
  ecx = esi;
/* 784d12: call dword ptr [0xcfa57c] */
  esp -= 4; W32(esp, 0x784d18u); SPILL(); f_4e3562(); if (g_unwind) return; /* Core!?Eval@FInterpCurve@@QAEMM@Z */ RELOAD();
/* 784d18: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 784d1b: fmul dword ptr [0xa093dc] */
  ST0 = ST0 * (F32((uint32_t)(0xa093dcu)));
/* 784d21: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 784d24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784d25: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 784d28: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 784d2b: call dword ptr [0xcfa57c] */
  esp -= 4; W32(esp, 0x784d31u); SPILL(); f_4e3562(); if (g_unwind) return; /* Core!?Eval@FInterpCurve@@QAEMM@Z */ RELOAD();
/* 784d31: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784d34: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 784d37: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784d3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784d3b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 784d3e: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784d43u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784d43: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 784d46: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784d48: jne 0x784d62 */
  if (!zf) goto L_784d62;
L_784d4a: /* 784d4a: push 0x5ba */
  { uint32_t v = 0x5bau; esp -= 4; W32(esp, v); }
/* 784d4f: push 0xac7880 */
  { uint32_t v = 0xac7880u; esp -= 4; W32(esp, v); }
/* 784d54: push 0xac7890 */
  { uint32_t v = 0xac7890u; esp -= 4; W32(esp, v); }
/* 784d59: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784d5fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784d5f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784d62: /* 784d62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d63: call 0x90fe50 */
  esp -= 4; W32(esp, 0x784d68u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 784d68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784d6a: jne 0x784d72 */
  if (!zf) goto L_784d72;
L_784d6c: /* 784d6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d6d: call 0x90ff80 */
  esp -= 4; W32(esp, 0x784d72u); SPILL(); f_90ff80(); if (g_unwind) return; RELOAD();
L_784d72: /* 784d72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d73: call 0x90fe50 */
  esp -= 4; W32(esp, 0x784d78u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 784d78: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784d7b: je 0x784d95 */
  if (zf) goto L_784d95;
L_784d7d: /* 784d7d: push 0x5bf */
  { uint32_t v = 0x5bfu; esp -= 4; W32(esp, v); }
/* 784d82: push 0xac7894 */
  { uint32_t v = 0xac7894u; esp -= 4; W32(esp, v); }
/* 784d87: push 0xac78a4 */
  { uint32_t v = 0xac78a4u; esp -= 4; W32(esp, v); }
/* 784d8c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784d92u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784d92: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784d95: /* 784d95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d96: call 0x90fe20 */
  esp -= 4; W32(esp, 0x784d9bu); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 784d9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784d9c: mov edi, eax */
  edi = eax;
/* 784d9e: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x784da3u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 784da3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784da4: call 0x90bd30 */
  esp -= 4; W32(esp, 0x784da9u); SPILL(); f_90bd30(); if (g_unwind) return; RELOAD();
/* 784da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784daa: call 0x912e10 */
  esp -= 4; W32(esp, 0x784dafu); SPILL(); f_912e10(); if (g_unwind) return; RELOAD();
/* 784daf: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 784db2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784db5: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 784db8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784dba: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x784dbfu); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 784dbf: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784dc2: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784dc5: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 784dc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784dc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784dca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784dcb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784dcc: call 0x90fae0 */
  esp -= 4; W32(esp, 0x784dd1u); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 784dd1: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 784dd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784dd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784dda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784ddb: call 0x90fb10 */
  esp -= 4; W32(esp, 0x784de0u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 784de0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784de2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784de3: call 0x90fb40 */
  esp -= 4; W32(esp, 0x784de8u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 784de8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784de9: call 0x90f9b0 */
  esp -= 4; W32(esp, 0x784deeu); SPILL(); f_90f9b0(); if (g_unwind) return; RELOAD();
/* 784dee: mov esi, eax */
  esi = eax;
/* 784df0: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784df5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784df6: call 0x9120f0 */
  esp -= 4; W32(esp, 0x784dfbu); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 784dfb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 784dfe: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 784e01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784e03: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784e06: jp 0x784e40 */
  if (pf) goto L_784e40;
L_784e08: /* 784e08: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 784e0b: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784e0e: jmp 0x784e46 */
  goto L_784e46;
L_784e24: /* 784e24: push 0xa09724 */
  { uint32_t v = 0xa09724u; esp -= 4; W32(esp, v); }
/* 784e29: push 0xac7878 */
  { uint32_t v = 0xac7878u; esp -= 4; W32(esp, v); }
/* 784e2e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x784e34u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 784e34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784e37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784e39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784e3b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x784e40u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_784e40: /* 784e40: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 784e43: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_784e46: /* 784e46: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784e49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784e4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e4b: call 0x912090 */
  esp -= 4; W32(esp, 0x784e50u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 784e50: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784e53: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 784e56: fcomp qword ptr [0xa09718] */
  fpu_com(ST0, F64((uint32_t)(0xa09718u)));
  FPOP();
/* 784e5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784e5e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784e61: jp 0x784e6d */
  if (pf) goto L_784e6d;
L_784e63: /* 784e63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784e65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e66: call 0x911f10 */
  esp -= 4; W32(esp, 0x784e6bu); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 784e6b: jmp 0x784ec8 */
  goto L_784ec8;
L_784e6d: /* 784e6d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 784e6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e70: call 0x911f10 */
  esp -= 4; W32(esp, 0x784e75u); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 784e75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784e77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e78: call 0x912000 */
  esp -= 4; W32(esp, 0x784e7du); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 784e7d: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784e82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e83: call 0x912310 */
  esp -= 4; W32(esp, 0x784e88u); SPILL(); f_912310(); if (g_unwind) return; RELOAD();
/* 784e88: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 784e8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784e8e: call 0x9122d0 */
  esp -= 4; W32(esp, 0x784e93u); SPILL(); f_9122d0(); if (g_unwind) return; RELOAD();
/* 784e93: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 784e99: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784e9c: fdiv dword ptr [edx + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x1cu)));
/* 784e9f: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 784ea5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 784ea8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 784eaa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 784eac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 784eaf: jp 0x784eb6 */
  if (pf) goto L_784eb6;
L_784eb1: /* 784eb1: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784eb4: jmp 0x784ebe */
  goto L_784ebe;
L_784eb6: /* 784eb6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784eb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784ebb: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_784ebe: /* 784ebe: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784ec1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784ec2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784ec3: call 0x9122b0 */
  esp -= 4; W32(esp, 0x784ec8u); SPILL(); f_9122b0(); if (g_unwind) return; RELOAD();
L_784ec8: /* 784ec8: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 784ecb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784ecc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784ece: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784ed0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784ed1: call 0x90fbe0 */
  esp -= 4; W32(esp, 0x784ed6u); SPILL(); f_90fbe0(); if (g_unwind) return; RELOAD();
/* 784ed6: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_784ed9: /* 784ed9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 784eda: jmp 0x784cbc */
  goto L_784cbc;
}

void f_784edf(void) {
  LOAD_REGS();
L_784edf: /* 784edf: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 784ee2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 784ee7: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 784eea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784eeb: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 784eee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x784ef3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_784ef3(); return;
}

void f_784ef3(void) {
  LOAD_REGS();
L_784ef3: /* 784ef3: push 0xa096fc */
  { uint32_t v = 0xa096fcu; esp -= 4; W32(esp, v); }
/* 784ef8: push 0xac78c8 */
  { uint32_t v = 0xac78c8u; esp -= 4; W32(esp, v); }
/* 784efd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x784f03u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 784f03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784f06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784f08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784f0a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x784f0fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_784f0f(); return;
}

void f_784f0f(void) {
  LOAD_REGS();
L_784f0f: /* 784f0f: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 784f12: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 784f17: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 784f1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784f1b: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 784f1e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x784f23u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_784f23(); return;
}

void f_784f23(void) {
  LOAD_REGS();
L_784f23: /* 784f23: push 0xa096dc */
  { uint32_t v = 0xa096dcu; esp -= 4; W32(esp, v); }
/* 784f28: push 0xac7870 */
  { uint32_t v = 0xac7870u; esp -= 4; W32(esp, v); }
/* 784f2d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x784f33u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 784f33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784f36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784f38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784f3a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x784f3fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_784f3f: guest_badaddr(0x784f3f); return;
}

void f_7850e0(void) {
  LOAD_REGS();
L_7850e0: /* 7850e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7850e1: mov ebp, esp */
  ebp = esp;
/* 7850e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7850e5: push 0x9cca20 */
  { uint32_t v = 0x9cca20u; esp -= 4; W32(esp, v); }
/* 7850ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7850f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7850f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7850f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7850fb: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 785100: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 785101: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785102: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 785105: mov ecx, dword ptr [0xce8338] */
  ecx = R32((uint32_t)(0xce8338u));
/* 78510b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78510c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78510f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 785116: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 785119: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78511b: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 78511d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 785120: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 785123: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785124: call 0x6c42ff */
  esp -= 4; W32(esp, 0x785129u); SPILL(); f_6c42ff(); if (g_unwind) return; RELOAD();
/* 785129: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 78512e: mov ecx, dword ptr [0xce8338] */
  ecx = R32((uint32_t)(0xce8338u));
/* 785134: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 785137: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 785139: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78513b: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78513e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 785140: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 785141: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 785143: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 785146: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 785147: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78514e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78514f: mov esp, ebp */
  esp = ebp;
/* 785151: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 785152: ret 4 */
  esp += 8; SPILL(); return;
}

void f_785155(void) {
  LOAD_REGS();
L_785155: /* 785155: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 785158: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78515d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 785160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785161: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 785164: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785169u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785169(); return;
}

void f_785169(void) {
  LOAD_REGS();
L_785169: /* 785169: push 0xa09740 */
  { uint32_t v = 0xa09740u; esp -= 4; W32(esp, v); }
/* 78516e: push 0xac78d0 */
  { uint32_t v = 0xac78d0u; esp -= 4; W32(esp, v); }
/* 785173: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x785179u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 785179: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78517c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78517e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785180: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785185u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_785185: guest_badaddr(0x785185); return;
}

void f_7851c0(void) {
  LOAD_REGS();
L_7851c0: /* 7851c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7851c1: mov ebp, esp */
  ebp = esp;
/* 7851c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7851c5: push 0x9cca44 */
  { uint32_t v = 0x9cca44u; esp -= 4; W32(esp, v); }
/* 7851ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7851d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7851d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7851d8: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7851db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7851dc: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7851e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7851e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7851e4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7851e7: xor esi, esi */
  esi = 0;
/* 7851e9: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7851eb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7851ee: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7851f1: jne 0x785207 */
  if (!zf) goto L_785207;
L_7851f3: /* 7851f3: push 0x29f */
  { uint32_t v = 0x29fu; esp -= 4; W32(esp, v); }
/* 7851f8: push 0xac6cf8 */
  { uint32_t v = 0xac6cf8u; esp -= 4; W32(esp, v); }
/* 7851fd: push 0xac6d08 */
  { uint32_t v = 0xac6d08u; esp -= 4; W32(esp, v); }
/* 785202: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785204u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785204: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785207: /* 785207: cmp dword ptr [edi + 0x2f4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x2f4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78520d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 785211: jne 0x7852ae */
  if (!zf) goto L_7852ae;
L_785217: /* 785217: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 78521d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_785220: /* 785220: cmp esi, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785226: jge 0x78524a */
  if ((sf == of)) goto L_78524a;
L_785228: /* 785228: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 78522e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785232: je 0x785247 */
  if (zf) goto L_785247;
L_785234: /* 785234: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78523a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78523c: push 0xac6d10 */
  { uint32_t v = 0xac6d10u; esp -= 4; W32(esp, v); }
/* 785241: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785242: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785244u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785244: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785247: /* 785247: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 785248: jmp 0x785220 */
  goto L_785220;
L_78524a: /* 78524a: xor esi, esi */
  esi = 0;
/* 78524c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_785250: /* 785250: cmp esi, dword ptr [edi + 0x2ec] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2ecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785256: jge 0x78596b */
  if ((sf == of)) goto L_78596b;
L_78525c: /* 78525c: mov eax, dword ptr [edi + 0x2e8] */
  eax = R32((uint32_t)(edi + 0x2e8u));
/* 785262: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785266: je 0x78527b */
  if (zf) goto L_78527b;
L_785268: /* 785268: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78526e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 785270: push 0xac6d88 */
  { uint32_t v = 0xac6d88u; esp -= 4; W32(esp, v); }
/* 785275: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785276: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785278u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785278: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78527b: /* 78527b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78527c: jmp 0x785250 */
  goto L_785250;
L_7852ae: /* 7852ae: cmp dword ptr [0xb21bb4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb21bb4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7852b4: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7852b7: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7852bb: je 0x78596b */
  if (zf) goto L_78596b;
L_7852c1: /* 7852c1: push 0xac6e04 */
  { uint32_t v = 0xac6e04u; esp -= 4; W32(esp, v); }
/* 7852c6: call 0x6c7405 */
  esp -= 4; W32(esp, 0x7852cbu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 7852cb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7852cd: mov ecx, edi */
  ecx = edi;
/* 7852cf: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7852d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7852d5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7852d7: je 0x7852ea */
  if (zf) goto L_7852ea;
L_7852d9: /* 7852d9: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7852de: mov ecx, eax */
  ecx = eax;
/* 7852e0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7852e6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7852e6: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7852e8: jne 0x7852fe */
  if (!zf) goto L_7852fe;
L_7852ea: /* 7852ea: push 0x2c4 */
  { uint32_t v = 0x2c4u; esp -= 4; W32(esp, v); }
/* 7852ef: push 0xac6e28 */
  { uint32_t v = 0xac6e28u; esp -= 4; W32(esp, v); }
/* 7852f4: push 0xac6e38 */
  { uint32_t v = 0xac6e38u; esp -= 4; W32(esp, v); }
/* 7852f9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7852fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7852fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7852fe: /* 7852fe: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 785300: mov ecx, edi */
  ecx = edi;
/* 785302: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x785308u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785308: mov esi, eax */
  esi = eax;
/* 78530a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78530c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 78530f: jne 0x785325 */
  if (!zf) goto L_785325;
L_785311: /* 785311: push 0x2c7 */
  { uint32_t v = 0x2c7u; esp -= 4; W32(esp, v); }
/* 785316: push 0xac6e40 */
  { uint32_t v = 0xac6e40u; esp -= 4; W32(esp, v); }
/* 78531b: push 0xac6e50 */
  { uint32_t v = 0xac6e50u; esp -= 4; W32(esp, v); }
/* 785320: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785322u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785322: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785325: /* 785325: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 78532b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78532d: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 785330: jne 0x78534a */
  if (!zf) goto L_78534a;
L_785332: /* 785332: push 0x2ca */
  { uint32_t v = 0x2cau; esp -= 4; W32(esp, v); }
/* 785337: push 0xac6e58 */
  { uint32_t v = 0xac6e58u; esp -= 4; W32(esp, v); }
/* 78533c: push 0xac6e68 */
  { uint32_t v = 0xac6e68u; esp -= 4; W32(esp, v); }
/* 785341: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785347u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785347: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78534a: /* 78534a: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785351: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 785358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 78535c: je 0x78537e */
  if (zf) goto L_78537e;
L_78535e: /* 78535e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785360: je 0x78537e */
  if (zf) goto L_78537e;
L_785362: /* 785362: mov ebx, dword ptr [ebx + 0xec] */
  ebx = R32((uint32_t)(ebx + 0xecu));
/* 785368: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78536a: je 0x78537e */
  if (zf) goto L_78537e;
L_78536c: /* 78536c: mov eax, dword ptr [esi + 0x120] */
  eax = R32((uint32_t)(esi + 0x120u));
/* 785372: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 785374: jle 0x78537e */
  if ((zf || sf != of)) goto L_78537e;
L_785376: /* 785376: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 785378: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785379: mov ecx, ebx */
  ecx = ebx;
/* 78537b: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x78537eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_78537e: /* 78537e: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 785384: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785386: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78538d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 785391: jne 0x7853ab */
  if (!zf) goto L_7853ab;
L_785393: /* 785393: push 0x2d8 */
  { uint32_t v = 0x2d8u; esp -= 4; W32(esp, v); }
/* 785398: push 0xac6e80 */
  { uint32_t v = 0xac6e80u; esp -= 4; W32(esp, v); }
/* 78539d: push 0xac6e90 */
  { uint32_t v = 0xac6e90u; esp -= 4; W32(esp, v); }
/* 7853a2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7853a8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7853a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7853ab: /* 7853ab: mov esi, dword ptr [esi + 0x30c] */
  esi = R32((uint32_t)(esi + 0x30cu));
/* 7853b1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7853b3: je 0x7853fa */
  if (zf) goto L_7853fa;
L_7853b5: /* 7853b5: push 0xb1f868 */
  { uint32_t v = 0xb1f868u; esp -= 4; W32(esp, v); }
/* 7853ba: mov ecx, esi */
  ecx = esi;
/* 7853bc: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7853c2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7853c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7853c4: je 0x7853fa */
  if (zf) goto L_7853fa;
L_7853c6: /* 7853c6: mov ebx, esi */
  ebx = esi;
/* 7853c8: jmp 0x785414 */
  goto L_785414;
L_7853fa: /* 7853fa: push 0x2da */
  { uint32_t v = 0x2dau; esp -= 4; W32(esp, v); }
/* 7853ff: push 0xac6ea0 */
  { uint32_t v = 0xac6ea0u; esp -= 4; W32(esp, v); }
/* 785404: push 0xac6eb0 */
  { uint32_t v = 0xac6eb0u; esp -= 4; W32(esp, v); }
/* 785409: xor ebx, ebx */
  ebx = 0;
/* 78540b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785411u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785411: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785414: /* 785414: mov eax, dword ptr [ebx + 0x50] */
  eax = R32((uint32_t)(ebx + 0x50u));
/* 785417: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785419: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78541c: je 0x785444 */
  if (zf) goto L_785444;
L_78541e: /* 78541e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 785421: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 785427: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 785429: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78542b: mov ecx, esi */
  ecx = esi;
/* 78542d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x785433u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 785433: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 785435: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 785438: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 78543b: mov dword ptr [ebx + 0x50], 0 */
  W32((uint32_t)(ebx + 0x50u), 0x0u);
/* 785442: jmp 0x78545b */
  goto L_78545b;
L_785444: /* 785444: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78544a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78544c: push 0xac6ec0 */
  { uint32_t v = 0xac6ec0u; esp -= 4; W32(esp, v); }
/* 785451: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785452: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785458u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785458: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78545b: /* 78545b: xor esi, esi */
  esi = 0;
/* 78545d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 785460: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
L_785464: /* 785464: cmp esi, dword ptr [edi + 0x320] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78546a: jge 0x7854aa */
  if ((sf == of)) goto L_7854aa;
L_78546c: /* 78546c: mov edx, dword ptr [edi + 0x31c] */
  edx = R32((uint32_t)(edi + 0x31cu));
/* 785472: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 785475: mov ebx, dword ptr [edx + ecx*8 + 0x24] */
  ebx = R32((uint32_t)(edx + ecx*8 + 0x24u));
/* 785479: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78547b: jne 0x785495 */
  if (!zf) goto L_785495;
L_78547d: /* 78547d: push 0x2ef */
  { uint32_t v = 0x2efu; esp -= 4; W32(esp, v); }
/* 785482: push 0xac6f40 */
  { uint32_t v = 0xac6f40u; esp -= 4; W32(esp, v); }
/* 785487: push 0xac6f50 */
  { uint32_t v = 0xac6f50u; esp -= 4; W32(esp, v); }
/* 78548c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785492u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785492: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785495: /* 785495: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 785496: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x78549bu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 78549b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78549c: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x7854a1u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 7854a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7854a2: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x7854a7u); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 7854a7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7854a8: jmp 0x785464 */
  goto L_785464;
L_7854aa: /* 7854aa: xor esi, esi */
  esi = 0;
/* 7854ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7854b0: /* 7854b0: mov eax, dword ptr [edi + 0x320] */
  eax = R32((uint32_t)(edi + 0x320u));
/* 7854b6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7854b8: lea ecx, [edi + 0x31c] */
  ecx = (uint32_t)(edi + 0x31cu);
/* 7854be: jge 0x7854eb */
  if ((sf == of)) goto L_7854eb;
L_7854c0: /* 7854c0: mov ecx, dword ptr [edi + 0x31c] */
  ecx = R32((uint32_t)(edi + 0x31cu));
/* 7854c6: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 7854c9: lea ebx, [ecx + eax*8] */
  ebx = (uint32_t)(ecx + eax*8);
/* 7854cc: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 7854cf: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 7854d2: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7854d6: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x7854dcu); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 7854dc: mov ecx, ebx */
  ecx = ebx;
/* 7854de: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7854e2: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x7854e8u); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 7854e8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7854e9: jmp 0x7854b0 */
  goto L_7854b0;
L_7854eb: /* 7854eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7854ed: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7854ef: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7854f5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7854f5: mov eax, dword ptr [edi + 0x328] */
  eax = R32((uint32_t)(edi + 0x328u));
/* 7854fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7854fd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 785504: jl 0x78550e */
  if ((sf != of)) goto L_78550e;
L_785506: /* 785506: cmp eax, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78550c: jl 0x785526 */
  if ((sf != of)) goto L_785526;
L_78550e: /* 78550e: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 785513: push 0xac6f5c */
  { uint32_t v = 0xac6f5cu; esp -= 4; W32(esp, v); }
/* 785518: push 0xac6f70 */
  { uint32_t v = 0xac6f70u; esp -= 4; W32(esp, v); }
/* 78551d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785523u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785523: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785526: /* 785526: mov eax, dword ptr [edi + 0x32c] */
  eax = R32((uint32_t)(edi + 0x32cu));
/* 78552c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78552e: jl 0x785538 */
  if ((sf != of)) goto L_785538;
L_785530: /* 785530: cmp eax, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785536: jl 0x785550 */
  if ((sf != of)) goto L_785550;
L_785538: /* 785538: push 0x2f9 */
  { uint32_t v = 0x2f9u; esp -= 4; W32(esp, v); }
/* 78553d: push 0xac6fbc */
  { uint32_t v = 0xac6fbcu; esp -= 4; W32(esp, v); }
/* 785542: push 0xac6fd0 */
  { uint32_t v = 0xac6fd0u; esp -= 4; W32(esp, v); }
/* 785547: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78554du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78554d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785550: /* 785550: mov ebx, dword ptr [edi + 0x328] */
  ebx = R32((uint32_t)(edi + 0x328u));
/* 785556: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 78555a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_785560: /* 785560: cmp ebx, dword ptr [edi + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785566: jg 0x785591 */
  if ((!zf && sf == of)) goto L_785591;
L_785568: /* 785568: mov edx, dword ptr [edi + 0x2e8] */
  edx = R32((uint32_t)(edi + 0x2e8u));
/* 78556e: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 785571: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785573: je 0x78558e */
  if (zf) goto L_78558e;
L_785575: /* 785575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785576: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x78557bu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 78557b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78557c: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x785581u); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 785581: mov eax, dword ptr [edi + 0x2e8] */
  eax = R32((uint32_t)(edi + 0x2e8u));
/* 785587: mov dword ptr [eax + ebx*4], 0 */
  W32((uint32_t)(eax + ebx*4), 0x0u);
L_78558e: /* 78558e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78558f: jmp 0x785560 */
  goto L_785560;
L_785591: /* 785591: mov eax, dword ptr [edi + 0x328] */
  eax = R32((uint32_t)(edi + 0x328u));
/* 785597: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78559e: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7855a2: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7855a5: jmp 0x7855b0 */
  goto L_7855b0;
L_7855b0: /* 7855b0: cmp eax, dword ptr [edi + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7855b6: jg 0x785712 */
  if ((!zf && sf == of)) goto L_785712;
L_7855bc: /* 7855bc: mov ecx, dword ptr [edi + 0x2dc] */
  ecx = R32((uint32_t)(edi + 0x2dcu));
/* 7855c2: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7855c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7855c7: je 0x7856d6 */
  if (zf) goto L_7856d6;
L_7855cd: /* 7855cd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7855d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7855d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7855d2: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7855d9: call 0x6c619f */
  esp -= 4; W32(esp, 0x7855deu); SPILL(); f_6c619f(); if (g_unwind) return; RELOAD();
/* 7855de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7855e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7855e2: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7855e7u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7855e7: mov ebx, eax */
  ebx = eax;
/* 7855e9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7855eb: je 0x785604 */
  if (zf) goto L_785604;
L_7855ed: /* 7855ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855ee: call 0x6c5407 */
  esp -= 4; W32(esp, 0x7855f3u); SPILL(); f_6c5407(); if (g_unwind) return; RELOAD();
/* 7855f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7855f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855f7: call 0x90f080 */
  esp -= 4; W32(esp, 0x7855fcu); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 7855fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855fd: call 0x90ddf0 */
  esp -= 4; W32(esp, 0x785602u); SPILL(); f_90ddf0(); if (g_unwind) return; RELOAD();
/* 785602: jmp 0x78560d */
  goto L_78560d;
L_785604: /* 785604: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785605: call 0x928730 */
  esp -= 4; W32(esp, 0x78560au); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 78560a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_78560d: /* 78560d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78560e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x785613u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 785613: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785614: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 785617: call 0x9287a0 */
  esp -= 4; W32(esp, 0x78561cu); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 78561c: mov ebx, eax */
  ebx = eax;
/* 78561e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 785621: cmp dword ptr [ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785623: je 0x78563d */
  if (zf) goto L_78563d;
L_785625: /* 785625: push 0x32a */
  { uint32_t v = 0x32au; esp -= 4; W32(esp, v); }
/* 78562a: push 0xac7024 */
  { uint32_t v = 0xac7024u; esp -= 4; W32(esp, v); }
/* 78562f: push 0xac7034 */
  { uint32_t v = 0xac7034u; esp -= 4; W32(esp, v); }
/* 785634: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78563au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78563a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78563d: /* 78563d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 785640: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785642: je 0x78565c */
  if (zf) goto L_78565c;
L_785644: /* 785644: push 0x32b */
  { uint32_t v = 0x32bu; esp -= 4; W32(esp, v); }
/* 785649: push 0xac704c */
  { uint32_t v = 0xac704cu; esp -= 4; W32(esp, v); }
/* 78564e: push 0xac705c */
  { uint32_t v = 0xac705cu; esp -= 4; W32(esp, v); }
/* 785653: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785659u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785659: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78565c: /* 78565c: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 78565f: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* 785662: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 785666: call 0x6c117c */
  esp -= 4; W32(esp, 0x78566bu); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 78566b: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 78566e: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 785672: call 0x6c117c */
  esp -= 4; W32(esp, 0x785677u); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 785677: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 78567d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 78567f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 785681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 785682: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x785685u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785685: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785686: call 0x928510 */
  esp -= 4; W32(esp, 0x78568bu); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 78568b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 785690: dec dword ptr [eax + 0x15230] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 785696: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 785699: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78569b: je 0x7856a4 */
  if (zf) goto L_7856a4;
L_78569d: /* 78569d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78569e: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x7856a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7856a4: /* 7856a4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7856a7: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7856aa: je 0x7856c1 */
  if (zf) goto L_7856c1;
L_7856ac: /* 7856ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7856ad: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 7856b2: mov ecx, dword ptr [eax + 0x15014] */
  ecx = R32((uint32_t)(eax + 0x15014u));
/* 7856b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7856b9: call 0x6c165e */
  esp -= 4; W32(esp, 0x7856beu); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 7856be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7856c1: /* 7856c1: mov edx, dword ptr [edi + 0x2dc] */
  edx = R32((uint32_t)(edi + 0x2dcu));
/* 7856c7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7856ca: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 7856d1: call 0x6c560f */
  esp -= 4; W32(esp, 0x7856d6u); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
L_7856d6: /* 7856d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7856d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7856da: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7856dd: jmp 0x7855b0 */
  goto L_7855b0;
L_785712: /* 785712: xor esi, esi */
  esi = 0;
/* 785714: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 785717: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 78571b: jmp 0x785720 */
  goto L_785720;
L_785720: /* 785720: cmp esi, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785726: jge 0x78574e */
  if ((sf == of)) goto L_78574e;
L_785728: /* 785728: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 78572e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785732: je 0x78574b */
  if (zf) goto L_78574b;
L_785734: /* 785734: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78573a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78573c: push 0xac7088 */
  { uint32_t v = 0xac7088u; esp -= 4; W32(esp, v); }
/* 785741: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785742: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785748u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785748: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78574b: /* 78574b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78574c: jmp 0x785720 */
  goto L_785720;
L_78574e: /* 78574e: xor esi, esi */
  esi = 0;
L_785750: /* 785750: cmp esi, dword ptr [edi + 0x2ec] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2ecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785756: jge 0x7857ae */
  if ((sf == of)) goto L_7857ae;
L_785758: /* 785758: mov eax, dword ptr [edi + 0x2e8] */
  eax = R32((uint32_t)(edi + 0x2e8u));
/* 78575e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785762: je 0x78577b */
  if (zf) goto L_78577b;
L_785764: /* 785764: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78576a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78576c: push 0xac7100 */
  { uint32_t v = 0xac7100u; esp -= 4; W32(esp, v); }
/* 785771: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785772: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785778u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785778: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78577b: /* 78577b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78577c: jmp 0x785750 */
  goto L_785750;
L_7857ae: /* 7857ae: xor eax, eax */
  eax = 0;
/* 7857b0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7857b3: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7857b7: lea ecx, [edi + 0x2e8] */
  ecx = (uint32_t)(edi + 0x2e8u);
/* 7857bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7857c0: /* 7857c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857c3: jge 0x7857c8 */
  if ((sf == of)) goto L_7857c8;
L_7857c5: /* 7857c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857c6: jmp 0x7857c0 */
  goto L_7857c0;
L_7857c8: /* 7857c8: xor ebx, ebx */
  ebx = 0;
/* 7857ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857cd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857d3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857d3: lea ecx, [edi + 0x2dc] */
  ecx = (uint32_t)(edi + 0x2dcu);
/* 7857d9: xor eax, eax */
  eax = 0;
/* 7857db: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e0: /* 7857e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857e3: jge 0x7857e8 */
  if ((sf == of)) goto L_7857e8;
L_7857e5: /* 7857e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857e6: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e8: /* 7857e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857f1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7857f4: mov dword ptr [edi + 0x2f4], ebx */
  W32((uint32_t)(edi + 0x2f4u), ebx);
/* 7857fa: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785801: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785804: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 785808: je 0x785821 */
  if (zf) goto L_785821;
L_78580a: /* 78580a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78580d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78580f: je 0x785821 */
  if (zf) goto L_785821;
L_785811: /* 785811: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 785817: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785819: je 0x785821 */
  if (zf) goto L_785821;
L_78581b: /* 78581b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78581d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78581e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x785821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_785821: /* 785821: push 0xac718c */
  { uint32_t v = 0xac718cu; esp -= 4; W32(esp, v); }
/* 785826: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785829: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78582eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78582e: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 785834: cmp dword ptr [edx + 0x1170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78583a: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 785840: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 785844: jg 0x78585a */
  if ((!zf && sf == of)) goto L_78585a;
L_785846: /* 785846: push 0x369 */
  { uint32_t v = 0x369u; esp -= 4; W32(esp, v); }
/* 78584b: push 0xac71b8 */
  { uint32_t v = 0xac71b8u; esp -= 4; W32(esp, v); }
/* 785850: push 0xac71c8 */
  { uint32_t v = 0xac71c8u; esp -= 4; W32(esp, v); }
/* 785855: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785857u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785857: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78585a: /* 78585a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 785860: add eax, 0x116c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 785865: xor ecx, ecx */
  ecx = 0;
L_785867: /* 785867: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78586a: jge 0x785934 */
  if ((sf == of)) goto L_785934;
L_785870: /* 785870: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 785872: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785875: jne 0x78592e */
  if (!zf) goto L_78592e;
L_78587b: /* 78587b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78587e: mov edi, ecx */
  edi = ecx;
/* 785880: jne 0x785896 */
  if (!zf) goto L_785896;
L_785882: /* 785882: push 0x36b */
  { uint32_t v = 0x36bu; esp -= 4; W32(esp, v); }
/* 785887: push 0xac71ec */
  { uint32_t v = 0xac71ecu; esp -= 4; W32(esp, v); }
/* 78588c: push 0xac71fc */
  { uint32_t v = 0xac71fcu; esp -= 4; W32(esp, v); }
/* 785891: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785896: /* 785896: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 78589c: add esi, 0x116c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7858a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7858a4: jge 0x7858ba */
  if ((sf == of)) goto L_7858ba;
L_7858a6: /* 7858a6: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7858ab: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858b0: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7858b5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858ba: /* 7858ba: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858bd: jle 0x7858d3 */
  if ((zf || sf != of)) goto L_7858d3;
L_7858bf: /* 7858bf: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7858c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858c9: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7858ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858d3: /* 7858d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7858d6: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7858d9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858db: jle 0x7858f5 */
  if ((zf || sf != of)) goto L_7858f5;
L_7858dd: /* 7858dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7858e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7858ec: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7858f2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7858f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858f5: /* 7858f5: mov eax, edi */
  eax = edi;
L_7858f7: /* 7858f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858f9: jge 0x78593c */
  if ((sf == of)) goto L_78593c;
L_7858fb: /* 7858fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7858fc: jmp 0x7858f7 */
  goto L_7858f7;
L_78592e: /* 78592e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78592f: jmp 0x785867 */
  goto L_785867;
L_785934: /* 785934: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 785937: jmp 0x785882 */
  goto L_785882;
L_78593c: /* 78593c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78593e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 785940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785941: mov ecx, esi */
  ecx = esi;
/* 785943: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x785949u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 785949: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78594c: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785953: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78595a: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 78595e: je 0x78596b */
  if (zf) goto L_78596b;
L_785960: /* 785960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785963: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x785968u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 785968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78596b: /* 78596b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78596e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78596f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 785970: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 785977: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 785978: mov esp, ebp */
  esp = ebp;
/* 78597a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78597b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78527e(void) {
  LOAD_REGS();
L_78527e: /* 78527e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 785281: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 785286: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 785289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78528a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 78528d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785292u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785292(); return;
}

void f_785292(void) {
  LOAD_REGS();
L_785292: /* 785292: push 0xa098b0 */
  { uint32_t v = 0xa098b0u; esp -= 4; W32(esp, v); }
/* 785297: push 0xac6dfc */
  { uint32_t v = 0xac6dfcu; esp -= 4; W32(esp, v); }
/* 78529c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7852a2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7852a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7852a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7852a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7852a9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7852aeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7852ae: cmp dword ptr [0xb21bb4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb21bb4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7852b4: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7852b7: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7852bb: je 0x78596b */
  if (zf) goto L_78596b;
L_7852c1: /* 7852c1: push 0xac6e04 */
  { uint32_t v = 0xac6e04u; esp -= 4; W32(esp, v); }
/* 7852c6: call 0x6c7405 */
  esp -= 4; W32(esp, 0x7852cbu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 7852cb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7852cd: mov ecx, edi */
  ecx = edi;
/* 7852cf: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7852d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7852d5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7852d7: je 0x7852ea */
  if (zf) goto L_7852ea;
L_7852d9: /* 7852d9: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7852de: mov ecx, eax */
  ecx = eax;
/* 7852e0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7852e6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7852e6: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7852e8: jne 0x7852fe */
  if (!zf) goto L_7852fe;
L_7852ea: /* 7852ea: push 0x2c4 */
  { uint32_t v = 0x2c4u; esp -= 4; W32(esp, v); }
/* 7852ef: push 0xac6e28 */
  { uint32_t v = 0xac6e28u; esp -= 4; W32(esp, v); }
/* 7852f4: push 0xac6e38 */
  { uint32_t v = 0xac6e38u; esp -= 4; W32(esp, v); }
/* 7852f9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7852fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7852fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7852fe: /* 7852fe: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 785300: mov ecx, edi */
  ecx = edi;
/* 785302: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x785308u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785308: mov esi, eax */
  esi = eax;
/* 78530a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78530c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 78530f: jne 0x785325 */
  if (!zf) goto L_785325;
L_785311: /* 785311: push 0x2c7 */
  { uint32_t v = 0x2c7u; esp -= 4; W32(esp, v); }
/* 785316: push 0xac6e40 */
  { uint32_t v = 0xac6e40u; esp -= 4; W32(esp, v); }
/* 78531b: push 0xac6e50 */
  { uint32_t v = 0xac6e50u; esp -= 4; W32(esp, v); }
/* 785320: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785322u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785322: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785325: /* 785325: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 78532b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78532d: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 785330: jne 0x78534a */
  if (!zf) goto L_78534a;
L_785332: /* 785332: push 0x2ca */
  { uint32_t v = 0x2cau; esp -= 4; W32(esp, v); }
/* 785337: push 0xac6e58 */
  { uint32_t v = 0xac6e58u; esp -= 4; W32(esp, v); }
/* 78533c: push 0xac6e68 */
  { uint32_t v = 0xac6e68u; esp -= 4; W32(esp, v); }
/* 785341: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785347u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785347: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78534a: /* 78534a: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785351: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 785358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 78535c: je 0x78537e */
  if (zf) goto L_78537e;
L_78535e: /* 78535e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785360: je 0x78537e */
  if (zf) goto L_78537e;
L_785362: /* 785362: mov ebx, dword ptr [ebx + 0xec] */
  ebx = R32((uint32_t)(ebx + 0xecu));
/* 785368: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78536a: je 0x78537e */
  if (zf) goto L_78537e;
L_78536c: /* 78536c: mov eax, dword ptr [esi + 0x120] */
  eax = R32((uint32_t)(esi + 0x120u));
/* 785372: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 785374: jle 0x78537e */
  if ((zf || sf != of)) goto L_78537e;
L_785376: /* 785376: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 785378: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785379: mov ecx, ebx */
  ecx = ebx;
/* 78537b: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x78537eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_78537e: /* 78537e: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 785384: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785386: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78538d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 785391: jne 0x7853ab */
  if (!zf) goto L_7853ab;
L_785393: /* 785393: push 0x2d8 */
  { uint32_t v = 0x2d8u; esp -= 4; W32(esp, v); }
/* 785398: push 0xac6e80 */
  { uint32_t v = 0xac6e80u; esp -= 4; W32(esp, v); }
/* 78539d: push 0xac6e90 */
  { uint32_t v = 0xac6e90u; esp -= 4; W32(esp, v); }
/* 7853a2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7853a8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7853a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7853ab: /* 7853ab: mov esi, dword ptr [esi + 0x30c] */
  esi = R32((uint32_t)(esi + 0x30cu));
/* 7853b1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7853b3: je 0x7853fa */
  if (zf) goto L_7853fa;
L_7853b5: /* 7853b5: push 0xb1f868 */
  { uint32_t v = 0xb1f868u; esp -= 4; W32(esp, v); }
/* 7853ba: mov ecx, esi */
  ecx = esi;
/* 7853bc: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7853c2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7853c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7853c4: je 0x7853fa */
  if (zf) goto L_7853fa;
L_7853c6: /* 7853c6: mov ebx, esi */
  ebx = esi;
/* 7853c8: jmp 0x785414 */
  goto L_785414;
L_7853fa: /* 7853fa: push 0x2da */
  { uint32_t v = 0x2dau; esp -= 4; W32(esp, v); }
/* 7853ff: push 0xac6ea0 */
  { uint32_t v = 0xac6ea0u; esp -= 4; W32(esp, v); }
/* 785404: push 0xac6eb0 */
  { uint32_t v = 0xac6eb0u; esp -= 4; W32(esp, v); }
/* 785409: xor ebx, ebx */
  ebx = 0;
/* 78540b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785411u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785411: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785414: /* 785414: mov eax, dword ptr [ebx + 0x50] */
  eax = R32((uint32_t)(ebx + 0x50u));
/* 785417: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785419: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78541c: je 0x785444 */
  if (zf) goto L_785444;
L_78541e: /* 78541e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 785421: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 785427: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 785429: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78542b: mov ecx, esi */
  ecx = esi;
/* 78542d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x785433u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 785433: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 785435: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 785438: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 78543b: mov dword ptr [ebx + 0x50], 0 */
  W32((uint32_t)(ebx + 0x50u), 0x0u);
/* 785442: jmp 0x78545b */
  goto L_78545b;
L_785444: /* 785444: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78544a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78544c: push 0xac6ec0 */
  { uint32_t v = 0xac6ec0u; esp -= 4; W32(esp, v); }
/* 785451: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785452: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785458u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785458: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78545b: /* 78545b: xor esi, esi */
  esi = 0;
/* 78545d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 785460: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
L_785464: /* 785464: cmp esi, dword ptr [edi + 0x320] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78546a: jge 0x7854aa */
  if ((sf == of)) goto L_7854aa;
L_78546c: /* 78546c: mov edx, dword ptr [edi + 0x31c] */
  edx = R32((uint32_t)(edi + 0x31cu));
/* 785472: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 785475: mov ebx, dword ptr [edx + ecx*8 + 0x24] */
  ebx = R32((uint32_t)(edx + ecx*8 + 0x24u));
/* 785479: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78547b: jne 0x785495 */
  if (!zf) goto L_785495;
L_78547d: /* 78547d: push 0x2ef */
  { uint32_t v = 0x2efu; esp -= 4; W32(esp, v); }
/* 785482: push 0xac6f40 */
  { uint32_t v = 0xac6f40u; esp -= 4; W32(esp, v); }
/* 785487: push 0xac6f50 */
  { uint32_t v = 0xac6f50u; esp -= 4; W32(esp, v); }
/* 78548c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785492u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785492: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785495: /* 785495: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 785496: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x78549bu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 78549b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78549c: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x7854a1u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 7854a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7854a2: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x7854a7u); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 7854a7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7854a8: jmp 0x785464 */
  goto L_785464;
L_7854aa: /* 7854aa: xor esi, esi */
  esi = 0;
/* 7854ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7854b0: /* 7854b0: mov eax, dword ptr [edi + 0x320] */
  eax = R32((uint32_t)(edi + 0x320u));
/* 7854b6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7854b8: lea ecx, [edi + 0x31c] */
  ecx = (uint32_t)(edi + 0x31cu);
/* 7854be: jge 0x7854eb */
  if ((sf == of)) goto L_7854eb;
L_7854c0: /* 7854c0: mov ecx, dword ptr [edi + 0x31c] */
  ecx = R32((uint32_t)(edi + 0x31cu));
/* 7854c6: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 7854c9: lea ebx, [ecx + eax*8] */
  ebx = (uint32_t)(ecx + eax*8);
/* 7854cc: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 7854cf: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 7854d2: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7854d6: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x7854dcu); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 7854dc: mov ecx, ebx */
  ecx = ebx;
/* 7854de: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7854e2: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x7854e8u); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 7854e8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7854e9: jmp 0x7854b0 */
  goto L_7854b0;
L_7854eb: /* 7854eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7854ed: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7854ef: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7854f5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7854f5: mov eax, dword ptr [edi + 0x328] */
  eax = R32((uint32_t)(edi + 0x328u));
/* 7854fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7854fd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 785504: jl 0x78550e */
  if ((sf != of)) goto L_78550e;
L_785506: /* 785506: cmp eax, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78550c: jl 0x785526 */
  if ((sf != of)) goto L_785526;
L_78550e: /* 78550e: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 785513: push 0xac6f5c */
  { uint32_t v = 0xac6f5cu; esp -= 4; W32(esp, v); }
/* 785518: push 0xac6f70 */
  { uint32_t v = 0xac6f70u; esp -= 4; W32(esp, v); }
/* 78551d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785523u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785523: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785526: /* 785526: mov eax, dword ptr [edi + 0x32c] */
  eax = R32((uint32_t)(edi + 0x32cu));
/* 78552c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78552e: jl 0x785538 */
  if ((sf != of)) goto L_785538;
L_785530: /* 785530: cmp eax, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785536: jl 0x785550 */
  if ((sf != of)) goto L_785550;
L_785538: /* 785538: push 0x2f9 */
  { uint32_t v = 0x2f9u; esp -= 4; W32(esp, v); }
/* 78553d: push 0xac6fbc */
  { uint32_t v = 0xac6fbcu; esp -= 4; W32(esp, v); }
/* 785542: push 0xac6fd0 */
  { uint32_t v = 0xac6fd0u; esp -= 4; W32(esp, v); }
/* 785547: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78554du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78554d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785550: /* 785550: mov ebx, dword ptr [edi + 0x328] */
  ebx = R32((uint32_t)(edi + 0x328u));
/* 785556: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 78555a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_785560: /* 785560: cmp ebx, dword ptr [edi + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785566: jg 0x785591 */
  if ((!zf && sf == of)) goto L_785591;
L_785568: /* 785568: mov edx, dword ptr [edi + 0x2e8] */
  edx = R32((uint32_t)(edi + 0x2e8u));
/* 78556e: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 785571: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785573: je 0x78558e */
  if (zf) goto L_78558e;
L_785575: /* 785575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785576: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x78557bu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 78557b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78557c: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x785581u); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 785581: mov eax, dword ptr [edi + 0x2e8] */
  eax = R32((uint32_t)(edi + 0x2e8u));
/* 785587: mov dword ptr [eax + ebx*4], 0 */
  W32((uint32_t)(eax + ebx*4), 0x0u);
L_78558e: /* 78558e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78558f: jmp 0x785560 */
  goto L_785560;
L_785591: /* 785591: mov eax, dword ptr [edi + 0x328] */
  eax = R32((uint32_t)(edi + 0x328u));
/* 785597: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78559e: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7855a2: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7855a5: jmp 0x7855b0 */
  goto L_7855b0;
L_7855b0: /* 7855b0: cmp eax, dword ptr [edi + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7855b6: jg 0x785712 */
  if ((!zf && sf == of)) goto L_785712;
L_7855bc: /* 7855bc: mov ecx, dword ptr [edi + 0x2dc] */
  ecx = R32((uint32_t)(edi + 0x2dcu));
/* 7855c2: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7855c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7855c7: je 0x7856d6 */
  if (zf) goto L_7856d6;
L_7855cd: /* 7855cd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7855d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7855d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7855d2: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7855d9: call 0x6c619f */
  esp -= 4; W32(esp, 0x7855deu); SPILL(); f_6c619f(); if (g_unwind) return; RELOAD();
/* 7855de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7855e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7855e2: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7855e7u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7855e7: mov ebx, eax */
  ebx = eax;
/* 7855e9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7855eb: je 0x785604 */
  if (zf) goto L_785604;
L_7855ed: /* 7855ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855ee: call 0x6c5407 */
  esp -= 4; W32(esp, 0x7855f3u); SPILL(); f_6c5407(); if (g_unwind) return; RELOAD();
/* 7855f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7855f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855f7: call 0x90f080 */
  esp -= 4; W32(esp, 0x7855fcu); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 7855fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855fd: call 0x90ddf0 */
  esp -= 4; W32(esp, 0x785602u); SPILL(); f_90ddf0(); if (g_unwind) return; RELOAD();
/* 785602: jmp 0x78560d */
  goto L_78560d;
L_785604: /* 785604: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785605: call 0x928730 */
  esp -= 4; W32(esp, 0x78560au); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 78560a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_78560d: /* 78560d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78560e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x785613u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 785613: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785614: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 785617: call 0x9287a0 */
  esp -= 4; W32(esp, 0x78561cu); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 78561c: mov ebx, eax */
  ebx = eax;
/* 78561e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 785621: cmp dword ptr [ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785623: je 0x78563d */
  if (zf) goto L_78563d;
L_785625: /* 785625: push 0x32a */
  { uint32_t v = 0x32au; esp -= 4; W32(esp, v); }
/* 78562a: push 0xac7024 */
  { uint32_t v = 0xac7024u; esp -= 4; W32(esp, v); }
/* 78562f: push 0xac7034 */
  { uint32_t v = 0xac7034u; esp -= 4; W32(esp, v); }
/* 785634: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78563au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78563a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78563d: /* 78563d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 785640: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785642: je 0x78565c */
  if (zf) goto L_78565c;
L_785644: /* 785644: push 0x32b */
  { uint32_t v = 0x32bu; esp -= 4; W32(esp, v); }
/* 785649: push 0xac704c */
  { uint32_t v = 0xac704cu; esp -= 4; W32(esp, v); }
/* 78564e: push 0xac705c */
  { uint32_t v = 0xac705cu; esp -= 4; W32(esp, v); }
/* 785653: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785659u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785659: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78565c: /* 78565c: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 78565f: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* 785662: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 785666: call 0x6c117c */
  esp -= 4; W32(esp, 0x78566bu); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 78566b: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 78566e: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 785672: call 0x6c117c */
  esp -= 4; W32(esp, 0x785677u); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 785677: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 78567d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 78567f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 785681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 785682: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x785685u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785685: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785686: call 0x928510 */
  esp -= 4; W32(esp, 0x78568bu); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 78568b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 785690: dec dword ptr [eax + 0x15230] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 785696: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 785699: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78569b: je 0x7856a4 */
  if (zf) goto L_7856a4;
L_78569d: /* 78569d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78569e: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x7856a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7856a4: /* 7856a4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7856a7: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7856aa: je 0x7856c1 */
  if (zf) goto L_7856c1;
L_7856ac: /* 7856ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7856ad: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 7856b2: mov ecx, dword ptr [eax + 0x15014] */
  ecx = R32((uint32_t)(eax + 0x15014u));
/* 7856b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7856b9: call 0x6c165e */
  esp -= 4; W32(esp, 0x7856beu); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 7856be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7856c1: /* 7856c1: mov edx, dword ptr [edi + 0x2dc] */
  edx = R32((uint32_t)(edi + 0x2dcu));
/* 7856c7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7856ca: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 7856d1: call 0x6c560f */
  esp -= 4; W32(esp, 0x7856d6u); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
L_7856d6: /* 7856d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7856d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7856da: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7856dd: jmp 0x7855b0 */
  goto L_7855b0;
L_785712: /* 785712: xor esi, esi */
  esi = 0;
/* 785714: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 785717: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 78571b: jmp 0x785720 */
  goto L_785720;
L_785720: /* 785720: cmp esi, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785726: jge 0x78574e */
  if ((sf == of)) goto L_78574e;
L_785728: /* 785728: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 78572e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785732: je 0x78574b */
  if (zf) goto L_78574b;
L_785734: /* 785734: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78573a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78573c: push 0xac7088 */
  { uint32_t v = 0xac7088u; esp -= 4; W32(esp, v); }
/* 785741: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785742: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785748u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785748: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78574b: /* 78574b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78574c: jmp 0x785720 */
  goto L_785720;
L_78574e: /* 78574e: xor esi, esi */
  esi = 0;
L_785750: /* 785750: cmp esi, dword ptr [edi + 0x2ec] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2ecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785756: jge 0x7857ae */
  if ((sf == of)) goto L_7857ae;
L_785758: /* 785758: mov eax, dword ptr [edi + 0x2e8] */
  eax = R32((uint32_t)(edi + 0x2e8u));
/* 78575e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785762: je 0x78577b */
  if (zf) goto L_78577b;
L_785764: /* 785764: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78576a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78576c: push 0xac7100 */
  { uint32_t v = 0xac7100u; esp -= 4; W32(esp, v); }
/* 785771: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785772: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785778u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785778: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78577b: /* 78577b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78577c: jmp 0x785750 */
  goto L_785750;
L_7857ae: /* 7857ae: xor eax, eax */
  eax = 0;
/* 7857b0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7857b3: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7857b7: lea ecx, [edi + 0x2e8] */
  ecx = (uint32_t)(edi + 0x2e8u);
/* 7857bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7857c0: /* 7857c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857c3: jge 0x7857c8 */
  if ((sf == of)) goto L_7857c8;
L_7857c5: /* 7857c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857c6: jmp 0x7857c0 */
  goto L_7857c0;
L_7857c8: /* 7857c8: xor ebx, ebx */
  ebx = 0;
/* 7857ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857cd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857d3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857d3: lea ecx, [edi + 0x2dc] */
  ecx = (uint32_t)(edi + 0x2dcu);
/* 7857d9: xor eax, eax */
  eax = 0;
/* 7857db: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e0: /* 7857e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857e3: jge 0x7857e8 */
  if ((sf == of)) goto L_7857e8;
L_7857e5: /* 7857e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857e6: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e8: /* 7857e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857f1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7857f4: mov dword ptr [edi + 0x2f4], ebx */
  W32((uint32_t)(edi + 0x2f4u), ebx);
/* 7857fa: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785801: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785804: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 785808: je 0x785821 */
  if (zf) goto L_785821;
L_78580a: /* 78580a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78580d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78580f: je 0x785821 */
  if (zf) goto L_785821;
L_785811: /* 785811: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 785817: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785819: je 0x785821 */
  if (zf) goto L_785821;
L_78581b: /* 78581b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78581d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78581e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x785821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_785821: /* 785821: push 0xac718c */
  { uint32_t v = 0xac718cu; esp -= 4; W32(esp, v); }
/* 785826: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785829: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78582eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78582e: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 785834: cmp dword ptr [edx + 0x1170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78583a: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 785840: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 785844: jg 0x78585a */
  if ((!zf && sf == of)) goto L_78585a;
L_785846: /* 785846: push 0x369 */
  { uint32_t v = 0x369u; esp -= 4; W32(esp, v); }
/* 78584b: push 0xac71b8 */
  { uint32_t v = 0xac71b8u; esp -= 4; W32(esp, v); }
/* 785850: push 0xac71c8 */
  { uint32_t v = 0xac71c8u; esp -= 4; W32(esp, v); }
/* 785855: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785857u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785857: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78585a: /* 78585a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 785860: add eax, 0x116c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 785865: xor ecx, ecx */
  ecx = 0;
L_785867: /* 785867: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78586a: jge 0x785934 */
  if ((sf == of)) goto L_785934;
L_785870: /* 785870: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 785872: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785875: jne 0x78592e */
  if (!zf) goto L_78592e;
L_78587b: /* 78587b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78587e: mov edi, ecx */
  edi = ecx;
/* 785880: jne 0x785896 */
  if (!zf) goto L_785896;
L_785882: /* 785882: push 0x36b */
  { uint32_t v = 0x36bu; esp -= 4; W32(esp, v); }
/* 785887: push 0xac71ec */
  { uint32_t v = 0xac71ecu; esp -= 4; W32(esp, v); }
/* 78588c: push 0xac71fc */
  { uint32_t v = 0xac71fcu; esp -= 4; W32(esp, v); }
/* 785891: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785896: /* 785896: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 78589c: add esi, 0x116c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7858a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7858a4: jge 0x7858ba */
  if ((sf == of)) goto L_7858ba;
L_7858a6: /* 7858a6: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7858ab: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858b0: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7858b5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858ba: /* 7858ba: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858bd: jle 0x7858d3 */
  if ((zf || sf != of)) goto L_7858d3;
L_7858bf: /* 7858bf: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7858c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858c9: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7858ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858d3: /* 7858d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7858d6: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7858d9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858db: jle 0x7858f5 */
  if ((zf || sf != of)) goto L_7858f5;
L_7858dd: /* 7858dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7858e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7858ec: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7858f2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7858f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858f5: /* 7858f5: mov eax, edi */
  eax = edi;
L_7858f7: /* 7858f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858f9: jge 0x78593c */
  if ((sf == of)) goto L_78593c;
L_7858fb: /* 7858fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7858fc: jmp 0x7858f7 */
  goto L_7858f7;
L_78592e: /* 78592e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78592f: jmp 0x785867 */
  goto L_785867;
L_785934: /* 785934: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 785937: jmp 0x785882 */
  goto L_785882;
L_78593c: /* 78593c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78593e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 785940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785941: mov ecx, esi */
  ecx = esi;
/* 785943: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x785949u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 785949: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78594c: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785953: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78595a: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 78595e: je 0x78596b */
  if (zf) goto L_78596b;
L_785960: /* 785960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785963: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x785968u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 785968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78596b: /* 78596b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78596e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78596f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 785970: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 785977: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 785978: mov esp, ebp */
  esp = ebp;
/* 78597a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78597b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7853ca(void) {
  LOAD_REGS();
L_7853ca: /* 7853ca: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7853cd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7853d2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7853d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7853d6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7853d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7853deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7853de(); return;
}

void f_7853de(void) {
  LOAD_REGS();
L_7853de: /* 7853de: push 0xa09894 */
  { uint32_t v = 0xa09894u; esp -= 4; W32(esp, v); }
/* 7853e3: push 0xac6e78 */
  { uint32_t v = 0xac6e78u; esp -= 4; W32(esp, v); }
/* 7853e8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7853eeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7853ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7853f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7853f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7853f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7853fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7853fa: push 0x2da */
  { uint32_t v = 0x2dau; esp -= 4; W32(esp, v); }
/* 7853ff: push 0xac6ea0 */
  { uint32_t v = 0xac6ea0u; esp -= 4; W32(esp, v); }
/* 785404: push 0xac6eb0 */
  { uint32_t v = 0xac6eb0u; esp -= 4; W32(esp, v); }
/* 785409: xor ebx, ebx */
  ebx = 0;
/* 78540b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785411u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785411: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 785414: mov eax, dword ptr [ebx + 0x50] */
  eax = R32((uint32_t)(ebx + 0x50u));
/* 785417: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785419: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78541c: je 0x785444 */
  if (zf) goto L_785444;
L_78541e: /* 78541e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 785421: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 785427: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 785429: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78542b: mov ecx, esi */
  ecx = esi;
/* 78542d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x785433u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 785433: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 785435: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 785438: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 78543b: mov dword ptr [ebx + 0x50], 0 */
  W32((uint32_t)(ebx + 0x50u), 0x0u);
/* 785442: jmp 0x78545b */
  goto L_78545b;
L_785444: /* 785444: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78544a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78544c: push 0xac6ec0 */
  { uint32_t v = 0xac6ec0u; esp -= 4; W32(esp, v); }
/* 785451: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785452: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785458u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785458: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78545b: /* 78545b: xor esi, esi */
  esi = 0;
/* 78545d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 785460: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
L_785464: /* 785464: cmp esi, dword ptr [edi + 0x320] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78546a: jge 0x7854aa */
  if ((sf == of)) goto L_7854aa;
L_78546c: /* 78546c: mov edx, dword ptr [edi + 0x31c] */
  edx = R32((uint32_t)(edi + 0x31cu));
/* 785472: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 785475: mov ebx, dword ptr [edx + ecx*8 + 0x24] */
  ebx = R32((uint32_t)(edx + ecx*8 + 0x24u));
/* 785479: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78547b: jne 0x785495 */
  if (!zf) goto L_785495;
L_78547d: /* 78547d: push 0x2ef */
  { uint32_t v = 0x2efu; esp -= 4; W32(esp, v); }
/* 785482: push 0xac6f40 */
  { uint32_t v = 0xac6f40u; esp -= 4; W32(esp, v); }
/* 785487: push 0xac6f50 */
  { uint32_t v = 0xac6f50u; esp -= 4; W32(esp, v); }
/* 78548c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785492u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785492: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785495: /* 785495: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 785496: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x78549bu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 78549b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78549c: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x7854a1u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 7854a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7854a2: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x7854a7u); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 7854a7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7854a8: jmp 0x785464 */
  goto L_785464;
L_7854aa: /* 7854aa: xor esi, esi */
  esi = 0;
/* 7854ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7854b0: /* 7854b0: mov eax, dword ptr [edi + 0x320] */
  eax = R32((uint32_t)(edi + 0x320u));
/* 7854b6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7854b8: lea ecx, [edi + 0x31c] */
  ecx = (uint32_t)(edi + 0x31cu);
/* 7854be: jge 0x7854eb */
  if ((sf == of)) goto L_7854eb;
L_7854c0: /* 7854c0: mov ecx, dword ptr [edi + 0x31c] */
  ecx = R32((uint32_t)(edi + 0x31cu));
/* 7854c6: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 7854c9: lea ebx, [ecx + eax*8] */
  ebx = (uint32_t)(ecx + eax*8);
/* 7854cc: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 7854cf: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 7854d2: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7854d6: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x7854dcu); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 7854dc: mov ecx, ebx */
  ecx = ebx;
/* 7854de: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7854e2: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x7854e8u); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 7854e8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7854e9: jmp 0x7854b0 */
  goto L_7854b0;
L_7854eb: /* 7854eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7854ed: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7854ef: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7854f5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7854f5: mov eax, dword ptr [edi + 0x328] */
  eax = R32((uint32_t)(edi + 0x328u));
/* 7854fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7854fd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 785504: jl 0x78550e */
  if ((sf != of)) goto L_78550e;
L_785506: /* 785506: cmp eax, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78550c: jl 0x785526 */
  if ((sf != of)) goto L_785526;
L_78550e: /* 78550e: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 785513: push 0xac6f5c */
  { uint32_t v = 0xac6f5cu; esp -= 4; W32(esp, v); }
/* 785518: push 0xac6f70 */
  { uint32_t v = 0xac6f70u; esp -= 4; W32(esp, v); }
/* 78551d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785523u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785523: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785526: /* 785526: mov eax, dword ptr [edi + 0x32c] */
  eax = R32((uint32_t)(edi + 0x32cu));
/* 78552c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78552e: jl 0x785538 */
  if ((sf != of)) goto L_785538;
L_785530: /* 785530: cmp eax, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785536: jl 0x785550 */
  if ((sf != of)) goto L_785550;
L_785538: /* 785538: push 0x2f9 */
  { uint32_t v = 0x2f9u; esp -= 4; W32(esp, v); }
/* 78553d: push 0xac6fbc */
  { uint32_t v = 0xac6fbcu; esp -= 4; W32(esp, v); }
/* 785542: push 0xac6fd0 */
  { uint32_t v = 0xac6fd0u; esp -= 4; W32(esp, v); }
/* 785547: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78554du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78554d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785550: /* 785550: mov ebx, dword ptr [edi + 0x328] */
  ebx = R32((uint32_t)(edi + 0x328u));
/* 785556: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 78555a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_785560: /* 785560: cmp ebx, dword ptr [edi + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785566: jg 0x785591 */
  if ((!zf && sf == of)) goto L_785591;
L_785568: /* 785568: mov edx, dword ptr [edi + 0x2e8] */
  edx = R32((uint32_t)(edi + 0x2e8u));
/* 78556e: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 785571: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785573: je 0x78558e */
  if (zf) goto L_78558e;
L_785575: /* 785575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785576: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x78557bu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 78557b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78557c: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x785581u); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 785581: mov eax, dword ptr [edi + 0x2e8] */
  eax = R32((uint32_t)(edi + 0x2e8u));
/* 785587: mov dword ptr [eax + ebx*4], 0 */
  W32((uint32_t)(eax + ebx*4), 0x0u);
L_78558e: /* 78558e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78558f: jmp 0x785560 */
  goto L_785560;
L_785591: /* 785591: mov eax, dword ptr [edi + 0x328] */
  eax = R32((uint32_t)(edi + 0x328u));
/* 785597: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78559e: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7855a2: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7855a5: jmp 0x7855b0 */
  goto L_7855b0;
L_7855b0: /* 7855b0: cmp eax, dword ptr [edi + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7855b6: jg 0x785712 */
  if ((!zf && sf == of)) goto L_785712;
L_7855bc: /* 7855bc: mov ecx, dword ptr [edi + 0x2dc] */
  ecx = R32((uint32_t)(edi + 0x2dcu));
/* 7855c2: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7855c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7855c7: je 0x7856d6 */
  if (zf) goto L_7856d6;
L_7855cd: /* 7855cd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7855d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7855d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7855d2: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7855d9: call 0x6c619f */
  esp -= 4; W32(esp, 0x7855deu); SPILL(); f_6c619f(); if (g_unwind) return; RELOAD();
/* 7855de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7855e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7855e2: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7855e7u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7855e7: mov ebx, eax */
  ebx = eax;
/* 7855e9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7855eb: je 0x785604 */
  if (zf) goto L_785604;
L_7855ed: /* 7855ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855ee: call 0x6c5407 */
  esp -= 4; W32(esp, 0x7855f3u); SPILL(); f_6c5407(); if (g_unwind) return; RELOAD();
/* 7855f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7855f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855f7: call 0x90f080 */
  esp -= 4; W32(esp, 0x7855fcu); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 7855fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855fd: call 0x90ddf0 */
  esp -= 4; W32(esp, 0x785602u); SPILL(); f_90ddf0(); if (g_unwind) return; RELOAD();
/* 785602: jmp 0x78560d */
  goto L_78560d;
L_785604: /* 785604: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785605: call 0x928730 */
  esp -= 4; W32(esp, 0x78560au); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 78560a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_78560d: /* 78560d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78560e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x785613u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 785613: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785614: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 785617: call 0x9287a0 */
  esp -= 4; W32(esp, 0x78561cu); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 78561c: mov ebx, eax */
  ebx = eax;
/* 78561e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 785621: cmp dword ptr [ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785623: je 0x78563d */
  if (zf) goto L_78563d;
L_785625: /* 785625: push 0x32a */
  { uint32_t v = 0x32au; esp -= 4; W32(esp, v); }
/* 78562a: push 0xac7024 */
  { uint32_t v = 0xac7024u; esp -= 4; W32(esp, v); }
/* 78562f: push 0xac7034 */
  { uint32_t v = 0xac7034u; esp -= 4; W32(esp, v); }
/* 785634: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78563au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78563a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78563d: /* 78563d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 785640: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785642: je 0x78565c */
  if (zf) goto L_78565c;
L_785644: /* 785644: push 0x32b */
  { uint32_t v = 0x32bu; esp -= 4; W32(esp, v); }
/* 785649: push 0xac704c */
  { uint32_t v = 0xac704cu; esp -= 4; W32(esp, v); }
/* 78564e: push 0xac705c */
  { uint32_t v = 0xac705cu; esp -= 4; W32(esp, v); }
/* 785653: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785659u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785659: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78565c: /* 78565c: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 78565f: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* 785662: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 785666: call 0x6c117c */
  esp -= 4; W32(esp, 0x78566bu); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 78566b: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 78566e: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 785672: call 0x6c117c */
  esp -= 4; W32(esp, 0x785677u); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 785677: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 78567d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 78567f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 785681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 785682: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x785685u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785685: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785686: call 0x928510 */
  esp -= 4; W32(esp, 0x78568bu); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 78568b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 785690: dec dword ptr [eax + 0x15230] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 785696: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 785699: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78569b: je 0x7856a4 */
  if (zf) goto L_7856a4;
L_78569d: /* 78569d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78569e: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x7856a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7856a4: /* 7856a4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7856a7: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7856aa: je 0x7856c1 */
  if (zf) goto L_7856c1;
L_7856ac: /* 7856ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7856ad: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 7856b2: mov ecx, dword ptr [eax + 0x15014] */
  ecx = R32((uint32_t)(eax + 0x15014u));
/* 7856b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7856b9: call 0x6c165e */
  esp -= 4; W32(esp, 0x7856beu); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 7856be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7856c1: /* 7856c1: mov edx, dword ptr [edi + 0x2dc] */
  edx = R32((uint32_t)(edi + 0x2dcu));
/* 7856c7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7856ca: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 7856d1: call 0x6c560f */
  esp -= 4; W32(esp, 0x7856d6u); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
L_7856d6: /* 7856d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7856d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7856da: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7856dd: jmp 0x7855b0 */
  goto L_7855b0;
L_785712: /* 785712: xor esi, esi */
  esi = 0;
/* 785714: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 785717: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 78571b: jmp 0x785720 */
  goto L_785720;
L_785720: /* 785720: cmp esi, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785726: jge 0x78574e */
  if ((sf == of)) goto L_78574e;
L_785728: /* 785728: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 78572e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785732: je 0x78574b */
  if (zf) goto L_78574b;
L_785734: /* 785734: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78573a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78573c: push 0xac7088 */
  { uint32_t v = 0xac7088u; esp -= 4; W32(esp, v); }
/* 785741: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785742: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785748u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785748: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78574b: /* 78574b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78574c: jmp 0x785720 */
  goto L_785720;
L_78574e: /* 78574e: xor esi, esi */
  esi = 0;
L_785750: /* 785750: cmp esi, dword ptr [edi + 0x2ec] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2ecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785756: jge 0x7857ae */
  if ((sf == of)) goto L_7857ae;
L_785758: /* 785758: mov eax, dword ptr [edi + 0x2e8] */
  eax = R32((uint32_t)(edi + 0x2e8u));
/* 78575e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785762: je 0x78577b */
  if (zf) goto L_78577b;
L_785764: /* 785764: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78576a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78576c: push 0xac7100 */
  { uint32_t v = 0xac7100u; esp -= 4; W32(esp, v); }
/* 785771: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785772: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785778u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785778: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78577b: /* 78577b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78577c: jmp 0x785750 */
  goto L_785750;
L_7857ae: /* 7857ae: xor eax, eax */
  eax = 0;
/* 7857b0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7857b3: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7857b7: lea ecx, [edi + 0x2e8] */
  ecx = (uint32_t)(edi + 0x2e8u);
/* 7857bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7857c0: /* 7857c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857c3: jge 0x7857c8 */
  if ((sf == of)) goto L_7857c8;
L_7857c5: /* 7857c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857c6: jmp 0x7857c0 */
  goto L_7857c0;
L_7857c8: /* 7857c8: xor ebx, ebx */
  ebx = 0;
/* 7857ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857cd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857d3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857d3: lea ecx, [edi + 0x2dc] */
  ecx = (uint32_t)(edi + 0x2dcu);
/* 7857d9: xor eax, eax */
  eax = 0;
/* 7857db: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e0: /* 7857e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857e3: jge 0x7857e8 */
  if ((sf == of)) goto L_7857e8;
L_7857e5: /* 7857e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857e6: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e8: /* 7857e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857f1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7857f4: mov dword ptr [edi + 0x2f4], ebx */
  W32((uint32_t)(edi + 0x2f4u), ebx);
/* 7857fa: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785801: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785804: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 785808: je 0x785821 */
  if (zf) goto L_785821;
L_78580a: /* 78580a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78580d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78580f: je 0x785821 */
  if (zf) goto L_785821;
L_785811: /* 785811: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 785817: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785819: je 0x785821 */
  if (zf) goto L_785821;
L_78581b: /* 78581b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78581d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78581e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x785821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_785821: /* 785821: push 0xac718c */
  { uint32_t v = 0xac718cu; esp -= 4; W32(esp, v); }
/* 785826: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785829: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78582eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78582e: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 785834: cmp dword ptr [edx + 0x1170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78583a: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 785840: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 785844: jg 0x78585a */
  if ((!zf && sf == of)) goto L_78585a;
L_785846: /* 785846: push 0x369 */
  { uint32_t v = 0x369u; esp -= 4; W32(esp, v); }
/* 78584b: push 0xac71b8 */
  { uint32_t v = 0xac71b8u; esp -= 4; W32(esp, v); }
/* 785850: push 0xac71c8 */
  { uint32_t v = 0xac71c8u; esp -= 4; W32(esp, v); }
/* 785855: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785857u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785857: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78585a: /* 78585a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 785860: add eax, 0x116c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 785865: xor ecx, ecx */
  ecx = 0;
L_785867: /* 785867: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78586a: jge 0x785934 */
  if ((sf == of)) goto L_785934;
L_785870: /* 785870: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 785872: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785875: jne 0x78592e */
  if (!zf) goto L_78592e;
L_78587b: /* 78587b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78587e: mov edi, ecx */
  edi = ecx;
/* 785880: jne 0x785896 */
  if (!zf) goto L_785896;
L_785882: /* 785882: push 0x36b */
  { uint32_t v = 0x36bu; esp -= 4; W32(esp, v); }
/* 785887: push 0xac71ec */
  { uint32_t v = 0xac71ecu; esp -= 4; W32(esp, v); }
/* 78588c: push 0xac71fc */
  { uint32_t v = 0xac71fcu; esp -= 4; W32(esp, v); }
/* 785891: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785896: /* 785896: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 78589c: add esi, 0x116c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7858a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7858a4: jge 0x7858ba */
  if ((sf == of)) goto L_7858ba;
L_7858a6: /* 7858a6: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7858ab: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858b0: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7858b5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858ba: /* 7858ba: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858bd: jle 0x7858d3 */
  if ((zf || sf != of)) goto L_7858d3;
L_7858bf: /* 7858bf: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7858c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858c9: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7858ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858d3: /* 7858d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7858d6: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7858d9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858db: jle 0x7858f5 */
  if ((zf || sf != of)) goto L_7858f5;
L_7858dd: /* 7858dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7858e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7858ec: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7858f2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7858f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858f5: /* 7858f5: mov eax, edi */
  eax = edi;
L_7858f7: /* 7858f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858f9: jge 0x78593c */
  if ((sf == of)) goto L_78593c;
L_7858fb: /* 7858fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7858fc: jmp 0x7858f7 */
  goto L_7858f7;
L_78592e: /* 78592e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78592f: jmp 0x785867 */
  goto L_785867;
L_785934: /* 785934: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 785937: jmp 0x785882 */
  goto L_785882;
L_78593c: /* 78593c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78593e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 785940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785941: mov ecx, esi */
  ecx = esi;
/* 785943: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x785949u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 785949: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78594c: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785953: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78595a: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 78595e: je 0x78596b */
  if (zf) goto L_78596b;
L_785960: /* 785960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785963: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x785968u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 785968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78596b: /* 78596b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78596e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78596f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 785970: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 785977: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 785978: mov esp, ebp */
  esp = ebp;
/* 78597a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78597b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7855a7(void) {
  LOAD_REGS();
L_7855a7: /* 7855a7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7855ae: mov edi, edi */
  edi = edi;
L_7855b0: /* 7855b0: cmp eax, dword ptr [edi + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7855b6: jg 0x785712 */
  if ((!zf && sf == of)) goto L_785712;
L_7855bc: /* 7855bc: mov ecx, dword ptr [edi + 0x2dc] */
  ecx = R32((uint32_t)(edi + 0x2dcu));
/* 7855c2: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7855c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7855c7: je 0x7856d6 */
  if (zf) goto L_7856d6;
L_7855cd: /* 7855cd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7855d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7855d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7855d2: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7855d9: call 0x6c619f */
  esp -= 4; W32(esp, 0x7855deu); SPILL(); f_6c619f(); if (g_unwind) return; RELOAD();
/* 7855de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7855e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7855e2: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7855e7u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7855e7: mov ebx, eax */
  ebx = eax;
/* 7855e9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7855eb: je 0x785604 */
  if (zf) goto L_785604;
L_7855ed: /* 7855ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855ee: call 0x6c5407 */
  esp -= 4; W32(esp, 0x7855f3u); SPILL(); f_6c5407(); if (g_unwind) return; RELOAD();
/* 7855f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7855f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855f7: call 0x90f080 */
  esp -= 4; W32(esp, 0x7855fcu); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 7855fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7855fd: call 0x90ddf0 */
  esp -= 4; W32(esp, 0x785602u); SPILL(); f_90ddf0(); if (g_unwind) return; RELOAD();
/* 785602: jmp 0x78560d */
  goto L_78560d;
L_785604: /* 785604: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785605: call 0x928730 */
  esp -= 4; W32(esp, 0x78560au); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 78560a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_78560d: /* 78560d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78560e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x785613u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 785613: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785614: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 785617: call 0x9287a0 */
  esp -= 4; W32(esp, 0x78561cu); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 78561c: mov ebx, eax */
  ebx = eax;
/* 78561e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 785621: cmp dword ptr [ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785623: je 0x78563d */
  if (zf) goto L_78563d;
L_785625: /* 785625: push 0x32a */
  { uint32_t v = 0x32au; esp -= 4; W32(esp, v); }
/* 78562a: push 0xac7024 */
  { uint32_t v = 0xac7024u; esp -= 4; W32(esp, v); }
/* 78562f: push 0xac7034 */
  { uint32_t v = 0xac7034u; esp -= 4; W32(esp, v); }
/* 785634: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78563au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78563a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78563d: /* 78563d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 785640: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 785642: je 0x78565c */
  if (zf) goto L_78565c;
L_785644: /* 785644: push 0x32b */
  { uint32_t v = 0x32bu; esp -= 4; W32(esp, v); }
/* 785649: push 0xac704c */
  { uint32_t v = 0xac704cu; esp -= 4; W32(esp, v); }
/* 78564e: push 0xac705c */
  { uint32_t v = 0xac705cu; esp -= 4; W32(esp, v); }
/* 785653: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x785659u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 785659: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78565c: /* 78565c: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 78565f: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* 785662: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 785666: call 0x6c117c */
  esp -= 4; W32(esp, 0x78566bu); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 78566b: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 78566e: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 785672: call 0x6c117c */
  esp -= 4; W32(esp, 0x785677u); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 785677: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 78567d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 78567f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 785681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 785682: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x785685u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785685: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785686: call 0x928510 */
  esp -= 4; W32(esp, 0x78568bu); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 78568b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 785690: dec dword ptr [eax + 0x15230] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 785696: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 785699: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78569b: je 0x7856a4 */
  if (zf) goto L_7856a4;
L_78569d: /* 78569d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78569e: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x7856a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7856a4: /* 7856a4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7856a7: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7856aa: je 0x7856c1 */
  if (zf) goto L_7856c1;
L_7856ac: /* 7856ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7856ad: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 7856b2: mov ecx, dword ptr [eax + 0x15014] */
  ecx = R32((uint32_t)(eax + 0x15014u));
/* 7856b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7856b9: call 0x6c165e */
  esp -= 4; W32(esp, 0x7856beu); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 7856be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7856c1: /* 7856c1: mov edx, dword ptr [edi + 0x2dc] */
  edx = R32((uint32_t)(edi + 0x2dcu));
/* 7856c7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7856ca: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 7856d1: call 0x6c560f */
  esp -= 4; W32(esp, 0x7856d6u); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
L_7856d6: /* 7856d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7856d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7856da: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7856dd: jmp 0x7855b0 */
  goto L_7855b0;
L_785712: /* 785712: xor esi, esi */
  esi = 0;
/* 785714: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 785717: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 78571b: jmp 0x785720 */
  goto L_785720;
L_785720: /* 785720: cmp esi, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785726: jge 0x78574e */
  if ((sf == of)) goto L_78574e;
L_785728: /* 785728: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 78572e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785732: je 0x78574b */
  if (zf) goto L_78574b;
L_785734: /* 785734: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78573a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78573c: push 0xac7088 */
  { uint32_t v = 0xac7088u; esp -= 4; W32(esp, v); }
/* 785741: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785742: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785748u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785748: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78574b: /* 78574b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78574c: jmp 0x785720 */
  goto L_785720;
L_78574e: /* 78574e: xor esi, esi */
  esi = 0;
L_785750: /* 785750: cmp esi, dword ptr [edi + 0x2ec] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2ecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785756: jge 0x7857ae */
  if ((sf == of)) goto L_7857ae;
L_785758: /* 785758: mov eax, dword ptr [edi + 0x2e8] */
  eax = R32((uint32_t)(edi + 0x2e8u));
/* 78575e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785762: je 0x78577b */
  if (zf) goto L_78577b;
L_785764: /* 785764: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78576a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78576c: push 0xac7100 */
  { uint32_t v = 0xac7100u; esp -= 4; W32(esp, v); }
/* 785771: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785772: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785778u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785778: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78577b: /* 78577b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78577c: jmp 0x785750 */
  goto L_785750;
L_7857ae: /* 7857ae: xor eax, eax */
  eax = 0;
/* 7857b0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7857b3: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7857b7: lea ecx, [edi + 0x2e8] */
  ecx = (uint32_t)(edi + 0x2e8u);
/* 7857bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7857c0: /* 7857c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857c3: jge 0x7857c8 */
  if ((sf == of)) goto L_7857c8;
L_7857c5: /* 7857c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857c6: jmp 0x7857c0 */
  goto L_7857c0;
L_7857c8: /* 7857c8: xor ebx, ebx */
  ebx = 0;
/* 7857ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857cd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857d3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857d3: lea ecx, [edi + 0x2dc] */
  ecx = (uint32_t)(edi + 0x2dcu);
/* 7857d9: xor eax, eax */
  eax = 0;
/* 7857db: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e0: /* 7857e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857e3: jge 0x7857e8 */
  if ((sf == of)) goto L_7857e8;
L_7857e5: /* 7857e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857e6: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e8: /* 7857e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857f1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7857f4: mov dword ptr [edi + 0x2f4], ebx */
  W32((uint32_t)(edi + 0x2f4u), ebx);
/* 7857fa: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785801: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785804: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 785808: je 0x785821 */
  if (zf) goto L_785821;
L_78580a: /* 78580a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78580d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78580f: je 0x785821 */
  if (zf) goto L_785821;
L_785811: /* 785811: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 785817: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785819: je 0x785821 */
  if (zf) goto L_785821;
L_78581b: /* 78581b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78581d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78581e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x785821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_785821: /* 785821: push 0xac718c */
  { uint32_t v = 0xac718cu; esp -= 4; W32(esp, v); }
/* 785826: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785829: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78582eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78582e: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 785834: cmp dword ptr [edx + 0x1170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78583a: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 785840: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 785844: jg 0x78585a */
  if ((!zf && sf == of)) goto L_78585a;
L_785846: /* 785846: push 0x369 */
  { uint32_t v = 0x369u; esp -= 4; W32(esp, v); }
/* 78584b: push 0xac71b8 */
  { uint32_t v = 0xac71b8u; esp -= 4; W32(esp, v); }
/* 785850: push 0xac71c8 */
  { uint32_t v = 0xac71c8u; esp -= 4; W32(esp, v); }
/* 785855: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785857u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785857: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78585a: /* 78585a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 785860: add eax, 0x116c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 785865: xor ecx, ecx */
  ecx = 0;
L_785867: /* 785867: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78586a: jge 0x785934 */
  if ((sf == of)) goto L_785934;
L_785870: /* 785870: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 785872: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785875: jne 0x78592e */
  if (!zf) goto L_78592e;
L_78587b: /* 78587b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78587e: mov edi, ecx */
  edi = ecx;
/* 785880: jne 0x785896 */
  if (!zf) goto L_785896;
L_785882: /* 785882: push 0x36b */
  { uint32_t v = 0x36bu; esp -= 4; W32(esp, v); }
/* 785887: push 0xac71ec */
  { uint32_t v = 0xac71ecu; esp -= 4; W32(esp, v); }
/* 78588c: push 0xac71fc */
  { uint32_t v = 0xac71fcu; esp -= 4; W32(esp, v); }
/* 785891: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785896: /* 785896: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 78589c: add esi, 0x116c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7858a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7858a4: jge 0x7858ba */
  if ((sf == of)) goto L_7858ba;
L_7858a6: /* 7858a6: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7858ab: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858b0: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7858b5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858ba: /* 7858ba: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858bd: jle 0x7858d3 */
  if ((zf || sf != of)) goto L_7858d3;
L_7858bf: /* 7858bf: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7858c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858c9: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7858ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858d3: /* 7858d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7858d6: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7858d9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858db: jle 0x7858f5 */
  if ((zf || sf != of)) goto L_7858f5;
L_7858dd: /* 7858dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7858e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7858ec: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7858f2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7858f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858f5: /* 7858f5: mov eax, edi */
  eax = edi;
L_7858f7: /* 7858f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858f9: jge 0x78593c */
  if ((sf == of)) goto L_78593c;
L_7858fb: /* 7858fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7858fc: jmp 0x7858f7 */
  goto L_7858f7;
L_78592e: /* 78592e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78592f: jmp 0x785867 */
  goto L_785867;
L_785934: /* 785934: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 785937: jmp 0x785882 */
  goto L_785882;
L_78593c: /* 78593c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78593e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 785940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785941: mov ecx, esi */
  ecx = esi;
/* 785943: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x785949u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 785949: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78594c: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785953: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78595a: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 78595e: je 0x78596b */
  if (zf) goto L_78596b;
L_785960: /* 785960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785963: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x785968u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 785968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78596b: /* 78596b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78596e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78596f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 785970: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 785977: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 785978: mov esp, ebp */
  esp = ebp;
/* 78597a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78597b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7856e2(void) {
  LOAD_REGS();
L_7856e2: /* 7856e2: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7856e5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7856ea: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7856ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7856ee: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7856f1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7856f6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7856f6(); return;
}

void f_7856f6(void) {
  LOAD_REGS();
L_7856f6: /* 7856f6: push 0xa09884 */
  { uint32_t v = 0xa09884u; esp -= 4; W32(esp, v); }
/* 7856fb: push 0xac707c */
  { uint32_t v = 0xac707cu; esp -= 4; W32(esp, v); }
/* 785700: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x785706u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 785706: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 785709: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78570b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78570d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785712u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 785712: xor esi, esi */
  esi = 0;
/* 785714: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 785717: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 78571b: jmp 0x785720 */
  goto L_785720;
L_785720: /* 785720: cmp esi, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785726: jge 0x78574e */
  if ((sf == of)) goto L_78574e;
L_785728: /* 785728: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 78572e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785732: je 0x78574b */
  if (zf) goto L_78574b;
L_785734: /* 785734: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78573a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78573c: push 0xac7088 */
  { uint32_t v = 0xac7088u; esp -= 4; W32(esp, v); }
/* 785741: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785742: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785748u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785748: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78574b: /* 78574b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78574c: jmp 0x785720 */
  goto L_785720;
L_78574e: /* 78574e: xor esi, esi */
  esi = 0;
L_785750: /* 785750: cmp esi, dword ptr [edi + 0x2ec] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2ecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785756: jge 0x7857ae */
  if ((sf == of)) goto L_7857ae;
L_785758: /* 785758: mov eax, dword ptr [edi + 0x2e8] */
  eax = R32((uint32_t)(edi + 0x2e8u));
/* 78575e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785762: je 0x78577b */
  if (zf) goto L_78577b;
L_785764: /* 785764: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78576a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78576c: push 0xac7100 */
  { uint32_t v = 0xac7100u; esp -= 4; W32(esp, v); }
/* 785771: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785772: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785778u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785778: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78577b: /* 78577b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78577c: jmp 0x785750 */
  goto L_785750;
L_7857ae: /* 7857ae: xor eax, eax */
  eax = 0;
/* 7857b0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7857b3: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7857b7: lea ecx, [edi + 0x2e8] */
  ecx = (uint32_t)(edi + 0x2e8u);
/* 7857bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7857c0: /* 7857c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857c3: jge 0x7857c8 */
  if ((sf == of)) goto L_7857c8;
L_7857c5: /* 7857c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857c6: jmp 0x7857c0 */
  goto L_7857c0;
L_7857c8: /* 7857c8: xor ebx, ebx */
  ebx = 0;
/* 7857ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857cd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857d3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857d3: lea ecx, [edi + 0x2dc] */
  ecx = (uint32_t)(edi + 0x2dcu);
/* 7857d9: xor eax, eax */
  eax = 0;
/* 7857db: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e0: /* 7857e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857e3: jge 0x7857e8 */
  if ((sf == of)) goto L_7857e8;
L_7857e5: /* 7857e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857e6: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e8: /* 7857e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857f1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7857f4: mov dword ptr [edi + 0x2f4], ebx */
  W32((uint32_t)(edi + 0x2f4u), ebx);
/* 7857fa: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785801: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785804: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 785808: je 0x785821 */
  if (zf) goto L_785821;
L_78580a: /* 78580a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78580d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78580f: je 0x785821 */
  if (zf) goto L_785821;
L_785811: /* 785811: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 785817: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785819: je 0x785821 */
  if (zf) goto L_785821;
L_78581b: /* 78581b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78581d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78581e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x785821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_785821: /* 785821: push 0xac718c */
  { uint32_t v = 0xac718cu; esp -= 4; W32(esp, v); }
/* 785826: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785829: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78582eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78582e: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 785834: cmp dword ptr [edx + 0x1170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78583a: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 785840: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 785844: jg 0x78585a */
  if ((!zf && sf == of)) goto L_78585a;
L_785846: /* 785846: push 0x369 */
  { uint32_t v = 0x369u; esp -= 4; W32(esp, v); }
/* 78584b: push 0xac71b8 */
  { uint32_t v = 0xac71b8u; esp -= 4; W32(esp, v); }
/* 785850: push 0xac71c8 */
  { uint32_t v = 0xac71c8u; esp -= 4; W32(esp, v); }
/* 785855: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785857u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785857: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78585a: /* 78585a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 785860: add eax, 0x116c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 785865: xor ecx, ecx */
  ecx = 0;
L_785867: /* 785867: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78586a: jge 0x785934 */
  if ((sf == of)) goto L_785934;
L_785870: /* 785870: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 785872: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785875: jne 0x78592e */
  if (!zf) goto L_78592e;
L_78587b: /* 78587b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78587e: mov edi, ecx */
  edi = ecx;
/* 785880: jne 0x785896 */
  if (!zf) goto L_785896;
L_785882: /* 785882: push 0x36b */
  { uint32_t v = 0x36bu; esp -= 4; W32(esp, v); }
/* 785887: push 0xac71ec */
  { uint32_t v = 0xac71ecu; esp -= 4; W32(esp, v); }
/* 78588c: push 0xac71fc */
  { uint32_t v = 0xac71fcu; esp -= 4; W32(esp, v); }
/* 785891: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785896: /* 785896: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 78589c: add esi, 0x116c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7858a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7858a4: jge 0x7858ba */
  if ((sf == of)) goto L_7858ba;
L_7858a6: /* 7858a6: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7858ab: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858b0: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7858b5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858ba: /* 7858ba: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858bd: jle 0x7858d3 */
  if ((zf || sf != of)) goto L_7858d3;
L_7858bf: /* 7858bf: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7858c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858c9: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7858ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858d3: /* 7858d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7858d6: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7858d9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858db: jle 0x7858f5 */
  if ((zf || sf != of)) goto L_7858f5;
L_7858dd: /* 7858dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7858e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7858ec: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7858f2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7858f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858f5: /* 7858f5: mov eax, edi */
  eax = edi;
L_7858f7: /* 7858f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858f9: jge 0x78593c */
  if ((sf == of)) goto L_78593c;
L_7858fb: /* 7858fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7858fc: jmp 0x7858f7 */
  goto L_7858f7;
L_78592e: /* 78592e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78592f: jmp 0x785867 */
  goto L_785867;
L_785934: /* 785934: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 785937: jmp 0x785882 */
  goto L_785882;
L_78593c: /* 78593c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78593e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 785940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785941: mov ecx, esi */
  ecx = esi;
/* 785943: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x785949u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 785949: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78594c: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785953: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78595a: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 78595e: je 0x78596b */
  if (zf) goto L_78596b;
L_785960: /* 785960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785963: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x785968u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 785968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78596b: /* 78596b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78596e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78596f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 785970: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 785977: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 785978: mov esp, ebp */
  esp = ebp;
/* 78597a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78597b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78571d(void) {
  LOAD_REGS();
L_78571d: /* 78571d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_785720: /* 785720: cmp esi, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785726: jge 0x78574e */
  if ((sf == of)) goto L_78574e;
L_785728: /* 785728: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 78572e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785732: je 0x78574b */
  if (zf) goto L_78574b;
L_785734: /* 785734: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78573a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78573c: push 0xac7088 */
  { uint32_t v = 0xac7088u; esp -= 4; W32(esp, v); }
/* 785741: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785742: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785748u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785748: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78574b: /* 78574b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78574c: jmp 0x785720 */
  goto L_785720;
L_78574e: /* 78574e: xor esi, esi */
  esi = 0;
L_785750: /* 785750: cmp esi, dword ptr [edi + 0x2ec] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2ecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 785756: jge 0x7857ae */
  if ((sf == of)) goto L_7857ae;
L_785758: /* 785758: mov eax, dword ptr [edi + 0x2e8] */
  eax = R32((uint32_t)(edi + 0x2e8u));
/* 78575e: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785762: je 0x78577b */
  if (zf) goto L_78577b;
L_785764: /* 785764: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78576a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78576c: push 0xac7100 */
  { uint32_t v = 0xac7100u; esp -= 4; W32(esp, v); }
/* 785771: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785772: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x785778u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 785778: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78577b: /* 78577b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78577c: jmp 0x785750 */
  goto L_785750;
L_7857ae: /* 7857ae: xor eax, eax */
  eax = 0;
/* 7857b0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7857b3: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7857b7: lea ecx, [edi + 0x2e8] */
  ecx = (uint32_t)(edi + 0x2e8u);
/* 7857bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7857c0: /* 7857c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857c3: jge 0x7857c8 */
  if ((sf == of)) goto L_7857c8;
L_7857c5: /* 7857c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857c6: jmp 0x7857c0 */
  goto L_7857c0;
L_7857c8: /* 7857c8: xor ebx, ebx */
  ebx = 0;
/* 7857ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857cd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857d3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857d3: lea ecx, [edi + 0x2dc] */
  ecx = (uint32_t)(edi + 0x2dcu);
/* 7857d9: xor eax, eax */
  eax = 0;
/* 7857db: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e0: /* 7857e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857e3: jge 0x7857e8 */
  if ((sf == of)) goto L_7857e8;
L_7857e5: /* 7857e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857e6: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e8: /* 7857e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857f1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7857f4: mov dword ptr [edi + 0x2f4], ebx */
  W32((uint32_t)(edi + 0x2f4u), ebx);
/* 7857fa: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785801: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785804: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 785808: je 0x785821 */
  if (zf) goto L_785821;
L_78580a: /* 78580a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78580d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78580f: je 0x785821 */
  if (zf) goto L_785821;
L_785811: /* 785811: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 785817: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785819: je 0x785821 */
  if (zf) goto L_785821;
L_78581b: /* 78581b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78581d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78581e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x785821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_785821: /* 785821: push 0xac718c */
  { uint32_t v = 0xac718cu; esp -= 4; W32(esp, v); }
/* 785826: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785829: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78582eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78582e: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 785834: cmp dword ptr [edx + 0x1170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78583a: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 785840: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 785844: jg 0x78585a */
  if ((!zf && sf == of)) goto L_78585a;
L_785846: /* 785846: push 0x369 */
  { uint32_t v = 0x369u; esp -= 4; W32(esp, v); }
/* 78584b: push 0xac71b8 */
  { uint32_t v = 0xac71b8u; esp -= 4; W32(esp, v); }
/* 785850: push 0xac71c8 */
  { uint32_t v = 0xac71c8u; esp -= 4; W32(esp, v); }
/* 785855: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785857u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785857: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78585a: /* 78585a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 785860: add eax, 0x116c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 785865: xor ecx, ecx */
  ecx = 0;
L_785867: /* 785867: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78586a: jge 0x785934 */
  if ((sf == of)) goto L_785934;
L_785870: /* 785870: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 785872: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785875: jne 0x78592e */
  if (!zf) goto L_78592e;
L_78587b: /* 78587b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78587e: mov edi, ecx */
  edi = ecx;
/* 785880: jne 0x785896 */
  if (!zf) goto L_785896;
L_785882: /* 785882: push 0x36b */
  { uint32_t v = 0x36bu; esp -= 4; W32(esp, v); }
/* 785887: push 0xac71ec */
  { uint32_t v = 0xac71ecu; esp -= 4; W32(esp, v); }
/* 78588c: push 0xac71fc */
  { uint32_t v = 0xac71fcu; esp -= 4; W32(esp, v); }
/* 785891: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785896: /* 785896: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 78589c: add esi, 0x116c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7858a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7858a4: jge 0x7858ba */
  if ((sf == of)) goto L_7858ba;
L_7858a6: /* 7858a6: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7858ab: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858b0: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7858b5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858ba: /* 7858ba: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858bd: jle 0x7858d3 */
  if ((zf || sf != of)) goto L_7858d3;
L_7858bf: /* 7858bf: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7858c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858c9: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7858ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858d3: /* 7858d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7858d6: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7858d9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858db: jle 0x7858f5 */
  if ((zf || sf != of)) goto L_7858f5;
L_7858dd: /* 7858dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7858e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7858ec: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7858f2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7858f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858f5: /* 7858f5: mov eax, edi */
  eax = edi;
L_7858f7: /* 7858f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858f9: jge 0x78593c */
  if ((sf == of)) goto L_78593c;
L_7858fb: /* 7858fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7858fc: jmp 0x7858f7 */
  goto L_7858f7;
L_78592e: /* 78592e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78592f: jmp 0x785867 */
  goto L_785867;
L_785934: /* 785934: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 785937: jmp 0x785882 */
  goto L_785882;
L_78593c: /* 78593c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78593e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 785940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785941: mov ecx, esi */
  ecx = esi;
/* 785943: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x785949u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 785949: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78594c: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785953: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78595a: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 78595e: je 0x78596b */
  if (zf) goto L_78596b;
L_785960: /* 785960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785963: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x785968u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 785968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78596b: /* 78596b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78596e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78596f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 785970: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 785977: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 785978: mov esp, ebp */
  esp = ebp;
/* 78597a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78597b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78577e(void) {
  LOAD_REGS();
L_78577e: /* 78577e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 785781: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 785786: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 785789: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78578a: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 78578d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785792u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785792(); return;
}

void f_785792(void) {
  LOAD_REGS();
L_785792: /* 785792: push 0xa09868 */
  { uint32_t v = 0xa09868u; esp -= 4; W32(esp, v); }
/* 785797: push 0xac7174 */
  { uint32_t v = 0xac7174u; esp -= 4; W32(esp, v); }
/* 78579c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7857a2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7857a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7857a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7857a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7857a9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7857aeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7857ae: xor eax, eax */
  eax = 0;
/* 7857b0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7857b3: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7857b7: lea ecx, [edi + 0x2e8] */
  ecx = (uint32_t)(edi + 0x2e8u);
/* 7857bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7857c0: /* 7857c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857c3: jge 0x7857c8 */
  if ((sf == of)) goto L_7857c8;
L_7857c5: /* 7857c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857c6: jmp 0x7857c0 */
  goto L_7857c0;
L_7857c8: /* 7857c8: xor ebx, ebx */
  ebx = 0;
/* 7857ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857cd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857d3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857d3: lea ecx, [edi + 0x2dc] */
  ecx = (uint32_t)(edi + 0x2dcu);
/* 7857d9: xor eax, eax */
  eax = 0;
/* 7857db: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e0: /* 7857e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857e3: jge 0x7857e8 */
  if ((sf == of)) goto L_7857e8;
L_7857e5: /* 7857e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857e6: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e8: /* 7857e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857f1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7857f4: mov dword ptr [edi + 0x2f4], ebx */
  W32((uint32_t)(edi + 0x2f4u), ebx);
/* 7857fa: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785801: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785804: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 785808: je 0x785821 */
  if (zf) goto L_785821;
L_78580a: /* 78580a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78580d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78580f: je 0x785821 */
  if (zf) goto L_785821;
L_785811: /* 785811: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 785817: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785819: je 0x785821 */
  if (zf) goto L_785821;
L_78581b: /* 78581b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78581d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78581e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x785821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_785821: /* 785821: push 0xac718c */
  { uint32_t v = 0xac718cu; esp -= 4; W32(esp, v); }
/* 785826: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785829: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78582eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78582e: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 785834: cmp dword ptr [edx + 0x1170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78583a: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 785840: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 785844: jg 0x78585a */
  if ((!zf && sf == of)) goto L_78585a;
L_785846: /* 785846: push 0x369 */
  { uint32_t v = 0x369u; esp -= 4; W32(esp, v); }
/* 78584b: push 0xac71b8 */
  { uint32_t v = 0xac71b8u; esp -= 4; W32(esp, v); }
/* 785850: push 0xac71c8 */
  { uint32_t v = 0xac71c8u; esp -= 4; W32(esp, v); }
/* 785855: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785857u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785857: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78585a: /* 78585a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 785860: add eax, 0x116c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 785865: xor ecx, ecx */
  ecx = 0;
L_785867: /* 785867: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78586a: jge 0x785934 */
  if ((sf == of)) goto L_785934;
L_785870: /* 785870: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 785872: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785875: jne 0x78592e */
  if (!zf) goto L_78592e;
L_78587b: /* 78587b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78587e: mov edi, ecx */
  edi = ecx;
/* 785880: jne 0x785896 */
  if (!zf) goto L_785896;
L_785882: /* 785882: push 0x36b */
  { uint32_t v = 0x36bu; esp -= 4; W32(esp, v); }
/* 785887: push 0xac71ec */
  { uint32_t v = 0xac71ecu; esp -= 4; W32(esp, v); }
/* 78588c: push 0xac71fc */
  { uint32_t v = 0xac71fcu; esp -= 4; W32(esp, v); }
/* 785891: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785896: /* 785896: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 78589c: add esi, 0x116c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7858a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7858a4: jge 0x7858ba */
  if ((sf == of)) goto L_7858ba;
L_7858a6: /* 7858a6: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7858ab: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858b0: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7858b5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858ba: /* 7858ba: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858bd: jle 0x7858d3 */
  if ((zf || sf != of)) goto L_7858d3;
L_7858bf: /* 7858bf: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7858c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858c9: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7858ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858d3: /* 7858d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7858d6: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7858d9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858db: jle 0x7858f5 */
  if ((zf || sf != of)) goto L_7858f5;
L_7858dd: /* 7858dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7858e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7858ec: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7858f2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7858f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858f5: /* 7858f5: mov eax, edi */
  eax = edi;
L_7858f7: /* 7858f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858f9: jge 0x78593c */
  if ((sf == of)) goto L_78593c;
L_7858fb: /* 7858fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7858fc: jmp 0x7858f7 */
  goto L_7858f7;
L_78592e: /* 78592e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78592f: jmp 0x785867 */
  goto L_785867;
L_785934: /* 785934: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 785937: jmp 0x785882 */
  goto L_785882;
L_78593c: /* 78593c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78593e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 785940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785941: mov ecx, esi */
  ecx = esi;
/* 785943: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x785949u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 785949: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78594c: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785953: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78595a: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 78595e: je 0x78596b */
  if (zf) goto L_78596b;
L_785960: /* 785960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785963: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x785968u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 785968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78596b: /* 78596b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78596e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78596f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 785970: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 785977: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 785978: mov esp, ebp */
  esp = ebp;
/* 78597a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78597b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7857dd(void) {
  LOAD_REGS();
L_7857dd: /* 7857dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7857e0: /* 7857e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7857e3: jge 0x7857e8 */
  if ((sf == of)) goto L_7857e8;
L_7857e5: /* 7857e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7857e6: jmp 0x7857e0 */
  goto L_7857e0;
L_7857e8: /* 7857e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7857e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7857eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7857f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7857f1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7857f4: mov dword ptr [edi + 0x2f4], ebx */
  W32((uint32_t)(edi + 0x2f4u), ebx);
/* 7857fa: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785801: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785804: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 785808: je 0x785821 */
  if (zf) goto L_785821;
L_78580a: /* 78580a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78580d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78580f: je 0x785821 */
  if (zf) goto L_785821;
L_785811: /* 785811: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 785817: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785819: je 0x785821 */
  if (zf) goto L_785821;
L_78581b: /* 78581b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78581d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78581e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x785821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_785821: /* 785821: push 0xac718c */
  { uint32_t v = 0xac718cu; esp -= 4; W32(esp, v); }
/* 785826: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 785829: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78582eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78582e: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 785834: cmp dword ptr [edx + 0x1170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78583a: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 785840: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 785844: jg 0x78585a */
  if ((!zf && sf == of)) goto L_78585a;
L_785846: /* 785846: push 0x369 */
  { uint32_t v = 0x369u; esp -= 4; W32(esp, v); }
/* 78584b: push 0xac71b8 */
  { uint32_t v = 0xac71b8u; esp -= 4; W32(esp, v); }
/* 785850: push 0xac71c8 */
  { uint32_t v = 0xac71c8u; esp -= 4; W32(esp, v); }
/* 785855: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785857u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785857: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78585a: /* 78585a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 785860: add eax, 0x116c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 785865: xor ecx, ecx */
  ecx = 0;
L_785867: /* 785867: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78586a: jge 0x785934 */
  if ((sf == of)) goto L_785934;
L_785870: /* 785870: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 785872: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785875: jne 0x78592e */
  if (!zf) goto L_78592e;
L_78587b: /* 78587b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78587e: mov edi, ecx */
  edi = ecx;
/* 785880: jne 0x785896 */
  if (!zf) goto L_785896;
L_785882: /* 785882: push 0x36b */
  { uint32_t v = 0x36bu; esp -= 4; W32(esp, v); }
/* 785887: push 0xac71ec */
  { uint32_t v = 0xac71ecu; esp -= 4; W32(esp, v); }
/* 78588c: push 0xac71fc */
  { uint32_t v = 0xac71fcu; esp -= 4; W32(esp, v); }
/* 785891: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785896: /* 785896: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 78589c: add esi, 0x116c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7858a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7858a4: jge 0x7858ba */
  if ((sf == of)) goto L_7858ba;
L_7858a6: /* 7858a6: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7858ab: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858b0: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7858b5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858ba: /* 7858ba: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858bd: jle 0x7858d3 */
  if ((zf || sf != of)) goto L_7858d3;
L_7858bf: /* 7858bf: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7858c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858c9: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7858ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858d3: /* 7858d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7858d6: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7858d9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858db: jle 0x7858f5 */
  if ((zf || sf != of)) goto L_7858f5;
L_7858dd: /* 7858dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7858e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7858ec: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7858f2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7858f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858f5: /* 7858f5: mov eax, edi */
  eax = edi;
L_7858f7: /* 7858f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858f9: jge 0x78593c */
  if ((sf == of)) goto L_78593c;
L_7858fb: /* 7858fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7858fc: jmp 0x7858f7 */
  goto L_7858f7;
L_78592e: /* 78592e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78592f: jmp 0x785867 */
  goto L_785867;
L_785934: /* 785934: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 785937: jmp 0x785882 */
  goto L_785882;
L_78593c: /* 78593c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78593e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 785940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785941: mov ecx, esi */
  ecx = esi;
/* 785943: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x785949u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 785949: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78594c: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785953: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78595a: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 78595e: je 0x78596b */
  if (zf) goto L_78596b;
L_785960: /* 785960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785963: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x785968u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 785968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78596b: /* 78596b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78596e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78596f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 785970: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 785977: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 785978: mov esp, ebp */
  esp = ebp;
/* 78597a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78597b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7858fe(void) {
  LOAD_REGS();
L_7858fe: /* 7858fe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 785901: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 785906: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 785909: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78590a: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 78590d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785912u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785912(); return;
}

void f_785912(void) {
  LOAD_REGS();
  goto L_785912;
L_785867: /* 785867: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78586a: jge 0x785934 */
  if ((sf == of)) goto L_785934;
L_785870: /* 785870: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 785872: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785875: jne 0x78592e */
  if (!zf) goto L_78592e;
L_78587b: /* 78587b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78587e: mov edi, ecx */
  edi = ecx;
/* 785880: jne 0x785896 */
  if (!zf) goto L_785896;
L_785882: /* 785882: push 0x36b */
  { uint32_t v = 0x36bu; esp -= 4; W32(esp, v); }
/* 785887: push 0xac71ec */
  { uint32_t v = 0xac71ecu; esp -= 4; W32(esp, v); }
/* 78588c: push 0xac71fc */
  { uint32_t v = 0xac71fcu; esp -= 4; W32(esp, v); }
/* 785891: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x785893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 785893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_785896: /* 785896: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 78589c: add esi, 0x116c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7858a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7858a4: jge 0x7858ba */
  if ((sf == of)) goto L_7858ba;
L_7858a6: /* 7858a6: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7858ab: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858b0: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7858b5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858ba: /* 7858ba: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858bd: jle 0x7858d3 */
  if ((zf || sf != of)) goto L_7858d3;
L_7858bf: /* 7858bf: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7858c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858c9: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7858ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7858d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7858d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858d3: /* 7858d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7858d6: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7858d9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858db: jle 0x7858f5 */
  if ((zf || sf != of)) goto L_7858f5;
L_7858dd: /* 7858dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7858e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7858e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7858ec: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7858f2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7858f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7858f5: /* 7858f5: mov eax, edi */
  eax = edi;
L_7858f7: /* 7858f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7858f9: jge 0x78593c */
  if ((sf == of)) goto L_78593c;
L_7858fb: /* 7858fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7858fc: jmp 0x7858f7 */
  goto L_7858f7;
L_785912: /* 785912: push 0xa09850 */
  { uint32_t v = 0xa09850u; esp -= 4; W32(esp, v); }
/* 785917: push 0xac7184 */
  { uint32_t v = 0xac7184u; esp -= 4; W32(esp, v); }
/* 78591c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x785922u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 785922: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 785925: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785927: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785929: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78592eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78592e: /* 78592e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78592f: jmp 0x785867 */
  goto L_785867;
L_785934: /* 785934: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 785937: jmp 0x785882 */
  goto L_785882;
L_78593c: /* 78593c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78593e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 785940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785941: mov ecx, esi */
  ecx = esi;
/* 785943: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x785949u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 785949: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78594c: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785953: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78595a: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 78595e: je 0x78596b */
  if (zf) goto L_78596b;
L_785960: /* 785960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785963: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x785968u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 785968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78596b: /* 78596b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78596e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78596f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 785970: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 785977: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 785978: mov esp, ebp */
  esp = ebp;
/* 78597a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78597b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78597e(void) {
  LOAD_REGS();
L_78597e: /* 78597e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 785981: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 785986: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 785989: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78598a: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 78598d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785992u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785992(); return;
}

void f_785992(void) {
  LOAD_REGS();
L_785992: /* 785992: push 0xa09828 */
  { uint32_t v = 0xa09828u; esp -= 4; W32(esp, v); }
/* 785997: push 0xac7218 */
  { uint32_t v = 0xac7218u; esp -= 4; W32(esp, v); }
/* 78599c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7859a2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7859a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7859a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7859a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7859a9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7859aeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7859ae(); return;
}

void f_7859ae(void) {
  LOAD_REGS();
L_7859ae: /* 7859ae: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7859b1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7859b6: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7859b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7859ba: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7859bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7859c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7859c2(); return;
}

void f_7859c2(void) {
  LOAD_REGS();
L_7859c2: /* 7859c2: push 0xa097f4 */
  { uint32_t v = 0xa097f4u; esp -= 4; W32(esp, v); }
/* 7859c7: push 0xac7210 */
  { uint32_t v = 0xac7210u; esp -= 4; W32(esp, v); }
/* 7859cc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7859d2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7859d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7859d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7859d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7859d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7859deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7859de(); return;
}

void f_7859de(void) {
  LOAD_REGS();
L_7859de: /* 7859de: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7859e1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7859e6: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 7859e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7859ea: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7859ed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7859f2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7859f2(); return;
}

void f_7859f2(void) {
  LOAD_REGS();
L_7859f2: /* 7859f2: push 0xa097e4 */
  { uint32_t v = 0xa097e4u; esp -= 4; W32(esp, v); }
/* 7859f7: push 0xac717c */
  { uint32_t v = 0xac717cu; esp -= 4; W32(esp, v); }
/* 7859fc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x785a02u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 785a02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 785a05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785a07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785a09: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785a0eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785a0e(); return;
}

void f_785a0e(void) {
  LOAD_REGS();
L_785a0e: /* 785a0e: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 785a11: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 785a16: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 785a19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 785a1a: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 785a1d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785a22u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785a22(); return;
}

void f_785a22(void) {
  LOAD_REGS();
L_785a22: /* 785a22: push 0xa097d0 */
  { uint32_t v = 0xa097d0u; esp -= 4; W32(esp, v); }
/* 785a27: push 0xac6f54 */
  { uint32_t v = 0xac6f54u; esp -= 4; W32(esp, v); }
/* 785a2c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x785a32u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 785a32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 785a35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785a37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785a39: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785a3eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785a3e(); return;
}

void f_785a3e(void) {
  LOAD_REGS();
L_785a3e: /* 785a3e: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 785a41: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 785a46: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 785a49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785a4a: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 785a4d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785a52u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785a52(); return;
}

void f_785a52(void) {
  LOAD_REGS();
L_785a52: /* 785a52: push 0xa097bc */
  { uint32_t v = 0xa097bcu; esp -= 4; W32(esp, v); }
/* 785a57: push 0xac6f38 */
  { uint32_t v = 0xac6f38u; esp -= 4; W32(esp, v); }
/* 785a5c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x785a62u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 785a62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 785a65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785a67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785a69: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785a6eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785a6e(); return;
}

void f_785a6e(void) {
  LOAD_REGS();
L_785a6e: /* 785a6e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 785a71: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 785a76: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 785a79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 785a7a: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 785a7d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785a82u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785a82(); return;
}

void f_785a82(void) {
  LOAD_REGS();
L_785a82: /* 785a82: push 0xa097ac */
  { uint32_t v = 0xa097acu; esp -= 4; W32(esp, v); }
/* 785a87: push 0xac6e70 */
  { uint32_t v = 0xac6e70u; esp -= 4; W32(esp, v); }
/* 785a8c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x785a92u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 785a92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 785a95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785a97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785a99: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785a9eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785a9e(); return;
}

void f_785a9e(void) {
  LOAD_REGS();
L_785a9e: /* 785a9e: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 785aa1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 785aa6: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 785aa9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 785aaa: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 785aad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785ab2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_785ab2(); return;
}

void f_785ab2(void) {
  LOAD_REGS();
L_785ab2: /* 785ab2: push 0xa0977c */
  { uint32_t v = 0xa0977cu; esp -= 4; W32(esp, v); }
/* 785ab7: push 0xac7220 */
  { uint32_t v = 0xac7220u; esp -= 4; W32(esp, v); }
/* 785abc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x785ac2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 785ac2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 785ac5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785ac7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 785ac9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x785aceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_785ace: guest_badaddr(0x785ace); return;
}

void f_785d20(void) {
  LOAD_REGS();
L_785d20: /* 785d20: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 785d23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785d24: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 785d28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785d29: mov ecx, esi */
  ecx = esi;
/* 785d2b: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x785d31u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 785d31: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 785d34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 785d36: fadd dword ptr [esi + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xcu)));
/* 785d39: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 785d3d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 785d40: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 785d44: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 785d48: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 785d4b: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 785d4f: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 785d53: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x785d59u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 785d59: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 785d5d: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 785d61: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 785d63: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 785d65: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785d68: jne 0x785d73 */
  if (!zf) goto L_785d73;
L_785d6a: /* 785d6a: mov eax, 1 */
  eax = 0x1u;
/* 785d6f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 785d72: ret  */
  esp += 4; SPILL(); return;
L_785d73: /* 785d73: xor eax, eax */
  eax = 0;
/* 785d75: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 785d78: ret  */
  esp += 4; SPILL(); return;
}

void f_785da0(void) {
  LOAD_REGS();
L_785da0: /* 785da0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 785da2: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 785da4: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 785da6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 785da9: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 785dac: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 785daf: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 785db2: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 785db5: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 785db8: ret  */
  esp += 4; SPILL(); return;
}

void f_785dd0(void) {
  LOAD_REGS();
L_785dd0: /* 785dd0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 785dd2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 785dd4: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 785dd6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 785dd9: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 785ddc: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 785ddf: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 785de2: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 785de5: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 785de8: ret  */
  esp += 4; SPILL(); return;
}

void f_785e00(void) {
  LOAD_REGS();
L_785e00: /* 785e00: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 785e03: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 785e06: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 785e09: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 785e0c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 785e0e: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 785e10: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 785e13: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 785e15: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 785e18: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 785e1a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 785e1c: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 785e1f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 785e21: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 785e24: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 785e26: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 785e29: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 785e2b: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 785e2e: ret  */
  esp += 4; SPILL(); return;
}

void f_785e40(void) {
  LOAD_REGS();
L_785e40: /* 785e40: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 785e43: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 785e45: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 785e48: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 785e4a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 785e4c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 785e4e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 785e50: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 785e52: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 785e54: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 785e56: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 785e58: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 785e5a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 785e5c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 785e5e: ret  */
  esp += 4; SPILL(); return;
}

void f_785e70(void) {
  LOAD_REGS();
L_785e70: /* 785e70: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 785e74: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 785e76: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 785e78: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 785e7c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 785e7f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 785e82: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 785e86: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 785e89: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 785e8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_785ea0(void) {
  LOAD_REGS();
L_785ea0: /* 785ea0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 785ea4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 785ea6: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 785ea8: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 785eaa: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 785eae: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 785eb1: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 785eb4: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 785eb7: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 785ebb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 785ebe: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 785ec1: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 785ec4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_785ee0(void) {
  LOAD_REGS();
L_785ee0: /* 785ee0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 785ee2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 785ee5: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 785ee8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 785eea: fmulp st(3) */
  STI(3) = STI(3) * ST0;
  FPOP();
/* 785eec: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 785eee: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 785ef0: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 785ef2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 785ef4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 785ef6: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 785ef8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 785efa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 785efc: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 785f02: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 785f04: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785f07: jne 0x785f28 */
  if (!zf) goto L_785f28;
L_785f09: /* 785f09: fsqrt  */
  ST0 = sqrt(ST0);
/* 785f0b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 785f11: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 785f13: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 785f15: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 785f17: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 785f19: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 785f1b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 785f1e: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 785f21: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 785f24: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 785f27: ret  */
  esp += 4; SPILL(); return;
L_785f28: /* 785f28: xor eax, eax */
  eax = 0;
/* 785f2a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 785f2c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 785f32: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 785f38: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 785f3b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 785f3e: ret  */
  esp += 4; SPILL(); return;
}

void f_785f60(void) {
  LOAD_REGS();
L_785f60: /* 785f60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 785f61: mov ebp, esp */
  ebp = esp;
/* 785f63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 785f65: push 0x9cca60 */
  { uint32_t v = 0x9cca60u; esp -= 4; W32(esp, v); }
/* 785f6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 785f70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 785f71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 785f78: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 785f7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 785f7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 785f7d: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 785f80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 785f81: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 785f84: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 785f87: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 785f8e: mov edi, edi */
  edi = edi;
L_785f90: /* 785f90: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 785f93: mov eax, dword ptr [edx + 0x58] */
  eax = R32((uint32_t)(edx + 0x58u));
/* 785f96: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 785f99: mov ebx, edi */
  ebx = edi;
/* 785f9b: imul ebx, ebx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x78u);
  ebx = (uint32_t)r;
  }
/* 785f9e: fld dword ptr [ebx + eax + 8] */
  { double v = F32((uint32_t)(ebx + eax + 0x8u)); FPUSH(v); }
/* 785fa2: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 785fa5: fld dword ptr [ebx + eax + 4] */
  { double v = F32((uint32_t)(ebx + eax + 0x4u)); FPUSH(v); }
/* 785fa9: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 785fac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 785fae: fld dword ptr [ebx + eax] */
  { double v = F32((uint32_t)(ebx + eax)); FPUSH(v); }
/* 785fb1: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 785fb3: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 785fb5: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 785fb8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 785fba: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 785fbd: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 785fc0: fchs  */
  ST0 = -ST0;
/* 785fc2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 785fc4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 785fc6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 785fc8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 785fcb: jp 0x785fd7 */
  if (pf) goto L_785fd7;
L_785fcd: /* 785fcd: mov edi, dword ptr [ebx + 0x20] */
  edi = R32((uint32_t)(ebx + 0x20u));
/* 785fd0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 785fd2: jmp 0x7862b8 */
  goto L_7862b8;
L_785fd7: /* 785fd7: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* 785fda: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 785fdc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 785fdf: je 0x7862b5 */
  if (zf) goto L_7862b5;
L_785fe5: /* 785fe5: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 785fe8: je 0x7862a4 */
  if (zf) goto L_7862a4;
L_785fee: /* 785fee: mov ebx, dword ptr [edx + 0x58] */
  ebx = R32((uint32_t)(edx + 0x58u));
/* 785ff1: imul edi, edi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x78u);
  edi = (uint32_t)r;
  }
/* 785ff4: mov eax, dword ptr [edx + 0x98] */
  eax = R32((uint32_t)(edx + 0x98u));
/* 785ffa: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 785ffc: mov ebx, dword ptr [edi + 0x1c] */
  ebx = R32((uint32_t)(edi + 0x1cu));
/* 785fff: shl ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 786002: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 786004: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 786007: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78600a: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 78600d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78600e: lea edx, [ebp - 0x64] */
  edx = (uint32_t)(ebp + 0xffffff9cu);
/* 786011: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786012: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 786015: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 786018: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x78601eu); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 78601e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 786020: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 786023: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 786026: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 786029: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78602c: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 78602f: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 786032: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x786038u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 786038: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 78603b: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 78603e: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 786041: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 786044: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 786046: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 786048: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 78604b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 78604d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78604f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786051: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 786054: jp 0x786293 */
  if (pf) goto L_786293;
L_78605a: /* 78605a: mov al, byte ptr [edi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 78605d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 78605f: jbe 0x786293 */
  if ((cf | zf)) goto L_786293;
L_786065: /* 786065: test byte ptr [ebx + 4], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x4u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786069: jne 0x786293 */
  if (!zf) goto L_786293;
L_78606f: /* 78606f: xor ebx, ebx */
  ebx = 0;
L_786071: /* 786071: movzx edx, byte ptr [edi + 0x56] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x56u)));
/* 786075: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786077: jge 0x7860dc */
  if ((sf == of)) goto L_7860dc;
L_786079: /* 786079: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78607c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78607f: lea edx, [ebx + eax] */
  edx = (uint32_t)(ebx + eax);
/* 786082: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 786085: mov eax, dword ptr [eax + edx*8] */
  eax = R32((uint32_t)(eax + edx*8));
/* 786088: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 78608b: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 786091: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 786094: mov edx, dword ptr [esi + 0xf004] */
  edx = R32((uint32_t)(esi + 0xf004u));
/* 78609a: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* 78609d: cmp eax, 0xc00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7860a2: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 7860a5: jge 0x7862c1 */
  if ((sf == of)) goto L_7862c1;
L_7860ab: /* 7860ab: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7860ad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7860b0: mov edx, esp */
  edx = esp;
/* 7860b2: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7860b4: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7860b7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7860ba: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7860bd: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7860c0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7860c3: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7860c6: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7860c9: lea eax, [esi + edx*4 + 0x6004] */
  eax = (uint32_t)(esi + edx*4 + 0x6004u);
/* 7860d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7860d1: call 0x6c882d */
  esp -= 4; W32(esp, 0x7860d6u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7860d6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7860d9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7860da: jmp 0x786071 */
  goto L_786071;
L_7860dc: /* 7860dc: mov eax, dword ptr [esi + 0x15008] */
  eax = R32((uint32_t)(esi + 0x15008u));
/* 7860e2: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7860e7: jge 0x7862c1 */
  if ((sf == of)) goto L_7862c1;
L_7860ed: /* 7860ed: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7860ef: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7860f2: mov dword ptr [esi + ecx*4 + 0xf008], edx */
  W32((uint32_t)(esi + ecx*4 + 0xf008u), edx);
/* 7860f9: mov eax, dword ptr [esi + 0x15008] */
  eax = R32((uint32_t)(esi + 0x15008u));
/* 7860ff: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 786102: add eax, 0x1401 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1401u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786107: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78610a: mov dword ptr [esi + eax*4], ecx */
  W32((uint32_t)(esi + eax*4), ecx);
/* 78610d: mov eax, dword ptr [esi + 0x15008] */
  eax = R32((uint32_t)(esi + 0x15008u));
/* 786113: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 786116: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 786119: mov dword ptr [esi + edx*4 + 0xf010], eax */
  W32((uint32_t)(esi + edx*4 + 0xf010u), eax);
/* 786120: xor ebx, ebx */
  ebx = 0;
L_786122: /* 786122: movzx ecx, byte ptr [edi + 0x56] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x56u)));
/* 786126: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 786129: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78612b: jge 0x786274 */
  if ((sf == of)) goto L_786274;
L_786131: /* 786131: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 786137: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78613c: jge 0x7862c1 */
  if ((sf == of)) goto L_7862c1;
L_786142: /* 786142: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 786145: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 78614b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78614e: lea ecx, [esi + edx*8] */
  ecx = (uint32_t)(esi + edx*8);
/* 786151: lea edx, [esi + eax*4 + 0x6004] */
  edx = (uint32_t)(esi + eax*4 + 0x6004u);
/* 786158: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78615a: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 786160: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 786162: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786164: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 786167: lea edx, [esi + eax*4 + 0x6010] */
  edx = (uint32_t)(esi + eax*4 + 0x6010u);
/* 78616e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 786171: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 786177: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786179: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78617c: lea edx, [esi + eax*4 + 0x601c] */
  edx = (uint32_t)(esi + eax*4 + 0x601cu);
/* 786183: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 786186: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 786189: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 78618b: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 78618d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 786190: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 786193: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 786196: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 786199: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78619c: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 78619f: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 7861a1: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7861a3: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7861a6: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 7861a9: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7861ac: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7861af: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 7861b2: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7861b5: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7861b8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7861ba: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7861bd: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7861bf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7861c1: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7861c4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7861c6: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 7861c9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7861cb: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7861ce: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7861d0: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7861d3: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7861d6: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7861d9: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 7861dc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7861de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7861e0: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7861e3: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7861e6: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 7861e9: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7861ec: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 7861ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7861f1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7861f3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7861f5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7861f7: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7861fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7861ff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786201: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 786204: jnp 0x78626b */
  if (!pf) goto L_78626b;
L_786206: /* 786206: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786208: mov eax, dword ptr [esi + 0x15008] */
  eax = R32((uint32_t)(esi + 0x15008u));
/* 78620e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 786211: lea eax, [esi + edx*4 + 0xf008] */
  eax = (uint32_t)(esi + edx*4 + 0xf008u);
/* 786218: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 78621b: mov dword ptr [ecx + 0x14], 9 */
  W32((uint32_t)(ecx + 0x14u), 0x9u);
/* 786222: jne 0x78622b */
  if (!zf) goto L_78622b;
L_786224: /* 786224: mov dword ptr [ecx + 0x14], 0xd */
  W32((uint32_t)(ecx + 0x14u), 0xdu);
L_78622b: /* 78622b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 78622e: movzx eax, byte ptr [edx + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x56u)));
/* 786232: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 786235: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 786237: jne 0x78623d */
  if (!zf) goto L_78623d;
L_786239: /* 786239: or dword ptr [ecx + 0x14], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x14u), r);
  }
L_78623d: /* 78623d: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 786243: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 786246: lea eax, [esi + edx*4 + 0x12008] */
  eax = (uint32_t)(esi + edx*4 + 0x12008u);
/* 78624d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 786250: mov dword ptr [eax], 0x3f800000 */
  W32((uint32_t)(eax), 0x3f800000u);
/* 786256: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 78625d: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 78625f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786262: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 786265: inc dword ptr [esi + 0x6000] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x6000u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x6000u), r);
  }
L_78626b: /* 78626b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78626e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78626f: jmp 0x786122 */
  goto L_786122;
L_786274: /* 786274: movzx eax, byte ptr [edi + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x56u)));
/* 786278: mov ecx, dword ptr [esi + 0xf004] */
  ecx = R32((uint32_t)(esi + 0xf004u));
/* 78627e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786280: mov eax, dword ptr [esi + 0x15008] */
  eax = R32((uint32_t)(esi + 0x15008u));
/* 786286: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 786287: mov dword ptr [esi + 0xf004], ecx */
  W32((uint32_t)(esi + 0xf004u), ecx);
/* 78628d: mov dword ptr [esi + 0x15008], eax */
  W32((uint32_t)(esi + 0x15008u), eax);
L_786293: /* 786293: mov edi, dword ptr [edi + 0x28] */
  edi = R32((uint32_t)(edi + 0x28u));
/* 786296: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 786299: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78629c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 78629f: jmp 0x785fe5 */
  goto L_785fe5;
L_7862a4: /* 7862a4: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 7862a7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7862aa: je 0x7862b5 */
  if (zf) goto L_7862b5;
L_7862ac: /* 7862ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7862ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7862ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7862af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7862b0: call 0x785f60 */
  esp -= 4; W32(esp, 0x7862b5u); SPILL(); f_785f60(); if (g_unwind) return; RELOAD();
L_7862b5: /* 7862b5: mov edi, dword ptr [ebx + 0x24] */
  edi = R32((uint32_t)(ebx + 0x24u));
L_7862b8: /* 7862b8: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7862bb: jne 0x785f90 */
  if (!zf) goto L_785f90;
L_7862c1: /* 7862c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7862c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7862c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7862c6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7862cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7862ce: mov esp, ebp */
  esp = ebp;
/* 7862d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7862d1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7862d4(void) {
  LOAD_REGS();
L_7862d4: /* 7862d4: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7862d7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7862dc: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7862df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7862e0: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7862e3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7862e8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7862e8(); return;
}

void f_7862e8(void) {
  LOAD_REGS();
L_7862e8: /* 7862e8: push 0xa098d8 */
  { uint32_t v = 0xa098d8u; esp -= 4; W32(esp, v); }
/* 7862ed: push 0xac7d00 */
  { uint32_t v = 0xac7d00u; esp -= 4; W32(esp, v); }
/* 7862f2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7862f8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7862f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7862fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7862fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7862ff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x786304u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_786304: guest_badaddr(0x786304); return;
}

void f_786400(void) {
  LOAD_REGS();
L_786400: /* 786400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 786401: mov ebp, esp */
  ebp = esp;
/* 786403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 786405: push 0x9cca70 */
  { uint32_t v = 0x9cca70u; esp -= 4; W32(esp, v); }
/* 78640a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 786410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 786418: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78641b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78641c: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78641f: xor eax, eax */
  eax = 0;
/* 786421: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 786422: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 786425: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 786428: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 78642b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 78642e: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786435: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 786436: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 786439: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78643c: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 786443: je 0x7864e7 */
  if (zf) goto L_7864e7;
L_786449: /* 786449: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 78644b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 78644d: mov edx, ecx */
  edx = ecx;
/* 78644f: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 786451: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786454: je 0x78646d */
  if (zf) goto L_78646d;
L_786456: /* 786456: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786458: jle 0x78645f */
  if ((zf || sf != of)) goto L_78645f;
L_78645a: /* 78645a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 78645b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 78645d: jmp 0x78646d */
  goto L_78646d;
L_78645f: /* 78645f: mov eax, dword ptr [esi + 0x128c] */
  eax = R32((uint32_t)(esi + 0x128cu));
/* 786465: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 786466: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786468: jge 0x78646d */
  if ((sf == of)) goto L_78646d;
L_78646a: /* 78646a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78646b: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
L_78646d: /* 78646d: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 786470: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786473: mov edx, ecx */
  edx = ecx;
/* 786475: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 786477: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78647a: je 0x786495 */
  if (zf) goto L_786495;
L_78647c: /* 78647c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78647e: jle 0x786486 */
  if ((zf || sf != of)) goto L_786486;
L_786480: /* 786480: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 786481: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 786484: jmp 0x786495 */
  goto L_786495;
L_786486: /* 786486: mov eax, dword ptr [esi + 0x1290] */
  eax = R32((uint32_t)(esi + 0x1290u));
/* 78648c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 78648d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78648f: jge 0x786495 */
  if ((sf == of)) goto L_786495;
L_786491: /* 786491: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786492: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
L_786495: /* 786495: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 786497: sub ecx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 786499: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78649c: je 0x7864b3 */
  if (zf) goto L_7864b3;
L_78649e: /* 78649e: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7864a0: push 0xac7c58 */
  { uint32_t v = 0xac7c58u; esp -= 4; W32(esp, v); }
/* 7864a5: push 0xac7c68 */
  { uint32_t v = 0xac7c68u; esp -= 4; W32(esp, v); }
/* 7864aa: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7864b0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7864b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7864b3: /* 7864b3: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 7864b6: sub edx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7864b9: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7864bc: je 0x7864d3 */
  if (zf) goto L_7864d3;
L_7864be: /* 7864be: push 0x41 */
  { uint32_t v = 0x41u; esp -= 4; W32(esp, v); }
/* 7864c0: push 0xac7c88 */
  { uint32_t v = 0xac7c88u; esp -= 4; W32(esp, v); }
/* 7864c5: push 0xac7c98 */
  { uint32_t v = 0xac7c98u; esp -= 4; W32(esp, v); }
/* 7864ca: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7864d0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7864d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7864d3: /* 7864d3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7864d5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7864d7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7864d9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7864da: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7864dc: mov dword ptr [ebp - 0x1c], 2 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x2u);
/* 7864e3: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7864e5: jmp 0x7864f1 */
  goto L_7864f1;
L_7864e7: /* 7864e7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7864ea: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7864ed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7864ef: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_7864f1: /* 7864f1: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7864f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7864f5: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7864f8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
L_7864fb: /* 7864fb: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7864fe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 786501: jg 0x786595 */
  if ((!zf && sf == of)) goto L_786595;
L_786507: /* 786507: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 786509: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_786510: /* 786510: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786512: jg 0x786588 */
  if ((!zf && sf == of)) goto L_786588;
L_786514: /* 786514: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 786517: mov edx, dword ptr [ebx + 0xf004] */
  edx = R32((uint32_t)(ebx + 0xf004u));
/* 78651d: add edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 786520: cmp edx, 0xc00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786526: jge 0x786909 */
  if ((sf == of)) goto L_786909;
L_78652c: /* 78652c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78652d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78652e: mov ecx, esi */
  ecx = esi;
/* 786530: call 0x6cb82f */
  esp -= 4; W32(esp, 0x786535u); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 786535: mov ecx, dword ptr [esi + 0x1280] */
  ecx = R32((uint32_t)(esi + 0x1280u));
/* 78653b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78653e: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 786541: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 786543: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 786546: mov eax, esp */
  eax = esp;
/* 786548: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78654a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78654d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 786550: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 786553: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 786556: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786559: mov eax, dword ptr [ebx + 0xf004] */
  eax = R32((uint32_t)(ebx + 0xf004u));
/* 78655f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786561: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 786564: lea ecx, [ebx + eax*4 + 0x6004] */
  ecx = (uint32_t)(ebx + eax*4 + 0x6004u);
/* 78656b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78656c: call 0x6c882d */
  esp -= 4; W32(esp, 0x786571u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 786571: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 786574: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 786577: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78657a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78657d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78657e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 786580: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 786583: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 786586: jmp 0x786510 */
  goto L_786510;
L_786588: /* 786588: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78658b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78658e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786590: jmp 0x7864fb */
  goto L_7864fb;
L_786595: /* 786595: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786598: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_78659f: /* 78659f: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865a2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7865a5: jge 0x7868bb */
  if ((sf == of)) goto L_7868bb;
L_7865ab: /* 7865ab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7865ad: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_7865b4: /* 7865b4: cmp edx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865b6: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7865b9: jge 0x7868ad */
  if ((sf == of)) goto L_7868ad;
L_7865bf: /* 7865bf: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7865c6: jne 0x7865f1 */
  if (!zf) goto L_7865f1;
L_7865c8: /* 7865c8: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 7865ce: mov edi, dword ptr [esi + 0x131c] */
  edi = R32((uint32_t)(esi + 0x131cu));
/* 7865d4: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 7865d7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7865d9: mov eax, ecx */
  eax = ecx;
/* 7865db: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7865de: mov ebx, 1 */
  ebx = 0x1u;
/* 7865e3: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 7865e5: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7865e8: test dword ptr [edi + eax*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7865eb: je 0x786893 */
  if (zf) goto L_786893;
L_7865f1: /* 7865f1: mov eax, dword ptr [esi + 0x1338] */
  eax = R32((uint32_t)(esi + 0x1338u));
/* 7865f7: xor ebx, ebx */
  ebx = 0;
/* 7865f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865fb: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 786602: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 786609: jle 0x786625 */
  if ((zf || sf != of)) goto L_786625;
L_78660b: /* 78660b: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786611: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786615: mov eax, dword ptr [esi + 0x1334] */
  eax = R32((uint32_t)(esi + 0x1334u));
/* 78661b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78661d: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 786620: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 786623: jmp 0x786630 */
  goto L_786630;
L_786625: /* 786625: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 786628: jmp 0x786630 */
  goto L_786630;
L_786630: /* 786630: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786633: jge 0x786893 */
  if ((sf == of)) goto L_786893;
L_786639: /* 786639: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 78663c: mov eax, dword ptr [edi + 0x6000] */
  eax = R32((uint32_t)(edi + 0x6000u));
/* 786642: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 786645: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786647: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78664c: jge 0x786909 */
  if ((sf == of)) goto L_786909;
L_786652: /* 786652: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 786655: lea edi, [edi + eax*8] */
  edi = (uint32_t)(edi + eax*8);
/* 786658: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78665f: je 0x78666a */
  if (zf) goto L_78666a;
L_786661: /* 786661: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 786668: jmp 0x78669c */
  goto L_78669c;
L_78666a: /* 78666a: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786670: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786674: mov eax, dword ptr [esi + 0x1328] */
  eax = R32((uint32_t)(esi + 0x1328u));
/* 78667a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78667c: mov edx, ecx */
  edx = ecx;
/* 78667e: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 786681: mov esi, 1 */
  esi = 0x1u;
/* 786686: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 786688: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 78668b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 78668e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 786690: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 786693: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 786695: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 786697: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 786699: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_78669c: /* 78669c: xor ecx, ecx */
  ecx = 0;
L_78669e: /* 78669e: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7866a1: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7866a4: jge 0x78677d */
  if ((sf == of)) goto L_78677d;
L_7866aa: /* 7866aa: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7866b1: je 0x7866bc */
  if (zf) goto L_7866bc;
L_7866b3: /* 7866b3: mov eax, dword ptr [ecx*4 + 0xac7e7c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e7cu));
/* 7866ba: jmp 0x7866c3 */
  goto L_7866c3;
L_7866bc: /* 7866bc: mov eax, dword ptr [ecx*4 + 0xac7e6c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e6cu));
L_7866c3: /* 7866c3: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7866c6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7866c8: lea edx, [eax + ebx*2] */
  edx = (uint32_t)(eax + ebx*2);
/* 7866cb: mov eax, ebx */
  eax = ebx;
/* 7866cd: je 0x7866e7 */
  if (zf) goto L_7866e7;
L_7866cf: /* 7866cf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866d1: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866d4: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866d7: mov esi, dword ptr [eax + 0xac7e34] */
  esi = R32((uint32_t)(eax + 0xac7e34u));
/* 7866dd: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866df: mov edx, dword ptr [eax + 0xac7e30] */
  edx = R32((uint32_t)(eax + 0xac7e30u));
/* 7866e5: jmp 0x7866fd */
  goto L_7866fd;
L_7866e7: /* 7866e7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866e9: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866ec: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866ef: mov esi, dword ptr [eax + 0xac7df8] */
  esi = R32((uint32_t)(eax + 0xac7df8u));
/* 7866f5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866f7: mov edx, dword ptr [eax + 0xac7df4] */
  edx = R32((uint32_t)(eax + 0xac7df4u));
L_7866fd: /* 7866fd: imul esi, dword ptr [ebp - 0x2c] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  esi = (uint32_t)r;
  }
/* 786701: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786704: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786706: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786708: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78670a: jl 0x786711 */
  if ((sf != of)) goto L_786711;
L_78670c: /* 78670c: cmp esi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78670f: jl 0x78672c */
  if ((sf != of)) goto L_78672c;
L_786711: /* 786711: push 0x89 */
  { uint32_t v = 0x89u; esp -= 4; W32(esp, v); }
/* 786716: push 0xac7cb8 */
  { uint32_t v = 0xac7cb8u; esp -= 4; W32(esp, v); }
/* 78671b: push 0xac7cc8 */
  { uint32_t v = 0xac7cc8u; esp -= 4; W32(esp, v); }
/* 786720: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x786726u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 786726: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 786729: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78672c: /* 78672c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 78672f: mov eax, dword ptr [edx + 0xf004] */
  eax = R32((uint32_t)(edx + 0xf004u));
/* 786735: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786737: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78673a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78673d: lea edx, [edx + eax*4 + 0x6004] */
  edx = (uint32_t)(edx + eax*4 + 0x6004u);
/* 786744: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 786747: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786748: jmp 0x78669e */
  goto L_78669e;
L_78677d: /* 78677d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786780: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 786782: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786784: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 786786: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786789: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78678c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 78678f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 786792: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 786795: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 786798: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78679a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78679c: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 78679f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7867a2: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7867a5: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7867a8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7867ab: mov ecx, dword ptr [edx + 0x15008] */
  ecx = R32((uint32_t)(edx + 0x15008u));
/* 7867b1: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7867b4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7867b7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7867b9: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7867bf: jge 0x786901 */
  if ((sf == of)) goto L_786901;
L_7867c5: /* 7867c5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7867c7: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7867ca: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867cc: lea edx, [edx + eax*4 + 0xf008] */
  edx = (uint32_t)(edx + eax*4 + 0xf008u);
/* 7867d3: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867d6: xor eax, eax */
  eax = 0;
/* 7867d8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867dc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 7867de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e0: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867e3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867e7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867e9: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 7867ec: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867ef: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7867f1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867f3: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867f8: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 7867fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7867fd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_786803: /* 786803: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786806: jge 0x786816 */
  if ((sf == of)) goto L_786816;
L_786808: /* 786808: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 78680b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78680c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78680e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 786810: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 786812: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786814: jmp 0x786803 */
  goto L_786803;
L_786816: /* 786816: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 78681c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78681e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786821: jne 0x786841 */
  if (!zf) goto L_786841;
L_786823: /* 786823: fsqrt  */
  ST0 = sqrt(ST0);
/* 786825: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 78682b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78682d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78682f: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 786831: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 786833: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 786836: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 786839: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78683c: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 78683f: jmp 0x786851 */
  goto L_786851;
L_786841: /* 786841: xor eax, eax */
  eax = 0;
/* 786843: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786845: mov dword ptr [edx], 0x3f800000 */
  W32((uint32_t)(edx), 0x3f800000u);
/* 78684b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78684e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_786851: /* 786851: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786854: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 786857: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 78685a: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78685d: lea ecx, [eax + 0xf008] */
  ecx = (uint32_t)(eax + 0xf008u);
/* 786863: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 786866: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 786869: add eax, 0x12008 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12008u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78686e: mov dword ptr [edi + 0x14], 1 */
  W32((uint32_t)(edi + 0x14u), 0x1u);
/* 786875: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 786878: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78687b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78687d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 786880: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786881: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786884: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 786887: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 78688a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 78688d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78688e: jmp 0x786630 */
  goto L_786630;
L_786893: /* 786893: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 786896: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786899: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78689c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78689f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7868a2: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7868a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7868a8: jmp 0x7865b4 */
  goto L_7865b4;
L_7868ad: /* 7868ad: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7868b0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7868b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7868b3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7868b6: jmp 0x78659f */
  goto L_78659f;
L_7868bb: /* 7868bb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7868be: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7868c1: mov edi, dword ptr [eax + 0x6000] */
  edi = R32((uint32_t)(eax + 0x6000u));
/* 7868c7: mov esi, dword ptr [eax + 0x15008] */
  esi = R32((uint32_t)(eax + 0x15008u));
/* 7868cd: mov edx, dword ptr [eax + 0xf004] */
  edx = R32((uint32_t)(eax + 0xf004u));
/* 7868d3: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7868d5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7868d7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7868da: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868dc: mov dword ptr [eax + 0x6000], edi */
  W32((uint32_t)(eax + 0x6000u), edi);
/* 7868e2: mov dword ptr [eax + 0x15008], esi */
  W32((uint32_t)(eax + 0x15008u), esi);
/* 7868e8: mov dword ptr [eax + 0xf004], edx */
  W32((uint32_t)(eax + 0xf004u), edx);
/* 7868ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7868f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7868f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7868f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7868fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7868fb: mov esp, ebp */
  esp = ebp;
/* 7868fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7868fe: ret 0x10 */
  esp += 20; SPILL(); return;
L_786901: /* 786901: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786903: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786905: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786907: fstp st(0) */
  STI(0) = ST0; FPOP();
L_786909: /* 786909: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78690c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78690d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78690e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 786915: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 786916: mov esp, ebp */
  esp = ebp;
/* 786918: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 786919: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_786564(void) {
  LOAD_REGS();
  goto L_786564;
L_7864fb: /* 7864fb: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7864fe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 786501: jg 0x786595 */
  if ((!zf && sf == of)) goto L_786595;
L_786507: /* 786507: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 786509: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_786510: /* 786510: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786512: jg 0x786588 */
  if ((!zf && sf == of)) goto L_786588;
L_786514: /* 786514: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 786517: mov edx, dword ptr [ebx + 0xf004] */
  edx = R32((uint32_t)(ebx + 0xf004u));
/* 78651d: add edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 786520: cmp edx, 0xc00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786526: jge 0x786909 */
  if ((sf == of)) goto L_786909;
L_78652c: /* 78652c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78652d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78652e: mov ecx, esi */
  ecx = esi;
/* 786530: call 0x6cb82f */
  esp -= 4; W32(esp, 0x786535u); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 786535: mov ecx, dword ptr [esi + 0x1280] */
  ecx = R32((uint32_t)(esi + 0x1280u));
/* 78653b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78653e: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 786541: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 786543: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 786546: mov eax, esp */
  eax = esp;
/* 786548: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78654a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78654d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 786550: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 786553: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 786556: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786559: mov eax, dword ptr [ebx + 0xf004] */
  eax = R32((uint32_t)(ebx + 0xf004u));
/* 78655f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786561: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
L_786564: /* 786564: lea ecx, [ebx + eax*4 + 0x6004] */
  ecx = (uint32_t)(ebx + eax*4 + 0x6004u);
/* 78656b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78656c: call 0x6c882d */
  esp -= 4; W32(esp, 0x786571u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 786571: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 786574: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 786577: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78657a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78657d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78657e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 786580: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 786583: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 786586: jmp 0x786510 */
  goto L_786510;
L_786588: /* 786588: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78658b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78658e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786590: jmp 0x7864fb */
  goto L_7864fb;
L_786595: /* 786595: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786598: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_78659f: /* 78659f: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865a2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7865a5: jge 0x7868bb */
  if ((sf == of)) goto L_7868bb;
L_7865ab: /* 7865ab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7865ad: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_7865b4: /* 7865b4: cmp edx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865b6: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7865b9: jge 0x7868ad */
  if ((sf == of)) goto L_7868ad;
L_7865bf: /* 7865bf: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7865c6: jne 0x7865f1 */
  if (!zf) goto L_7865f1;
L_7865c8: /* 7865c8: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 7865ce: mov edi, dword ptr [esi + 0x131c] */
  edi = R32((uint32_t)(esi + 0x131cu));
/* 7865d4: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 7865d7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7865d9: mov eax, ecx */
  eax = ecx;
/* 7865db: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7865de: mov ebx, 1 */
  ebx = 0x1u;
/* 7865e3: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 7865e5: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7865e8: test dword ptr [edi + eax*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7865eb: je 0x786893 */
  if (zf) goto L_786893;
L_7865f1: /* 7865f1: mov eax, dword ptr [esi + 0x1338] */
  eax = R32((uint32_t)(esi + 0x1338u));
/* 7865f7: xor ebx, ebx */
  ebx = 0;
/* 7865f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865fb: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 786602: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 786609: jle 0x786625 */
  if ((zf || sf != of)) goto L_786625;
L_78660b: /* 78660b: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786611: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786615: mov eax, dword ptr [esi + 0x1334] */
  eax = R32((uint32_t)(esi + 0x1334u));
/* 78661b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78661d: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 786620: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 786623: jmp 0x786630 */
  goto L_786630;
L_786625: /* 786625: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 786628: jmp 0x786630 */
  goto L_786630;
L_786630: /* 786630: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786633: jge 0x786893 */
  if ((sf == of)) goto L_786893;
L_786639: /* 786639: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 78663c: mov eax, dword ptr [edi + 0x6000] */
  eax = R32((uint32_t)(edi + 0x6000u));
/* 786642: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 786645: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786647: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78664c: jge 0x786909 */
  if ((sf == of)) goto L_786909;
L_786652: /* 786652: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 786655: lea edi, [edi + eax*8] */
  edi = (uint32_t)(edi + eax*8);
/* 786658: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78665f: je 0x78666a */
  if (zf) goto L_78666a;
L_786661: /* 786661: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 786668: jmp 0x78669c */
  goto L_78669c;
L_78666a: /* 78666a: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786670: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786674: mov eax, dword ptr [esi + 0x1328] */
  eax = R32((uint32_t)(esi + 0x1328u));
/* 78667a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78667c: mov edx, ecx */
  edx = ecx;
/* 78667e: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 786681: mov esi, 1 */
  esi = 0x1u;
/* 786686: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 786688: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 78668b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 78668e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 786690: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 786693: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 786695: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 786697: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 786699: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_78669c: /* 78669c: xor ecx, ecx */
  ecx = 0;
L_78669e: /* 78669e: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7866a1: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7866a4: jge 0x78677d */
  if ((sf == of)) goto L_78677d;
L_7866aa: /* 7866aa: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7866b1: je 0x7866bc */
  if (zf) goto L_7866bc;
L_7866b3: /* 7866b3: mov eax, dword ptr [ecx*4 + 0xac7e7c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e7cu));
/* 7866ba: jmp 0x7866c3 */
  goto L_7866c3;
L_7866bc: /* 7866bc: mov eax, dword ptr [ecx*4 + 0xac7e6c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e6cu));
L_7866c3: /* 7866c3: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7866c6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7866c8: lea edx, [eax + ebx*2] */
  edx = (uint32_t)(eax + ebx*2);
/* 7866cb: mov eax, ebx */
  eax = ebx;
/* 7866cd: je 0x7866e7 */
  if (zf) goto L_7866e7;
L_7866cf: /* 7866cf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866d1: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866d4: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866d7: mov esi, dword ptr [eax + 0xac7e34] */
  esi = R32((uint32_t)(eax + 0xac7e34u));
/* 7866dd: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866df: mov edx, dword ptr [eax + 0xac7e30] */
  edx = R32((uint32_t)(eax + 0xac7e30u));
/* 7866e5: jmp 0x7866fd */
  goto L_7866fd;
L_7866e7: /* 7866e7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866e9: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866ec: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866ef: mov esi, dword ptr [eax + 0xac7df8] */
  esi = R32((uint32_t)(eax + 0xac7df8u));
/* 7866f5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866f7: mov edx, dword ptr [eax + 0xac7df4] */
  edx = R32((uint32_t)(eax + 0xac7df4u));
L_7866fd: /* 7866fd: imul esi, dword ptr [ebp - 0x2c] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  esi = (uint32_t)r;
  }
/* 786701: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786704: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786706: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786708: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78670a: jl 0x786711 */
  if ((sf != of)) goto L_786711;
L_78670c: /* 78670c: cmp esi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78670f: jl 0x78672c */
  if ((sf != of)) goto L_78672c;
L_786711: /* 786711: push 0x89 */
  { uint32_t v = 0x89u; esp -= 4; W32(esp, v); }
/* 786716: push 0xac7cb8 */
  { uint32_t v = 0xac7cb8u; esp -= 4; W32(esp, v); }
/* 78671b: push 0xac7cc8 */
  { uint32_t v = 0xac7cc8u; esp -= 4; W32(esp, v); }
/* 786720: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x786726u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 786726: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 786729: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78672c: /* 78672c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 78672f: mov eax, dword ptr [edx + 0xf004] */
  eax = R32((uint32_t)(edx + 0xf004u));
/* 786735: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786737: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78673a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78673d: lea edx, [edx + eax*4 + 0x6004] */
  edx = (uint32_t)(edx + eax*4 + 0x6004u);
/* 786744: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 786747: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786748: jmp 0x78669e */
  goto L_78669e;
L_78677d: /* 78677d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786780: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 786782: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786784: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 786786: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786789: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78678c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 78678f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 786792: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 786795: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 786798: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78679a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78679c: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 78679f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7867a2: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7867a5: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7867a8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7867ab: mov ecx, dword ptr [edx + 0x15008] */
  ecx = R32((uint32_t)(edx + 0x15008u));
/* 7867b1: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7867b4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7867b7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7867b9: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7867bf: jge 0x786901 */
  if ((sf == of)) goto L_786901;
L_7867c5: /* 7867c5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7867c7: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7867ca: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867cc: lea edx, [edx + eax*4 + 0xf008] */
  edx = (uint32_t)(edx + eax*4 + 0xf008u);
/* 7867d3: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867d6: xor eax, eax */
  eax = 0;
/* 7867d8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867dc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 7867de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e0: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867e3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867e7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867e9: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 7867ec: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867ef: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7867f1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867f3: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867f8: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 7867fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7867fd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_786803: /* 786803: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786806: jge 0x786816 */
  if ((sf == of)) goto L_786816;
L_786808: /* 786808: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 78680b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78680c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78680e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 786810: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 786812: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786814: jmp 0x786803 */
  goto L_786803;
L_786816: /* 786816: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 78681c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78681e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786821: jne 0x786841 */
  if (!zf) goto L_786841;
L_786823: /* 786823: fsqrt  */
  ST0 = sqrt(ST0);
/* 786825: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 78682b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78682d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78682f: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 786831: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 786833: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 786836: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 786839: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78683c: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 78683f: jmp 0x786851 */
  goto L_786851;
L_786841: /* 786841: xor eax, eax */
  eax = 0;
/* 786843: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786845: mov dword ptr [edx], 0x3f800000 */
  W32((uint32_t)(edx), 0x3f800000u);
/* 78684b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78684e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_786851: /* 786851: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786854: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 786857: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 78685a: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78685d: lea ecx, [eax + 0xf008] */
  ecx = (uint32_t)(eax + 0xf008u);
/* 786863: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 786866: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 786869: add eax, 0x12008 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12008u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78686e: mov dword ptr [edi + 0x14], 1 */
  W32((uint32_t)(edi + 0x14u), 0x1u);
/* 786875: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 786878: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78687b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78687d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 786880: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786881: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786884: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 786887: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 78688a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 78688d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78688e: jmp 0x786630 */
  goto L_786630;
L_786893: /* 786893: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 786896: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786899: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78689c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78689f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7868a2: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7868a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7868a8: jmp 0x7865b4 */
  goto L_7865b4;
L_7868ad: /* 7868ad: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7868b0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7868b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7868b3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7868b6: jmp 0x78659f */
  goto L_78659f;
L_7868bb: /* 7868bb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7868be: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7868c1: mov edi, dword ptr [eax + 0x6000] */
  edi = R32((uint32_t)(eax + 0x6000u));
/* 7868c7: mov esi, dword ptr [eax + 0x15008] */
  esi = R32((uint32_t)(eax + 0x15008u));
/* 7868cd: mov edx, dword ptr [eax + 0xf004] */
  edx = R32((uint32_t)(eax + 0xf004u));
/* 7868d3: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7868d5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7868d7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7868da: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868dc: mov dword ptr [eax + 0x6000], edi */
  W32((uint32_t)(eax + 0x6000u), edi);
/* 7868e2: mov dword ptr [eax + 0x15008], esi */
  W32((uint32_t)(eax + 0x15008u), esi);
/* 7868e8: mov dword ptr [eax + 0xf004], edx */
  W32((uint32_t)(eax + 0xf004u), edx);
/* 7868ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7868f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7868f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7868f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7868fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7868fb: mov esp, ebp */
  esp = ebp;
/* 7868fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7868fe: ret 0x10 */
  esp += 20; SPILL(); return;
L_786901: /* 786901: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786903: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786905: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786907: fstp st(0) */
  STI(0) = ST0; FPOP();
L_786909: /* 786909: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78690c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78690d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78690e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 786915: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 786916: mov esp, ebp */
  esp = ebp;
/* 786918: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 786919: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_78656c(void) {
  LOAD_REGS();
  goto L_78656c;
L_7864fb: /* 7864fb: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7864fe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 786501: jg 0x786595 */
  if ((!zf && sf == of)) goto L_786595;
L_786507: /* 786507: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 786509: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_786510: /* 786510: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786512: jg 0x786588 */
  if ((!zf && sf == of)) goto L_786588;
L_786514: /* 786514: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 786517: mov edx, dword ptr [ebx + 0xf004] */
  edx = R32((uint32_t)(ebx + 0xf004u));
/* 78651d: add edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 786520: cmp edx, 0xc00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786526: jge 0x786909 */
  if ((sf == of)) goto L_786909;
L_78652c: /* 78652c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78652d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78652e: mov ecx, esi */
  ecx = esi;
/* 786530: call 0x6cb82f */
  esp -= 4; W32(esp, 0x786535u); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 786535: mov ecx, dword ptr [esi + 0x1280] */
  ecx = R32((uint32_t)(esi + 0x1280u));
/* 78653b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78653e: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 786541: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 786543: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 786546: mov eax, esp */
  eax = esp;
/* 786548: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78654a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78654d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 786550: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 786553: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 786556: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786559: mov eax, dword ptr [ebx + 0xf004] */
  eax = R32((uint32_t)(ebx + 0xf004u));
/* 78655f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786561: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 786564: lea ecx, [ebx + eax*4 + 0x6004] */
  ecx = (uint32_t)(ebx + eax*4 + 0x6004u);
/* 78656b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_78656c: /* 78656c: call 0x6c882d */
  esp -= 4; W32(esp, 0x786571u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 786571: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 786574: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 786577: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78657a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78657d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78657e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 786580: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 786583: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 786586: jmp 0x786510 */
  goto L_786510;
L_786588: /* 786588: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78658b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78658e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786590: jmp 0x7864fb */
  goto L_7864fb;
L_786595: /* 786595: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786598: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_78659f: /* 78659f: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865a2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7865a5: jge 0x7868bb */
  if ((sf == of)) goto L_7868bb;
L_7865ab: /* 7865ab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7865ad: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_7865b4: /* 7865b4: cmp edx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865b6: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7865b9: jge 0x7868ad */
  if ((sf == of)) goto L_7868ad;
L_7865bf: /* 7865bf: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7865c6: jne 0x7865f1 */
  if (!zf) goto L_7865f1;
L_7865c8: /* 7865c8: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 7865ce: mov edi, dword ptr [esi + 0x131c] */
  edi = R32((uint32_t)(esi + 0x131cu));
/* 7865d4: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 7865d7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7865d9: mov eax, ecx */
  eax = ecx;
/* 7865db: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7865de: mov ebx, 1 */
  ebx = 0x1u;
/* 7865e3: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 7865e5: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7865e8: test dword ptr [edi + eax*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7865eb: je 0x786893 */
  if (zf) goto L_786893;
L_7865f1: /* 7865f1: mov eax, dword ptr [esi + 0x1338] */
  eax = R32((uint32_t)(esi + 0x1338u));
/* 7865f7: xor ebx, ebx */
  ebx = 0;
/* 7865f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865fb: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 786602: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 786609: jle 0x786625 */
  if ((zf || sf != of)) goto L_786625;
L_78660b: /* 78660b: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786611: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786615: mov eax, dword ptr [esi + 0x1334] */
  eax = R32((uint32_t)(esi + 0x1334u));
/* 78661b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78661d: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 786620: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 786623: jmp 0x786630 */
  goto L_786630;
L_786625: /* 786625: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 786628: jmp 0x786630 */
  goto L_786630;
L_786630: /* 786630: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786633: jge 0x786893 */
  if ((sf == of)) goto L_786893;
L_786639: /* 786639: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 78663c: mov eax, dword ptr [edi + 0x6000] */
  eax = R32((uint32_t)(edi + 0x6000u));
/* 786642: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 786645: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786647: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78664c: jge 0x786909 */
  if ((sf == of)) goto L_786909;
L_786652: /* 786652: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 786655: lea edi, [edi + eax*8] */
  edi = (uint32_t)(edi + eax*8);
/* 786658: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78665f: je 0x78666a */
  if (zf) goto L_78666a;
L_786661: /* 786661: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 786668: jmp 0x78669c */
  goto L_78669c;
L_78666a: /* 78666a: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786670: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786674: mov eax, dword ptr [esi + 0x1328] */
  eax = R32((uint32_t)(esi + 0x1328u));
/* 78667a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78667c: mov edx, ecx */
  edx = ecx;
/* 78667e: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 786681: mov esi, 1 */
  esi = 0x1u;
/* 786686: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 786688: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 78668b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 78668e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 786690: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 786693: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 786695: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 786697: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 786699: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_78669c: /* 78669c: xor ecx, ecx */
  ecx = 0;
L_78669e: /* 78669e: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7866a1: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7866a4: jge 0x78677d */
  if ((sf == of)) goto L_78677d;
L_7866aa: /* 7866aa: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7866b1: je 0x7866bc */
  if (zf) goto L_7866bc;
L_7866b3: /* 7866b3: mov eax, dword ptr [ecx*4 + 0xac7e7c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e7cu));
/* 7866ba: jmp 0x7866c3 */
  goto L_7866c3;
L_7866bc: /* 7866bc: mov eax, dword ptr [ecx*4 + 0xac7e6c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e6cu));
L_7866c3: /* 7866c3: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7866c6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7866c8: lea edx, [eax + ebx*2] */
  edx = (uint32_t)(eax + ebx*2);
/* 7866cb: mov eax, ebx */
  eax = ebx;
/* 7866cd: je 0x7866e7 */
  if (zf) goto L_7866e7;
L_7866cf: /* 7866cf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866d1: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866d4: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866d7: mov esi, dword ptr [eax + 0xac7e34] */
  esi = R32((uint32_t)(eax + 0xac7e34u));
/* 7866dd: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866df: mov edx, dword ptr [eax + 0xac7e30] */
  edx = R32((uint32_t)(eax + 0xac7e30u));
/* 7866e5: jmp 0x7866fd */
  goto L_7866fd;
L_7866e7: /* 7866e7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866e9: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866ec: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866ef: mov esi, dword ptr [eax + 0xac7df8] */
  esi = R32((uint32_t)(eax + 0xac7df8u));
/* 7866f5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866f7: mov edx, dword ptr [eax + 0xac7df4] */
  edx = R32((uint32_t)(eax + 0xac7df4u));
L_7866fd: /* 7866fd: imul esi, dword ptr [ebp - 0x2c] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  esi = (uint32_t)r;
  }
/* 786701: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786704: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786706: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786708: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78670a: jl 0x786711 */
  if ((sf != of)) goto L_786711;
L_78670c: /* 78670c: cmp esi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78670f: jl 0x78672c */
  if ((sf != of)) goto L_78672c;
L_786711: /* 786711: push 0x89 */
  { uint32_t v = 0x89u; esp -= 4; W32(esp, v); }
/* 786716: push 0xac7cb8 */
  { uint32_t v = 0xac7cb8u; esp -= 4; W32(esp, v); }
/* 78671b: push 0xac7cc8 */
  { uint32_t v = 0xac7cc8u; esp -= 4; W32(esp, v); }
/* 786720: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x786726u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 786726: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 786729: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78672c: /* 78672c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 78672f: mov eax, dword ptr [edx + 0xf004] */
  eax = R32((uint32_t)(edx + 0xf004u));
/* 786735: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786737: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78673a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78673d: lea edx, [edx + eax*4 + 0x6004] */
  edx = (uint32_t)(edx + eax*4 + 0x6004u);
/* 786744: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 786747: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786748: jmp 0x78669e */
  goto L_78669e;
L_78677d: /* 78677d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786780: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 786782: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786784: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 786786: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786789: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78678c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 78678f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 786792: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 786795: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 786798: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78679a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78679c: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 78679f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7867a2: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7867a5: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7867a8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7867ab: mov ecx, dword ptr [edx + 0x15008] */
  ecx = R32((uint32_t)(edx + 0x15008u));
/* 7867b1: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7867b4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7867b7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7867b9: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7867bf: jge 0x786901 */
  if ((sf == of)) goto L_786901;
L_7867c5: /* 7867c5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7867c7: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7867ca: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867cc: lea edx, [edx + eax*4 + 0xf008] */
  edx = (uint32_t)(edx + eax*4 + 0xf008u);
/* 7867d3: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867d6: xor eax, eax */
  eax = 0;
/* 7867d8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867dc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 7867de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e0: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867e3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867e7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867e9: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 7867ec: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867ef: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7867f1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867f3: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867f8: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 7867fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7867fd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_786803: /* 786803: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786806: jge 0x786816 */
  if ((sf == of)) goto L_786816;
L_786808: /* 786808: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 78680b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78680c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78680e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 786810: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 786812: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786814: jmp 0x786803 */
  goto L_786803;
L_786816: /* 786816: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 78681c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78681e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786821: jne 0x786841 */
  if (!zf) goto L_786841;
L_786823: /* 786823: fsqrt  */
  ST0 = sqrt(ST0);
/* 786825: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 78682b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78682d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78682f: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 786831: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 786833: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 786836: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 786839: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78683c: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 78683f: jmp 0x786851 */
  goto L_786851;
L_786841: /* 786841: xor eax, eax */
  eax = 0;
/* 786843: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786845: mov dword ptr [edx], 0x3f800000 */
  W32((uint32_t)(edx), 0x3f800000u);
/* 78684b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78684e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_786851: /* 786851: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786854: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 786857: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 78685a: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78685d: lea ecx, [eax + 0xf008] */
  ecx = (uint32_t)(eax + 0xf008u);
/* 786863: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 786866: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 786869: add eax, 0x12008 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12008u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78686e: mov dword ptr [edi + 0x14], 1 */
  W32((uint32_t)(edi + 0x14u), 0x1u);
/* 786875: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 786878: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78687b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78687d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 786880: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786881: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786884: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 786887: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 78688a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 78688d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78688e: jmp 0x786630 */
  goto L_786630;
L_786893: /* 786893: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 786896: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786899: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78689c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78689f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7868a2: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7868a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7868a8: jmp 0x7865b4 */
  goto L_7865b4;
L_7868ad: /* 7868ad: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7868b0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7868b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7868b3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7868b6: jmp 0x78659f */
  goto L_78659f;
L_7868bb: /* 7868bb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7868be: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7868c1: mov edi, dword ptr [eax + 0x6000] */
  edi = R32((uint32_t)(eax + 0x6000u));
/* 7868c7: mov esi, dword ptr [eax + 0x15008] */
  esi = R32((uint32_t)(eax + 0x15008u));
/* 7868cd: mov edx, dword ptr [eax + 0xf004] */
  edx = R32((uint32_t)(eax + 0xf004u));
/* 7868d3: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7868d5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7868d7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7868da: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868dc: mov dword ptr [eax + 0x6000], edi */
  W32((uint32_t)(eax + 0x6000u), edi);
/* 7868e2: mov dword ptr [eax + 0x15008], esi */
  W32((uint32_t)(eax + 0x15008u), esi);
/* 7868e8: mov dword ptr [eax + 0xf004], edx */
  W32((uint32_t)(eax + 0xf004u), edx);
/* 7868ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7868f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7868f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7868f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7868fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7868fb: mov esp, ebp */
  esp = ebp;
/* 7868fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7868fe: ret 0x10 */
  esp += 20; SPILL(); return;
L_786901: /* 786901: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786903: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786905: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786907: fstp st(0) */
  STI(0) = ST0; FPOP();
L_786909: /* 786909: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78690c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78690d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78690e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 786915: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 786916: mov esp, ebp */
  esp = ebp;
/* 786918: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 786919: ret 0x10 */
  esp += 20; SPILL(); return;
}
