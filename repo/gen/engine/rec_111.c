#include "recomp.h"
#include "rec_mod.h"

void f_8e36e0(void) {
  LOAD_REGS();
L_8e36e0: /* 8e36e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e36e1: mov ebp, esp */
  ebp = esp;
/* 8e36e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e36e5: push 0x9d8927 */
  { uint32_t v = 0x9d8927u; esp -= 4; W32(esp, v); }
/* 8e36ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e36f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e36f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e36f8: sub esp, 0x6c8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6c8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e36fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e36ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e3700: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e3701: xor esi, esi */
  esi = 0;
/* 8e3703: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e3706: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e3709: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8e370c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8e370e: mov ebx, eax */
  ebx = eax;
/* 8e3710: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e3713: cmp dword ptr [eax + 0x5c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e3716: je 0x8e3d85 */
  if (zf) goto L_8e3d85;
L_8e371c: /* 8e371c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8e371f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e3720: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
/* 8e3723: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8e3726: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8e3729: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8e372c: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x8e3732u); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 8e3732: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e3734: je 0x8e3b58 */
  if (zf) goto L_8e3b58;
L_8e373a: /* 8e373a: mov dword ptr [0xceb684], esi */
  W32((uint32_t)(0xceb684u), esi);
/* 8e3740: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e3743: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e3745: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8e3749: je 0x8e37cf */
  if (zf) goto L_8e37cf;
L_8e374f: /* 8e374f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e3751: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 8e3757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e3758: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x8e375eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e375e: mov esi, eax */
  esi = eax;
/* 8e3760: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8e3765: lea edi, [ebp - 0x94] */
  edi = (uint32_t)(ebp + 0xffffff6cu);
/* 8e376b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8e376d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8e3773: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e3779u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8e3779: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 8e377c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e377f: mov edx, dword ptr [eax + 0x108] */
  edx = R32((uint32_t)(eax + 0x108u));
/* 8e3785: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e3786: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e3787: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8e378a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e378d: mov ecx, esp */
  ecx = esp;
/* 8e378f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e3791: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 8e3794: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8e3797: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8e379a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8e379d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8e37a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e37a3: mov ecx, esp */
  ecx = esp;
/* 8e37a5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e37a7: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8e37aa: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8e37ad: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8e37b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e37b2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8e37b5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e37b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e37ba: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8e37c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e37c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e37c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e37c3: call 0x6c31fc */
  esp -= 4; W32(esp, 0x8e37c8u); SPILL(); f_6c31fc(); if (g_unwind) return; RELOAD();
/* 8e37c8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e37cb: xor esi, esi */
  esi = 0;
/* 8e37cd: jmp 0x8e3819 */
  goto L_8e3819;
L_8e37cf: /* 8e37cf: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 8e37d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e37d3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e37d6: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 8e37dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e37dd: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8e37e0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e37e3: mov edx, esp */
  edx = esp;
/* 8e37e5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8e37e7: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 8e37ea: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e37ed: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 8e37f0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8e37f3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8e37f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e37f9: mov edx, esp */
  edx = esp;
/* 8e37fb: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8e37fd: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8e3800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e3801: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e3804: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8e3807: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e3808: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e3809: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8e380c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e380f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e3810: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e3811: call 0x6c31fc */
  esp -= 4; W32(esp, 0x8e3816u); SPILL(); f_6c31fc(); if (g_unwind) return; RELOAD();
/* 8e3816: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e3819: /* 8e3819: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e381b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8e381e: jne 0x8e3b1a */
  if (!zf) goto L_8e3b1a;
L_8e3824: /* 8e3824: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e3827: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e382a: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8e382d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8e3830: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e3833: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8e3836: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8e3839: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 8e383c: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8e383f: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 8e3842: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8e3844: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8e3847: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8e384a: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8e384d: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8e3850: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8e3853: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8e3856: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 8e3859: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8e385c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e385e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e3860: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3862: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e3864: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e3866: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3868: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8e386b: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8e386e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8e3870: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e3872: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3874: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8e3876: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8e3878: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e387a: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8e387c: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 8e387f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e3881: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e3883: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8e3889u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8e3889: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8e388c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e388f: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 8e3895: fdiv dword ptr [ebp - 0x2c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8e3898: fsubr dword ptr [ecx + 0x24] */
  ST0 = (F32((uint32_t)(ecx + 0x24u))) - ST0;
/* 8e389b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8e38a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e38a3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e38a6: jp 0x8e38b2 */
  if (pf) goto L_8e38b2;
L_8e38a8: /* 8e38a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e38aa: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8e38b0: jmp 0x8e38c7 */
  goto L_8e38c7;
L_8e38b2: /* 8e38b2: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8e38b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e38ba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e38bd: jnp 0x8e38c7 */
  if (!pf) goto L_8e38c7;
L_8e38bf: /* 8e38bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e38c1: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8e38c7: /* 8e38c7: fstp dword ptr [ecx + 0x24] */
  WF32((uint32_t)(ecx + 0x24u), ST0); FPOP();
/* 8e38ca: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e38cd: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 8e38d0: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e38d3: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8e38d6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e38d8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8e38db: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8e38de: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e38e0: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8e38e3: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8e38e6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e38e8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e38eb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e38ed: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8e38f0: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8e38f3: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8e38f6: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8e38f9: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8e38fc: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 8e38ff: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e3902: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8e3905: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e3907: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8e390a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8e390d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e3910: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8e3913: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e3916: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8e3919: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e391c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8e391f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e3922: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 8e3925: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e3928: je 0x8e3987 */
  if (zf) goto L_8e3987;
L_8e392a: /* 8e392a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e392d: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8e3930: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8e3932: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e3935: mov edx, esp */
  edx = esp;
/* 8e3937: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8e3939: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 8e393c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8e393f: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 8e3942: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8e3945: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 8e3948: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e394b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e394c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e394d: call 0x6c653c */
  esp -= 4; W32(esp, 0x8e3952u); SPILL(); f_6c653c(); if (g_unwind) return; RELOAD();
/* 8e3952: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e3955: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 8e3958: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e395b: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 8e395e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e3961: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e3964: jne 0x8e396b */
  if (!zf) goto L_8e396b;
L_8e3966: /* 8e3966: mov dword ptr [ecx + 0x2c], esi */
  W32((uint32_t)(ecx + 0x2cu), esi);
/* 8e3969: jmp 0x8e3987 */
  goto L_8e3987;
L_8e396b: /* 8e396b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e396e: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8e3971: mov edi, dword ptr [edx + 0x58] */
  edi = R32((uint32_t)(edx + 0x58u));
/* 8e3974: mov eax, dword ptr [eax + edi + 0x1c] */
  eax = R32((uint32_t)(eax + edi + 0x1cu));
/* 8e3978: mov edx, dword ptr [edx + 0x98] */
  edx = R32((uint32_t)(edx + 0x98u));
/* 8e397e: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e3981: mov eax, dword ptr [eax + edx] */
  eax = R32((uint32_t)(eax + edx));
/* 8e3984: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
L_8e3987: /* 8e3987: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e398a: je 0x8e3ac0 */
  if (zf) goto L_8e3ac0;
L_8e3990: /* 8e3990: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8e3996: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e3997: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8e399d: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x8e39a3u); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 8e39a3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8e39a6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e39a9: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 8e39ac: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 8e39af: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 8e39b2: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8e39b5: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e39b8: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8e39bb: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8e39c2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8e39c5: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8e39c8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8e39cb: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8e39ce: lea edi, [ebp - 0x50] */
  edi = (uint32_t)(ebp + 0xffffffb0u);
/* 8e39d1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e39d3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8e39d5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e39d7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8e39da: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e39dc: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8e39df: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e39e1: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8e39e4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e39e7: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8e39ea: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e39ed: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8e39f0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e39f3: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8e39f6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e39f9: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8e39fc: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8e39fe: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8e3a00: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8e3a02: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8e3a04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3a06: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8e3a09: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8e3a0c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8e3a0f: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8e3a12: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8e3a15: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8e3a18: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8e3a1b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8e3a1e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8e3a20: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8e3a22: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8e3a24: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8e3a26: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3a28: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8e3a2b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8e3a2e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8e3a31: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8e3a34: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8e3a37: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8e3a3a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8e3a3d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8e3a40: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8e3a42: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8e3a44: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8e3a46: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8e3a48: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3a4a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8e3a4c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8e3a4e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e3a50: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8e3a53: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8e3a56: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8e3a59: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8e3a5c: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8e3a5f: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8e3a62: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8e3a65: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e3a68: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8e3a6a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8e3a6d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8e3a73: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8e3a76: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e3a7cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8e3a7c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e3a7f: cmp dword ptr [eax + 0x284], 0x3f800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x284u))); uint32_t b = (uint32_t)(0x3f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e3a89: jne 0x8e3ab4 */
  if (!zf) goto L_8e3ab4;
L_8e3a8b: /* 8e3a8b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8e3a8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e3a8f: lea ecx, [eax + 0x288] */
  ecx = (uint32_t)(eax + 0x288u);
/* 8e3a95: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 8e3a9c: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 8e3aa3: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 8e3aaa: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x8e3ab0u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 8e3ab0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e3ab2: je 0x8e3ac0 */
  if (zf) goto L_8e3ac0;
L_8e3ab4: /* 8e3ab4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e3ab7: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e3aba: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8e3ac0u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
L_8e3ac0: /* 8e3ac0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8e3ac3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e3ac6: fchs  */
  ST0 = -ST0;
/* 8e3ac8: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e3acb: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8e3ace: fchs  */
  ST0 = -ST0;
/* 8e3ad0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8e3ad3: fchs  */
  ST0 = -ST0;
/* 8e3ad5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e3ad7: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8e3ada: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8e3adc: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8e3adf: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8e3ae1: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8e3ae3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3ae5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e3aeb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e3aed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e3af0: jp 0x8e3b1a */
  if (pf) goto L_8e3b1a;
L_8e3af2: /* 8e3af2: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8e3af5: fchs  */
  ST0 = -ST0;
/* 8e3af7: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8e3afa: fchs  */
  ST0 = -ST0;
/* 8e3afc: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e3afe: fchs  */
  ST0 = -ST0;
/* 8e3b00: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e3b03: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8e3b06: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e3b08: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8e3b0b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8e3b0e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8e3b11: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8e3b14: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e3b17: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_8e3b1a: /* 8e3b1a: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8e3b1f: mov ecx, dword ptr [0xce8358] */
  ecx = R32((uint32_t)(0xce8358u));
/* 8e3b25: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8e3b28: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8e3b2a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e3b2c: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8e3b2e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e3b30: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e3b32: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8e3b38: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e3b3c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e3b42u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8e3b42: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e3b45: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e3b48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e3b4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e3b50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e3b51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e3b52: mov esp, ebp */
  esp = ebp;
/* 8e3b54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e3b55: ret 0x34 */
  esp += 56; SPILL(); return;
L_8e3b58: /* 8e3b58: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e3b5b: mov dword ptr [edx + 0x24], 0x40000000 */
  W32((uint32_t)(edx + 0x24u), 0x40000000u);
/* 8e3b62: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 8e3b65: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 8e3b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e3b69: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 8e3b6c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e3b6f: mov ecx, esp */
  ecx = esp;
/* 8e3b71: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e3b73: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 8e3b76: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8e3b79: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8e3b7c: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8e3b7f: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 8e3b82: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e3b85: mov eax, esp */
  eax = esp;
/* 8e3b87: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e3b89: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 8e3b8c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e3b8f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8e3b92: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e3b95: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8e3b98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e3b9b: mov edx, esp */
  edx = esp;
/* 8e3b9d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8e3b9f: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8e3ba2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e3ba5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e3ba8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8e3bab: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e3bae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e3bb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e3bb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e3bb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e3bb4: lea ecx, [ebp - 0x6d4] */
  ecx = (uint32_t)(ebp + 0xfffff92cu);
/* 8e3bba: call 0x6c11c2 */
  esp -= 4; W32(esp, 0x8e3bbfu); SPILL(); f_6c11c2(); if (g_unwind) return; RELOAD();
/* 8e3bbf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e3bc2: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 8e3bc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e3bc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e3bca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e3bcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e3bcc: lea ecx, [ebp - 0x6d4] */
  ecx = (uint32_t)(ebp + 0xfffff92cu);
/* 8e3bd2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8e3bd6: call 0x6c7423 */
  esp -= 4; W32(esp, 0x8e3bdbu); SPILL(); f_6c7423(); if (g_unwind) return; RELOAD();
/* 8e3bdb: cmp dword ptr [ebp - 0xd8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff28u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e3be1: je 0x8e3d16 */
  if (zf) goto L_8e3d16;
L_8e3be7: /* 8e3be7: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8e3bed: fdiv dword ptr [ebp - 0xdc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffff24u)));
/* 8e3bf3: fld dword ptr [0xa0a848] */
  { double v = F32((uint32_t)(0xa0a848u)); FPUSH(v); }
/* 8e3bf9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e3bfb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8e3bfe: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 8e3c04: fld dword ptr [0xa0973c] */
  { double v = F32((uint32_t)(0xa0973cu)); FPUSH(v); }
/* 8e3c0a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8e3c0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e3c0e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e3c11: jnp 0x8e3c30 */
  if (!pf) goto L_8e3c30;
L_8e3c13: /* 8e3c13: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e3c15: fld dword ptr [0xa0973c] */
  { double v = F32((uint32_t)(0xa0973cu)); FPUSH(v); }
/* 8e3c1b: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 8e3c1e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e3c20: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e3c23: jp 0x8e3c2d */
  if (pf) goto L_8e3c2d;
L_8e3c25: /* 8e3c25: fld dword ptr [0xa0973c] */
  { double v = F32((uint32_t)(0xa0973cu)); FPUSH(v); }
/* 8e3c2b: jmp 0x8e3c30 */
  goto L_8e3c30;
L_8e3c2d: /* 8e3c2d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_8e3c30: /* 8e3c30: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e3c33: fsubr dword ptr [ecx + 0x24] */
  ST0 = (F32((uint32_t)(ecx + 0x24u))) - ST0;
/* 8e3c36: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8e3c3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e3c3e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e3c41: jp 0x8e3c4d */
  if (pf) goto L_8e3c4d;
L_8e3c43: /* 8e3c43: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e3c45: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8e3c4b: jmp 0x8e3c62 */
  goto L_8e3c62;
L_8e3c4d: /* 8e3c4d: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8e3c53: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e3c55: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e3c58: jnp 0x8e3c62 */
  if (!pf) goto L_8e3c62;
L_8e3c5a: /* 8e3c5a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e3c5c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8e3c62: /* 8e3c62: fstp dword ptr [ecx + 0x24] */
  WF32((uint32_t)(ecx + 0x24u), ST0); FPOP();
/* 8e3c65: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e3c68: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e3c6b: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 8e3c6e: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8e3c71: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8e3c74: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e3c77: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e3c7a: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8e3c7d: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8e3c80: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 8e3c83: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e3c86: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e3c88: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8e3c8b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8e3c8e: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8e3c91: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8e3c94: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8e3c97: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8e3c9a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e3c9d: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8e3ca0: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8e3ca3: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8e3ca6: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8e3ca9: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8e3cac: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 8e3caf: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e3cb2: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8e3cb5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8e3cb7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8e3cba: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8e3cbd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8e3cc0: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8e3cc3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e3cc6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8e3cc9: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8e3cce: mov ecx, dword ptr [0xce8358] */
  ecx = R32((uint32_t)(0xce8358u));
/* 8e3cd4: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8e3cd7: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8e3cd9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e3cdb: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8e3cdd: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e3cdf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e3ce1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e3ce4: cmp dword ptr [edx + 0x24], 0x3f800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x24u))); uint32_t b = (uint32_t)(0x3f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e3ceb: jne 0x8e3cf2 */
  if (!zf) goto L_8e3cf2;
L_8e3ced: /* 8e3ced: mov esi, 1 */
  esi = 0x1u;
L_8e3cf2: /* 8e3cf2: lea ecx, [ebp - 0x6d4] */
  ecx = (uint32_t)(ebp + 0xfffff92cu);
/* 8e3cf8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e3cfc: call 0x6cb06e */
  esp -= 4; W32(esp, 0x8e3d01u); SPILL(); f_6cb06e(); if (g_unwind) return; RELOAD();
/* 8e3d01: mov eax, esi */
  eax = esi;
/* 8e3d03: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e3d06: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e3d0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e3d0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e3d0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e3d10: mov esp, ebp */
  esp = ebp;
/* 8e3d12: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e3d13: ret 0x34 */
  esp += 56; SPILL(); return;
L_8e3d16: /* 8e3d16: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8e3d1b: mov ecx, dword ptr [0xce8358] */
  ecx = R32((uint32_t)(0xce8358u));
/* 8e3d21: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8e3d24: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8e3d26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e3d28: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8e3d2a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e3d2c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e3d2e: lea ecx, [ebp - 0x6d4] */
  ecx = (uint32_t)(ebp + 0xfffff92cu);
/* 8e3d34: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e3d38: call 0x6cb06e */
  esp -= 4; W32(esp, 0x8e3d3du); SPILL(); f_6cb06e(); if (g_unwind) return; RELOAD();
/* 8e3d3d: mov eax, 1 */
  eax = 0x1u;
/* 8e3d42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e3d45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e3d4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e3d4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e3d4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e3d4f: mov esp, ebp */
  esp = ebp;
/* 8e3d51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e3d52: ret 0x34 */
  esp += 56; SPILL(); return;
L_8e3d85: /* 8e3d85: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8e3d8b: mov edx, dword ptr [0xce8358] */
  edx = R32((uint32_t)(0xce8358u));
/* 8e3d91: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8e3d94: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8e3d96: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e3d98: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8e3d9a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e3d9c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e3d9e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e3da1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e3da4: mov eax, dword ptr [eax + 0x108] */
  eax = R32((uint32_t)(eax + 0x108u));
/* 8e3daa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e3dab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e3dac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e3db3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e3db4: mov esp, ebp */
  esp = ebp;
/* 8e3db6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e3db7: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_8e3d55(void) {
  LOAD_REGS();
L_8e3d55: /* 8e3d55: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8e3d58: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e3d5d: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8e3d60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e3d61: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8e3d64: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e3d69u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e3d69(); return;
}

void f_8e3d69(void) {
  LOAD_REGS();
L_8e3d69: /* 8e3d69: push 0xa1d92c */
  { uint32_t v = 0xa1d92cu; esp -= 4; W32(esp, v); }
/* 8e3d6e: push 0xaeda34 */
  { uint32_t v = 0xaeda34u; esp -= 4; W32(esp, v); }
/* 8e3d73: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e3d79u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e3d79: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e3d7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e3d7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e3d80: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e3d85u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8e3d85: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8e3d8b: mov edx, dword ptr [0xce8358] */
  edx = R32((uint32_t)(0xce8358u));
/* 8e3d91: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8e3d94: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8e3d96: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e3d98: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8e3d9a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e3d9c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e3d9e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e3da1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e3da4: mov eax, dword ptr [eax + 0x108] */
  eax = R32((uint32_t)(eax + 0x108u));
/* 8e3daa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e3dab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e3dac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e3db3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e3db4: mov esp, ebp */
  esp = ebp;
/* 8e3db6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e3db7: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_8e3f80(void) {
  LOAD_REGS();
L_8e3f80: /* 8e3f80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e3f81: mov ebp, esp */
  ebp = esp;
/* 8e3f83: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 8e3f86: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e3f89: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 8e3f8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e3f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e3f91: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 8e3f95: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 8e3f98: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e3f9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e3f9c: je 0x8e41ed */
  if (zf) goto L_8e41ed;
L_8e3fa2: /* 8e3fa2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8e3fa5: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_8e3fa8: /* 8e3fa8: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 8e3fab: mov ecx, esi */
  ecx = esi;
/* 8e3fad: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8e3fb0: fld dword ptr [ecx + eax + 4] */
  { double v = F32((uint32_t)(ecx + eax + 0x4u)); FPUSH(v); }
/* 8e3fb4: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8e3fb7: fld dword ptr [ecx + eax + 8] */
  { double v = F32((uint32_t)(ecx + eax + 0x8u)); FPUSH(v); }
/* 8e3fbb: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8e3fbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3fc0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8e3fc2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e3fc4: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 8e3fc7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8e3fcb: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8e3fcd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3fcf: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 8e3fd2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e3fd6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e3fd9: fchs  */
  ST0 = -ST0;
/* 8e3fdb: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 8e3fdf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e3fe1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e3fe4: jp 0x8e402d */
  if (pf) goto L_8e402d;
L_8e3fe6: /* 8e3fe6: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 8e3fe9: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e3fec: je 0x8e402d */
  if (zf) goto L_8e402d;
L_8e3fee: /* 8e3fee: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8e3ff1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e3ff3: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8e3ff6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e3ff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e3ff8: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8e3ffb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e3ffc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e3ffd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e3ffe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e3fff: call 0x8e3f80 */
  esp -= 4; W32(esp, 0x8e4004u); SPILL(); f_8e3f80(); if (g_unwind) return; RELOAD();
/* 8e4004: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 8e4008: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e400e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e4011: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e4013: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e4016: jne 0x8e4029 */
  if (!zf) goto L_8e4029;
L_8e4018: /* 8e4018: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e401c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8e4020: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 8e4024: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 8e4027: jmp 0x8e402d */
  goto L_8e402d;
L_8e4029: /* 8e4029: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
L_8e402d: /* 8e402d: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e4030: fchs  */
  ST0 = -ST0;
/* 8e4032: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 8e4036: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e4038: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e403b: jp 0x8e41d2 */
  if (pf) goto L_8e41d2;
L_8e4041: /* 8e4041: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e4045: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 8e4048: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e404a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e404d: jp 0x8e41ed */
  if (pf) goto L_8e41ed;
L_8e4053: /* 8e4053: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e4056: je 0x8e41d2 */
  if (zf) goto L_8e41d2;
L_8e405c: /* 8e405c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e4060: /* 8e4060: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 8e4063: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8e4066: mov ecx, dword ptr [ebx + 0x98] */
  ecx = R32((uint32_t)(ebx + 0x98u));
/* 8e406c: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e406e: mov edx, esi */
  edx = esi;
/* 8e4070: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 8e4073: mov esi, dword ptr [ebx + 0x88] */
  esi = R32((uint32_t)(ebx + 0x88u));
/* 8e4079: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e407c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e407e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8e4081: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8e4084: lea esi, [esi + eax*4] */
  esi = (uint32_t)(esi + eax*4);
/* 8e4087: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8e408b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e408d: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8e408f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e4092: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8e4095: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8e4098: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8e409b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e409d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e409f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8e40a1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e40a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e40a5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8e40a7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8e40a9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e40ab: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 8e40af: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 8e40b1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e40b3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e40b5: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e40b8: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e40bb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e40bd: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8e40bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e40c1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e40c4: jp 0x8e40fa */
  if (pf) goto L_8e40fa;
L_8e40c6: /* 8e40c6: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8e40c9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e40cb: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e40cf: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e40d2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8e40d5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8e40d7: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8e40ddu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8e40dd: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 8e40e0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8e40e2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e40e5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e40e7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8e40ea: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e40ed: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8e40f0: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8e40f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e40f7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_8e40fa: /* 8e40fa: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 8e40fd: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* 8e4100: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8e4103: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8e4107: mov al, byte ptr [edx + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x56u))) & 0xffu);
/* 8e410a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e410c: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* 8e4111: jbe 0x8e41c2 */
  if ((cf | zf)) goto L_8e41c2;
L_8e4117: /* 8e4117: jmp 0x8e4120 */
  goto L_8e4120;
L_8e4120: /* 8e4120: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8e4124: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8e4126: mov esi, dword ptr [ebx + 0x88] */
  esi = R32((uint32_t)(ebx + 0x88u));
/* 8e412c: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8e412f: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 8e4132: lea esi, [esi + eax*4] */
  esi = (uint32_t)(esi + eax*4);
/* 8e4135: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8e4137: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e413a: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8e413d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8e4140: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8e4143: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e4145: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e4147: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8e4149: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e414b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e414d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8e414f: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8e4151: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e4153: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 8e4157: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 8e4159: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e415b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e415d: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e4160: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e4163: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e4165: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8e4167: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e4169: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e416c: jp 0x8e41a2 */
  if (pf) goto L_8e41a2;
L_8e416e: /* 8e416e: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8e4171: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e4173: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8e4177: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e417a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8e417d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8e417f: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8e4185u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8e4185: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 8e4188: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8e418a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e418d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e418f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8e4192: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e4195: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8e4198: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8e419c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e419f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_8e41a2: /* 8e41a2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8e41a6: mov cl, byte ptr [edx + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x56u))) & 0xffu);
/* 8e41a9: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e41ac: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8e41b0: mov al, byte ptr [esp + 0x13] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 8e41b4: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e41b6: cmp al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8e41b8: mov byte ptr [esp + 0x13], al */
  W8((uint32_t)(esp + 0x13u), (eax & 0xffu));
/* 8e41bc: jb 0x8e4120 */
  if (cf) goto L_8e4120;
L_8e41c2: /* 8e41c2: mov esi, dword ptr [edx + 0x28] */
  esi = R32((uint32_t)(edx + 0x28u));
/* 8e41c5: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e41c8: jne 0x8e4060 */
  if (!zf) goto L_8e4060;
L_8e41ce: /* 8e41ce: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
L_8e41d2: /* 8e41d2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e41d6: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 8e41d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e41db: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e41de: je 0x8e41ed */
  if (zf) goto L_8e41ed;
L_8e41e0: /* 8e41e0: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 8e41e4: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e41e7: jne 0x8e3fa8 */
  if (!zf) goto L_8e3fa8;
L_8e41ed: /* 8e41ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e41ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e41ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e41f0: mov esp, ebp */
  esp = ebp;
/* 8e41f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e41f3: ret  */
  esp += 4; SPILL(); return;
}

void f_8e4119(void) {
  LOAD_REGS();
  goto L_8e4119;
L_8e3fa8: /* 8e3fa8: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 8e3fab: mov ecx, esi */
  ecx = esi;
/* 8e3fad: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8e3fb0: fld dword ptr [ecx + eax + 4] */
  { double v = F32((uint32_t)(ecx + eax + 0x4u)); FPUSH(v); }
/* 8e3fb4: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8e3fb7: fld dword ptr [ecx + eax + 8] */
  { double v = F32((uint32_t)(ecx + eax + 0x8u)); FPUSH(v); }
/* 8e3fbb: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8e3fbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3fc0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8e3fc2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e3fc4: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 8e3fc7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8e3fcb: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8e3fcd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3fcf: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 8e3fd2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e3fd6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e3fd9: fchs  */
  ST0 = -ST0;
/* 8e3fdb: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 8e3fdf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e3fe1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e3fe4: jp 0x8e402d */
  if (pf) goto L_8e402d;
L_8e3fe6: /* 8e3fe6: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 8e3fe9: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e3fec: je 0x8e402d */
  if (zf) goto L_8e402d;
L_8e3fee: /* 8e3fee: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8e3ff1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e3ff3: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8e3ff6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e3ff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e3ff8: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8e3ffb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e3ffc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e3ffd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e3ffe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e3fff: call 0x8e3f80 */
  esp -= 4; W32(esp, 0x8e4004u); SPILL(); f_8e3f80(); if (g_unwind) return; RELOAD();
/* 8e4004: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 8e4008: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e400e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e4011: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e4013: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e4016: jne 0x8e4029 */
  if (!zf) goto L_8e4029;
L_8e4018: /* 8e4018: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e401c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8e4020: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 8e4024: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 8e4027: jmp 0x8e402d */
  goto L_8e402d;
L_8e4029: /* 8e4029: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
L_8e402d: /* 8e402d: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e4030: fchs  */
  ST0 = -ST0;
/* 8e4032: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 8e4036: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e4038: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e403b: jp 0x8e41d2 */
  if (pf) goto L_8e41d2;
L_8e4041: /* 8e4041: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e4045: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 8e4048: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e404a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e404d: jp 0x8e41ed */
  if (pf) goto L_8e41ed;
L_8e4053: /* 8e4053: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e4056: je 0x8e41d2 */
  if (zf) goto L_8e41d2;
L_8e405c: /* 8e405c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e4060: /* 8e4060: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 8e4063: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8e4066: mov ecx, dword ptr [ebx + 0x98] */
  ecx = R32((uint32_t)(ebx + 0x98u));
/* 8e406c: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e406e: mov edx, esi */
  edx = esi;
/* 8e4070: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 8e4073: mov esi, dword ptr [ebx + 0x88] */
  esi = R32((uint32_t)(ebx + 0x88u));
/* 8e4079: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e407c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e407e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8e4081: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8e4084: lea esi, [esi + eax*4] */
  esi = (uint32_t)(esi + eax*4);
/* 8e4087: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8e408b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e408d: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8e408f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e4092: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8e4095: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8e4098: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8e409b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e409d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e409f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8e40a1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e40a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e40a5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8e40a7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8e40a9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e40ab: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 8e40af: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 8e40b1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e40b3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e40b5: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e40b8: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e40bb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e40bd: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8e40bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e40c1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e40c4: jp 0x8e40fa */
  if (pf) goto L_8e40fa;
L_8e40c6: /* 8e40c6: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8e40c9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e40cb: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e40cf: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e40d2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8e40d5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8e40d7: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8e40ddu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8e40dd: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 8e40e0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8e40e2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e40e5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e40e7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8e40ea: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e40ed: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8e40f0: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8e40f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e40f7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_8e40fa: /* 8e40fa: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 8e40fd: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* 8e4100: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8e4103: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8e4107: mov al, byte ptr [edx + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x56u))) & 0xffu);
/* 8e410a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e410c: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* 8e4111: jbe 0x8e41c2 */
  if ((cf | zf)) goto L_8e41c2;
L_8e4117: /* 8e4117: jmp 0x8e4120 */
  goto L_8e4120;
L_8e4119: /* 8e4119: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e4120: /* 8e4120: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8e4124: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8e4126: mov esi, dword ptr [ebx + 0x88] */
  esi = R32((uint32_t)(ebx + 0x88u));
/* 8e412c: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8e412f: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 8e4132: lea esi, [esi + eax*4] */
  esi = (uint32_t)(esi + eax*4);
/* 8e4135: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8e4137: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e413a: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8e413d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8e4140: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8e4143: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e4145: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e4147: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8e4149: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e414b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e414d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8e414f: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8e4151: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e4153: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 8e4157: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 8e4159: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e415b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e415d: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e4160: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e4163: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e4165: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8e4167: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e4169: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e416c: jp 0x8e41a2 */
  if (pf) goto L_8e41a2;
L_8e416e: /* 8e416e: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8e4171: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e4173: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8e4177: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e417a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8e417d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8e417f: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8e4185u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8e4185: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 8e4188: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8e418a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e418d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e418f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8e4192: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e4195: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8e4198: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8e419c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e419f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_8e41a2: /* 8e41a2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8e41a6: mov cl, byte ptr [edx + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x56u))) & 0xffu);
/* 8e41a9: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e41ac: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8e41b0: mov al, byte ptr [esp + 0x13] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 8e41b4: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e41b6: cmp al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8e41b8: mov byte ptr [esp + 0x13], al */
  W8((uint32_t)(esp + 0x13u), (eax & 0xffu));
/* 8e41bc: jb 0x8e4120 */
  if (cf) goto L_8e4120;
L_8e41c2: /* 8e41c2: mov esi, dword ptr [edx + 0x28] */
  esi = R32((uint32_t)(edx + 0x28u));
/* 8e41c5: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e41c8: jne 0x8e4060 */
  if (!zf) goto L_8e4060;
L_8e41ce: /* 8e41ce: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
L_8e41d2: /* 8e41d2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e41d6: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 8e41d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e41db: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e41de: je 0x8e41ed */
  if (zf) goto L_8e41ed;
L_8e41e0: /* 8e41e0: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 8e41e4: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e41e7: jne 0x8e3fa8 */
  if (!zf) goto L_8e3fa8;
L_8e41ed: /* 8e41ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e41ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e41ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e41f0: mov esp, ebp */
  esp = ebp;
/* 8e41f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e41f3: ret  */
  esp += 4; SPILL(); return;
}

