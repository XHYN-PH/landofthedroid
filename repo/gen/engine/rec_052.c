#include "recomp.h"
#include "rec_mod.h"

void f_7e77c6(void) {
  LOAD_REGS();
  goto L_7e77c6;
L_7e771b: /* 7e771b: mov eax, 1 */
  eax = 0x1u;
/* 7e7720: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e772a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e772b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e772c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e772d: mov esp, ebp */
  esp = ebp;
/* 7e772f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7730: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e77c6: /* 7e77c6: mov ecx, dword ptr [0xce8484] */
  ecx = R32((uint32_t)(0xce8484u));
/* 7e77cc: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e77d1: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 7e77d4: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e77da: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e77e0: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e77e3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e77e5: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7e77e7: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e77ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e77ed: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e77f3: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7e77f9u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7e77f9: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7e77fc: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e7801: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
/* 7e7807: mov dword ptr [ebp - 0xc8], ebx */
  W32((uint32_t)(ebp + 0xffffff38u), ebx);
/* 7e780d: mov dword ptr [ebp - 0xc4], ebx */
  W32((uint32_t)(ebp + 0xffffff3cu), ebx);
/* 7e7813: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e781d: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e7827: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e7831: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e783b: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e7845: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e784f: mov dword ptr [ebp - 0xa8], ebx */
  W32((uint32_t)(ebp + 0xffffff58u), ebx);
/* 7e7855: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e785f: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e7869: mov dword ptr [ebp - 0x9c], ebx */
  W32((uint32_t)(ebp + 0xffffff64u), ebx);
/* 7e786f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7871: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e7874: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x7e787au); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 7e787a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e787c: je 0x7e7890 */
  if (zf) goto L_7e7890;
L_7e787e: /* 7e787e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e7881: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7e7884: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7e7887: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e788e: jmp 0x7e78bd */
  goto L_7e78bd;
L_7e7890: /* 7e7890: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e7893: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7e7899u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7e7899: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7e789c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e789f: mov edx, ecx */
  edx = ecx;
/* 7e78a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e78a2: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 7e78a8: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7e78ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e78ac: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e78af: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x7e78b5u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 7e78b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e78b7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e78ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
L_7e78bd: /* 7e78bd: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7e78c0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e78c3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78c5: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e78c8: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e78cb: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e78ce: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78d0: mov dword ptr [ebp - 0x38], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x40000000u);
/* 7e78d7: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e78da: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 7e78e0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78e2: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 7e78e5: mov dword ptr [ebp - 0x6c], 1 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x1u);
/* 7e78ec: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e78f2: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e78f5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7e78f7: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e78fa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7e78fd: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7e7900: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e7902: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 7e7905: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7908: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e790b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e790d: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7e7910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7913: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7915: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 7e791b: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7921: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 7e7924: mov eax, edx */
  eax = edx;
/* 7e7926: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7e7928: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e792b: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7e792e: jne 0x7e7939 */
  if (!zf) goto L_7e7939;
L_7e7930: /* 7e7930: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7933: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7939: /* 7e7939: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e793b: je 0x7e797a */
  if (zf) goto L_7e797a;
L_7e793d: /* 7e793d: cmp dword ptr [ecx + 0x54], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x54u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7940: je 0x7e7955 */
  if (zf) goto L_7e7955;
L_7e7942: /* 7e7942: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e7944: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x7e794au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e794a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e794c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e794f: jne 0x7e7ac7 */
  if (!zf) goto L_7e7ac7;
L_7e7955: /* 7e7955: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7958: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e795a: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7960: /* 7e7960: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7962: jne 0x7e797a */
  if (!zf) goto L_7e797a;
L_7e7964: /* 7e7964: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7969: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e796fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e796f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7971: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7974: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e797a: /* 7e797a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7e797d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e7983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7985: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7988: jnp 0x7e7ac7 */
  if (!pf) goto L_7e7ac7;
L_7e798e: /* 7e798e: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e7994: xor esi, esi */
  esi = 0;
/* 7e7996: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 7e7998: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e799a: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 7e799d: je 0x7e79a9 */
  if (zf) goto L_7e79a9;
L_7e799f: /* 7e799f: cmp dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e79a2: jne 0x7e79a6 */
  if (!zf) goto L_7e79a6;
L_7e79a4: /* 7e79a4: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_7e79a6: /* 7e79a6: or bl, 0x18 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7e79a9: /* 7e79a9: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7e79ac: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e79af: je 0x7e79b4 */
  if (zf) goto L_7e79b4;
L_7e79b1: /* 7e79b1: or bl, 0x86 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x86u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7e79b4: /* 7e79b4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e79b6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e79b9: je 0x7e79c0 */
  if (zf) goto L_7e79c0;
L_7e79bb: /* 7e79bb: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7e79be: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
L_7e79c0: /* 7e79c0: mov eax, dword ptr [ecx + 0x2d4] */
  eax = R32((uint32_t)(ecx + 0x2d4u));
/* 7e79c6: fld dword ptr [ecx + 0x2d8] */
  { double v = F32((uint32_t)(ecx + 0x2d8u)); FPUSH(v); }
/* 7e79cc: fld dword ptr [ecx + 0x2d4] */
  { double v = F32((uint32_t)(ecx + 0x2d4u)); FPUSH(v); }
/* 7e79d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e79d3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e79d6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7e79d9: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e79df: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 7e79e2: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7e79e5: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e79e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e79e9: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e79ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e79ed: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e79f0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e79f3: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e79f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e79f9: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 7e79fc: mov ecx, esp */
  ecx = esp;
/* 7e79fe: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7a00: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e7a02: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e7a05: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e7a08: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e7a0b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7a0e: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e7a11: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e7a13: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7a16: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e7a18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7a1b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7a1e: mov ecx, esp */
  ecx = esp;
/* 7e7a20: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e7a22: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7e7a25: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7a28: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e7a2b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7a2e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7a31: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7a34: mov ecx, esp */
  ecx = esp;
/* 7e7a36: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e7a38: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7a3b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e7a3e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7a41: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7a44: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7e7a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a4b: mov ecx, edx */
  ecx = edx;
/* 7e7a4d: call dword ptr [edi + 0xd8] */
  { uint32_t t = R32((uint32_t)(edi + 0xd8u)); esp -= 4; W32(esp, 0x7e7a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7a53: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7a56: test byte ptr [ecx + 0x88], 0x1c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x1cu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a5d: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7e7a60: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a62: /* 7e7a62: mov esi, eax */
  esi = eax;
/* 7e7a64: mov edi, 1 */
  edi = 0x1u;
/* 7e7a69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e7a70: /* 7e7a70: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a72: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a74: /* 7e7a74: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e7a77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a79: je 0x7e7a8f */
  if (zf) goto L_7e7a8f;
L_7e7a7b: /* 7e7a7b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e7a7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7a7f: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a84u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a86: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7a8c: /* 7e7a8c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7a8f: /* 7e7a8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a90: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7e7a93: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a98u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a9a: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7aa0: /* 7e7aa0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e7aa3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7aa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7aa7: mov dword ptr [ebp - 0x8c], edi */
  W32((uint32_t)(ebp + 0xffffff74u), edi);
/* 7e7aad: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e7ab2u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e7ab2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ab4: je 0x7e7b40 */
  if (zf) goto L_7e7b40;
L_7e7aba: /* 7e7aba: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7e7abd: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e7ac2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ac4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7ac7: /* 7e7ac7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e7aca: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7e7acd: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7e7ad0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7e7ad3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7e7ad6: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e7ad9: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7adc: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7adf: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7e7ae5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7ae7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7aea: jp 0x7e7bbd */
  if (pf) goto L_7e7bbd;
L_7e7af0: /* 7e7af0: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7af3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7af5: jne 0x7e7bbd */
  if (!zf) goto L_7e7bbd;
L_7e7afb: /* 7e7afb: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7e7afe: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7b01: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7e7b04: fcom dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b07: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7b09: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7b0c: jp 0x7e7b4a */
  if (pf) goto L_7e7b4a;
L_7e7b0e: /* 7e7b0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7e7b15: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7b17: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b1a: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7e7b21: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7b24: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7e7b2b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e7b2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7b31: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7e7b34: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7e7b37: mov dword ptr [edx + 0x24], 0 */
  W32((uint32_t)(edx + 0x24u), 0x0u);
/* 7e7b3e: jmp 0x7e7bba */
  goto L_7e7bba;
L_7e7b40: /* 7e7b40: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e7b42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7b45: jmp 0x7e7a70 */
  goto L_7e7a70;
L_7e7b4a: /* 7e7b4a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e7b4d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b50: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e7b53: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b56: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7e7b59: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e7b5c: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b5f: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 7e7b65: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7b68: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 7e7b6b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b6d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7b70: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 7e7b73: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b75: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e7b78: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 7e7b7b: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e7b81: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 7e7b84: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e7b87: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 7e7b8a: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7b90: fsub dword ptr [ebp - 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 7e7b96: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7b99: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b9c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7e7b9f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7ba2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7ba5: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7ba8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7bab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7bae: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7e7bb1: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7bb4: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7bb7: fstp dword ptr [edx + 0x24] */
  WF32((uint32_t)(edx + 0x24u), ST0); FPOP();
L_7e7bba: /* 7e7bba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bbd: /* 7e7bbd: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e7bc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bc2: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bc8: /* 7e7bc8: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bcd: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bd3: /* 7e7bd3: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bda: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7be0: /* 7e7be0: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 7e7be3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7be5: je 0x7e7bf6 */
  if (zf) goto L_7e7bf6;
L_7e7be7: /* 7e7be7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7be9: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x7e7befu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7bef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bf1: jne 0x7e7c18 */
  if (!zf) goto L_7e7c18;
L_7e7bf3: /* 7e7bf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bf6: /* 7e7bf6: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7bf9: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bfb: je 0x7e7c1b */
  if (zf) goto L_7e7c1b;
L_7e7bfd: /* 7e7bfd: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bff: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7c05: /* 7e7c05: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7c0a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e7c10u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e7c10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c12: jne 0x7e7cbb */
  if (!zf) goto L_7e7cbb;
L_7e7c18: /* 7e7c18: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7c1b: /* 7e7c1b: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 7e7c1e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7c21: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 7e7c27: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7e7c2a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7c2d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7c30: fadd dword ptr [ecx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x174u)));
/* 7e7c36: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7c38: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7c3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7c3c: fadd dword ptr [ecx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x170u)));
/* 7e7c42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c45: mov esi, esp */
  esi = esp;
/* 7e7c47: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c49: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 7e7c4c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7c4f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c52: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 7e7c55: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7c58: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c5b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7c5e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7c61: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c64: mov esi, esp */
  esi = esp;
/* 7e7c66: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c68: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7c6b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c6e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7c71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7c72: mov ecx, eax */
  ecx = eax;
/* 7e7c74: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c77: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x7e7c7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7c7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c7f: je 0x7e7cbb */
  if (zf) goto L_7e7cbb;
L_7e7c81: /* 7e7c81: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e7c86: mov ecx, dword ptr [0xce8480] */
  ecx = R32((uint32_t)(0xce8480u));
/* 7e7c8c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7e7c8f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e7c91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7c93: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7c96: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e7c98: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7c9a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e7ca0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e7ca6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
L_7e7ca6: /* 7e7ca6: xor eax, eax */
  eax = 0;
/* 7e7ca8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7cab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e7cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7cb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e7cb5: mov esp, ebp */
  esp = ebp;
/* 7e7cb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7cb8: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7cbb: /* 7e7cbb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cbe: /* 7e7cbe: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cc5: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cc7: /* 7e7cc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7cca: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* 7e7cd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cd2: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cd4: /* 7e7cd4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7cd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7cd7: mov ecx, eax */
  ecx = eax;
/* 7e7cd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e7cdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7cdc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cdf: /* 7e7cdf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7ce2: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e7ce8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7cea: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e7cec: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7cef: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7cf2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7cf5: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7cf8: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e7cfb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7cfe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d01: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7d06: mov ecx, eax */
  ecx = eax;
/* 7e7d08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7d0a: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7e7d0d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7d10: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7e7d13: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7d16: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7e7d19: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7e7d1c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e7d1e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e7d21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e7d24: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7e7d27: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e7d2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d2d: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* 7e7d33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e7d35: jle 0x7e86e1 */
  if ((zf || sf != of)) goto L_7e86e1;
L_7e7d3b: /* 7e7d3b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e7d3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d40: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e7d46: /* 7e7d46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e7d4f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7d55u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7d55: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d59: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* 7e7d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d60: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d66: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d69: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d6fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d6f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d75: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 7e7d78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7d79: lea eax, [ebp - 0x1b4] */
  eax = (uint32_t)(ebp + 0xfffffe4cu);
/* 7e7d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d80: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d83: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d89u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7d8c: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d93: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d96: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e7d9cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d9e: je 0x7e7e07 */
  if (zf) goto L_7e7e07;
L_7e7da0: /* 7e7da0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7da3: mov edx, dword ptr [eax + 0x184] */
  edx = R32((uint32_t)(eax + 0x184u));
/* 7e7da9: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e7dac: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7db2: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7db8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dba: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e7dbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dbe: mov edx, dword ptr [eax + 0x180] */
  edx = R32((uint32_t)(eax + 0x180u));
/* 7e7dc4: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7dca: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7dd0: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dd3: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* 7e7dd9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e7ddc: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7de2: and eax, 0xfffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e7de7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dea: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e7df0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7df6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7df6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e7df8: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7e7dfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7dfe: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 7e7e01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7e04: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_7e7e07: /* 7e7e07: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7e0a: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7e7e10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7e12: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7e7e15: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7e18: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7e1b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e7e1e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7e21: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e7e24: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7e27: mov dword ptr [ebp - 0x154], edx */
  W32((uint32_t)(ebp + 0xfffffeacu), edx);
/* 7e7e2d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7e30: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 7e7e3a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7e7e44: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7e7e4e: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 7e7e58: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7e7e62: mov dword ptr [ebp - 0x170], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x3f800000u);
/* 7e7e6c: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7e7e76: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7e7e80: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 7e7e8a: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7e7e94: mov dword ptr [ebp - 0x15c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x3f800000u);
/* 7e7e9e: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7e7ea8: mov dword ptr [ebp - 0x150], ecx */
  W32((uint32_t)(ebp + 0xfffffeb0u), ecx);
/* 7e7eae: mov dword ptr [ebp - 0x14c], edx */
  W32((uint32_t)(ebp + 0xfffffeb4u), edx);
/* 7e7eb4: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 7e7ebe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7ec3: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7ec9: lea edi, [ebp - 0x2e4] */
  edi = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7ecf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ed1: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7ed6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7edb: mov ecx, esp */
  ecx = esp;
/* 7e7edd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7edf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7ee2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7ee5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e7ee8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7eeb: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7ef1: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7e7ef6u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7e7ef6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ef9: mov edi, esp */
  edi = esp;
/* 7e7efb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7f00: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f06: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7f08: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e7f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7f0f: mov ecx, eax */
  ecx = eax;
/* 7e7f11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e7f15: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e7f1bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e7f1b: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7f21: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e7f25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f2b: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7f31: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e7f35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f3b: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f41: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e7f45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7f4e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e7f55: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e7f60: /* 7e7f60: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7f63: cmp edx, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7f69: jge 0x7e86ce */
  if ((sf == of)) goto L_7e86ce;
L_7e7f6f: /* 7e7f6f: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7f75: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 7e7f78: xor edi, edi */
  edi = 0;
/* 7e7f7a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7f7c: je 0x7e86c6 */
  if (zf) goto L_7e86c6;
L_7e7f82: /* 7e7f82: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7e7f88: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7f8b: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 7e7f8e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 7e7f91: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 7e7f94: mov dword ptr [ebp - 0x138], edi */
  W32((uint32_t)(ebp + 0xfffffec8u), edi);
/* 7e7f9a: mov dword ptr [ebp - 0x134], edi */
  W32((uint32_t)(ebp + 0xfffffeccu), edi);
/* 7e7fa0: mov dword ptr [ebp - 0x130], edi */
  W32((uint32_t)(ebp + 0xfffffed0u), edi);
/* 7e7fa6: mov dword ptr [ebp - 0x12c], edi */
  W32((uint32_t)(ebp + 0xfffffed4u), edi);
/* 7e7fac: mov dword ptr [ebp - 0x128], edi */
  W32((uint32_t)(ebp + 0xfffffed8u), edi);
/* 7e7fb2: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 7e7fb8: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 7e7fbe: mov dword ptr [ebp - 0x11c], edi */
  W32((uint32_t)(ebp + 0xfffffee4u), edi);
/* 7e7fc4: mov dword ptr [ebp - 0x118], edi */
  W32((uint32_t)(ebp + 0xfffffee8u), edi);
/* 7e7fca: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 7e7fd4: mov dword ptr [ebp - 0x110], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffef0u), 0xffffffffu);
/* 7e7fde: mov dword ptr [ebp - 0x10c], edi */
  W32((uint32_t)(ebp + 0xfffffef4u), edi);
/* 7e7fe4: je 0x7e8111 */
  if (zf) goto L_7e8111;
L_7e7fea: /* 7e7fea: test byte ptr [ebx + 0x88], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ff1: jne 0x7e8111 */
  if (!zf) goto L_7e8111;
L_7e7ff7: /* 7e7ff7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ffa: mov edi, esp */
  edi = esp;
/* 7e7ffc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e8001: lea esi, [ebp - 0x298] */
  esi = (uint32_t)(ebp + 0xfffffd68u);
/* 7e8007: lea eax, [ebp - 0x258] */
  eax = (uint32_t)(ebp + 0xfffffda8u);
/* 7e800d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e800f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8010: lea ecx, [ebx + 0x220] */
  ecx = (uint32_t)(ebx + 0x220u);
/* 7e8016: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e801cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e801c: mov ecx, dword ptr [ebp - 0x228] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd8u));
/* 7e8022: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 7e8028: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 7e802e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7e8031: lea ecx, [ebp - 0x354] */
  ecx = (uint32_t)(ebp + 0xfffffcacu);
/* 7e8037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8038: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e803e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7e8042: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e8045: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e8048: call dword ptr [0xcfaa78] */
  esp -= 4; W32(esp, 0x7e804eu); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* 7e804e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e8054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8055: lea edx, [ebp - 0x384] */
  edx = (uint32_t)(ebp + 0xfffffc7cu);
/* 7e805b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e805c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e805f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x7e8065u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e8065: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7e806b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e806c: mov ecx, eax */
  ecx = eax;
/* 7e806e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x7e8074u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 7e8074: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e8077: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 7e807d: mov esi, dword ptr [ebp - 0x98] */
  esi = R32((uint32_t)(ebp + 0xffffff68u));
/* 7e8083: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e8086: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8089: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 7e808f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8091: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e8094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8096: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 7e809c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e809e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a2: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e80a8: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 7e80ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e80af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80b2: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7e80b8: mov eax, esp */
  eax = esp;
/* 7e80ba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80bc: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 7e80c2: mov esi, dword ptr [ebp - 0x94] */
  esi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7e80c8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80cb: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 7e80d1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80d4: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* 7e80da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80dd: mov eax, esp */
  eax = esp;
/* 7e80df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80e1: mov esi, dword ptr [ebp - 0xe8] */
  esi = R32((uint32_t)(ebp + 0xffffff18u));
/* 7e80e7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80ea: mov esi, dword ptr [ebp - 0xe4] */
  esi = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7e80f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e80f1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e80fa: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e8100: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e8104: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e810au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e810a: xor edi, edi */
  edi = 0;
/* 7e810c: jmp 0x7e83d7 */
  goto L_7e83d7;
L_7e8111: /* 7e8111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8112: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e8115: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e811bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e811b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e811e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e811f: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7e8125: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e812bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e812b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e812d: je 0x7e83d7 */
  if (zf) goto L_7e83d7;
L_7e8133: /* 7e8133: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 7e8136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e8137: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7e813d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e813e: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7e8144: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x7e814au); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e814a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e814d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8154: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8157: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e815du); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e815d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e815f: je 0x7e835d */
  if (zf) goto L_7e835d;
L_7e8165: /* 7e8165: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8167: mov ecx, ebx */
  ecx = ebx;
/* 7e8169: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x7e816fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e816f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8171: je 0x7e818a */
  if (zf) goto L_7e818a;
L_7e8173: /* 7e8173: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7e8178: mov ecx, ebx */
  ecx = ebx;
/* 7e817a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e8180u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e8180: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e8182: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e8184: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e8186: mov esi, eax */
  esi = eax;
/* 7e8188: jmp 0x7e818c */
  goto L_7e818c;
L_7e818a: /* 7e818a: xor esi, esi */
  esi = 0;
L_7e818c: /* 7e818c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e818e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7e8195: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e8197: /* 7e8197: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7e819d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e819f: je 0x7e81c1 */
  if (zf) goto L_7e81c1;
L_7e81a1: /* 7e81a1: fild dword ptr [eax + 0x184] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 7e81a7: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e81aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e81ab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 7e81b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e81b2: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7e81b5: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e81bb: call dword ptr [0xcfaa70] */
  esp -= 4; W32(esp, 0x7e81c1u); SPILL(); f_4e12e9(); if (g_unwind) return; /* Core!??YFRotator@@QAE?AV0@ABV0@@Z */ RELOAD();
L_7e81c1: /* 7e81c1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7e81c7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e81ca: jne 0x7e81f0 */
  if (!zf) goto L_7e81f0;
L_7e81cc: /* 7e81cc: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 7e81d2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e81d4: mov eax, dword ptr [ebx + 0x184] */
  eax = R32((uint32_t)(ebx + 0x184u));
/* 7e81da: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 7e81e0: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e81e2: /* 7e81e2: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7e81e5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7e81eau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7e81ea: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
L_7e81f0: /* 7e81f0: fld dword ptr [ebp - 0x1bc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe44u)); FPUSH(v); }
/* 7e81f6: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e81fc: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 7e8202: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8208: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e820a: fld dword ptr [ebp - 0x1c0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe40u)); FPUSH(v); }
/* 7e8210: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e8216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8218: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 7e821e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8220: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 7e8226: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8228: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e822b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 7e8231: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8233: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 7e8239: fld dword ptr [ebp - 0x1c8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe38u)); FPUSH(v); }
/* 7e823f: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8245: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 7e824b: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8253: fld dword ptr [ebp - 0x1cc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe34u)); FPUSH(v); }
/* 7e8259: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e825f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8261: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 7e8267: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8269: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 7e826f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8271: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7e8274: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 7e827a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e827c: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 7e8282: fld dword ptr [ebp - 0x1d4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe2cu)); FPUSH(v); }
/* 7e8288: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e828e: fld dword ptr [ebp - 0x1d0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe30u)); FPUSH(v); }
/* 7e8294: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e829a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e829c: fld dword ptr [ebp - 0x1d8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe28u)); FPUSH(v); }
/* 7e82a2: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e82a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e82aa: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 7e82b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82b2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82b5: fld dword ptr [ebp - 0x1a4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe5cu)); FPUSH(v); }
/* 7e82bb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82bd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e82c0: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 7e82c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82c8: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 7e82ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82d3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82d5: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e82dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e82df: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82e2: fld dword ptr [ebp - 0x200] */
  { double v = F32((uint32_t)(ebp + 0xfffffe00u)); FPUSH(v); }
/* 7e82e8: fadd dword ptr [ebp - 0x1f4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe0cu)));
/* 7e82ee: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 7e82f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82f6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82fa: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82fd: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7e8300: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e8303: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 7e8309: fadd dword ptr [ebp - 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdf4u)));
/* 7e830f: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 7e8315: fsub dword ptr [ebx + 0x210] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x210u)));
/* 7e831b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7e831e: fsub dword ptr [ebx + 0x20c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8324: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 7e832a: fsub dword ptr [ebx + 0x208] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x208u)));
/* 7e8330: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 7e8336: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7e833c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 7e8342: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 7e8348: mov edx, dword ptr [ebp - 0xf4] */
  edx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 7e834e: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 7e8354: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e8357: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e835a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_7e835d: /* 7e835d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e8360: mov esi, dword ptr [ebp - 0xd4] */
  esi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7e8366: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e8369: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e836c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e836f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8370: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e8373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8375: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e8378: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e837a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e837d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e8385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8386: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7e838c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e838f: mov eax, esp */
  eax = esp;
/* 7e8391: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 7e8397: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e8399: mov esi, dword ptr [ebp - 0xd0] */
  esi = R32((uint32_t)(ebp + 0xffffff30u));
/* 7e839f: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 7e83a5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83a8: mov esi, dword ptr [ebp - 0xcc] */
  esi = R32((uint32_t)(ebp + 0xffffff34u));
/* 7e83ae: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83b1: mov esi, dword ptr [ebp - 0xe0] */
  esi = R32((uint32_t)(ebp + 0xffffff20u));
/* 7e83b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e83ba: mov eax, esp */
  eax = esp;
/* 7e83bc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e83be: mov esi, dword ptr [ebp - 0xdc] */
  esi = R32((uint32_t)(ebp + 0xffffff24u));
/* 7e83c4: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83c7: mov esi, dword ptr [ebp - 0xd8] */
  esi = R32((uint32_t)(ebp + 0xffffff28u));
/* 7e83cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e83ce: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83d1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e83d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e83d7: /* 7e83d7: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83da: jne 0x7e86c3 */
  if (!zf) goto L_7e86c3;
L_7e83e0: /* 7e83e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e83e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e83e4: mov ecx, ebx */
  ecx = ebx;
/* 7e83e6: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e83ebu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e83eb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83ed: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e83f3: /* 7e83f3: cmp dword ptr [ebx + 0x280], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x280u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83f9: mov dword ptr [ebp - 0xc8], edi */
  W32((uint32_t)(ebp + 0xffffff38u), edi);
/* 7e83ff: mov dword ptr [ebp - 0xc4], edi */
  W32((uint32_t)(ebp + 0xffffff3cu), edi);
/* 7e8405: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e840f: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e8419: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e8423: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e842d: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e8437: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e8441: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* 7e8447: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e8451: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e845b: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 7e8461: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8467: /* 7e8467: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8469: mov ecx, ebx */
  ecx = ebx;
/* 7e846b: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x7e8471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8471: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8473: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8479: /* 7e8479: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e847b: mov ecx, ebx */
  ecx = ebx;
/* 7e847d: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8483u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8483: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e8486: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e848c: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e8492: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e8498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8499: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e849b: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7e84a1: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 7e84a7: mov edi, dword ptr [ebp - 0x108] */
  edi = R32((uint32_t)(ebp + 0xfffffef8u));
/* 7e84ad: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7e84b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84b6: mov ecx, esp */
  ecx = esp;
/* 7e84b8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84ba: mov edi, dword ptr [ebp - 0x104] */
  edi = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7e84c0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84c3: mov edi, dword ptr [ebp - 0x100] */
  edi = R32((uint32_t)(ebp + 0xffffff00u));
/* 7e84c9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e84cc: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e84d2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e84d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84d7: mov ecx, esp */
  ecx = esp;
/* 7e84d9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84db: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e84de: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e84e1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e84e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e84e8: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e84ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e84ef: mov ecx, eax */
  ecx = eax;
/* 7e84f1: call dword ptr [esi + 0x68] */
  { uint32_t t = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, 0x7e84f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e84f4: jmp 0x7e8560 */
  goto L_7e8560;
L_7e84f6: /* 7e84f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e84f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e84fb: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8501: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7e8507: mov ecx, dword ptr [ebx + 0x2d4] */
  ecx = R32((uint32_t)(ebx + 0x2d4u));
/* 7e850d: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7e8513: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7e8516: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e8519: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e851c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e851d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8520: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e8522: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8525: mov ecx, esp */
  ecx = esp;
/* 7e8527: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e8529: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e852c: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e852f: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8532: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e8535: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8538: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7e853e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e8540: mov esi, esp */
  esi = esp;
/* 7e8542: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e8544: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8547: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e854a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e854d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7e8550: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8554: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e855a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e855b: mov ecx, eax */
  ecx = eax;
/* 7e855d: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7e8560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e8560: /* 7e8560: xor edx, edx */
  edx = 0;
/* 7e8562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8564: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e8567: mov eax, edx */
  eax = edx;
/* 7e8569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e856b: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8571: /* 7e8571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8574: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e8575: call 0x6ccb53 */
  esp -= 4; W32(esp, 0x7e857au); SPILL(); f_6ccb53(); if (g_unwind) return; RELOAD();
/* 7e857a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e857c: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8582: /* 7e8582: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8585: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7e858b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8590: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e8593: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e8595: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7e8598: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e859b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e859e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7e85a1: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e85a4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e85a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e85aa: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e85ad: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e85b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e85b4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e85b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e85ba: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e85bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e85c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e85c3: test byte ptr [edx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85ca: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85cc: /* 7e85cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e85cf: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7e85d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85d7: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85d9: /* 7e85d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e85db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e85dc: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7e85dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e85df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e85e2: /* 7e85e2: xor esi, esi */
  esi = 0;
L_7e85e4: /* 7e85e4: cmp esi, dword ptr [edx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e85ea: jge 0x7e8679 */
  if ((sf == of)) goto L_7e8679;
L_7e85f0: /* 7e85f0: mov ecx, dword ptr [edx + 0x1fc] */
  ecx = R32((uint32_t)(edx + 0x1fcu));
/* 7e85f6: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7e85f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85fb: je 0x7e8673 */
  if (zf) goto L_7e8673;
L_7e85fd: /* 7e85fd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e8600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8602: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8608: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e860b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e860e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e8610: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8616: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e8618: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e861b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e861d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8625: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 7e862b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e862c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e862f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8632: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e8638: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7e863a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e863d: mov edi, esp */
  edi = esp;
/* 7e863f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e8641: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8644: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 7e8647: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e864a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e864d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 7e8650: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8653: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8656: mov ecx, esp */
  ecx = esp;
/* 7e8658: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e865a: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e865d: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e8660: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8663: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e8666: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e866a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e8670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8670: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e8673: /* 7e8673: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e8674: jmp 0x7e85e4 */
  goto L_7e85e4;
L_7e8679: /* 7e8679: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e867f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8685u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8685: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7e868b: mov eax, dword ptr [0xce8480] */
  eax = R32((uint32_t)(0xce8480u));
/* 7e8690: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7e8693: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8695: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8697: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e869a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e869c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e869e: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86a4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86a8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86aeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e86b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e86b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e86b3: xor eax, eax */
  eax = 0;
/* 7e86b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e86bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e86bd: mov esp, ebp */
  esp = ebp;
/* 7e86bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e86c0: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e86c3: /* 7e86c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86c6: /* 7e86c6: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7e86c9: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e86ce: /* 7e86ce: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86e1: /* 7e86e1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e86e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86e6: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86ec: /* 7e86ec: test byte ptr [eax + 0x82], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x82u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86f3: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86f9: /* 7e86f9: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 7e86fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86fe: je 0x7e876d */
  if (zf) goto L_7e876d;
L_7e8700: /* 7e8700: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8702: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e8705: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e870bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e870b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e870f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8712: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8718: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e871eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e871e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8720: je 0x7e876a */
  if (zf) goto L_7e876a;
L_7e8722: /* 7e8722: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8725: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 7e8728: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7e872e: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e8734: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8739: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7e873f: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8745: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7e8748: fld dword ptr [ecx - 0x98] */
  { double v = F32((uint32_t)(ecx + 0xffffff68u)); FPUSH(v); }
/* 7e874e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7e8750: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8753: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8758: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e875b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e875e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e8761: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8764: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8767: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e876a: /* 7e876a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e876d: /* 7e876d: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8773: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8776: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e877cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e877c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e877e: je 0x7e8788 */
  if (zf) goto L_7e8788;
L_7e8780: /* 7e8780: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8783: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e8788u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
L_7e8788: /* 7e8788: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e878b: /* 7e878b: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8792: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e8794: /* 7e8794: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8797: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e879d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e879f: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e87a1: /* 7e87a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e87a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e87a4: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e87a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e87aa: /* 7e87aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e87ac: mov ecx, eax */
  ecx = eax;
/* 7e87ae: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x7e87b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87b4: mov esi, eax */
  esi = eax;
/* 7e87b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87b8: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e87ba: /* 7e87ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87bb: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7e87c0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7e87c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87c2: jne 0x7e8829 */
  if (!zf) goto L_7e8829;
L_7e87c4: /* 7e87c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87c7: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87ce: jne 0x7e882c */
  if (!zf) goto L_7e882c;
L_7e87d0: /* 7e87d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87d1: call 0x928730 */
  esp -= 4; W32(esp, 0x7e87d6u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 7e87d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87d9: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 7e87df: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7e87e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87e4: mov edi, esp */
  edi = esp;
/* 7e87e6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e87e8: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7e87eb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e87ee: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e87f1: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e87f4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e87fa: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e87fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87ff: mov edx, esp */
  edx = esp;
/* 7e8801: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7e8803: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8806: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e8809: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7e880c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e880d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e8810: call 0x6c8eae */
  esp -= 4; W32(esp, 0x7e8815u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 7e8815: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e8818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8819: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7e881eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7e881e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8821: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e8823: /* 7e8823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8824: call 0x928630 */
  esp -= 4; W32(esp, 0x7e8829u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_7e8829: /* 7e8829: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e882c: /* 7e882c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e882f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8831: jne 0x7e892d */
  if (!zf) goto L_7e892d;
L_7e8837: /* 7e8837: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e883a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7e883d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e883f: je 0x7e887e */
  if (zf) goto L_7e887e;
L_7e8841: /* 7e8841: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e884b: jne 0x7e887e */
  if (!zf) goto L_7e887e;
L_7e884d: /* 7e884d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e884e: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e8853u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e8853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8855: jne 0x7e887b */
  if (!zf) goto L_7e887b;
L_7e8857: /* 7e8857: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e885a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7e885d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8863: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e8869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8869: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e886c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e886f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 7e8872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8875: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e887b: /* 7e887b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e887e: /* 7e887e: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7e8884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8886: jne 0x7e8896 */
  if (!zf) goto L_7e8896;
L_7e8888: /* 7e8888: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e888e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8890: je 0x7e8896 */
  if (zf) goto L_7e8896;
L_7e8892: /* 7e8892: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8894: jne 0x7e88ef */
  if (!zf) goto L_7e88ef;
L_7e8896: /* 7e8896: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e8899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e88a0: /* 7e88a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88a2: je 0x7e88ef */
  if (zf) goto L_7e88ef;
L_7e88a4: /* 7e88a4: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 7e88a7: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e88aa: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e88ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e88af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e88b2: jp 0x7e88ef */
  if (pf) goto L_7e88ef;
L_7e88b4: /* 7e88b4: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e88b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88b9: je 0x7e88cb */
  if (zf) goto L_7e88cb;
L_7e88bb: /* 7e88bb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88bf: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e88c4u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e88c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88c6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88c8: /* 7e88c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88cb: /* 7e88cb: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e88ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e88cf: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e88d4u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e88d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88d6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88d8: /* 7e88d8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e88de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e88e0: je 0x7e88eb */
  if (zf) goto L_7e88eb;
L_7e88e2: /* 7e88e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88e3: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7e88e8u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7e88e8: /* 7e88e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88eb: /* 7e88eb: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e88ed: jmp 0x7e88a0 */
  goto L_7e88a0;
L_7e88ef: /* 7e88ef: xor esi, esi */
  esi = 0;
L_7e88f1: /* 7e88f1: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e88f7: jge 0x7e892d */
  if ((sf == of)) goto L_7e892d;
L_7e88f9: /* 7e88f9: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e88ff: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7e8902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8904: je 0x7e892a */
  if (zf) goto L_7e892a;
L_7e8906: /* 7e8906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8909: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7e890eu); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7e890e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8913: jne 0x7e892a */
  if (!zf) goto L_7e892a;
L_7e8915: /* 7e8915: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e891b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e891c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e891f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8920: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e8925u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e8925: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8928: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892a: /* 7e892a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e892b: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892d: /* 7e892d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e8930: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8935: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e893bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e893b: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e8941: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8947u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8947: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e894a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e894c: jne 0x7e8956 */
  if (!zf) goto L_7e8956;
L_7e894e: /* 7e894e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8951: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e8956u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e8956: /* 7e8956: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e895c: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e8962: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e8965: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8969: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e896c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e896e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8970: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e8973: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 7e8976: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e897c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e897e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8981: jne 0x7e7ca6 */
  if (!zf) goto L_7e7ca6;
L_7e8987: /* 7e8987: jmp 0x7e771b */
  goto L_7e771b;
}

void f_7e7890(void) {
  LOAD_REGS();
  goto L_7e7890;
L_7e771b: /* 7e771b: mov eax, 1 */
  eax = 0x1u;
/* 7e7720: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e772a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e772b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e772c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e772d: mov esp, ebp */
  esp = ebp;
/* 7e772f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7730: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7890: /* 7e7890: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e7893: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7e7899u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7e7899: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7e789c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e789f: mov edx, ecx */
  edx = ecx;
/* 7e78a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e78a2: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 7e78a8: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7e78ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e78ac: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e78af: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x7e78b5u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 7e78b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e78b7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e78ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e78bd: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7e78c0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e78c3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78c5: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e78c8: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e78cb: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e78ce: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78d0: mov dword ptr [ebp - 0x38], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x40000000u);
/* 7e78d7: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e78da: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 7e78e0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78e2: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 7e78e5: mov dword ptr [ebp - 0x6c], 1 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x1u);
/* 7e78ec: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e78f2: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e78f5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7e78f7: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e78fa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7e78fd: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7e7900: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e7902: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 7e7905: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7908: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e790b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e790d: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7e7910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7913: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7915: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 7e791b: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7921: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 7e7924: mov eax, edx */
  eax = edx;
/* 7e7926: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7e7928: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e792b: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7e792e: jne 0x7e7939 */
  if (!zf) goto L_7e7939;
L_7e7930: /* 7e7930: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7933: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7939: /* 7e7939: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e793b: je 0x7e797a */
  if (zf) goto L_7e797a;
L_7e793d: /* 7e793d: cmp dword ptr [ecx + 0x54], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x54u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7940: je 0x7e7955 */
  if (zf) goto L_7e7955;
L_7e7942: /* 7e7942: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e7944: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x7e794au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e794a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e794c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e794f: jne 0x7e7ac7 */
  if (!zf) goto L_7e7ac7;
L_7e7955: /* 7e7955: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7958: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e795a: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7960: /* 7e7960: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7962: jne 0x7e797a */
  if (!zf) goto L_7e797a;
L_7e7964: /* 7e7964: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7969: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e796fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e796f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7971: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7974: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e797a: /* 7e797a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7e797d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e7983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7985: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7988: jnp 0x7e7ac7 */
  if (!pf) goto L_7e7ac7;
L_7e798e: /* 7e798e: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e7994: xor esi, esi */
  esi = 0;
/* 7e7996: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 7e7998: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e799a: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 7e799d: je 0x7e79a9 */
  if (zf) goto L_7e79a9;
L_7e799f: /* 7e799f: cmp dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e79a2: jne 0x7e79a6 */
  if (!zf) goto L_7e79a6;
L_7e79a4: /* 7e79a4: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_7e79a6: /* 7e79a6: or bl, 0x18 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7e79a9: /* 7e79a9: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7e79ac: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e79af: je 0x7e79b4 */
  if (zf) goto L_7e79b4;
L_7e79b1: /* 7e79b1: or bl, 0x86 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x86u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7e79b4: /* 7e79b4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e79b6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e79b9: je 0x7e79c0 */
  if (zf) goto L_7e79c0;
L_7e79bb: /* 7e79bb: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7e79be: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
L_7e79c0: /* 7e79c0: mov eax, dword ptr [ecx + 0x2d4] */
  eax = R32((uint32_t)(ecx + 0x2d4u));
/* 7e79c6: fld dword ptr [ecx + 0x2d8] */
  { double v = F32((uint32_t)(ecx + 0x2d8u)); FPUSH(v); }
/* 7e79cc: fld dword ptr [ecx + 0x2d4] */
  { double v = F32((uint32_t)(ecx + 0x2d4u)); FPUSH(v); }
/* 7e79d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e79d3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e79d6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7e79d9: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e79df: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 7e79e2: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7e79e5: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e79e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e79e9: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e79ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e79ed: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e79f0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e79f3: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e79f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e79f9: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 7e79fc: mov ecx, esp */
  ecx = esp;
/* 7e79fe: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7a00: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e7a02: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e7a05: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e7a08: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e7a0b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7a0e: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e7a11: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e7a13: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7a16: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e7a18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7a1b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7a1e: mov ecx, esp */
  ecx = esp;
/* 7e7a20: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e7a22: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7e7a25: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7a28: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e7a2b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7a2e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7a31: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7a34: mov ecx, esp */
  ecx = esp;
/* 7e7a36: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e7a38: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7a3b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e7a3e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7a41: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7a44: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7e7a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a4b: mov ecx, edx */
  ecx = edx;
/* 7e7a4d: call dword ptr [edi + 0xd8] */
  { uint32_t t = R32((uint32_t)(edi + 0xd8u)); esp -= 4; W32(esp, 0x7e7a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7a53: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7a56: test byte ptr [ecx + 0x88], 0x1c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x1cu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a5d: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7e7a60: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a62: /* 7e7a62: mov esi, eax */
  esi = eax;
/* 7e7a64: mov edi, 1 */
  edi = 0x1u;
/* 7e7a69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e7a70: /* 7e7a70: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a72: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a74: /* 7e7a74: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e7a77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a79: je 0x7e7a8f */
  if (zf) goto L_7e7a8f;
L_7e7a7b: /* 7e7a7b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e7a7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7a7f: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a84u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a86: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7a8c: /* 7e7a8c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7a8f: /* 7e7a8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a90: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7e7a93: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a98u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a9a: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7aa0: /* 7e7aa0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e7aa3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7aa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7aa7: mov dword ptr [ebp - 0x8c], edi */
  W32((uint32_t)(ebp + 0xffffff74u), edi);
/* 7e7aad: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e7ab2u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e7ab2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ab4: je 0x7e7b40 */
  if (zf) goto L_7e7b40;
L_7e7aba: /* 7e7aba: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7e7abd: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e7ac2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ac4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7ac7: /* 7e7ac7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e7aca: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7e7acd: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7e7ad0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7e7ad3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7e7ad6: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e7ad9: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7adc: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7adf: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7e7ae5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7ae7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7aea: jp 0x7e7bbd */
  if (pf) goto L_7e7bbd;
L_7e7af0: /* 7e7af0: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7af3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7af5: jne 0x7e7bbd */
  if (!zf) goto L_7e7bbd;
L_7e7afb: /* 7e7afb: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7e7afe: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7b01: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7e7b04: fcom dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b07: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7b09: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7b0c: jp 0x7e7b4a */
  if (pf) goto L_7e7b4a;
L_7e7b0e: /* 7e7b0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7e7b15: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7b17: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b1a: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7e7b21: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7b24: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7e7b2b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e7b2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7b31: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7e7b34: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7e7b37: mov dword ptr [edx + 0x24], 0 */
  W32((uint32_t)(edx + 0x24u), 0x0u);
/* 7e7b3e: jmp 0x7e7bba */
  goto L_7e7bba;
L_7e7b40: /* 7e7b40: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e7b42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7b45: jmp 0x7e7a70 */
  goto L_7e7a70;
L_7e7b4a: /* 7e7b4a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e7b4d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b50: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e7b53: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b56: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7e7b59: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e7b5c: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b5f: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 7e7b65: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7b68: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 7e7b6b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b6d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7b70: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 7e7b73: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b75: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e7b78: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 7e7b7b: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e7b81: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 7e7b84: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e7b87: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 7e7b8a: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7b90: fsub dword ptr [ebp - 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 7e7b96: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7b99: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b9c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7e7b9f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7ba2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7ba5: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7ba8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7bab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7bae: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7e7bb1: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7bb4: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7bb7: fstp dword ptr [edx + 0x24] */
  WF32((uint32_t)(edx + 0x24u), ST0); FPOP();
L_7e7bba: /* 7e7bba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bbd: /* 7e7bbd: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e7bc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bc2: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bc8: /* 7e7bc8: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bcd: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bd3: /* 7e7bd3: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bda: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7be0: /* 7e7be0: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 7e7be3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7be5: je 0x7e7bf6 */
  if (zf) goto L_7e7bf6;
L_7e7be7: /* 7e7be7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7be9: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x7e7befu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7bef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bf1: jne 0x7e7c18 */
  if (!zf) goto L_7e7c18;
L_7e7bf3: /* 7e7bf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bf6: /* 7e7bf6: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7bf9: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bfb: je 0x7e7c1b */
  if (zf) goto L_7e7c1b;
L_7e7bfd: /* 7e7bfd: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bff: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7c05: /* 7e7c05: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7c0a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e7c10u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e7c10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c12: jne 0x7e7cbb */
  if (!zf) goto L_7e7cbb;
L_7e7c18: /* 7e7c18: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7c1b: /* 7e7c1b: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 7e7c1e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7c21: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 7e7c27: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7e7c2a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7c2d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7c30: fadd dword ptr [ecx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x174u)));
/* 7e7c36: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7c38: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7c3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7c3c: fadd dword ptr [ecx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x170u)));
/* 7e7c42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c45: mov esi, esp */
  esi = esp;
/* 7e7c47: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c49: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 7e7c4c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7c4f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c52: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 7e7c55: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7c58: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c5b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7c5e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7c61: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c64: mov esi, esp */
  esi = esp;
/* 7e7c66: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c68: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7c6b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c6e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7c71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7c72: mov ecx, eax */
  ecx = eax;
/* 7e7c74: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c77: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x7e7c7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7c7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c7f: je 0x7e7cbb */
  if (zf) goto L_7e7cbb;
L_7e7c81: /* 7e7c81: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e7c86: mov ecx, dword ptr [0xce8480] */
  ecx = R32((uint32_t)(0xce8480u));
/* 7e7c8c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7e7c8f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e7c91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7c93: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7c96: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e7c98: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7c9a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e7ca0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e7ca6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
L_7e7ca6: /* 7e7ca6: xor eax, eax */
  eax = 0;
/* 7e7ca8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7cab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e7cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7cb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e7cb5: mov esp, ebp */
  esp = ebp;
/* 7e7cb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7cb8: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7cbb: /* 7e7cbb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cbe: /* 7e7cbe: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cc5: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cc7: /* 7e7cc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7cca: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* 7e7cd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cd2: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cd4: /* 7e7cd4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7cd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7cd7: mov ecx, eax */
  ecx = eax;
/* 7e7cd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e7cdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7cdc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cdf: /* 7e7cdf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7ce2: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e7ce8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7cea: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e7cec: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7cef: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7cf2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7cf5: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7cf8: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e7cfb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7cfe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d01: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7d06: mov ecx, eax */
  ecx = eax;
/* 7e7d08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7d0a: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7e7d0d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7d10: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7e7d13: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7d16: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7e7d19: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7e7d1c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e7d1e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e7d21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e7d24: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7e7d27: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e7d2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d2d: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* 7e7d33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e7d35: jle 0x7e86e1 */
  if ((zf || sf != of)) goto L_7e86e1;
L_7e7d3b: /* 7e7d3b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e7d3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d40: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e7d46: /* 7e7d46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e7d4f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7d55u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7d55: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d59: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* 7e7d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d60: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d66: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d69: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d6fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d6f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d75: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 7e7d78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7d79: lea eax, [ebp - 0x1b4] */
  eax = (uint32_t)(ebp + 0xfffffe4cu);
/* 7e7d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d80: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d83: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d89u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7d8c: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d93: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d96: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e7d9cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d9e: je 0x7e7e07 */
  if (zf) goto L_7e7e07;
L_7e7da0: /* 7e7da0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7da3: mov edx, dword ptr [eax + 0x184] */
  edx = R32((uint32_t)(eax + 0x184u));
/* 7e7da9: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e7dac: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7db2: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7db8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dba: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e7dbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dbe: mov edx, dword ptr [eax + 0x180] */
  edx = R32((uint32_t)(eax + 0x180u));
/* 7e7dc4: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7dca: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7dd0: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dd3: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* 7e7dd9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e7ddc: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7de2: and eax, 0xfffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e7de7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dea: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e7df0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7df6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7df6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e7df8: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7e7dfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7dfe: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 7e7e01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7e04: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_7e7e07: /* 7e7e07: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7e0a: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7e7e10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7e12: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7e7e15: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7e18: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7e1b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e7e1e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7e21: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e7e24: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7e27: mov dword ptr [ebp - 0x154], edx */
  W32((uint32_t)(ebp + 0xfffffeacu), edx);
/* 7e7e2d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7e30: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 7e7e3a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7e7e44: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7e7e4e: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 7e7e58: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7e7e62: mov dword ptr [ebp - 0x170], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x3f800000u);
/* 7e7e6c: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7e7e76: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7e7e80: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 7e7e8a: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7e7e94: mov dword ptr [ebp - 0x15c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x3f800000u);
/* 7e7e9e: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7e7ea8: mov dword ptr [ebp - 0x150], ecx */
  W32((uint32_t)(ebp + 0xfffffeb0u), ecx);
/* 7e7eae: mov dword ptr [ebp - 0x14c], edx */
  W32((uint32_t)(ebp + 0xfffffeb4u), edx);
/* 7e7eb4: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 7e7ebe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7ec3: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7ec9: lea edi, [ebp - 0x2e4] */
  edi = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7ecf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ed1: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7ed6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7edb: mov ecx, esp */
  ecx = esp;
/* 7e7edd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7edf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7ee2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7ee5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e7ee8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7eeb: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7ef1: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7e7ef6u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7e7ef6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ef9: mov edi, esp */
  edi = esp;
/* 7e7efb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7f00: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f06: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7f08: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e7f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7f0f: mov ecx, eax */
  ecx = eax;
/* 7e7f11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e7f15: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e7f1bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e7f1b: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7f21: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e7f25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f2b: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7f31: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e7f35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f3b: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f41: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e7f45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7f4e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e7f55: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e7f60: /* 7e7f60: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7f63: cmp edx, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7f69: jge 0x7e86ce */
  if ((sf == of)) goto L_7e86ce;
L_7e7f6f: /* 7e7f6f: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7f75: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 7e7f78: xor edi, edi */
  edi = 0;
/* 7e7f7a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7f7c: je 0x7e86c6 */
  if (zf) goto L_7e86c6;
L_7e7f82: /* 7e7f82: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7e7f88: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7f8b: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 7e7f8e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 7e7f91: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 7e7f94: mov dword ptr [ebp - 0x138], edi */
  W32((uint32_t)(ebp + 0xfffffec8u), edi);
/* 7e7f9a: mov dword ptr [ebp - 0x134], edi */
  W32((uint32_t)(ebp + 0xfffffeccu), edi);
/* 7e7fa0: mov dword ptr [ebp - 0x130], edi */
  W32((uint32_t)(ebp + 0xfffffed0u), edi);
/* 7e7fa6: mov dword ptr [ebp - 0x12c], edi */
  W32((uint32_t)(ebp + 0xfffffed4u), edi);
/* 7e7fac: mov dword ptr [ebp - 0x128], edi */
  W32((uint32_t)(ebp + 0xfffffed8u), edi);
/* 7e7fb2: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 7e7fb8: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 7e7fbe: mov dword ptr [ebp - 0x11c], edi */
  W32((uint32_t)(ebp + 0xfffffee4u), edi);
/* 7e7fc4: mov dword ptr [ebp - 0x118], edi */
  W32((uint32_t)(ebp + 0xfffffee8u), edi);
/* 7e7fca: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 7e7fd4: mov dword ptr [ebp - 0x110], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffef0u), 0xffffffffu);
/* 7e7fde: mov dword ptr [ebp - 0x10c], edi */
  W32((uint32_t)(ebp + 0xfffffef4u), edi);
/* 7e7fe4: je 0x7e8111 */
  if (zf) goto L_7e8111;
L_7e7fea: /* 7e7fea: test byte ptr [ebx + 0x88], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ff1: jne 0x7e8111 */
  if (!zf) goto L_7e8111;
L_7e7ff7: /* 7e7ff7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ffa: mov edi, esp */
  edi = esp;
/* 7e7ffc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e8001: lea esi, [ebp - 0x298] */
  esi = (uint32_t)(ebp + 0xfffffd68u);
/* 7e8007: lea eax, [ebp - 0x258] */
  eax = (uint32_t)(ebp + 0xfffffda8u);
/* 7e800d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e800f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8010: lea ecx, [ebx + 0x220] */
  ecx = (uint32_t)(ebx + 0x220u);
/* 7e8016: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e801cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e801c: mov ecx, dword ptr [ebp - 0x228] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd8u));
/* 7e8022: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 7e8028: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 7e802e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7e8031: lea ecx, [ebp - 0x354] */
  ecx = (uint32_t)(ebp + 0xfffffcacu);
/* 7e8037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8038: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e803e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7e8042: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e8045: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e8048: call dword ptr [0xcfaa78] */
  esp -= 4; W32(esp, 0x7e804eu); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* 7e804e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e8054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8055: lea edx, [ebp - 0x384] */
  edx = (uint32_t)(ebp + 0xfffffc7cu);
/* 7e805b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e805c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e805f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x7e8065u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e8065: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7e806b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e806c: mov ecx, eax */
  ecx = eax;
/* 7e806e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x7e8074u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 7e8074: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e8077: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 7e807d: mov esi, dword ptr [ebp - 0x98] */
  esi = R32((uint32_t)(ebp + 0xffffff68u));
/* 7e8083: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e8086: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8089: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 7e808f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8091: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e8094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8096: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 7e809c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e809e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a2: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e80a8: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 7e80ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e80af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80b2: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7e80b8: mov eax, esp */
  eax = esp;
/* 7e80ba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80bc: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 7e80c2: mov esi, dword ptr [ebp - 0x94] */
  esi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7e80c8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80cb: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 7e80d1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80d4: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* 7e80da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80dd: mov eax, esp */
  eax = esp;
/* 7e80df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80e1: mov esi, dword ptr [ebp - 0xe8] */
  esi = R32((uint32_t)(ebp + 0xffffff18u));
/* 7e80e7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80ea: mov esi, dword ptr [ebp - 0xe4] */
  esi = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7e80f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e80f1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e80fa: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e8100: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e8104: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e810au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e810a: xor edi, edi */
  edi = 0;
/* 7e810c: jmp 0x7e83d7 */
  goto L_7e83d7;
L_7e8111: /* 7e8111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8112: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e8115: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e811bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e811b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e811e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e811f: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7e8125: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e812bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e812b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e812d: je 0x7e83d7 */
  if (zf) goto L_7e83d7;
L_7e8133: /* 7e8133: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 7e8136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e8137: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7e813d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e813e: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7e8144: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x7e814au); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e814a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e814d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8154: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8157: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e815du); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e815d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e815f: je 0x7e835d */
  if (zf) goto L_7e835d;
L_7e8165: /* 7e8165: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8167: mov ecx, ebx */
  ecx = ebx;
/* 7e8169: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x7e816fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e816f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8171: je 0x7e818a */
  if (zf) goto L_7e818a;
L_7e8173: /* 7e8173: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7e8178: mov ecx, ebx */
  ecx = ebx;
/* 7e817a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e8180u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e8180: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e8182: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e8184: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e8186: mov esi, eax */
  esi = eax;
/* 7e8188: jmp 0x7e818c */
  goto L_7e818c;
L_7e818a: /* 7e818a: xor esi, esi */
  esi = 0;
L_7e818c: /* 7e818c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e818e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7e8195: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e8197: /* 7e8197: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7e819d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e819f: je 0x7e81c1 */
  if (zf) goto L_7e81c1;
L_7e81a1: /* 7e81a1: fild dword ptr [eax + 0x184] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 7e81a7: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e81aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e81ab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 7e81b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e81b2: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7e81b5: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e81bb: call dword ptr [0xcfaa70] */
  esp -= 4; W32(esp, 0x7e81c1u); SPILL(); f_4e12e9(); if (g_unwind) return; /* Core!??YFRotator@@QAE?AV0@ABV0@@Z */ RELOAD();
L_7e81c1: /* 7e81c1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7e81c7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e81ca: jne 0x7e81f0 */
  if (!zf) goto L_7e81f0;
L_7e81cc: /* 7e81cc: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 7e81d2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e81d4: mov eax, dword ptr [ebx + 0x184] */
  eax = R32((uint32_t)(ebx + 0x184u));
/* 7e81da: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 7e81e0: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e81e2: /* 7e81e2: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7e81e5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7e81eau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7e81ea: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
L_7e81f0: /* 7e81f0: fld dword ptr [ebp - 0x1bc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe44u)); FPUSH(v); }
/* 7e81f6: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e81fc: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 7e8202: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8208: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e820a: fld dword ptr [ebp - 0x1c0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe40u)); FPUSH(v); }
/* 7e8210: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e8216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8218: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 7e821e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8220: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 7e8226: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8228: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e822b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 7e8231: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8233: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 7e8239: fld dword ptr [ebp - 0x1c8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe38u)); FPUSH(v); }
/* 7e823f: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8245: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 7e824b: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8253: fld dword ptr [ebp - 0x1cc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe34u)); FPUSH(v); }
/* 7e8259: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e825f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8261: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 7e8267: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8269: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 7e826f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8271: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7e8274: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 7e827a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e827c: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 7e8282: fld dword ptr [ebp - 0x1d4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe2cu)); FPUSH(v); }
/* 7e8288: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e828e: fld dword ptr [ebp - 0x1d0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe30u)); FPUSH(v); }
/* 7e8294: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e829a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e829c: fld dword ptr [ebp - 0x1d8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe28u)); FPUSH(v); }
/* 7e82a2: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e82a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e82aa: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 7e82b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82b2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82b5: fld dword ptr [ebp - 0x1a4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe5cu)); FPUSH(v); }
/* 7e82bb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82bd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e82c0: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 7e82c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82c8: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 7e82ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82d3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82d5: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e82dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e82df: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82e2: fld dword ptr [ebp - 0x200] */
  { double v = F32((uint32_t)(ebp + 0xfffffe00u)); FPUSH(v); }
/* 7e82e8: fadd dword ptr [ebp - 0x1f4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe0cu)));
/* 7e82ee: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 7e82f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82f6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82fa: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82fd: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7e8300: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e8303: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 7e8309: fadd dword ptr [ebp - 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdf4u)));
/* 7e830f: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 7e8315: fsub dword ptr [ebx + 0x210] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x210u)));
/* 7e831b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7e831e: fsub dword ptr [ebx + 0x20c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8324: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 7e832a: fsub dword ptr [ebx + 0x208] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x208u)));
/* 7e8330: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 7e8336: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7e833c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 7e8342: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 7e8348: mov edx, dword ptr [ebp - 0xf4] */
  edx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 7e834e: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 7e8354: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e8357: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e835a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_7e835d: /* 7e835d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e8360: mov esi, dword ptr [ebp - 0xd4] */
  esi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7e8366: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e8369: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e836c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e836f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8370: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e8373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8375: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e8378: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e837a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e837d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e8385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8386: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7e838c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e838f: mov eax, esp */
  eax = esp;
/* 7e8391: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 7e8397: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e8399: mov esi, dword ptr [ebp - 0xd0] */
  esi = R32((uint32_t)(ebp + 0xffffff30u));
/* 7e839f: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 7e83a5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83a8: mov esi, dword ptr [ebp - 0xcc] */
  esi = R32((uint32_t)(ebp + 0xffffff34u));
/* 7e83ae: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83b1: mov esi, dword ptr [ebp - 0xe0] */
  esi = R32((uint32_t)(ebp + 0xffffff20u));
/* 7e83b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e83ba: mov eax, esp */
  eax = esp;
/* 7e83bc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e83be: mov esi, dword ptr [ebp - 0xdc] */
  esi = R32((uint32_t)(ebp + 0xffffff24u));
/* 7e83c4: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83c7: mov esi, dword ptr [ebp - 0xd8] */
  esi = R32((uint32_t)(ebp + 0xffffff28u));
/* 7e83cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e83ce: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83d1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e83d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e83d7: /* 7e83d7: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83da: jne 0x7e86c3 */
  if (!zf) goto L_7e86c3;
L_7e83e0: /* 7e83e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e83e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e83e4: mov ecx, ebx */
  ecx = ebx;
/* 7e83e6: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e83ebu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e83eb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83ed: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e83f3: /* 7e83f3: cmp dword ptr [ebx + 0x280], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x280u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83f9: mov dword ptr [ebp - 0xc8], edi */
  W32((uint32_t)(ebp + 0xffffff38u), edi);
/* 7e83ff: mov dword ptr [ebp - 0xc4], edi */
  W32((uint32_t)(ebp + 0xffffff3cu), edi);
/* 7e8405: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e840f: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e8419: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e8423: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e842d: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e8437: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e8441: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* 7e8447: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e8451: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e845b: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 7e8461: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8467: /* 7e8467: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8469: mov ecx, ebx */
  ecx = ebx;
/* 7e846b: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x7e8471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8471: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8473: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8479: /* 7e8479: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e847b: mov ecx, ebx */
  ecx = ebx;
/* 7e847d: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8483u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8483: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e8486: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e848c: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e8492: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e8498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8499: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e849b: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7e84a1: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 7e84a7: mov edi, dword ptr [ebp - 0x108] */
  edi = R32((uint32_t)(ebp + 0xfffffef8u));
/* 7e84ad: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7e84b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84b6: mov ecx, esp */
  ecx = esp;
/* 7e84b8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84ba: mov edi, dword ptr [ebp - 0x104] */
  edi = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7e84c0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84c3: mov edi, dword ptr [ebp - 0x100] */
  edi = R32((uint32_t)(ebp + 0xffffff00u));
/* 7e84c9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e84cc: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e84d2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e84d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84d7: mov ecx, esp */
  ecx = esp;
/* 7e84d9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84db: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e84de: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e84e1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e84e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e84e8: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e84ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e84ef: mov ecx, eax */
  ecx = eax;
/* 7e84f1: call dword ptr [esi + 0x68] */
  { uint32_t t = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, 0x7e84f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e84f4: jmp 0x7e8560 */
  goto L_7e8560;
L_7e84f6: /* 7e84f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e84f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e84fb: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8501: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7e8507: mov ecx, dword ptr [ebx + 0x2d4] */
  ecx = R32((uint32_t)(ebx + 0x2d4u));
/* 7e850d: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7e8513: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7e8516: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e8519: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e851c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e851d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8520: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e8522: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8525: mov ecx, esp */
  ecx = esp;
/* 7e8527: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e8529: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e852c: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e852f: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8532: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e8535: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8538: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7e853e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e8540: mov esi, esp */
  esi = esp;
/* 7e8542: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e8544: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8547: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e854a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e854d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7e8550: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8554: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e855a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e855b: mov ecx, eax */
  ecx = eax;
/* 7e855d: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7e8560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e8560: /* 7e8560: xor edx, edx */
  edx = 0;
/* 7e8562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8564: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e8567: mov eax, edx */
  eax = edx;
/* 7e8569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e856b: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8571: /* 7e8571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8574: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e8575: call 0x6ccb53 */
  esp -= 4; W32(esp, 0x7e857au); SPILL(); f_6ccb53(); if (g_unwind) return; RELOAD();
/* 7e857a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e857c: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8582: /* 7e8582: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8585: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7e858b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8590: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e8593: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e8595: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7e8598: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e859b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e859e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7e85a1: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e85a4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e85a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e85aa: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e85ad: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e85b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e85b4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e85b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e85ba: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e85bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e85c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e85c3: test byte ptr [edx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85ca: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85cc: /* 7e85cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e85cf: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7e85d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85d7: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85d9: /* 7e85d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e85db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e85dc: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7e85dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e85df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e85e2: /* 7e85e2: xor esi, esi */
  esi = 0;
L_7e85e4: /* 7e85e4: cmp esi, dword ptr [edx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e85ea: jge 0x7e8679 */
  if ((sf == of)) goto L_7e8679;
L_7e85f0: /* 7e85f0: mov ecx, dword ptr [edx + 0x1fc] */
  ecx = R32((uint32_t)(edx + 0x1fcu));
/* 7e85f6: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7e85f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85fb: je 0x7e8673 */
  if (zf) goto L_7e8673;
L_7e85fd: /* 7e85fd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e8600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8602: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8608: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e860b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e860e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e8610: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8616: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e8618: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e861b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e861d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8625: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 7e862b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e862c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e862f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8632: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e8638: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7e863a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e863d: mov edi, esp */
  edi = esp;
/* 7e863f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e8641: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8644: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 7e8647: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e864a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e864d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 7e8650: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8653: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8656: mov ecx, esp */
  ecx = esp;
/* 7e8658: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e865a: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e865d: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e8660: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8663: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e8666: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e866a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e8670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8670: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e8673: /* 7e8673: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e8674: jmp 0x7e85e4 */
  goto L_7e85e4;
L_7e8679: /* 7e8679: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e867f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8685u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8685: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7e868b: mov eax, dword ptr [0xce8480] */
  eax = R32((uint32_t)(0xce8480u));
/* 7e8690: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7e8693: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8695: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8697: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e869a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e869c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e869e: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86a4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86a8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86aeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e86b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e86b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e86b3: xor eax, eax */
  eax = 0;
/* 7e86b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e86bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e86bd: mov esp, ebp */
  esp = ebp;
/* 7e86bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e86c0: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e86c3: /* 7e86c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86c6: /* 7e86c6: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7e86c9: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e86ce: /* 7e86ce: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86e1: /* 7e86e1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e86e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86e6: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86ec: /* 7e86ec: test byte ptr [eax + 0x82], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x82u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86f3: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86f9: /* 7e86f9: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 7e86fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86fe: je 0x7e876d */
  if (zf) goto L_7e876d;
L_7e8700: /* 7e8700: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8702: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e8705: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e870bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e870b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e870f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8712: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8718: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e871eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e871e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8720: je 0x7e876a */
  if (zf) goto L_7e876a;
L_7e8722: /* 7e8722: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8725: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 7e8728: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7e872e: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e8734: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8739: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7e873f: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8745: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7e8748: fld dword ptr [ecx - 0x98] */
  { double v = F32((uint32_t)(ecx + 0xffffff68u)); FPUSH(v); }
/* 7e874e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7e8750: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8753: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8758: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e875b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e875e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e8761: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8764: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8767: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e876a: /* 7e876a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e876d: /* 7e876d: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8773: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8776: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e877cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e877c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e877e: je 0x7e8788 */
  if (zf) goto L_7e8788;
L_7e8780: /* 7e8780: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8783: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e8788u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
L_7e8788: /* 7e8788: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e878b: /* 7e878b: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8792: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e8794: /* 7e8794: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8797: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e879d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e879f: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e87a1: /* 7e87a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e87a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e87a4: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e87a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e87aa: /* 7e87aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e87ac: mov ecx, eax */
  ecx = eax;
/* 7e87ae: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x7e87b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87b4: mov esi, eax */
  esi = eax;
/* 7e87b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87b8: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e87ba: /* 7e87ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87bb: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7e87c0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7e87c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87c2: jne 0x7e8829 */
  if (!zf) goto L_7e8829;
L_7e87c4: /* 7e87c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87c7: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87ce: jne 0x7e882c */
  if (!zf) goto L_7e882c;
L_7e87d0: /* 7e87d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87d1: call 0x928730 */
  esp -= 4; W32(esp, 0x7e87d6u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 7e87d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87d9: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 7e87df: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7e87e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87e4: mov edi, esp */
  edi = esp;
/* 7e87e6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e87e8: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7e87eb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e87ee: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e87f1: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e87f4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e87fa: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e87fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87ff: mov edx, esp */
  edx = esp;
/* 7e8801: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7e8803: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8806: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e8809: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7e880c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e880d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e8810: call 0x6c8eae */
  esp -= 4; W32(esp, 0x7e8815u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 7e8815: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e8818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8819: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7e881eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7e881e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8821: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e8823: /* 7e8823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8824: call 0x928630 */
  esp -= 4; W32(esp, 0x7e8829u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_7e8829: /* 7e8829: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e882c: /* 7e882c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e882f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8831: jne 0x7e892d */
  if (!zf) goto L_7e892d;
L_7e8837: /* 7e8837: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e883a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7e883d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e883f: je 0x7e887e */
  if (zf) goto L_7e887e;
L_7e8841: /* 7e8841: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e884b: jne 0x7e887e */
  if (!zf) goto L_7e887e;
L_7e884d: /* 7e884d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e884e: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e8853u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e8853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8855: jne 0x7e887b */
  if (!zf) goto L_7e887b;
L_7e8857: /* 7e8857: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e885a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7e885d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8863: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e8869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8869: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e886c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e886f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 7e8872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8875: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e887b: /* 7e887b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e887e: /* 7e887e: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7e8884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8886: jne 0x7e8896 */
  if (!zf) goto L_7e8896;
L_7e8888: /* 7e8888: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e888e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8890: je 0x7e8896 */
  if (zf) goto L_7e8896;
L_7e8892: /* 7e8892: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8894: jne 0x7e88ef */
  if (!zf) goto L_7e88ef;
L_7e8896: /* 7e8896: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e8899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e88a0: /* 7e88a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88a2: je 0x7e88ef */
  if (zf) goto L_7e88ef;
L_7e88a4: /* 7e88a4: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 7e88a7: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e88aa: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e88ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e88af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e88b2: jp 0x7e88ef */
  if (pf) goto L_7e88ef;
L_7e88b4: /* 7e88b4: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e88b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88b9: je 0x7e88cb */
  if (zf) goto L_7e88cb;
L_7e88bb: /* 7e88bb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88bf: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e88c4u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e88c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88c6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88c8: /* 7e88c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88cb: /* 7e88cb: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e88ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e88cf: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e88d4u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e88d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88d6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88d8: /* 7e88d8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e88de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e88e0: je 0x7e88eb */
  if (zf) goto L_7e88eb;
L_7e88e2: /* 7e88e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88e3: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7e88e8u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7e88e8: /* 7e88e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88eb: /* 7e88eb: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e88ed: jmp 0x7e88a0 */
  goto L_7e88a0;
L_7e88ef: /* 7e88ef: xor esi, esi */
  esi = 0;
L_7e88f1: /* 7e88f1: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e88f7: jge 0x7e892d */
  if ((sf == of)) goto L_7e892d;
L_7e88f9: /* 7e88f9: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e88ff: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7e8902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8904: je 0x7e892a */
  if (zf) goto L_7e892a;
L_7e8906: /* 7e8906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8909: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7e890eu); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7e890e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8913: jne 0x7e892a */
  if (!zf) goto L_7e892a;
L_7e8915: /* 7e8915: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e891b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e891c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e891f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8920: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e8925u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e8925: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8928: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892a: /* 7e892a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e892b: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892d: /* 7e892d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e8930: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8935: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e893bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e893b: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e8941: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8947u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8947: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e894a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e894c: jne 0x7e8956 */
  if (!zf) goto L_7e8956;
L_7e894e: /* 7e894e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8951: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e8956u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e8956: /* 7e8956: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e895c: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e8962: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e8965: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8969: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e896c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e896e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8970: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e8973: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 7e8976: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e897c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e897e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8981: jne 0x7e7ca6 */
  if (!zf) goto L_7e7ca6;
L_7e8987: /* 7e8987: jmp 0x7e771b */
  goto L_7e771b;
}

void f_7e7b40(void) {
  LOAD_REGS();
  goto L_7e7b40;
L_7e771b: /* 7e771b: mov eax, 1 */
  eax = 0x1u;
/* 7e7720: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e772a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e772b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e772c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e772d: mov esp, ebp */
  esp = ebp;
/* 7e772f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7730: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7a70: /* 7e7a70: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a72: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a74: /* 7e7a74: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e7a77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a79: je 0x7e7a8f */
  if (zf) goto L_7e7a8f;
L_7e7a7b: /* 7e7a7b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e7a7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7a7f: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a84u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a86: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7a8c: /* 7e7a8c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7a8f: /* 7e7a8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a90: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7e7a93: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a98u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a9a: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7aa0: /* 7e7aa0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e7aa3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7aa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7aa7: mov dword ptr [ebp - 0x8c], edi */
  W32((uint32_t)(ebp + 0xffffff74u), edi);
/* 7e7aad: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e7ab2u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e7ab2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ab4: je 0x7e7b40 */
  if (zf) goto L_7e7b40;
L_7e7aba: /* 7e7aba: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7e7abd: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e7ac2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ac4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7ac7: /* 7e7ac7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e7aca: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7e7acd: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7e7ad0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7e7ad3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7e7ad6: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e7ad9: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7adc: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7adf: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7e7ae5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7ae7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7aea: jp 0x7e7bbd */
  if (pf) goto L_7e7bbd;
L_7e7af0: /* 7e7af0: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7af3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7af5: jne 0x7e7bbd */
  if (!zf) goto L_7e7bbd;
L_7e7afb: /* 7e7afb: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7e7afe: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7b01: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7e7b04: fcom dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b07: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7b09: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7b0c: jp 0x7e7b4a */
  if (pf) goto L_7e7b4a;
L_7e7b0e: /* 7e7b0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7e7b15: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7b17: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b1a: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7e7b21: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7b24: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7e7b2b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e7b2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7b31: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7e7b34: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7e7b37: mov dword ptr [edx + 0x24], 0 */
  W32((uint32_t)(edx + 0x24u), 0x0u);
/* 7e7b3e: jmp 0x7e7bba */
  goto L_7e7bba;
L_7e7b40: /* 7e7b40: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e7b42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7b45: jmp 0x7e7a70 */
  goto L_7e7a70;
L_7e7b4a: /* 7e7b4a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e7b4d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b50: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e7b53: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b56: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7e7b59: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e7b5c: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b5f: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 7e7b65: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7b68: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 7e7b6b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b6d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7b70: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 7e7b73: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b75: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e7b78: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 7e7b7b: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e7b81: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 7e7b84: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e7b87: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 7e7b8a: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7b90: fsub dword ptr [ebp - 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 7e7b96: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7b99: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b9c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7e7b9f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7ba2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7ba5: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7ba8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7bab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7bae: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7e7bb1: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7bb4: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7bb7: fstp dword ptr [edx + 0x24] */
  WF32((uint32_t)(edx + 0x24u), ST0); FPOP();
L_7e7bba: /* 7e7bba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bbd: /* 7e7bbd: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e7bc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bc2: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bc8: /* 7e7bc8: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bcd: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bd3: /* 7e7bd3: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bda: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7be0: /* 7e7be0: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 7e7be3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7be5: je 0x7e7bf6 */
  if (zf) goto L_7e7bf6;
L_7e7be7: /* 7e7be7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7be9: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x7e7befu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7bef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bf1: jne 0x7e7c18 */
  if (!zf) goto L_7e7c18;
L_7e7bf3: /* 7e7bf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bf6: /* 7e7bf6: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7bf9: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bfb: je 0x7e7c1b */
  if (zf) goto L_7e7c1b;
L_7e7bfd: /* 7e7bfd: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bff: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7c05: /* 7e7c05: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7c0a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e7c10u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e7c10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c12: jne 0x7e7cbb */
  if (!zf) goto L_7e7cbb;
L_7e7c18: /* 7e7c18: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7c1b: /* 7e7c1b: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 7e7c1e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7c21: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 7e7c27: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7e7c2a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7c2d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7c30: fadd dword ptr [ecx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x174u)));
/* 7e7c36: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7c38: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7c3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7c3c: fadd dword ptr [ecx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x170u)));
/* 7e7c42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c45: mov esi, esp */
  esi = esp;
/* 7e7c47: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c49: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 7e7c4c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7c4f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c52: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 7e7c55: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7c58: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c5b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7c5e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7c61: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c64: mov esi, esp */
  esi = esp;
/* 7e7c66: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c68: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7c6b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c6e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7c71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7c72: mov ecx, eax */
  ecx = eax;
/* 7e7c74: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c77: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x7e7c7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7c7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c7f: je 0x7e7cbb */
  if (zf) goto L_7e7cbb;
L_7e7c81: /* 7e7c81: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e7c86: mov ecx, dword ptr [0xce8480] */
  ecx = R32((uint32_t)(0xce8480u));
/* 7e7c8c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7e7c8f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e7c91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7c93: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7c96: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e7c98: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7c9a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e7ca0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e7ca6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
L_7e7ca6: /* 7e7ca6: xor eax, eax */
  eax = 0;
/* 7e7ca8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7cab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e7cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7cb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e7cb5: mov esp, ebp */
  esp = ebp;
/* 7e7cb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7cb8: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7cbb: /* 7e7cbb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cbe: /* 7e7cbe: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cc5: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cc7: /* 7e7cc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7cca: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* 7e7cd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cd2: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cd4: /* 7e7cd4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7cd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7cd7: mov ecx, eax */
  ecx = eax;
/* 7e7cd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e7cdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7cdc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cdf: /* 7e7cdf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7ce2: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e7ce8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7cea: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e7cec: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7cef: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7cf2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7cf5: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7cf8: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e7cfb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7cfe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d01: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7d06: mov ecx, eax */
  ecx = eax;
/* 7e7d08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7d0a: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7e7d0d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7d10: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7e7d13: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7d16: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7e7d19: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7e7d1c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e7d1e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e7d21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e7d24: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7e7d27: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e7d2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d2d: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* 7e7d33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e7d35: jle 0x7e86e1 */
  if ((zf || sf != of)) goto L_7e86e1;
L_7e7d3b: /* 7e7d3b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e7d3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d40: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e7d46: /* 7e7d46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e7d4f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7d55u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7d55: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d59: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* 7e7d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d60: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d66: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d69: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d6fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d6f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d75: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 7e7d78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7d79: lea eax, [ebp - 0x1b4] */
  eax = (uint32_t)(ebp + 0xfffffe4cu);
/* 7e7d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d80: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d83: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d89u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7d8c: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d93: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d96: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e7d9cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d9e: je 0x7e7e07 */
  if (zf) goto L_7e7e07;
L_7e7da0: /* 7e7da0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7da3: mov edx, dword ptr [eax + 0x184] */
  edx = R32((uint32_t)(eax + 0x184u));
/* 7e7da9: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e7dac: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7db2: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7db8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dba: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e7dbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dbe: mov edx, dword ptr [eax + 0x180] */
  edx = R32((uint32_t)(eax + 0x180u));
/* 7e7dc4: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7dca: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7dd0: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dd3: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* 7e7dd9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e7ddc: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7de2: and eax, 0xfffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e7de7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dea: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e7df0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7df6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7df6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e7df8: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7e7dfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7dfe: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 7e7e01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7e04: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_7e7e07: /* 7e7e07: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7e0a: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7e7e10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7e12: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7e7e15: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7e18: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7e1b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e7e1e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7e21: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e7e24: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7e27: mov dword ptr [ebp - 0x154], edx */
  W32((uint32_t)(ebp + 0xfffffeacu), edx);
/* 7e7e2d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7e30: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 7e7e3a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7e7e44: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7e7e4e: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 7e7e58: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7e7e62: mov dword ptr [ebp - 0x170], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x3f800000u);
/* 7e7e6c: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7e7e76: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7e7e80: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 7e7e8a: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7e7e94: mov dword ptr [ebp - 0x15c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x3f800000u);
/* 7e7e9e: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7e7ea8: mov dword ptr [ebp - 0x150], ecx */
  W32((uint32_t)(ebp + 0xfffffeb0u), ecx);
/* 7e7eae: mov dword ptr [ebp - 0x14c], edx */
  W32((uint32_t)(ebp + 0xfffffeb4u), edx);
/* 7e7eb4: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 7e7ebe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7ec3: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7ec9: lea edi, [ebp - 0x2e4] */
  edi = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7ecf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ed1: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7ed6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7edb: mov ecx, esp */
  ecx = esp;
/* 7e7edd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7edf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7ee2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7ee5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e7ee8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7eeb: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7ef1: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7e7ef6u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7e7ef6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ef9: mov edi, esp */
  edi = esp;
/* 7e7efb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7f00: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f06: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7f08: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e7f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7f0f: mov ecx, eax */
  ecx = eax;
/* 7e7f11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e7f15: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e7f1bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e7f1b: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7f21: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e7f25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f2b: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7f31: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e7f35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f3b: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f41: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e7f45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7f4e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e7f55: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e7f60: /* 7e7f60: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7f63: cmp edx, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7f69: jge 0x7e86ce */
  if ((sf == of)) goto L_7e86ce;
L_7e7f6f: /* 7e7f6f: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7f75: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 7e7f78: xor edi, edi */
  edi = 0;
/* 7e7f7a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7f7c: je 0x7e86c6 */
  if (zf) goto L_7e86c6;
L_7e7f82: /* 7e7f82: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7e7f88: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7f8b: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 7e7f8e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 7e7f91: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 7e7f94: mov dword ptr [ebp - 0x138], edi */
  W32((uint32_t)(ebp + 0xfffffec8u), edi);
/* 7e7f9a: mov dword ptr [ebp - 0x134], edi */
  W32((uint32_t)(ebp + 0xfffffeccu), edi);
/* 7e7fa0: mov dword ptr [ebp - 0x130], edi */
  W32((uint32_t)(ebp + 0xfffffed0u), edi);
/* 7e7fa6: mov dword ptr [ebp - 0x12c], edi */
  W32((uint32_t)(ebp + 0xfffffed4u), edi);
/* 7e7fac: mov dword ptr [ebp - 0x128], edi */
  W32((uint32_t)(ebp + 0xfffffed8u), edi);
/* 7e7fb2: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 7e7fb8: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 7e7fbe: mov dword ptr [ebp - 0x11c], edi */
  W32((uint32_t)(ebp + 0xfffffee4u), edi);
/* 7e7fc4: mov dword ptr [ebp - 0x118], edi */
  W32((uint32_t)(ebp + 0xfffffee8u), edi);
/* 7e7fca: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 7e7fd4: mov dword ptr [ebp - 0x110], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffef0u), 0xffffffffu);
/* 7e7fde: mov dword ptr [ebp - 0x10c], edi */
  W32((uint32_t)(ebp + 0xfffffef4u), edi);
/* 7e7fe4: je 0x7e8111 */
  if (zf) goto L_7e8111;
L_7e7fea: /* 7e7fea: test byte ptr [ebx + 0x88], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ff1: jne 0x7e8111 */
  if (!zf) goto L_7e8111;
L_7e7ff7: /* 7e7ff7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ffa: mov edi, esp */
  edi = esp;
/* 7e7ffc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e8001: lea esi, [ebp - 0x298] */
  esi = (uint32_t)(ebp + 0xfffffd68u);
/* 7e8007: lea eax, [ebp - 0x258] */
  eax = (uint32_t)(ebp + 0xfffffda8u);
/* 7e800d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e800f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8010: lea ecx, [ebx + 0x220] */
  ecx = (uint32_t)(ebx + 0x220u);
/* 7e8016: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e801cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e801c: mov ecx, dword ptr [ebp - 0x228] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd8u));
/* 7e8022: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 7e8028: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 7e802e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7e8031: lea ecx, [ebp - 0x354] */
  ecx = (uint32_t)(ebp + 0xfffffcacu);
/* 7e8037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8038: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e803e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7e8042: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e8045: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e8048: call dword ptr [0xcfaa78] */
  esp -= 4; W32(esp, 0x7e804eu); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* 7e804e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e8054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8055: lea edx, [ebp - 0x384] */
  edx = (uint32_t)(ebp + 0xfffffc7cu);
/* 7e805b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e805c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e805f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x7e8065u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e8065: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7e806b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e806c: mov ecx, eax */
  ecx = eax;
/* 7e806e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x7e8074u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 7e8074: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e8077: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 7e807d: mov esi, dword ptr [ebp - 0x98] */
  esi = R32((uint32_t)(ebp + 0xffffff68u));
/* 7e8083: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e8086: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8089: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 7e808f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8091: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e8094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8096: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 7e809c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e809e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a2: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e80a8: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 7e80ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e80af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80b2: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7e80b8: mov eax, esp */
  eax = esp;
/* 7e80ba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80bc: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 7e80c2: mov esi, dword ptr [ebp - 0x94] */
  esi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7e80c8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80cb: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 7e80d1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80d4: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* 7e80da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80dd: mov eax, esp */
  eax = esp;
/* 7e80df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80e1: mov esi, dword ptr [ebp - 0xe8] */
  esi = R32((uint32_t)(ebp + 0xffffff18u));
/* 7e80e7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80ea: mov esi, dword ptr [ebp - 0xe4] */
  esi = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7e80f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e80f1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e80fa: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e8100: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e8104: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e810au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e810a: xor edi, edi */
  edi = 0;
/* 7e810c: jmp 0x7e83d7 */
  goto L_7e83d7;
L_7e8111: /* 7e8111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8112: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e8115: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e811bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e811b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e811e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e811f: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7e8125: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e812bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e812b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e812d: je 0x7e83d7 */
  if (zf) goto L_7e83d7;
L_7e8133: /* 7e8133: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 7e8136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e8137: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7e813d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e813e: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7e8144: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x7e814au); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e814a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e814d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8154: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8157: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e815du); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e815d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e815f: je 0x7e835d */
  if (zf) goto L_7e835d;
L_7e8165: /* 7e8165: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8167: mov ecx, ebx */
  ecx = ebx;
/* 7e8169: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x7e816fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e816f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8171: je 0x7e818a */
  if (zf) goto L_7e818a;
L_7e8173: /* 7e8173: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7e8178: mov ecx, ebx */
  ecx = ebx;
/* 7e817a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e8180u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e8180: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e8182: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e8184: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e8186: mov esi, eax */
  esi = eax;
/* 7e8188: jmp 0x7e818c */
  goto L_7e818c;
L_7e818a: /* 7e818a: xor esi, esi */
  esi = 0;
L_7e818c: /* 7e818c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e818e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7e8195: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e8197: /* 7e8197: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7e819d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e819f: je 0x7e81c1 */
  if (zf) goto L_7e81c1;
L_7e81a1: /* 7e81a1: fild dword ptr [eax + 0x184] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 7e81a7: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e81aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e81ab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 7e81b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e81b2: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7e81b5: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e81bb: call dword ptr [0xcfaa70] */
  esp -= 4; W32(esp, 0x7e81c1u); SPILL(); f_4e12e9(); if (g_unwind) return; /* Core!??YFRotator@@QAE?AV0@ABV0@@Z */ RELOAD();
L_7e81c1: /* 7e81c1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7e81c7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e81ca: jne 0x7e81f0 */
  if (!zf) goto L_7e81f0;
L_7e81cc: /* 7e81cc: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 7e81d2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e81d4: mov eax, dword ptr [ebx + 0x184] */
  eax = R32((uint32_t)(ebx + 0x184u));
/* 7e81da: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 7e81e0: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e81e2: /* 7e81e2: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7e81e5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7e81eau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7e81ea: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
L_7e81f0: /* 7e81f0: fld dword ptr [ebp - 0x1bc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe44u)); FPUSH(v); }
/* 7e81f6: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e81fc: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 7e8202: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8208: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e820a: fld dword ptr [ebp - 0x1c0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe40u)); FPUSH(v); }
/* 7e8210: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e8216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8218: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 7e821e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8220: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 7e8226: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8228: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e822b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 7e8231: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8233: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 7e8239: fld dword ptr [ebp - 0x1c8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe38u)); FPUSH(v); }
/* 7e823f: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8245: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 7e824b: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8253: fld dword ptr [ebp - 0x1cc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe34u)); FPUSH(v); }
/* 7e8259: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e825f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8261: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 7e8267: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8269: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 7e826f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8271: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7e8274: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 7e827a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e827c: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 7e8282: fld dword ptr [ebp - 0x1d4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe2cu)); FPUSH(v); }
/* 7e8288: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e828e: fld dword ptr [ebp - 0x1d0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe30u)); FPUSH(v); }
/* 7e8294: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e829a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e829c: fld dword ptr [ebp - 0x1d8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe28u)); FPUSH(v); }
/* 7e82a2: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e82a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e82aa: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 7e82b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82b2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82b5: fld dword ptr [ebp - 0x1a4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe5cu)); FPUSH(v); }
/* 7e82bb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82bd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e82c0: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 7e82c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82c8: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 7e82ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82d3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82d5: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e82dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e82df: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82e2: fld dword ptr [ebp - 0x200] */
  { double v = F32((uint32_t)(ebp + 0xfffffe00u)); FPUSH(v); }
/* 7e82e8: fadd dword ptr [ebp - 0x1f4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe0cu)));
/* 7e82ee: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 7e82f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82f6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82fa: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82fd: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7e8300: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e8303: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 7e8309: fadd dword ptr [ebp - 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdf4u)));
/* 7e830f: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 7e8315: fsub dword ptr [ebx + 0x210] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x210u)));
/* 7e831b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7e831e: fsub dword ptr [ebx + 0x20c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8324: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 7e832a: fsub dword ptr [ebx + 0x208] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x208u)));
/* 7e8330: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 7e8336: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7e833c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 7e8342: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 7e8348: mov edx, dword ptr [ebp - 0xf4] */
  edx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 7e834e: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 7e8354: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e8357: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e835a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_7e835d: /* 7e835d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e8360: mov esi, dword ptr [ebp - 0xd4] */
  esi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7e8366: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e8369: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e836c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e836f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8370: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e8373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8375: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e8378: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e837a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e837d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e8385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8386: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7e838c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e838f: mov eax, esp */
  eax = esp;
/* 7e8391: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 7e8397: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e8399: mov esi, dword ptr [ebp - 0xd0] */
  esi = R32((uint32_t)(ebp + 0xffffff30u));
/* 7e839f: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 7e83a5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83a8: mov esi, dword ptr [ebp - 0xcc] */
  esi = R32((uint32_t)(ebp + 0xffffff34u));
/* 7e83ae: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83b1: mov esi, dword ptr [ebp - 0xe0] */
  esi = R32((uint32_t)(ebp + 0xffffff20u));
/* 7e83b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e83ba: mov eax, esp */
  eax = esp;
/* 7e83bc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e83be: mov esi, dword ptr [ebp - 0xdc] */
  esi = R32((uint32_t)(ebp + 0xffffff24u));
/* 7e83c4: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83c7: mov esi, dword ptr [ebp - 0xd8] */
  esi = R32((uint32_t)(ebp + 0xffffff28u));
/* 7e83cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e83ce: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83d1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e83d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e83d7: /* 7e83d7: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83da: jne 0x7e86c3 */
  if (!zf) goto L_7e86c3;
L_7e83e0: /* 7e83e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e83e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e83e4: mov ecx, ebx */
  ecx = ebx;
/* 7e83e6: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e83ebu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e83eb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83ed: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e83f3: /* 7e83f3: cmp dword ptr [ebx + 0x280], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x280u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83f9: mov dword ptr [ebp - 0xc8], edi */
  W32((uint32_t)(ebp + 0xffffff38u), edi);
/* 7e83ff: mov dword ptr [ebp - 0xc4], edi */
  W32((uint32_t)(ebp + 0xffffff3cu), edi);
/* 7e8405: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e840f: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e8419: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e8423: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e842d: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e8437: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e8441: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* 7e8447: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e8451: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e845b: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 7e8461: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8467: /* 7e8467: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8469: mov ecx, ebx */
  ecx = ebx;
/* 7e846b: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x7e8471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8471: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8473: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8479: /* 7e8479: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e847b: mov ecx, ebx */
  ecx = ebx;
/* 7e847d: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8483u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8483: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e8486: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e848c: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e8492: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e8498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8499: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e849b: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7e84a1: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 7e84a7: mov edi, dword ptr [ebp - 0x108] */
  edi = R32((uint32_t)(ebp + 0xfffffef8u));
/* 7e84ad: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7e84b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84b6: mov ecx, esp */
  ecx = esp;
/* 7e84b8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84ba: mov edi, dword ptr [ebp - 0x104] */
  edi = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7e84c0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84c3: mov edi, dword ptr [ebp - 0x100] */
  edi = R32((uint32_t)(ebp + 0xffffff00u));
/* 7e84c9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e84cc: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e84d2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e84d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84d7: mov ecx, esp */
  ecx = esp;
/* 7e84d9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84db: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e84de: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e84e1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e84e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e84e8: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e84ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e84ef: mov ecx, eax */
  ecx = eax;
/* 7e84f1: call dword ptr [esi + 0x68] */
  { uint32_t t = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, 0x7e84f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e84f4: jmp 0x7e8560 */
  goto L_7e8560;
L_7e84f6: /* 7e84f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e84f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e84fb: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8501: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7e8507: mov ecx, dword ptr [ebx + 0x2d4] */
  ecx = R32((uint32_t)(ebx + 0x2d4u));
/* 7e850d: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7e8513: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7e8516: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e8519: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e851c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e851d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8520: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e8522: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8525: mov ecx, esp */
  ecx = esp;
/* 7e8527: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e8529: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e852c: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e852f: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8532: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e8535: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8538: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7e853e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e8540: mov esi, esp */
  esi = esp;
/* 7e8542: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e8544: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8547: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e854a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e854d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7e8550: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8554: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e855a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e855b: mov ecx, eax */
  ecx = eax;
/* 7e855d: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7e8560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e8560: /* 7e8560: xor edx, edx */
  edx = 0;
/* 7e8562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8564: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e8567: mov eax, edx */
  eax = edx;
/* 7e8569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e856b: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8571: /* 7e8571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8574: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e8575: call 0x6ccb53 */
  esp -= 4; W32(esp, 0x7e857au); SPILL(); f_6ccb53(); if (g_unwind) return; RELOAD();
/* 7e857a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e857c: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8582: /* 7e8582: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8585: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7e858b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8590: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e8593: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e8595: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7e8598: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e859b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e859e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7e85a1: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e85a4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e85a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e85aa: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e85ad: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e85b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e85b4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e85b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e85ba: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e85bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e85c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e85c3: test byte ptr [edx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85ca: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85cc: /* 7e85cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e85cf: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7e85d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85d7: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85d9: /* 7e85d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e85db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e85dc: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7e85dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e85df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e85e2: /* 7e85e2: xor esi, esi */
  esi = 0;
L_7e85e4: /* 7e85e4: cmp esi, dword ptr [edx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e85ea: jge 0x7e8679 */
  if ((sf == of)) goto L_7e8679;
L_7e85f0: /* 7e85f0: mov ecx, dword ptr [edx + 0x1fc] */
  ecx = R32((uint32_t)(edx + 0x1fcu));
/* 7e85f6: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7e85f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85fb: je 0x7e8673 */
  if (zf) goto L_7e8673;
L_7e85fd: /* 7e85fd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e8600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8602: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8608: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e860b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e860e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e8610: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8616: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e8618: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e861b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e861d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8625: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 7e862b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e862c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e862f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8632: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e8638: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7e863a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e863d: mov edi, esp */
  edi = esp;
/* 7e863f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e8641: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8644: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 7e8647: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e864a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e864d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 7e8650: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8653: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8656: mov ecx, esp */
  ecx = esp;
/* 7e8658: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e865a: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e865d: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e8660: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8663: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e8666: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e866a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e8670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8670: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e8673: /* 7e8673: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e8674: jmp 0x7e85e4 */
  goto L_7e85e4;
L_7e8679: /* 7e8679: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e867f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8685u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8685: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7e868b: mov eax, dword ptr [0xce8480] */
  eax = R32((uint32_t)(0xce8480u));
/* 7e8690: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7e8693: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8695: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8697: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e869a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e869c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e869e: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86a4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86a8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86aeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e86b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e86b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e86b3: xor eax, eax */
  eax = 0;
/* 7e86b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e86bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e86bd: mov esp, ebp */
  esp = ebp;
/* 7e86bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e86c0: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e86c3: /* 7e86c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86c6: /* 7e86c6: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7e86c9: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e86ce: /* 7e86ce: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86e1: /* 7e86e1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e86e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86e6: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86ec: /* 7e86ec: test byte ptr [eax + 0x82], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x82u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86f3: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86f9: /* 7e86f9: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 7e86fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86fe: je 0x7e876d */
  if (zf) goto L_7e876d;
L_7e8700: /* 7e8700: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8702: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e8705: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e870bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e870b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e870f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8712: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8718: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e871eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e871e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8720: je 0x7e876a */
  if (zf) goto L_7e876a;
L_7e8722: /* 7e8722: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8725: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 7e8728: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7e872e: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e8734: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8739: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7e873f: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8745: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7e8748: fld dword ptr [ecx - 0x98] */
  { double v = F32((uint32_t)(ecx + 0xffffff68u)); FPUSH(v); }
/* 7e874e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7e8750: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8753: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8758: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e875b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e875e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e8761: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8764: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8767: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e876a: /* 7e876a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e876d: /* 7e876d: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8773: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8776: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e877cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e877c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e877e: je 0x7e8788 */
  if (zf) goto L_7e8788;
L_7e8780: /* 7e8780: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8783: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e8788u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
L_7e8788: /* 7e8788: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e878b: /* 7e878b: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8792: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e8794: /* 7e8794: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8797: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e879d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e879f: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e87a1: /* 7e87a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e87a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e87a4: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e87a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e87aa: /* 7e87aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e87ac: mov ecx, eax */
  ecx = eax;
/* 7e87ae: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x7e87b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87b4: mov esi, eax */
  esi = eax;
/* 7e87b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87b8: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e87ba: /* 7e87ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87bb: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7e87c0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7e87c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87c2: jne 0x7e8829 */
  if (!zf) goto L_7e8829;
L_7e87c4: /* 7e87c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87c7: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87ce: jne 0x7e882c */
  if (!zf) goto L_7e882c;
L_7e87d0: /* 7e87d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87d1: call 0x928730 */
  esp -= 4; W32(esp, 0x7e87d6u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 7e87d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87d9: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 7e87df: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7e87e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87e4: mov edi, esp */
  edi = esp;
/* 7e87e6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e87e8: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7e87eb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e87ee: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e87f1: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e87f4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e87fa: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e87fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87ff: mov edx, esp */
  edx = esp;
/* 7e8801: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7e8803: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8806: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e8809: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7e880c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e880d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e8810: call 0x6c8eae */
  esp -= 4; W32(esp, 0x7e8815u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 7e8815: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e8818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8819: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7e881eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7e881e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8821: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e8823: /* 7e8823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8824: call 0x928630 */
  esp -= 4; W32(esp, 0x7e8829u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_7e8829: /* 7e8829: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e882c: /* 7e882c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e882f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8831: jne 0x7e892d */
  if (!zf) goto L_7e892d;
L_7e8837: /* 7e8837: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e883a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7e883d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e883f: je 0x7e887e */
  if (zf) goto L_7e887e;
L_7e8841: /* 7e8841: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e884b: jne 0x7e887e */
  if (!zf) goto L_7e887e;
L_7e884d: /* 7e884d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e884e: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e8853u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e8853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8855: jne 0x7e887b */
  if (!zf) goto L_7e887b;
L_7e8857: /* 7e8857: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e885a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7e885d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8863: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e8869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8869: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e886c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e886f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 7e8872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8875: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e887b: /* 7e887b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e887e: /* 7e887e: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7e8884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8886: jne 0x7e8896 */
  if (!zf) goto L_7e8896;
L_7e8888: /* 7e8888: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e888e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8890: je 0x7e8896 */
  if (zf) goto L_7e8896;
L_7e8892: /* 7e8892: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8894: jne 0x7e88ef */
  if (!zf) goto L_7e88ef;
L_7e8896: /* 7e8896: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e8899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e88a0: /* 7e88a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88a2: je 0x7e88ef */
  if (zf) goto L_7e88ef;
L_7e88a4: /* 7e88a4: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 7e88a7: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e88aa: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e88ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e88af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e88b2: jp 0x7e88ef */
  if (pf) goto L_7e88ef;
L_7e88b4: /* 7e88b4: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e88b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88b9: je 0x7e88cb */
  if (zf) goto L_7e88cb;
L_7e88bb: /* 7e88bb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88bf: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e88c4u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e88c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88c6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88c8: /* 7e88c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88cb: /* 7e88cb: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e88ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e88cf: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e88d4u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e88d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88d6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88d8: /* 7e88d8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e88de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e88e0: je 0x7e88eb */
  if (zf) goto L_7e88eb;
L_7e88e2: /* 7e88e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88e3: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7e88e8u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7e88e8: /* 7e88e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88eb: /* 7e88eb: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e88ed: jmp 0x7e88a0 */
  goto L_7e88a0;
L_7e88ef: /* 7e88ef: xor esi, esi */
  esi = 0;
L_7e88f1: /* 7e88f1: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e88f7: jge 0x7e892d */
  if ((sf == of)) goto L_7e892d;
L_7e88f9: /* 7e88f9: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e88ff: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7e8902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8904: je 0x7e892a */
  if (zf) goto L_7e892a;
L_7e8906: /* 7e8906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8909: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7e890eu); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7e890e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8913: jne 0x7e892a */
  if (!zf) goto L_7e892a;
L_7e8915: /* 7e8915: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e891b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e891c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e891f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8920: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e8925u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e8925: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8928: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892a: /* 7e892a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e892b: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892d: /* 7e892d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e8930: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8935: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e893bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e893b: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e8941: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8947u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8947: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e894a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e894c: jne 0x7e8956 */
  if (!zf) goto L_7e8956;
L_7e894e: /* 7e894e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8951: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e8956u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e8956: /* 7e8956: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e895c: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e8962: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e8965: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8969: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e896c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e896e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8970: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e8973: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 7e8976: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e897c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e897e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8981: jne 0x7e7ca6 */
  if (!zf) goto L_7e7ca6;
L_7e8987: /* 7e8987: jmp 0x7e771b */
  goto L_7e771b;
}

void f_7e7b4a(void) {
  LOAD_REGS();
  goto L_7e7b4a;
L_7e771b: /* 7e771b: mov eax, 1 */
  eax = 0x1u;
/* 7e7720: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e772a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e772b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e772c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e772d: mov esp, ebp */
  esp = ebp;
/* 7e772f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7730: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7b4a: /* 7e7b4a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e7b4d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b50: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e7b53: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b56: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7e7b59: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e7b5c: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b5f: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 7e7b65: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7b68: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 7e7b6b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b6d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7b70: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 7e7b73: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b75: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e7b78: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 7e7b7b: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e7b81: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 7e7b84: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e7b87: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 7e7b8a: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7b90: fsub dword ptr [ebp - 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 7e7b96: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7b99: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b9c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7e7b9f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7ba2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7ba5: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7ba8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7bab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7bae: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7e7bb1: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7bb4: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7bb7: fstp dword ptr [edx + 0x24] */
  WF32((uint32_t)(edx + 0x24u), ST0); FPOP();
/* 7e7bba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7bbd: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e7bc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bc2: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bc8: /* 7e7bc8: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bcd: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bd3: /* 7e7bd3: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bda: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7be0: /* 7e7be0: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 7e7be3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7be5: je 0x7e7bf6 */
  if (zf) goto L_7e7bf6;
L_7e7be7: /* 7e7be7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7be9: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x7e7befu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7bef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bf1: jne 0x7e7c18 */
  if (!zf) goto L_7e7c18;
L_7e7bf3: /* 7e7bf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bf6: /* 7e7bf6: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7bf9: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bfb: je 0x7e7c1b */
  if (zf) goto L_7e7c1b;
L_7e7bfd: /* 7e7bfd: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bff: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7c05: /* 7e7c05: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7c0a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e7c10u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e7c10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c12: jne 0x7e7cbb */
  if (!zf) goto L_7e7cbb;
L_7e7c18: /* 7e7c18: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7c1b: /* 7e7c1b: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 7e7c1e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7c21: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 7e7c27: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7e7c2a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7c2d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7c30: fadd dword ptr [ecx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x174u)));
/* 7e7c36: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7c38: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7c3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7c3c: fadd dword ptr [ecx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x170u)));
/* 7e7c42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c45: mov esi, esp */
  esi = esp;
/* 7e7c47: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c49: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 7e7c4c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7c4f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c52: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 7e7c55: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7c58: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c5b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7c5e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7c61: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c64: mov esi, esp */
  esi = esp;
/* 7e7c66: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c68: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7c6b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c6e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7c71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7c72: mov ecx, eax */
  ecx = eax;
/* 7e7c74: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c77: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x7e7c7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7c7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c7f: je 0x7e7cbb */
  if (zf) goto L_7e7cbb;
L_7e7c81: /* 7e7c81: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e7c86: mov ecx, dword ptr [0xce8480] */
  ecx = R32((uint32_t)(0xce8480u));
/* 7e7c8c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7e7c8f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e7c91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7c93: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7c96: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e7c98: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7c9a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e7ca0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e7ca6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
L_7e7ca6: /* 7e7ca6: xor eax, eax */
  eax = 0;
/* 7e7ca8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7cab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e7cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7cb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e7cb5: mov esp, ebp */
  esp = ebp;
/* 7e7cb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7cb8: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7cbb: /* 7e7cbb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cbe: /* 7e7cbe: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cc5: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cc7: /* 7e7cc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7cca: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* 7e7cd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cd2: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cd4: /* 7e7cd4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7cd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7cd7: mov ecx, eax */
  ecx = eax;
/* 7e7cd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e7cdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7cdc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cdf: /* 7e7cdf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7ce2: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e7ce8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7cea: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e7cec: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7cef: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7cf2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7cf5: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7cf8: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e7cfb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7cfe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d01: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7d06: mov ecx, eax */
  ecx = eax;
/* 7e7d08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7d0a: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7e7d0d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7d10: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7e7d13: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7d16: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7e7d19: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7e7d1c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e7d1e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e7d21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e7d24: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7e7d27: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e7d2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d2d: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* 7e7d33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e7d35: jle 0x7e86e1 */
  if ((zf || sf != of)) goto L_7e86e1;
L_7e7d3b: /* 7e7d3b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e7d3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d40: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e7d46: /* 7e7d46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e7d4f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7d55u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7d55: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d59: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* 7e7d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d60: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d66: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d69: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d6fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d6f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d75: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 7e7d78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7d79: lea eax, [ebp - 0x1b4] */
  eax = (uint32_t)(ebp + 0xfffffe4cu);
/* 7e7d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d80: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d83: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d89u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7d8c: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d93: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d96: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e7d9cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d9e: je 0x7e7e07 */
  if (zf) goto L_7e7e07;
L_7e7da0: /* 7e7da0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7da3: mov edx, dword ptr [eax + 0x184] */
  edx = R32((uint32_t)(eax + 0x184u));
/* 7e7da9: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e7dac: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7db2: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7db8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dba: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e7dbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dbe: mov edx, dword ptr [eax + 0x180] */
  edx = R32((uint32_t)(eax + 0x180u));
/* 7e7dc4: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7dca: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7dd0: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dd3: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* 7e7dd9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e7ddc: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7de2: and eax, 0xfffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e7de7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dea: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e7df0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7df6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7df6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e7df8: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7e7dfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7dfe: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 7e7e01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7e04: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_7e7e07: /* 7e7e07: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7e0a: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7e7e10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7e12: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7e7e15: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7e18: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7e1b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e7e1e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7e21: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e7e24: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7e27: mov dword ptr [ebp - 0x154], edx */
  W32((uint32_t)(ebp + 0xfffffeacu), edx);
/* 7e7e2d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7e30: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 7e7e3a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7e7e44: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7e7e4e: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 7e7e58: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7e7e62: mov dword ptr [ebp - 0x170], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x3f800000u);
/* 7e7e6c: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7e7e76: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7e7e80: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 7e7e8a: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7e7e94: mov dword ptr [ebp - 0x15c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x3f800000u);
/* 7e7e9e: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7e7ea8: mov dword ptr [ebp - 0x150], ecx */
  W32((uint32_t)(ebp + 0xfffffeb0u), ecx);
/* 7e7eae: mov dword ptr [ebp - 0x14c], edx */
  W32((uint32_t)(ebp + 0xfffffeb4u), edx);
/* 7e7eb4: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 7e7ebe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7ec3: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7ec9: lea edi, [ebp - 0x2e4] */
  edi = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7ecf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ed1: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7ed6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7edb: mov ecx, esp */
  ecx = esp;
/* 7e7edd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7edf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7ee2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7ee5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e7ee8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7eeb: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7ef1: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7e7ef6u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7e7ef6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ef9: mov edi, esp */
  edi = esp;
/* 7e7efb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7f00: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f06: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7f08: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e7f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7f0f: mov ecx, eax */
  ecx = eax;
/* 7e7f11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e7f15: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e7f1bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e7f1b: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7f21: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e7f25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f2b: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7f31: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e7f35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f3b: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f41: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e7f45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7f4e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e7f55: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e7f60: /* 7e7f60: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7f63: cmp edx, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7f69: jge 0x7e86ce */
  if ((sf == of)) goto L_7e86ce;
L_7e7f6f: /* 7e7f6f: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7f75: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 7e7f78: xor edi, edi */
  edi = 0;
/* 7e7f7a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7f7c: je 0x7e86c6 */
  if (zf) goto L_7e86c6;
L_7e7f82: /* 7e7f82: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7e7f88: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7f8b: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 7e7f8e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 7e7f91: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 7e7f94: mov dword ptr [ebp - 0x138], edi */
  W32((uint32_t)(ebp + 0xfffffec8u), edi);
/* 7e7f9a: mov dword ptr [ebp - 0x134], edi */
  W32((uint32_t)(ebp + 0xfffffeccu), edi);
/* 7e7fa0: mov dword ptr [ebp - 0x130], edi */
  W32((uint32_t)(ebp + 0xfffffed0u), edi);
/* 7e7fa6: mov dword ptr [ebp - 0x12c], edi */
  W32((uint32_t)(ebp + 0xfffffed4u), edi);
/* 7e7fac: mov dword ptr [ebp - 0x128], edi */
  W32((uint32_t)(ebp + 0xfffffed8u), edi);
/* 7e7fb2: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 7e7fb8: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 7e7fbe: mov dword ptr [ebp - 0x11c], edi */
  W32((uint32_t)(ebp + 0xfffffee4u), edi);
/* 7e7fc4: mov dword ptr [ebp - 0x118], edi */
  W32((uint32_t)(ebp + 0xfffffee8u), edi);
/* 7e7fca: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 7e7fd4: mov dword ptr [ebp - 0x110], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffef0u), 0xffffffffu);
/* 7e7fde: mov dword ptr [ebp - 0x10c], edi */
  W32((uint32_t)(ebp + 0xfffffef4u), edi);
/* 7e7fe4: je 0x7e8111 */
  if (zf) goto L_7e8111;
L_7e7fea: /* 7e7fea: test byte ptr [ebx + 0x88], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ff1: jne 0x7e8111 */
  if (!zf) goto L_7e8111;
L_7e7ff7: /* 7e7ff7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ffa: mov edi, esp */
  edi = esp;
/* 7e7ffc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e8001: lea esi, [ebp - 0x298] */
  esi = (uint32_t)(ebp + 0xfffffd68u);
/* 7e8007: lea eax, [ebp - 0x258] */
  eax = (uint32_t)(ebp + 0xfffffda8u);
/* 7e800d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e800f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8010: lea ecx, [ebx + 0x220] */
  ecx = (uint32_t)(ebx + 0x220u);
/* 7e8016: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e801cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e801c: mov ecx, dword ptr [ebp - 0x228] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd8u));
/* 7e8022: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 7e8028: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 7e802e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7e8031: lea ecx, [ebp - 0x354] */
  ecx = (uint32_t)(ebp + 0xfffffcacu);
/* 7e8037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8038: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e803e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7e8042: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e8045: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e8048: call dword ptr [0xcfaa78] */
  esp -= 4; W32(esp, 0x7e804eu); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* 7e804e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e8054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8055: lea edx, [ebp - 0x384] */
  edx = (uint32_t)(ebp + 0xfffffc7cu);
/* 7e805b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e805c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e805f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x7e8065u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e8065: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7e806b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e806c: mov ecx, eax */
  ecx = eax;
/* 7e806e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x7e8074u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 7e8074: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e8077: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 7e807d: mov esi, dword ptr [ebp - 0x98] */
  esi = R32((uint32_t)(ebp + 0xffffff68u));
/* 7e8083: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e8086: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8089: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 7e808f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8091: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e8094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8096: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 7e809c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e809e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a2: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e80a8: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 7e80ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e80af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80b2: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7e80b8: mov eax, esp */
  eax = esp;
/* 7e80ba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80bc: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 7e80c2: mov esi, dword ptr [ebp - 0x94] */
  esi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7e80c8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80cb: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 7e80d1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80d4: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* 7e80da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80dd: mov eax, esp */
  eax = esp;
/* 7e80df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80e1: mov esi, dword ptr [ebp - 0xe8] */
  esi = R32((uint32_t)(ebp + 0xffffff18u));
/* 7e80e7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80ea: mov esi, dword ptr [ebp - 0xe4] */
  esi = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7e80f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e80f1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e80fa: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e8100: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e8104: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e810au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e810a: xor edi, edi */
  edi = 0;
/* 7e810c: jmp 0x7e83d7 */
  goto L_7e83d7;
L_7e8111: /* 7e8111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8112: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e8115: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e811bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e811b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e811e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e811f: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7e8125: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e812bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e812b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e812d: je 0x7e83d7 */
  if (zf) goto L_7e83d7;
L_7e8133: /* 7e8133: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 7e8136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e8137: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7e813d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e813e: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7e8144: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x7e814au); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e814a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e814d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8154: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8157: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e815du); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e815d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e815f: je 0x7e835d */
  if (zf) goto L_7e835d;
L_7e8165: /* 7e8165: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8167: mov ecx, ebx */
  ecx = ebx;
/* 7e8169: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x7e816fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e816f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8171: je 0x7e818a */
  if (zf) goto L_7e818a;
L_7e8173: /* 7e8173: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7e8178: mov ecx, ebx */
  ecx = ebx;
/* 7e817a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e8180u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e8180: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e8182: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e8184: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e8186: mov esi, eax */
  esi = eax;
/* 7e8188: jmp 0x7e818c */
  goto L_7e818c;
L_7e818a: /* 7e818a: xor esi, esi */
  esi = 0;
L_7e818c: /* 7e818c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e818e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7e8195: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e8197: /* 7e8197: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7e819d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e819f: je 0x7e81c1 */
  if (zf) goto L_7e81c1;
L_7e81a1: /* 7e81a1: fild dword ptr [eax + 0x184] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 7e81a7: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e81aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e81ab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 7e81b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e81b2: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7e81b5: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e81bb: call dword ptr [0xcfaa70] */
  esp -= 4; W32(esp, 0x7e81c1u); SPILL(); f_4e12e9(); if (g_unwind) return; /* Core!??YFRotator@@QAE?AV0@ABV0@@Z */ RELOAD();
L_7e81c1: /* 7e81c1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7e81c7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e81ca: jne 0x7e81f0 */
  if (!zf) goto L_7e81f0;
L_7e81cc: /* 7e81cc: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 7e81d2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e81d4: mov eax, dword ptr [ebx + 0x184] */
  eax = R32((uint32_t)(ebx + 0x184u));
/* 7e81da: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 7e81e0: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e81e2: /* 7e81e2: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7e81e5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7e81eau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7e81ea: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
L_7e81f0: /* 7e81f0: fld dword ptr [ebp - 0x1bc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe44u)); FPUSH(v); }
/* 7e81f6: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e81fc: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 7e8202: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8208: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e820a: fld dword ptr [ebp - 0x1c0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe40u)); FPUSH(v); }
/* 7e8210: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e8216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8218: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 7e821e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8220: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 7e8226: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8228: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e822b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 7e8231: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8233: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 7e8239: fld dword ptr [ebp - 0x1c8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe38u)); FPUSH(v); }
/* 7e823f: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8245: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 7e824b: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8253: fld dword ptr [ebp - 0x1cc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe34u)); FPUSH(v); }
/* 7e8259: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e825f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8261: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 7e8267: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8269: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 7e826f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8271: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7e8274: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 7e827a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e827c: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 7e8282: fld dword ptr [ebp - 0x1d4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe2cu)); FPUSH(v); }
/* 7e8288: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e828e: fld dword ptr [ebp - 0x1d0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe30u)); FPUSH(v); }
/* 7e8294: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e829a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e829c: fld dword ptr [ebp - 0x1d8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe28u)); FPUSH(v); }
/* 7e82a2: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e82a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e82aa: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 7e82b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82b2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82b5: fld dword ptr [ebp - 0x1a4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe5cu)); FPUSH(v); }
/* 7e82bb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82bd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e82c0: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 7e82c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82c8: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 7e82ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82d3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82d5: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e82dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e82df: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82e2: fld dword ptr [ebp - 0x200] */
  { double v = F32((uint32_t)(ebp + 0xfffffe00u)); FPUSH(v); }
/* 7e82e8: fadd dword ptr [ebp - 0x1f4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe0cu)));
/* 7e82ee: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 7e82f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82f6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82fa: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82fd: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7e8300: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e8303: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 7e8309: fadd dword ptr [ebp - 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdf4u)));
/* 7e830f: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 7e8315: fsub dword ptr [ebx + 0x210] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x210u)));
/* 7e831b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7e831e: fsub dword ptr [ebx + 0x20c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8324: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 7e832a: fsub dword ptr [ebx + 0x208] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x208u)));
/* 7e8330: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 7e8336: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7e833c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 7e8342: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 7e8348: mov edx, dword ptr [ebp - 0xf4] */
  edx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 7e834e: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 7e8354: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e8357: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e835a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_7e835d: /* 7e835d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e8360: mov esi, dword ptr [ebp - 0xd4] */
  esi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7e8366: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e8369: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e836c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e836f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8370: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e8373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8375: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e8378: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e837a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e837d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e8385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8386: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7e838c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e838f: mov eax, esp */
  eax = esp;
/* 7e8391: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 7e8397: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e8399: mov esi, dword ptr [ebp - 0xd0] */
  esi = R32((uint32_t)(ebp + 0xffffff30u));
/* 7e839f: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 7e83a5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83a8: mov esi, dword ptr [ebp - 0xcc] */
  esi = R32((uint32_t)(ebp + 0xffffff34u));
/* 7e83ae: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83b1: mov esi, dword ptr [ebp - 0xe0] */
  esi = R32((uint32_t)(ebp + 0xffffff20u));
/* 7e83b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e83ba: mov eax, esp */
  eax = esp;
/* 7e83bc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e83be: mov esi, dword ptr [ebp - 0xdc] */
  esi = R32((uint32_t)(ebp + 0xffffff24u));
/* 7e83c4: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83c7: mov esi, dword ptr [ebp - 0xd8] */
  esi = R32((uint32_t)(ebp + 0xffffff28u));
/* 7e83cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e83ce: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83d1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e83d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e83d7: /* 7e83d7: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83da: jne 0x7e86c3 */
  if (!zf) goto L_7e86c3;
L_7e83e0: /* 7e83e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e83e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e83e4: mov ecx, ebx */
  ecx = ebx;
/* 7e83e6: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e83ebu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e83eb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83ed: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e83f3: /* 7e83f3: cmp dword ptr [ebx + 0x280], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x280u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83f9: mov dword ptr [ebp - 0xc8], edi */
  W32((uint32_t)(ebp + 0xffffff38u), edi);
/* 7e83ff: mov dword ptr [ebp - 0xc4], edi */
  W32((uint32_t)(ebp + 0xffffff3cu), edi);
/* 7e8405: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e840f: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e8419: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e8423: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e842d: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e8437: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e8441: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* 7e8447: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e8451: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e845b: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 7e8461: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8467: /* 7e8467: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8469: mov ecx, ebx */
  ecx = ebx;
/* 7e846b: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x7e8471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8471: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8473: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8479: /* 7e8479: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e847b: mov ecx, ebx */
  ecx = ebx;
/* 7e847d: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8483u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8483: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e8486: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e848c: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e8492: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e8498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8499: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e849b: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7e84a1: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 7e84a7: mov edi, dword ptr [ebp - 0x108] */
  edi = R32((uint32_t)(ebp + 0xfffffef8u));
/* 7e84ad: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7e84b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84b6: mov ecx, esp */
  ecx = esp;
/* 7e84b8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84ba: mov edi, dword ptr [ebp - 0x104] */
  edi = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7e84c0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84c3: mov edi, dword ptr [ebp - 0x100] */
  edi = R32((uint32_t)(ebp + 0xffffff00u));
/* 7e84c9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e84cc: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e84d2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e84d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84d7: mov ecx, esp */
  ecx = esp;
/* 7e84d9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84db: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e84de: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e84e1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e84e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e84e8: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e84ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e84ef: mov ecx, eax */
  ecx = eax;
/* 7e84f1: call dword ptr [esi + 0x68] */
  { uint32_t t = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, 0x7e84f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e84f4: jmp 0x7e8560 */
  goto L_7e8560;
L_7e84f6: /* 7e84f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e84f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e84fb: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8501: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7e8507: mov ecx, dword ptr [ebx + 0x2d4] */
  ecx = R32((uint32_t)(ebx + 0x2d4u));
/* 7e850d: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7e8513: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7e8516: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e8519: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e851c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e851d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8520: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e8522: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8525: mov ecx, esp */
  ecx = esp;
/* 7e8527: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e8529: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e852c: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e852f: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8532: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e8535: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8538: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7e853e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e8540: mov esi, esp */
  esi = esp;
/* 7e8542: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e8544: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8547: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e854a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e854d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7e8550: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8554: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e855a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e855b: mov ecx, eax */
  ecx = eax;
/* 7e855d: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7e8560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e8560: /* 7e8560: xor edx, edx */
  edx = 0;
/* 7e8562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8564: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e8567: mov eax, edx */
  eax = edx;
/* 7e8569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e856b: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8571: /* 7e8571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8574: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e8575: call 0x6ccb53 */
  esp -= 4; W32(esp, 0x7e857au); SPILL(); f_6ccb53(); if (g_unwind) return; RELOAD();
/* 7e857a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e857c: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8582: /* 7e8582: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8585: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7e858b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8590: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e8593: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e8595: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7e8598: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e859b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e859e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7e85a1: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e85a4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e85a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e85aa: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e85ad: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e85b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e85b4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e85b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e85ba: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e85bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e85c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e85c3: test byte ptr [edx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85ca: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85cc: /* 7e85cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e85cf: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7e85d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85d7: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85d9: /* 7e85d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e85db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e85dc: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7e85dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e85df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e85e2: /* 7e85e2: xor esi, esi */
  esi = 0;
L_7e85e4: /* 7e85e4: cmp esi, dword ptr [edx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e85ea: jge 0x7e8679 */
  if ((sf == of)) goto L_7e8679;
L_7e85f0: /* 7e85f0: mov ecx, dword ptr [edx + 0x1fc] */
  ecx = R32((uint32_t)(edx + 0x1fcu));
/* 7e85f6: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7e85f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85fb: je 0x7e8673 */
  if (zf) goto L_7e8673;
L_7e85fd: /* 7e85fd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e8600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8602: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8608: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e860b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e860e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e8610: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8616: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e8618: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e861b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e861d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8625: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 7e862b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e862c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e862f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8632: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e8638: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7e863a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e863d: mov edi, esp */
  edi = esp;
/* 7e863f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e8641: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8644: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 7e8647: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e864a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e864d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 7e8650: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8653: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8656: mov ecx, esp */
  ecx = esp;
/* 7e8658: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e865a: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e865d: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e8660: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8663: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e8666: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e866a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e8670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8670: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e8673: /* 7e8673: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e8674: jmp 0x7e85e4 */
  goto L_7e85e4;
L_7e8679: /* 7e8679: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e867f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8685u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8685: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7e868b: mov eax, dword ptr [0xce8480] */
  eax = R32((uint32_t)(0xce8480u));
/* 7e8690: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7e8693: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8695: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8697: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e869a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e869c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e869e: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86a4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86a8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86aeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e86b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e86b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e86b3: xor eax, eax */
  eax = 0;
/* 7e86b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e86bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e86bd: mov esp, ebp */
  esp = ebp;
/* 7e86bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e86c0: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e86c3: /* 7e86c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86c6: /* 7e86c6: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7e86c9: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e86ce: /* 7e86ce: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86e1: /* 7e86e1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e86e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86e6: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86ec: /* 7e86ec: test byte ptr [eax + 0x82], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x82u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86f3: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86f9: /* 7e86f9: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 7e86fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86fe: je 0x7e876d */
  if (zf) goto L_7e876d;
L_7e8700: /* 7e8700: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8702: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e8705: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e870bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e870b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e870f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8712: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8718: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e871eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e871e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8720: je 0x7e876a */
  if (zf) goto L_7e876a;
L_7e8722: /* 7e8722: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8725: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 7e8728: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7e872e: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e8734: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8739: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7e873f: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8745: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7e8748: fld dword ptr [ecx - 0x98] */
  { double v = F32((uint32_t)(ecx + 0xffffff68u)); FPUSH(v); }
/* 7e874e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7e8750: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8753: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8758: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e875b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e875e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e8761: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8764: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8767: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e876a: /* 7e876a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e876d: /* 7e876d: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8773: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8776: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e877cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e877c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e877e: je 0x7e8788 */
  if (zf) goto L_7e8788;
L_7e8780: /* 7e8780: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8783: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e8788u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
L_7e8788: /* 7e8788: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e878b: /* 7e878b: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8792: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e8794: /* 7e8794: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8797: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e879d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e879f: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e87a1: /* 7e87a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e87a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e87a4: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e87a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e87aa: /* 7e87aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e87ac: mov ecx, eax */
  ecx = eax;
/* 7e87ae: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x7e87b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87b4: mov esi, eax */
  esi = eax;
/* 7e87b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87b8: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e87ba: /* 7e87ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87bb: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7e87c0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7e87c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87c2: jne 0x7e8829 */
  if (!zf) goto L_7e8829;
L_7e87c4: /* 7e87c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87c7: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87ce: jne 0x7e882c */
  if (!zf) goto L_7e882c;
L_7e87d0: /* 7e87d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87d1: call 0x928730 */
  esp -= 4; W32(esp, 0x7e87d6u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 7e87d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87d9: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 7e87df: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7e87e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87e4: mov edi, esp */
  edi = esp;
/* 7e87e6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e87e8: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7e87eb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e87ee: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e87f1: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e87f4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e87fa: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e87fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87ff: mov edx, esp */
  edx = esp;
/* 7e8801: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7e8803: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8806: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e8809: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7e880c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e880d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e8810: call 0x6c8eae */
  esp -= 4; W32(esp, 0x7e8815u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 7e8815: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e8818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8819: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7e881eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7e881e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8821: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e8823: /* 7e8823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8824: call 0x928630 */
  esp -= 4; W32(esp, 0x7e8829u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_7e8829: /* 7e8829: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e882c: /* 7e882c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e882f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8831: jne 0x7e892d */
  if (!zf) goto L_7e892d;
L_7e8837: /* 7e8837: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e883a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7e883d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e883f: je 0x7e887e */
  if (zf) goto L_7e887e;
L_7e8841: /* 7e8841: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e884b: jne 0x7e887e */
  if (!zf) goto L_7e887e;
L_7e884d: /* 7e884d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e884e: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e8853u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e8853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8855: jne 0x7e887b */
  if (!zf) goto L_7e887b;
L_7e8857: /* 7e8857: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e885a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7e885d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8863: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e8869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8869: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e886c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e886f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 7e8872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8875: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e887b: /* 7e887b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e887e: /* 7e887e: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7e8884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8886: jne 0x7e8896 */
  if (!zf) goto L_7e8896;
L_7e8888: /* 7e8888: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e888e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8890: je 0x7e8896 */
  if (zf) goto L_7e8896;
L_7e8892: /* 7e8892: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8894: jne 0x7e88ef */
  if (!zf) goto L_7e88ef;
L_7e8896: /* 7e8896: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e8899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e88a0: /* 7e88a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88a2: je 0x7e88ef */
  if (zf) goto L_7e88ef;
L_7e88a4: /* 7e88a4: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 7e88a7: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e88aa: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e88ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e88af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e88b2: jp 0x7e88ef */
  if (pf) goto L_7e88ef;
L_7e88b4: /* 7e88b4: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e88b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88b9: je 0x7e88cb */
  if (zf) goto L_7e88cb;
L_7e88bb: /* 7e88bb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88bf: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e88c4u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e88c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88c6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88c8: /* 7e88c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88cb: /* 7e88cb: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e88ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e88cf: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e88d4u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e88d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88d6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88d8: /* 7e88d8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e88de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e88e0: je 0x7e88eb */
  if (zf) goto L_7e88eb;
L_7e88e2: /* 7e88e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88e3: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7e88e8u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7e88e8: /* 7e88e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88eb: /* 7e88eb: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e88ed: jmp 0x7e88a0 */
  goto L_7e88a0;
L_7e88ef: /* 7e88ef: xor esi, esi */
  esi = 0;
L_7e88f1: /* 7e88f1: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e88f7: jge 0x7e892d */
  if ((sf == of)) goto L_7e892d;
L_7e88f9: /* 7e88f9: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e88ff: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7e8902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8904: je 0x7e892a */
  if (zf) goto L_7e892a;
L_7e8906: /* 7e8906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8909: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7e890eu); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7e890e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8913: jne 0x7e892a */
  if (!zf) goto L_7e892a;
L_7e8915: /* 7e8915: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e891b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e891c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e891f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8920: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e8925u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e8925: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8928: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892a: /* 7e892a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e892b: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892d: /* 7e892d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e8930: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8935: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e893bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e893b: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e8941: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8947u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8947: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e894a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e894c: jne 0x7e8956 */
  if (!zf) goto L_7e8956;
L_7e894e: /* 7e894e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8951: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e8956u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e8956: /* 7e8956: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e895c: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e8962: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e8965: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8969: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e896c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e896e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8970: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e8973: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 7e8976: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e897c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e897e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8981: jne 0x7e7ca6 */
  if (!zf) goto L_7e7ca6;
L_7e8987: /* 7e8987: jmp 0x7e771b */
  goto L_7e771b;
}

void f_7e7cbb(void) {
  LOAD_REGS();
  goto L_7e7cbb;
L_7e771b: /* 7e771b: mov eax, 1 */
  eax = 0x1u;
/* 7e7720: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e772a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e772b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e772c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e772d: mov esp, ebp */
  esp = ebp;
/* 7e772f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7730: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7ca6: /* 7e7ca6: xor eax, eax */
  eax = 0;
/* 7e7ca8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7cab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e7cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7cb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e7cb5: mov esp, ebp */
  esp = ebp;
/* 7e7cb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7cb8: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7cbb: /* 7e7cbb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7cbe: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cc5: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cc7: /* 7e7cc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7cca: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* 7e7cd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cd2: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cd4: /* 7e7cd4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7cd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7cd7: mov ecx, eax */
  ecx = eax;
/* 7e7cd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e7cdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7cdc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cdf: /* 7e7cdf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7ce2: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e7ce8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7cea: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e7cec: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7cef: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7cf2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7cf5: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7cf8: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e7cfb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7cfe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d01: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7d06: mov ecx, eax */
  ecx = eax;
/* 7e7d08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7d0a: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7e7d0d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7d10: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7e7d13: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7d16: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7e7d19: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7e7d1c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e7d1e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e7d21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e7d24: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7e7d27: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e7d2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d2d: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* 7e7d33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e7d35: jle 0x7e86e1 */
  if ((zf || sf != of)) goto L_7e86e1;
L_7e7d3b: /* 7e7d3b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e7d3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d40: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e7d46: /* 7e7d46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e7d4f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7d55u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7d55: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d59: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* 7e7d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d60: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d66: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d69: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d6fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d6f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d75: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 7e7d78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7d79: lea eax, [ebp - 0x1b4] */
  eax = (uint32_t)(ebp + 0xfffffe4cu);
/* 7e7d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d80: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d83: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d89u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7d8c: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d93: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d96: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e7d9cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d9e: je 0x7e7e07 */
  if (zf) goto L_7e7e07;
L_7e7da0: /* 7e7da0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7da3: mov edx, dword ptr [eax + 0x184] */
  edx = R32((uint32_t)(eax + 0x184u));
/* 7e7da9: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e7dac: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7db2: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7db8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dba: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e7dbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dbe: mov edx, dword ptr [eax + 0x180] */
  edx = R32((uint32_t)(eax + 0x180u));
/* 7e7dc4: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7dca: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7dd0: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dd3: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* 7e7dd9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e7ddc: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7de2: and eax, 0xfffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e7de7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dea: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e7df0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7df6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7df6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e7df8: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7e7dfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7dfe: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 7e7e01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7e04: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_7e7e07: /* 7e7e07: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7e0a: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7e7e10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7e12: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7e7e15: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7e18: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7e1b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e7e1e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7e21: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e7e24: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7e27: mov dword ptr [ebp - 0x154], edx */
  W32((uint32_t)(ebp + 0xfffffeacu), edx);
/* 7e7e2d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7e30: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 7e7e3a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7e7e44: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7e7e4e: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 7e7e58: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7e7e62: mov dword ptr [ebp - 0x170], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x3f800000u);
/* 7e7e6c: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7e7e76: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7e7e80: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 7e7e8a: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7e7e94: mov dword ptr [ebp - 0x15c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x3f800000u);
/* 7e7e9e: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7e7ea8: mov dword ptr [ebp - 0x150], ecx */
  W32((uint32_t)(ebp + 0xfffffeb0u), ecx);
/* 7e7eae: mov dword ptr [ebp - 0x14c], edx */
  W32((uint32_t)(ebp + 0xfffffeb4u), edx);
/* 7e7eb4: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 7e7ebe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7ec3: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7ec9: lea edi, [ebp - 0x2e4] */
  edi = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7ecf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ed1: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7ed6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7edb: mov ecx, esp */
  ecx = esp;
/* 7e7edd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7edf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7ee2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7ee5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e7ee8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7eeb: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7ef1: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7e7ef6u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7e7ef6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ef9: mov edi, esp */
  edi = esp;
/* 7e7efb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7f00: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f06: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7f08: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e7f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7f0f: mov ecx, eax */
  ecx = eax;
/* 7e7f11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e7f15: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e7f1bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e7f1b: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7f21: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e7f25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f2b: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7f31: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e7f35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f3b: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f41: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e7f45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7f4e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e7f55: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e7f60: /* 7e7f60: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7f63: cmp edx, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7f69: jge 0x7e86ce */
  if ((sf == of)) goto L_7e86ce;
L_7e7f6f: /* 7e7f6f: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7f75: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 7e7f78: xor edi, edi */
  edi = 0;
/* 7e7f7a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7f7c: je 0x7e86c6 */
  if (zf) goto L_7e86c6;
L_7e7f82: /* 7e7f82: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7e7f88: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7f8b: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 7e7f8e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 7e7f91: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 7e7f94: mov dword ptr [ebp - 0x138], edi */
  W32((uint32_t)(ebp + 0xfffffec8u), edi);
/* 7e7f9a: mov dword ptr [ebp - 0x134], edi */
  W32((uint32_t)(ebp + 0xfffffeccu), edi);
/* 7e7fa0: mov dword ptr [ebp - 0x130], edi */
  W32((uint32_t)(ebp + 0xfffffed0u), edi);
/* 7e7fa6: mov dword ptr [ebp - 0x12c], edi */
  W32((uint32_t)(ebp + 0xfffffed4u), edi);
/* 7e7fac: mov dword ptr [ebp - 0x128], edi */
  W32((uint32_t)(ebp + 0xfffffed8u), edi);
/* 7e7fb2: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 7e7fb8: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 7e7fbe: mov dword ptr [ebp - 0x11c], edi */
  W32((uint32_t)(ebp + 0xfffffee4u), edi);
/* 7e7fc4: mov dword ptr [ebp - 0x118], edi */
  W32((uint32_t)(ebp + 0xfffffee8u), edi);
/* 7e7fca: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 7e7fd4: mov dword ptr [ebp - 0x110], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffef0u), 0xffffffffu);
/* 7e7fde: mov dword ptr [ebp - 0x10c], edi */
  W32((uint32_t)(ebp + 0xfffffef4u), edi);
/* 7e7fe4: je 0x7e8111 */
  if (zf) goto L_7e8111;
L_7e7fea: /* 7e7fea: test byte ptr [ebx + 0x88], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ff1: jne 0x7e8111 */
  if (!zf) goto L_7e8111;
L_7e7ff7: /* 7e7ff7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ffa: mov edi, esp */
  edi = esp;
/* 7e7ffc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e8001: lea esi, [ebp - 0x298] */
  esi = (uint32_t)(ebp + 0xfffffd68u);
/* 7e8007: lea eax, [ebp - 0x258] */
  eax = (uint32_t)(ebp + 0xfffffda8u);
/* 7e800d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e800f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8010: lea ecx, [ebx + 0x220] */
  ecx = (uint32_t)(ebx + 0x220u);
/* 7e8016: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e801cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e801c: mov ecx, dword ptr [ebp - 0x228] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd8u));
/* 7e8022: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 7e8028: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 7e802e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7e8031: lea ecx, [ebp - 0x354] */
  ecx = (uint32_t)(ebp + 0xfffffcacu);
/* 7e8037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8038: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e803e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7e8042: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e8045: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e8048: call dword ptr [0xcfaa78] */
  esp -= 4; W32(esp, 0x7e804eu); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* 7e804e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e8054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8055: lea edx, [ebp - 0x384] */
  edx = (uint32_t)(ebp + 0xfffffc7cu);
/* 7e805b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e805c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e805f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x7e8065u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e8065: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7e806b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e806c: mov ecx, eax */
  ecx = eax;
/* 7e806e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x7e8074u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 7e8074: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e8077: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 7e807d: mov esi, dword ptr [ebp - 0x98] */
  esi = R32((uint32_t)(ebp + 0xffffff68u));
/* 7e8083: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e8086: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8089: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 7e808f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8091: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e8094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8096: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 7e809c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e809e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a2: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e80a8: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 7e80ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e80af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80b2: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7e80b8: mov eax, esp */
  eax = esp;
/* 7e80ba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80bc: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 7e80c2: mov esi, dword ptr [ebp - 0x94] */
  esi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7e80c8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80cb: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 7e80d1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80d4: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* 7e80da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80dd: mov eax, esp */
  eax = esp;
/* 7e80df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80e1: mov esi, dword ptr [ebp - 0xe8] */
  esi = R32((uint32_t)(ebp + 0xffffff18u));
/* 7e80e7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80ea: mov esi, dword ptr [ebp - 0xe4] */
  esi = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7e80f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e80f1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e80fa: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e8100: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e8104: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e810au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e810a: xor edi, edi */
  edi = 0;
/* 7e810c: jmp 0x7e83d7 */
  goto L_7e83d7;
L_7e8111: /* 7e8111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8112: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e8115: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e811bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e811b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e811e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e811f: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7e8125: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e812bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e812b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e812d: je 0x7e83d7 */
  if (zf) goto L_7e83d7;
L_7e8133: /* 7e8133: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 7e8136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e8137: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7e813d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e813e: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7e8144: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x7e814au); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e814a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e814d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8154: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8157: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e815du); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e815d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e815f: je 0x7e835d */
  if (zf) goto L_7e835d;
L_7e8165: /* 7e8165: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8167: mov ecx, ebx */
  ecx = ebx;
/* 7e8169: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x7e816fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e816f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8171: je 0x7e818a */
  if (zf) goto L_7e818a;
L_7e8173: /* 7e8173: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7e8178: mov ecx, ebx */
  ecx = ebx;
/* 7e817a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e8180u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e8180: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e8182: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e8184: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e8186: mov esi, eax */
  esi = eax;
/* 7e8188: jmp 0x7e818c */
  goto L_7e818c;
L_7e818a: /* 7e818a: xor esi, esi */
  esi = 0;
L_7e818c: /* 7e818c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e818e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7e8195: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e8197: /* 7e8197: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7e819d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e819f: je 0x7e81c1 */
  if (zf) goto L_7e81c1;
L_7e81a1: /* 7e81a1: fild dword ptr [eax + 0x184] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 7e81a7: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e81aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e81ab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 7e81b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e81b2: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7e81b5: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e81bb: call dword ptr [0xcfaa70] */
  esp -= 4; W32(esp, 0x7e81c1u); SPILL(); f_4e12e9(); if (g_unwind) return; /* Core!??YFRotator@@QAE?AV0@ABV0@@Z */ RELOAD();
L_7e81c1: /* 7e81c1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7e81c7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e81ca: jne 0x7e81f0 */
  if (!zf) goto L_7e81f0;
L_7e81cc: /* 7e81cc: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 7e81d2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e81d4: mov eax, dword ptr [ebx + 0x184] */
  eax = R32((uint32_t)(ebx + 0x184u));
/* 7e81da: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 7e81e0: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e81e2: /* 7e81e2: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7e81e5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7e81eau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7e81ea: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
L_7e81f0: /* 7e81f0: fld dword ptr [ebp - 0x1bc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe44u)); FPUSH(v); }
/* 7e81f6: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e81fc: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 7e8202: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8208: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e820a: fld dword ptr [ebp - 0x1c0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe40u)); FPUSH(v); }
/* 7e8210: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e8216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8218: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 7e821e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8220: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 7e8226: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8228: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e822b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 7e8231: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8233: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 7e8239: fld dword ptr [ebp - 0x1c8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe38u)); FPUSH(v); }
/* 7e823f: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8245: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 7e824b: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8253: fld dword ptr [ebp - 0x1cc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe34u)); FPUSH(v); }
/* 7e8259: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e825f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8261: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 7e8267: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8269: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 7e826f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8271: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7e8274: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 7e827a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e827c: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 7e8282: fld dword ptr [ebp - 0x1d4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe2cu)); FPUSH(v); }
/* 7e8288: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e828e: fld dword ptr [ebp - 0x1d0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe30u)); FPUSH(v); }
/* 7e8294: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e829a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e829c: fld dword ptr [ebp - 0x1d8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe28u)); FPUSH(v); }
/* 7e82a2: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e82a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e82aa: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 7e82b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82b2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82b5: fld dword ptr [ebp - 0x1a4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe5cu)); FPUSH(v); }
/* 7e82bb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82bd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e82c0: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 7e82c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82c8: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 7e82ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82d3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82d5: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e82dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e82df: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82e2: fld dword ptr [ebp - 0x200] */
  { double v = F32((uint32_t)(ebp + 0xfffffe00u)); FPUSH(v); }
/* 7e82e8: fadd dword ptr [ebp - 0x1f4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe0cu)));
/* 7e82ee: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 7e82f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82f6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82fa: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82fd: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7e8300: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e8303: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 7e8309: fadd dword ptr [ebp - 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdf4u)));
/* 7e830f: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 7e8315: fsub dword ptr [ebx + 0x210] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x210u)));
/* 7e831b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7e831e: fsub dword ptr [ebx + 0x20c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8324: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 7e832a: fsub dword ptr [ebx + 0x208] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x208u)));
/* 7e8330: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 7e8336: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7e833c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 7e8342: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 7e8348: mov edx, dword ptr [ebp - 0xf4] */
  edx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 7e834e: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 7e8354: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e8357: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e835a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_7e835d: /* 7e835d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e8360: mov esi, dword ptr [ebp - 0xd4] */
  esi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7e8366: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e8369: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e836c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e836f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8370: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e8373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8375: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e8378: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e837a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e837d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e8385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8386: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7e838c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e838f: mov eax, esp */
  eax = esp;
/* 7e8391: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 7e8397: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e8399: mov esi, dword ptr [ebp - 0xd0] */
  esi = R32((uint32_t)(ebp + 0xffffff30u));
/* 7e839f: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 7e83a5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83a8: mov esi, dword ptr [ebp - 0xcc] */
  esi = R32((uint32_t)(ebp + 0xffffff34u));
/* 7e83ae: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83b1: mov esi, dword ptr [ebp - 0xe0] */
  esi = R32((uint32_t)(ebp + 0xffffff20u));
/* 7e83b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e83ba: mov eax, esp */
  eax = esp;
/* 7e83bc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e83be: mov esi, dword ptr [ebp - 0xdc] */
  esi = R32((uint32_t)(ebp + 0xffffff24u));
/* 7e83c4: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83c7: mov esi, dword ptr [ebp - 0xd8] */
  esi = R32((uint32_t)(ebp + 0xffffff28u));
/* 7e83cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e83ce: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83d1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e83d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e83d7: /* 7e83d7: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83da: jne 0x7e86c3 */
  if (!zf) goto L_7e86c3;
L_7e83e0: /* 7e83e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e83e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e83e4: mov ecx, ebx */
  ecx = ebx;
/* 7e83e6: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e83ebu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e83eb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83ed: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e83f3: /* 7e83f3: cmp dword ptr [ebx + 0x280], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x280u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83f9: mov dword ptr [ebp - 0xc8], edi */
  W32((uint32_t)(ebp + 0xffffff38u), edi);
/* 7e83ff: mov dword ptr [ebp - 0xc4], edi */
  W32((uint32_t)(ebp + 0xffffff3cu), edi);
/* 7e8405: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e840f: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e8419: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e8423: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e842d: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e8437: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e8441: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* 7e8447: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e8451: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e845b: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 7e8461: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8467: /* 7e8467: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8469: mov ecx, ebx */
  ecx = ebx;
/* 7e846b: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x7e8471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8471: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8473: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8479: /* 7e8479: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e847b: mov ecx, ebx */
  ecx = ebx;
/* 7e847d: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8483u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8483: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e8486: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e848c: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e8492: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e8498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8499: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e849b: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7e84a1: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 7e84a7: mov edi, dword ptr [ebp - 0x108] */
  edi = R32((uint32_t)(ebp + 0xfffffef8u));
/* 7e84ad: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7e84b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84b6: mov ecx, esp */
  ecx = esp;
/* 7e84b8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84ba: mov edi, dword ptr [ebp - 0x104] */
  edi = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7e84c0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84c3: mov edi, dword ptr [ebp - 0x100] */
  edi = R32((uint32_t)(ebp + 0xffffff00u));
/* 7e84c9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e84cc: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e84d2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e84d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84d7: mov ecx, esp */
  ecx = esp;
/* 7e84d9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84db: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e84de: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e84e1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e84e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e84e8: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e84ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e84ef: mov ecx, eax */
  ecx = eax;
/* 7e84f1: call dword ptr [esi + 0x68] */
  { uint32_t t = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, 0x7e84f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e84f4: jmp 0x7e8560 */
  goto L_7e8560;
L_7e84f6: /* 7e84f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e84f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e84fb: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8501: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7e8507: mov ecx, dword ptr [ebx + 0x2d4] */
  ecx = R32((uint32_t)(ebx + 0x2d4u));
/* 7e850d: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7e8513: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7e8516: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e8519: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e851c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e851d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8520: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e8522: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8525: mov ecx, esp */
  ecx = esp;
/* 7e8527: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e8529: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e852c: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e852f: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8532: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e8535: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8538: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7e853e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e8540: mov esi, esp */
  esi = esp;
/* 7e8542: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e8544: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8547: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e854a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e854d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7e8550: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8554: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e855a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e855b: mov ecx, eax */
  ecx = eax;
/* 7e855d: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7e8560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e8560: /* 7e8560: xor edx, edx */
  edx = 0;
/* 7e8562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8564: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e8567: mov eax, edx */
  eax = edx;
/* 7e8569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e856b: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8571: /* 7e8571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8574: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e8575: call 0x6ccb53 */
  esp -= 4; W32(esp, 0x7e857au); SPILL(); f_6ccb53(); if (g_unwind) return; RELOAD();
/* 7e857a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e857c: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8582: /* 7e8582: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8585: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7e858b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8590: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e8593: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e8595: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7e8598: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e859b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e859e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7e85a1: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e85a4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e85a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e85aa: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e85ad: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e85b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e85b4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e85b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e85ba: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e85bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e85c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e85c3: test byte ptr [edx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85ca: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85cc: /* 7e85cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e85cf: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7e85d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85d7: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85d9: /* 7e85d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e85db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e85dc: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7e85dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e85df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e85e2: /* 7e85e2: xor esi, esi */
  esi = 0;
L_7e85e4: /* 7e85e4: cmp esi, dword ptr [edx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e85ea: jge 0x7e8679 */
  if ((sf == of)) goto L_7e8679;
L_7e85f0: /* 7e85f0: mov ecx, dword ptr [edx + 0x1fc] */
  ecx = R32((uint32_t)(edx + 0x1fcu));
/* 7e85f6: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7e85f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85fb: je 0x7e8673 */
  if (zf) goto L_7e8673;
L_7e85fd: /* 7e85fd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e8600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8602: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8608: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e860b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e860e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e8610: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8616: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e8618: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e861b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e861d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8625: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 7e862b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e862c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e862f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8632: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e8638: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7e863a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e863d: mov edi, esp */
  edi = esp;
/* 7e863f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e8641: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8644: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 7e8647: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e864a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e864d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 7e8650: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8653: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8656: mov ecx, esp */
  ecx = esp;
/* 7e8658: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e865a: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e865d: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e8660: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8663: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e8666: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e866a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e8670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8670: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e8673: /* 7e8673: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e8674: jmp 0x7e85e4 */
  goto L_7e85e4;
L_7e8679: /* 7e8679: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e867f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8685u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8685: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7e868b: mov eax, dword ptr [0xce8480] */
  eax = R32((uint32_t)(0xce8480u));
/* 7e8690: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7e8693: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8695: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8697: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e869a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e869c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e869e: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86a4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86a8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86aeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e86b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e86b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e86b3: xor eax, eax */
  eax = 0;
/* 7e86b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e86bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e86bd: mov esp, ebp */
  esp = ebp;
/* 7e86bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e86c0: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e86c3: /* 7e86c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86c6: /* 7e86c6: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7e86c9: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e86ce: /* 7e86ce: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86e1: /* 7e86e1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e86e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86e6: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86ec: /* 7e86ec: test byte ptr [eax + 0x82], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x82u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86f3: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86f9: /* 7e86f9: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 7e86fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86fe: je 0x7e876d */
  if (zf) goto L_7e876d;
L_7e8700: /* 7e8700: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8702: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e8705: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e870bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e870b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e870f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8712: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8718: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e871eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e871e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8720: je 0x7e876a */
  if (zf) goto L_7e876a;
L_7e8722: /* 7e8722: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8725: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 7e8728: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7e872e: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e8734: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8739: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7e873f: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8745: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7e8748: fld dword ptr [ecx - 0x98] */
  { double v = F32((uint32_t)(ecx + 0xffffff68u)); FPUSH(v); }
/* 7e874e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7e8750: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8753: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8758: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e875b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e875e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e8761: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8764: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8767: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e876a: /* 7e876a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e876d: /* 7e876d: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8773: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8776: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e877cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e877c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e877e: je 0x7e8788 */
  if (zf) goto L_7e8788;
L_7e8780: /* 7e8780: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8783: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e8788u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
L_7e8788: /* 7e8788: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e878b: /* 7e878b: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8792: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e8794: /* 7e8794: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8797: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e879d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e879f: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e87a1: /* 7e87a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e87a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e87a4: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e87a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e87aa: /* 7e87aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e87ac: mov ecx, eax */
  ecx = eax;
/* 7e87ae: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x7e87b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87b4: mov esi, eax */
  esi = eax;
/* 7e87b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87b8: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e87ba: /* 7e87ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87bb: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7e87c0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7e87c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87c2: jne 0x7e8829 */
  if (!zf) goto L_7e8829;
L_7e87c4: /* 7e87c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87c7: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87ce: jne 0x7e882c */
  if (!zf) goto L_7e882c;
L_7e87d0: /* 7e87d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87d1: call 0x928730 */
  esp -= 4; W32(esp, 0x7e87d6u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 7e87d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87d9: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 7e87df: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7e87e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87e4: mov edi, esp */
  edi = esp;
/* 7e87e6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e87e8: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7e87eb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e87ee: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e87f1: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e87f4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e87fa: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e87fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87ff: mov edx, esp */
  edx = esp;
/* 7e8801: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7e8803: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8806: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e8809: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7e880c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e880d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e8810: call 0x6c8eae */
  esp -= 4; W32(esp, 0x7e8815u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 7e8815: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e8818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8819: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7e881eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7e881e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8821: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e8823: /* 7e8823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8824: call 0x928630 */
  esp -= 4; W32(esp, 0x7e8829u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_7e8829: /* 7e8829: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e882c: /* 7e882c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e882f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8831: jne 0x7e892d */
  if (!zf) goto L_7e892d;
L_7e8837: /* 7e8837: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e883a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7e883d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e883f: je 0x7e887e */
  if (zf) goto L_7e887e;
L_7e8841: /* 7e8841: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e884b: jne 0x7e887e */
  if (!zf) goto L_7e887e;
L_7e884d: /* 7e884d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e884e: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e8853u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e8853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8855: jne 0x7e887b */
  if (!zf) goto L_7e887b;
L_7e8857: /* 7e8857: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e885a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7e885d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8863: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e8869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8869: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e886c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e886f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 7e8872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8875: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e887b: /* 7e887b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e887e: /* 7e887e: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7e8884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8886: jne 0x7e8896 */
  if (!zf) goto L_7e8896;
L_7e8888: /* 7e8888: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e888e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8890: je 0x7e8896 */
  if (zf) goto L_7e8896;
L_7e8892: /* 7e8892: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8894: jne 0x7e88ef */
  if (!zf) goto L_7e88ef;
L_7e8896: /* 7e8896: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e8899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e88a0: /* 7e88a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88a2: je 0x7e88ef */
  if (zf) goto L_7e88ef;
L_7e88a4: /* 7e88a4: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 7e88a7: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e88aa: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e88ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e88af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e88b2: jp 0x7e88ef */
  if (pf) goto L_7e88ef;
L_7e88b4: /* 7e88b4: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e88b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88b9: je 0x7e88cb */
  if (zf) goto L_7e88cb;
L_7e88bb: /* 7e88bb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88bf: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e88c4u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e88c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88c6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88c8: /* 7e88c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88cb: /* 7e88cb: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e88ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e88cf: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e88d4u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e88d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88d6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88d8: /* 7e88d8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e88de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e88e0: je 0x7e88eb */
  if (zf) goto L_7e88eb;
L_7e88e2: /* 7e88e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88e3: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7e88e8u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7e88e8: /* 7e88e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88eb: /* 7e88eb: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e88ed: jmp 0x7e88a0 */
  goto L_7e88a0;
L_7e88ef: /* 7e88ef: xor esi, esi */
  esi = 0;
L_7e88f1: /* 7e88f1: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e88f7: jge 0x7e892d */
  if ((sf == of)) goto L_7e892d;
L_7e88f9: /* 7e88f9: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e88ff: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7e8902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8904: je 0x7e892a */
  if (zf) goto L_7e892a;
L_7e8906: /* 7e8906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8909: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7e890eu); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7e890e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8913: jne 0x7e892a */
  if (!zf) goto L_7e892a;
L_7e8915: /* 7e8915: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e891b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e891c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e891f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8920: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e8925u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e8925: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8928: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892a: /* 7e892a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e892b: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892d: /* 7e892d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e8930: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8935: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e893bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e893b: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e8941: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8947u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8947: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e894a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e894c: jne 0x7e8956 */
  if (!zf) goto L_7e8956;
L_7e894e: /* 7e894e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8951: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e8956u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e8956: /* 7e8956: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e895c: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e8962: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e8965: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8969: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e896c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e896e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8970: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e8973: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 7e8976: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e897c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e897e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8981: jne 0x7e7ca6 */
  if (!zf) goto L_7e7ca6;
L_7e8987: /* 7e8987: jmp 0x7e771b */
  goto L_7e771b;
}

void f_7e7f57(void) {
  LOAD_REGS();
  goto L_7e7f57;
L_7e771b: /* 7e771b: mov eax, 1 */
  eax = 0x1u;
/* 7e7720: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e772a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e772b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e772c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e772d: mov esp, ebp */
  esp = ebp;
/* 7e772f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7730: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7ca6: /* 7e7ca6: xor eax, eax */
  eax = 0;
/* 7e7ca8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7cab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e7cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7cb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e7cb5: mov esp, ebp */
  esp = ebp;
/* 7e7cb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7cb8: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7f57: /* 7e7f57: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7e7f5e: mov edi, edi */
  edi = edi;
L_7e7f60: /* 7e7f60: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7f63: cmp edx, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7f69: jge 0x7e86ce */
  if ((sf == of)) goto L_7e86ce;
L_7e7f6f: /* 7e7f6f: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7f75: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 7e7f78: xor edi, edi */
  edi = 0;
/* 7e7f7a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7f7c: je 0x7e86c6 */
  if (zf) goto L_7e86c6;
L_7e7f82: /* 7e7f82: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7e7f88: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7f8b: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 7e7f8e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 7e7f91: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 7e7f94: mov dword ptr [ebp - 0x138], edi */
  W32((uint32_t)(ebp + 0xfffffec8u), edi);
/* 7e7f9a: mov dword ptr [ebp - 0x134], edi */
  W32((uint32_t)(ebp + 0xfffffeccu), edi);
/* 7e7fa0: mov dword ptr [ebp - 0x130], edi */
  W32((uint32_t)(ebp + 0xfffffed0u), edi);
/* 7e7fa6: mov dword ptr [ebp - 0x12c], edi */
  W32((uint32_t)(ebp + 0xfffffed4u), edi);
/* 7e7fac: mov dword ptr [ebp - 0x128], edi */
  W32((uint32_t)(ebp + 0xfffffed8u), edi);
/* 7e7fb2: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 7e7fb8: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 7e7fbe: mov dword ptr [ebp - 0x11c], edi */
  W32((uint32_t)(ebp + 0xfffffee4u), edi);
/* 7e7fc4: mov dword ptr [ebp - 0x118], edi */
  W32((uint32_t)(ebp + 0xfffffee8u), edi);
/* 7e7fca: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 7e7fd4: mov dword ptr [ebp - 0x110], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffef0u), 0xffffffffu);
/* 7e7fde: mov dword ptr [ebp - 0x10c], edi */
  W32((uint32_t)(ebp + 0xfffffef4u), edi);
/* 7e7fe4: je 0x7e8111 */
  if (zf) goto L_7e8111;
L_7e7fea: /* 7e7fea: test byte ptr [ebx + 0x88], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ff1: jne 0x7e8111 */
  if (!zf) goto L_7e8111;
L_7e7ff7: /* 7e7ff7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ffa: mov edi, esp */
  edi = esp;
/* 7e7ffc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e8001: lea esi, [ebp - 0x298] */
  esi = (uint32_t)(ebp + 0xfffffd68u);
/* 7e8007: lea eax, [ebp - 0x258] */
  eax = (uint32_t)(ebp + 0xfffffda8u);
/* 7e800d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e800f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8010: lea ecx, [ebx + 0x220] */
  ecx = (uint32_t)(ebx + 0x220u);
/* 7e8016: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e801cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e801c: mov ecx, dword ptr [ebp - 0x228] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd8u));
/* 7e8022: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 7e8028: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 7e802e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7e8031: lea ecx, [ebp - 0x354] */
  ecx = (uint32_t)(ebp + 0xfffffcacu);
/* 7e8037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8038: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e803e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7e8042: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e8045: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e8048: call dword ptr [0xcfaa78] */
  esp -= 4; W32(esp, 0x7e804eu); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* 7e804e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e8054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8055: lea edx, [ebp - 0x384] */
  edx = (uint32_t)(ebp + 0xfffffc7cu);
/* 7e805b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e805c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e805f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x7e8065u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e8065: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7e806b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e806c: mov ecx, eax */
  ecx = eax;
/* 7e806e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x7e8074u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 7e8074: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e8077: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 7e807d: mov esi, dword ptr [ebp - 0x98] */
  esi = R32((uint32_t)(ebp + 0xffffff68u));
/* 7e8083: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e8086: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8089: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 7e808f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8091: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e8094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8096: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 7e809c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e809e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a2: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e80a8: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 7e80ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e80af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80b2: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7e80b8: mov eax, esp */
  eax = esp;
/* 7e80ba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80bc: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 7e80c2: mov esi, dword ptr [ebp - 0x94] */
  esi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7e80c8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80cb: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 7e80d1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80d4: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* 7e80da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80dd: mov eax, esp */
  eax = esp;
/* 7e80df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80e1: mov esi, dword ptr [ebp - 0xe8] */
  esi = R32((uint32_t)(ebp + 0xffffff18u));
/* 7e80e7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80ea: mov esi, dword ptr [ebp - 0xe4] */
  esi = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7e80f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e80f1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e80fa: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e8100: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e8104: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e810au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e810a: xor edi, edi */
  edi = 0;
/* 7e810c: jmp 0x7e83d7 */
  goto L_7e83d7;
L_7e8111: /* 7e8111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8112: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e8115: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e811bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e811b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e811e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e811f: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7e8125: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e812bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e812b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e812d: je 0x7e83d7 */
  if (zf) goto L_7e83d7;
L_7e8133: /* 7e8133: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 7e8136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e8137: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7e813d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e813e: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7e8144: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x7e814au); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e814a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e814d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8154: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8157: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e815du); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e815d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e815f: je 0x7e835d */
  if (zf) goto L_7e835d;
L_7e8165: /* 7e8165: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8167: mov ecx, ebx */
  ecx = ebx;
/* 7e8169: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x7e816fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e816f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8171: je 0x7e818a */
  if (zf) goto L_7e818a;
L_7e8173: /* 7e8173: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7e8178: mov ecx, ebx */
  ecx = ebx;
/* 7e817a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e8180u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e8180: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e8182: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e8184: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e8186: mov esi, eax */
  esi = eax;
/* 7e8188: jmp 0x7e818c */
  goto L_7e818c;
L_7e818a: /* 7e818a: xor esi, esi */
  esi = 0;
L_7e818c: /* 7e818c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e818e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7e8195: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e8197: /* 7e8197: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7e819d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e819f: je 0x7e81c1 */
  if (zf) goto L_7e81c1;
L_7e81a1: /* 7e81a1: fild dword ptr [eax + 0x184] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 7e81a7: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e81aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e81ab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 7e81b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e81b2: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7e81b5: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e81bb: call dword ptr [0xcfaa70] */
  esp -= 4; W32(esp, 0x7e81c1u); SPILL(); f_4e12e9(); if (g_unwind) return; /* Core!??YFRotator@@QAE?AV0@ABV0@@Z */ RELOAD();
L_7e81c1: /* 7e81c1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7e81c7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e81ca: jne 0x7e81f0 */
  if (!zf) goto L_7e81f0;
L_7e81cc: /* 7e81cc: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 7e81d2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e81d4: mov eax, dword ptr [ebx + 0x184] */
  eax = R32((uint32_t)(ebx + 0x184u));
/* 7e81da: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 7e81e0: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e81e2: /* 7e81e2: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7e81e5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7e81eau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7e81ea: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
L_7e81f0: /* 7e81f0: fld dword ptr [ebp - 0x1bc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe44u)); FPUSH(v); }
/* 7e81f6: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e81fc: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 7e8202: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8208: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e820a: fld dword ptr [ebp - 0x1c0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe40u)); FPUSH(v); }
/* 7e8210: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e8216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8218: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 7e821e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8220: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 7e8226: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8228: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e822b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 7e8231: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8233: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 7e8239: fld dword ptr [ebp - 0x1c8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe38u)); FPUSH(v); }
/* 7e823f: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8245: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 7e824b: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8253: fld dword ptr [ebp - 0x1cc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe34u)); FPUSH(v); }
/* 7e8259: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e825f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8261: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 7e8267: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8269: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 7e826f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8271: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7e8274: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 7e827a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e827c: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 7e8282: fld dword ptr [ebp - 0x1d4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe2cu)); FPUSH(v); }
/* 7e8288: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e828e: fld dword ptr [ebp - 0x1d0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe30u)); FPUSH(v); }
/* 7e8294: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e829a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e829c: fld dword ptr [ebp - 0x1d8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe28u)); FPUSH(v); }
/* 7e82a2: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e82a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e82aa: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 7e82b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82b2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82b5: fld dword ptr [ebp - 0x1a4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe5cu)); FPUSH(v); }
/* 7e82bb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82bd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e82c0: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 7e82c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82c8: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 7e82ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82d3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82d5: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e82dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e82df: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82e2: fld dword ptr [ebp - 0x200] */
  { double v = F32((uint32_t)(ebp + 0xfffffe00u)); FPUSH(v); }
/* 7e82e8: fadd dword ptr [ebp - 0x1f4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe0cu)));
/* 7e82ee: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 7e82f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82f6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82fa: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82fd: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7e8300: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e8303: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 7e8309: fadd dword ptr [ebp - 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdf4u)));
/* 7e830f: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 7e8315: fsub dword ptr [ebx + 0x210] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x210u)));
/* 7e831b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7e831e: fsub dword ptr [ebx + 0x20c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8324: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 7e832a: fsub dword ptr [ebx + 0x208] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x208u)));
/* 7e8330: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 7e8336: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7e833c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 7e8342: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 7e8348: mov edx, dword ptr [ebp - 0xf4] */
  edx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 7e834e: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 7e8354: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e8357: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e835a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_7e835d: /* 7e835d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e8360: mov esi, dword ptr [ebp - 0xd4] */
  esi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7e8366: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e8369: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e836c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e836f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8370: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e8373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8375: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e8378: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e837a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e837d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e8385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8386: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7e838c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e838f: mov eax, esp */
  eax = esp;
/* 7e8391: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 7e8397: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e8399: mov esi, dword ptr [ebp - 0xd0] */
  esi = R32((uint32_t)(ebp + 0xffffff30u));
/* 7e839f: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 7e83a5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83a8: mov esi, dword ptr [ebp - 0xcc] */
  esi = R32((uint32_t)(ebp + 0xffffff34u));
/* 7e83ae: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83b1: mov esi, dword ptr [ebp - 0xe0] */
  esi = R32((uint32_t)(ebp + 0xffffff20u));
/* 7e83b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e83ba: mov eax, esp */
  eax = esp;
/* 7e83bc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e83be: mov esi, dword ptr [ebp - 0xdc] */
  esi = R32((uint32_t)(ebp + 0xffffff24u));
/* 7e83c4: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83c7: mov esi, dword ptr [ebp - 0xd8] */
  esi = R32((uint32_t)(ebp + 0xffffff28u));
/* 7e83cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e83ce: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83d1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e83d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e83d7: /* 7e83d7: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83da: jne 0x7e86c3 */
  if (!zf) goto L_7e86c3;
L_7e83e0: /* 7e83e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e83e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e83e4: mov ecx, ebx */
  ecx = ebx;
/* 7e83e6: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e83ebu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e83eb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83ed: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e83f3: /* 7e83f3: cmp dword ptr [ebx + 0x280], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x280u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83f9: mov dword ptr [ebp - 0xc8], edi */
  W32((uint32_t)(ebp + 0xffffff38u), edi);
/* 7e83ff: mov dword ptr [ebp - 0xc4], edi */
  W32((uint32_t)(ebp + 0xffffff3cu), edi);
/* 7e8405: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e840f: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e8419: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e8423: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e842d: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e8437: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e8441: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* 7e8447: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e8451: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e845b: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 7e8461: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8467: /* 7e8467: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8469: mov ecx, ebx */
  ecx = ebx;
/* 7e846b: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x7e8471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8471: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8473: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8479: /* 7e8479: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e847b: mov ecx, ebx */
  ecx = ebx;
/* 7e847d: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8483u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8483: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e8486: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e848c: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e8492: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e8498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8499: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e849b: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7e84a1: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 7e84a7: mov edi, dword ptr [ebp - 0x108] */
  edi = R32((uint32_t)(ebp + 0xfffffef8u));
/* 7e84ad: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7e84b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84b6: mov ecx, esp */
  ecx = esp;
/* 7e84b8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84ba: mov edi, dword ptr [ebp - 0x104] */
  edi = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7e84c0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84c3: mov edi, dword ptr [ebp - 0x100] */
  edi = R32((uint32_t)(ebp + 0xffffff00u));
/* 7e84c9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e84cc: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e84d2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e84d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84d7: mov ecx, esp */
  ecx = esp;
/* 7e84d9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84db: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e84de: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e84e1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e84e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e84e8: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e84ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e84ef: mov ecx, eax */
  ecx = eax;
/* 7e84f1: call dword ptr [esi + 0x68] */
  { uint32_t t = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, 0x7e84f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e84f4: jmp 0x7e8560 */
  goto L_7e8560;
L_7e84f6: /* 7e84f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e84f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e84fb: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8501: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7e8507: mov ecx, dword ptr [ebx + 0x2d4] */
  ecx = R32((uint32_t)(ebx + 0x2d4u));
/* 7e850d: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7e8513: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7e8516: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e8519: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e851c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e851d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8520: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e8522: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8525: mov ecx, esp */
  ecx = esp;
/* 7e8527: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e8529: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e852c: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e852f: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8532: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e8535: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8538: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7e853e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e8540: mov esi, esp */
  esi = esp;
/* 7e8542: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e8544: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8547: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e854a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e854d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7e8550: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8554: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e855a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e855b: mov ecx, eax */
  ecx = eax;
/* 7e855d: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7e8560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e8560: /* 7e8560: xor edx, edx */
  edx = 0;
/* 7e8562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8564: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e8567: mov eax, edx */
  eax = edx;
/* 7e8569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e856b: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8571: /* 7e8571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8574: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e8575: call 0x6ccb53 */
  esp -= 4; W32(esp, 0x7e857au); SPILL(); f_6ccb53(); if (g_unwind) return; RELOAD();
/* 7e857a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e857c: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8582: /* 7e8582: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8585: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7e858b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8590: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e8593: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e8595: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7e8598: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e859b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e859e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7e85a1: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e85a4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e85a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e85aa: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e85ad: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e85b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e85b4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e85b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e85ba: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e85bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e85c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e85c3: test byte ptr [edx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85ca: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85cc: /* 7e85cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e85cf: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7e85d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85d7: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85d9: /* 7e85d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e85db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e85dc: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7e85dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e85df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e85e2: /* 7e85e2: xor esi, esi */
  esi = 0;
L_7e85e4: /* 7e85e4: cmp esi, dword ptr [edx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e85ea: jge 0x7e8679 */
  if ((sf == of)) goto L_7e8679;
L_7e85f0: /* 7e85f0: mov ecx, dword ptr [edx + 0x1fc] */
  ecx = R32((uint32_t)(edx + 0x1fcu));
/* 7e85f6: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7e85f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85fb: je 0x7e8673 */
  if (zf) goto L_7e8673;
L_7e85fd: /* 7e85fd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e8600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8602: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8608: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e860b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e860e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e8610: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8616: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e8618: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e861b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e861d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8625: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 7e862b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e862c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e862f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8632: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e8638: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7e863a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e863d: mov edi, esp */
  edi = esp;
/* 7e863f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e8641: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8644: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 7e8647: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e864a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e864d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 7e8650: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8653: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8656: mov ecx, esp */
  ecx = esp;
/* 7e8658: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e865a: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e865d: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e8660: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8663: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e8666: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e866a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e8670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8670: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e8673: /* 7e8673: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e8674: jmp 0x7e85e4 */
  goto L_7e85e4;
L_7e8679: /* 7e8679: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e867f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8685u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8685: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7e868b: mov eax, dword ptr [0xce8480] */
  eax = R32((uint32_t)(0xce8480u));
/* 7e8690: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7e8693: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8695: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8697: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e869a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e869c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e869e: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86a4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86a8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86aeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e86b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e86b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e86b3: xor eax, eax */
  eax = 0;
/* 7e86b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e86bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e86bd: mov esp, ebp */
  esp = ebp;
/* 7e86bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e86c0: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e86c3: /* 7e86c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86c6: /* 7e86c6: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7e86c9: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e86ce: /* 7e86ce: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e86e1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e86e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86e6: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86ec: /* 7e86ec: test byte ptr [eax + 0x82], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x82u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86f3: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86f9: /* 7e86f9: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 7e86fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86fe: je 0x7e876d */
  if (zf) goto L_7e876d;
L_7e8700: /* 7e8700: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8702: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e8705: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e870bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e870b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e870f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8712: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8718: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e871eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e871e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8720: je 0x7e876a */
  if (zf) goto L_7e876a;
L_7e8722: /* 7e8722: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8725: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 7e8728: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7e872e: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e8734: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8739: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7e873f: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8745: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7e8748: fld dword ptr [ecx - 0x98] */
  { double v = F32((uint32_t)(ecx + 0xffffff68u)); FPUSH(v); }
/* 7e874e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7e8750: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8753: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8758: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e875b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e875e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e8761: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8764: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8767: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e876a: /* 7e876a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e876d: /* 7e876d: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8773: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8776: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e877cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e877c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e877e: je 0x7e8788 */
  if (zf) goto L_7e8788;
L_7e8780: /* 7e8780: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8783: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e8788u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
L_7e8788: /* 7e8788: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e878b: /* 7e878b: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8792: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e8794: /* 7e8794: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8797: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e879d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e879f: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e87a1: /* 7e87a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e87a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e87a4: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e87a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e87aa: /* 7e87aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e87ac: mov ecx, eax */
  ecx = eax;
/* 7e87ae: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x7e87b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87b4: mov esi, eax */
  esi = eax;
/* 7e87b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87b8: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e87ba: /* 7e87ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87bb: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7e87c0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7e87c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87c2: jne 0x7e8829 */
  if (!zf) goto L_7e8829;
L_7e87c4: /* 7e87c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87c7: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87ce: jne 0x7e882c */
  if (!zf) goto L_7e882c;
L_7e87d0: /* 7e87d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87d1: call 0x928730 */
  esp -= 4; W32(esp, 0x7e87d6u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 7e87d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87d9: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 7e87df: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7e87e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87e4: mov edi, esp */
  edi = esp;
/* 7e87e6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e87e8: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7e87eb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e87ee: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e87f1: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e87f4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e87fa: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e87fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87ff: mov edx, esp */
  edx = esp;
/* 7e8801: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7e8803: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8806: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e8809: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7e880c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e880d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e8810: call 0x6c8eae */
  esp -= 4; W32(esp, 0x7e8815u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 7e8815: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e8818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8819: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7e881eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7e881e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8821: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e8823: /* 7e8823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8824: call 0x928630 */
  esp -= 4; W32(esp, 0x7e8829u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_7e8829: /* 7e8829: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e882c: /* 7e882c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e882f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8831: jne 0x7e892d */
  if (!zf) goto L_7e892d;
L_7e8837: /* 7e8837: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e883a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7e883d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e883f: je 0x7e887e */
  if (zf) goto L_7e887e;
L_7e8841: /* 7e8841: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e884b: jne 0x7e887e */
  if (!zf) goto L_7e887e;
L_7e884d: /* 7e884d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e884e: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e8853u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e8853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8855: jne 0x7e887b */
  if (!zf) goto L_7e887b;
L_7e8857: /* 7e8857: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e885a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7e885d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8863: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e8869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8869: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e886c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e886f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 7e8872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8875: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e887b: /* 7e887b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e887e: /* 7e887e: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7e8884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8886: jne 0x7e8896 */
  if (!zf) goto L_7e8896;
L_7e8888: /* 7e8888: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e888e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8890: je 0x7e8896 */
  if (zf) goto L_7e8896;
L_7e8892: /* 7e8892: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8894: jne 0x7e88ef */
  if (!zf) goto L_7e88ef;
L_7e8896: /* 7e8896: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e8899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e88a0: /* 7e88a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88a2: je 0x7e88ef */
  if (zf) goto L_7e88ef;
L_7e88a4: /* 7e88a4: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 7e88a7: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e88aa: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e88ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e88af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e88b2: jp 0x7e88ef */
  if (pf) goto L_7e88ef;
L_7e88b4: /* 7e88b4: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e88b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88b9: je 0x7e88cb */
  if (zf) goto L_7e88cb;
L_7e88bb: /* 7e88bb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88bf: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e88c4u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e88c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88c6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88c8: /* 7e88c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88cb: /* 7e88cb: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e88ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e88cf: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e88d4u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e88d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88d6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88d8: /* 7e88d8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e88de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e88e0: je 0x7e88eb */
  if (zf) goto L_7e88eb;
L_7e88e2: /* 7e88e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88e3: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7e88e8u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7e88e8: /* 7e88e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88eb: /* 7e88eb: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e88ed: jmp 0x7e88a0 */
  goto L_7e88a0;
L_7e88ef: /* 7e88ef: xor esi, esi */
  esi = 0;
L_7e88f1: /* 7e88f1: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e88f7: jge 0x7e892d */
  if ((sf == of)) goto L_7e892d;
L_7e88f9: /* 7e88f9: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e88ff: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7e8902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8904: je 0x7e892a */
  if (zf) goto L_7e892a;
L_7e8906: /* 7e8906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8909: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7e890eu); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7e890e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8913: jne 0x7e892a */
  if (!zf) goto L_7e892a;
L_7e8915: /* 7e8915: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e891b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e891c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e891f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8920: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e8925u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e8925: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8928: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892a: /* 7e892a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e892b: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892d: /* 7e892d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e8930: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8935: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e893bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e893b: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e8941: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8947u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8947: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e894a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e894c: jne 0x7e8956 */
  if (!zf) goto L_7e8956;
L_7e894e: /* 7e894e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8951: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e8956u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e8956: /* 7e8956: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e895c: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e8962: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e8965: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8969: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e896c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e896e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8970: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e8973: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 7e8976: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e897c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e897e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8981: jne 0x7e7ca6 */
  if (!zf) goto L_7e7ca6;
L_7e8987: /* 7e8987: jmp 0x7e771b */
  goto L_7e771b;
}