void f_8e42a0(void) {
  LOAD_REGS();
L_8e42a0: /* 8e42a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e42a1: mov ebp, esp */
  ebp = esp;
/* 8e42a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e42a5: push 0x9d8940 */
  { uint32_t v = 0x9d8940u; esp -= 4; W32(esp, v); }
/* 8e42aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e42b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e42b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e42b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e42bb: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 8e42be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e42c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e42c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e42c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e42c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e42c6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e42cd: je 0x8e4330 */
  if (zf) goto L_8e4330;
L_8e42cf: /* 8e42cf: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8e42d2: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8e42d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e42d6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e42d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e42db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e42dc: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e42df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e42e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e42e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e42e2: call 0x8e3f80 */
  esp -= 4; W32(esp, 0x8e42e7u); SPILL(); f_8e3f80(); if (g_unwind) return; RELOAD();
/* 8e42e7: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 8e42ea: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e42ed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e42f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e42f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e42f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e42f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e42fa: mov esp, ebp */
  esp = ebp;
/* 8e42fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e42fd: ret 0x10 */
  esp += 20; SPILL(); return;
L_8e4330: /* 8e4330: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e4333: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 8e4339: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e433a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e433b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e4342: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e4343: mov esp, ebp */
  esp = ebp;
/* 8e4345: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e4346: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8e4300(void) {
  LOAD_REGS();
L_8e4300: /* 8e4300: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e4303: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e4308: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e430b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e430c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e430f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4314u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e4314(); return;
}

void f_8e4314(void) {
  LOAD_REGS();
L_8e4314: /* 8e4314: push 0xa1d958 */
  { uint32_t v = 0xa1d958u; esp -= 4; W32(esp, v); }
/* 8e4319: push 0xaeda5c */
  { uint32_t v = 0xaeda5cu; esp -= 4; W32(esp, v); }
/* 8e431e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e4324u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e4324: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e4327: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4329: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e432b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4330u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8e4330: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e4333: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 8e4339: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e433a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e433b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e4342: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e4343: mov esp, ebp */
  esp = ebp;
/* 8e4345: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e4346: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8e4380(void) {
  LOAD_REGS();
L_8e4380: /* 8e4380: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e4384: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e4387: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e438a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e438b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e438c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e438d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e438e: je 0x8e456c */
  if (zf) goto L_8e456c;
L_8e4394: /* 8e4394: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 8e4398: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 8e439c: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
L_8e43a0: /* 8e43a0: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8e43a4: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8e43a8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 8e43ac: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8e43af: mov ecx, dword ptr [edx + 0x58] */
  ecx = R32((uint32_t)(edx + 0x58u));
/* 8e43b2: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e43b4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e43b6: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8e43ba: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8e43be: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8e43c2: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8e43c5: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e43ca: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8e43ce: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e43d2: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8e43d6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8e43da: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8e43dd: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e43e2: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8e43e6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8e43ea: and dword ptr [esp + 0x10], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 8e43f2: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8e43f6: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 8e43fa: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 8e43fe: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8e4402: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e4404: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8e4408: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8e440b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e440d: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8e4411: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8e4414: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e4416: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 8e4419: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 8e441b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e441d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e4420: jne 0x8e442e */
  if (!zf) goto L_8e442e;
L_8e4422: /* 8e4422: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 8e4425: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e4427: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e4429: jmp 0x8e4521 */
  goto L_8e4521;
L_8e442e: /* 8e442e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e4430: fchs  */
  ST0 = -ST0;
/* 8e4432: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e4434: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8e4436: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e4438: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e443b: jnp 0x8e451e */
  if (!pf) goto L_8e451e;
L_8e4441: /* 8e4441: cmp dword ptr [esp + 0x30], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e4446: je 0x8e44cd */
  if (zf) goto L_8e44cd;
L_8e444c: /* 8e444c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e4450: /* 8e4450: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8e4454: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 8e4458: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8e445b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e445d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8e4461: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e4463: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8e4467: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8e446a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8e446d: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8e4471: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8e4475: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 8e4479: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 8e447d: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 8e4481: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e4483: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8e4487: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 8e448b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e448d: fcomp qword ptr [0xa1d998] */
  fpu_com(ST0, F64((uint32_t)(0xa1d998u)));
  FPOP();
/* 8e4493: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e4495: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e4498: jp 0x8e44b9 */
  if (pf) goto L_8e44b9;
L_8e449a: /* 8e449a: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 8e449e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8e44a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8e44a2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8e44a8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8e44a8: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 8e44ac: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8e44ae: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 8e44b2: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8e44b5: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_8e44b9: /* 8e44b9: mov ecx, dword ptr [edx + 0x58] */
  ecx = R32((uint32_t)(edx + 0x58u));
/* 8e44bc: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8e44c0: mov eax, dword ptr [ecx + eax + 0x28] */
  eax = R32((uint32_t)(ecx + eax + 0x28u));
/* 8e44c4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e44c7: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 8e44cb: jne 0x8e4450 */
  if (!zf) goto L_8e4450;
L_8e44cd: /* 8e44cd: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 8e44d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e44d2: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8e44d6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e44d9: mov eax, esp */
  eax = esp;
/* 8e44db: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e44dd: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 8e44e1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8e44e4: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 8e44e8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8e44eb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8e44ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e44f2: mov eax, esp */
  eax = esp;
/* 8e44f4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e44f6: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 8e44fa: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8e44fd: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 8e4501: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8e4504: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 8e4507: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e450a: mov eax, esp */
  eax = esp;
/* 8e450c: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8e450e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e450f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8e4512: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e4513: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 8e4516: call 0x8e4380 */
  esp -= 4; W32(esp, 0x8e451bu); SPILL(); f_8e4380(); if (g_unwind) return; RELOAD();
/* 8e451b: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e451e: /* 8e451e: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
L_8e4521: /* 8e4521: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8e4525: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8e4529: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8e452d: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 8e4531: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 8e4535: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 8e4539: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8e453d: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 8e4541: cmp dword ptr [esp + 0x30], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e4546: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 8e454a: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 8e454e: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 8e4552: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 8e4556: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 8e455a: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 8e455e: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 8e4562: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 8e4566: jne 0x8e43a0 */
  if (!zf) goto L_8e43a0;
L_8e456c: /* 8e456c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e456d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e456e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e456f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e4570: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e4573: ret  */
  esp += 4; SPILL(); return;
}

void f_8e4600(void) {
  LOAD_REGS();
L_8e4600: /* 8e4600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e4601: mov ebp, esp */
  ebp = esp;
/* 8e4603: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e4605: push 0x9d8950 */
  { uint32_t v = 0x9d8950u; esp -= 4; W32(esp, v); }
/* 8e460a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e4610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e4611: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e4618: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e461b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e461c: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 8e461f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e4620: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e4621: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e4624: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4626: mov edi, ecx */
  edi = ecx;
/* 8e4628: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8e462a: mov ecx, ebx */
  ecx = ebx;
/* 8e462c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e4633: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8e4639u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8e4639: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 8e463c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e463e: je 0x8e47ed */
  if (zf) goto L_8e47ed;
L_8e4644: /* 8e4644: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8e4647: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8e464a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e464b: mov ecx, esi */
  ecx = esi;
/* 8e464d: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x8e4653u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 8e4653: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8e4656: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 8e465c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8e465f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8e4662: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e4663: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 8e4669: mov ecx, esi */
  ecx = esi;
/* 8e466b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8e466d: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 8e4673: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e4676: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8e4679: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8e467c: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x8e4682u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 8e4682: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8e4685: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e4686: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e4689: mov edx, esp */
  edx = esp;
/* 8e468b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8e468d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8e4690: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e4693: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8e4696: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8e4699: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8e469c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e469f: mov edx, esp */
  edx = esp;
/* 8e46a1: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8e46a3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8e46a6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e46a9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e46ac: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8e46af: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e46b1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e46b4: mov edx, esp */
  edx = esp;
/* 8e46b6: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8e46b8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8e46bb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8e46be: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e46c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e46c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e46c4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8e46c7: call 0x8e4380 */
  esp -= 4; W32(esp, 0x8e46ccu); SPILL(); f_8e4380(); if (g_unwind) return; RELOAD();
/* 8e46cc: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e46cf: xor eax, eax */
  eax = 0;
L_8e46d1: /* 8e46d1: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e46d4: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8e46d7: jge 0x8e47ed */
  if ((sf == of)) goto L_8e47ed;
L_8e46dd: /* 8e46dd: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8e46df: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8e46e2: mov esi, dword ptr [edi + 0x58] */
  esi = R32((uint32_t)(edi + 0x58u));
/* 8e46e5: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8e46e8: mov eax, dword ptr [edx + esi + 0x1c] */
  eax = R32((uint32_t)(edx + esi + 0x1cu));
/* 8e46ec: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 8e46f2: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e46f4: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e46f7: test byte ptr [eax + ecx + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e46fc: jne 0x8e47de */
  if (!zf) goto L_8e47de;
L_8e4702: /* 8e4702: xor ebx, ebx */
  ebx = 0;
L_8e4704: /* 8e4704: cmp ebx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e4707: jge 0x8e47db */
  if ((sf == of)) goto L_8e47db;
L_8e470d: /* 8e470d: xor esi, esi */
  esi = 0;
/* 8e470f: nop  */
L_8e4710: /* 8e4710: movzx eax, byte ptr [edx + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x56u)));
/* 8e4714: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e4716: jge 0x8e4763 */
  if ((sf == of)) goto L_8e4763;
L_8e4718: /* 8e4718: mov ecx, dword ptr [edx + 0x18] */
  ecx = R32((uint32_t)(edx + 0x18u));
/* 8e471b: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8e471e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e4720: mov eax, dword ptr [eax + ecx*8] */
  eax = R32((uint32_t)(eax + ecx*8));
/* 8e4723: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8e4726: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 8e472c: fld dword ptr [eax + ecx*4 + 8] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0x8u)); FPUSH(v); }
/* 8e4730: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8e4733: mov eax, ebx */
  eax = ebx;
/* 8e4735: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e4738: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e473b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8e473e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8e4741: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8e4744: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e4746: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e4748: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8e474a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e474c: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 8e474f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e4755: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e4757: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e475a: je 0x8e47e7 */
  if (zf) goto L_8e47e7;
L_8e4760: /* 8e4760: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8e4761: jmp 0x8e4710 */
  goto L_8e4710;
L_8e4763: /* 8e4763: xor eax, eax */
  eax = 0;
/* 8e4765: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e4767: jne 0x8e47e7 */
  if (!zf) goto L_8e47e7;
L_8e4769: /* 8e4769: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e476c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e476e: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 8e4774: jge 0x8e478a */
  if ((sf == of)) goto L_8e478a;
L_8e4776: /* 8e4776: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8e477b: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8e4780: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8e4785: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e4787u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e4787: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e478a: /* 8e478a: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 8e478d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e4790: cmp ecx, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e4793: jle 0x8e47a9 */
  if ((zf || sf != of)) goto L_8e47a9;
L_8e4795: /* 8e4795: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8e479a: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8e479f: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8e47a4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e47a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e47a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e47a9: /* 8e47a9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e47ac: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8e47af: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e47b0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e47b2: jle 0x8e47c8 */
  if ((zf || sf != of)) goto L_8e47c8;
L_8e47b4: /* 8e47b4: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8e47b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8e47be: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8e47c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e47c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e47c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e47c8: /* 8e47c8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e47cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8e47cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8e47cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e47d0: mov ecx, ebx */
  ecx = ebx;
/* 8e47d2: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8e47d8u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8e47d8: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_8e47db: /* 8e47db: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
L_8e47de: /* 8e47de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e47e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e47e2: jmp 0x8e46d1 */
  goto L_8e46d1;
L_8e47e7: /* 8e47e7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e47e8: jmp 0x8e4704 */
  goto L_8e4704;
L_8e47ed: /* 8e47ed: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8e47f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e47f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e47f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e47f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e47fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e47fd: mov esp, ebp */
  esp = ebp;
/* 8e47ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e4800: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_8e4803(void) {
  LOAD_REGS();
L_8e4803: /* 8e4803: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e4806: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e480b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8e480e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e480f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e4812: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4817u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e4817(); return;
}

void f_8e4817(void) {
  LOAD_REGS();
L_8e4817: /* 8e4817: push 0xa1d9a4 */
  { uint32_t v = 0xa1d9a4u; esp -= 4; W32(esp, v); }
/* 8e481c: push 0xaeda6c */
  { uint32_t v = 0xaeda6cu; esp -= 4; W32(esp, v); }
/* 8e4821: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e4827u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e4827: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e482a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e482c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e482e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4833u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e4833: guest_badaddr(0x8e4833); return;
}

void f_8e48d0(void) {
  LOAD_REGS();
L_8e48d0: /* 8e48d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e48d1: mov ebp, esp */
  ebp = esp;
/* 8e48d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e48d5: push 0x9d8960 */
  { uint32_t v = 0x9d8960u; esp -= 4; W32(esp, v); }
/* 8e48da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e48e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e48e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e48e8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e48eb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e48ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e48ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e48f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e48f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e48f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e48f5: mov esi, ecx */
  esi = ecx;
/* 8e48f7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e48fe: call 0x6ccb12 */
  esp -= 4; W32(esp, 0x8e4903u); SPILL(); f_6ccb12(); if (g_unwind) return; RELOAD();
/* 8e4903: mov ecx, dword ptr [esi + 0x46c] */
  ecx = R32((uint32_t)(esi + 0x46cu));
/* 8e4909: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e490a: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 8e490d: lea edi, [esi + 0x414] */
  edi = (uint32_t)(esi + 0x414u);
/* 8e4913: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e4914: mov ecx, edi */
  ecx = edi;
/* 8e4916: mov ebx, eax */
  ebx = eax;
/* 8e4918: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x8e491eu); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 8e491e: mov esi, eax */
  esi = eax;
/* 8e4920: mov ecx, 7 */
  ecx = 0x7u;
/* 8e4925: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8e4927: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e492a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e492b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e492c: mov eax, ebx */
  eax = ebx;
/* 8e492e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e4935: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e4936: mov esp, ebp */
  esp = ebp;
/* 8e4938: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e4939: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e493c(void) {
  LOAD_REGS();
L_8e493c: /* 8e493c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e493f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e4944: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e4947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e4948: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e494b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4950u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e4950(); return;
}

void f_8e4950(void) {
  LOAD_REGS();
L_8e4950: /* 8e4950: push 0xa1d9f0 */
  { uint32_t v = 0xa1d9f0u; esp -= 4; W32(esp, v); }
/* 8e4955: push 0xaedac0 */
  { uint32_t v = 0xaedac0u; esp -= 4; W32(esp, v); }
/* 8e495a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e4960u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e4960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e4963: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4965: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4967: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e496cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e496c: guest_badaddr(0x8e496c); return;
}

void f_8e49a0(void) {
  LOAD_REGS();
L_8e49a0: /* 8e49a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e49a4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8e49a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e49a7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8e49adu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8e49ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e49c0(void) {
  LOAD_REGS();
L_8e49c0: /* 8e49c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e49c4: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8e49c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e49c7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8e49cdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8e49cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e49e0(void) {
  LOAD_REGS();
L_8e49e0: /* 8e49e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e49e1: mov esi, ecx */
  esi = ecx;
/* 8e49e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8e49e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8e49e9: mov eax, esi */
  eax = esi;
/* 8e49eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e49ec: ret  */
  esp += 4; SPILL(); return;
}

void f_8e4a00(void) {
  LOAD_REGS();
L_8e4a00: /* 8e4a00: mov eax, 1 */
  eax = 0x1u;
/* 8e4a05: ret  */
  esp += 4; SPILL(); return;
}

void f_8e4a20(void) {
  LOAD_REGS();
L_8e4a20: /* 8e4a20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e4a21: mov esi, ecx */
  esi = ecx;
/* 8e4a23: call 0x6c51ff */
  esp -= 4; W32(esp, 0x8e4a28u); SPILL(); f_6c51ff(); if (g_unwind) return; RELOAD();
/* 8e4a28: mov eax, dword ptr [esi + 0x494] */
  eax = R32((uint32_t)(esi + 0x494u));
/* 8e4a2e: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e4a31: jg 0x8e4a38 */
  if ((!zf && sf == of)) goto L_8e4a38;
L_8e4a33: /* 8e4a33: mov eax, 3 */
  eax = 0x3u;
L_8e4a38: /* 8e4a38: mov dword ptr [esi + 0x494], eax */
  W32((uint32_t)(esi + 0x494u), eax);
/* 8e4a3e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e4a40: mov ecx, esi */
  ecx = esi;
/* 8e4a42: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x8e4a45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e4a45: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 8e4a4b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e4a4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e4a4e: mov ecx, esi */
  ecx = esi;
/* 8e4a50: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8e4a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e4a53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e4a54: ret  */
  esp += 4; SPILL(); return;
}

void f_8e4a70(void) {
  LOAD_REGS();
L_8e4a70: /* 8e4a70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e4a71: mov ebp, esp */
  ebp = esp;
/* 8e4a73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e4a75: push 0x9d8970 */
  { uint32_t v = 0x9d8970u; esp -= 4; W32(esp, v); }
/* 8e4a7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e4a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e4a81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e4a88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e4a8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e4a8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e4a8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e4a8e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8e4a91: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e4a94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e4a95: mov esi, ecx */
  esi = ecx;
/* 8e4a97: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e4a9e: call 0x6ca62d */
  esp -= 4; W32(esp, 0x8e4aa3u); SPILL(); f_6ca62d(); if (g_unwind) return; RELOAD();
/* 8e4aa3: mov eax, dword ptr [esi + 0x494] */
  eax = R32((uint32_t)(esi + 0x494u));
/* 8e4aa9: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 8e4aac: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8e4aae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e4aaf: lea ecx, [esi + 0x4a4] */
  ecx = (uint32_t)(esi + 0x4a4u);
/* 8e4ab5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8e4abbu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8e4abb: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8e4abd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e4abe: lea ecx, [esi + 0x4b0] */
  ecx = (uint32_t)(esi + 0x4b0u);
/* 8e4ac4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8e4acau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8e4aca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e4acd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e4ace: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e4acf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e4ad6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e4ad7: mov esp, ebp */
  esp = ebp;
/* 8e4ad9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e4ada: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e4add(void) {
  LOAD_REGS();
L_8e4add: /* 8e4add: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e4ae0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e4ae5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e4ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e4ae9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e4aec: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4af1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e4af1(); return;
}

void f_8e4af1(void) {
  LOAD_REGS();
L_8e4af1: /* 8e4af1: push 0xa1da3c */
  { uint32_t v = 0xa1da3cu; esp -= 4; W32(esp, v); }
/* 8e4af6: push 0xaedaa8 */
  { uint32_t v = 0xaedaa8u; esp -= 4; W32(esp, v); }
/* 8e4afb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e4b01u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e4b01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e4b04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4b06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4b08: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4b0du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e4b0d: guest_badaddr(0x8e4b0d); return;
}

void f_8e4b40(void) {
  LOAD_REGS();
L_8e4b40: /* 8e4b40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e4b41: mov ebp, esp */
  ebp = esp;
/* 8e4b43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e4b45: push 0x9d8980 */
  { uint32_t v = 0x9d8980u; esp -= 4; W32(esp, v); }
/* 8e4b4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e4b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e4b51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e4b58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e4b5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e4b5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e4b5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e4b5e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e4b61: mov esi, ecx */
  esi = ecx;
/* 8e4b63: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e4b6a: call 0x6c7414 */
  esp -= 4; W32(esp, 0x8e4b6fu); SPILL(); f_6c7414(); if (g_unwind) return; RELOAD();
/* 8e4b6f: lea ecx, [esi + 0x4a4] */
  ecx = (uint32_t)(esi + 0x4a4u);
/* 8e4b75: xor eax, eax */
  eax = 0;
L_8e4b77: /* 8e4b77: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e4b7a: jge 0x8e4b7f */
  if ((sf == of)) goto L_8e4b7f;
L_8e4b7c: /* 8e4b7c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e4b7d: jmp 0x8e4b77 */
  goto L_8e4b77;
L_8e4b7f: /* 8e4b7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4b81: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8e4b83: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8e4b89u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8e4b89: lea ecx, [esi + 0x4b0] */
  ecx = (uint32_t)(esi + 0x4b0u);
/* 8e4b8f: xor eax, eax */
  eax = 0;
L_8e4b91: /* 8e4b91: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e4b94: jge 0x8e4b99 */
  if ((sf == of)) goto L_8e4b99;
L_8e4b96: /* 8e4b96: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e4b97: jmp 0x8e4b91 */
  goto L_8e4b91;
L_8e4b99: /* 8e4b99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4b9b: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8e4b9d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8e4ba3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8e4ba3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e4ba6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e4ba7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e4ba8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e4baf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e4bb0: mov esp, ebp */
  esp = ebp;
/* 8e4bb2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e4bb3: ret  */
  esp += 4; SPILL(); return;
}

void f_8e4bb4(void) {
  LOAD_REGS();
L_8e4bb4: /* 8e4bb4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e4bb7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e4bbc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e4bbf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e4bc0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e4bc3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4bc8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e4bc8(); return;
}

void f_8e4bc8(void) {
  LOAD_REGS();
L_8e4bc8: /* 8e4bc8: push 0xa1da7c */
  { uint32_t v = 0xa1da7cu; esp -= 4; W32(esp, v); }
/* 8e4bcd: push 0xaedab0 */
  { uint32_t v = 0xaedab0u; esp -= 4; W32(esp, v); }
/* 8e4bd2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e4bd8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e4bd8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e4bdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4bdd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4bdf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4be4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e4be4: guest_badaddr(0x8e4be4); return;
}

void f_8e4c20(void) {
  LOAD_REGS();
L_8e4c20: /* 8e4c20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e4c21: mov ebp, esp */
  ebp = esp;
/* 8e4c23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e4c25: push 0x9d8990 */
  { uint32_t v = 0x9d8990u; esp -= 4; W32(esp, v); }
/* 8e4c2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e4c30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e4c31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e4c38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e4c3b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8e4c3e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8e4c41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e4c42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e4c43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e4c44: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8e4c47: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e4c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e4c4b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e4c4e: mov esi, ecx */
  esi = ecx;
/* 8e4c50: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8e4c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e4c54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e4c55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e4c56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e4c57: mov ecx, esi */
  ecx = esi;
/* 8e4c59: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e4c60: call 0x6cba0f */
  esp -= 4; W32(esp, 0x8e4c65u); SPILL(); f_6cba0f(); if (g_unwind) return; RELOAD();
/* 8e4c65: mov edx, dword ptr [esi + 0x4b0] */
  edx = R32((uint32_t)(esi + 0x4b0u));
/* 8e4c6b: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 8e4c6e: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8e4c71: mov dword ptr [ecx + edx], 1 */
  W32((uint32_t)(ecx + edx), 0x1u);
/* 8e4c78: mov eax, dword ptr [esi + 0x4b0] */
  eax = R32((uint32_t)(esi + 0x4b0u));
/* 8e4c7e: mov dword ptr [ecx + eax + 4], 2 */
  W32((uint32_t)(ecx + eax + 0x4u), 0x2u);
/* 8e4c86: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 8e4c8c: mov ebx, dword ptr [esi + 0x4b0] */
  ebx = R32((uint32_t)(esi + 0x4b0u));
/* 8e4c92: lea ecx, [ecx + ebx + 8] */
  ecx = (uint32_t)(ecx + ebx + 0x8u);
/* 8e4c96: mov eax, edi */
  eax = edi;
/* 8e4c98: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 8e4c9e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e4ca0: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8e4ca2: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8e4ca4: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8e4ca7: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8e4caa: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8e4cad: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8e4cb0: mov edx, dword ptr [esi + 0x494] */
  edx = R32((uint32_t)(esi + 0x494u));
/* 8e4cb6: mov ecx, dword ptr [esi + 0x3fc] */
  ecx = R32((uint32_t)(esi + 0x3fcu));
/* 8e4cbc: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 8e4cbf: mov ebx, dword ptr [esi + 0x4a4] */
  ebx = R32((uint32_t)(esi + 0x4a4u));
/* 8e4cc5: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8e4cc8: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e4cca: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e4ccc: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8e4cce: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8e4cd0: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 8e4cd3: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8e4cd6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8e4cd9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8e4cdc: mov ecx, dword ptr [esi + 0x494] */
  ecx = R32((uint32_t)(esi + 0x494u));
/* 8e4ce2: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 8e4ce8: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 8e4ceb: mov edx, dword ptr [eax + edx + 0xa8] */
  edx = R32((uint32_t)(eax + edx + 0xa8u));
/* 8e4cf2: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8e4cf5: mov ebx, dword ptr [esi + 0x4a4] */
  ebx = R32((uint32_t)(esi + 0x4a4u));
/* 8e4cfb: mov dword ptr [ecx + ebx + 0xc], edx */
  W32((uint32_t)(ecx + ebx + 0xcu), edx);
/* 8e4cff: mov edx, dword ptr [esi + 0x494] */
  edx = R32((uint32_t)(esi + 0x494u));
/* 8e4d05: mov ecx, dword ptr [esi + 0x3fc] */
  ecx = R32((uint32_t)(esi + 0x3fcu));
/* 8e4d0b: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 8e4d0e: mov ecx, dword ptr [eax + ecx + 0x6c] */
  ecx = R32((uint32_t)(eax + ecx + 0x6cu));
/* 8e4d12: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8e4d15: mov ebx, dword ptr [esi + 0x4a4] */
  ebx = R32((uint32_t)(esi + 0x4a4u));
/* 8e4d1b: mov dword ptr [edx + ebx + 0x10], ecx */
  W32((uint32_t)(edx + ebx + 0x10u), ecx);
/* 8e4d1f: mov ecx, dword ptr [esi + 0x494] */
  ecx = R32((uint32_t)(esi + 0x494u));
/* 8e4d25: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 8e4d2b: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 8e4d2e: fld dword ptr [eax + edx + 0xac] */
  { double v = F32((uint32_t)(eax + edx + 0xacu)); FPUSH(v); }
/* 8e4d35: mov edx, dword ptr [esi + 0x4a4] */
  edx = R32((uint32_t)(esi + 0x4a4u));
/* 8e4d3b: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8e4d3e: fstp qword ptr [ecx + edx + 0x14] */
  WF64((uint32_t)(ecx + edx + 0x14u), ST0); FPOP();
/* 8e4d42: mov edx, dword ptr [esi + 0x494] */
  edx = R32((uint32_t)(esi + 0x494u));
/* 8e4d48: mov ecx, dword ptr [esi + 0x3fc] */
  ecx = R32((uint32_t)(esi + 0x3fcu));
/* 8e4d4e: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 8e4d51: mov ebx, dword ptr [esi + 0x4a4] */
  ebx = R32((uint32_t)(esi + 0x4a4u));
/* 8e4d57: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e4d59: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e4d5a: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8e4d5d: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e4d5f: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8e4d61: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8e4d63: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 8e4d66: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8e4d69: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8e4d6c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8e4d6f: mov ecx, dword ptr [esi + 0x494] */
  ecx = R32((uint32_t)(esi + 0x494u));
/* 8e4d75: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 8e4d7b: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 8e4d7e: mov edx, dword ptr [eax + edx + 0xa8] */
  edx = R32((uint32_t)(eax + edx + 0xa8u));
/* 8e4d85: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8e4d88: mov ebx, dword ptr [esi + 0x4a4] */
  ebx = R32((uint32_t)(esi + 0x4a4u));
/* 8e4d8e: mov dword ptr [ecx + ebx + 0x28], edx */
  W32((uint32_t)(ecx + ebx + 0x28u), edx);
/* 8e4d92: mov edx, dword ptr [esi + 0x494] */
  edx = R32((uint32_t)(esi + 0x494u));
/* 8e4d98: mov ecx, dword ptr [esi + 0x3fc] */
  ecx = R32((uint32_t)(esi + 0x3fcu));
/* 8e4d9e: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 8e4da1: mov ecx, dword ptr [eax + ecx + 0x6c] */
  ecx = R32((uint32_t)(eax + ecx + 0x6cu));
/* 8e4da5: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8e4da8: mov ebx, dword ptr [esi + 0x4a4] */
  ebx = R32((uint32_t)(esi + 0x4a4u));
/* 8e4dae: mov dword ptr [edx + ebx + 0x2c], ecx */
  W32((uint32_t)(edx + ebx + 0x2cu), ecx);
/* 8e4db2: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 8e4db8: mov ecx, dword ptr [esi + 0x4a4] */
  ecx = R32((uint32_t)(esi + 0x4a4u));
/* 8e4dbe: fld dword ptr [eax + edx + 0xac] */
  { double v = F32((uint32_t)(eax + edx + 0xacu)); FPUSH(v); }
/* 8e4dc5: mov eax, dword ptr [esi + 0x494] */
  eax = R32((uint32_t)(esi + 0x494u));
/* 8e4dcb: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 8e4dce: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8e4dd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e4dd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e4dd3: fstp qword ptr [eax + ecx + 0x30] */
  WF64((uint32_t)(eax + ecx + 0x30u), ST0); FPOP();
/* 8e4dd7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e4dda: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e4de1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e4de2: mov esp, ebp */
  esp = ebp;
/* 8e4de4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e4de5: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8e4de8(void) {
  LOAD_REGS();
L_8e4de8: /* 8e4de8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e4deb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e4df0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8e4df3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e4df4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8e4df7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4dfcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e4dfc(); return;
}

void f_8e4dfc(void) {
  LOAD_REGS();
L_8e4dfc: /* 8e4dfc: push 0xa1dab4 */
  { uint32_t v = 0xa1dab4u; esp -= 4; W32(esp, v); }
/* 8e4e01: push 0xaedab8 */
  { uint32_t v = 0xaedab8u; esp -= 4; W32(esp, v); }
/* 8e4e06: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e4e0cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e4e0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e4e0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4e11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4e13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e4e18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e4e18: guest_badaddr(0x8e4e18); return;
}

void f_8e4ea0(void) {
  LOAD_REGS();
L_8e4ea0: /* 8e4ea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e4ea4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e4ea5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e4ea6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e4ea7: mov esi, ecx */
  esi = ecx;
/* 8e4ea9: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8e4ead: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e4eae: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8e4eb1: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 8e4eb4: mov dword ptr [esi], 0xa1dafc */
  W32((uint32_t)(esi), 0xa1dafcu);
/* 8e4eba: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8e4ec0: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8e4ec3: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8e4ec6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e4ec8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8e4ecd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e4ece: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e4ecf: call 0x99c910 */
  esp -= 4; W32(esp, 0x8e4ed4u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8e4ed4: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8e4ed9: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8e4edc: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8e4edf: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8e4ee2: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8e4ee8: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8e4eeb: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8e4eee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e4eef: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8e4ef2: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 8e4ef5: mov eax, esi */
  eax = esi;
/* 8e4ef7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e4ef8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e4ef9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e4efa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e4f20(void) {
  LOAD_REGS();
L_8e4f20: /* 8e4f20: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8e4f23: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8e4f26: ret  */
  esp += 4; SPILL(); return;
}

void f_8e4f40(void) {
  LOAD_REGS();
L_8e4f40: /* 8e4f40: mov eax, 1 */
  eax = 0x1u;
/* 8e4f45: ret  */
  esp += 4; SPILL(); return;
}

void f_8e4f60(void) {
  LOAD_REGS();
L_8e4f60: /* 8e4f60: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8e4f63: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e4f65: ret  */
  esp += 4; SPILL(); return;
}

void f_8e4f80(void) {
  LOAD_REGS();
L_8e4f80: /* 8e4f80: mov eax, 2 */
  eax = 0x2u;
/* 8e4f85: ret  */
  esp += 4; SPILL(); return;
}

void f_8e4fa0(void) {
  LOAD_REGS();
L_8e4fa0: /* 8e4fa0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e4fa3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8e4fa7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e4fa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e4fa9: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 8e4fac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e4fad: mov edi, dword ptr [esi + 0x40c] */
  edi = R32((uint32_t)(esi + 0x40cu));
/* 8e4fb3: xor edx, edx */
  edx = 0;
/* 8e4fb5: xor ebp, ebp */
  ebp = 0;
/* 8e4fb7: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e4fb9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8e4fbd: jle 0x8e50d9 */
  if ((zf || sf != of)) goto L_8e50d9;
L_8e4fc3: /* 8e4fc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e4fc4: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 8e4fc8: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8e4fcc: jmp 0x8e4fd0 */
  goto L_8e4fd0;
L_8e4fce: /* 8e4fce: xor edx, edx */
  edx = 0;
L_8e4fd0: /* 8e4fd0: mov edi, dword ptr [esi + 0x3fc] */
  edi = R32((uint32_t)(esi + 0x3fcu));
/* 8e4fd6: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 8e4fda: test byte ptr [edi + ebx + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + ebx + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e4fe2: je 0x8e50a5 */
  if (zf) goto L_8e50a5;
L_8e4fe8: /* 8e4fe8: mov edi, dword ptr [esi + 0x4b0] */
  edi = R32((uint32_t)(esi + 0x4b0u));
/* 8e4fee: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 8e4ff2: mov edi, dword ptr [edi + ebx + 4] */
  edi = R32((uint32_t)(edi + ebx + 0x4u));
/* 8e4ff6: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e4ff9: jle 0x8e50a5 */
  if ((zf || sf != of)) goto L_8e50a5;
L_8e4fff: /* 8e4fff: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8e5003: test byte ptr [esi + 0x49c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x49cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e500a: mov edx, 0 */
  edx = 0x0u;
/* 8e500f: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8e5012: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e5013: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e5015: jle 0x8e50a5 */
  if ((zf || sf != of)) goto L_8e50a5;
L_8e501b: /* 8e501b: lea edx, [edi - 1] */
  edx = (uint32_t)(edi + 0xffffffffu);
/* 8e501e: mov edi, edi */
  edi = edi;
L_8e5020: /* 8e5020: xor ebx, ebx */
  ebx = 0;
/* 8e5022: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e5024: jle 0x8e507a */
  if ((zf || sf != of)) goto L_8e507a;
L_8e5026: /* 8e5026: jmp 0x8e5030 */
  goto L_8e5030;
L_8e5030: /* 8e5030: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5033: lea edx, [ebp + ebp] */
  edx = (uint32_t)(ebp + ebp);
/* 8e5037: mov word ptr [eax - 2], dx */
  W16((uint32_t)(eax + 0xfffffffeu), (edx & 0xffffu));
/* 8e503b: lea esi, [edx + 1] */
  esi = (uint32_t)(edx + 0x1u);
/* 8e503e: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8e5041: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5044: lea edi, [edx + 2] */
  edi = (uint32_t)(edx + 0x2u);
/* 8e5047: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8e504a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e504d: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8e5050: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5053: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8e5056: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 8e505a: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e505d: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5060: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8e5063: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8e5066: mov edx, dword ptr [edx + 0x4b0] */
  edx = R32((uint32_t)(edx + 0x4b0u));
/* 8e506c: mov edx, dword ptr [edx + esi + 4] */
  edx = R32((uint32_t)(edx + esi + 0x4u));
/* 8e5070: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5073: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8e5074: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e5075: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8e5076: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e5078: jl 0x8e5030 */
  if ((sf != of)) goto L_8e5030;
L_8e507a: /* 8e507a: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8e507e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8e507f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8e5080: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 8e5084: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 8e5087: mov bl, byte ptr [esi + 0x49c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x49cu))) & 0xffu);
/* 8e508d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8e5091: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e5094: mov ebx, 0 */
  ebx = 0x0u;
/* 8e5099: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8e509c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e509d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e509f: jl 0x8e5020 */
  if ((sf != of)) goto L_8e5020;
L_8e50a5: /* 8e50a5: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8e50a9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8e50ad: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 8e50b1: add esi, 0xc8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e50b7: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 8e50bb: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 8e50be: mov edi, dword ptr [esi + 0x40c] */
  edi = R32((uint32_t)(esi + 0x40cu));
/* 8e50c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e50c5: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e50c8: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e50ca: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8e50ce: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 8e50d2: jl 0x8e4fce */
  if ((sf != of)) goto L_8e4fce;
L_8e50d8: /* 8e50d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8e50d9: /* 8e50d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e50da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e50db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e50dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e50df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e5028(void) {
  LOAD_REGS();
  goto L_8e5028;
L_8e4fce: /* 8e4fce: xor edx, edx */
  edx = 0;
/* 8e4fd0: mov edi, dword ptr [esi + 0x3fc] */
  edi = R32((uint32_t)(esi + 0x3fcu));
/* 8e4fd6: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 8e4fda: test byte ptr [edi + ebx + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + ebx + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e4fe2: je 0x8e50a5 */
  if (zf) goto L_8e50a5;
L_8e4fe8: /* 8e4fe8: mov edi, dword ptr [esi + 0x4b0] */
  edi = R32((uint32_t)(esi + 0x4b0u));
/* 8e4fee: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 8e4ff2: mov edi, dword ptr [edi + ebx + 4] */
  edi = R32((uint32_t)(edi + ebx + 0x4u));
/* 8e4ff6: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e4ff9: jle 0x8e50a5 */
  if ((zf || sf != of)) goto L_8e50a5;
L_8e4fff: /* 8e4fff: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8e5003: test byte ptr [esi + 0x49c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x49cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e500a: mov edx, 0 */
  edx = 0x0u;
/* 8e500f: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8e5012: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e5013: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e5015: jle 0x8e50a5 */
  if ((zf || sf != of)) goto L_8e50a5;
L_8e501b: /* 8e501b: lea edx, [edi - 1] */
  edx = (uint32_t)(edi + 0xffffffffu);
/* 8e501e: mov edi, edi */
  edi = edi;
L_8e5020: /* 8e5020: xor ebx, ebx */
  ebx = 0;
/* 8e5022: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e5024: jle 0x8e507a */
  if ((zf || sf != of)) goto L_8e507a;
L_8e5026: /* 8e5026: jmp 0x8e5030 */
  goto L_8e5030;
L_8e5028: /* 8e5028: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8e502f: nop  */
L_8e5030: /* 8e5030: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5033: lea edx, [ebp + ebp] */
  edx = (uint32_t)(ebp + ebp);
/* 8e5037: mov word ptr [eax - 2], dx */
  W16((uint32_t)(eax + 0xfffffffeu), (edx & 0xffffu));
/* 8e503b: lea esi, [edx + 1] */
  esi = (uint32_t)(edx + 0x1u);
/* 8e503e: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8e5041: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5044: lea edi, [edx + 2] */
  edi = (uint32_t)(edx + 0x2u);
/* 8e5047: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8e504a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e504d: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8e5050: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5053: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8e5056: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 8e505a: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e505d: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5060: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8e5063: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8e5066: mov edx, dword ptr [edx + 0x4b0] */
  edx = R32((uint32_t)(edx + 0x4b0u));
/* 8e506c: mov edx, dword ptr [edx + esi + 4] */
  edx = R32((uint32_t)(edx + esi + 0x4u));
/* 8e5070: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5073: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8e5074: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e5075: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8e5076: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e5078: jl 0x8e5030 */
  if ((sf != of)) goto L_8e5030;
L_8e507a: /* 8e507a: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8e507e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8e507f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8e5080: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 8e5084: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 8e5087: mov bl, byte ptr [esi + 0x49c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x49cu))) & 0xffu);
/* 8e508d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8e5091: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e5094: mov ebx, 0 */
  ebx = 0x0u;
/* 8e5099: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8e509c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e509d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e509f: jl 0x8e5020 */
  if ((sf != of)) goto L_8e5020;
L_8e50a5: /* 8e50a5: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8e50a9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8e50ad: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 8e50b1: add esi, 0xc8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e50b7: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 8e50bb: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 8e50be: mov edi, dword ptr [esi + 0x40c] */
  edi = R32((uint32_t)(esi + 0x40cu));
/* 8e50c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e50c5: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e50c8: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e50ca: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8e50ce: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 8e50d2: jl 0x8e4fce */
  if ((sf != of)) goto L_8e4fce;
L_8e50d8: /* 8e50d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e50d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e50da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e50db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e50dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e50df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e5150(void) {
  LOAD_REGS();
L_8e5150: /* 8e5150: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e5151: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e5152: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8e5158: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e5159: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e515a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8e515e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e5160: mov esi, ecx */
  esi = ecx;
/* 8e5162: jge 0x8e5178 */
  if ((sf == of)) goto L_8e5178;
L_8e5164: /* 8e5164: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8e5169: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8e516e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8e5173: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8e5175u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e5175: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e5178: /* 8e5178: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e517b: jle 0x8e5191 */
  if ((zf || sf != of)) goto L_8e5191;
L_8e517d: /* 8e517d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8e5182: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8e5187: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8e518c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8e518eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e518e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e5191: /* 8e5191: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8e5195: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8e5198: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8e519b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e519d: jle 0x8e51b3 */
  if ((zf || sf != of)) goto L_8e51b3;
L_8e519f: /* 8e519f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8e51a4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8e51a9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8e51ae: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8e51b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e51b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e51b3: /* 8e51b3: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8e51b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e51b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e51b7: mov ecx, esi */
  ecx = esi;
/* 8e51b9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8e51bfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8e51bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e51c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e51c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e51c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e51c3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e51f0(void) {
  LOAD_REGS();
L_8e51f0: /* 8e51f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e51f1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8e51f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e51f6: mov ebx, dword ptr [ecx + 0x3fc] */
  ebx = R32((uint32_t)(ecx + 0x3fcu));
/* 8e51fc: mov edx, eax */
  edx = eax;
/* 8e51fe: imul edx, edx, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xc8u);
  edx = (uint32_t)r;
  }
/* 8e5204: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e5205: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e5206: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e5208: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e5209: mov edi, dword ptr [ecx + 0x4b0] */
  edi = R32((uint32_t)(ecx + 0x4b0u));
/* 8e520f: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* 8e5212: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8e5215: mov ebx, dword ptr [edi + esi] */
  ebx = R32((uint32_t)(edi + esi));
/* 8e5218: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8e521a: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 8e521e: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8e5221: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8e5224: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8e5227: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 8e5229: mov ebp, dword ptr [ecx + 0x494] */
  ebp = R32((uint32_t)(ecx + 0x494u));
/* 8e522f: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 8e5233: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8e5236: mov ebx, ebp */
  ebx = ebp;
/* 8e5238: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 8e523b: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* 8e523e: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8e5241: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 8e5244: fld dword ptr [ecx + 0x498] */
  { double v = F32((uint32_t)(ecx + 0x498u)); FPUSH(v); }
/* 8e524a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8e524c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8e524e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8e5250: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8e5252: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e5254: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 8e5256: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e5258: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e525a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8e525c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8e525e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8e5260: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e5262: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e5264: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e5266: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e5268: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e526b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e526d: jp 0x8e52a7 */
  if (pf) goto L_8e52a7;
L_8e526f: /* 8e526f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8e5273: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e5274: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e5276: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8e527a: jne 0x8e5284 */
  if (!zf) goto L_8e5284;
L_8e527c: /* 8e527c: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
L_8e5284: /* 8e5284: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8e5288: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e5289: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e528b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8e528f: jle 0x8e5295 */
  if ((zf || sf != of)) goto L_8e5295;
L_8e5291: /* 8e5291: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
L_8e5295: /* 8e5295: mov eax, edx */
  eax = edx;
/* 8e5297: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 8e5299: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 8e529b: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 8e529e: mov dword ptr [edi + 4], ebp */
  W32((uint32_t)(edi + 0x4u), ebp);
/* 8e52a1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8e52a4: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_8e52a7: /* 8e52a7: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8e52ab: mov edi, dword ptr [ecx + 0x4a4] */
  edi = R32((uint32_t)(ecx + 0x4a4u));
/* 8e52b1: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e52b3: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8e52b6: mov ebx, edx */
  ebx = edx;
/* 8e52b8: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 8e52ba: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8e52bc: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 8e52be: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 8e52c1: mov dword ptr [edi + 4], ebp */
  W32((uint32_t)(edi + 0x4u), ebp);
/* 8e52c4: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 8e52c7: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 8e52ca: mov ebx, dword ptr [edx + 0xa8] */
  ebx = R32((uint32_t)(edx + 0xa8u));
/* 8e52d0: mov edi, dword ptr [ecx + 0x4a4] */
  edi = R32((uint32_t)(ecx + 0x4a4u));
/* 8e52d6: mov dword ptr [edi + eax + 0xc], ebx */
  W32((uint32_t)(edi + eax + 0xcu), ebx);
/* 8e52da: mov edx, dword ptr [edx + 0x6c] */
  edx = R32((uint32_t)(edx + 0x6cu));
/* 8e52dd: mov edi, dword ptr [ecx + 0x4a4] */
  edi = R32((uint32_t)(ecx + 0x4a4u));
/* 8e52e3: mov dword ptr [edi + eax + 0x10], edx */
  W32((uint32_t)(edi + eax + 0x10u), edx);
/* 8e52e7: mov edx, dword ptr [ecx + 0x3f0] */
  edx = R32((uint32_t)(ecx + 0x3f0u));
/* 8e52ed: mov edx, dword ptr [edx + 0xb0] */
  edx = R32((uint32_t)(edx + 0xb0u));
/* 8e52f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e52f4: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 8e52fa: mov edx, dword ptr [ecx + 0x4a4] */
  edx = R32((uint32_t)(ecx + 0x4a4u));
/* 8e5300: fstp qword ptr [edx + eax + 0x14] */
  WF64((uint32_t)(edx + eax + 0x14u), ST0); FPOP();
/* 8e5304: mov eax, dword ptr [ecx + 0x4b0] */
  eax = R32((uint32_t)(ecx + 0x4b0u));
/* 8e530a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8e530e: mov dword ptr [eax + esi + 4], edx */
  W32((uint32_t)(eax + esi + 0x4u), edx);
/* 8e5312: mov eax, dword ptr [ecx + 0x4b0] */
  eax = R32((uint32_t)(ecx + 0x4b0u));
/* 8e5318: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8e531c: mov dword ptr [esi + eax], ecx */
  W32((uint32_t)(esi + eax), ecx);
/* 8e531f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e5320: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e5321: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e5322: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8e5323: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e5380(void) {
  LOAD_REGS();
L_8e5380: /* 8e5380: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e5382: push 0x9d89a9 */
  { uint32_t v = 0x9d89a9u; esp -= 4; W32(esp, v); }
/* 8e5387: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e538d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e538e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e5395: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e5396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e5397: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e5398: mov esi, ecx */
  esi = ecx;
/* 8e539a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e539b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8e539f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8e53a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e53a4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8e53aa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8e53b2: jge 0x8e53c8 */
  if ((sf == of)) goto L_8e53c8;
L_8e53b4: /* 8e53b4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8e53b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8e53be: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8e53c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8e53c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e53c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e53c8: /* 8e53c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e53cb: jle 0x8e53e1 */
  if ((zf || sf != of)) goto L_8e53e1;
L_8e53cd: /* 8e53cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8e53d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8e53d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8e53dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8e53deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e53de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e53e1: /* 8e53e1: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8e53e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e53e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e53e6: mov ecx, esi */
  ecx = esi;
/* 8e53e8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8e53eeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8e53ee: mov ecx, esi */
  ecx = esi;
/* 8e53f0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8e53f8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8e53feu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8e53fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8e5402: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e5403: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e5404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e5405: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e540c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e540f: ret  */
  esp += 4; SPILL(); return;
}

void f_8e5440(void) {
  LOAD_REGS();
L_8e5440: /* 8e5440: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e5443: jmp 0x6c97be */
  SPILL(); f_6c97be(); return;
}

void f_8e5460(void) {
  LOAD_REGS();
L_8e5460: /* 8e5460: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e5463: jmp 0x6c97be */
  SPILL(); f_6c97be(); return;
}

void f_8e5480(void) {
  LOAD_REGS();
L_8e5480: /* 8e5480: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e5481: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e5482: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e5483: mov esi, ecx */
  esi = ecx;
/* 8e5485: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e5486: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8e5489: mov dword ptr [esi], 0xa1db14 */
  W32((uint32_t)(esi), 0xa1db14u);
/* 8e548f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8e5495u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8e5495: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8e549b: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8e549e: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8e54a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e54a3: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8e54a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e54a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e54aa: call 0x99c910 */
  esp -= 4; W32(esp, 0x8e54afu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8e54af: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8e54b4: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8e54b7: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8e54ba: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8e54bd: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8e54c3: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8e54c6: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8e54c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e54ca: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 8e54cd: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 8e54d0: mov eax, esi */
  eax = esi;
/* 8e54d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e54d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e54d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e54d5: ret  */
  esp += 4; SPILL(); return;
}

void f_8e5500(void) {
  LOAD_REGS();
L_8e5500: /* 8e5500: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 8e5503: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 8e5506: ret  */
  esp += 4; SPILL(); return;
}

void f_8e5520(void) {
  LOAD_REGS();
L_8e5520: /* 8e5520: mov eax, 1 */
  eax = 0x1u;
/* 8e5525: ret  */
  esp += 4; SPILL(); return;
}

void f_8e5540(void) {
  LOAD_REGS();
L_8e5540: /* 8e5540: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8e5543: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e5546: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e5549: ret  */
  esp += 4; SPILL(); return;
}

void f_8e5560(void) {
  LOAD_REGS();
L_8e5560: /* 8e5560: mov eax, 0x18 */
  eax = 0x18u;
/* 8e5565: ret  */
  esp += 4; SPILL(); return;
}

void f_8e5580(void) {
  LOAD_REGS();
L_8e5580: /* 8e5580: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e5584: mov edx, 4 */
  edx = 0x4u;
/* 8e5589: mov ecx, 2 */
  ecx = 0x2u;
/* 8e558e: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 8e5594: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 8e559b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8e559e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8e55a1: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8e55a4: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 8e55a7: mov eax, 3 */
  eax = 0x3u;
/* 8e55ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e55c0(void) {
  LOAD_REGS();
L_8e55c0: /* 8e55c0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8e55c3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8e55c6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8e55ca: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e55cd: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e55d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e55d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e55d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e55d3: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8e55d8u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8e55d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e55db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e55f0(void) {
  LOAD_REGS();
L_8e55f0: /* 8e55f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e55f4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8e55f7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e55fa: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 8e55fd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e5601: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8e5603: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e5620(void) {
  LOAD_REGS();
L_8e5620: /* 8e5620: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e5621: mov esi, ecx */
  esi = ecx;
/* 8e5623: call 0x6c5c8b */
  esp -= 4; W32(esp, 0x8e5628u); SPILL(); f_6c5c8b(); if (g_unwind) return; RELOAD();
/* 8e5628: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e562c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8e5630: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8e5634: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8e5637: mov dword ptr [esi], 0xa1db40 */
  W32((uint32_t)(esi), 0xa1db40u);
/* 8e563d: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 8e5640: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 8e5643: mov eax, esi */
  eax = esi;
/* 8e5645: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e5646: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8e5660(void) {
  LOAD_REGS();
L_8e5660: /* 8e5660: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 8e5663: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e5666: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e5669: ret  */
  esp += 4; SPILL(); return;
}

void f_8e5680(void) {
  LOAD_REGS();
L_8e5680: /* 8e5680: sub esp, 0x16c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x16cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e5686: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e5687: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e5688: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e5689: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e568a: mov edi, ecx */
  edi = ecx;
/* 8e568c: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 8e568f: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5694: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e5696: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8e5699: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8e569c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e569f: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 8e56a6: mov dword ptr [esp + 0x9c], eax */
  W32((uint32_t)(esp + 0x9cu), eax);
/* 8e56ad: mov eax, esp */
  eax = esp;
/* 8e56af: xor ebx, ebx */
  ebx = 0;
/* 8e56b1: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 8e56b8: mov esi, 0x3f800000 */
  esi = 0x3f800000u;
/* 8e56bd: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8e56bf: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8e56c2: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8e56c5: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 8e56c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e56c9: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8e56cc: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 8e56d0: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 8e56d7: call 0x6c7018 */
  esp -= 4; W32(esp, 0x8e56dcu); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 8e56dc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e56df: mov eax, esp */
  eax = esp;
/* 8e56e1: lea edx, [esp + 0xf8] */
  edx = (uint32_t)(esp + 0xf8u);
/* 8e56e8: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8e56ea: mov dword ptr [eax + 4], 0xc47a0000 */
  W32((uint32_t)(eax + 0x4u), 0xc47a0000u);
/* 8e56f1: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8e56f4: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 8e56f7: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8e56fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e56fb: call 0x6c7018 */
  esp -= 4; W32(esp, 0x8e5700u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 8e5700: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8e5703: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 8e570a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e570d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8e5710: fsub dword ptr [esp + 0x8c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8cu)));
/* 8e5717: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8e5719: mov eax, esp */
  eax = esp;
/* 8e571b: fsub dword ptr [esp + 0x88] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x88u)));
/* 8e5722: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 8e5726: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 8e572d: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 8e5734: mov dword ptr [eax], 0x447a0000 */
  W32((uint32_t)(eax), 0x447a0000u);
/* 8e573a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8e573d: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8e5740: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 8e5743: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8e5746: lea eax, [esp + 0xf8] */
  eax = (uint32_t)(esp + 0xf8u);
/* 8e574d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e574e: call 0x6c7018 */
  esp -= 4; W32(esp, 0x8e5753u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 8e5753: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8e5756: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 8e575d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8e5760: fsub dword ptr [esp + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x7cu)));
/* 8e5764: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8e5766: fsub dword ptr [esp + 0x78] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x78u)));
/* 8e576a: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 8e5771: fst dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0);
/* 8e5778: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8e577a: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 8e5781: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8e5785: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e5787: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 8e578b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e578d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e578f: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 8e5796: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e5798: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 8e579c: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8e57a0: fmul dword ptr [esp + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xacu)));
/* 8e57a7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e57a9: fstp dword ptr [esp + 0xe0] */
  WF32((uint32_t)(esp + 0xe0u), ST0); FPOP();
/* 8e57b0: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 8e57b4: fmul dword ptr [esp + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xacu)));
/* 8e57bb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e57bd: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 8e57c1: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 8e57c5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e57c7: fstp dword ptr [esp + 0xe4] */
  WF32((uint32_t)(esp + 0xe4u), ST0); FPOP();
/* 8e57ce: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8e57d4u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8e57d4: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 8e57db: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8e57e1u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8e57e1: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 8e57e8: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8e57eeu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8e57ee: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 8e57f1: mov ecx, dword ptr [eax + 0x40c] */
  ecx = R32((uint32_t)(eax + 0x40cu));
/* 8e57f7: mov esi, dword ptr [esp + 0x180] */
  esi = R32((uint32_t)(esp + 0x180u));
/* 8e57fe: xor ebp, ebp */
  ebp = 0;
/* 8e5800: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e5802: jle 0x8e5db3 */
  if ((zf || sf != of)) goto L_8e5db3;
L_8e5808: /* 8e5808: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 8e580c: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
L_8e5810: /* 8e5810: mov ecx, dword ptr [eax + 0x3fc] */
  ecx = R32((uint32_t)(eax + 0x3fcu));
/* 8e5816: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 8e581a: test byte ptr [ecx + edx + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edx + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e5822: je 0x8e5d89 */
  if (zf) goto L_8e5d89;
L_8e5828: /* 8e5828: mov ecx, dword ptr [eax + 0x4b0] */
  ecx = R32((uint32_t)(eax + 0x4b0u));
/* 8e582e: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8e5832: mov ecx, dword ptr [ecx + edx + 4] */
  ecx = R32((uint32_t)(ecx + edx + 0x4u));
/* 8e5836: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e5839: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 8e583d: jle 0x8e5d89 */
  if ((zf || sf != of)) goto L_8e5d89;
L_8e5843: /* 8e5843: test byte ptr [eax + 0x49c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x49cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e584a: mov ecx, 0 */
  ecx = 0x0u;
/* 8e584f: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8e5852: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 8e5856: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8e5857: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e5859: jle 0x8e5d89 */
  if ((zf || sf != of)) goto L_8e5d89;
L_8e585f: /* 8e585f: nop  */
L_8e5860: /* 8e5860: mov edx, dword ptr [eax + 0x4b0] */
  edx = R32((uint32_t)(eax + 0x4b0u));
/* 8e5866: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8e586a: mov edi, dword ptr [ecx + edx] */
  edi = R32((uint32_t)(ecx + edx));
/* 8e586d: mov edx, dword ptr [eax + 0x494] */
  edx = R32((uint32_t)(eax + 0x494u));
/* 8e5873: mov ecx, dword ptr [eax + 0x4a4] */
  ecx = R32((uint32_t)(eax + 0x4a4u));
/* 8e5879: imul edx, ebp */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebp);
  edx = (uint32_t)r;
  }
/* 8e587c: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e587e: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8e5881: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e5883: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 8e5884: mov edx, ecx */
  edx = ecx;
/* 8e5886: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8e5888: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 8e588c: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8e588f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8e5892: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8e5896: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8e5899: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 8e589c: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 8e58a4: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 8e58ac: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 8e58b4: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 8e58b8: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8e58bc: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 8e58c0: jns 0x8e58c8 */
  if (!sf) goto L_8e58c8;
L_8e58c2: /* 8e58c2: add edi, dword ptr [eax + 0x494] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x494u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_8e58c8: /* 8e58c8: mov edx, dword ptr [eax + 0x494] */
  edx = R32((uint32_t)(eax + 0x494u));
/* 8e58ce: mov ecx, dword ptr [eax + 0x4a4] */
  ecx = R32((uint32_t)(eax + 0x4a4u));
/* 8e58d4: imul edx, ebp */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebp);
  edx = (uint32_t)r;
  }
/* 8e58d7: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e58d9: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8e58dc: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e58de: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8e58e0: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8e58e3: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 8e58e6: lea edx, [esp + 0x130] */
  edx = (uint32_t)(esp + 0x130u);
/* 8e58ed: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 8e58f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e58f2: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8e58f6: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 8e58fa: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8e58fe: call 0x6c1d93 */
  esp -= 4; W32(esp, 0x8e5903u); SPILL(); f_6c1d93(); if (g_unwind) return; RELOAD();
/* 8e5903: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8e5905: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8e5909: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 8e590d: xor eax, eax */
  eax = 0;
/* 8e590f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e5911: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8e5915: jle 0x8e5d59 */
  if ((zf || sf != of)) goto L_8e5d59;
L_8e591b: /* 8e591b: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e591f: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 8e5926: jmp 0x8e5930 */
  goto L_8e5930;
L_8e5928: /* 8e5928: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8e592c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e5930: /* 8e5930: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e5932: jne 0x8e598f */
  if (!zf) goto L_8e598f;
L_8e5934: /* 8e5934: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8e5938: lea ecx, [esp + 0x134] */
  ecx = (uint32_t)(esp + 0x134u);
/* 8e593f: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 8e5943: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e5944: lea ecx, [esp + 0x128] */
  ecx = (uint32_t)(esp + 0x128u);
/* 8e594b: fstp dword ptr [esp + 0x128] */
  WF32((uint32_t)(esp + 0x128u), ST0); FPOP();
/* 8e5952: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8e5956: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 8e595a: fstp dword ptr [esp + 0x12c] */
  WF32((uint32_t)(esp + 0x12cu), ST0); FPOP();
/* 8e5961: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8e5965: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 8e5969: fstp dword ptr [esp + 0x130] */
  WF32((uint32_t)(esp + 0x130u), ST0); FPOP();
/* 8e5970: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8e5976u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e5976: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8e5978: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 8e597c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8e597f: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 8e5983: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8e5986: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 8e598a: jmp 0x8e5a86 */
  goto L_8e5a86;
L_8e598f: /* 8e598f: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8e5993: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8e5997: fsub dword ptr [esp + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x50u)));
/* 8e599b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8e599c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e599e: jne 0x8e59d9 */
  if (!zf) goto L_8e59d9;
L_8e59a0: /* 8e59a0: fstp dword ptr [esp + 0xf4] */
  WF32((uint32_t)(esp + 0xf4u), ST0); FPOP();
/* 8e59a7: lea edx, [esp + 0x14c] */
  edx = (uint32_t)(esp + 0x14cu);
/* 8e59ae: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e59b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e59b3: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 8e59b7: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 8e59be: fstp dword ptr [esp + 0xfc] */
  WF32((uint32_t)(esp + 0xfcu), ST0); FPOP();
/* 8e59c5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8e59c9: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 8e59cd: fstp dword ptr [esp + 0x100] */
  WF32((uint32_t)(esp + 0x100u), ST0); FPOP();
/* 8e59d4: jmp 0x8e5a6c */
  goto L_8e5a6c;
L_8e59d9: /* 8e59d9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e59dd: lea ecx, [esp + 0x164] */
  ecx = (uint32_t)(esp + 0x164u);
/* 8e59e4: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 8e59e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e59e9: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8e59ed: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 8e59f2: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 8e59f6: lea edx, [esp + 0x148] */
  edx = (uint32_t)(esp + 0x148u);
/* 8e59fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e59fe: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 8e5a05: fstp dword ptr [esp + 0xfc] */
  WF32((uint32_t)(esp + 0xfcu), ST0); FPOP();
/* 8e5a0c: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8e5a10: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 8e5a14: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 8e5a18: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 8e5a1c: fstp dword ptr [esp + 0x128] */
  WF32((uint32_t)(esp + 0x128u), ST0); FPOP();
/* 8e5a23: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 8e5a27: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8e5a2b: fstp dword ptr [esp + 0x12c] */
  WF32((uint32_t)(esp + 0x12cu), ST0); FPOP();
/* 8e5a32: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 8e5a34: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 8e5a3b: fld dword ptr [esp + 0x128] */
  { double v = F32((uint32_t)(esp + 0x128u)); FPUSH(v); }
/* 8e5a42: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8e5a44: fstp dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0); FPOP();
/* 8e5a4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e5a4d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e5a4f: fld dword ptr [esp + 0x12c] */
  { double v = F32((uint32_t)(esp + 0x12cu)); FPUSH(v); }
/* 8e5a56: fadd dword ptr [esp + 0xfc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xfcu)));
/* 8e5a5d: fstp dword ptr [esp + 0xd8] */
  WF32((uint32_t)(esp + 0xd8u), ST0); FPOP();
/* 8e5a64: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8e5a6au); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8e5a6a: mov ecx, eax */
  ecx = eax;
L_8e5a6c: /* 8e5a6c: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8e5a72u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e5a72: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e5a74: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 8e5a78: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8e5a7b: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 8e5a7f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8e5a82: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
L_8e5a86: /* 8e5a86: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8e5a8a: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 8e5a91: fsub dword ptr [esp + 0x84] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x84u)));
/* 8e5a98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e5a99: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 8e5aa0: fstp dword ptr [esp + 0x110] */
  WF32((uint32_t)(esp + 0x110u), ST0); FPOP();
/* 8e5aa7: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e5aab: fsub dword ptr [esp + 0x8c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8cu)));
/* 8e5ab2: fstp dword ptr [esp + 0x114] */
  WF32((uint32_t)(esp + 0x114u), ST0); FPOP();
/* 8e5ab9: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8e5abd: fsub dword ptr [esp + 0x90] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x90u)));
/* 8e5ac4: fstp dword ptr [esp + 0x118] */
  WF32((uint32_t)(esp + 0x118u), ST0); FPOP();
/* 8e5acb: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8e5ad1u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e5ad1: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8e5ad5: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e5adb: lea edx, [esp + 0x90] */
  edx = (uint32_t)(esp + 0x90u);
/* 8e5ae2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8e5ae6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e5ae7: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 8e5aee: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 8e5af0: fstp dword ptr [esp + 0x104] */
  WF32((uint32_t)(esp + 0x104u), ST0); FPOP();
/* 8e5af7: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8e5afb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e5afd: fstp dword ptr [esp + 0x108] */
  WF32((uint32_t)(esp + 0x108u), ST0); FPOP();
/* 8e5b04: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e5b06: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8e5b0a: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e5b10: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8e5b14: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e5b1a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e5b1c: fstp dword ptr [esp + 0x10c] */
  WF32((uint32_t)(esp + 0x10cu), ST0); FPOP();
/* 8e5b23: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8e5b29u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e5b29: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8e5b2d: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 8e5b30: test byte ptr [eax + 0x49c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x49cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e5b37: je 0x8e5b41 */
  if (zf) goto L_8e5b41;
L_8e5b39: /* 8e5b39: fld dword ptr [0xa14e94] */
  { double v = F32((uint32_t)(0xa14e94u)); FPUSH(v); }
/* 8e5b3f: jmp 0x8e5b75 */
  goto L_8e5b75;
L_8e5b41: /* 8e5b41: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 8e5b48: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 8e5b4f: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 8e5b56: fmul dword ptr [esp + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x98u)));
/* 8e5b5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e5b5f: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 8e5b66: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 8e5b6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e5b6f: fimul dword ptr [eax + 0x4a0] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(eax + 0x4a0u)));
L_8e5b75: /* 8e5b75: test byte ptr [eax + 0x49c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x49cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e5b7c: je 0x8e5b91 */
  if (zf) goto L_8e5b91;
L_8e5b7e: /* 8e5b7e: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 8e5b82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e5b84: jne 0x8e5b91 */
  if (!zf) goto L_8e5b91;
L_8e5b86: /* 8e5b86: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e5b88: lea eax, [esp + 0x90] */
  eax = (uint32_t)(esp + 0x90u);
/* 8e5b8f: jmp 0x8e5bc1 */
  goto L_8e5bc1;
L_8e5b91: /* 8e5b91: lea ecx, [esp + 0x158] */
  ecx = (uint32_t)(esp + 0x158u);
/* 8e5b98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e5b99: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 8e5b9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e5b9e: call 0x99c958 */
  esp -= 4; W32(esp, 0x8e5ba3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8e5ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e5ba4: lea eax, [esp + 0x17c] */
  eax = (uint32_t)(esp + 0x17cu);
/* 8e5bab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e5bac: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 8e5bb3: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x8e5bb9u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 8e5bb9: mov ecx, eax */
  ecx = eax;
/* 8e5bbb: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8e5bc1u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
L_8e5bc1: /* 8e5bc1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e5bc3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8e5bc6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8e5bc9: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 8e5bcd: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8e5bd1: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 8e5bd5: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 8e5bd9: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8e5bdd: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8e5be1: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 8e5be5: mov dword ptr [esi + 0x14], 0x3f800000 */
  W32((uint32_t)(esi + 0x14u), 0x3f800000u);
/* 8e5bec: mov ecx, esi */
  ecx = esi;
/* 8e5bee: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e5bf1: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 8e5bf5: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 8e5bf9: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 8e5bfd: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 8e5c01: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8e5c05: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8e5c07: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 8e5c0e: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 8e5c15: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8e5c19: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e5c1b: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 8e5c1f: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 8e5c26: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 8e5c2a: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 8e5c31: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 8e5c35: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8e5c38: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 8e5c3c: mov dword ptr [esi - 0xc], eax */
  W32((uint32_t)(esi + 0xfffffff4u), eax);
/* 8e5c3f: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 8e5c46: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8e5c4a: mov edx, dword ptr [esp + 0xa8] */
  edx = R32((uint32_t)(esp + 0xa8u));
/* 8e5c51: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8e5c54: mov ecx, esi */
  ecx = esi;
/* 8e5c56: fdiv dword ptr [esp + 0x9c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x9cu)));
/* 8e5c5d: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e5c60: fst dword ptr [esi - 0x20] */
  WF32((uint32_t)(esi + 0xffffffe0u), ST0);
/* 8e5c63: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8e5c67: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e5c69: mov dword ptr [esi - 0xc], eax */
  W32((uint32_t)(esi + 0xfffffff4u), eax);
/* 8e5c6c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8e5c70: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 8e5c74: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 8e5c78: mov dword ptr [esi - 4], 0 */
  W32((uint32_t)(esi + 0xfffffffcu), 0x0u);
/* 8e5c7f: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 8e5c86: mov edx, dword ptr [esp + 0xb8] */
  edx = R32((uint32_t)(esp + 0xb8u));
/* 8e5c8d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e5c91: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e5c93: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 8e5c97: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 8e5c9b: fstp dword ptr [esp + 0xbc] */
  WF32((uint32_t)(esp + 0xbcu), ST0); FPOP();
/* 8e5ca2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e5ca6: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* 8e5cad: fsub dword ptr [esp + 0x68] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x68u)));
/* 8e5cb1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8e5cb4: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 8e5cbb: mov edx, dword ptr [esp + 0xc0] */
  edx = R32((uint32_t)(esp + 0xc0u));
/* 8e5cc2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8e5cc5: fstp dword ptr [esi - 8] */
  WF32((uint32_t)(esi + 0xfffffff8u), ST0); FPOP();
/* 8e5cc8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8e5ccc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8e5cd0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e5cd2: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 8e5cd6: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8e5cda: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 8e5cde: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8e5ce2: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8e5ce6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8e5cea: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 8e5ced: mov ecx, dword ptr [eax + 0x494] */
  ecx = R32((uint32_t)(eax + 0x494u));
/* 8e5cf3: mov edx, dword ptr [eax + 0x4a4] */
  edx = R32((uint32_t)(eax + 0x4a4u));
/* 8e5cf9: imul ecx, ebp */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebp);
  ecx = (uint32_t)r;
  }
/* 8e5cfc: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e5cfe: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8e5d01: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e5d03: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 8e5d04: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8e5d07: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 8e5d0a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8e5d0e: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 8e5d12: jns 0x8e5d1a */
  if (!sf) goto L_8e5d1a;
L_8e5d14: /* 8e5d14: add edi, dword ptr [eax + 0x494] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x494u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_8e5d1a: /* 8e5d1a: mov edx, dword ptr [eax + 0x494] */
  edx = R32((uint32_t)(eax + 0x494u));
/* 8e5d20: mov ebx, dword ptr [eax + 0x4a4] */
  ebx = R32((uint32_t)(eax + 0x4a4u));
/* 8e5d26: imul edx, ebp */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebp);
  edx = (uint32_t)r;
  }
/* 8e5d29: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e5d2b: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8e5d2e: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e5d30: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8e5d32: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8e5d35: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 8e5d38: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 8e5d3c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8e5d40: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 8e5d44: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8e5d48: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e5d49: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e5d4b: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 8e5d4f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8e5d53: jl 0x8e5928 */
  if ((sf != of)) goto L_8e5928;
L_8e5d59: /* 8e5d59: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8e5d5d: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 8e5d60: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 8e5d64: mov dl, byte ptr [eax + 0x49c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x49cu))) & 0xffu);
/* 8e5d6a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8e5d6b: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e5d6e: mov edx, 0 */
  edx = 0x0u;
/* 8e5d73: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8e5d76: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 8e5d7a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e5d7b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e5d7d: jl 0x8e5860 */
  if ((sf != of)) goto L_8e5860;
L_8e5d83: /* 8e5d83: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 8e5d87: xor ebx, ebx */
  ebx = 0;
L_8e5d89: /* 8e5d89: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8e5d8d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8e5d91: add eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e5d96: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 8e5d9a: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 8e5d9d: mov ecx, dword ptr [eax + 0x40c] */
  ecx = R32((uint32_t)(eax + 0x40cu));
/* 8e5da3: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8e5da4: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e5da7: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e5da9: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 8e5dad: jl 0x8e5810 */
  if ((sf != of)) goto L_8e5810;
L_8e5db3: /* 8e5db3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e5db4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e5db5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e5db6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e5db7: add esp, 0x16c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x16cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e5dbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e5f90(void) {
  LOAD_REGS();
L_8e5f90: /* 8e5f90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e5f91: mov ebp, esp */
  ebp = esp;
/* 8e5f93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e5f95: push 0x9d89c8 */
  { uint32_t v = 0x9d89c8u; esp -= 4; W32(esp, v); }
/* 8e5f9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e5fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e5fa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e5fa8: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e5fab: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e5fae: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e5fb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e5fb2: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 8e5fb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e5fb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e5fb7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e5fba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e5fbb: mov esi, ecx */
  esi = ecx;
/* 8e5fbd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e5fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e5fc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e5fc2: xor edi, edi */
  edi = 0;
/* 8e5fc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e5fc5: mov ecx, esi */
  ecx = esi;
/* 8e5fc7: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8e5fca: call 0x6c20b8 */
  esp -= 4; W32(esp, 0x8e5fcfu); SPILL(); f_6c20b8(); if (g_unwind) return; RELOAD();
/* 8e5fcf: cmp dword ptr [esi + 0x318], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x318u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e5fd5: jne 0x8e5fec */
  if (!zf) goto L_8e5fec;
L_8e5fd7: /* 8e5fd7: xor eax, eax */
  eax = 0;
/* 8e5fd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e5fdc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e5fe3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e5fe4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e5fe5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e5fe6: mov esp, ebp */
  esp = ebp;
/* 8e5fe8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e5fe9: ret 0x10 */
  esp += 20; SPILL(); return;
L_8e5fec: /* 8e5fec: cmp dword ptr [esi + 0x40c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e5ff2: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8e5ff5: jle 0x8e6271 */
  if ((zf || sf != of)) goto L_8e6271;
L_8e5ffb: /* 8e5ffb: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 8e5ffe: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8e6001: xor edx, edx */
  edx = 0;
L_8e6003: /* 8e6003: cmp edx, dword ptr [esi + 0x40c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e6009: jge 0x8e605e */
  if ((sf == of)) goto L_8e605e;
L_8e600b: /* 8e600b: mov ecx, dword ptr [esi + 0x3fc] */
  ecx = R32((uint32_t)(esi + 0x3fcu));
/* 8e6011: mov eax, edx */
  eax = edx;
/* 8e6013: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 8e6019: test byte ptr [ecx + eax + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6021: je 0x8e605b */
  if (zf) goto L_8e605b;
L_8e6023: /* 8e6023: mov ecx, dword ptr [esi + 0x4b0] */
  ecx = R32((uint32_t)(esi + 0x4b0u));
/* 8e6029: lea eax, [edx + edx*4] */
  eax = (uint32_t)(edx + edx*4);
/* 8e602c: mov eax, dword ptr [ecx + eax*4 + 4] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x4u));
/* 8e6030: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e6033: jle 0x8e605b */
  if ((zf || sf != of)) goto L_8e605b;
L_8e6035: /* 8e6035: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e6038: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8e603b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8e603c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e603f: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 8e6042: lea ebx, [ebx + ecx - 2] */
  ebx = (uint32_t)(ebx + ecx + 0xfffffffeu);
/* 8e6046: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 8e6049: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8e604c: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e604e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e6051: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 8e6054: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 8e6057: lea edi, [edi + eax*2 - 6] */
  edi = (uint32_t)(edi + eax*2 + 0xfffffffau);
L_8e605b: /* 8e605b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e605c: jmp 0x8e6003 */
  goto L_8e6003;
L_8e605e: /* 8e605e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e6061: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6063: je 0x8e5fd7 */
  if (zf) goto L_8e5fd7;
L_8e6069: /* 8e6069: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e606c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e606e: je 0x8e5fd7 */
  if (zf) goto L_8e5fd7;
L_8e6074: /* 8e6074: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6076: je 0x8e5fd7 */
  if (zf) goto L_8e5fd7;
L_8e607c: /* 8e607c: test byte ptr [esi + 0x49c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x49cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6083: je 0x8e6095 */
  if (zf) goto L_8e6095;
L_8e6085: /* 8e6085: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e6088: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e608a: lea edx, [ecx + ecx] */
  edx = (uint32_t)(ecx + ecx);
/* 8e608d: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8e6090: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8e6093: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_8e6095: /* 8e6095: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8e6098: call 0x6c5c8b */
  esp -= 4; W32(esp, 0x8e609du); SPILL(); f_6c5c8b(); if (g_unwind) return; RELOAD();
/* 8e609d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8e60a0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8e60a3: mov dword ptr [ebp - 0x60], 0xa1db40 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xa1db40u);
/* 8e60aa: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 8e60ad: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8e60b0: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8e60b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e60b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e60b5: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8e60b8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8e60bc: call 0x6ca312 */
  esp -= 4; W32(esp, 0x8e60c1u); SPILL(); f_6ca312(); if (g_unwind) return; RELOAD();
/* 8e60c1: mov ecx, dword ptr [0xcfa350] */
  ecx = R32((uint32_t)(0xcfa350u));
/* 8e60c7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8e60c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e60ca: xor edi, edi */
  edi = 0;
/* 8e60cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e60cd: mov ecx, ebx */
  ecx = ebx;
/* 8e60cf: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x8e60d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e60d2: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 8e60d8: movzx edx, byte ptr [esi + 0x314] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x314u)));
/* 8e60df: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 8e60e5: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 8e60e8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e60eb: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8e60ee: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8e60f1: cmp dword ptr [eax + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e60f8: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 8e60fe: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 8e6104: jne 0x8e610b */
  if (!zf) goto L_8e610b;
L_8e6106: /* 8e6106: mov dword ptr [eax + 0x48], edi */
  W32((uint32_t)(eax + 0x48u), edi);
/* 8e6109: jmp 0x8e6114 */
  goto L_8e6114;
L_8e610b: /* 8e610b: mov edx, dword ptr [esi + 0x318] */
  edx = R32((uint32_t)(esi + 0x318u));
/* 8e6111: mov dword ptr [eax + 0x48], edx */
  W32((uint32_t)(eax + 0x48u), edx);
L_8e6114: /* 8e6114: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 8e611a: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8e6120: mov dword ptr [edx + 0x3c], edi */
  W32((uint32_t)(edx + 0x3cu), edi);
/* 8e6123: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 8e6129: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8e612f: mov dword ptr [edx + 0x40], 1 */
  W32((uint32_t)(edx + 0x40u), 0x1u);
/* 8e6136: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 8e613c: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8e6142: mov dword ptr [edx + 0x44], edi */
  W32((uint32_t)(edx + 0x44u), edi);
/* 8e6145: mov eax, dword ptr [esi + 0x1c8] */
  eax = R32((uint32_t)(esi + 0x1c8u));
/* 8e614b: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 8e6151: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 8e6157: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e615a: mov dword ptr [edx + 0x4c], eax */
  W32((uint32_t)(edx + 0x4cu), eax);
/* 8e615d: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 8e6163: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8e6169: mov eax, dword ptr [esi + 0x1c4] */
  eax = R32((uint32_t)(esi + 0x1c4u));
/* 8e616f: mov dword ptr [edx + 0x50], eax */
  W32((uint32_t)(edx + 0x50u), eax);
/* 8e6172: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 8e6178: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 8e617e: mov edx, dword ptr [esi + 0x1c8] */
  edx = R32((uint32_t)(esi + 0x1c8u));
/* 8e6184: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8e6186: xor edx, dword ptr [eax + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x60u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8e6189: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8e618c: xor dword ptr [eax + 0x60], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 8e618f: mov eax, dword ptr [esi + 0x1c8] */
  eax = R32((uint32_t)(esi + 0x1c8u));
/* 8e6195: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 8e619b: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 8e61a1: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8e61a4: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e61a7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 8e61aa: mov eax, dword ptr [esi + 0x1c8] */
  eax = R32((uint32_t)(esi + 0x1c8u));
/* 8e61b0: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 8e61b6: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 8e61bc: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8e61bf: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e61c2: mov dword ptr [edx + 0x58], eax */
  W32((uint32_t)(edx + 0x58u), eax);
/* 8e61c5: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8e61c8: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8e61cdu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8e61cd: mov ecx, dword ptr [esi + 0x3f0] */
  ecx = R32((uint32_t)(esi + 0x3f0u));
/* 8e61d3: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 8e61d9: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e61dc: mov dword ptr [edx + 0x5c], eax */
  W32((uint32_t)(edx + 0x5cu), eax);
/* 8e61df: mov ecx, esp */
  ecx = esp;
/* 8e61e1: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 8e61e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e61e5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e61e8: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8e61ef: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8e61f2: mov eax, esp */
  eax = esp;
/* 8e61f4: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8e61f6: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8e61fd: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8e6200: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e6203: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8e620a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8e620d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8e6210: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8e6216u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8e6216: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8e6218: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6219: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e621a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e621b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8e621d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e621e: mov ecx, ebx */
  ecx = ebx;
/* 8e6220: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8e6223u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6223: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 8e6229: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 8e622f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8e6231: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6232: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6233: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6234: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e6235: mov ecx, ebx */
  ecx = ebx;
/* 8e6237: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8e623au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e623a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8e623c: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8e623f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6240: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6241: mov ecx, ebx */
  ecx = ebx;
/* 8e6243: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x8e6246u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6246: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8e6248: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6249: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 8e624c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e624d: mov ecx, ebx */
  ecx = ebx;
/* 8e624f: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0x8e6252u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6252: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8e6255: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8e6257: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8e6258: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e6259: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e625c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e625d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e625e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e625f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6260: mov ecx, ebx */
  ecx = ebx;
/* 8e6262: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8e6265u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6265: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8e6268: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e626c: call 0x6c97be */
  esp -= 4; W32(esp, 0x8e6271u); SPILL(); f_6c97be(); if (g_unwind) return; RELOAD();
L_8e6271: /* 8e6271: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6274: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e6277: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6278: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6279: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6280: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6281: mov esp, ebp */
  esp = ebp;
/* 8e6283: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6284: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8e6287(void) {
  LOAD_REGS();
L_8e6287: /* 8e6287: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e628a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e628f: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8e6292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6293: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8e6296: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e629bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e629b(); return;
}

void f_8e629b(void) {
  LOAD_REGS();
L_8e629b: /* 8e629b: push 0xa1db6c */
  { uint32_t v = 0xa1db6cu; esp -= 4; W32(esp, v); }
/* 8e62a0: push 0xaedac8 */
  { uint32_t v = 0xaedac8u; esp -= 4; W32(esp, v); }
/* 8e62a5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e62abu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e62ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e62ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e62b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e62b2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e62b7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e62b7: guest_badaddr(0x8e62b7); return;
}

void f_8e6390(void) {
  LOAD_REGS();
L_8e6390: /* 8e6390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e6391: mov ebp, esp */
  ebp = esp;
/* 8e6393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e6395: push 0x9d89e0 */
  { uint32_t v = 0x9d89e0u; esp -= 4; W32(esp, v); }
/* 8e639a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e63a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e63a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e63a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e63ab: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e63b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e63b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e63b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e63b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e63b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e63b7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e63ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e63bc: push 0xaedadc */
  { uint32_t v = 0xaedadcu; esp -= 4; W32(esp, v); }
/* 8e63c1: push 0xaedaf0 */
  { uint32_t v = 0xaedaf0u; esp -= 4; W32(esp, v); }
/* 8e63c6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e63cd: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8e63d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e63d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e63d1: mov ecx, 0xcebd08 */
  ecx = 0xcebd08u;
/* 8e63d6: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e63dcu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e63dc: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e63e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e63e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e63e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e63e7: push 0xaedaf8 */
  { uint32_t v = 0xaedaf8u; esp -= 4; W32(esp, v); }
/* 8e63ec: push 0xaedb20 */
  { uint32_t v = 0xaedb20u; esp -= 4; W32(esp, v); }
/* 8e63f1: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8e63f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e63f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e63f5: mov ecx, 0xcebd14 */
  ecx = 0xcebd14u;
/* 8e63fa: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6400u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6400: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e6405: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e6407: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e6409: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e640b: push 0xaedb28 */
  { uint32_t v = 0xaedb28u; esp -= 4; W32(esp, v); }
/* 8e6410: push 0xaedb34 */
  { uint32_t v = 0xaedb34u; esp -= 4; W32(esp, v); }
/* 8e6415: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8e6418u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6418: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6419: mov ecx, 0xcebd20 */
  ecx = 0xcebd20u;
/* 8e641e: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6424u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6424: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e6429: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e642b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e642d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e642f: push 0xaedb3c */
  { uint32_t v = 0xaedb3cu; esp -= 4; W32(esp, v); }
/* 8e6434: push 0xaedb44 */
  { uint32_t v = 0xaedb44u; esp -= 4; W32(esp, v); }
/* 8e6439: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8e643cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e643c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e643d: mov ecx, 0xcebd2c */
  ecx = 0xcebd2cu;
/* 8e6442: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6448u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6448: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e644d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e644f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e6451: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6453: push 0xaedb4c */
  { uint32_t v = 0xaedb4cu; esp -= 4; W32(esp, v); }
/* 8e6458: push 0xaedb60 */
  { uint32_t v = 0xaedb60u; esp -= 4; W32(esp, v); }
/* 8e645d: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8e6460u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6461: mov ecx, 0xcebd38 */
  ecx = 0xcebd38u;
/* 8e6466: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e646cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e646c: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e6471: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e6473: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e6475: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6477: push 0xaedb68 */
  { uint32_t v = 0xaedb68u; esp -= 4; W32(esp, v); }
/* 8e647c: push 0xaedb74 */
  { uint32_t v = 0xaedb74u; esp -= 4; W32(esp, v); }
/* 8e6481: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8e6484u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6484: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6485: mov ecx, 0xcebd44 */
  ecx = 0xcebd44u;
/* 8e648a: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6490u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6490: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e6495: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e6497: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e6499: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e649b: push 0xaedb7c */
  { uint32_t v = 0xaedb7cu; esp -= 4; W32(esp, v); }
/* 8e64a0: push 0xaedb8c */
  { uint32_t v = 0xaedb8cu; esp -= 4; W32(esp, v); }
/* 8e64a5: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8e64a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e64a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e64a9: mov ecx, 0xcebd50 */
  ecx = 0xcebd50u;
/* 8e64ae: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e64b4u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e64b4: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e64b9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e64bb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e64bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e64bf: push 0xaedb94 */
  { uint32_t v = 0xaedb94u; esp -= 4; W32(esp, v); }
/* 8e64c4: push 0xaedba4 */
  { uint32_t v = 0xaedba4u; esp -= 4; W32(esp, v); }
/* 8e64c9: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8e64ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e64cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e64cd: mov ecx, 0xcebd5c */
  ecx = 0xcebd5cu;
/* 8e64d2: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e64d8u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e64d8: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e64dd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e64df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e64e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e64e3: push 0xaedbac */
  { uint32_t v = 0xaedbacu; esp -= 4; W32(esp, v); }
/* 8e64e8: push 0xaedbbc */
  { uint32_t v = 0xaedbbcu; esp -= 4; W32(esp, v); }
/* 8e64ed: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8e64f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e64f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e64f1: mov ecx, 0xcebd68 */
  ecx = 0xcebd68u;
/* 8e64f6: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e64fcu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e64fc: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e6501: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e6503: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e6505: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6507: push 0xaedbc4 */
  { uint32_t v = 0xaedbc4u; esp -= 4; W32(esp, v); }
/* 8e650c: push 0xaedbd0 */
  { uint32_t v = 0xaedbd0u; esp -= 4; W32(esp, v); }
/* 8e6511: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8e6514u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6515: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x8e651bu); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 8e651b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e651e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6521: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6522: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6523: mov dword ptr [0xcebccc], eax */
  W32((uint32_t)(0xcebcccu), eax);
/* 8e6528: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e652f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6530: mov esp, ebp */
  esp = ebp;
/* 8e6532: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6533: ret  */
  esp += 4; SPILL(); return;
}

void f_8e6534(void) {
  LOAD_REGS();
L_8e6534: /* 8e6534: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e6537: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e653c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e653f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e6540: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e6543: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6548u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e6548(); return;
}

void f_8e6548(void) {
  LOAD_REGS();
L_8e6548: /* 8e6548: push 0xa1dbb8 */
  { uint32_t v = 0xa1dbb8u; esp -= 4; W32(esp, v); }
/* 8e654d: push 0xaedbd8 */
  { uint32_t v = 0xaedbd8u; esp -= 4; W32(esp, v); }
/* 8e6552: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e6558u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e6558: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e655b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e655d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e655f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6564u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e6564: guest_badaddr(0x8e6564); return;
}

void f_8e65f0(void) {
  LOAD_REGS();
L_8e65f0: /* 8e65f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e65f1: mov ebp, esp */
  ebp = esp;
/* 8e65f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e65f5: push 0x9d89f0 */
  { uint32_t v = 0x9d89f0u; esp -= 4; W32(esp, v); }
/* 8e65fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e6600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6601: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e6608: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e660b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e660c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e660d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e660e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e6611: push 0xcebcd0 */
  { uint32_t v = 0xcebcd0u; esp -= 4; W32(esp, v); }
/* 8e6616: mov ecx, 0xcebd08 */
  ecx = 0xcebd08u;
/* 8e661b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e6622: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6628u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6628: push 0xcebcd4 */
  { uint32_t v = 0xcebcd4u; esp -= 4; W32(esp, v); }
/* 8e662d: mov ecx, 0xcebd14 */
  ecx = 0xcebd14u;
/* 8e6632: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6638u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6638: push 0xcebcd8 */
  { uint32_t v = 0xcebcd8u; esp -= 4; W32(esp, v); }
/* 8e663d: mov ecx, 0xcebd20 */
  ecx = 0xcebd20u;
/* 8e6642: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6648u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6648: push 0xcebcdc */
  { uint32_t v = 0xcebcdcu; esp -= 4; W32(esp, v); }
/* 8e664d: mov ecx, 0xcebd2c */
  ecx = 0xcebd2cu;
/* 8e6652: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6658u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6658: push 0xcebce0 */
  { uint32_t v = 0xcebce0u; esp -= 4; W32(esp, v); }
/* 8e665d: mov ecx, 0xcebd38 */
  ecx = 0xcebd38u;
/* 8e6662: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6668u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6668: push 0xcebce4 */
  { uint32_t v = 0xcebce4u; esp -= 4; W32(esp, v); }
/* 8e666d: mov ecx, 0xcebd44 */
  ecx = 0xcebd44u;
/* 8e6672: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6678u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6678: push 0xcebce8 */
  { uint32_t v = 0xcebce8u; esp -= 4; W32(esp, v); }
/* 8e667d: mov ecx, 0xcebd50 */
  ecx = 0xcebd50u;
/* 8e6682: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6688u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6688: push 0xcebcec */
  { uint32_t v = 0xcebcecu; esp -= 4; W32(esp, v); }
/* 8e668d: mov ecx, 0xcebd5c */
  ecx = 0xcebd5cu;
/* 8e6692: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6698u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6698: push 0xcebcf0 */
  { uint32_t v = 0xcebcf0u; esp -= 4; W32(esp, v); }
/* 8e669d: mov ecx, 0xcebd68 */
  ecx = 0xcebd68u;
/* 8e66a2: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e66a8u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e66a8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e66ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e66ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e66ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e66b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e66b5: mov esp, ebp */
  esp = ebp;
/* 8e66b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e66b8: ret  */
  esp += 4; SPILL(); return;
}

void f_8e66b9(void) {
  LOAD_REGS();
L_8e66b9: /* 8e66b9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e66bc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e66c1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e66c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e66c5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e66c8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e66cdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e66cd(); return;
}

void f_8e66cd(void) {
  LOAD_REGS();
L_8e66cd: /* 8e66cd: push 0xa1dbe0 */
  { uint32_t v = 0xa1dbe0u; esp -= 4; W32(esp, v); }
/* 8e66d2: push 0xaedbe0 */
  { uint32_t v = 0xaedbe0u; esp -= 4; W32(esp, v); }
/* 8e66d7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e66ddu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e66dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e66e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e66e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e66e4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e66e9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e66e9: guest_badaddr(0x8e66e9); return;
}

void f_8e6730(void) {
  LOAD_REGS();
L_8e6730: /* 8e6730: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8e6732: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6733: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x8e6739u); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 8e6739: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e673c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 8e673e: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8e6740: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e6741: ret  */
  esp += 4; SPILL(); return;
}

void f_8e6760(void) {
  LOAD_REGS();
L_8e6760: /* 8e6760: movzx eax, word ptr [esp + 8] */
  eax = (uint32_t)(R16((uint32_t)(esp + 0x8u)));
/* 8e6765: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e6766: mov ebx, dword ptr [0xcfaa98] */
  ebx = R32((uint32_t)(0xcfaa98u));
/* 8e676c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e676d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e676e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8e6772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6773: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6774: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8e6776u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6776: movzx ecx, word ptr [esp + 0x20] */
  ecx = (uint32_t)(R16((uint32_t)(esp + 0x20u)));
/* 8e677b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e677c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e677d: mov esi, eax */
  esi = eax;
/* 8e677f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8e6781u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6781: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6784: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6786: je 0x8e6792 */
  if (zf) goto L_8e6792;
L_8e6788: /* 8e6788: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e678a: je 0x8e6790 */
  if (zf) goto L_8e6790;
L_8e678c: /* 8e678c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8e678e: jae 0x8e6792 */
  if (!cf) goto L_8e6792;
L_8e6790: /* 8e6790: mov eax, esi */
  eax = esi;
L_8e6792: /* 8e6792: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6793: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6794: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6795: ret  */
  esp += 4; SPILL(); return;
}

void f_8e67b0(void) {
  LOAD_REGS();
L_8e67b0: /* 8e67b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e67b1: mov ebp, esp */
  ebp = esp;
/* 8e67b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e67b5: push 0x9d8a00 */
  { uint32_t v = 0x9d8a00u; esp -= 4; W32(esp, v); }
/* 8e67ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e67c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e67c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e67c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e67cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e67cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e67cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e67ce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e67d1: push 0xcebd08 */
  { uint32_t v = 0xcebd08u; esp -= 4; W32(esp, v); }
/* 8e67d6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e67dd: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x8e67e3u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 8e67e3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e67e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e67e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e67e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e67ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e67f0: mov esp, ebp */
  esp = ebp;
/* 8e67f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e67f3: ret  */
  esp += 4; SPILL(); return;
}

void f_8e67f4(void) {
  LOAD_REGS();
L_8e67f4: /* 8e67f4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e67f7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e67fc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e67ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e6800: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e6803: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6808u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e6808(); return;
}

void f_8e6808(void) {
  LOAD_REGS();
L_8e6808: /* 8e6808: push 0xa1dc08 */
  { uint32_t v = 0xa1dc08u; esp -= 4; W32(esp, v); }
/* 8e680d: push 0xaedd44 */
  { uint32_t v = 0xaedd44u; esp -= 4; W32(esp, v); }
/* 8e6812: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e6818u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e6818: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e681b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e681d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e681f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6824u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e6824: guest_badaddr(0x8e6824); return;
}

void f_8e6850(void) {
  LOAD_REGS();
L_8e6850: /* 8e6850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e6851: mov ebp, esp */
  ebp = esp;
/* 8e6853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e6855: push 0x9d8a10 */
  { uint32_t v = 0x9d8a10u; esp -= 4; W32(esp, v); }
/* 8e685a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e6860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e6868: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e686b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e686c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e686d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e686e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e6871: mov esi, ecx */
  esi = ecx;
/* 8e6873: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e687a: call 0x6c2f4f */
  esp -= 4; W32(esp, 0x8e687fu); SPILL(); f_6c2f4f(); if (g_unwind) return; RELOAD();
/* 8e687f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6881: je 0x8e68a6 */
  if (zf) goto L_8e68a6;
L_8e6883: /* 8e6883: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8e6886: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x8e688cu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 8e688c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e688e: jne 0x8e68a6 */
  if (!zf) goto L_8e68a6;
L_8e6890: /* 8e6890: mov eax, 1 */
  eax = 0x1u;
/* 8e6895: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6898: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e689f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e68a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e68a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e68a2: mov esp, ebp */
  esp = ebp;
/* 8e68a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e68a5: ret  */
  esp += 4; SPILL(); return;
L_8e68a6: /* 8e68a6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e68a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e68aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e68ab: xor eax, eax */
  eax = 0;
/* 8e68ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e68b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e68b5: mov esp, ebp */
  esp = ebp;
/* 8e68b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e68b8: ret  */
  esp += 4; SPILL(); return;
}

void f_8e68b9(void) {
  LOAD_REGS();
L_8e68b9: /* 8e68b9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e68bc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e68c1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e68c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e68c5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e68c8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e68cdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e68cd(); return;
}

void f_8e68cd(void) {
  LOAD_REGS();
L_8e68cd: /* 8e68cd: push 0xa1dc30 */
  { uint32_t v = 0xa1dc30u; esp -= 4; W32(esp, v); }
/* 8e68d2: push 0xaedd4c */
  { uint32_t v = 0xaedd4cu; esp -= 4; W32(esp, v); }
/* 8e68d7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e68ddu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e68dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e68e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e68e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e68e4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e68e9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e68e9: guest_badaddr(0x8e68e9); return;
}

void f_8e6920(void) {
  LOAD_REGS();
L_8e6920: /* 8e6920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e6921: mov ebp, esp */
  ebp = esp;
/* 8e6923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e6925: push 0x9d8a4a */
  { uint32_t v = 0x9d8a4au; esp -= 4; W32(esp, v); }
/* 8e692a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e6930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e6938: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e693b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e693c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e693d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e693e: mov esi, ecx */
  esi = ecx;
/* 8e6940: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8e6947: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e694a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e694d: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8e6954: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8e695au); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8e695a: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 8e695c: push 0xcebd08 */
  { uint32_t v = 0xcebd08u; esp -= 4; W32(esp, v); }
/* 8e6961: mov ecx, esi */
  ecx = esi;
/* 8e6963: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8e6966: call dword ptr [0xcfa5f0] */
  esp -= 4; W32(esp, 0x8e696cu); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* 8e696c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e696e: jne 0x8e6977 */
  if (!zf) goto L_8e6977;
L_8e6970: /* 8e6970: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e6973: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6975: je 0x8e69af */
  if (zf) goto L_8e69af;
L_8e6977: /* 8e6977: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e6978: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e697b: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8e6981u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e6981: push 0xaedd18 */
  { uint32_t v = 0xaedd18u; esp -= 4; W32(esp, v); }
/* 8e6986: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e6989: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x8e698fu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e698f: push 0xcebd44 */
  { uint32_t v = 0xcebd44u; esp -= 4; W32(esp, v); }
/* 8e6994: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8e6997: call dword ptr [0xcfa5f0] */
  esp -= 4; W32(esp, 0x8e699du); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* 8e699d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e699f: je 0x8e69af */
  if (zf) goto L_8e69af;
L_8e69a1: /* 8e69a1: push 0xaedd1c */
  { uint32_t v = 0xaedd1cu; esp -= 4; W32(esp, v); }
/* 8e69a6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e69a9: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x8e69afu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
L_8e69af: /* 8e69af: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 8e69b2: push 0xcebd44 */
  { uint32_t v = 0xcebd44u; esp -= 4; W32(esp, v); }
/* 8e69b7: mov ecx, edi */
  ecx = edi;
/* 8e69b9: call dword ptr [0xcfa5f0] */
  esp -= 4; W32(esp, 0x8e69bfu); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* 8e69bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e69c1: jne 0x8e69ce */
  if (!zf) goto L_8e69ce;
L_8e69c3: /* 8e69c3: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 8e69c6: cmp eax, dword ptr [0xcebccc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcebcccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e69cc: je 0x8e6a2f */
  if (zf) goto L_8e6a2f;
L_8e69ce: /* 8e69ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e69cf: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e69d2: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8e69d8u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e69d8: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 8e69db: cmp ecx, dword ptr [0xcebccc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcebcccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e69e1: je 0x8e6a21 */
  if (zf) goto L_8e6a21;
L_8e69e3: /* 8e69e3: push 0xaedd24 */
  { uint32_t v = 0xaedd24u; esp -= 4; W32(esp, v); }
/* 8e69e8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e69eb: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x8e69f1u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e69f1: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 8e69f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e69f5: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8e69f8: push 0xaedd28 */
  { uint32_t v = 0xaedd28u; esp -= 4; W32(esp, v); }
/* 8e69fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e69fe: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8e6a04u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8e6a04: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6a07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6a08: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e6a0b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8e6a0f: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8e6a15u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e6a15: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8e6a18: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8e6a1b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8e6a21u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8e6a21: /* 8e6a21: push 0xaedd30 */
  { uint32_t v = 0xaedd30u; esp -= 4; W32(esp, v); }
/* 8e6a26: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e6a29: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x8e6a2fu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
L_8e6a2f: /* 8e6a2f: lea edi, [esi + 0x1c] */
  edi = (uint32_t)(esi + 0x1cu);
/* 8e6a32: mov ecx, edi */
  ecx = edi;
/* 8e6a34: call dword ptr [0xcfac68] */
  esp -= 4; W32(esp, 0x8e6a3au); SPILL(); f_4e3d32(); if (g_unwind) return; /* Core!??BFString@@QBEHXZ */ RELOAD();
/* 8e6a3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6a3c: je 0x8e6a48 */
  if (zf) goto L_8e6a48;
L_8e6a3e: /* 8e6a3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6a3f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e6a42: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8e6a48u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
L_8e6a48: /* 8e6a48: xor edi, edi */
  edi = 0;
/* 8e6a4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8e6a50: /* 8e6a50: cmp edi, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e6a53: jge 0x8e6a79 */
  if ((sf == of)) goto L_8e6a79;
L_8e6a55: /* 8e6a55: push 0xaedd34 */
  { uint32_t v = 0xaedd34u; esp -= 4; W32(esp, v); }
/* 8e6a5a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e6a5d: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x8e6a63u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6a63: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8e6a66: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8e6a69: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8e6a6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6a6d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e6a70: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8e6a76u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e6a76: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8e6a77: jmp 0x8e6a50 */
  goto L_8e6a50;
L_8e6a79: /* 8e6a79: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e6a7c: mov ecx, esi */
  ecx = esi;
/* 8e6a7e: call dword ptr [0xcfac68] */
  esp -= 4; W32(esp, 0x8e6a84u); SPILL(); f_4e3d32(); if (g_unwind) return; /* Core!??BFString@@QBEHXZ */ RELOAD();
/* 8e6a84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6a86: je 0x8e6aa0 */
  if (zf) goto L_8e6aa0;
L_8e6a88: /* 8e6a88: push 0xaedd38 */
  { uint32_t v = 0xaedd38u; esp -= 4; W32(esp, v); }
/* 8e6a8d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e6a90: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x8e6a96u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6a96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e6a97: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e6a9a: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8e6aa0u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
L_8e6aa0: /* 8e6aa0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8e6aa3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e6aa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e6aa7: mov ecx, esi */
  ecx = esi;
/* 8e6aa9: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e6aafu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8e6aaf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e6ab2: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8e6ab5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e6ab8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e6abb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8e6abf: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8e6ac5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8e6ac5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6ac8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6ac9: mov eax, esi */
  eax = esi;
/* 8e6acb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6acc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6ad3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6ad4: mov esp, ebp */
  esp = ebp;
/* 8e6ad6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6ad7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e6ada(void) {
  LOAD_REGS();
L_8e6ada: /* 8e6ada: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e6add: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e6ae2: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8e6ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6ae6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8e6ae9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6aeeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e6aee(); return;
}

void f_8e6aee(void) {
  LOAD_REGS();
L_8e6aee: /* 8e6aee: push 0xa1dc64 */
  { uint32_t v = 0xa1dc64u; esp -= 4; W32(esp, v); }
/* 8e6af3: push 0xaedd3c */
  { uint32_t v = 0xaedd3cu; esp -= 4; W32(esp, v); }
/* 8e6af8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e6afeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e6afe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6b01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6b03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6b05: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6b0au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e6b0a: guest_badaddr(0x8e6b0a); return;
}

void f_8e6b90(void) {
  LOAD_REGS();
L_8e6b90: /* 8e6b90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e6b91: mov ebp, esp */
  ebp = esp;
/* 8e6b93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e6b95: push 0x9d8a70 */
  { uint32_t v = 0x9d8a70u; esp -= 4; W32(esp, v); }
/* 8e6b9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e6ba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6ba1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e6ba8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e6bab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e6bac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e6bad: mov esi, dword ptr [0xcfaa98] */
  esi = R32((uint32_t)(0xcfaa98u));
/* 8e6bb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6bb4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8e6bb7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e6bba: push 0x3d */
  { uint32_t v = 0x3du; esp -= 4; W32(esp, v); }
/* 8e6bbc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6bbd: mov ebx, ecx */
  ebx = ecx;
/* 8e6bbf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e6bc6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e6bc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6bc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6bcd: je 0x8e6be0 */
  if (zf) goto L_8e6be0;
L_8e6bcf: /* 8e6bcf: push 0x3d */
  { uint32_t v = 0x3du; esp -= 4; W32(esp, v); }
/* 8e6bd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6bd2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e6bd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e6bd4: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8e6bd6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e6bd9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6bdc: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8e6bde: jmp 0x8e6beb */
  goto L_8e6beb;
L_8e6be0: /* 8e6be0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6be1: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x8e6be7u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 8e6be7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6bea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_8e6beb: /* 8e6beb: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8e6bee: xor esi, esi */
  esi = 0;
L_8e6bf0: /* 8e6bf0: cmp esi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e6bf3: jge 0x8e6c1d */
  if ((sf == of)) goto L_8e6c1d;
L_8e6bf5: /* 8e6bf5: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8e6bf8: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8e6bfb: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8e6bfe: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e6c04u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e6c04: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e6c07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e6c08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6c09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6c0a: call dword ptr [0xcfa940] */
  esp -= 4; W32(esp, 0x8e6c10u); SPILL(); f_4e2f90(); if (g_unwind) return; /* Core!?appStrnicmp@@YAHPBG0H@Z */ RELOAD();
/* 8e6c10: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6c13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6c15: je 0x8e6c1a */
  if (zf) goto L_8e6c1a;
L_8e6c17: /* 8e6c17: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8e6c18: jmp 0x8e6bf0 */
  goto L_8e6bf0;
L_8e6c1a: /* 8e6c1a: cmp esi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_8e6c1d: /* 8e6c1d: jne 0x8e6c54 */
  if (!zf) goto L_8e6c54;
L_8e6c1f: /* 8e6c1f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8e6c21: lea esi, [ebx + 0x28] */
  esi = (uint32_t)(ebx + 0x28u);
/* 8e6c24: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8e6c26: mov ecx, esi */
  ecx = esi;
/* 8e6c28: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8e6c2eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8e6c2e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8e6c30: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e6c33: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8e6c36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6c38: je 0x8e6c41 */
  if (zf) goto L_8e6c41;
L_8e6c3a: /* 8e6c3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6c3b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8e6c41u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
L_8e6c41: /* 8e6c41: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6c44: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6c4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6c4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6c4d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6c4e: mov esp, ebp */
  esp = ebp;
/* 8e6c50: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6c51: ret 4 */
  esp += 8; SPILL(); return;
L_8e6c54: /* 8e6c54: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 8e6c57: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8e6c5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6c5b: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8e6c5e: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e6c64u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e6c64: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6c67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6c68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6c69: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6c70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6c71: mov esp, ebp */
  esp = ebp;
/* 8e6c73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6c74: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e6c77(void) {
  LOAD_REGS();
L_8e6c77: /* 8e6c77: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e6c7a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e6c7f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8e6c82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e6c83: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e6c86: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6c8bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e6c8b(); return;
}

void f_8e6c8b(void) {
  LOAD_REGS();
L_8e6c8b: /* 8e6c8b: push 0xa1dc84 */
  { uint32_t v = 0xa1dc84u; esp -= 4; W32(esp, v); }
/* 8e6c90: push 0xaedd54 */
  { uint32_t v = 0xaedd54u; esp -= 4; W32(esp, v); }
/* 8e6c95: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e6c9bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e6c9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6c9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6ca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6ca2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6ca7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e6ca7: guest_badaddr(0x8e6ca7); return;
}

void f_8e6d00(void) {
  LOAD_REGS();
L_8e6d00: /* 8e6d00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e6d01: mov ebp, esp */
  ebp = esp;
/* 8e6d03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e6d05: push 0x9d8a80 */
  { uint32_t v = 0x9d8a80u; esp -= 4; W32(esp, v); }
/* 8e6d0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e6d10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6d11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e6d18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e6d19: mov eax, 0xfa08 */
  eax = 0xfa08u;
/* 8e6d1e: call 0x99cc00 */
  esp -= 4; W32(esp, 0x8e6d23u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 8e6d23: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e6d28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e6d29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e6d2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6d2b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e6d2e: mov edi, ecx */
  edi = ecx;
/* 8e6d30: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e6d32: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e6d35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e6d37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6d38: push 0x7d00 */
  { uint32_t v = 0x7d00u; esp -= 4; W32(esp, v); }
/* 8e6d3d: lea eax, [ebp - 0xfa18] */
  eax = (uint32_t)(ebp + 0xffff05e8u);
/* 8e6d43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6d44: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e6d47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6d48: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e6d4f: lea esi, [ebp - 0xfa18] */
  esi = (uint32_t)(ebp + 0xffff05e8u);
/* 8e6d55: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8e6d58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8e6d58: /* 8e6d58: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8e6d5c: je 0x8e6da6 */
  if (zf) goto L_8e6da6;
L_8e6d5e: /* 8e6d5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e6d5f: mov ecx, edi */
  ecx = edi;
/* 8e6d61: call 0x6cbc0d */
  esp -= 4; W32(esp, 0x8e6d66u); SPILL(); f_6cbc0d(); if (g_unwind) return; RELOAD();
/* 8e6d66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e6d67: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x8e6d6du); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 8e6d6d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6d70: lea esi, [esi + eax*2 + 2] */
  esi = (uint32_t)(esi + eax*2 + 0x2u);
/* 8e6d74: jmp 0x8e6d58 */
  goto L_8e6d58;
L_8e6da6: /* 8e6da6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6da9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6daa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6dab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6db2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6db3: mov esp, ebp */
  esp = ebp;
/* 8e6db5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6db6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e6d76(void) {
  LOAD_REGS();
L_8e6d76: /* 8e6d76: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e6d79: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e6d7e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8e6d81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e6d82: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e6d85: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6d8au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e6d8a(); return;
}

void f_8e6d8a(void) {
  LOAD_REGS();
L_8e6d8a: /* 8e6d8a: push 0xa1dcac */
  { uint32_t v = 0xa1dcacu; esp -= 4; W32(esp, v); }
/* 8e6d8f: push 0xaedd5c */
  { uint32_t v = 0xaedd5cu; esp -= 4; W32(esp, v); }
/* 8e6d94: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e6d9au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e6d9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6d9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6d9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6da1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6da6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8e6da6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6da9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6daa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6dab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6db2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6db3: mov esp, ebp */
  esp = ebp;
/* 8e6db5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6db6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e6df0(void) {
  LOAD_REGS();
L_8e6df0: /* 8e6df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e6df1: mov ebp, esp */
  ebp = esp;
/* 8e6df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e6df5: push 0x9d8a90 */
  { uint32_t v = 0x9d8a90u; esp -= 4; W32(esp, v); }
/* 8e6dfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e6e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e6e08: sub esp, 0x80c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e6e0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e6e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e6e10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6e11: xor edi, edi */
  edi = 0;
/* 8e6e13: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e6e16: mov ebx, ecx */
  ebx = ecx;
/* 8e6e18: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8e6e1b: jmp 0x8e6e20 */
  goto L_8e6e20;
L_8e6e20: /* 8e6e20: cmp edi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e6e23: jge 0x8e6ed0 */
  if ((sf == of)) goto L_8e6ed0;
L_8e6e29: /* 8e6e29: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8e6e2c: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8e6e2f: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8e6e32: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e6e38u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e6e38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e39: lea edx, [ebp - 0x818] */
  edx = (uint32_t)(ebp + 0xfffff7e8u);
/* 8e6e3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e6e40: call dword ptr [0xcfa900] */
  esp -= 4; W32(esp, 0x8e6e46u); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* 8e6e46: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6e49: lea eax, [ebp - 0x818] */
  eax = (uint32_t)(ebp + 0xfffff7e8u);
/* 8e6e4f: push 0x3d */
  { uint32_t v = 0x3du; esp -= 4; W32(esp, v); }
/* 8e6e51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e52: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x8e6e58u); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 8e6e58: mov esi, eax */
  esi = eax;
/* 8e6e5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6e5d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6e5f: je 0x8e6e9d */
  if (zf) goto L_8e6e9d;
L_8e6e61: /* 8e6e61: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e6e64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e6e65: lea edx, [ebp - 0x818] */
  edx = (uint32_t)(ebp + 0xfffff7e8u);
/* 8e6e6b: mov word ptr [esi], 0 */
  W16((uint32_t)(esi), 0x0u);
/* 8e6e70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e6e71: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e6e74: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x8e6e7au); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 8e6e7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6e7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6e7f: jne 0x8e6e9d */
  if (!zf) goto L_8e6e9d;
L_8e6e81: /* 8e6e81: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e6e86: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e6e88: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e6e8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e6e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e6e8f: lea eax, [ebp - 0x818] */
  eax = (uint32_t)(ebp + 0xfffff7e8u);
/* 8e6e95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e96: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e6e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e9a: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x8e6e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8e6e9d: /* 8e6e9d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8e6e9e: jmp 0x8e6e20 */
  goto L_8e6e20;
L_8e6ed0: /* 8e6ed0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6ed3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6ed4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6ed5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6edc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6edd: mov esp, ebp */
  esp = ebp;
/* 8e6edf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6ee0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8e6e1d(void) {
  LOAD_REGS();
L_8e6e1d: /* 8e6e1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8e6e20: /* 8e6e20: cmp edi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e6e23: jge 0x8e6ed0 */
  if ((sf == of)) goto L_8e6ed0;
L_8e6e29: /* 8e6e29: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8e6e2c: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8e6e2f: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8e6e32: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e6e38u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e6e38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e39: lea edx, [ebp - 0x818] */
  edx = (uint32_t)(ebp + 0xfffff7e8u);
/* 8e6e3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e6e40: call dword ptr [0xcfa900] */
  esp -= 4; W32(esp, 0x8e6e46u); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* 8e6e46: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6e49: lea eax, [ebp - 0x818] */
  eax = (uint32_t)(ebp + 0xfffff7e8u);
/* 8e6e4f: push 0x3d */
  { uint32_t v = 0x3du; esp -= 4; W32(esp, v); }
/* 8e6e51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e52: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x8e6e58u); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 8e6e58: mov esi, eax */
  esi = eax;
/* 8e6e5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6e5d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6e5f: je 0x8e6e9d */
  if (zf) goto L_8e6e9d;
L_8e6e61: /* 8e6e61: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e6e64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e6e65: lea edx, [ebp - 0x818] */
  edx = (uint32_t)(ebp + 0xfffff7e8u);
/* 8e6e6b: mov word ptr [esi], 0 */
  W16((uint32_t)(esi), 0x0u);
/* 8e6e70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e6e71: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e6e74: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x8e6e7au); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 8e6e7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6e7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6e7f: jne 0x8e6e9d */
  if (!zf) goto L_8e6e9d;
L_8e6e81: /* 8e6e81: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 8e6e86: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e6e88: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e6e8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e6e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e6e8f: lea eax, [ebp - 0x818] */
  eax = (uint32_t)(ebp + 0xfffff7e8u);
/* 8e6e95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e96: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e6e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6e9a: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x8e6e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8e6e9d: /* 8e6e9d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8e6e9e: jmp 0x8e6e20 */
  goto L_8e6e20;
L_8e6ed0: /* 8e6ed0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6ed3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6ed4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6ed5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6edc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6edd: mov esp, ebp */
  esp = ebp;
/* 8e6edf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6ee0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8e6ea0(void) {
  LOAD_REGS();
L_8e6ea0: /* 8e6ea0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e6ea3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e6ea8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8e6eab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e6eac: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e6eaf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6eb4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e6eb4(); return;
}

void f_8e6eb4(void) {
  LOAD_REGS();
L_8e6eb4: /* 8e6eb4: push 0xa1dcdc */
  { uint32_t v = 0xa1dcdcu; esp -= 4; W32(esp, v); }
/* 8e6eb9: push 0xaedd64 */
  { uint32_t v = 0xaedd64u; esp -= 4; W32(esp, v); }
/* 8e6ebe: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e6ec4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e6ec4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6ec7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6ec9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6ecb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6ed0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8e6ed0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6ed3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6ed4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6ed5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6edc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6edd: mov esp, ebp */
  esp = ebp;
/* 8e6edf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6ee0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8e6f30(void) {
  LOAD_REGS();
L_8e6f30: /* 8e6f30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e6f31: mov ebp, esp */
  ebp = esp;
/* 8e6f33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e6f35: push 0x9d8aa0 */
  { uint32_t v = 0x9d8aa0u; esp -= 4; W32(esp, v); }
/* 8e6f3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e6f40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6f41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e6f48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e6f4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e6f4c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8e6f4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e6f50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e6f51: xor esi, esi */
  esi = 0;
/* 8e6f53: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e6f56: mov edi, ecx */
  edi = ecx;
/* 8e6f58: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8e6f5b: jmp 0x8e6f60 */
  goto L_8e6f60;
L_8e6f60: /* 8e6f60: cmp esi, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e6f63: jge 0x8e6fce */
  if ((sf == of)) goto L_8e6fce;
L_8e6f65: /* 8e6f65: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e6f68: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8e6f6b: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8e6f6e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e6f74u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e6f74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e6f75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6f76: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x8e6f7cu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 8e6f7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6f7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6f81: jne 0x8e6f9b */
  if (!zf) goto L_8e6f9b;
L_8e6f83: /* 8e6f83: mov eax, 1 */
  eax = 0x1u;
/* 8e6f88: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6f8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6f92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6f93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6f94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6f95: mov esp, ebp */
  esp = ebp;
/* 8e6f97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6f98: ret 4 */
  esp += 8; SPILL(); return;
L_8e6f9b: /* 8e6f9b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8e6f9c: jmp 0x8e6f60 */
  goto L_8e6f60;
L_8e6fce: /* 8e6fce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6fd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6fd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6fd3: xor eax, eax */
  eax = 0;
/* 8e6fd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6fdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6fdd: mov esp, ebp */
  esp = ebp;
/* 8e6fdf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6fe0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e6f5d(void) {
  LOAD_REGS();
L_8e6f5d: /* 8e6f5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8e6f60: /* 8e6f60: cmp esi, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e6f63: jge 0x8e6fce */
  if ((sf == of)) goto L_8e6fce;
L_8e6f65: /* 8e6f65: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e6f68: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8e6f6b: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8e6f6e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e6f74u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e6f74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e6f75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6f76: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x8e6f7cu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 8e6f7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6f7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e6f81: jne 0x8e6f9b */
  if (!zf) goto L_8e6f9b;
L_8e6f83: /* 8e6f83: mov eax, 1 */
  eax = 0x1u;
/* 8e6f88: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6f8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6f92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6f93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6f94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6f95: mov esp, ebp */
  esp = ebp;
/* 8e6f97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6f98: ret 4 */
  esp += 8; SPILL(); return;
L_8e6f9b: /* 8e6f9b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8e6f9c: jmp 0x8e6f60 */
  goto L_8e6f60;
L_8e6fce: /* 8e6fce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6fd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6fd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6fd3: xor eax, eax */
  eax = 0;
/* 8e6fd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6fdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6fdd: mov esp, ebp */
  esp = ebp;
/* 8e6fdf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6fe0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e6f9e(void) {
  LOAD_REGS();
L_8e6f9e: /* 8e6f9e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e6fa1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e6fa6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8e6fa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e6faa: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8e6fad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6fb2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e6fb2(); return;
}

void f_8e6fb2(void) {
  LOAD_REGS();
L_8e6fb2: /* 8e6fb2: push 0xa1dd0c */
  { uint32_t v = 0xa1dd0cu; esp -= 4; W32(esp, v); }
/* 8e6fb7: push 0xaedd6c */
  { uint32_t v = 0xaedd6cu; esp -= 4; W32(esp, v); }
/* 8e6fbc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e6fc2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e6fc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e6fc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6fc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e6fc9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e6fceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8e6fce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e6fd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e6fd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e6fd3: xor eax, eax */
  eax = 0;
/* 8e6fd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e6fdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e6fdd: mov esp, ebp */
  esp = ebp;
/* 8e6fdf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e6fe0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e7020(void) {
  LOAD_REGS();
L_8e7020: /* 8e7020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e7021: mov ebp, esp */
  ebp = esp;
/* 8e7023: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e7025: push 0x9d8ab0 */
  { uint32_t v = 0x9d8ab0u; esp -= 4; W32(esp, v); }
/* 8e702a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e7030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7031: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e7038: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e703b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e703c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e703d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e703e: xor ebx, ebx */
  ebx = 0;
/* 8e7040: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e7043: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e7046: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8e7049: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e7050: /* 8e7050: cmp ebx, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e7053: jge 0x8e70f8 */
  if ((sf == of)) goto L_8e70f8;
L_8e7059: /* 8e7059: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e705c: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* 8e705f: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 8e7062: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8e7065: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7066: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8e7068: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x8e706eu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 8e706e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7071: mov ecx, edi */
  ecx = edi;
/* 8e7073: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8e7076: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e707cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e707c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e707f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8e7082: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e7083: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e7084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7085: call dword ptr [0xcfa940] */
  esp -= 4; W32(esp, 0x8e708bu); SPILL(); f_4e2f90(); if (g_unwind) return; /* Core!?appStrnicmp@@YAHPBG0H@Z */ RELOAD();
/* 8e708b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e708e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7090: jne 0x8e70c2 */
  if (!zf) goto L_8e70c2;
L_8e7092: /* 8e7092: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7095: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 8e7098: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e709a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e70a0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e70a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e70a1: mov esi, eax */
  esi = eax;
/* 8e70a3: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x8e70a9u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 8e70a9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e70ac: lea eax, [esi + eax*2] */
  eax = (uint32_t)(esi + eax*2);
/* 8e70af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e70b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e70b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e70ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e70bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e70bc: mov esp, ebp */
  esp = ebp;
/* 8e70be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e70bf: ret 8 */
  esp += 12; SPILL(); return;
L_8e70c2: /* 8e70c2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e70c5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e70c6: jmp 0x8e7050 */
  goto L_8e7050;
L_8e70f8: /* 8e70f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e70fb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e70fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e70ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e7100: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e7107: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e7108: mov esp, ebp */
  esp = ebp;
/* 8e710a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e710b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e70c8(void) {
  LOAD_REGS();
L_8e70c8: /* 8e70c8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8e70cb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e70d0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8e70d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e70d4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8e70d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e70dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e70dc(); return;
}

void f_8e70dc(void) {
  LOAD_REGS();
L_8e70dc: /* 8e70dc: push 0xa1dd34 */
  { uint32_t v = 0xa1dd34u; esp -= 4; W32(esp, v); }
/* 8e70e1: push 0xaedd74 */
  { uint32_t v = 0xaedd74u; esp -= 4; W32(esp, v); }
/* 8e70e6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e70ecu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e70ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e70ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e70f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e70f3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e70f8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8e70f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e70fb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e70fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e70ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e7100: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e7107: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e7108: mov esp, ebp */
  esp = ebp;
/* 8e710a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e710b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e7150(void) {
  LOAD_REGS();
L_8e7150: /* 8e7150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e7151: mov ebp, esp */
  ebp = esp;
/* 8e7153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e7155: push 0x9d8ac0 */
  { uint32_t v = 0x9d8ac0u; esp -= 4; W32(esp, v); }
/* 8e715a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e7160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7161: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e7168: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e716b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e716c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8e716f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7170: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e7171: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e7174: xor edi, edi */
  edi = 0;
/* 8e7176: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e7177: mov esi, ecx */
  esi = ecx;
/* 8e7179: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8e717c: call dword ptr [0xcfa5f0] */
  esp -= 4; W32(esp, 0x8e7182u); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* 8e7182: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e7184: jne 0x8e71f3 */
  if (!zf) goto L_8e71f3;
L_8e7186: /* 8e7186: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 8e7189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e718a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8e718d: call dword ptr [0xcfa5f0] */
  esp -= 4; W32(esp, 0x8e7193u); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* 8e7193: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e7195: jne 0x8e71f3 */
  if (!zf) goto L_8e71f3;
L_8e7197: /* 8e7197: lea ecx, [ebx + 0x1c] */
  ecx = (uint32_t)(ebx + 0x1cu);
/* 8e719a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e719b: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8e719e: call dword ptr [0xcfa5f0] */
  esp -= 4; W32(esp, 0x8e71a4u); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* 8e71a4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e71a6: jne 0x8e71f3 */
  if (!zf) goto L_8e71f3;
L_8e71a8: /* 8e71a8: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 8e71ab: cmp edx, dword ptr [ebx + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e71ae: jne 0x8e71f3 */
  if (!zf) goto L_8e71f3;
L_8e71b0: /* 8e71b0: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 8e71b3: cmp eax, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e71b6: jne 0x8e71f3 */
  if (!zf) goto L_8e71f3;
L_8e71b8: /* 8e71b8: cmp edi, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e71bb: jge 0x8e71db */
  if ((sf == of)) goto L_8e71db;
L_8e71bd: /* 8e71bd: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8e71c0: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8e71c3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e71c6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e71c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e71c9: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8e71cc: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e71ce: call dword ptr [0xcfa5f0] */
  esp -= 4; W32(esp, 0x8e71d4u); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* 8e71d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e71d6: jne 0x8e71f3 */
  if (!zf) goto L_8e71f3;
L_8e71d8: /* 8e71d8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8e71d9: jmp 0x8e71b8 */
  goto L_8e71b8;
L_8e71db: /* 8e71db: mov eax, 1 */
  eax = 0x1u;
/* 8e71e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e71e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e71ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e71eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e71ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e71ed: mov esp, ebp */
  esp = ebp;
/* 8e71ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e71f0: ret 4 */
  esp += 8; SPILL(); return;
L_8e71f3: /* 8e71f3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e71f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e71f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e71f8: xor eax, eax */
  eax = 0;
/* 8e71fa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e7201: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e7202: mov esp, ebp */
  esp = ebp;
/* 8e7204: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e7205: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e7208(void) {
  LOAD_REGS();
L_8e7208: /* 8e7208: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e720b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e7210: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8e7213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7214: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8e7217: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e721cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e721c(); return;
}

void f_8e721c(void) {
  LOAD_REGS();
L_8e721c: /* 8e721c: push 0xa1dd5c */
  { uint32_t v = 0xa1dd5cu; esp -= 4; W32(esp, v); }
/* 8e7221: push 0xaedd7c */
  { uint32_t v = 0xaedd7cu; esp -= 4; W32(esp, v); }
/* 8e7226: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e722cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e722c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e722f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e7231: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e7233: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e7238u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e7238: guest_badaddr(0x8e7238); return;
}

void f_8e7280(void) {
  LOAD_REGS();
L_8e7280: /* 8e7280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e7281: mov ebp, esp */
  ebp = esp;
/* 8e7283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e7285: push 0x9d8ad0 */
  { uint32_t v = 0x9d8ad0u; esp -= 4; W32(esp, v); }
/* 8e728a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e7290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7291: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e7298: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e729b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e729c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8e729f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e72a0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8e72a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e72a4: mov edi, dword ptr [0xcfa2dc] */
  edi = R32((uint32_t)(0xcfa2dcu));
/* 8e72aa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e72ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e72ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e72af: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e72b6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e72b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e72b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e72bb: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8e72be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e72bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e72c0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e72c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e72c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e72c5: lea edx, [esi + 0x1c] */
  edx = (uint32_t)(esi + 0x1cu);
/* 8e72c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e72c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e72ca: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e72ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e72cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e72cf: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 8e72d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e72d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e72d4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e72d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e72d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e72d9: lea edx, [esi + 0x28] */
  edx = (uint32_t)(esi + 0x28u);
/* 8e72dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e72dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e72de: call 0x6c402f */
  esp -= 4; W32(esp, 0x8e72e3u); SPILL(); f_6c402f(); if (g_unwind) return; RELOAD();
/* 8e72e3: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 8e72e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e72ec: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 8e72ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e72f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e72f1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e72f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e72f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e72f6: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e72f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e72fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e72fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e72fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e72fd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e7300: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7303: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e7304: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e7305: mov eax, ebx */
  eax = ebx;
/* 8e7307: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e730e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e730f: mov esp, ebp */
  esp = ebp;
/* 8e7311: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e7312: ret  */
  esp += 4; SPILL(); return;
}

void f_8e7313(void) {
  LOAD_REGS();
L_8e7313: /* 8e7313: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e7316: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e731b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8e731e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e731f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8e7322: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e7327u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e7327(); return;
}

void f_8e7327(void) {
  LOAD_REGS();
L_8e7327: /* 8e7327: push 0xa1dd84 */
  { uint32_t v = 0xa1dd84u; esp -= 4; W32(esp, v); }
/* 8e732c: push 0xaedbe8 */
  { uint32_t v = 0xaedbe8u; esp -= 4; W32(esp, v); }
/* 8e7331: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e7337u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e7337: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e733a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e733c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e733e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e7343u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e7343: guest_badaddr(0x8e7343); return;
}

void f_8e7390(void) {
  LOAD_REGS();
L_8e7390: /* 8e7390: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e7392: push 0x9d8b24 */
  { uint32_t v = 0x9d8b24u; esp -= 4; W32(esp, v); }
/* 8e7397: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e739d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e739e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e73a5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e73a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e73a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e73aa: mov esi, ecx */
  esi = ecx;
/* 8e73ac: xor ebx, ebx */
  ebx = 0;
/* 8e73ae: push 0xcebd08 */
  { uint32_t v = 0xcebd08u; esp -= 4; W32(esp, v); }
/* 8e73b3: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 8e73b7: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 8e73bb: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e73c1u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8e73c1: push 0xcebd44 */
  { uint32_t v = 0xcebd44u; esp -= 4; W32(esp, v); }
/* 8e73c6: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8e73c9: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 8e73cd: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e73d3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8e73d3: mov eax, dword ptr [0xcebccc] */
  eax = R32((uint32_t)(0xcebcccu));
/* 8e73d8: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8e73db: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8e73df: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e73e1: mov byte ptr [esp + 0x24], 1 */
  W8((uint32_t)(esp + 0x24u), 0x1u);
/* 8e73e6: je 0x8e7403 */
  if (zf) goto L_8e7403;
L_8e73e8: /* 8e73e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e73e9: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8e73ed: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8e73f3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8e73f3: mov ebx, 1 */
  ebx = 0x1u;
/* 8e73f8: mov byte ptr [esp + 0x24], 2 */
  W8((uint32_t)(esp + 0x24u), 0x2u);
/* 8e73fd: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 8e7401: jmp 0x8e7408 */
  goto L_8e7408;
L_8e7403: /* 8e7403: mov eax, 0xcebd2c */
  eax = 0xcebd2cu;
L_8e7408: /* 8e7408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7409: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8e740c: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e7412u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8e7412: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7415: mov dword ptr [esp + 0x24], 4 */
  W32((uint32_t)(esp + 0x24u), 0x4u);
/* 8e741d: je 0x8e7429 */
  if (zf) goto L_8e7429;
L_8e741f: /* 8e741f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8e7423: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8e7429u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8e7429: /* 8e7429: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8e742c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8e7432u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8e7432: push 0xcebd50 */
  { uint32_t v = 0xcebd50u; esp -= 4; W32(esp, v); }
/* 8e7437: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 8e743a: mov byte ptr [esp + 0x28], 5 */
  W8((uint32_t)(esp + 0x28u), 0x5u);
/* 8e743f: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e7445u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8e7445: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8e7449: mov dword ptr [esi + 0x40], 1 */
  W32((uint32_t)(esi + 0x40u), 0x1u);
/* 8e7450: mov eax, esi */
  eax = esi;
/* 8e7452: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e7453: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e7454: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e745b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e745e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e74b0(void) {
  LOAD_REGS();
L_8e74b0: /* 8e74b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e74b1: mov ebp, esp */
  ebp = esp;
/* 8e74b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e74b5: push 0x9d8ba8 */
  { uint32_t v = 0x9d8ba8u; esp -= 4; W32(esp, v); }
/* 8e74ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e74c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e74c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e74c8: sub esp, 0x928 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x928u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e74ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e74cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e74d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e74d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e74d4: mov ebx, ecx */
  ebx = ecx;
/* 8e74d6: push 0xcebd08 */
  { uint32_t v = 0xcebd08u; esp -= 4; W32(esp, v); }
/* 8e74db: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8e74de: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e74e4u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8e74e4: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 8e74e7: push 0xcebd44 */
  { uint32_t v = 0xcebd44u; esp -= 4; W32(esp, v); }
/* 8e74ec: mov ecx, esi */
  ecx = esi;
/* 8e74ee: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e74f5: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e74fbu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8e74fb: mov eax, dword ptr [0xcebccc] */
  eax = R32((uint32_t)(0xcebcccu));
/* 8e7500: lea edi, [ebx + 0x1c] */
  edi = (uint32_t)(ebx + 0x1cu);
/* 8e7503: push 0xcebd2c */
  { uint32_t v = 0xcebd2cu; esp -= 4; W32(esp, v); }
/* 8e7508: mov ecx, edi */
  ecx = edi;
/* 8e750a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8e750e: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8e7511: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e7517u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8e7517: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 8e751a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8e751e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8e7524u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8e7524: add ebx, 0x34 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e7527: push 0xcebd50 */
  { uint32_t v = 0xcebd50u; esp -= 4; W32(esp, v); }
/* 8e752c: mov ecx, ebx */
  ecx = ebx;
/* 8e752e: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8e7532: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e7538u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8e7538: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e753b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e753d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7540: mov dword ptr [ecx + 0x40], 1 */
  W32((uint32_t)(ecx + 0x40u), 0x1u);
/* 8e7547: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8e754b: jne 0x8e7562 */
  if (!zf) goto L_8e7562;
L_8e754d: /* 8e754d: push 0x7a */
  { uint32_t v = 0x7au; esp -= 4; W32(esp, v); }
/* 8e754f: push 0xaedbf0 */
  { uint32_t v = 0xaedbf0u; esp -= 4; W32(esp, v); }
/* 8e7554: push 0xaedbfc */
  { uint32_t v = 0xaedbfcu; esp -= 4; W32(esp, v); }
/* 8e7559: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8e755fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8e755f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e7562: /* 8e7562: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e7565: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 8e756a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e756b: lea ecx, [ebp - 0x934] */
  ecx = (uint32_t)(ebp + 0xfffff6ccu);
/* 8e7571: lea edx, [ebp - 0x934] */
  edx = (uint32_t)(ebp + 0xfffff6ccu);
/* 8e7577: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e7578: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8e757b: call dword ptr [0xcfa5a4] */
  esp -= 4; W32(esp, 0x8e7581u); SPILL(); f_4e2be4(); if (g_unwind) return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */ RELOAD();
/* 8e7581: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e7584: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7587: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e758a: jne 0x8e75ed */
  if (!zf) goto L_8e75ed;
L_8e758c: /* 8e758c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e758f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7591: jne 0x8e75ab */
  if (!zf) goto L_8e75ab;
L_8e7593: /* 8e7593: push 0x83 */
  { uint32_t v = 0x83u; esp -= 4; W32(esp, v); }
/* 8e7598: push 0xaedc04 */
  { uint32_t v = 0xaedc04u; esp -= 4; W32(esp, v); }
/* 8e759d: push 0xaedc10 */
  { uint32_t v = 0xaedc10u; esp -= 4; W32(esp, v); }
/* 8e75a2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8e75a8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8e75a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e75ab: /* 8e75ab: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e75ae: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e75b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e75b2: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e75b8u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e75b8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e75bb: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e75be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e75bf: mov ecx, esi */
  ecx = esi;
/* 8e75c1: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e75c7u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e75c7: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8e75ca: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8e75cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e75ce: mov ecx, edi */
  ecx = edi;
/* 8e75d0: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e75d6u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e75d6: lea edx, [esi + 0x34] */
  edx = (uint32_t)(esi + 0x34u);
/* 8e75d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e75da: mov ecx, ebx */
  ecx = ebx;
/* 8e75dc: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e75e2u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e75e2: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 8e75e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e75e8: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
/* 8e75eb: jmp 0x8e75f6 */
  goto L_8e75f6;
L_8e75ed: /* 8e75ed: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e75f0: jne 0x8e76f7 */
  if (!zf) goto L_8e76f7;
L_8e75f6: /* 8e75f6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e75f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e75fb: jne 0x8e7615 */
  if (!zf) goto L_8e7615;
L_8e75fd: /* 8e75fd: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 8e7602: push 0xaedc18 */
  { uint32_t v = 0xaedc18u; esp -= 4; W32(esp, v); }
/* 8e7607: push 0xaedc24 */
  { uint32_t v = 0xaedc24u; esp -= 4; W32(esp, v); }
/* 8e760c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8e7612u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8e7612: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e7615: /* 8e7615: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8e761c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e7620: /* 8e7620: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e7623: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8e7626: cmp edx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e7629: jge 0x8e76f7 */
  if ((sf == of)) goto L_8e76f7;
L_8e762f: /* 8e762f: mov edi, edx */
  edi = edx;
/* 8e7631: mov ebx, eax */
  ebx = eax;
/* 8e7633: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8e7636: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 8e7639: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8e763c: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e763e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7644u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7644: mov esi, dword ptr [0xcfa340] */
  esi = R32((uint32_t)(0xcfa340u));
/* 8e764a: push 0xaedc2c */
  { uint32_t v = 0xaedc2cu; esp -= 4; W32(esp, v); }
/* 8e764f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7650: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7652u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7652: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7655: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7657: je 0x8e76ef */
  if (zf) goto L_8e76ef;
L_8e765d: /* 8e765d: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8e7660: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7662: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7668u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7668: push 0xaedc38 */
  { uint32_t v = 0xaedc38u; esp -= 4; W32(esp, v); }
/* 8e766d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e766e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7670: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7673: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7675: je 0x8e76ef */
  if (zf) goto L_8e76ef;
L_8e7677: /* 8e7677: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8e767a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e767c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7682u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7682: push 0xaedc40 */
  { uint32_t v = 0xaedc40u; esp -= 4; W32(esp, v); }
/* 8e7687: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7688: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e768au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e768a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e768d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e768f: je 0x8e76ef */
  if (zf) goto L_8e76ef;
L_8e7691: /* 8e7691: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8e7694: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7696: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e769cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e769c: push 0xaedc4c */
  { uint32_t v = 0xaedc4cu; esp -= 4; W32(esp, v); }
/* 8e76a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e76a2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e76a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e76a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e76a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e76a9: je 0x8e76ef */
  if (zf) goto L_8e76ef;
L_8e76ab: /* 8e76ab: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8e76ae: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e76b0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e76b6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e76b6: push 0xaedc58 */
  { uint32_t v = 0xaedc58u; esp -= 4; W32(esp, v); }
/* 8e76bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e76bc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e76beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e76be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e76c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e76c3: je 0x8e76ef */
  if (zf) goto L_8e76ef;
L_8e76c5: /* 8e76c5: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e76c8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8e76ca: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e76cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8e76cf: mov ecx, esi */
  ecx = esi;
/* 8e76d1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8e76d7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8e76d7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e76d9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8e76dc: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8e76df: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e76e1: je 0x8e76ef */
  if (zf) goto L_8e76ef;
L_8e76e3: /* 8e76e3: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 8e76e6: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e76e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e76e9: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e76efu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_8e76ef: /* 8e76ef: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8e76f2: jmp 0x8e7620 */
  goto L_8e7620;
L_8e76f7: /* 8e76f7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e76fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8e7700: /* 8e7700: cmp word ptr [eax], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8e7704: jne 0x8e770e */
  if (!zf) goto L_8e770e;
L_8e7706: /* 8e7706: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e7709: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8e770c: jmp 0x8e7700 */
  goto L_8e7700;
L_8e770e: /* 8e770e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e7711: mov esi, dword ptr [0xcfaa98] */
  esi = R32((uint32_t)(0xcfaa98u));
/* 8e7717: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 8e7719: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e771a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e771cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e771c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e771f: push 0x23 */
  { uint32_t v = 0x23u; esp -= 4; W32(esp, v); }
/* 8e7721: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e7722: mov edi, eax */
  edi = eax;
/* 8e7724: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7726u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7726: xor ecx, ecx */
  ecx = 0;
/* 8e7728: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e772b: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e772d: je 0x8e7737 */
  if (zf) goto L_8e7737;
L_8e772f: /* 8e772f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e7731: je 0x8e7739 */
  if (zf) goto L_8e7739;
L_8e7733: /* 8e7733: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8e7735: jb 0x8e7739 */
  if (cf) goto L_8e7739;
L_8e7737: /* 8e7737: mov edi, eax */
  edi = eax;
L_8e7739: /* 8e7739: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e773b: je 0x8e77e4 */
  if (zf) goto L_8e77e4;
L_8e7741: /* 8e7741: mov dx, word ptr [edi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 8e7744: mov word ptr [edi], cx */
  W16((uint32_t)(edi), (ecx & 0xffffu));
/* 8e7747: mov word ptr [ebp - 0x1c], dx */
  W16((uint32_t)(ebp + 0xffffffe4u), (edx & 0xffffu));
/* 8e774b: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8e774e: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_8e7751: /* 8e7751: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 8e7753: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e7754: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x8e775au); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 8e775a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e775d: push 0x23 */
  { uint32_t v = 0x23u; esp -= 4; W32(esp, v); }
/* 8e775f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e7760: mov esi, eax */
  esi = eax;
/* 8e7762: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x8e7768u); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 8e7768: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e776b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e776d: je 0x8e7777 */
  if (zf) goto L_8e7777;
L_8e776f: /* 8e776f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7771: je 0x8e7779 */
  if (zf) goto L_8e7779;
L_8e7773: /* 8e7773: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8e7775: jb 0x8e7779 */
  if (cf) goto L_8e7779;
L_8e7777: /* 8e7777: mov esi, eax */
  esi = eax;
L_8e7779: /* 8e7779: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e777b: je 0x8e778c */
  if (zf) goto L_8e778c;
L_8e777d: /* 8e777d: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 8e7780: mov word ptr [esi], 0 */
  W16((uint32_t)(esi), 0x0u);
/* 8e7785: mov word ptr [ebp + 0xc], ax */
  W16((uint32_t)(ebp + 0xcu), (eax & 0xffffu));
/* 8e7789: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_8e778c: /* 8e778c: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8e778e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e778f: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x8e7795u); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 8e7795: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7798: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e779a: je 0x8e77b1 */
  if (zf) goto L_8e77b1;
L_8e779c: /* 8e779c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e779e: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8e77a1: call 0x6c321a */
  esp -= 4; W32(esp, 0x8e77a6u); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 8e77a6: mov esi, eax */
  esi = eax;
/* 8e77a8: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8e77ac: jmp 0x8e78f2 */
  goto L_8e78f2;
L_8e77b1: /* 8e77b1: cmp word ptr [ebp - 0x1c], 0x3f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe4u))); uint16_t b = (uint16_t)(0x3fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8e77b6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e77b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e77ba: jne 0x8e77c3 */
  if (!zf) goto L_8e77c3;
L_8e77bc: /* 8e77bc: call 0x6cbc0d */
  esp -= 4; W32(esp, 0x8e77c1u); SPILL(); f_6cbc0d(); if (g_unwind) return; RELOAD();
/* 8e77c1: jmp 0x8e77cc */
  goto L_8e77cc;
L_8e77c3: /* 8e77c3: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e77c6: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e77ccu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_8e77cc: /* 8e77cc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e77ce: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e77d1: mov edi, esi */
  edi = esi;
/* 8e77d3: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8e77d6: jne 0x8e7751 */
  if (!zf) goto L_8e7751;
L_8e77dc: /* 8e77dc: mov esi, dword ptr [0xcfaa98] */
  esi = R32((uint32_t)(0xcfaa98u));
/* 8e77e2: xor ecx, ecx */
  ecx = 0;
L_8e77e4: /* 8e77e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e77e5: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8e77e8: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8e77eb: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x8e77f1u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 8e77f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e77f4: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e77f7: jle 0x8e785d */
  if ((zf || sf != of)) goto L_8e785d;
L_8e77f9: /* 8e77f9: cmp word ptr [ebx + 2], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x2u))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8e77fe: jne 0x8e785d */
  if (!zf) goto L_8e785d;
L_8e7800: /* 8e7800: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7803: push 0xcebd08 */
  { uint32_t v = 0xcebd08u; esp -= 4; W32(esp, v); }
/* 8e7808: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e780eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e780e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7811: lea esi, [edi + 0xc] */
  esi = (uint32_t)(edi + 0xcu);
/* 8e7814: push 0xcebd44 */
  { uint32_t v = 0xcebd44u; esp -= 4; W32(esp, v); }
/* 8e7819: mov ecx, esi */
  ecx = esi;
/* 8e781b: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e7821u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e7821: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e7822: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 8e7825: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e782bu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e782b: push 0xcebd50 */
  { uint32_t v = 0xcebd50u; esp -= 4; W32(esp, v); }
/* 8e7830: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 8e7833: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e7839u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e7839: mov eax, 1 */
  eax = 0x1u;
/* 8e783e: push 0xcebcf4 */
  { uint32_t v = 0xcebcf4u; esp -= 4; W32(esp, v); }
/* 8e7843: mov ecx, esi */
  ecx = esi;
/* 8e7845: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8e784c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8e784f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8e7852: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e7858u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e7858: jmp 0x8e7afa */
  goto L_8e7afa;
L_8e785d: /* 8e785d: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 8e785f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e7860: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7862u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7862: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7865: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7867: je 0x8e78c5 */
  if (zf) goto L_8e78c5;
L_8e7869: /* 8e7869: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 8e786b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e786c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e786eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e786e: lea edx, [ebx + 2] */
  edx = (uint32_t)(ebx + 0x2u);
/* 8e7871: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7874: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8e7876: jbe 0x8e78c5 */
  if ((cf | zf)) goto L_8e78c5;
L_8e7878: /* 8e7878: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 8e787a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e787b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e787du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e787d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7880: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7882: je 0x8e78a0 */
  if (zf) goto L_8e78a0;
L_8e7884: /* 8e7884: mov edi, dword ptr [0xcfaa98] */
  edi = R32((uint32_t)(0xcfaa98u));
/* 8e788a: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 8e788c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e788d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e788fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e788f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7892: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 8e7894: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e7895: mov esi, eax */
  esi = eax;
/* 8e7897: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e7899u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7899: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e789c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8e789e: jae 0x8e78c5 */
  if (!cf) goto L_8e78c5;
L_8e78a0: /* 8e78a0: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 8e78a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e78a3: mov esi, ebx */
  esi = ebx;
/* 8e78a5: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x8e78abu); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 8e78ab: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e78ae: mov ebx, eax */
  ebx = eax;
/* 8e78b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e78b3: mov word ptr [ebx], 0 */
  W16((uint32_t)(ebx), 0x0u);
/* 8e78b8: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e78bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e78bc: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8e78bf: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e78c5u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_8e78c5: /* 8e78c5: cmp word ptr [ebx], 0x2f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8e78c9: jne 0x8e796d */
  if (!zf) goto L_8e796d;
L_8e78cf: /* 8e78cf: mov ax, word ptr [ebx + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x2u))) & 0xffffu);
/* 8e78d3: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e78d6: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e78d9: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8e78dd: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8e78e0: je 0x8e7955 */
  if (zf) goto L_8e7955;
L_8e78e2: /* 8e78e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e78e4: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8e78e7: call 0x6c321a */
  esp -= 4; W32(esp, 0x8e78ecu); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 8e78ec: mov esi, eax */
  esi = eax;
/* 8e78ee: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
L_8e78f2: /* 8e78f2: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e78f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e78f6: mov ecx, edi */
  ecx = edi;
/* 8e78f8: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e78feu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e78fe: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8e7901: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e7902: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 8e7905: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e790bu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e790b: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 8e790e: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
/* 8e7911: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7912: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 8e7915: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
/* 8e7918: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e791eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e791e: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8e7921: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e7922: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* 8e7925: call 0x6caf0b */
  esp -= 4; W32(esp, 0x8e792au); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 8e792a: lea edx, [esi + 0x34] */
  edx = (uint32_t)(esi + 0x34u);
/* 8e792d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e792e: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 8e7931: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e7937u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e7937: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8e793a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8e793d: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* 8e7940: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8e7944: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x8e7949u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 8e7949: mov dword ptr [edi + 0x40], 0 */
  W32((uint32_t)(edi + 0x40u), 0x0u);
/* 8e7950: jmp 0x8e7e77 */
  goto L_8e7e77;
L_8e7955: /* 8e7955: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7958: push 0xcebcf8 */
  { uint32_t v = 0xcebcf8u; esp -= 4; W32(esp, v); }
/* 8e795d: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7960: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 8e7967: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e796du); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_8e796d: /* 8e796d: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 8e796f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e7970: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x8e7976u); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 8e7976: mov edi, eax */
  edi = eax;
/* 8e7978: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e797b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e797d: je 0x8e7afa */
  if (zf) goto L_8e7afa;
L_8e7983: /* 8e7983: mov ecx, edi */
  ecx = edi;
/* 8e7985: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8e7987: test ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e798d: jle 0x8e7afa */
  if ((zf || sf != of)) goto L_8e7afa;
L_8e7993: /* 8e7993: mov ecx, 0xcebd5c */
  ecx = 0xcebd5cu;
/* 8e7998: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x8e799eu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 8e799e: mov ecx, 0xcebd5c */
  ecx = 0xcebd5cu;
/* 8e79a3: mov esi, eax */
  esi = eax;
/* 8e79a5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e79abu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e79ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e79ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e79ad: lea ebx, [edi + 2] */
  ebx = (uint32_t)(edi + 0x2u);
/* 8e79b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e79b1: call dword ptr [0xcfa940] */
  esp -= 4; W32(esp, 0x8e79b7u); SPILL(); f_4e2f90(); if (g_unwind) return; /* Core!?appStrnicmp@@YAHPBG0H@Z */ RELOAD();
/* 8e79b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e79ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e79bc: jne 0x8e79fa */
  if (!zf) goto L_8e79fa;
L_8e79be: /* 8e79be: mov ecx, 0xcebd5c */
  ecx = 0xcebd5cu;
/* 8e79c3: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x8e79c9u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 8e79c9: mov ax, word ptr [edi + eax*2 + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax*2 + 0x2u))) & 0xffffu);
/* 8e79ce: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8e79d2: jb 0x8e79da */
  if (cf) goto L_8e79da;
L_8e79d4: /* 8e79d4: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8e79d8: jbe 0x8e79fa */
  if ((cf | zf)) goto L_8e79fa;
L_8e79da: /* 8e79da: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8e79de: jb 0x8e79e6 */
  if (cf) goto L_8e79e6;
L_8e79e0: /* 8e79e0: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8e79e4: jbe 0x8e79fa */
  if ((cf | zf)) goto L_8e79fa;
L_8e79e6: /* 8e79e6: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8e79ea: jb 0x8e7afa */
  if (cf) goto L_8e7afa;
L_8e79f0: /* 8e79f0: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8e79f4: ja 0x8e7afa */
  if ((!cf && !zf)) goto L_8e7afa;
L_8e79fa: /* 8e79fa: mov ecx, 0xcebd68 */
  ecx = 0xcebd68u;
/* 8e79ff: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x8e7a05u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 8e7a05: mov ecx, 0xcebd68 */
  ecx = 0xcebd68u;
/* 8e7a0a: mov esi, eax */
  esi = eax;
/* 8e7a0c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7a12u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7a12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7a13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7a14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e7a15: call dword ptr [0xcfa940] */
  esp -= 4; W32(esp, 0x8e7a1bu); SPILL(); f_4e2f90(); if (g_unwind) return; /* Core!?appStrnicmp@@YAHPBG0H@Z */ RELOAD();
/* 8e7a1b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7a1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7a20: jne 0x8e7a5e */
  if (!zf) goto L_8e7a5e;
L_8e7a22: /* 8e7a22: mov ecx, 0xcebd68 */
  ecx = 0xcebd68u;
/* 8e7a27: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x8e7a2du); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 8e7a2d: mov ax, word ptr [edi + eax*2 + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax*2 + 0x2u))) & 0xffffu);
/* 8e7a32: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8e7a36: jb 0x8e7a3e */
  if (cf) goto L_8e7a3e;
L_8e7a38: /* 8e7a38: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8e7a3c: jbe 0x8e7a5e */
  if ((cf | zf)) goto L_8e7a5e;
L_8e7a3e: /* 8e7a3e: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8e7a42: jb 0x8e7a4a */
  if (cf) goto L_8e7a4a;
L_8e7a44: /* 8e7a44: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8e7a48: jbe 0x8e7a5e */
  if ((cf | zf)) goto L_8e7a5e;
L_8e7a4a: /* 8e7a4a: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8e7a4e: jb 0x8e7afa */
  if (cf) goto L_8e7afa;
L_8e7a54: /* 8e7a54: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8e7a58: ja 0x8e7afa */
  if ((!cf && !zf)) goto L_8e7afa;
L_8e7a5e: /* 8e7a5e: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e7a61: mov edi, dword ptr [0xcfaa98] */
  edi = R32((uint32_t)(0xcfaa98u));
/* 8e7a67: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 8e7a69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7a6a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e7a6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7a6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7a6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7a71: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8e7a74: je 0x8e7a81 */
  if (zf) goto L_8e7a81;
L_8e7a76: /* 8e7a76: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 8e7a7b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e7a7e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8e7a81: /* 8e7a81: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 8e7a83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7a84: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e7a86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7a86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7a89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7a8b: je 0x8e7aa7 */
  if (zf) goto L_8e7aa7;
L_8e7a8d: /* 8e7a8d: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 8e7a92: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e7a95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7a96: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x8e7a9cu); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 8e7a9c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7a9f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7aa2: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 8e7aa5: jmp 0x8e7aaa */
  goto L_8e7aaa;
L_8e7aa7: /* 8e7aa7: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_8e7aaa: /* 8e7aaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7aab: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 8e7aae: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e7ab4u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8e7ab4: mov ecx, 0xcebd08 */
  ecx = 0xcebd08u;
/* 8e7ab9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7abfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7abf: mov ecx, edi */
  ecx = edi;
/* 8e7ac1: mov esi, eax */
  esi = eax;
/* 8e7ac3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7ac9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7ac9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7aca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7acb: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x8e7ad1u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 8e7ad1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7ad4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7ad6: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 8e7ad9: jne 0x8e7ae8 */
  if (!zf) goto L_8e7ae8;
L_8e7adb: /* 8e7adb: push 0xcebd2c */
  { uint32_t v = 0xcebd2cu; esp -= 4; W32(esp, v); }
/* 8e7ae0: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e7ae6u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e7ae6: jmp 0x8e7af3 */
  goto L_8e7af3;
L_8e7ae8: /* 8e7ae8: push 0xcebcfc */
  { uint32_t v = 0xcebcfcu; esp -= 4; W32(esp, v); }
/* 8e7aed: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e7af3u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_8e7af3: /* 8e7af3: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_8e7afa: /* 8e7afa: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e7afd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7aff: jne 0x8e7d15 */
  if (!zf) goto L_8e7d15;
L_8e7b05: /* 8e7b05: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e7b08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7b0a: je 0x8e7d15 */
  if (zf) goto L_8e7d15;
L_8e7b10: /* 8e7b10: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7b13: call 0x6c2f4f */
  esp -= 4; W32(esp, 0x8e7b18u); SPILL(); f_6c2f4f(); if (g_unwind) return; RELOAD();
/* 8e7b18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7b1a: mov edi, dword ptr [0xcfaa98] */
  edi = R32((uint32_t)(0xcfaa98u));
/* 8e7b20: je 0x8e7d1b */
  if (zf) goto L_8e7d1b;
L_8e7b26: /* 8e7b26: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8e7b2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8e7b30: /* 8e7b30: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e7b33: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8e7b36: cmp edx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e7b39: jge 0x8e7d1b */
  if ((sf == of)) goto L_8e7d1b;
L_8e7b3f: /* 8e7b3f: mov ebx, edx */
  ebx = edx;
/* 8e7b41: mov edi, eax */
  edi = eax;
/* 8e7b43: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e7b46: lea ebx, [ebx + ebx*2] */
  ebx = (uint32_t)(ebx + ebx*2);
/* 8e7b49: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8e7b4c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7b4e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7b54u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7b54: mov esi, dword ptr [0xcfa940] */
  esi = R32((uint32_t)(0xcfa940u));
/* 8e7b5a: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 8e7b5c: push 0xaedc64 */
  { uint32_t v = 0xaedc64u; esp -= 4; W32(esp, v); }
/* 8e7b61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7b62: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7b64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7b64: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7b67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7b69: je 0x8e7c1f */
  if (zf) goto L_8e7c1f;
L_8e7b6f: /* 8e7b6f: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e7b72: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7b74: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7b7au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7b7a: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 8e7b7c: push 0xaedc70 */
  { uint32_t v = 0xaedc70u; esp -= 4; W32(esp, v); }
/* 8e7b81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7b82: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7b84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7b84: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7b87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7b89: je 0x8e7c1f */
  if (zf) goto L_8e7c1f;
L_8e7b8f: /* 8e7b8f: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e7b92: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7b94: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7b9au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7b9a: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8e7b9c: push 0xaedc7c */
  { uint32_t v = 0xaedc7cu; esp -= 4; W32(esp, v); }
/* 8e7ba1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7ba2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7ba4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7ba4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7ba7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7ba9: je 0x8e7c1f */
  if (zf) goto L_8e7c1f;
L_8e7bab: /* 8e7bab: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e7bae: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7bb0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7bb6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7bb6: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 8e7bb8: push 0xaedc8c */
  { uint32_t v = 0xaedc8cu; esp -= 4; W32(esp, v); }
/* 8e7bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7bbe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7bc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7bc0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7bc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7bc5: je 0x8e7c1f */
  if (zf) goto L_8e7c1f;
L_8e7bc7: /* 8e7bc7: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e7bca: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7bcc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7bd2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7bd2: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 8e7bd4: push 0xaedc98 */
  { uint32_t v = 0xaedc98u; esp -= 4; W32(esp, v); }
/* 8e7bd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7bda: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7bdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7bdc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7bdf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7be1: je 0x8e7c1f */
  if (zf) goto L_8e7c1f;
L_8e7be3: /* 8e7be3: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e7be6: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7be8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7beeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7bee: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8e7bf0: push 0xaedca4 */
  { uint32_t v = 0xaedca4u; esp -= 4; W32(esp, v); }
/* 8e7bf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7bf6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7bf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7bf8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7bfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7bfd: je 0x8e7c1f */
  if (zf) goto L_8e7c1f;
L_8e7bff: /* 8e7bff: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e7c02: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7c04: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7c0au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7c0a: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 8e7c0c: push 0xaedcb4 */
  { uint32_t v = 0xaedcb4u; esp -= 4; W32(esp, v); }
/* 8e7c11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7c12: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8e7c14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7c14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7c17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7c19: jne 0x8e7d03 */
  if (!zf) goto L_8e7d03;
L_8e7c1f: /* 8e7c1f: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e7c22: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7c24: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7c2au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7c2a: push 0x3d */
  { uint32_t v = 0x3du; esp -= 4; W32(esp, v); }
/* 8e7c2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7c2d: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x8e7c33u); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 8e7c33: mov esi, eax */
  esi = eax;
/* 8e7c35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7c38: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7c3a: je 0x8e7c72 */
  if (zf) goto L_8e7c72;
L_8e7c3c: /* 8e7c3c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e7c3f: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8e7c42: lea edi, [ebx + edx] */
  edi = (uint32_t)(ebx + edx);
/* 8e7c45: mov ecx, edi */
  ecx = edi;
/* 8e7c47: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7c4du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7c4d: mov ecx, edi */
  ecx = edi;
/* 8e7c4f: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8e7c52: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7c58u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7c58: sub esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8e7c5b: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8e7c5d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8e7c5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7c5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7c60: lea eax, [ebp - 0x134] */
  eax = (uint32_t)(ebp + 0xfffffeccu);
/* 8e7c66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7c67: call dword ptr [0xcfa5a4] */
  esp -= 4; W32(esp, 0x8e7c6du); SPILL(); f_4e2be4(); if (g_unwind) return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */ RELOAD();
/* 8e7c6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7c70: jmp 0x8e7c8e */
  goto L_8e7c8e;
L_8e7c72: /* 8e7c72: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e7c75: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7c77: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7c7du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7c7e: lea ecx, [ebp - 0x134] */
  ecx = (uint32_t)(ebp + 0xfffffeccu);
/* 8e7c84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e7c85: call dword ptr [0xcfa900] */
  esp -= 4; W32(esp, 0x8e7c8bu); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* 8e7c8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e7c8e: /* 8e7c8e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7c91: push 0xcebd04 */
  { uint32_t v = 0xcebd04u; esp -= 4; W32(esp, v); }
/* 8e7c96: lea edx, [ebp - 0x134] */
  edx = (uint32_t)(ebp + 0xfffffeccu);
/* 8e7c9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e7c9d: mov ecx, esi */
  ecx = esi;
/* 8e7c9f: call 0x6c3b0c */
  esp -= 4; W32(esp, 0x8e7ca4u); SPILL(); f_6c3b0c(); if (g_unwind) return; RELOAD();
/* 8e7ca4: push 0xcebd00 */
  { uint32_t v = 0xcebd00u; esp -= 4; W32(esp, v); }
/* 8e7ca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7caa: call dword ptr [0xcfa834] */
  esp -= 4; W32(esp, 0x8e7cb0u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* 8e7cb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7cb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7cb5: jne 0x8e7d03 */
  if (!zf) goto L_8e7d03;
L_8e7cb7: /* 8e7cb7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8e7cba: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8e7cbd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e7cbf: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7cc5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7cc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7cc6: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8e7ccb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e7ccd: push 0xaedcd4 */
  { uint32_t v = 0xaedcd4u; esp -= 4; W32(esp, v); }
/* 8e7cd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e7cd3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8e7cd9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8e7cd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7cdc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8e7cde: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e7ce1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8e7ce3: mov ecx, esi */
  ecx = esi;
/* 8e7ce5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8e7cebu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8e7ceb: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8e7cee: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e7cf0: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8e7cf3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7cf5: je 0x8e7d03 */
  if (zf) goto L_8e7d03;
L_8e7cf7: /* 8e7cf7: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 8e7cfa: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e7cfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e7cfd: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8e7d03u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_8e7d03: /* 8e7d03: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e7d06: mov edi, dword ptr [0xcfaa98] */
  edi = R32((uint32_t)(0xcfaa98u));
/* 8e7d0c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e7d0d: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8e7d10: jmp 0x8e7b30 */
  goto L_8e7b30;
L_8e7d15: /* 8e7d15: mov edi, dword ptr [0xcfaa98] */
  edi = R32((uint32_t)(0xcfaa98u));
L_8e7d1b: /* 8e7d1b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e7d1e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7d20: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7d23: je 0x8e7d9f */
  if (zf) goto L_8e7d9f;
L_8e7d25: /* 8e7d25: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8e7d29: je 0x8e7d9f */
  if (zf) goto L_8e7d9f;
L_8e7d2b: /* 8e7d2b: mov ecx, ebx */
  ecx = ebx;
/* 8e7d2d: call 0x6c2f4f */
  esp -= 4; W32(esp, 0x8e7d32u); SPILL(); f_6c2f4f(); if (g_unwind) return; RELOAD();
/* 8e7d32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7d34: je 0x8e7d92 */
  if (zf) goto L_8e7d92;
L_8e7d36: /* 8e7d36: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 8e7d38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7d39: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 8e7d40: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e7d42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7d42: mov esi, eax */
  esi = eax;
/* 8e7d44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7d47: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7d49: je 0x8e7d92 */
  if (zf) goto L_8e7d92;
L_8e7d4b: /* 8e7d4b: mov word ptr [esi], 0 */
  W16((uint32_t)(esi), 0x0u);
/* 8e7d50: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e7d53: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 8e7d55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7d56: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e7d58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7d58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7d5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7d5d: je 0x8e7d88 */
  if (zf) goto L_8e7d88;
L_8e7d5f: /* 8e7d5f: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 8e7d64: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e7d67: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8e7d6b: je 0x8e7d88 */
  if (zf) goto L_8e7d88;
L_8e7d6d: /* 8e7d6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e7d6f: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8e7d72: call 0x6c321a */
  esp -= 4; W32(esp, 0x8e7d77u); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 8e7d77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7d78: mov ecx, ebx */
  ecx = ebx;
/* 8e7d7a: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8e7d7e: call 0x6ca50b */
  esp -= 4; W32(esp, 0x8e7d83u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 8e7d83: jmp 0x8e7e64 */
  goto L_8e7e64;
L_8e7d88: /* 8e7d88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7d89: lea ecx, [ebx + 0x34] */
  ecx = (uint32_t)(ebx + 0x34u);
/* 8e7d8c: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e7d92u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_8e7d92: /* 8e7d92: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e7d95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7d96: lea ecx, [ebx + 0x1c] */
  ecx = (uint32_t)(ebx + 0x1cu);
/* 8e7d99: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8e7d9fu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_8e7d9f: /* 8e7d9f: mov ecx, ebx */
  ecx = ebx;
/* 8e7da1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7da7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7da7: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8e7da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7daa: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e7dacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7dac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7daf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7db1: jne 0x8e7e0c */
  if (!zf) goto L_8e7e0c;
L_8e7db3: /* 8e7db3: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8e7db6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7dbcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7dbc: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8e7dbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7dbf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e7dc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7dc1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7dc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7dc6: jne 0x8e7e0c */
  if (!zf) goto L_8e7e0c;
L_8e7dc8: /* 8e7dc8: lea ecx, [ebx + 0x1c] */
  ecx = (uint32_t)(ebx + 0x1cu);
/* 8e7dcb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7dd1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7dd1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8e7dd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7dd4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e7dd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7dd6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7ddb: jne 0x8e7e0c */
  if (!zf) goto L_8e7e0c;
L_8e7ddd: /* 8e7ddd: lea ecx, [ebx + 0x34] */
  ecx = (uint32_t)(ebx + 0x34u);
/* 8e7de0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8e7de6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8e7de6: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8e7de8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7de9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8e7debu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e7deb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7dee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7df0: jne 0x8e7e0c */
  if (!zf) goto L_8e7e0c;
L_8e7df2: /* 8e7df2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8e7df5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7df7: jne 0x8e7e77 */
  if (!zf) goto L_8e7e77;
L_8e7df9: /* 8e7df9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e7dfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7dfe: jne 0x8e7e77 */
  if (!zf) goto L_8e7e77;
L_8e7e00: /* 8e7e00: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7e03: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 8e7e06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e7e08: jne 0x8e7e77 */
  if (!zf) goto L_8e7e77;
L_8e7e0a: /* 8e7e0a: mov ebx, ecx */
  ebx = ecx;
L_8e7e0c: /* 8e7e0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e7e0e: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8e7e11: call 0x6c321a */
  esp -= 4; W32(esp, 0x8e7e16u); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 8e7e16: mov esi, eax */
  esi = eax;
/* 8e7e18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e7e19: mov ecx, ebx */
  ecx = ebx;
/* 8e7e1b: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8e7e1f: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e7e25u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e7e25: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 8e7e28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e7e29: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8e7e2c: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e7e32u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e7e32: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 8e7e35: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8e7e38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e7e39: lea ecx, [ebx + 0x1c] */
  ecx = (uint32_t)(ebx + 0x1cu);
/* 8e7e3c: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8e7e3f: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e7e45u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e7e45: lea edx, [esi + 0x28] */
  edx = (uint32_t)(esi + 0x28u);
/* 8e7e48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e7e49: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 8e7e4c: call 0x6caf0b */
  esp -= 4; W32(esp, 0x8e7e51u); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 8e7e51: lea eax, [esi + 0x34] */
  eax = (uint32_t)(esi + 0x34u);
/* 8e7e54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7e55: lea ecx, [ebx + 0x34] */
  ecx = (uint32_t)(ebx + 0x34u);
/* 8e7e58: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8e7e5eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8e7e5e: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8e7e61: mov dword ptr [ebx + 0x40], ecx */
  W32((uint32_t)(ebx + 0x40u), ecx);
L_8e7e64: /* 8e7e64: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8e7e67: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8e7e6b: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x8e7e70u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 8e7e70: mov dword ptr [ebx + 0x40], 0 */
  W32((uint32_t)(ebx + 0x40u), 0x0u);
L_8e7e77: /* 8e7e77: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e7e7a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e7e7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e7e7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e7e7f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e7e86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e7e87: mov esp, ebp */
  esp = ebp;
/* 8e7e89: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e7e8a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8e7e8d(void) {
  LOAD_REGS();
L_8e7e8d: /* 8e7e8d: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8e7e90: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e7e95: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8e7e98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e7e99: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8e7e9c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e7ea1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e7ea1(); return;
}

void f_8e7ea1(void) {
  LOAD_REGS();
L_8e7ea1: /* 8e7ea1: push 0xa1dd94 */
  { uint32_t v = 0xa1dd94u; esp -= 4; W32(esp, v); }
/* 8e7ea6: push 0xaedd10 */
  { uint32_t v = 0xaedd10u; esp -= 4; W32(esp, v); }
/* 8e7eab: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e7eb1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e7eb1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e7eb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e7eb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e7eb8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e7ebdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e7ebd: guest_badaddr(0x8e7ebd); return;
}

void f_8e8150(void) {
  LOAD_REGS();
L_8e8150: /* 8e8150: mov eax, 1 */
  eax = 0x1u;
/* 8e8155: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8e8170(void) {
  LOAD_REGS();
L_8e8170: /* 8e8170: mov eax, 1 */
  eax = 0x1u;
/* 8e8175: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8e8190(void) {
  LOAD_REGS();
L_8e8190: /* 8e8190: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8e81b0(void) {
  LOAD_REGS();
L_8e81b0: /* 8e81b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e81b1: mov ebp, esp */
  ebp = esp;
/* 8e81b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e81b5: push 0x9d8bd0 */
  { uint32_t v = 0x9d8bd0u; esp -= 4; W32(esp, v); }
/* 8e81ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e81c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e81c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e81c8: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e81cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e81cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e81cd: mov esi, ecx */
  esi = ecx;
/* 8e81cf: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8e81d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e81d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e81d8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e81db: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e81e2: jne 0x8e81f9 */
  if (!zf) goto L_8e81f9;
L_8e81e4: /* 8e81e4: xor eax, eax */
  eax = 0;
/* 8e81e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e81e9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e81f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e81f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e81f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e81f3: mov esp, ebp */
  esp = ebp;
/* 8e81f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e81f6: ret 8 */
  esp += 12; SPILL(); return;
L_8e81f9: /* 8e81f9: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8e81fc: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 8e81ff: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 8e8205: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8e8208: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e820b: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8e8212: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8e8215: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 8e8218: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8e821b: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8e821d: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8e821f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8e8222: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e8225: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8e822bu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8e822b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e822e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8e8231: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 8e8234: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e8237: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8e823a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8e823d: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 8e8240: xor eax, eax */
  eax = 0;
/* 8e8242: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8e8245: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e8246: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8e8248: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8e824b: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8e824d: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 8e8250: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 8e8253: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 8e8256: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8e8259: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 8e825c: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 8e825f: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 8e8262: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8e8265: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8e8268: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8e826b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8e826e: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8e8271: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8e8274: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8e8277: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e827a: mov edx, esp */
  edx = esp;
/* 8e827c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8e827e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8e8281: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e8284: mov ecx, esi */
  ecx = esi;
/* 8e8286: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 8e828d: mov dword ptr [ebp - 0x48], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb8u), 0xffffffffu);
/* 8e8294: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8e8297: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x8e829cu); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 8e829c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e829e: je 0x8e82e2 */
  if (zf) goto L_8e82e2;
L_8e82a0: /* 8e82a0: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8e82a3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e82a5: mov dword ptr [esi + 0x5a4], 0 */
  W32((uint32_t)(esi + 0x5a4u), 0x0u);
/* 8e82af: je 0x8e82ca */
  if (zf) goto L_8e82ca;
L_8e82b1: /* 8e82b1: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 8e82b6: mov ecx, edi */
  ecx = edi;
/* 8e82b8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8e82beu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8e82be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e82c0: je 0x8e82ca */
  if (zf) goto L_8e82ca;
L_8e82c2: /* 8e82c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e82c3: mov ecx, esi */
  ecx = esi;
/* 8e82c5: call 0x6c5579 */
  esp -= 4; W32(esp, 0x8e82cau); SPILL(); f_6c5579(); if (g_unwind) return; RELOAD();
L_8e82ca: /* 8e82ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e82cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e82ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e82cf: mov eax, 1 */
  eax = 0x1u;
/* 8e82d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e82db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e82dc: mov esp, ebp */
  esp = ebp;
/* 8e82de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e82df: ret 8 */
  esp += 12; SPILL(); return;
L_8e82e2: /* 8e82e2: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8e82e5: fcomp dword ptr [esi + 0x2d4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x2d4u)));
  FPOP();
/* 8e82eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e82ed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e82f0: jp 0x8e8364 */
  if (pf) goto L_8e8364;
L_8e82f2: /* 8e82f2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e82f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e82f7: je 0x8e82ca */
  if (zf) goto L_8e82ca;
L_8e82f9: /* 8e82f9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8e82fc: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8e8302: fadd qword ptr [0xa0d218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0d218u)));
/* 8e8308: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8e830a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e830c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e830f: jp 0x8e8364 */
  if (pf) goto L_8e8364;
L_8e8311: /* 8e8311: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8e8317: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8e8319: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e831c: mov eax, esp */
  eax = esp;
/* 8e831e: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8e8325: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8e8328: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e832a: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 8e832f: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8e8336: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8e8339: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8e833c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e833d: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8e8344: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8e8347: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e8348: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8e834b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8e8351: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8352: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 8e8355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8356: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8e835cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e835c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e835e: je 0x8e82ca */
  if (zf) goto L_8e82ca;
L_8e8364: /* 8e8364: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8e8367: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e836d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e836f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8372: jne 0x8e8463 */
  if (!zf) goto L_8e8463;
L_8e8378: /* 8e8378: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e837b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e837c: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 8e837f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e8380: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8e8383: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8e8389u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8e8389: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e838b: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8e838e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8e8391: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8e8394: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8e8397: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8e839a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e839b: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 8e83a1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8e83a4: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8e83aau); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8e83aa: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8e83ad: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8e83b0: mov ecx, 0x3f800000 */
  ecx = 0x3f800000u;
/* 8e83b5: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8e83b8: mov dword ptr [esi + 0x5a4], ecx */
  W32((uint32_t)(esi + 0x5a4u), ecx);
/* 8e83be: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8e83c1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e83c3: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8e83c6: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8e83c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e83cb: fcom dword ptr [0xa15078] */
  fpu_com(ST0, F32((uint32_t)(0xa15078u)));
/* 8e83d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e83d3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e83d6: jne 0x8e83e6 */
  if (!zf) goto L_8e83e6;
L_8e83d8: /* 8e83d8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e83da: mov dword ptr [esi + 0x5a0], 0 */
  W32((uint32_t)(esi + 0x5a0u), 0x0u);
/* 8e83e4: jmp 0x8e8463 */
  goto L_8e8463;
L_8e83e6: /* 8e83e6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e83ec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e83ee: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e83f1: jp 0x8e8406 */
  if (pf) goto L_8e8406;
L_8e83f3: /* 8e83f3: mov eax, 0xbf800000 */
  eax = 0xbf800000u;
/* 8e83f8: mov dword ptr [esi + 0x5a0], eax */
  W32((uint32_t)(esi + 0x5a0u), eax);
/* 8e83fe: mov dword ptr [esi + 0x5a4], eax */
  W32((uint32_t)(esi + 0x5a4u), eax);
/* 8e8404: jmp 0x8e8463 */
  goto L_8e8463;
L_8e8406: /* 8e8406: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8e8409: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e840f: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8e8412: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e8418: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e841a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8e841d: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e8423: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8e8426: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 8e8428: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8e842b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e842d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e842f: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8e8432: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e8434: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8e8437: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e8439: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8e843b: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8e843e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8e8440: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e8442: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e8448: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e844a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e844c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e844f: jne 0x8e8459 */
  if (!zf) goto L_8e8459;
L_8e8451: /* 8e8451: mov dword ptr [esi + 0x5a0], ecx */
  W32((uint32_t)(esi + 0x5a0u), ecx);
/* 8e8457: jmp 0x8e8463 */
  goto L_8e8463;
L_8e8459: /* 8e8459: mov dword ptr [esi + 0x5a0], 0xbf800000 */
  W32((uint32_t)(esi + 0x5a0u), 0xbf800000u);
L_8e8463: /* 8e8463: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 8e8469: mov ecx, dword ptr [edx + 0x370] */
  ecx = R32((uint32_t)(edx + 0x370u));
/* 8e846f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8471: je 0x8e81e4 */
  if (zf) goto L_8e81e4;
L_8e8477: /* 8e8477: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 8e847c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8e8482u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8e8482: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8484: je 0x8e81e4 */
  if (zf) goto L_8e81e4;
L_8e848a: /* 8e848a: fld dword ptr [esi + 0x3c0] */
  { double v = F32((uint32_t)(esi + 0x3c0u)); FPUSH(v); }
/* 8e8490: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8e8496: fmul dword ptr [0xa08924] */
  ST0 = ST0 * (F32((uint32_t)(0xa08924u)));
/* 8e849c: mov ecx, dword ptr [eax + 0x370] */
  ecx = R32((uint32_t)(eax + 0x370u));
/* 8e84a2: fadd dword ptr [ecx + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x2d4u)));
/* 8e84a8: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 8e84ae: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 8e84b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e84b3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e84b6: jne 0x8e81e4 */
  if (!zf) goto L_8e81e4;
L_8e84bc: /* 8e84bc: jmp 0x8e82ca */
  goto L_8e82ca;
}

void f_8e84c1(void) {
  LOAD_REGS();
L_8e84c1: /* 8e84c1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e84c4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e84c9: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8e84cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e84cd: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8e84d0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e84d5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e84d5(); return;
}

void f_8e84d5(void) {
  LOAD_REGS();
L_8e84d5: /* 8e84d5: push 0xa1ddb0 */
  { uint32_t v = 0xa1ddb0u; esp -= 4; W32(esp, v); }
/* 8e84da: push 0xaede1c */
  { uint32_t v = 0xaede1cu; esp -= 4; W32(esp, v); }
/* 8e84df: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e84e5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e84e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e84e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e84ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e84ec: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e84f1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e84f1: guest_badaddr(0x8e84f1); return;
}

void f_8e85e0(void) {
  LOAD_REGS();
L_8e85e0: /* 8e85e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e85e1: mov ebp, esp */
  ebp = esp;
/* 8e85e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e85e5: push 0x9d8be0 */
  { uint32_t v = 0x9d8be0u; esp -= 4; W32(esp, v); }
/* 8e85ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e85f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e85f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e85f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e85fb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e85fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8600: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e8601: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8602: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8603: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e8606: mov esi, ecx */
  esi = ecx;
/* 8e8608: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e860f: jne 0x8e862d */
  if (!zf) goto L_8e862d;
L_8e8611: /* 8e8611: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e8614: mov dword ptr [esi + 0xbc], eax */
  W32((uint32_t)(esi + 0xbcu), eax);
/* 8e861a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e861d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e8624: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8625: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8626: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8627: mov esp, ebp */
  esp = ebp;
/* 8e8629: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e862a: ret 0xc */
  esp += 16; SPILL(); return;
L_8e862d: /* 8e862d: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8e8633: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e8635: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8636: mov ecx, esi */
  ecx = esi;
/* 8e8638: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x8e863eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e863e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e8640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8641: mov ecx, esi */
  ecx = esi;
/* 8e8643: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8e8649u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e8649: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8e864f: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 8e8652: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e8654: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8657: jne 0x8e867b */
  if (!zf) goto L_8e867b;
L_8e8659: /* 8e8659: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 8e865f: fdivr dword ptr [ebp + 0xc] */
  ST0 = (F32((uint32_t)(ebp + 0xcu))) / ST0;
/* 8e8662: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* 8e8668: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e866b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e8672: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8673: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8674: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8675: mov esp, ebp */
  esp = ebp;
/* 8e8677: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8678: ret 0xc */
  esp += 16; SPILL(); return;
L_8e867b: /* 8e867b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e867e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e8680: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8e8683: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8684: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* 8e868a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e868b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e8692: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8693: mov esp, ebp */
  esp = ebp;
/* 8e8695: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8696: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8e8699(void) {
  LOAD_REGS();
L_8e8699: /* 8e8699: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e869c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e86a1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e86a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e86a5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e86a8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e86adu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e86ad(); return;
}

void f_8e86ad(void) {
  LOAD_REGS();
L_8e86ad: /* 8e86ad: push 0xa1dde8 */
  { uint32_t v = 0xa1dde8u; esp -= 4; W32(esp, v); }
/* 8e86b2: push 0xaede60 */
  { uint32_t v = 0xaede60u; esp -= 4; W32(esp, v); }
/* 8e86b7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e86bdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e86bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e86c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e86c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e86c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e86c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e86c9: guest_badaddr(0x8e86c9); return;
}

void f_8e8710(void) {
  LOAD_REGS();
L_8e8710: /* 8e8710: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e8712: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8e8718u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e8718: add eax, 0x158 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x158u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e871d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8e8720: ret  */
  esp += 4; SPILL(); return;
}

void f_8e8740(void) {
  LOAD_REGS();
L_8e8740: /* 8e8740: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e8744: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e8746: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e874a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e874c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e8760(void) {
  LOAD_REGS();
L_8e8760: /* 8e8760: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e8764: fild dword ptr [eax + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8e8767: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8780(void) {
  LOAD_REGS();
L_8e8780: /* 8e8780: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e8784: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 8e8787: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e87a0(void) {
  LOAD_REGS();
L_8e87a0: /* 8e87a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e87a4: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 8e87a7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e87c0(void) {
  LOAD_REGS();
L_8e87c0: /* 8e87c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e87c1: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8e87c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e87c7: je 0x8e87ed */
  if (zf) goto L_8e87ed;
L_8e87c9: /* 8e87c9: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8e87cfu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8e87cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e87d0: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8e87d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e87d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e87d8: push 0xaeded8 */
  { uint32_t v = 0xaeded8u; esp -= 4; W32(esp, v); }
/* 8e87dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e87de: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8e87e4u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8e87e4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e87e7: xor eax, eax */
  eax = 0;
/* 8e87e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e87ea: ret 0x10 */
  esp += 20; SPILL(); return;
L_8e87ed: /* 8e87ed: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e87f1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8e87f5: mov dword ptr [ecx + 0xb4], eax */
  W32((uint32_t)(ecx + 0xb4u), eax);
/* 8e87fb: mov dword ptr [ecx + 0xbc], edx */
  W32((uint32_t)(ecx + 0xbcu), edx);
/* 8e8801: mov eax, 1 */
  eax = 0x1u;
/* 8e8806: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8807: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8e8830(void) {
  LOAD_REGS();
L_8e8830: /* 8e8830: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e8831: mov ebp, esp */
  ebp = esp;
/* 8e8833: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e8835: push 0x9d8bf0 */
  { uint32_t v = 0x9d8bf0u; esp -= 4; W32(esp, v); }
/* 8e883a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e8840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8841: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e8848: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e884b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e884d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e884e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e884f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8e8852: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8853: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e8856: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8857: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e885e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x8e8864u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e8864: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8e8866: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8867: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8e886a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e886b: mov ecx, eax */
  ecx = eax;
/* 8e886d: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8e8870u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e8870: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e8873: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8874: mov eax, esi */
  eax = esi;
/* 8e8876: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8877: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e887e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e887f: mov esp, ebp */
  esp = ebp;
/* 8e8881: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8882: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e8885(void) {
  LOAD_REGS();
L_8e8885: /* 8e8885: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e8888: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e888d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e8890: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e8891: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e8894: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8899u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e8899(); return;
}

void f_8e8899(void) {
  LOAD_REGS();
L_8e8899: /* 8e8899: push 0xa1de38 */
  { uint32_t v = 0xa1de38u; esp -= 4; W32(esp, v); }
/* 8e889e: push 0xaedf54 */
  { uint32_t v = 0xaedf54u; esp -= 4; W32(esp, v); }
/* 8e88a3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e88a9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e88a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e88ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e88ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e88b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e88b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e88b5: guest_badaddr(0x8e88b5); return;
}

void f_8e88f0(void) {
  LOAD_REGS();
L_8e88f0: /* 8e88f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e88f1: mov ebp, esp */
  ebp = esp;
/* 8e88f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e88f5: push 0x9d8c00 */
  { uint32_t v = 0x9d8c00u; esp -= 4; W32(esp, v); }
/* 8e88fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e8900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8901: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e8908: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e890b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e890d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e890e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e890f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8e8912: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8913: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e8916: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8917: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e891e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x8e8924u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e8924: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8e8926: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8927: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8e892a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e892b: mov ecx, eax */
  ecx = eax;
/* 8e892d: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x8e8930u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e8930: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e8933: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8934: mov eax, esi */
  eax = esi;
/* 8e8936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8937: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e893e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e893f: mov esp, ebp */
  esp = ebp;
/* 8e8941: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8942: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e8945(void) {
  LOAD_REGS();
L_8e8945: /* 8e8945: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e8948: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e894d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e8950: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e8951: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e8954: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8959u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e8959(); return;
}

void f_8e8959(void) {
  LOAD_REGS();
L_8e8959: /* 8e8959: push 0xa1de88 */
  { uint32_t v = 0xa1de88u; esp -= 4; W32(esp, v); }
/* 8e895e: push 0xaedf5c */
  { uint32_t v = 0xaedf5cu; esp -= 4; W32(esp, v); }
/* 8e8963: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e8969u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e8969: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e896c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e896e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e8970: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8975u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e8975: guest_badaddr(0x8e8975); return;
}

void f_8e89b0(void) {
  LOAD_REGS();
L_8e89b0: /* 8e89b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e89b1: mov ebp, esp */
  ebp = esp;
/* 8e89b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e89b5: push 0x9d8c10 */
  { uint32_t v = 0x9d8c10u; esp -= 4; W32(esp, v); }
/* 8e89ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e89c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e89c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e89c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e89cb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e89cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e89ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e89cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e89d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e89d3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e89da: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8e89e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e89e0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8e89e3: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e89e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e89e7: mov ecx, esi */
  ecx = esi;
/* 8e89e9: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x8e89efu); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 8e89ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e89f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e89f3: mov eax, esi */
  eax = esi;
/* 8e89f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e89f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e89fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e89fe: mov esp, ebp */
  esp = ebp;
/* 8e8a00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8a01: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e8a04(void) {
  LOAD_REGS();
L_8e8a04: /* 8e8a04: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e8a07: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e8a0c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8e8a0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e8a10: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e8a13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8a18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e8a18(); return;
}

void f_8e8a18(void) {
  LOAD_REGS();
L_8e8a18: /* 8e8a18: push 0xa1dee0 */
  { uint32_t v = 0xa1dee0u; esp -= 4; W32(esp, v); }
/* 8e8a1d: push 0xaedf6c */
  { uint32_t v = 0xaedf6cu; esp -= 4; W32(esp, v); }
/* 8e8a22: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e8a28u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e8a28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e8a2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e8a2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e8a2f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8a34u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e8a34: guest_badaddr(0x8e8a34); return;
}

void f_8e8a70(void) {
  LOAD_REGS();
L_8e8a70: /* 8e8a70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e8a71: mov ebp, esp */
  ebp = esp;
/* 8e8a73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e8a75: push 0x9d8c20 */
  { uint32_t v = 0x9d8c20u; esp -= 4; W32(esp, v); }
/* 8e8a7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e8a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8a81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e8a88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e8a8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e8a8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8a8d: mov esi, ecx */
  esi = ecx;
/* 8e8a8f: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 8e8a92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8a94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8a95: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e8a98: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e8a9f: je 0x8e8aed */
  if (zf) goto L_8e8aed;
L_8e8aa1: /* 8e8aa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e8aa4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8aa6: jne 0x8e8aed */
  if (!zf) goto L_8e8aed;
L_8e8aa8: /* 8e8aa8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e8aaa: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8e8aad: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8e8ab3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8e8ab3: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8e8ab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8ab7: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 8e8abd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8e8ac3u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8e8ac3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8ac5: je 0x8e8aed */
  if (zf) goto L_8e8aed;
L_8e8ac7: /* 8e8ac7: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e8acd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e8ad3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e8ad5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8ad8: jne 0x8e8b02 */
  if (!zf) goto L_8e8b02;
L_8e8ada: /* 8e8ada: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 8e8ae0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e8ae6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e8ae8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e8aeb: jp 0x8e8b15 */
  if (pf) goto L_8e8b15;
L_8e8aed: /* 8e8aed: xor eax, eax */
  eax = 0;
/* 8e8aef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e8af2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e8af9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8afa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8afb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8afc: mov esp, ebp */
  esp = ebp;
/* 8e8afe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8aff: ret 4 */
  esp += 8; SPILL(); return;
L_8e8b02: /* 8e8b02: fld dword ptr [esi + 0xc4] */
  { double v = F32((uint32_t)(esi + 0xc4u)); FPUSH(v); }
/* 8e8b08: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e8b0e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e8b10: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e8b13: jnp 0x8e8aed */
  if (!pf) goto L_8e8aed;
L_8e8b15: /* 8e8b15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e8b18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8b19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8b1a: mov eax, 1 */
  eax = 0x1u;
/* 8e8b1f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e8b26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8b27: mov esp, ebp */
  esp = ebp;
/* 8e8b29: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8b2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8b2d(void) {
  LOAD_REGS();
L_8e8b2d: /* 8e8b2d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e8b30: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e8b35: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8e8b38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e8b39: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e8b3c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8b41u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e8b41(); return;
}

void f_8e8b41(void) {
  LOAD_REGS();
L_8e8b41: /* 8e8b41: push 0xa1df34 */
  { uint32_t v = 0xa1df34u; esp -= 4; W32(esp, v); }
/* 8e8b46: push 0xaedf7c */
  { uint32_t v = 0xaedf7cu; esp -= 4; W32(esp, v); }
/* 8e8b4b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e8b51u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e8b51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e8b54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e8b56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e8b58: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8b5du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e8b5d: guest_badaddr(0x8e8b5d); return;
}

void f_8e8ba0(void) {
  LOAD_REGS();
L_8e8ba0: /* 8e8ba0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e8ba1: mov ebp, esp */
  ebp = esp;
/* 8e8ba3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e8ba5: push 0x9d8c30 */
  { uint32_t v = 0x9d8c30u; esp -= 4; W32(esp, v); }
/* 8e8baa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e8bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8bb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e8bb8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e8bbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e8bbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8bbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8bbe: mov esi, ecx */
  esi = ecx;
/* 8e8bc0: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 8e8bc3: xor edi, edi */
  edi = 0;
/* 8e8bc5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e8bc7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e8bca: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8e8bcd: je 0x8e8c34 */
  if (zf) goto L_8e8c34;
L_8e8bcf: /* 8e8bcf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8bd0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e8bd3: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8e8bd9u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8e8bd9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e8bdc: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 8e8be2: mov dword ptr [esi + 0xbc], edi */
  W32((uint32_t)(esi + 0xbcu), edi);
/* 8e8be8: mov dword ptr [esi + 0xb8], edi */
  W32((uint32_t)(esi + 0xb8u), edi);
/* 8e8bee: mov eax, 1 */
  eax = 0x1u;
/* 8e8bf3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e8bf6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e8bfd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8bfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8bff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8c00: mov esp, ebp */
  esp = ebp;
/* 8e8c02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8c03: ret  */
  esp += 4; SPILL(); return;
L_8e8c34: /* 8e8c34: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e8c37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8c38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8c39: xor eax, eax */
  eax = 0;
/* 8e8c3b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e8c42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8c43: mov esp, ebp */
  esp = ebp;
/* 8e8c45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8c46: ret  */
  esp += 4; SPILL(); return;
}

void f_8e8c04(void) {
  LOAD_REGS();
L_8e8c04: /* 8e8c04: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e8c07: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e8c0c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8e8c0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e8c10: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8e8c13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8c18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e8c18(); return;
}

void f_8e8c18(void) {
  LOAD_REGS();
L_8e8c18: /* 8e8c18: push 0xa1df80 */
  { uint32_t v = 0xa1df80u; esp -= 4; W32(esp, v); }
/* 8e8c1d: push 0xaedf84 */
  { uint32_t v = 0xaedf84u; esp -= 4; W32(esp, v); }
/* 8e8c22: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e8c28u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e8c28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e8c2b: xor edi, edi */
  edi = 0;
/* 8e8c2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8c2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8c2f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8c34u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8e8c34: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e8c37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8c38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8c39: xor eax, eax */
  eax = 0;
/* 8e8c3b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e8c42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8c43: mov esp, ebp */
  esp = ebp;
/* 8e8c45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8c46: ret  */
  esp += 4; SPILL(); return;
}

void f_8e8c80(void) {
  LOAD_REGS();
L_8e8c80: /* 8e8c80: xor eax, eax */
  eax = 0;
/* 8e8c82: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8ca0(void) {
  LOAD_REGS();
L_8e8ca0: /* 8e8ca0: mov eax, dword ptr [ecx + 0xdc] */
  eax = R32((uint32_t)(ecx + 0xdcu));
/* 8e8ca6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8cc0(void) {
  LOAD_REGS();
L_8e8cc0: /* 8e8cc0: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* 8e8cc6: fcomp dword ptr [ecx + 0xc0] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xc0u)));
  FPOP();
/* 8e8ccc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e8cce: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e8cd1: jp 0x8e8cdb */
  if (pf) goto L_8e8cdb;
L_8e8cd3: /* 8e8cd3: mov eax, 1 */
  eax = 0x1u;
/* 8e8cd8: ret 4 */
  esp += 8; SPILL(); return;
L_8e8cdb: /* 8e8cdb: xor eax, eax */
  eax = 0;
/* 8e8cdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8cf0(void) {
  LOAD_REGS();
L_8e8cf0: /* 8e8cf0: xor eax, eax */
  eax = 0;
/* 8e8cf2: mov dword ptr [ecx + 0xdc], eax */
  W32((uint32_t)(ecx + 0xdcu), eax);
/* 8e8cf8: mov dword ptr [ecx + 0xd8], eax */
  W32((uint32_t)(ecx + 0xd8u), eax);
/* 8e8cfe: mov eax, 1 */
  eax = 0x1u;
/* 8e8d03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8d20(void) {
  LOAD_REGS();
L_8e8d20: /* 8e8d20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e8d24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8d26: jne 0x8e8d37 */
  if (!zf) goto L_8e8d37;
L_8e8d28: /* 8e8d28: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8e8d2e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e8d32: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e8d34: ret 8 */
  esp += 12; SPILL(); return;
L_8e8d37: /* 8e8d37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8d38: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8e8d3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e8d3e: mov ecx, esi */
  ecx = esi;
/* 8e8d40: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8e8d46u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8e8d46: mov eax, esi */
  eax = esi;
/* 8e8d48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8d49: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e8d60(void) {
  LOAD_REGS();
L_8e8d60: /* 8e8d60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e8d64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8d66: jne 0x8e8d71 */
  if (!zf) goto L_8e8d71;
L_8e8d68: /* 8e8d68: fld dword ptr [ecx + 0xb8] */
  { double v = F32((uint32_t)(ecx + 0xb8u)); FPUSH(v); }
/* 8e8d6e: ret 4 */
  esp += 8; SPILL(); return;
L_8e8d71: /* 8e8d71: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8e8d77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8d90(void) {
  LOAD_REGS();
L_8e8d90: /* 8e8d90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e8d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8d96: jne 0x8e8da1 */
  if (!zf) goto L_8e8da1;
L_8e8d98: /* 8e8d98: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* 8e8d9e: ret 4 */
  esp += 8; SPILL(); return;
L_8e8da1: /* 8e8da1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8e8da7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8dc0(void) {
  LOAD_REGS();
L_8e8dc0: /* 8e8dc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e8dc4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8e8dc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8dc7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8e8dcdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8e8dcd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8de0(void) {
  LOAD_REGS();
L_8e8de0: /* 8e8de0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e8de1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e8de3: mov ecx, eax */
  ecx = eax;
/* 8e8de5: mov edx, eax */
  edx = eax;
/* 8e8de7: sar ecx, 0x16 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 22;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8e8dea: shl edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8e8ded: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 8e8df1: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 8e8df5: sar edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8e8df8: shl eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8e8dfb: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 8e8dff: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 8e8e03: sar eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8e8e06: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 8e8e0a: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 8e8e0e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e8e12: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8e8e14: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8e8e17: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8e8e1a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8e8e1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8e30(void) {
  LOAD_REGS();
L_8e8e30: /* 8e8e30: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8e8e34: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8e8e38: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e8e3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e8e3b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8e8e3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e8e3e: ret  */
  esp += 4; SPILL(); return;
}

void f_8e8e50(void) {
  LOAD_REGS();
L_8e8e50: /* 8e8e50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e8e54: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8e8e56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8e57: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8e8e5du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8e8e5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8e70(void) {
  LOAD_REGS();
L_8e8e70: /* 8e8e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e8e71: mov ebp, esp */
  ebp = esp;
/* 8e8e73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e8e75: push 0x9d8c40 */
  { uint32_t v = 0x9d8c40u; esp -= 4; W32(esp, v); }
/* 8e8e7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e8e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8e81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e8e88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e8e8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e8e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8e8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8e8e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e8e91: mov edi, ecx */
  edi = ecx;
/* 8e8e93: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e8e9a: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x8e8ea0u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 8e8ea0: xor ebx, ebx */
  ebx = 0;
L_8e8ea2: /* 8e8ea2: cmp ebx, dword ptr [edi + 0x15c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x15cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e8ea8: jge 0x8e8efa */
  if ((sf == of)) goto L_8e8efa;
L_8e8eaa: /* 8e8eaa: mov eax, dword ptr [edi + 0x158] */
  eax = R32((uint32_t)(edi + 0x158u));
/* 8e8eb0: mov esi, ebx */
  esi = ebx;
/* 8e8eb2: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 8e8eb5: mov ecx, edi */
  ecx = edi;
/* 8e8eb7: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e8eb9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8e8ebfu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8e8ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8ec0: mov ecx, esi */
  ecx = esi;
/* 8e8ec2: call 0x6c6b6d */
  esp -= 4; W32(esp, 0x8e8ec7u); SPILL(); f_6c6b6d(); if (g_unwind) return; RELOAD();
/* 8e8ec7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e8ec8: jmp 0x8e8ea2 */
  goto L_8e8ea2;
L_8e8efa: /* 8e8efa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e8efd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8efe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8eff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e8f06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8f07: mov esp, ebp */
  esp = ebp;
/* 8e8f09: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8f0a: ret  */
  esp += 4; SPILL(); return;
}

void f_8e8eca(void) {
  LOAD_REGS();
L_8e8eca: /* 8e8eca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e8ecd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e8ed2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e8ed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e8ed6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e8ed9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8edeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e8ede(); return;
}

void f_8e8ede(void) {
  LOAD_REGS();
L_8e8ede: /* 8e8ede: push 0xa1dfcc */
  { uint32_t v = 0xa1dfccu; esp -= 4; W32(esp, v); }
/* 8e8ee3: push 0xaede58 */
  { uint32_t v = 0xaede58u; esp -= 4; W32(esp, v); }
/* 8e8ee8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e8eeeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e8eee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e8ef1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e8ef3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e8ef5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e8efau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8e8efa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e8efd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8efe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8eff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e8f06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8f07: mov esp, ebp */
  esp = ebp;
/* 8e8f09: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e8f0a: ret  */
  esp += 4; SPILL(); return;
}

void f_8e8f40(void) {
  LOAD_REGS();
L_8e8f40: /* 8e8f40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e8f42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e8f43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8f44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8f45: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8e8f4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e8f4b: mov esi, eax */
  esi = eax;
/* 8e8f4d: mov eax, dword ptr [esi + 0x15c] */
  eax = R32((uint32_t)(esi + 0x15cu));
/* 8e8f53: xor edi, edi */
  edi = 0;
/* 8e8f55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e8f57: jle 0x8e8f85 */
  if ((zf || sf != of)) goto L_8e8f85;
L_8e8f59: /* 8e8f59: xor ebx, ebx */
  ebx = 0;
/* 8e8f5b: jmp 0x8e8f60 */
  goto L_8e8f60;
L_8e8f60: /* 8e8f60: mov ecx, dword ptr [esi + 0x158] */
  ecx = R32((uint32_t)(esi + 0x158u));
/* 8e8f66: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e8f68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e8f69: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8e8f6d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8e8f73u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8e8f73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8f75: jne 0x8e8f8d */
  if (!zf) goto L_8e8f8d;
L_8e8f77: /* 8e8f77: mov eax, dword ptr [esi + 0x15c] */
  eax = R32((uint32_t)(esi + 0x15cu));
/* 8e8f7d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8e8f7e: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e8f81: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e8f83: jl 0x8e8f60 */
  if ((sf != of)) goto L_8e8f60;
L_8e8f85: /* 8e8f85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8f86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8f87: xor eax, eax */
  eax = 0;
/* 8e8f89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8f8a: ret 4 */
  esp += 8; SPILL(); return;
L_8e8f8d: /* 8e8f8d: mov ecx, dword ptr [esi + 0x158] */
  ecx = R32((uint32_t)(esi + 0x158u));
/* 8e8f93: mov eax, edi */
  eax = edi;
/* 8e8f95: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8e8f98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8f99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8f9a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e8f9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8f9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8f5d(void) {
  LOAD_REGS();
L_8e8f5d: /* 8e8f5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8e8f60: /* 8e8f60: mov ecx, dword ptr [esi + 0x158] */
  ecx = R32((uint32_t)(esi + 0x158u));
/* 8e8f66: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e8f68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e8f69: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8e8f6d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8e8f73u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8e8f73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e8f75: jne 0x8e8f8d */
  if (!zf) goto L_8e8f8d;
L_8e8f77: /* 8e8f77: mov eax, dword ptr [esi + 0x15c] */
  eax = R32((uint32_t)(esi + 0x15cu));
/* 8e8f7d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8e8f7e: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e8f81: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e8f83: jl 0x8e8f60 */
  if ((sf != of)) goto L_8e8f60;
L_8e8f85: /* 8e8f85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8f86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8f87: xor eax, eax */
  eax = 0;
/* 8e8f89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8f8a: ret 4 */
  esp += 8; SPILL(); return;
L_8e8f8d: /* 8e8f8d: mov ecx, dword ptr [esi + 0x158] */
  ecx = R32((uint32_t)(esi + 0x158u));
/* 8e8f93: mov eax, edi */
  eax = edi;
/* 8e8f95: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8e8f98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e8f99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e8f9a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e8f9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e8f9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e8fc0(void) {
  LOAD_REGS();
L_8e8fc0: /* 8e8fc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e8fc1: mov ebp, esp */
  ebp = esp;
/* 8e8fc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e8fc5: push 0x9d8c50 */
  { uint32_t v = 0x9d8c50u; esp -= 4; W32(esp, v); }
/* 8e8fca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e8fd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e8fd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e8fd8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e8fdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e8fdc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e8fdd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e8fde: mov esi, ecx */
  esi = ecx;
/* 8e8fe0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e8fe2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e8fe5: xor ebx, ebx */
  ebx = 0;
/* 8e8fe7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8e8fe9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8e8fec: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8e8ff2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e8ff2: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8e8ff5: jmp 0x8e9000 */
  goto L_8e9000;
L_8e8ff7: /* 8e8ff7: xor ebx, ebx */
  ebx = 0;
/* 8e8ff9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e9000: /* 8e9000: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e9003: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9004: call 0x6c5961 */
  esp -= 4; W32(esp, 0x8e9009u); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 8e9009: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e900b: je 0x8e9307 */
  if (zf) goto L_8e9307;
L_8e9011: /* 8e9011: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8e9014: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e901a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e901c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e901f: jne 0x8e9307 */
  if (!zf) goto L_8e9307;
L_8e9025: /* 8e9025: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8e9028: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e9029: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e902c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8e902f: jg 0x8e9307 */
  if ((!zf && sf == of)) goto L_8e9307;
L_8e9035: /* 8e9035: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9037: mov ecx, esi */
  ecx = esi;
/* 8e9039: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8e903fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e903f: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9041: jne 0x8e9307 */
  if (!zf) goto L_8e9307;
L_8e9047: /* 8e9047: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e904d: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* 8e9053: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e9059: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e905c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e905e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9061: jne 0x8e92a6 */
  if (!zf) goto L_8e92a6;
L_8e9067: /* 8e9067: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 8e906d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e9073: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9075: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9078: jne 0x8e9085 */
  if (!zf) goto L_8e9085;
L_8e907a: /* 8e907a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8e907d: fmul dword ptr [esi + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xb8u)));
/* 8e9083: jmp 0x8e90b9 */
  goto L_8e90b9;
L_8e9085: /* 8e9085: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e9088: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e908e: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8e9094u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8e9094: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8e9097: fmul dword ptr [esi + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xb8u)));
/* 8e909d: fchs  */
  ST0 = -ST0;
/* 8e909f: fld dword ptr [0xa0d56c] */
  { double v = F32((uint32_t)(0xa0d56cu)); FPUSH(v); }
/* 8e90a5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8e90a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e90a9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e90ac: jne 0x8e90b6 */
  if (!zf) goto L_8e90b6;
L_8e90ae: /* 8e90ae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e90b0: fld dword ptr [0xa0d56c] */
  { double v = F32((uint32_t)(0xa0d56cu)); FPUSH(v); }
L_8e90b6: /* 8e90b6: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
L_8e90b9: /* 8e90b9: fadd dword ptr [esi + 0xbc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xbcu)));
/* 8e90bf: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 8e90c5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e90c7: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* 8e90cd: je 0x8e91e7 */
  if (zf) goto L_8e91e7;
L_8e90d3: /* 8e90d3: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e90d6: cmp dword ptr [ecx + 0xd0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xd0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e90dc: je 0x8e91e7 */
  if (zf) goto L_8e91e7;
L_8e90e2: /* 8e90e2: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8e90e8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e90ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e90eb: mov ecx, esi */
  ecx = esi;
/* 8e90ed: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x8e90f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e90f3: mov edi, eax */
  edi = eax;
/* 8e90f5: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e90f7: je 0x8e91e7 */
  if (zf) goto L_8e91e7;
L_8e90fd: /* 8e90fd: mov dword ptr [ebp - 0x24], 0x47c35000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x47c35000u);
/* 8e9104: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
/* 8e910b: jmp 0x8e9110 */
  goto L_8e9110;
L_8e9110: /* 8e9110: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9112: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9113: mov ecx, esi */
  ecx = esi;
/* 8e9115: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x8e911bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e911b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e911d: jge 0x8e9177 */
  if ((sf == of)) goto L_8e9177;
L_8e911f: /* 8e911f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e9121: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9122: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9123: mov ecx, esi */
  ecx = esi;
/* 8e9125: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8e912bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e912b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8e912e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8e9131: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8e9134: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8e9137: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 8e913a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e913c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e913f: jp 0x8e9174 */
  if (pf) goto L_8e9174;
L_8e9141: /* 8e9141: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e9147: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 8e914a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e914c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e914f: jne 0x8e9174 */
  if (!zf) goto L_8e9174;
L_8e9151: /* 8e9151: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e9154: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8e9157: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e915a: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e915d: je 0x8e9169 */
  if (zf) goto L_8e9169;
L_8e915f: /* 8e915f: fcom dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8e9162: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9164: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e9167: jp 0x8e9172 */
  if (pf) goto L_8e9172;
L_8e9169: /* 8e9169: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 8e916c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e916f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e9170: jmp 0x8e9110 */
  goto L_8e9110;
L_8e9172: /* 8e9172: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8e9174: /* 8e9174: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e9175: jmp 0x8e9110 */
  goto L_8e9110;
L_8e9177: /* 8e9177: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e917a: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e917d: jle 0x8e91e5 */
  if ((zf || sf != of)) goto L_8e91e5;
L_8e917f: /* 8e917f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9181: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9182: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9183: mov ecx, esi */
  ecx = esi;
/* 8e9185: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8e918bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e918b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8e918e: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e9194: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e9196: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8e9199: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e919a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e919b: mov ecx, esi */
  ecx = esi;
/* 8e919d: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8e91a0: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e91a6: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e91a9: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8e91ab: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8e91ae: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8e91b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e91b4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8e91b7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e91b9: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8e91bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e91bd: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 8e91c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e91c4: mov ecx, esi */
  ecx = esi;
/* 8e91c6: call dword ptr [edx + 0xd8] */
  { uint32_t t = R32((uint32_t)(edx + 0xd8u)); esp -= 4; W32(esp, 0x8e91ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e91cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e91ce: je 0x8e8ff7 */
  if (zf) goto L_8e8ff7;
L_8e91d4: /* 8e91d4: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e91d7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8e91d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e91da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e91db: mov ecx, eax */
  ecx = eax;
/* 8e91dd: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8e91e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e91e0: jmp 0x8e8ff7 */
  goto L_8e8ff7;
L_8e91e5: /* 8e91e5: xor ebx, ebx */
  ebx = 0;
L_8e91e7: /* 8e91e7: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e91ed: fcomp dword ptr [esi + 0xc0] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xc0u)));
  FPOP();
/* 8e91f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e91f5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e91f8: jnp 0x8e9307 */
  if (!pf) goto L_8e9307;
L_8e91fe: /* 8e91fe: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 8e9204: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e920a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e920c: je 0x8e926c */
  if (zf) goto L_8e926c;
L_8e920e: /* 8e920e: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8e9214: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9216: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e9219: jp 0x8e9224 */
  if (pf) goto L_8e9224;
L_8e921b: /* 8e921b: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 8e9222: jmp 0x8e9247 */
  goto L_8e9247;
L_8e9224: /* 8e9224: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e922a: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 8e9230: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8e9233: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e9239: mov dword ptr [esi + 0xbc], ebx */
  W32((uint32_t)(esi + 0xbcu), ebx);
/* 8e923f: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e9242: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8e9244: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_8e9247: /* 8e9247: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8e924a: fcomp dword ptr [esi + 0xc0] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xc0u)));
  FPOP();
/* 8e9250: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9252: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e9255: jp 0x8e9000 */
  if (pf) goto L_8e9000;
L_8e925b: /* 8e925b: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e925e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e9260: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9261: call dword ptr [edx + 0xd4] */
  { uint32_t t = R32((uint32_t)(edx + 0xd4u)); esp -= 4; W32(esp, 0x8e9267u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9267: jmp 0x8e9000 */
  goto L_8e9000;
L_8e926c: /* 8e926c: fsub dword ptr [esi + 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc0u)));
/* 8e9272: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* 8e9278: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e927b: mov dword ptr [esi + 0xb8], ebx */
  W32((uint32_t)(esi + 0xb8u), ebx);
/* 8e9281: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8e9284: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e928a: mov dword ptr [esi + 0xbc], eax */
  W32((uint32_t)(esi + 0xbcu), eax);
/* 8e9290: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e9293: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e9295: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9296: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8e9298: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8e929b: call dword ptr [edx + 0xd4] */
  { uint32_t t = R32((uint32_t)(edx + 0xd4u)); esp -= 4; W32(esp, 0x8e92a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e92a1: jmp 0x8e9000 */
  goto L_8e9000;
L_8e92a6: /* 8e92a6: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8e92a9: fmul dword ptr [esi + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc4u)));
/* 8e92af: fadd dword ptr [esi + 0xbc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xbcu)));
/* 8e92b5: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8e92bb: fst dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0);
/* 8e92c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e92c3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e92c6: jne 0x8e9305 */
  if (!zf) goto L_8e9305;
L_8e92c8: /* 8e92c8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8e92cb: mov dword ptr [esi + 0xbc], ebx */
  W32((uint32_t)(esi + 0xbcu), ebx);
/* 8e92d1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e92d3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e92d5: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e92d8: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8e92da: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8e92dd: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 8e92e3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e92e9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e92eb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e92ee: jp 0x8e9000 */
  if (pf) goto L_8e9000;
L_8e92f4: /* 8e92f4: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e92f7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e92f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e92fa: call dword ptr [eax + 0xd4] */
  { uint32_t t = R32((uint32_t)(eax + 0xd4u)); esp -= 4; W32(esp, 0x8e9300u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9300: jmp 0x8e9000 */
  goto L_8e9000;
L_8e9305: /* 8e9305: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8e9307: /* 8e9307: mov ecx, dword ptr [esi + 0xdc] */
  ecx = R32((uint32_t)(esi + 0xdcu));
/* 8e930d: mov edx, dword ptr [esi + 0xc0] */
  edx = R32((uint32_t)(esi + 0xc0u));
/* 8e9313: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 8e9319: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e931a: mov ecx, dword ptr [esi + 0xbc] */
  ecx = R32((uint32_t)(esi + 0xbcu));
/* 8e9320: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e9321: mov edx, dword ptr [esi + 0xb8] */
  edx = R32((uint32_t)(esi + 0xb8u));
/* 8e9327: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e9328: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8e932e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e932f: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e9332: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e9333: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e9334: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9335: call 0x6c21c1 */
  esp -= 4; W32(esp, 0x8e933au); SPILL(); f_6c21c1(); if (g_unwind) return; RELOAD();
/* 8e933a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e933c: mov ecx, esi */
  ecx = esi;
/* 8e933e: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8e9344u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9344: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9346: mov ecx, esi */
  ecx = esi;
/* 8e9348: je 0x8e9353 */
  if (zf) goto L_8e9353;
L_8e934a: /* 8e934a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e934c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8e934e: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8e9351u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9351: jmp 0x8e935c */
  goto L_8e935c;
L_8e9353: /* 8e9353: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9355: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9356: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8e935cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8e935c: /* 8e935c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e935f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e9360: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e9361: mov eax, 1 */
  eax = 0x1u;
/* 8e9366: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e936d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e936e: mov esp, ebp */
  esp = ebp;
/* 8e9370: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e9371: ret 4 */
  esp += 8; SPILL(); return;
}
