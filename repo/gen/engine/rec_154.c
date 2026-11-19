#include "recomp.h"
#include "rec_mod.h"

void f_99c350(void) {
  LOAD_REGS();
L_99c350: /* 99c350: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99c353: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c354: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 99c358: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c359: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 99c35d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c35e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 99c362: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c363: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 99c367: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c368: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 99c36c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c36d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 99c371: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c372: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 99c376: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c377: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 99c37f: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 99c387: call 0x99bb30 */
  esp -= 4; W32(esp, 0x99c38cu); SPILL(); f_99bb30(); if (g_unwind) return; RELOAD();
/* 99c38c: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 99c390: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 99c394: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 99c398: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c399: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 99c39d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c39e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99c3a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c3a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c3a4: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 99c3a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c3a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c3aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c3ab: call 0x99bda0 */
  esp -= 4; W32(esp, 0x99c3b0u); SPILL(); f_99bda0(); if (g_unwind) return; RELOAD();
/* 99c3b0: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c3b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c3b4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c3b7: ret  */
  esp += 4; SPILL(); return;
}

void f_99c3c0(void) {
  LOAD_REGS();
L_99c3c0: /* 99c3c0: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99c3c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99c3c4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99c3c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c3c6: mov esi, dword ptr [esp + 0x64] */
  esi = R32((uint32_t)(esp + 0x64u));
/* 99c3ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99c3cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c3cc: call dword ptr [esp + 0x78] */
  { uint32_t t = R32((uint32_t)(esp + 0x78u)); esp -= 4; W32(esp, 0x99c3d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c3d0: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 99c3d4: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 99c3d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c3d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c3da: call dword ptr [esp + 0x84] */
  { uint32_t t = R32((uint32_t)(esp + 0x84u)); esp -= 4; W32(esp, 0x99c3e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c3e1: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 99c3e5: lea ecx, [esp + edx*4 + 0x2c] */
  ecx = (uint32_t)(esp + edx*4 + 0x2cu);
/* 99c3e9: lea esi, [esp + 0x2c] */
  esi = (uint32_t)(esp + 0x2cu);
/* 99c3ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c3f0: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c3f2: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 99c3f6: jae 0x99c406 */
  if (!cf) goto L_99c406;
L_99c3f8: /* 99c3f8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 99c3fa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c3fd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c3ff: fchs  */
  ST0 = -ST0;
/* 99c401: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 99c404: jb 0x99c3f8 */
  if (cf) goto L_99c3f8;
L_99c406: /* 99c406: lea ebx, [esp + edx*4 + 0x30] */
  ebx = (uint32_t)(esp + edx*4 + 0x30u);
/* 99c40a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 99c40e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c410: jae 0x99c43b */
  if (!cf) goto L_99c43b;
L_99c412: /* 99c412: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 99c416: mov ecx, ebx */
  ecx = ebx;
/* 99c418: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99c41a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99c41b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 99c41e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99c41f: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* 99c423: lea edi, [esp + 0x30] */
  edi = (uint32_t)(esp + 0x30u);
/* 99c427: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 99c429: xor eax, eax */
  eax = 0;
/* 99c42b: nop  */
/* 99c42c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_99c430: /* 99c430: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c433: lea ecx, [esp + eax + 0x30] */
  ecx = (uint32_t)(esp + eax + 0x30u);
/* 99c437: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c439: jb 0x99c430 */
  if (cf) goto L_99c430;
L_99c43b: /* 99c43b: lea ebp, [esp + edx*4 + 0x40] */
  ebp = (uint32_t)(esp + edx*4 + 0x40u);
/* 99c43f: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 99c443: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c445: jae 0x99c46b */
  if (!cf) goto L_99c46b;
L_99c447: /* 99c447: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 99c44b: mov ecx, ebp */
  ecx = ebp;
/* 99c44d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99c44f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99c450: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 99c453: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99c454: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* 99c458: lea edi, [esp + 0x40] */
  edi = (uint32_t)(esp + 0x40u);
/* 99c45c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 99c45e: xor eax, eax */
  eax = 0;
L_99c460: /* 99c460: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c463: lea ecx, [esp + eax + 0x40] */
  ecx = (uint32_t)(esp + eax + 0x40u);
/* 99c467: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c469: jb 0x99c460 */
  if (cf) goto L_99c460;
L_99c46b: /* 99c46b: mov dword ptr [esp + 0x18], 0x64 */
  W32((uint32_t)(esp + 0x18u), 0x64u);
/* 99c473: jmp 0x99c480 */
  goto L_99c480;
L_99c475: /* 99c475: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 99c479: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_99c480: /* 99c480: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 99c484: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 99c488: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 99c48c: mov esi, dword ptr [esp + 0x68] */
  esi = R32((uint32_t)(esp + 0x68u));
/* 99c490: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 99c491: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 99c495: mov edi, dword ptr [esp + 0x78] */
  edi = R32((uint32_t)(esp + 0x78u));
/* 99c499: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99c49a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c49b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c49c: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 99c4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c4a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c4a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c4a3: call 0x99c250 */
  esp -= 4; W32(esp, 0x99c4a8u); SPILL(); f_99c250(); if (g_unwind) return; RELOAD();
/* 99c4a8: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 99c4ac: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 99c4b0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c4b3: fabs  */
  ST0 = fabs(ST0);
/* 99c4b5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99c4b7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99c4bb: fabs  */
  ST0 = fabs(ST0);
/* 99c4bd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99c4bf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99c4c3: fabs  */
  ST0 = fabs(ST0);
/* 99c4c5: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 99c4c9: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99c4cb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99c4cd: fadd dword ptr [0xa21bd4] */
  ST0 = ST0 + (F32((uint32_t)(0xa21bd4u)));
/* 99c4d3: fmul dword ptr [esp + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x70u)));
/* 99c4d7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99c4d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c4db: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99c4de: je 0x99c625 */
  if (zf) goto L_99c625;
L_99c4e4: /* 99c4e4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 99c4ea: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 99c4ee: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c4f0: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 99c4f4: jae 0x99c623 */
  if (!cf) goto L_99c623;
L_99c4fa: /* 99c4fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_99c500: /* 99c500: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 99c502: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c505: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c507: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99c509: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99c50b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99c50d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99c50f: jb 0x99c500 */
  if (cf) goto L_99c500;
L_99c511: /* 99c511: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 99c515: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99c51b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c51d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99c520: jnp 0x99c625 */
  if (!pf) goto L_99c625;
L_99c526: /* 99c526: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c527: call dword ptr [esp + 0x78] */
  { uint32_t t = R32((uint32_t)(esp + 0x78u)); esp -= 4; W32(esp, 0x99c52bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c52b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 99c52f: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 99c533: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c534: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c535: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x99c537u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c537: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 99c53b: lea ecx, [esp + edx*4 + 0x5c] */
  ecx = (uint32_t)(esp + edx*4 + 0x5cu);
/* 99c53f: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 99c543: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c546: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c548: jae 0x99c567 */
  if (!cf) goto L_99c567;
L_99c54a: /* 99c54a: xor eax, eax */
  eax = 0;
/* 99c54c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_99c550: /* 99c550: fld dword ptr [esp + eax + 0x30] */
  { double v = F32((uint32_t)(esp + eax + 0x30u)); FPUSH(v); }
/* 99c554: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c557: fadd dword ptr [esp + eax + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax + 0x1cu)));
/* 99c55b: lea esi, [esp + eax + 0x50] */
  esi = (uint32_t)(esp + eax + 0x50u);
/* 99c55f: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c561: fstp dword ptr [esp + eax + 0x4c] */
  WF32((uint32_t)(esp + eax + 0x4cu), ST0); FPOP();
/* 99c565: jb 0x99c550 */
  if (cf) goto L_99c550;
L_99c567: /* 99c567: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 99c56d: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 99c571: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c573: jae 0x99c58c */
  if (!cf) goto L_99c58c;
L_99c575: /* 99c575: xor eax, eax */
  eax = 0;
L_99c577: /* 99c577: fld dword ptr [esp + eax + 0x50] */
  { double v = F32((uint32_t)(esp + eax + 0x50u)); FPUSH(v); }
/* 99c57b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c57e: fmul dword ptr [esp + eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax + 0x1cu)));
/* 99c582: lea esi, [esp + eax + 0x50] */
  esi = (uint32_t)(esp + eax + 0x50u);
/* 99c586: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c588: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99c58a: jb 0x99c577 */
  if (cf) goto L_99c577;
L_99c58c: /* 99c58c: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 99c590: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c592: jae 0x99c5ab */
  if (!cf) goto L_99c5ab;
L_99c594: /* 99c594: xor eax, eax */
  eax = 0;
L_99c596: /* 99c596: fld dword ptr [esp + eax + 0x20] */
  { double v = F32((uint32_t)(esp + eax + 0x20u)); FPUSH(v); }
/* 99c59a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c59d: fchs  */
  ST0 = -ST0;
/* 99c59f: lea ecx, [esp + eax + 0x30] */
  ecx = (uint32_t)(esp + eax + 0x30u);
/* 99c5a3: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c5a5: fstp dword ptr [esp + eax + 0x2c] */
  WF32((uint32_t)(esp + eax + 0x2cu), ST0); FPOP();
/* 99c5a9: jb 0x99c596 */
  if (cf) goto L_99c596;
L_99c5ab: /* 99c5ab: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 99c5af: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c5b1: jae 0x99c5d9 */
  if (!cf) goto L_99c5d9;
L_99c5b3: /* 99c5b3: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 99c5b7: xor eax, eax */
  eax = 0;
/* 99c5b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_99c5c0: /* 99c5c0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99c5c2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c5c5: fmul dword ptr [esp + eax + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax + 0x3cu)));
/* 99c5c9: lea ecx, [esp + eax + 0x40] */
  ecx = (uint32_t)(esp + eax + 0x40u);
/* 99c5cd: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c5cf: fadd dword ptr [esp + eax + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax + 0x2cu)));
/* 99c5d3: fstp dword ptr [esp + eax + 0x3c] */
  WF32((uint32_t)(esp + eax + 0x3cu), ST0); FPOP();
/* 99c5d7: jb 0x99c5c0 */
  if (cf) goto L_99c5c0;
L_99c5d9: /* 99c5d9: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 99c5dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99c5df: lea edx, [esp + edx*4 + 0x20] */
  edx = (uint32_t)(esp + edx*4 + 0x20u);
/* 99c5e3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c5e5: jae 0x99c60b */
  if (!cf) goto L_99c60b;
L_99c5e7: /* 99c5e7: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 99c5eb: mov ecx, edx */
  ecx = edx;
/* 99c5ed: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99c5ef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99c5f0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 99c5f3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99c5f4: lea esi, [esp + 0x40] */
  esi = (uint32_t)(esp + 0x40u);
/* 99c5f8: lea edi, [esp + 0x20] */
  edi = (uint32_t)(esp + 0x20u);
/* 99c5fc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 99c5fe: xor eax, eax */
  eax = 0;
L_99c600: /* 99c600: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c603: lea ecx, [esp + eax + 0x20] */
  ecx = (uint32_t)(esp + eax + 0x20u);
/* 99c607: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c609: jb 0x99c600 */
  if (cf) goto L_99c600;
L_99c60b: /* 99c60b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99c60f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99c611: jg 0x99c475 */
  if ((!zf && sf == of)) goto L_99c475;
L_99c617: /* 99c617: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99c61b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c61c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c61d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99c61e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99c61f: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c622: ret  */
  esp += 4; SPILL(); return;
L_99c623: /* 99c623: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99c625: /* 99c625: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99c629: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c62a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c62b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99c62c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99c62d: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c630: ret  */
  esp += 4; SPILL(); return;
}

void f_99c640(void) {
  LOAD_REGS();
L_99c640: /* 99c640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c641: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 99c643: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x99c649u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c649: mov esi, eax */
  esi = eax;
/* 99c64b: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 99c64d: mov dword ptr [esi + 0xc], 0x20 */
  W32((uint32_t)(esi + 0xcu), 0x20u);
/* 99c654: call 0x99c680 */
  esp -= 4; W32(esp, 0x99c659u); SPILL(); f_99c680(); if (g_unwind) return; RELOAD();
/* 99c659: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c65a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 99c65d: call 0x99c6a0 */
  esp -= 4; W32(esp, 0x99c662u); SPILL(); f_99c6a0(); if (g_unwind) return; RELOAD();
/* 99c662: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c665: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c666: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x99c66cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c66c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 99c66e: xor eax, eax */
  eax = 0;
/* 99c670: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 99c673: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 99c676: mov eax, esi */
  eax = esi;
/* 99c678: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c679: ret  */
  esp += 4; SPILL(); return;
}

void f_99c680(void) {
  LOAD_REGS();
L_99c680: /* 99c680: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99c684: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99c687: jge 0x99c68f */
  if ((sf == of)) goto L_99c68f;
L_99c689: /* 99c689: mov eax, 1 */
  eax = 0x1u;
/* 99c68e: ret  */
  esp += 4; SPILL(); return;
L_99c68f: /* 99c68f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99c690: mov ecx, 0x20 */
  ecx = 0x20u;
/* 99c695: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x99c695);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 99c697: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c699: ret  */
  esp += 4; SPILL(); return;
}

void f_99c6a0(void) {
  LOAD_REGS();
L_99c6a0: /* 99c6a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99c6a4: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99c6a7: ret  */
  esp += 4; SPILL(); return;
}

void f_99c6b0(void) {
  LOAD_REGS();
L_99c6b0: /* 99c6b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99c6b1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 99c6b5: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 99c6b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c6b9: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 99c6bd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 99c6c0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 99c6c3: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 99c6c6: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 99c6c9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 99c6cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99c6cc: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 99c6cf: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 99c6d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c6d3: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 99c6d6: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x99c6dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c6dc: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 99c6df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c6e0: call 0x99c6a0 */
  esp -= 4; W32(esp, 0x99c6e5u); SPILL(); f_99c6a0(); if (g_unwind) return; RELOAD();
/* 99c6e5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c6e9: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x99c6efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c6ef: mov edi, eax */
  edi = eax;
/* 99c6f1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 99c6f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c6f5: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 99c6f7: call 0x99c6a0 */
  esp -= 4; W32(esp, 0x99c6fcu); SPILL(); f_99c6a0(); if (g_unwind) return; RELOAD();
/* 99c6fc: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 99c6fe: mov ecx, eax */
  ecx = eax;
/* 99c700: mov edx, ecx */
  edx = ecx;
/* 99c702: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 99c705: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 99c707: mov ecx, edx */
  ecx = edx;
/* 99c709: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c70c: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 99c70f: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 99c711: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c712: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c713: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99c714: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99c720(void) {
  LOAD_REGS();
L_99c720: /* 99c720: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 99c724: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 99c727: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c728: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 99c72a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99c72b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c72c: mov edi, 1 */
  edi = 0x1u;
/* 99c731: xor ecx, ecx */
  ecx = 0;
/* 99c733: call 0x99c6a0 */
  esp -= 4; W32(esp, 0x99c738u); SPILL(); f_99c6a0(); if (g_unwind) return; RELOAD();
/* 99c738: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c73b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99c73d: jle 0x99c74d */
  if ((zf || sf != of)) goto L_99c74d;
L_99c73f: /* 99c73f: nop  */
L_99c740: /* 99c740: cmp byte ptr [esi + ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 99c744: je 0x99c748 */
  if (zf) goto L_99c748;
L_99c746: /* 99c746: xor edi, edi */
  edi = 0;
L_99c748: /* 99c748: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99c749: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99c74b: jl 0x99c740 */
  if ((sf != of)) goto L_99c740;
L_99c74d: /* 99c74d: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 99c750: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99c752: jne 0x99c762 */
  if (!zf) goto L_99c762;
L_99c754: /* 99c754: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99c756: je 0x99c762 */
  if (zf) goto L_99c762;
L_99c758: /* 99c758: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c759: mov eax, 1 */
  eax = 0x1u;
/* 99c75e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c75f: ret 4 */
  esp += 8; SPILL(); return;
L_99c762: /* 99c762: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c763: xor eax, eax */
  eax = 0;
/* 99c765: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c766: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99c770(void) {
  LOAD_REGS();
L_99c770: /* 99c770: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c771: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99c772: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99c773: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c774: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 99c778: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 99c77b: cmp dword ptr [esi + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99c77e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99c77f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 99c787: jne 0x99c7ee */
  if (!zf) goto L_99c7ee;
L_99c789: /* 99c789: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 99c78c: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c78f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c790: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 99c793: call 0x99c680 */
  esp -= 4; W32(esp, 0x99c798u); SPILL(); f_99c680(); if (g_unwind) return; RELOAD();
/* 99c798: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c79b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 99c79d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 99c7a0: jbe 0x99c7ee */
  if ((cf | zf)) goto L_99c7ee;
L_99c7a2: /* 99c7a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c7a3: call 0x99c6a0 */
  esp -= 4; W32(esp, 0x99c7a8u); SPILL(); f_99c6a0(); if (g_unwind) return; RELOAD();
/* 99c7a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c7ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c7ac: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 99c7ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c7af: call dword ptr [0xb021ac] */
  { uint32_t t = R32((uint32_t)(0xb021acu)); esp -= 4; W32(esp, 0x99c7b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c7b5: mov edi, eax */
  edi = eax;
/* 99c7b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 99c7b9: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 99c7bb: call 0x99c6a0 */
  esp -= 4; W32(esp, 0x99c7c0u); SPILL(); f_99c6a0(); if (g_unwind) return; RELOAD();
/* 99c7c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99c7c1: mov ecx, eax */
  ecx = eax;
/* 99c7c3: call 0x99c6a0 */
  esp -= 4; W32(esp, 0x99c7c8u); SPILL(); f_99c6a0(); if (g_unwind) return; RELOAD();
/* 99c7c8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99c7c9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 99c7cc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c7ce: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99c7d1: mov edx, ecx */
  edx = ecx;
/* 99c7d3: lea edi, [edi + eax*4] */
  edi = (uint32_t)(edi + eax*4);
/* 99c7d6: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 99c7d9: xor eax, eax */
  eax = 0;
/* 99c7db: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 99c7dd: mov ecx, edx */
  ecx = edx;
/* 99c7df: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 99c7e2: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 99c7e4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 99c7e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c7ea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99c7eb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_99c7ee: /* 99c7ee: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
L_99c7f0: /* 99c7f0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 99c7f3: mov eax, edx */
  eax = edx;
/* 99c7f5: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99c7f8: mov edi, 0x80000000 */
  edi = 0x80000000u;
/* 99c7fd: xor ecx, ecx */
  ecx = 0;
/* 99c7ff: nop  */
L_99c800: /* 99c800: cmp eax, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c803: jae 0x99c813 */
  if (!cf) goto L_99c813;
L_99c805: /* 99c805: test dword ptr [ebx + edx*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + edx*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99c808: je 0x99c84b */
  if (zf) goto L_99c84b;
L_99c80a: /* 99c80a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99c80b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99c80c: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 99c80e: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c811: jb 0x99c800 */
  if (cf) goto L_99c800;
L_99c813: /* 99c813: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 99c817: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99c819: je 0x99c820 */
  if (zf) goto L_99c820;
L_99c81b: /* 99c81b: cmp ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99c81e: jne 0x99c826 */
  if (!zf) goto L_99c826;
L_99c820: /* 99c820: lea ecx, [edx + 1] */
  ecx = (uint32_t)(edx + 0x1u);
/* 99c823: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
L_99c826: /* 99c826: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 99c829: cmp dword ptr [esi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c82c: jb 0x99c835 */
  if (cf) goto L_99c835;
L_99c82e: /* 99c82e: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_99c835: /* 99c835: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99c837: je 0x99c7f0 */
  if (zf) goto L_99c7f0;
L_99c839: /* 99c839: or dword ptr [ebx + edx*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + edx*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx + edx*4), r);
  }
/* 99c83c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 99c83f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c840: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99c841: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 99c844: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c845: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99c846: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99c847: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99c848: ret 4 */
  esp += 8; SPILL(); return;
L_99c84b: /* 99c84b: mov ebp, 1 */
  ebp = 0x1u;
/* 99c850: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 99c854: jmp 0x99c81b */
  goto L_99c81b;
}

void f_99c860(void) {
  LOAD_REGS();
L_99c860: /* 99c860: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99c864: mov ecx, eax */
  ecx = eax;
/* 99c866: and ecx, 0x8000001f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000001fu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 99c86c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c86d: jns 0x99c874 */
  if (!sf) goto L_99c874;
L_99c86f: /* 99c86f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99c870: or ecx, 0xffffffe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 99c873: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_99c874: /* 99c874: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99c875: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 99c878: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 99c87a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 99c87e: mov esi, 0x80000000 */
  esi = 0x80000000u;
/* 99c883: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 99c885: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 99c887: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99c88a: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 99c88d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 99c88f: test esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99c891: je 0x99c89c */
  if (zf) goto L_99c89c;
L_99c893: /* 99c893: not esi */
  esi = ~esi;
/* 99c895: and esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 99c897: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 99c899: dec dword ptr [edx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edx + 0x10u), r);
  }
L_99c89c: /* 99c89c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c89d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99c8a0(void) {
  LOAD_REGS();
L_99c8a0: /* 99c8a0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 99c8a4: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 99c8a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c8a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99c8a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c8aa: call 0x99c6a0 */
  esp -= 4; W32(esp, 0x99c8afu); SPILL(); f_99c6a0(); if (g_unwind) return; RELOAD();
/* 99c8af: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 99c8b1: mov ecx, eax */
  ecx = eax;
/* 99c8b3: mov esi, ecx */
  esi = ecx;
/* 99c8b5: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 99c8b8: xor eax, eax */
  eax = 0;
/* 99c8ba: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 99c8bc: mov ecx, esi */
  ecx = esi;
/* 99c8be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c8c1: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 99c8c4: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 99c8c6: xor eax, eax */
  eax = 0;
/* 99c8c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c8c9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 99c8cc: mov dword ptr [edx + 0x10], eax */
  W32((uint32_t)(edx + 0x10u), eax);
/* 99c8cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c8d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99c8e0(void) {
  LOAD_REGS();
L_99c8e0: /* 99c8e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c8e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 99c8e5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 99c8e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c8e8: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x99c8eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c8ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c8ef: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x99c8f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c8f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c8f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99c900(void) {
  LOAD_REGS();
L_99c900: /* 99c900: jmp dword ptr [0xcfb044] */
  SPILL(); f_4276f0(); return; /* MSVCR70!_purecall */
}

void f_99c910(void) {
  LOAD_REGS();
L_99c910: /* 99c910: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99c914: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99c918: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 99c91a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 99c91e: jne 0x99c929 */
  if (!zf) goto L_99c929;
L_99c920: /* 99c920: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99c924: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 99c926: ret 0x10 */
  esp += 20; SPILL(); return;
L_99c929: /* 99c929: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99c92a: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 99c92c: mov ebx, eax */
  ebx = eax;
/* 99c92e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99c932: mul dword ptr [esp + 0x14] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x14u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 99c936: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99c938: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99c93c: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 99c93e: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99c940: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99c941: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99c958(void) {
  LOAD_REGS();
L_99c958: /* 99c958: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99c959: mov ebp, esp */
  ebp = esp;
/* 99c95b: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99c95e: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 99c961: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99c963: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 99c967: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* 99c96b: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99c96f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99c973: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99c977: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99c979: je 0x99c9b7 */
  if (zf) goto L_99c9b7;
L_99c97b: /* 99c97b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99c97d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 99c97f: jns 0x99c99f */
  if (!sf) goto L_99c99f;
L_99c981: /* 99c981: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 99c984: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 99c987: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 99c98d: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 99c993: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* 99c996: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99c99a: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 99c99d: jmp 0x99c9cb */
  goto L_99c9cb;
L_99c99f: /* 99c99f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 99c9a2: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 99c9a5: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 99c9ab: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 99c9ae: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99c9b2: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 99c9b5: jmp 0x99c9cb */
  goto L_99c9cb;
L_99c9b7: /* 99c9b7: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99c9bb: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99c9c1: jne 0x99c97b */
  if (!zf) goto L_99c97b;
L_99c9c3: /* 99c9c3: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 99c9c7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_99c9cb: /* 99c9cb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 99c9cc: ret  */
  esp += 4; SPILL(); return;
}

void f_99c9cd(void) {
  LOAD_REGS();
L_99c9cd: /* 99c9cd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99c9cf: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99c9d5: je 0x99c9da */
  if (zf) goto L_99c9da;
L_99c9d7: /* 99c9d7: xor eax, eax */
  eax = 0;
/* 99c9d9: ret  */
  esp += 4; SPILL(); return;
L_99c9da: /* 99c9da: jmp 0x99d040 */
  SPILL(); f_99d040(); return;
}

void f_99c9df(void) {
  LOAD_REGS();
L_99c9df: /* 99c9df: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 99c9e1: push 0xa21be8 */
  { uint32_t v = 0xa21be8u; esp -= 4; W32(esp, v); }
/* 99c9e6: call 0x99d048 */
  esp -= 4; W32(esp, 0x99c9ebu); SPILL(); f_99d048(); if (g_unwind) return; RELOAD();
/* 99c9eb: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_99c9ef: /* 99c9ef: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 99c9f2: js 0x99ca02 */
  if (sf) goto L_99ca02;
L_99c9f4: /* 99c9f4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 99c9f7: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99c9fa: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 99c9fd: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x99ca00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ca00: jmp 0x99c9ef */
  goto L_99c9ef;
L_99ca02: /* 99ca02: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99ca06: call 0x99d083 */
  esp -= 4; W32(esp, 0x99ca0bu); SPILL(); f_99d083(); if (g_unwind) return; RELOAD();
/* 99ca0b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99ca0e(void) {
  LOAD_REGS();
L_99ca0e: /* 99ca0e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 99ca11: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 99ca14: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 99ca17: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99ca19: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 99ca1c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 99ca1f: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ca25: je 0x99ca37 */
  if (zf) goto L_99ca37;
L_99ca27: /* 99ca27: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 99ca2e: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 99ca31: ret  */
  esp += 4; SPILL(); return;
L_99ca37: /* 99ca37: call 0x99d040 */
  esp -= 4; W32(esp, 0x99ca3cu); SPILL(); f_99d040(); if (g_unwind) return; RELOAD();
L_99ca3c: guest_badaddr(0x99ca3c); return;
}

void f_99ca32(void) {
  LOAD_REGS();
  goto L_99ca32;
L_99ca02: /* 99ca02: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99ca06: call 0x99d083 */
  esp -= 4; W32(esp, 0x99ca0bu); SPILL(); f_99d083(); if (g_unwind) return; RELOAD();
/* 99ca0b: ret 0x10 */
  esp += 20; SPILL(); return;
L_99ca32: /* 99ca32: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 99ca35: jmp 0x99ca02 */
  goto L_99ca02;
}

void f_99ca3d(void) {
  LOAD_REGS();
L_99ca3d: /* 99ca3d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 99ca3f: push 0xa21bf8 */
  { uint32_t v = 0xa21bf8u; esp -= 4; W32(esp, v); }
/* 99ca44: call 0x99d048 */
  esp -= 4; W32(esp, 0x99ca49u); SPILL(); f_99d048(); if (g_unwind) return; RELOAD();
/* 99ca49: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 99ca4d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 99ca50: mov eax, esi */
  eax = esi;
/* 99ca52: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 99ca56: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 99ca59: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_99ca5d: /* 99ca5d: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 99ca60: js 0x99ca6d */
  if (sf) goto L_99ca6d;
L_99ca62: /* 99ca62: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 99ca65: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 99ca68: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x99ca6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ca6b: jmp 0x99ca5d */
  goto L_99ca5d;
L_99ca6d: /* 99ca6d: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 99ca74: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99ca78: call 0x99ca85 */
  esp -= 4; W32(esp, 0x99ca7du); SPILL(); f_99ca85(); if (g_unwind) return; RELOAD();
/* 99ca7d: call 0x99d083 */
  esp -= 4; W32(esp, 0x99ca82u); SPILL(); f_99d083(); if (g_unwind) return; RELOAD();
/* 99ca82: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99ca85(void) {
  LOAD_REGS();
L_99ca85: /* 99ca85: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ca89: jne 0x99ca9c */
  if (!zf) goto L_99ca9c;
L_99ca8b: /* 99ca8b: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 99ca8e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 99ca91: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 99ca94: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 99ca97: call 0x99c9df */
  esp -= 4; W32(esp, 0x99ca9cu); SPILL(); f_99c9df(); if (g_unwind) return; RELOAD();
L_99ca9c: /* 99ca9c: ret  */
  esp += 4; SPILL(); return;
}

void f_99ca9d(void) {
  LOAD_REGS();
L_99ca9d: /* 99ca9d: mov eax, ecx */
  eax = ecx;
/* 99ca9f: mov dword ptr [eax], 0xa21c08 */
  W32((uint32_t)(eax), 0xa21c08u);
/* 99caa5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99caa8(void) {
  LOAD_REGS();
L_99caa8: /* 99caa8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99caa9: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 99caad: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99cab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99cab1: mov esi, ecx */
  esi = ecx;
/* 99cab3: je 0x99cad9 */
  if (zf) goto L_99cad9;
L_99cab5: /* 99cab5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99cab6: push 0x99d094 */
  { uint32_t v = 0x99d094u; esp -= 4; W32(esp, v); }
/* 99cabb: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 99cabe: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 99cac0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 99cac2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99cac3: call 0x99ca3d */
  esp -= 4; W32(esp, 0x99cac8u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 99cac8: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99cacb: je 0x99cad4 */
  if (zf) goto L_99cad4;
L_99cacd: /* 99cacd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99cace: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x99cad3u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 99cad3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_99cad4: /* 99cad4: mov eax, edi */
  eax = edi;
/* 99cad6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99cad7: jmp 0x99caee */
  goto L_99caee;
L_99cad9: /* 99cad9: mov ecx, esi */
  ecx = esi;
/* 99cadb: call 0x99d094 */
  esp -= 4; W32(esp, 0x99cae0u); SPILL(); f_99d094(); if (g_unwind) return; RELOAD();
/* 99cae0: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99cae3: je 0x99caec */
  if (zf) goto L_99caec;
L_99cae5: /* 99cae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99cae6: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x99caebu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 99caeb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_99caec: /* 99caec: mov eax, esi */
  eax = esi;
L_99caee: /* 99caee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99caef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99caf0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99caf3(void) {
  LOAD_REGS();
L_99caf3: /* 99caf3: mov eax, ecx */
  eax = ecx;
/* 99caf5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99caf8(void) {
  LOAD_REGS();
L_99caf8: /* 99caf8: jmp dword ptr [0xcfb04c] */
  SPILL(); f_41b9d1(); return; /* MSVCR70!_CxxThrowException */
}

void f_99cafe(void) {
  LOAD_REGS();
L_99cafe: /* 99cafe: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 99cb00: push 0xa21c10 */
  { uint32_t v = 0xa21c10u; esp -= 4; W32(esp, v); }
/* 99cb05: call 0x99d048 */
  esp -= 4; W32(esp, 0x99cb0au); SPILL(); f_99d048(); if (g_unwind) return; RELOAD();
/* 99cb0a: xor eax, eax */
  eax = 0;
/* 99cb0c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 99cb0f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 99cb12: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_99cb15: /* 99cb15: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 99cb18: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99cb1b: jge 0x99cb30 */
  if ((sf == of)) goto L_99cb30;
L_99cb1d: /* 99cb1d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 99cb20: mov ecx, esi */
  ecx = esi;
/* 99cb22: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x99cb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99cb25: add esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99cb28: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 99cb2b: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 99cb2e: jmp 0x99cb15 */
  goto L_99cb15;
L_99cb30: /* 99cb30: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 99cb37: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99cb3b: call 0x99cb48 */
  esp -= 4; W32(esp, 0x99cb40u); SPILL(); f_99cb48(); if (g_unwind) return; RELOAD();
/* 99cb40: call 0x99d083 */
  esp -= 4; W32(esp, 0x99cb45u); SPILL(); f_99d083(); if (g_unwind) return; RELOAD();
/* 99cb45: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_99cb48(void) {
  LOAD_REGS();
L_99cb48: /* 99cb48: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99cb4c: jne 0x99cb5f */
  if (!zf) goto L_99cb5f;
L_99cb4e: /* 99cb4e: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 99cb51: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 99cb54: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 99cb57: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 99cb5a: call 0x99c9df */
  esp -= 4; W32(esp, 0x99cb5fu); SPILL(); f_99c9df(); if (g_unwind) return; RELOAD();
L_99cb5f: /* 99cb5f: ret  */
  esp += 4; SPILL(); return;
}

void f_99cb60(void) {
  LOAD_REGS();
L_99cb60: /* 99cb60: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 99cb62: push 0xa21c20 */
  { uint32_t v = 0xa21c20u; esp -= 4; W32(esp, v); }
/* 99cb67: call 0x99d048 */
  esp -= 4; W32(esp, 0x99cb6cu); SPILL(); f_99d048(); if (g_unwind) return; RELOAD();
/* 99cb6c: xor eax, eax */
  eax = 0;
/* 99cb6e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 99cb71: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 99cb74: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_99cb77: /* 99cb77: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 99cb7a: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99cb7d: jge 0x99cb96 */
  if ((sf == of)) goto L_99cb96;
L_99cb7f: /* 99cb7f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 99cb82: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 99cb85: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0x99cb88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99cb88: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 99cb8b: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 99cb8e: add dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 99cb91: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 99cb94: jmp 0x99cb77 */
  goto L_99cb77;
L_99cb96: /* 99cb96: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 99cb9d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99cba1: call 0x99cbae */
  esp -= 4; W32(esp, 0x99cba6u); SPILL(); f_99cbae(); if (g_unwind) return; RELOAD();
/* 99cba6: call 0x99d083 */
  esp -= 4; W32(esp, 0x99cbabu); SPILL(); f_99d083(); if (g_unwind) return; RELOAD();
/* 99cbab: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_99cbae(void) {
  LOAD_REGS();
L_99cbae: /* 99cbae: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99cbb2: jne 0x99cbc5 */
  if (!zf) goto L_99cbc5;
L_99cbb4: /* 99cbb4: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 99cbb7: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 99cbba: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 99cbbd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 99cbc0: call 0x99c9df */
  esp -= 4; W32(esp, 0x99cbc5u); SPILL(); f_99c9df(); if (g_unwind) return; RELOAD();
L_99cbc5: /* 99cbc5: ret  */
  esp += 4; SPILL(); return;
}

void f_99cbc6(void) {
  LOAD_REGS();
L_99cbc6: /* 99cbc6: cmp dword ptr [0xcf8e6c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8e6cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99cbcd: jne 0x99cbd5 */
  if (!zf) goto L_99cbd5;
L_99cbcf: /* 99cbcf: jmp dword ptr [0xcfb14c] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_99cbd5: /* 99cbd5: push 0xcf8e5c */
  { uint32_t v = 0xcf8e5cu; esp -= 4; W32(esp, v); }
/* 99cbda: push 0xcf8e6c */
  { uint32_t v = 0xcf8e6cu; esp -= 4; W32(esp, v); }
/* 99cbdf: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 99cbe3: call 0x99d09a */
  esp -= 4; W32(esp, 0x99cbe8u); SPILL(); f_99d09a(); if (g_unwind) return; RELOAD();
/* 99cbe8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99cbeb: ret  */
  esp += 4; SPILL(); return;
}

void f_99cbec(void) {
  LOAD_REGS();
L_99cbec: /* 99cbec: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 99cbf0: call 0x99cbc6 */
  esp -= 4; W32(esp, 0x99cbf5u); SPILL(); f_99cbc6(); if (g_unwind) return; RELOAD();
/* 99cbf5: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 99cbf7: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 99cbf9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 99cbfb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99cbfc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 99cbfd: ret  */
  esp += 4; SPILL(); return;
}

void f_99cc00(void) {
  LOAD_REGS();
L_99cc00: /* 99cc00: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99cc05: jae 0x99cc15 */
  if (!cf) goto L_99cc15;
L_99cc07: /* 99cc07: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 99cc09: add eax, esp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99cc0b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99cc0e: test dword ptr [eax], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 99cc10: xchg esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  esp = b;
  eax = a;
  }
/* 99cc11: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99cc13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99cc14: ret  */
  esp += 4; SPILL(); return;
L_99cc15: /* 99cc15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99cc16: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
L_99cc1a: /* 99cc1a: sub ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99cc20: sub eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99cc25: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 99cc27: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99cc2c: jae 0x99cc1a */
  if (!cf) goto L_99cc1a;
L_99cc2e: /* 99cc2e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99cc30: mov eax, esp */
  eax = esp;
/* 99cc32: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 99cc34: mov esp, ecx */
  esp = ecx;
/* 99cc36: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 99cc38: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 99cc3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99cc3c: ret  */
  esp += 4; SPILL(); return;
}

void f_99cc3e(void) {
  LOAD_REGS();
L_99cc3e: /* 99cc3e: jmp dword ptr [0xcfb050] */
  SPILL(); f_417e01(); return; /* MSVCR70!wcstombs */
}

void f_99cc44(void) {
  LOAD_REGS();
L_99cc44: /* 99cc44: jmp dword ptr [0xcfb054] */
  SPILL(); f_403ced(); return; /* MSVCR70!swprintf */
}

void f_99cc4a(void) {
  LOAD_REGS();
L_99cc4a: /* 99cc4a: jmp dword ptr [0xcfb058] */
  SPILL(); f_42b977(); return; /* MSVCR70!vsprintf */
}

void f_99cc50(void) {
  LOAD_REGS();
L_99cc50: /* 99cc50: jmp dword ptr [0xcfb05c] */
  SPILL(); f_4053f1(); return; /* MSVCR70!strncpy */
}

void f_99cc56(void) {
  LOAD_REGS();
L_99cc56: /* 99cc56: jmp dword ptr [0xcfb060] */
  SPILL(); f_42ae09(); return; /* MSVCR70!fopen */
}

void f_99cc5c(void) {
  LOAD_REGS();
L_99cc5c: /* 99cc5c: jmp dword ptr [0xcfb064] */
  SPILL(); f_4082cf(); return; /* MSVCR70!_CIfmod */
}

void f_99cc70(void) {
  LOAD_REGS();
L_99cc70: /* 99cc70: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 99cc73: jae 0x99cc8a */
  if (!cf) goto L_99cc8a;
L_99cc75: /* 99cc75: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 99cc78: jae 0x99cc80 */
  if (!cf) goto L_99cc80;
L_99cc7a: /* 99cc7a: shld edx, eax, cl */
  { uint32_t a = edx, b = eax, c = ((ecx & 31)) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  edx = r;
  } }
/* 99cc7d: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 99cc7f: ret  */
  esp += 4; SPILL(); return;
L_99cc80: /* 99cc80: mov edx, eax */
  edx = eax;
/* 99cc82: xor eax, eax */
  eax = 0;
/* 99cc84: and cl, 0x1f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 99cc87: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 99cc89: ret  */
  esp += 4; SPILL(); return;
L_99cc8a: /* 99cc8a: xor eax, eax */
  eax = 0;
/* 99cc8c: xor edx, edx */
  edx = 0;
/* 99cc8e: ret  */
  esp += 4; SPILL(); return;
}

void f_99cc90(void) {
  LOAD_REGS();
L_99cc90: /* 99cc90: jmp dword ptr [0xcfb068] */
  SPILL(); f_40317f(); return; /* MSVCR70!qsort */
}

void f_99cc96(void) { hle_CIacos(); }

void f_99cca0(void) {
  LOAD_REGS();
L_99cca0: /* 99cca0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99cca1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99cca2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99cca3: xor edi, edi */
  edi = 0;
/* 99cca5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99cca9: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* 99ccab: jge 0x99ccc1 */
  if ((sf == of)) goto L_99ccc1;
L_99ccad: /* 99ccad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 99ccae: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99ccb2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 99ccb4: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 99ccb6: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 99ccb9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 99ccbd: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_99ccc1: /* 99ccc1: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99ccc5: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* 99ccc7: jge 0x99ccdd */
  if ((sf == of)) goto L_99ccdd;
L_99ccc9: /* 99ccc9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 99ccca: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99ccce: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 99ccd0: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 99ccd2: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 99ccd5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 99ccd9: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_99ccdd: /* 99ccdd: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 99ccdf: jne 0x99ccf9 */
  if (!zf) goto L_99ccf9;
L_99cce1: /* 99cce1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99cce5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99cce9: xor edx, edx */
  edx = 0;
/* 99cceb: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x99cceb);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 99cced: mov ebx, eax */
  ebx = eax;
/* 99ccef: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99ccf3: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x99ccf3);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 99ccf5: mov edx, ebx */
  edx = ebx;
/* 99ccf7: jmp 0x99cd3a */
  goto L_99cd3a;
L_99ccf9: /* 99ccf9: mov ebx, eax */
  ebx = eax;
/* 99ccfb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99ccff: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99cd03: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_99cd07: /* 99cd07: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ebx = r;
  }
/* 99cd09: rcr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  ecx = r;
  }
/* 99cd0b: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  edx = r;
  }
/* 99cd0d: rcr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  eax = r;
  }
/* 99cd0f: or ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ebx = r;
  }
/* 99cd11: jne 0x99cd07 */
  if (!zf) goto L_99cd07;
L_99cd13: /* 99cd13: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x99cd13);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 99cd15: mov esi, eax */
  esi = eax;
/* 99cd17: mul dword ptr [esp + 0x1c] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x1cu))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 99cd1b: mov ecx, eax */
  ecx = eax;
/* 99cd1d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99cd21: mul esi */
  { uint64_t r = (uint64_t)eax * (uint64_t)(esi); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 99cd23: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 99cd25: jb 0x99cd35 */
  if (cf) goto L_99cd35;
L_99cd27: /* 99cd27: cmp edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 99cd2b: ja 0x99cd35 */
  if ((!cf && !zf)) goto L_99cd35;
L_99cd2d: /* 99cd2d: jb 0x99cd36 */
  if (cf) goto L_99cd36;
L_99cd2f: /* 99cd2f: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 99cd33: jbe 0x99cd36 */
  if ((cf | zf)) goto L_99cd36;
L_99cd35: /* 99cd35: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_99cd36: /* 99cd36: xor edx, edx */
  edx = 0;
/* 99cd38: mov eax, esi */
  eax = esi;
L_99cd3a: /* 99cd3a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 99cd3b: jne 0x99cd44 */
  if (!zf) goto L_99cd44;
L_99cd3d: /* 99cd3d: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 99cd3f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 99cd41: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
L_99cd44: /* 99cd44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99cd45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99cd46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99cd47: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99cd4a(void) {
  LOAD_REGS();
L_99cd4a: /* 99cd4a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99cd4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99cd50: jne 0x99cd60 */
  if (!zf) goto L_99cd60;
L_99cd52: /* 99cd52: cmp dword ptr [0xcf77b8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf77b8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99cd58: jle 0x99cd88 */
  if ((zf || sf != of)) goto L_99cd88;
L_99cd5a: /* 99cd5a: dec dword ptr [0xcf77b8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf77b8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xcf77b8u), r);
  }
L_99cd60: /* 99cd60: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99cd63: mov ecx, dword ptr [0xcfb154] */
  ecx = R32((uint32_t)(0xcfb154u));
/* 99cd69: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 99cd6b: mov dword ptr [0xcf8e44], ecx */
  W32((uint32_t)(0xcf8e44u), ecx);
/* 99cd71: jne 0x99cdc2 */
  if (!zf) goto L_99cdc2;
L_99cd73: /* 99cd73: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 99cd78: call dword ptr [0xcfb0ec] */
  esp -= 4; W32(esp, 0x99cd7eu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 99cd7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99cd80: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99cd81: mov dword ptr [0xcf8e6c], eax */
  W32((uint32_t)(0xcf8e6cu), eax);
/* 99cd86: jne 0x99cd8c */
  if (!zf) goto L_99cd8c;
L_99cd88: /* 99cd88: xor eax, eax */
  eax = 0;
/* 99cd8a: jmp 0x99ce05 */
  goto L_99ce05;
L_99cd8c: /* 99cd8c: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 99cd8f: mov eax, dword ptr [0xcf8e6c] */
  eax = R32((uint32_t)(0xcf8e6cu));
/* 99cd94: mov dword ptr [0xcf8e5c], eax */
  W32((uint32_t)(0xcf8e5cu), eax);
/* 99cd99: call 0x99d0a6 */
  esp -= 4; W32(esp, 0x99cd9eu); SPILL(); f_99d0a6(); if (g_unwind) return; RELOAD();
/* 99cd9e: push 0x99d0ea */
  { uint32_t v = 0x99d0eau; esp -= 4; W32(esp, v); }
/* 99cda3: call 0x99cbec */
  esp -= 4; W32(esp, 0x99cda8u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 99cda8: mov dword ptr [esp], 0xac3470 */
  W32((uint32_t)(esp), 0xac3470u);
/* 99cdaf: push 0xac2000 */
  { uint32_t v = 0xac2000u; esp -= 4; W32(esp, v); }
/* 99cdb4: call 0x99d0a0 */
  esp -= 4; W32(esp, 0x99cdb9u); SPILL(); f_99d0a0(); if (g_unwind) return; RELOAD();
/* 99cdb9: inc dword ptr [0xcf77b8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf77b8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf77b8u), r);
  }
/* 99cdbf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99cdc0: jmp 0x99ce01 */
  goto L_99ce01;
L_99cdc2: /* 99cdc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99cdc4: jne 0x99ce02 */
  if (!zf) goto L_99ce02;
L_99cdc6: /* 99cdc6: mov eax, dword ptr [0xcf8e6c] */
  eax = R32((uint32_t)(0xcf8e6cu));
/* 99cdcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99cdcd: je 0x99ce02 */
  if (zf) goto L_99ce02;
L_99cdcf: /* 99cdcf: jmp 0x99cde4 */
  goto L_99cde4;
L_99cdd1: /* 99cdd1: mov ecx, dword ptr [0xcf8e5c] */
  ecx = R32((uint32_t)(0xcf8e5cu));
/* 99cdd7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 99cdd9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99cddb: je 0x99cde4 */
  if (zf) goto L_99cde4;
L_99cddd: /* 99cddd: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0x99cddfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99cddf: mov eax, dword ptr [0xcf8e6c] */
  eax = R32((uint32_t)(0xcf8e6cu));
L_99cde4: /* 99cde4: sub dword ptr [0xcf8e5c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8e5cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xcf8e5cu), r);
  }
/* 99cdeb: cmp dword ptr [0xcf8e5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8e5cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99cdf1: jae 0x99cdd1 */
  if (!cf) goto L_99cdd1;
L_99cdf3: /* 99cdf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99cdf4: call dword ptr [0xcfb0f4] */
  esp -= 4; W32(esp, 0x99cdfau); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 99cdfa: and dword ptr [0xcf8e6c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8e6cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0xcf8e6cu), r);
  }
L_99ce01: /* 99ce01: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_99ce02: /* 99ce02: xor eax, eax */
  eax = 0;
/* 99ce04: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_99ce05: /* 99ce05: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99ce08(void) {
  LOAD_REGS();
L_99ce08: /* 99ce08: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99ce09: mov ebp, esp */
  ebp = esp;
/* 99ce0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99ce0c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 99ce0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ce10: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 99ce13: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99ce15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ce16: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 99ce19: jne 0x99ce24 */
  if (!zf) goto L_99ce24;
L_99ce1b: /* 99ce1b: cmp dword ptr [0xcf77b8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf77b8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ce22: jmp 0x99ce4a */
  goto L_99ce4a;
L_99ce24: /* 99ce24: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ce27: je 0x99ce2e */
  if (zf) goto L_99ce2e;
L_99ce29: /* 99ce29: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ce2c: jne 0x99ce50 */
  if (!zf) goto L_99ce50;
L_99ce2e: /* 99ce2e: mov eax, dword ptr [0xcf8e50] */
  eax = R32((uint32_t)(0xcf8e50u));
/* 99ce33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99ce35: je 0x99ce40 */
  if (zf) goto L_99ce40;
L_99ce37: /* 99ce37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ce38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ce39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99ce3a: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x99ce3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ce3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99ce3e: je 0x99ce4c */
  if (zf) goto L_99ce4c;
L_99ce40: /* 99ce40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ce41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ce42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99ce43: call 0x99cd4a */
  esp -= 4; W32(esp, 0x99ce48u); SPILL(); f_99cd4a(); if (g_unwind) return; RELOAD();
/* 99ce48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_99ce4a: /* 99ce4a: jne 0x99ce50 */
  if (!zf) goto L_99ce50;
L_99ce4c: /* 99ce4c: xor eax, eax */
  eax = 0;
/* 99ce4e: jmp 0x99ce9e */
  goto L_99ce9e;
L_99ce50: /* 99ce50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ce51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ce52: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99ce53: call 0x6c8279 */
  esp -= 4; W32(esp, 0x99ce58u); SPILL(); f_6c8279(); if (g_unwind) return; RELOAD();
/* 99ce58: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ce5b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 99ce5e: jne 0x99ce6c */
  if (!zf) goto L_99ce6c;
L_99ce60: /* 99ce60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99ce62: jne 0x99ce9b */
  if (!zf) goto L_99ce9b;
L_99ce64: /* 99ce64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ce65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99ce66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99ce67: call 0x99cd4a */
  esp -= 4; W32(esp, 0x99ce6cu); SPILL(); f_99cd4a(); if (g_unwind) return; RELOAD();
L_99ce6c: /* 99ce6c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99ce6e: je 0x99ce75 */
  if (zf) goto L_99ce75;
L_99ce70: /* 99ce70: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ce73: jne 0x99ce9b */
  if (!zf) goto L_99ce9b;
L_99ce75: /* 99ce75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ce76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ce77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99ce78: call 0x99cd4a */
  esp -= 4; W32(esp, 0x99ce7du); SPILL(); f_99cd4a(); if (g_unwind) return; RELOAD();
/* 99ce7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99ce7f: jne 0x99ce84 */
  if (!zf) goto L_99ce84;
L_99ce81: /* 99ce81: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_99ce84: /* 99ce84: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ce88: je 0x99ce9b */
  if (zf) goto L_99ce9b;
L_99ce8a: /* 99ce8a: mov eax, dword ptr [0xcf8e50] */
  eax = R32((uint32_t)(0xcf8e50u));
/* 99ce8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99ce91: je 0x99ce9b */
  if (zf) goto L_99ce9b;
L_99ce93: /* 99ce93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ce94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ce95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99ce96: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x99ce98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ce98: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_99ce9b: /* 99ce9b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_99ce9e: /* 99ce9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99ce9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99cea0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99cea1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99cea2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99cea6(void) {
  LOAD_REGS();
L_99cea6: /* 99cea6: jmp dword ptr [0xcfb070] */
  SPILL(); f_42d092(); return; /* MSVCR70!printf */
}

void f_99ceac(void) { hle_ftol(); }

void f_99ceb2(void) {
  LOAD_REGS();
L_99ceb2: /* 99ceb2: jmp dword ptr [0xcfb078] */
  SPILL(); f_42b5eb(); return; /* MSVCR70!sprintf */
}

void f_99ceb8(void) {
  LOAD_REGS();
L_99ceb8: /* 99ceb8: jmp dword ptr [0xcfb07c] */
  SPILL(); f_42d29b(); return; /* MSVCR70!sscanf */
}

void f_99cebe(void) {
  LOAD_REGS();
L_99cebe: /* 99cebe: jmp dword ptr [0xcfb080] */
  SPILL(); f_401a52(); return; /* MSVCR70!strncmp */
}

void f_99cec4(void) {
  LOAD_REGS();
L_99cec4: /* 99cec4: jmp dword ptr [0xcfb084] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_99ceca(void) {
  LOAD_REGS();
L_99ceca: /* 99ceca: jmp dword ptr [0xcfb088] */
  SPILL(); f_41278b(); return; /* MSVCR70!abort */
}

void f_99ced0(void) {
  LOAD_REGS();
L_99ced0: /* 99ced0: jmp dword ptr [0xcfb08c] */
  SPILL(); f_42836d(); return; /* MSVCR70!rand */
}

void f_99ced6(void) {
  LOAD_REGS();
L_99ced6: /* 99ced6: jmp dword ptr [0xcfb094] */
  SPILL(); f_404360(); return; /* MSVCR70!exit */
}

void f_99cedc(void) {
  LOAD_REGS();
L_99cedc: /* 99cedc: jmp dword ptr [0xcfb098] */
  SPILL(); f_4071c4(); return; /* MSVCR70!strstr */
}

void f_99cee2(void) {
  LOAD_REGS();
L_99cee2: /* 99cee2: jmp dword ptr [0xcfb09c] */
  SPILL(); f_406e16(); return; /* MSVCR70!strrchr */
}

void f_99cee8(void) {
  LOAD_REGS();
L_99cee8: /* 99cee8: jmp dword ptr [0xcfb0a0] */
  SPILL(); f_42caca(); return; /* MSVCR70!freopen */
}

void f_99ceee(void) {
  LOAD_REGS();
L_99ceee: /* 99ceee: jmp dword ptr [0xcfb0a4] */
  SPILL(); f_406e75(); return; /* MSVCR70!toupper */
}

void f_99cef4(void) {
  LOAD_REGS();
L_99cef4: /* 99cef4: jmp dword ptr [0xcfb0b0] */
  SPILL(); f_4156dd(); return; /* MSVCR70!_isctype */
}

void f_99cefa(void) {
  LOAD_REGS();
L_99cefa: /* 99cefa: jmp dword ptr [0xcfb0b4] */
  SPILL(); f_40750d(); return; /* MSVCR70!strncat */
}

void f_99cf00(void) {
  LOAD_REGS();
L_99cf00: /* 99cf00: jmp dword ptr [0xcfb0b8] */
  SPILL(); f_43166a(); return; /* MSVCR70!time */
}

void f_99cf06(void) {
  LOAD_REGS();
L_99cf06: /* 99cf06: jmp dword ptr [0xcfb0bc] */
  SPILL(); f_41771e(); return; /* MSVCR70!strtod */
}

void f_99cf0c(void) {
  LOAD_REGS();
L_99cf0c: /* 99cf0c: jmp dword ptr [0xcfb0c0] */
  SPILL(); f_41796b(); return; /* MSVCR70!strtol */
}

void f_99cf12(void) { hle_setjmp3(); }

void f_99cf18(void) { hle_longjmp(); }

void f_99cf1e(void) { hle_floor(); }

void f_99cf24(void) {
  LOAD_REGS();
L_99cf24: /* 99cf24: jmp dword ptr [0xcfb0d0] */
  SPILL(); f_403745(); return; /* MSVCR70!localtime */
}

void f_99cf2a(void) {
  LOAD_REGS();
L_99cf2a: /* 99cf2a: jmp dword ptr [0xcfb0d4] */
  SPILL(); f_42c86c(); return; /* MSVCR70!fputs */
}

void f_99cf30(void) {
  LOAD_REGS();
L_99cf30: /* 99cf30: jmp dword ptr [0xcfb0d8] */
  SPILL(); f_42c5d6(); return; /* MSVCR70!fgets */
}

void f_99cf36(void) {
  LOAD_REGS();
L_99cf36: /* 99cf36: jmp dword ptr [0xcfb0dc] */
  SPILL(); f_42ba9c(); return; /* MSVCR70!_vsnprintf */
}

void f_99cf3c(void) {
  LOAD_REGS();
L_99cf3c: /* 99cf3c: jmp dword ptr [0xcfb0e0] */
  SPILL(); f_42b6a5(); return; /* MSVCR70!_snprintf */
}

void f_99cf42(void) {
  LOAD_REGS();
L_99cf42: /* 99cf42: jmp dword ptr [0xcfb0e4] */
  SPILL(); f_407106(); return; /* MSVCR70!strchr */
}

void f_99cf48(void) {
  LOAD_REGS();
L_99cf48: /* 99cf48: jmp dword ptr [0xcfb0e8] */
  SPILL(); f_4139a4(); return; /* MSVCR70!fprintf */
}

void f_99cf4e(void) {
  LOAD_REGS();
L_99cf4e: /* 99cf4e: jmp dword ptr [0xcfb0ec] */
  SPILL(); f_4010eb(); return; /* MSVCR70!malloc */
}

void f_99cf54(void) {
  LOAD_REGS();
L_99cf54: /* 99cf54: jmp dword ptr [0xcfb0f0] */
  SPILL(); f_4016cb(); return; /* MSVCR70!calloc */
}

void f_99cf5a(void) {
  LOAD_REGS();
L_99cf5a: /* 99cf5a: jmp dword ptr [0xcfb0f4] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
}

void f_99cf60(void) {
  LOAD_REGS();
L_99cf60: /* 99cf60: jmp dword ptr [0xcfb0f8] */
  SPILL(); f_401c76(); return; /* MSVCR70!realloc */
}

void f_99cf66(void) {
  LOAD_REGS();
L_99cf66: /* 99cf66: jmp dword ptr [0xcfb0fc] */
  SPILL(); f_41441f(); return; /* MSVCR70!fclose */
}

void f_99cf6c(void) {
  LOAD_REGS();
L_99cf6c: /* 99cf6c: jmp dword ptr [0xcfb100] */
  SPILL(); f_42ca7e(); return; /* MSVCR70!fread */
}

void f_99cf72(void) {
  LOAD_REGS();
L_99cf72: /* 99cf72: jmp dword ptr [0xcfb104] */
  SPILL(); f_42cf72(); return; /* MSVCR70!fwrite */
}

void f_99cf78(void) {
  LOAD_REGS();
L_99cf78: /* 99cf78: jmp dword ptr [0xcfb108] */
  SPILL(); f_42cc09(); return; /* MSVCR70!fseek */
}

void f_99cf7e(void) {
  LOAD_REGS();
L_99cf7e: /* 99cf7e: jmp dword ptr [0xcfb10c] */
  SPILL(); f_424d0a(); return; /* MSVCR70!_open */
}

void f_99cf84(void) {
  LOAD_REGS();
L_99cf84: /* 99cf84: jmp dword ptr [0xcfb110] */
  SPILL(); f_415ca2(); return; /* MSVCR70!_lseek */
}

void f_99cf8a(void) {
  LOAD_REGS();
L_99cf8a: /* 99cf8a: jmp dword ptr [0xcfb114] */
  SPILL(); f_4251e0(); return; /* MSVCR70!_read */
}

void f_99cf90(void) {
  LOAD_REGS();
L_99cf90: /* 99cf90: jmp dword ptr [0xcfb118] */
  SPILL(); f_41597f(); return; /* MSVCR70!_write */
}

void f_99cf96(void) {
  LOAD_REGS();
L_99cf96: /* 99cf96: jmp dword ptr [0xcfb11c] */
  SPILL(); f_415b93(); return; /* MSVCR70!_close */
}

void f_99cfa0(void) {
  LOAD_REGS();
L_99cfa0: /* 99cfa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99cfa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99cfa2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99cfa6: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 99cfa8: jne 0x99cfc2 */
  if (!zf) goto L_99cfc2;
L_99cfaa: /* 99cfaa: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 99cfae: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99cfb2: xor edx, edx */
  edx = 0;
/* 99cfb4: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x99cfb4);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 99cfb6: mov ebx, eax */
  ebx = eax;
/* 99cfb8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 99cfbc: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x99cfbc);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 99cfbe: mov edx, ebx */
  edx = ebx;
/* 99cfc0: jmp 0x99d003 */
  goto L_99d003;
L_99cfc2: /* 99cfc2: mov ecx, eax */
  ecx = eax;
/* 99cfc4: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 99cfc8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99cfcc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_99cfd0: /* 99cfd0: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ecx = r;
  }
/* 99cfd2: rcr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  ebx = r;
  }
/* 99cfd4: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  edx = r;
  }
/* 99cfd6: rcr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  eax = r;
  }
/* 99cfd8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 99cfda: jne 0x99cfd0 */
  if (!zf) goto L_99cfd0;
L_99cfdc: /* 99cfdc: div ebx */
  { uint32_t d = ebx; if (!d) d = guest_divzero(0x99cfdc);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 99cfde: mov esi, eax */
  esi = eax;
/* 99cfe0: mul dword ptr [esp + 0x18] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x18u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 99cfe4: mov ecx, eax */
  ecx = eax;
/* 99cfe6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99cfea: mul esi */
  { uint64_t r = (uint64_t)eax * (uint64_t)(esi); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 99cfec: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 99cfee: jb 0x99cffe */
  if (cf) goto L_99cffe;
L_99cff0: /* 99cff0: cmp edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 99cff4: ja 0x99cffe */
  if ((!cf && !zf)) goto L_99cffe;
L_99cff6: /* 99cff6: jb 0x99cfff */
  if (cf) goto L_99cfff;
L_99cff8: /* 99cff8: cmp eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 99cffc: jbe 0x99cfff */
  if ((cf | zf)) goto L_99cfff;
L_99cffe: /* 99cffe: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_99cfff: /* 99cfff: xor edx, edx */
  edx = 0;
/* 99d001: mov eax, esi */
  eax = esi;
L_99d003: /* 99d003: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99d004: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99d005: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99d008(void) {
  LOAD_REGS();
L_99d008: /* 99d008: jmp dword ptr [0xcfb120] */
  SPILL(); f_4315fd(); return; /* MSVCR70!clock */
}

void f_99d00e(void) {
  LOAD_REGS();
L_99d00e: /* 99d00e: jmp dword ptr [0xcfb124] */
  SPILL(); f_4152ea(); return; /* MSVCR70!atoi */
}

void f_99d014(void) {
  LOAD_REGS();
L_99d014: /* 99d014: jmp dword ptr [0xcfb128] */
  SPILL(); f_430091(); return; /* MSVCR70!strtok */
}

void f_99d01a(void) { hle_memcpy(); }

void f_99d026(void) {
  LOAD_REGS();
L_99d026: /* 99d026: jmp dword ptr [0xcfb134] */
  SPILL(); f_41a98e(); return; /* MSVCR70!??0exception@@QAE@XZ */
}

void f_99d02c(void) {
  LOAD_REGS();
L_99d02c: /* 99d02c: jmp dword ptr [0xcfb138] */
  SPILL(); f_41a9dc(); return; /* MSVCR70!??0exception@@QAE@ABV0@@Z */
}

void f_99d032(void) { hle_CIpow(); }

void f_99d040(void) {
  LOAD_REGS();
L_99d040: /* 99d040: jmp dword ptr [0xcfb140] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_99d048(void) {
  LOAD_REGS();
L_99d048: /* 99d048: push 0x99cec4 */
  { uint32_t v = 0x99cec4u; esp -= 4; W32(esp, v); }
/* 99d04d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 99d053: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99d054: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99d058: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 99d05c: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* 99d060: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99d062: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99d063: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99d064: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99d065: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 99d068: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 99d06b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99d06c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 99d06f: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 99d076: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 99d079: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 99d07c: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 99d082: ret  */
  esp += 4; SPILL(); return;
}

void f_99d083(void) {
  LOAD_REGS();
L_99d083: /* 99d083: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 99d086: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 99d08d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99d08e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99d08f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99d090: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99d091: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 99d092: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99d093: ret  */
  esp += 4; SPILL(); return;
}

void f_99d094(void) {
  LOAD_REGS();
L_99d094: /* 99d094: jmp dword ptr [0xcfb144] */
  SPILL(); f_41ac82(); return; /* MSVCR70!??1type_info@@UAE@XZ */
}

void f_99d09a(void) {
  LOAD_REGS();
L_99d09a: /* 99d09a: jmp dword ptr [0xcfb148] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_99d0a0(void) {
  LOAD_REGS();
L_99d0a0: /* 99d0a0: jmp dword ptr [0xcfb150] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_99d0a6(void) {
  LOAD_REGS();
L_99d0a6: /* 99d0a6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 99d0a8: push 0xa21c30 */
  { uint32_t v = 0xa21c30u; esp -= 4; W32(esp, v); }
/* 99d0ad: call 0x99d048 */
  esp -= 4; W32(esp, 0x99d0b2u); SPILL(); f_99d048(); if (g_unwind) return; RELOAD();
/* 99d0b2: mov dword ptr [ebp - 0x1c], 0xa22c44 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xa22c44u);
L_99d0b9: /* 99d0b9: cmp dword ptr [ebp - 0x1c], 0xa22d44 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xa22d44u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99d0c0: jae 0x99d0e4 */
  if (!cf) goto L_99d0e4;
L_99d0c2: /* 99d0c2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99d0c6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 99d0c9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99d0cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99d0cd: je 0x99d0da */
  if (zf) goto L_99d0da;
L_99d0cf: /* 99d0cf: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x99d0d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99d0d1: jmp 0x99d0da */
  goto L_99d0da;
L_99d0da: /* 99d0da: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99d0de: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 99d0e2: jmp 0x99d0b9 */
  goto L_99d0b9;
L_99d0e4: /* 99d0e4: call 0x99d083 */
  esp -= 4; W32(esp, 0x99d0e9u); SPILL(); f_99d083(); if (g_unwind) return; RELOAD();
/* 99d0e9: ret  */
  esp += 4; SPILL(); return;
}

void f_99d0d3(void) {
  LOAD_REGS();
L_99d0d3: /* 99d0d3: xor eax, eax */
  eax = 0;
/* 99d0d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99d0d6: ret  */
  esp += 4; SPILL(); return;
}

void f_99d0d7(void) {
  LOAD_REGS();
  goto L_99d0d7;
L_99d0b9: /* 99d0b9: cmp dword ptr [ebp - 0x1c], 0xa22d44 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xa22d44u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99d0c0: jae 0x99d0e4 */
  if (!cf) goto L_99d0e4;
L_99d0c2: /* 99d0c2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99d0c6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 99d0c9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99d0cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99d0cd: je 0x99d0da */
  if (zf) goto L_99d0da;
L_99d0cf: /* 99d0cf: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x99d0d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99d0d1: jmp 0x99d0da */
  goto L_99d0da;
L_99d0d7: /* 99d0d7: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_99d0da: /* 99d0da: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99d0de: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 99d0e2: jmp 0x99d0b9 */
  goto L_99d0b9;
L_99d0e4: /* 99d0e4: call 0x99d083 */
  esp -= 4; W32(esp, 0x99d0e9u); SPILL(); f_99d083(); if (g_unwind) return; RELOAD();
/* 99d0e9: ret  */
  esp += 4; SPILL(); return;
}

void f_99d0ea(void) {
  LOAD_REGS();
L_99d0ea: /* 99d0ea: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 99d0ec: push 0xa21c40 */
  { uint32_t v = 0xa21c40u; esp -= 4; W32(esp, v); }
/* 99d0f1: call 0x99d048 */
  esp -= 4; W32(esp, 0x99d0f6u); SPILL(); f_99d048(); if (g_unwind) return; RELOAD();
/* 99d0f6: mov dword ptr [ebp - 0x1c], 0xa22e4c */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xa22e4cu);
L_99d0fd: /* 99d0fd: cmp dword ptr [ebp - 0x1c], 0xa22f4c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xa22f4cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99d104: jae 0x99d128 */
  if (!cf) goto L_99d128;
L_99d106: /* 99d106: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99d10a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 99d10d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99d10f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99d111: je 0x99d11e */
  if (zf) goto L_99d11e;
L_99d113: /* 99d113: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x99d115u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99d115: jmp 0x99d11e */
  goto L_99d11e;
L_99d11e: /* 99d11e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99d122: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 99d126: jmp 0x99d0fd */
  goto L_99d0fd;
L_99d128: /* 99d128: call 0x99d083 */
  esp -= 4; W32(esp, 0x99d12du); SPILL(); f_99d083(); if (g_unwind) return; RELOAD();
/* 99d12d: ret  */
  esp += 4; SPILL(); return;
}

void f_99d117(void) {
  LOAD_REGS();
L_99d117: /* 99d117: xor eax, eax */
  eax = 0;
/* 99d119: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99d11a: ret  */
  esp += 4; SPILL(); return;
}

void f_99d11b(void) {
  LOAD_REGS();
  goto L_99d11b;
L_99d0fd: /* 99d0fd: cmp dword ptr [ebp - 0x1c], 0xa22f4c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xa22f4cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99d104: jae 0x99d128 */
  if (!cf) goto L_99d128;
L_99d106: /* 99d106: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99d10a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 99d10d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99d10f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99d111: je 0x99d11e */
  if (zf) goto L_99d11e;
L_99d113: /* 99d113: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x99d115u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99d115: jmp 0x99d11e */
  goto L_99d11e;
L_99d11b: /* 99d11b: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_99d11e: /* 99d11e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99d122: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 99d126: jmp 0x99d0fd */
  goto L_99d0fd;
L_99d128: /* 99d128: call 0x99d083 */
  esp -= 4; W32(esp, 0x99d12du); SPILL(); f_99d083(); if (g_unwind) return; RELOAD();
/* 99d12d: ret  */
  esp += 4; SPILL(); return;
}

void f_99d130(void) {
  LOAD_REGS();
L_99d130: /* 99d130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99d131: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 99d135: mov esi, ecx */
  esi = ecx;
/* 99d137: call 0x989010 */
  esp -= 4; W32(esp, 0x99d13cu); SPILL(); f_989010(); if (g_unwind) return; RELOAD();
/* 99d13c: mov dword ptr [esi], 0xa21c68 */
  W32((uint32_t)(esi), 0xa21c68u);
/* 99d142: mov eax, esi */
  eax = esi;
/* 99d144: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99d145: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99d148(void) {
  LOAD_REGS();
L_99d148: /* 99d148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99d149: mov esi, ecx */
  esi = ecx;
/* 99d14b: call 0x99d164 */
  esp -= 4; W32(esp, 0x99d150u); SPILL(); f_99d164(); if (g_unwind) return; RELOAD();
/* 99d150: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99d155: je 0x99d15e */
  if (zf) goto L_99d15e;
L_99d157: /* 99d157: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99d158: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x99d15du); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 99d15d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_99d15e: /* 99d15e: mov eax, esi */
  eax = esi;
/* 99d160: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99d161: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99d164(void) {
  LOAD_REGS();
L_99d164: /* 99d164: mov dword ptr [ecx], 0xa21c68 */
  W32((uint32_t)(ecx), 0xa21c68u);
/* 99d16a: jmp 0x988cd0 */
  SPILL(); f_988cd0(); return;
}

void f_99d16f(void) {
  LOAD_REGS();
L_99d16f: /* 99d16f: mov eax, 0x9da5c2 */
  eax = 0x9da5c2u;
/* 99d174: call 0x99d220 */
  esp -= 4; W32(esp, 0x99d179u); SPILL(); f_99d220(); if (g_unwind) return; RELOAD();
/* 99d179: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99d17c: push 0xa21c70 */
  { uint32_t v = 0xa21c70u; esp -= 4; W32(esp, v); }
/* 99d181: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 99d184: call 0x989120 */
  esp -= 4; W32(esp, 0x99d189u); SPILL(); f_989120(); if (g_unwind) return; RELOAD();
/* 99d189: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99d18d: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 99d190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99d191: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 99d194: call 0x989010 */
  esp -= 4; W32(esp, 0x99d199u); SPILL(); f_989010(); if (g_unwind) return; RELOAD();
/* 99d199: push 0xa61e54 */
  { uint32_t v = 0xa61e54u; esp -= 4; W32(esp, v); }
/* 99d19e: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 99d1a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99d1a2: mov dword ptr [ebp - 0x50], 0xa21c68 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0xa21c68u);
/* 99d1a9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x99d1aeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_99d1ae: guest_badaddr(0x99d1ae); return;
}

void f_99d1af(void) {
  LOAD_REGS();
L_99d1af: /* 99d1af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99d1b0: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 99d1b4: mov esi, ecx */
  esi = ecx;
/* 99d1b6: call 0x9891e0 */
  esp -= 4; W32(esp, 0x99d1bbu); SPILL(); f_9891e0(); if (g_unwind) return; RELOAD();
/* 99d1bb: mov dword ptr [esi], 0xa21c68 */
  W32((uint32_t)(esi), 0xa21c68u);
/* 99d1c1: mov eax, esi */
  eax = esi;
/* 99d1c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99d1c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99d1c7(void) {
  LOAD_REGS();
L_99d1c7: /* 99d1c7: mov eax, 0x9da5d4 */
  eax = 0x9da5d4u;
/* 99d1cc: call 0x99d220 */
  esp -= 4; W32(esp, 0x99d1d1u); SPILL(); f_99d220(); if (g_unwind) return; RELOAD();
/* 99d1d1: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99d1d4: push 0xa21c88 */
  { uint32_t v = 0xa21c88u; esp -= 4; W32(esp, v); }
/* 99d1d9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 99d1dc: call 0x989120 */
  esp -= 4; W32(esp, 0x99d1e1u); SPILL(); f_989120(); if (g_unwind) return; RELOAD();
/* 99d1e1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 99d1e5: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 99d1e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99d1e9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 99d1ec: call 0x989010 */
  esp -= 4; W32(esp, 0x99d1f1u); SPILL(); f_989010(); if (g_unwind) return; RELOAD();
/* 99d1f1: push 0xa61a68 */
  { uint32_t v = 0xa61a68u; esp -= 4; W32(esp, v); }
/* 99d1f6: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 99d1f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99d1fa: mov dword ptr [ebp - 0x50], 0xa21c5c */
  W32((uint32_t)(ebp + 0xffffffb0u), 0xa21c5cu);
/* 99d201: call 0x99caf8 */
  esp -= 4; W32(esp, 0x99d206u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_99d206: guest_badaddr(0x99d206); return;
}

void f_99d208(void) {
  LOAD_REGS();
L_99d208: /* 99d208: jmp dword ptr [0xcfb158] */
  SPILL(); f_42f951(); return; /* MSVCR70!_strlwr */
}

void f_99d20e(void) {
  LOAD_REGS();
L_99d20e: /* 99d20e: jmp dword ptr [0xcfb03c] */
  SPILL(); f_401bd4(); return; /* MSVCR70!_stricmp */
}

void f_99d214(void) { hle_strlen(); }

void f_99d21a(void) { hle_memcpy(); }

void f_99d220(void) {
  LOAD_REGS();
L_99d220: /* 99d220: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 99d222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99d223: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 99d229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99d22a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 99d22e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 99d235: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 99d239: lea ebp, [esp + 0xc] */
  ebp = (uint32_t)(esp + 0xcu);
/* 99d23d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99d23e: ret  */
  esp += 4; SPILL(); return;
}

void f_9bff60(void) {
  LOAD_REGS();
L_9bff60: /* 9bff60: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 9bff66: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9bff6c(void) {
  LOAD_REGS();
L_9bff6c: /* 9bff6c: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 9bff72: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9bff78(void) {
  LOAD_REGS();
L_9bff78: /* 9bff78: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 9bff7e: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9bff84(void) {
  LOAD_REGS();
L_9bff84: /* 9bff84: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 9bff87: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9bff8d(void) {
  LOAD_REGS();
L_9bff8d: /* 9bff8d: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 9bff90: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9bff96(void) {
  LOAD_REGS();
  goto L_9bff96;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9bff96: /* 9bff96: mov eax, 0xa23098 */
  eax = 0xa23098u;
/* 9bff9b: jmp 0x99c950 */
  goto L_99c950;
}

void f_9bffb0(void) {
  LOAD_REGS();
L_9bffb0: /* 9bffb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9bffb3: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9bffb6: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9bffbc(void) {
  LOAD_REGS();
  goto L_9bffbc;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9bffbc: /* 9bffbc: mov eax, 0xa230c8 */
  eax = 0xa230c8u;
/* 9bffc1: jmp 0x99c950 */
  goto L_99c950;
}

void f_9bffd0(void) {
  LOAD_REGS();
  goto L_9bffd0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9bffd0: /* 9bffd0: mov eax, 0xa23190 */
  eax = 0xa23190u;
/* 9bffd5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9bffe0(void) {
  LOAD_REGS();
L_9bffe0: /* 9bffe0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9bffe3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9bffe9(void) {
  LOAD_REGS();
  goto L_9bffe9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9bffe9: /* 9bffe9: mov eax, 0xa231c0 */
  eax = 0xa231c0u;
/* 9bffee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0000(void) {
  LOAD_REGS();
L_9c0000: /* 9c0000: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0003: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0009(void) {
  LOAD_REGS();
  goto L_9c0009;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0009: /* 9c0009: mov eax, 0xa231e8 */
  eax = 0xa231e8u;
/* 9c000e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0020(void) {
  LOAD_REGS();
L_9c0020: /* 9c0020: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0023: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0029(void) {
  LOAD_REGS();
  goto L_9c0029;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0029: /* 9c0029: mov eax, 0xa23210 */
  eax = 0xa23210u;
/* 9c002e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0040(void) {
  LOAD_REGS();
L_9c0040: /* 9c0040: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0043: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0049(void) {
  LOAD_REGS();
  goto L_9c0049;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0049: /* 9c0049: mov eax, 0xa23238 */
  eax = 0xa23238u;
/* 9c004e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0060(void) {
  LOAD_REGS();
L_9c0060: /* 9c0060: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0063: jmp 0x6c7473 */
  SPILL(); f_6c7473(); return;
}

void f_9c0068(void) {
  LOAD_REGS();
  goto L_9c0068;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0068: /* 9c0068: mov eax, 0xa23260 */
  eax = 0xa23260u;
/* 9c006d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0080(void) {
  LOAD_REGS();
L_9c0080: /* 9c0080: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0083: jmp 0x6c7473 */
  SPILL(); f_6c7473(); return;
}

void f_9c0088(void) {
  LOAD_REGS();
L_9c0088: /* 9c0088: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c008b: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c008e: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c0094(void) {
  LOAD_REGS();
  goto L_9c0094;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0094: /* 9c0094: mov eax, 0xa23290 */
  eax = 0xa23290u;
/* 9c0099: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c00b0(void) {
  LOAD_REGS();
L_9c00b0: /* 9c00b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c00b3: jmp 0x6c7473 */
  SPILL(); f_6c7473(); return;
}

void f_9c00b8(void) {
  LOAD_REGS();
  goto L_9c00b8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c00b8: /* 9c00b8: mov eax, 0xa232b8 */
  eax = 0xa232b8u;
/* 9c00bd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c00d0(void) {
  LOAD_REGS();
L_9c00d0: /* 9c00d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c00d3: jmp 0x6c7473 */
  SPILL(); f_6c7473(); return;
}

void f_9c00d8(void) {
  LOAD_REGS();
  goto L_9c00d8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c00d8: /* 9c00d8: mov eax, 0xa232e0 */
  eax = 0xa232e0u;
/* 9c00dd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c00f0(void) {
  LOAD_REGS();
L_9c00f0: /* 9c00f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c00f3: jmp dword ptr [0xcfa2a0] */
  SPILL(); f_4e152d(); return; /* Core!??1USubsystem@@UAE@XZ */
}

void f_9c00f9(void) {
  LOAD_REGS();
  goto L_9c00f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c00f9: /* 9c00f9: mov eax, 0xa23308 */
  eax = 0xa23308u;
/* 9c00fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0110(void) {
  LOAD_REGS();
L_9c0110: /* 9c0110: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0113: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0119(void) {
  LOAD_REGS();
  goto L_9c0119;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0119: /* 9c0119: mov eax, 0xa23330 */
  eax = 0xa23330u;
/* 9c011e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0130(void) {
  LOAD_REGS();
L_9c0130: /* 9c0130: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0133: jmp 0x6c9f16 */
  SPILL(); f_6c9f16(); return;
}

void f_9c0138(void) {
  LOAD_REGS();
  goto L_9c0138;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0138: /* 9c0138: mov eax, 0xa23358 */
  eax = 0xa23358u;
/* 9c013d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0150(void) {
  LOAD_REGS();
L_9c0150: /* 9c0150: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0153: jmp 0x6caf88 */
  SPILL(); f_6caf88(); return;
}

void f_9c0158(void) {
  LOAD_REGS();
  goto L_9c0158;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0158: /* 9c0158: mov eax, 0xa23380 */
  eax = 0xa23380u;
/* 9c015d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0170(void) {
  LOAD_REGS();
L_9c0170: /* 9c0170: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0173: jmp 0x6c1023 */
  SPILL(); f_6c1023(); return;
}

void f_9c0178(void) {
  LOAD_REGS();
  goto L_9c0178;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0178: /* 9c0178: mov eax, 0xa233a8 */
  eax = 0xa233a8u;
/* 9c017d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0190(void) {
  LOAD_REGS();
L_9c0190: /* 9c0190: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0193: jmp 0x6caf88 */
  SPILL(); f_6caf88(); return;
}

void f_9c0198(void) {
  LOAD_REGS();
  goto L_9c0198;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0198: /* 9c0198: mov eax, 0xa233d0 */
  eax = 0xa233d0u;
/* 9c019d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c01b0(void) {
  LOAD_REGS();
L_9c01b0: /* 9c01b0: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 9c01b3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9c01b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9c01b8: je 0x9c01c7 */
  if (zf) goto L_9c01c7;
L_9c01be: /* 9c01be: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 9c01c1: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
L_9c01c7: /* 9c01c7: ret  */
  esp += 4; SPILL(); return;
}

void f_9c01c8(void) {
  LOAD_REGS();
  goto L_9c01c8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c01c8: /* 9c01c8: mov eax, 0xa233f8 */
  eax = 0xa233f8u;
/* 9c01cd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c01e0(void) {
  LOAD_REGS();
L_9c01e0: /* 9c01e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c01e3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c01e9(void) {
  LOAD_REGS();
  goto L_9c01e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c01e9: /* 9c01e9: mov eax, 0xa23420 */
  eax = 0xa23420u;
/* 9c01ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0200(void) {
  LOAD_REGS();
L_9c0200: /* 9c0200: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0203: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0209(void) {
  LOAD_REGS();
  goto L_9c0209;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0209: /* 9c0209: mov eax, 0xa23448 */
  eax = 0xa23448u;
/* 9c020e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0220(void) {
  LOAD_REGS();
L_9c0220: /* 9c0220: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0223: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0229(void) {
  LOAD_REGS();
  goto L_9c0229;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0229: /* 9c0229: mov eax, 0xa23470 */
  eax = 0xa23470u;
/* 9c022e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0240(void) {
  LOAD_REGS();
L_9c0240: /* 9c0240: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0243: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0246: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c024c(void) {
  LOAD_REGS();
  goto L_9c024c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c024c: /* 9c024c: mov eax, 0xa23498 */
  eax = 0xa23498u;
/* 9c0251: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0260(void) {
  LOAD_REGS();
L_9c0260: /* 9c0260: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0263: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0269(void) {
  LOAD_REGS();
L_9c0269: /* 9c0269: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c026c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c026f: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0275(void) {
  LOAD_REGS();
  goto L_9c0275;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0275: /* 9c0275: mov eax, 0xa234c8 */
  eax = 0xa234c8u;
/* 9c027a: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0290(void) {
  LOAD_REGS();
L_9c0290: /* 9c0290: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0293: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0299(void) {
  LOAD_REGS();
L_9c0299: /* 9c0299: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c029c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c029f: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c02a5(void) {
  LOAD_REGS();
  goto L_9c02a5;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c02a5: /* 9c02a5: mov eax, 0xa234f8 */
  eax = 0xa234f8u;
/* 9c02aa: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c02c0(void) {
  LOAD_REGS();
L_9c02c0: /* 9c02c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c02c3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c02c9(void) {
  LOAD_REGS();
L_9c02c9: /* 9c02c9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c02cc: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c02cf: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c02d5(void) {
  LOAD_REGS();
L_9c02d5: /* 9c02d5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c02d8: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c02db: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c02e1(void) {
  LOAD_REGS();
  goto L_9c02e1;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c02e1: /* 9c02e1: mov eax, 0xa23530 */
  eax = 0xa23530u;
/* 9c02e6: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0300(void) {
  LOAD_REGS();
L_9c0300: /* 9c0300: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0303: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0309(void) {
  LOAD_REGS();
L_9c0309: /* 9c0309: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c030c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c030f: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0315(void) {
  LOAD_REGS();
L_9c0315: /* 9c0315: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0318: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c031b: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0321(void) {
  LOAD_REGS();
  goto L_9c0321;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0321: /* 9c0321: mov eax, 0xa2356c */
  eax = 0xa2356cu;
/* 9c0326: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0340(void) {
  LOAD_REGS();
L_9c0340: /* 9c0340: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0343: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0349(void) {
  LOAD_REGS();
  goto L_9c0349;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0349: /* 9c0349: mov eax, 0xa23598 */
  eax = 0xa23598u;
/* 9c034e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0360(void) {
  LOAD_REGS();
L_9c0360: /* 9c0360: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0363: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0369(void) {
  LOAD_REGS();
  goto L_9c0369;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0369: /* 9c0369: mov eax, 0xa235c0 */
  eax = 0xa235c0u;
/* 9c036e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0380(void) {
  LOAD_REGS();
L_9c0380: /* 9c0380: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0383: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0389(void) {
  LOAD_REGS();
  goto L_9c0389;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0389: /* 9c0389: mov eax, 0xa235e8 */
  eax = 0xa235e8u;
/* 9c038e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c03a0(void) {
  LOAD_REGS();
  goto L_9c03a0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c03a0: /* 9c03a0: mov eax, 0xa2364c */
  eax = 0xa2364cu;
/* 9c03a5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c03b0(void) {
  LOAD_REGS();
  goto L_9c03b0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c03b0: /* 9c03b0: mov eax, 0xa236b8 */
  eax = 0xa236b8u;
/* 9c03b5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c03c0(void) {
  LOAD_REGS();
  goto L_9c03c0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c03c0: /* 9c03c0: mov eax, 0xa23724 */
  eax = 0xa23724u;
/* 9c03c5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c03d0(void) {
  LOAD_REGS();
L_9c03d0: /* 9c03d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c03d3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c03d9(void) {
  LOAD_REGS();
L_9c03d9: /* 9c03d9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c03dc: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c03df: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c03e5(void) {
  LOAD_REGS();
  goto L_9c03e5;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c03e5: /* 9c03e5: mov eax, 0xa2375c */
  eax = 0xa2375cu;
/* 9c03ea: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0400(void) {
  LOAD_REGS();
L_9c0400: /* 9c0400: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0403: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0409(void) {
  LOAD_REGS();
L_9c0409: /* 9c0409: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c040c: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c040f: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0415(void) {
  LOAD_REGS();
  goto L_9c0415;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0415: /* 9c0415: mov eax, 0xa2378c */
  eax = 0xa2378cu;
/* 9c041a: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0430(void) {
  LOAD_REGS();
L_9c0430: /* 9c0430: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0433: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0436: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c043c(void) {
  LOAD_REGS();
  goto L_9c043c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c043c: /* 9c043c: mov eax, 0xa237b4 */
  eax = 0xa237b4u;
/* 9c0441: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0450(void) {
  LOAD_REGS();
L_9c0450: /* 9c0450: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0453: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0459(void) {
  LOAD_REGS();
  goto L_9c0459;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0459: /* 9c0459: mov eax, 0xa237dc */
  eax = 0xa237dcu;
/* 9c045e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0470(void) {
  LOAD_REGS();
L_9c0470: /* 9c0470: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0473: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0479(void) {
  LOAD_REGS();
  goto L_9c0479;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0479: /* 9c0479: mov eax, 0xa23804 */
  eax = 0xa23804u;
/* 9c047e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0490(void) {
  LOAD_REGS();
L_9c0490: /* 9c0490: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0493: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0499(void) {
  LOAD_REGS();
  goto L_9c0499;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0499: /* 9c0499: mov eax, 0xa2382c */
  eax = 0xa2382cu;
/* 9c049e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c04b0(void) {
  LOAD_REGS();
L_9c04b0: /* 9c04b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c04b3: jmp 0x6c1023 */
  SPILL(); f_6c1023(); return;
}

void f_9c04b8(void) {
  LOAD_REGS();
  goto L_9c04b8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c04b8: /* 9c04b8: mov eax, 0xa23854 */
  eax = 0xa23854u;
/* 9c04bd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c04d0(void) {
  LOAD_REGS();
L_9c04d0: /* 9c04d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c04d3: jmp 0x6c1023 */
  SPILL(); f_6c1023(); return;
}

void f_9c04d8(void) {
  LOAD_REGS();
  goto L_9c04d8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c04d8: /* 9c04d8: mov eax, 0xa2387c */
  eax = 0xa2387cu;
/* 9c04dd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c04f0(void) {
  LOAD_REGS();
L_9c04f0: /* 9c04f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c04f3: jmp 0x6caf88 */
  SPILL(); f_6caf88(); return;
}

void f_9c04f8(void) {
  LOAD_REGS();
L_9c04f8: /* 9c04f8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c04fb: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c04fe: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c0504(void) {
  LOAD_REGS();
L_9c0504: /* 9c0504: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0507: add ecx, 0x88 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c050d: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c0513(void) {
  LOAD_REGS();
  goto L_9c0513;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0513: /* 9c0513: mov eax, 0xa238b4 */
  eax = 0xa238b4u;
/* 9c0518: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0530(void) {
  LOAD_REGS();
L_9c0530: /* 9c0530: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0533: jmp 0x6caf88 */
  SPILL(); f_6caf88(); return;
}

void f_9c0538(void) {
  LOAD_REGS();
  goto L_9c0538;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0538: /* 9c0538: mov eax, 0xa238e0 */
  eax = 0xa238e0u;
/* 9c053d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0550(void) {
  LOAD_REGS();
L_9c0550: /* 9c0550: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0553: jmp 0x6caf88 */
  SPILL(); f_6caf88(); return;
}

void f_9c0558(void) {
  LOAD_REGS();
  goto L_9c0558;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0558: /* 9c0558: mov eax, 0xa23908 */
  eax = 0xa23908u;
/* 9c055d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0570(void) {
  LOAD_REGS();
L_9c0570: /* 9c0570: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0573: jmp 0x6c9313 */
  SPILL(); f_6c9313(); return;
}

void f_9c0578(void) {
  LOAD_REGS();
  goto L_9c0578;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0578: /* 9c0578: mov eax, 0xa23930 */
  eax = 0xa23930u;
/* 9c057d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0590(void) {
  LOAD_REGS();
L_9c0590: /* 9c0590: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0593: jmp 0x6c9313 */
  SPILL(); f_6c9313(); return;
}

void f_9c0598(void) {
  LOAD_REGS();
  goto L_9c0598;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0598: /* 9c0598: mov eax, 0xa23958 */
  eax = 0xa23958u;
/* 9c059d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c05b0(void) {
  LOAD_REGS();
L_9c05b0: /* 9c05b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c05b3: jmp 0x6caf88 */
  SPILL(); f_6caf88(); return;
}

void f_9c05b8(void) {
  LOAD_REGS();
  goto L_9c05b8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c05b8: /* 9c05b8: mov eax, 0xa23980 */
  eax = 0xa23980u;
/* 9c05bd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c05d0(void) {
  LOAD_REGS();
L_9c05d0: /* 9c05d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c05d3: jmp 0x6c9f16 */
  SPILL(); f_6c9f16(); return;
}

void f_9c05d8(void) {
  LOAD_REGS();
  goto L_9c05d8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c05d8: /* 9c05d8: mov eax, 0xa239a8 */
  eax = 0xa239a8u;
/* 9c05dd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c05f0(void) {
  LOAD_REGS();
L_9c05f0: /* 9c05f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c05f3: jmp 0x6c1cc6 */
  SPILL(); f_6c1cc6(); return;
}

void f_9c05f8(void) {
  LOAD_REGS();
  goto L_9c05f8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c05f8: /* 9c05f8: mov eax, 0xa239d0 */
  eax = 0xa239d0u;
/* 9c05fd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0610(void) {
  LOAD_REGS();
L_9c0610: /* 9c0610: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0613: jmp 0x6c1cc6 */
  SPILL(); f_6c1cc6(); return;
}

void f_9c0618(void) {
  LOAD_REGS();
  goto L_9c0618;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0618: /* 9c0618: mov eax, 0xa239f8 */
  eax = 0xa239f8u;
/* 9c061d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0630(void) {
  LOAD_REGS();
L_9c0630: /* 9c0630: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0633: jmp 0x6c1cc6 */
  SPILL(); f_6c1cc6(); return;
}

void f_9c0638(void) {
  LOAD_REGS();
  goto L_9c0638;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0638: /* 9c0638: mov eax, 0xa23a20 */
  eax = 0xa23a20u;
/* 9c063d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0650(void) {
  LOAD_REGS();
L_9c0650: /* 9c0650: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0653: jmp 0x6ccf5e */
  SPILL(); f_6ccf5e(); return;
}

void f_9c0658(void) {
  LOAD_REGS();
  goto L_9c0658;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0658: /* 9c0658: mov eax, 0xa23a48 */
  eax = 0xa23a48u;
/* 9c065d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0670(void) {
  LOAD_REGS();
L_9c0670: /* 9c0670: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0673: jmp 0x6ccf5e */
  SPILL(); f_6ccf5e(); return;
}

void f_9c0678(void) {
  LOAD_REGS();
L_9c0678: /* 9c0678: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c067b: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c067e: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c0684(void) {
  LOAD_REGS();
  goto L_9c0684;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0684: /* 9c0684: mov eax, 0xa23a78 */
  eax = 0xa23a78u;
/* 9c0689: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c06a0(void) {
  LOAD_REGS();
L_9c06a0: /* 9c06a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c06a3: jmp 0x6ccf5e */
  SPILL(); f_6ccf5e(); return;
}

void f_9c06a8(void) {
  LOAD_REGS();
  goto L_9c06a8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c06a8: /* 9c06a8: mov eax, 0xa23aa0 */
  eax = 0xa23aa0u;
/* 9c06ad: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c06c0(void) {
  LOAD_REGS();
L_9c06c0: /* 9c06c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c06c3: jmp 0x6ccf5e */
  SPILL(); f_6ccf5e(); return;
}

void f_9c06c8(void) {
  LOAD_REGS();
L_9c06c8: /* 9c06c8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c06cb: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c06ce: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c06d4(void) {
  LOAD_REGS();
  goto L_9c06d4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c06d4: /* 9c06d4: mov eax, 0xa23ad0 */
  eax = 0xa23ad0u;
/* 9c06d9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c06f0(void) {
  LOAD_REGS();
L_9c06f0: /* 9c06f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c06f3: jmp 0x6c5894 */
  SPILL(); f_6c5894(); return;
}

void f_9c06f8(void) {
  LOAD_REGS();
  goto L_9c06f8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c06f8: /* 9c06f8: mov eax, 0xa23af8 */
  eax = 0xa23af8u;
/* 9c06fd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0710(void) {
  LOAD_REGS();
L_9c0710: /* 9c0710: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0713: jmp 0x6ccf5e */
  SPILL(); f_6ccf5e(); return;
}

void f_9c0718(void) {
  LOAD_REGS();
L_9c0718: /* 9c0718: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c071b: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c071e: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c0724(void) {
  LOAD_REGS();
  goto L_9c0724;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0724: /* 9c0724: mov eax, 0xa23b28 */
  eax = 0xa23b28u;
/* 9c0729: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0740(void) {
  LOAD_REGS();
L_9c0740: /* 9c0740: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0743: jmp 0x6ccf5e */
  SPILL(); f_6ccf5e(); return;
}

void f_9c0748(void) {
  LOAD_REGS();
L_9c0748: /* 9c0748: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c074b: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c074e: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c0754(void) {
  LOAD_REGS();
  goto L_9c0754;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0754: /* 9c0754: mov eax, 0xa23b58 */
  eax = 0xa23b58u;
/* 9c0759: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0770(void) {
  LOAD_REGS();
L_9c0770: /* 9c0770: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0773: jmp 0x6ccf5e */
  SPILL(); f_6ccf5e(); return;
}

void f_9c0778(void) {
  LOAD_REGS();
L_9c0778: /* 9c0778: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c077b: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c077e: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c0784(void) {
  LOAD_REGS();
  goto L_9c0784;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0784: /* 9c0784: mov eax, 0xa23b88 */
  eax = 0xa23b88u;
/* 9c0789: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c07a0(void) {
  LOAD_REGS();
L_9c07a0: /* 9c07a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c07a3: jmp 0x6ccf5e */
  SPILL(); f_6ccf5e(); return;
}

void f_9c07a8(void) {
  LOAD_REGS();
L_9c07a8: /* 9c07a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c07ab: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c07ae: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c07b4(void) {
  LOAD_REGS();
  goto L_9c07b4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c07b4: /* 9c07b4: mov eax, 0xa23bb8 */
  eax = 0xa23bb8u;
/* 9c07b9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c07d0(void) {
  LOAD_REGS();
L_9c07d0: /* 9c07d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c07d3: jmp 0x6ccf5e */
  SPILL(); f_6ccf5e(); return;
}

void f_9c07d8(void) {
  LOAD_REGS();
  goto L_9c07d8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c07d8: /* 9c07d8: mov eax, 0xa23be0 */
  eax = 0xa23be0u;
/* 9c07dd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c07f0(void) {
  LOAD_REGS();
L_9c07f0: /* 9c07f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c07f3: jmp 0x6c9b47 */
  SPILL(); f_6c9b47(); return;
}

void f_9c07f8(void) {
  LOAD_REGS();
  goto L_9c07f8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c07f8: /* 9c07f8: mov eax, 0xa23c08 */
  eax = 0xa23c08u;
/* 9c07fd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0810(void) {
  LOAD_REGS();
L_9c0810: /* 9c0810: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0813: jmp 0x6ccf5e */
  SPILL(); f_6ccf5e(); return;
}

void f_9c0818(void) {
  LOAD_REGS();
  goto L_9c0818;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0818: /* 9c0818: mov eax, 0xa23c30 */
  eax = 0xa23c30u;
/* 9c081d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0830(void) {
  LOAD_REGS();
L_9c0830: /* 9c0830: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0833: jmp 0x6c1cc6 */
  SPILL(); f_6c1cc6(); return;
}

void f_9c0838(void) {
  LOAD_REGS();
  goto L_9c0838;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0838: /* 9c0838: mov eax, 0xa23c58 */
  eax = 0xa23c58u;
/* 9c083d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0850(void) {
  LOAD_REGS();
L_9c0850: /* 9c0850: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0853: jmp 0x6c9f16 */
  SPILL(); f_6c9f16(); return;
}

void f_9c0858(void) {
  LOAD_REGS();
  goto L_9c0858;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0858: /* 9c0858: mov eax, 0xa23c80 */
  eax = 0xa23c80u;
/* 9c085d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0870(void) {
  LOAD_REGS();
L_9c0870: /* 9c0870: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0873: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0879(void) {
  LOAD_REGS();
  goto L_9c0879;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0879: /* 9c0879: mov eax, 0xa23ca8 */
  eax = 0xa23ca8u;
/* 9c087e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0890(void) {
  LOAD_REGS();
L_9c0890: /* 9c0890: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0893: jmp 0x6c205e */
  SPILL(); f_6c205e(); return;
}

void f_9c0898(void) {
  LOAD_REGS();
  goto L_9c0898;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0898: /* 9c0898: mov eax, 0xa23cd0 */
  eax = 0xa23cd0u;
/* 9c089d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c08b0(void) {
  LOAD_REGS();
L_9c08b0: /* 9c08b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c08b3: jmp 0x6c205e */
  SPILL(); f_6c205e(); return;
}

void f_9c08b8(void) {
  LOAD_REGS();
  goto L_9c08b8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c08b8: /* 9c08b8: mov eax, 0xa23cf8 */
  eax = 0xa23cf8u;
/* 9c08bd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c08d0(void) {
  LOAD_REGS();
L_9c08d0: /* 9c08d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c08d3: jmp 0x6c205e */
  SPILL(); f_6c205e(); return;
}

void f_9c08d8(void) {
  LOAD_REGS();
  goto L_9c08d8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c08d8: /* 9c08d8: mov eax, 0xa23d20 */
  eax = 0xa23d20u;
/* 9c08dd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c08f0(void) {
  LOAD_REGS();
L_9c08f0: /* 9c08f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c08f3: jmp 0x6c205e */
  SPILL(); f_6c205e(); return;
}

void f_9c08f8(void) {
  LOAD_REGS();
  goto L_9c08f8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c08f8: /* 9c08f8: mov eax, 0xa23d48 */
  eax = 0xa23d48u;
/* 9c08fd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0910(void) {
  LOAD_REGS();
L_9c0910: /* 9c0910: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0913: jmp 0x6c205e */
  SPILL(); f_6c205e(); return;
}

void f_9c0918(void) {
  LOAD_REGS();
  goto L_9c0918;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0918: /* 9c0918: mov eax, 0xa23d70 */
  eax = 0xa23d70u;
/* 9c091d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0930(void) {
  LOAD_REGS();
L_9c0930: /* 9c0930: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0933: jmp 0x6c205e */
  SPILL(); f_6c205e(); return;
}

void f_9c0938(void) {
  LOAD_REGS();
  goto L_9c0938;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0938: /* 9c0938: mov eax, 0xa23d98 */
  eax = 0xa23d98u;
/* 9c093d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0950(void) {
  LOAD_REGS();
L_9c0950: /* 9c0950: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0953: jmp 0x6c205e */
  SPILL(); f_6c205e(); return;
}

void f_9c0958(void) {
  LOAD_REGS();
  goto L_9c0958;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0958: /* 9c0958: mov eax, 0xa23dc0 */
  eax = 0xa23dc0u;
/* 9c095d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0970(void) {
  LOAD_REGS();
L_9c0970: /* 9c0970: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0973: jmp 0x6c205e */
  SPILL(); f_6c205e(); return;
}

void f_9c0978(void) {
  LOAD_REGS();
  goto L_9c0978;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0978: /* 9c0978: mov eax, 0xa23de8 */
  eax = 0xa23de8u;
/* 9c097d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0990(void) {
  LOAD_REGS();
L_9c0990: /* 9c0990: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0993: jmp 0x6c205e */
  SPILL(); f_6c205e(); return;
}

void f_9c0998(void) {
  LOAD_REGS();
  goto L_9c0998;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0998: /* 9c0998: mov eax, 0xa23e10 */
  eax = 0xa23e10u;
/* 9c099d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c09b0(void) {
  LOAD_REGS();
L_9c09b0: /* 9c09b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c09b3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c09b9(void) {
  LOAD_REGS();
  goto L_9c09b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c09b9: /* 9c09b9: mov eax, 0xa23e38 */
  eax = 0xa23e38u;
/* 9c09be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c09d0(void) {
  LOAD_REGS();
L_9c09d0: /* 9c09d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c09d3: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c09d8(void) {
  LOAD_REGS();
L_9c09d8: /* 9c09d8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c09db: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c09de: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c09e4(void) {
  LOAD_REGS();
  goto L_9c09e4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c09e4: /* 9c09e4: mov eax, 0xa23e68 */
  eax = 0xa23e68u;
/* 9c09e9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0a00(void) {
  LOAD_REGS();
L_9c0a00: /* 9c0a00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0a03: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c0a08(void) {
  LOAD_REGS();
  goto L_9c0a08;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0a08: /* 9c0a08: mov eax, 0xa23e90 */
  eax = 0xa23e90u;
/* 9c0a0d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0a20(void) {
  LOAD_REGS();
L_9c0a20: /* 9c0a20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0a23: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c0a28(void) {
  LOAD_REGS();
  goto L_9c0a28;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0a28: /* 9c0a28: mov eax, 0xa23eb8 */
  eax = 0xa23eb8u;
/* 9c0a2d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0a40(void) {
  LOAD_REGS();
L_9c0a40: /* 9c0a40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0a43: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0a48(void) {
  LOAD_REGS();
  goto L_9c0a48;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0a48: /* 9c0a48: mov eax, 0xa23ee0 */
  eax = 0xa23ee0u;
/* 9c0a4d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0a60(void) {
  LOAD_REGS();
L_9c0a60: /* 9c0a60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0a63: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c0a68(void) {
  LOAD_REGS();
L_9c0a68: /* 9c0a68: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0a6b: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0a70(void) {
  LOAD_REGS();
  goto L_9c0a70;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0a70: /* 9c0a70: mov eax, 0xa23f10 */
  eax = 0xa23f10u;
/* 9c0a75: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0a80(void) {
  LOAD_REGS();
L_9c0a80: /* 9c0a80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0a83: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0a88(void) {
  LOAD_REGS();
  goto L_9c0a88;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0a88: /* 9c0a88: mov eax, 0xa23f38 */
  eax = 0xa23f38u;
/* 9c0a8d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0aa0(void) {
  LOAD_REGS();
L_9c0aa0: /* 9c0aa0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0aa3: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c0aa8(void) {
  LOAD_REGS();
L_9c0aa8: /* 9c0aa8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0aab: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0ab0(void) {
  LOAD_REGS();
  goto L_9c0ab0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0ab0: /* 9c0ab0: mov eax, 0xa23f68 */
  eax = 0xa23f68u;
/* 9c0ab5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0ac0(void) {
  LOAD_REGS();
L_9c0ac0: /* 9c0ac0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0ac3: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0ac8(void) {
  LOAD_REGS();
  goto L_9c0ac8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0ac8: /* 9c0ac8: mov eax, 0xa23f90 */
  eax = 0xa23f90u;
/* 9c0acd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0ae0(void) {
  LOAD_REGS();
L_9c0ae0: /* 9c0ae0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0ae3: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c0ae8(void) {
  LOAD_REGS();
L_9c0ae8: /* 9c0ae8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0aeb: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0af0(void) {
  LOAD_REGS();
  goto L_9c0af0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0af0: /* 9c0af0: mov eax, 0xa23fc0 */
  eax = 0xa23fc0u;
/* 9c0af5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0b00(void) {
  LOAD_REGS();
L_9c0b00: /* 9c0b00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0b03: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0b08(void) {
  LOAD_REGS();
  goto L_9c0b08;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0b08: /* 9c0b08: mov eax, 0xa23fe8 */
  eax = 0xa23fe8u;
/* 9c0b0d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0b20(void) {
  LOAD_REGS();
L_9c0b20: /* 9c0b20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0b23: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c0b28(void) {
  LOAD_REGS();
L_9c0b28: /* 9c0b28: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0b2b: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0b30(void) {
  LOAD_REGS();
  goto L_9c0b30;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0b30: /* 9c0b30: mov eax, 0xa24018 */
  eax = 0xa24018u;
/* 9c0b35: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0b40(void) {
  LOAD_REGS();
L_9c0b40: /* 9c0b40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0b43: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0b48(void) {
  LOAD_REGS();
  goto L_9c0b48;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0b48: /* 9c0b48: mov eax, 0xa24040 */
  eax = 0xa24040u;
/* 9c0b4d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0b60(void) {
  LOAD_REGS();
L_9c0b60: /* 9c0b60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0b63: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c0b68(void) {
  LOAD_REGS();
L_9c0b68: /* 9c0b68: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0b6b: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0b70(void) {
  LOAD_REGS();
  goto L_9c0b70;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0b70: /* 9c0b70: mov eax, 0xa24070 */
  eax = 0xa24070u;
/* 9c0b75: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0b80(void) {
  LOAD_REGS();
L_9c0b80: /* 9c0b80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0b83: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0b88(void) {
  LOAD_REGS();
  goto L_9c0b88;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0b88: /* 9c0b88: mov eax, 0xa24098 */
  eax = 0xa24098u;
/* 9c0b8d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0ba0(void) {
  LOAD_REGS();
L_9c0ba0: /* 9c0ba0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0ba3: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c0ba8(void) {
  LOAD_REGS();
L_9c0ba8: /* 9c0ba8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0bab: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0bb0(void) {
  LOAD_REGS();
  goto L_9c0bb0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0bb0: /* 9c0bb0: mov eax, 0xa240c8 */
  eax = 0xa240c8u;
/* 9c0bb5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0bc0(void) {
  LOAD_REGS();
L_9c0bc0: /* 9c0bc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0bc3: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0bc8(void) {
  LOAD_REGS();
  goto L_9c0bc8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0bc8: /* 9c0bc8: mov eax, 0xa240f0 */
  eax = 0xa240f0u;
/* 9c0bcd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0be0(void) {
  LOAD_REGS();
L_9c0be0: /* 9c0be0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0be3: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c0be8(void) {
  LOAD_REGS();
L_9c0be8: /* 9c0be8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0beb: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0bf0(void) {
  LOAD_REGS();
  goto L_9c0bf0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0bf0: /* 9c0bf0: mov eax, 0xa24120 */
  eax = 0xa24120u;
/* 9c0bf5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0c00(void) {
  LOAD_REGS();
L_9c0c00: /* 9c0c00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0c03: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c0c08(void) {
  LOAD_REGS();
  goto L_9c0c08;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0c08: /* 9c0c08: mov eax, 0xa24148 */
  eax = 0xa24148u;
/* 9c0c0d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0c20(void) {
  LOAD_REGS();
L_9c0c20: /* 9c0c20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0c23: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c0c28(void) {
  LOAD_REGS();
  goto L_9c0c28;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0c28: /* 9c0c28: mov eax, 0xa24170 */
  eax = 0xa24170u;
/* 9c0c2d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0c40(void) {
  LOAD_REGS();
L_9c0c40: /* 9c0c40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0c43: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0c49(void) {
  LOAD_REGS();
  goto L_9c0c49;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0c49: /* 9c0c49: mov eax, 0xa24198 */
  eax = 0xa24198u;
/* 9c0c4e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0c60(void) {
  LOAD_REGS();
L_9c0c60: /* 9c0c60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0c63: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0c69(void) {
  LOAD_REGS();
L_9c0c69: /* 9c0c69: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0c6c: add ecx, 0x90 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0c72: jmp dword ptr [0xcfa318] */
  SPILL(); f_4e3134(); return; /* Core!??1FInterpCurve@@QAE@XZ */
}

void f_9c0c78(void) {
  LOAD_REGS();
L_9c0c78: /* 9c0c78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0c7b: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0c81: jmp dword ptr [0xcfa318] */
  SPILL(); f_4e3134(); return; /* Core!??1FInterpCurve@@QAE@XZ */
}

void f_9c0c87(void) {
  LOAD_REGS();
  goto L_9c0c87;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0c87: /* 9c0c87: mov eax, 0xa241d0 */
  eax = 0xa241d0u;
/* 9c0c8c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0ca0(void) {
  LOAD_REGS();
L_9c0ca0: /* 9c0ca0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0ca3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0ca9(void) {
  LOAD_REGS();
L_9c0ca9: /* 9c0ca9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0cac: add ecx, 0x90 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0cb2: jmp dword ptr [0xcfa318] */
  SPILL(); f_4e3134(); return; /* Core!??1FInterpCurve@@QAE@XZ */
}

void f_9c0cb8(void) {
  LOAD_REGS();
  goto L_9c0cb8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0cb8: /* 9c0cb8: mov eax, 0xa24204 */
  eax = 0xa24204u;
/* 9c0cbd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0cd0(void) {
  LOAD_REGS();
L_9c0cd0: /* 9c0cd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0cd3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0cd9(void) {
  LOAD_REGS();
L_9c0cd9: /* 9c0cd9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0cdc: add ecx, 0x90 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0ce2: jmp dword ptr [0xcfa318] */
  SPILL(); f_4e3134(); return; /* Core!??1FInterpCurve@@QAE@XZ */
}

void f_9c0ce8(void) {
  LOAD_REGS();
  goto L_9c0ce8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0ce8: /* 9c0ce8: mov eax, 0xa24234 */
  eax = 0xa24234u;
/* 9c0ced: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0d00(void) {
  LOAD_REGS();
L_9c0d00: /* 9c0d00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0d03: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0d09(void) {
  LOAD_REGS();
  goto L_9c0d09;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0d09: /* 9c0d09: mov eax, 0xa2425c */
  eax = 0xa2425cu;
/* 9c0d0e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0d20(void) {
  LOAD_REGS();
L_9c0d20: /* 9c0d20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0d23: jmp 0x6c5fab */
  SPILL(); f_6c5fab(); return;
}

void f_9c0d28(void) {
  LOAD_REGS();
  goto L_9c0d28;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0d28: /* 9c0d28: mov eax, 0xa24284 */
  eax = 0xa24284u;
/* 9c0d2d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0d40(void) {
  LOAD_REGS();
L_9c0d40: /* 9c0d40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0d43: jmp 0x6cc9eb */
  SPILL(); f_6cc9eb(); return;
}

void f_9c0d48(void) {
  LOAD_REGS();
  goto L_9c0d48;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0d48: /* 9c0d48: mov eax, 0xa242ac */
  eax = 0xa242acu;
/* 9c0d4d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0d60(void) {
  LOAD_REGS();
L_9c0d60: /* 9c0d60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0d63: jmp 0x6cc9eb */
  SPILL(); f_6cc9eb(); return;
}

void f_9c0d68(void) {
  LOAD_REGS();
  goto L_9c0d68;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0d68: /* 9c0d68: mov eax, 0xa242d4 */
  eax = 0xa242d4u;
/* 9c0d6d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0d80(void) {
  LOAD_REGS();
L_9c0d80: /* 9c0d80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0d83: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0d89(void) {
  LOAD_REGS();
L_9c0d89: /* 9c0d89: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0d8c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0d8f: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0d95(void) {
  LOAD_REGS();
  goto L_9c0d95;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0d95: /* 9c0d95: mov eax, 0xa24304 */
  eax = 0xa24304u;
/* 9c0d9a: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0db0(void) {
  LOAD_REGS();
L_9c0db0: /* 9c0db0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0db3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0db9(void) {
  LOAD_REGS();
L_9c0db9: /* 9c0db9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0dbc: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0dbf: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0dc5(void) {
  LOAD_REGS();
  goto L_9c0dc5;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0dc5: /* 9c0dc5: mov eax, 0xa24334 */
  eax = 0xa24334u;
/* 9c0dca: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0de0(void) {
  LOAD_REGS();
L_9c0de0: /* 9c0de0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0de3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0de9(void) {
  LOAD_REGS();
L_9c0de9: /* 9c0de9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0dec: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0def: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0df5(void) {
  LOAD_REGS();
  goto L_9c0df5;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0df5: /* 9c0df5: mov eax, 0xa24364 */
  eax = 0xa24364u;
/* 9c0dfa: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0e10(void) {
  LOAD_REGS();
L_9c0e10: /* 9c0e10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0e13: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0e19(void) {
  LOAD_REGS();
L_9c0e19: /* 9c0e19: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0e1c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0e1f: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c0e25(void) {
  LOAD_REGS();
  goto L_9c0e25;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0e25: /* 9c0e25: mov eax, 0xa24394 */
  eax = 0xa24394u;
/* 9c0e2a: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0e40(void) {
  LOAD_REGS();
L_9c0e40: /* 9c0e40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0e43: jmp 0x6cc9eb */
  SPILL(); f_6cc9eb(); return;
}

void f_9c0e48(void) {
  LOAD_REGS();
L_9c0e48: /* 9c0e48: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0e4b: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0e4e: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c0e54(void) {
  LOAD_REGS();
L_9c0e54: /* 9c0e54: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 9c0e59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c0e5a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9c0e5c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9c0e5e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0e61: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0e64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9c0e65: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9c0e6au); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9c0e6a: ret  */
  esp += 4; SPILL(); return;
}

void f_9c0e6b(void) {
  LOAD_REGS();
  goto L_9c0e6b;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0e6b: /* 9c0e6b: mov eax, 0xa243cc */
  eax = 0xa243ccu;
/* 9c0e70: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0e90(void) {
  LOAD_REGS();
L_9c0e90: /* 9c0e90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0e93: jmp 0x6cc9eb */
  SPILL(); f_6cc9eb(); return;
}

void f_9c0e98(void) {
  LOAD_REGS();
L_9c0e98: /* 9c0e98: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0e9b: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0e9e: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c0ea4(void) {
  LOAD_REGS();
  goto L_9c0ea4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0ea4: /* 9c0ea4: mov eax, 0xa24400 */
  eax = 0xa24400u;
/* 9c0ea9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0ec0(void) {
  LOAD_REGS();
L_9c0ec0: /* 9c0ec0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0ec3: jmp 0x6cc9eb */
  SPILL(); f_6cc9eb(); return;
}

void f_9c0ec8(void) {
  LOAD_REGS();
L_9c0ec8: /* 9c0ec8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0ecb: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0ece: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c0ed4(void) {
  LOAD_REGS();
  goto L_9c0ed4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0ed4: /* 9c0ed4: mov eax, 0xa24430 */
  eax = 0xa24430u;
/* 9c0ed9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0ef0(void) {
  LOAD_REGS();
L_9c0ef0: /* 9c0ef0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0ef3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0ef9(void) {
  LOAD_REGS();
  goto L_9c0ef9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0ef9: /* 9c0ef9: mov eax, 0xa24458 */
  eax = 0xa24458u;
/* 9c0efe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0f10(void) {
  LOAD_REGS();
L_9c0f10: /* 9c0f10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0f13: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0f19(void) {
  LOAD_REGS();
  goto L_9c0f19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0f19: /* 9c0f19: mov eax, 0xa24480 */
  eax = 0xa24480u;
/* 9c0f1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0f30(void) {
  LOAD_REGS();
L_9c0f30: /* 9c0f30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0f33: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0f39(void) {
  LOAD_REGS();
  goto L_9c0f39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0f39: /* 9c0f39: mov eax, 0xa244a8 */
  eax = 0xa244a8u;
/* 9c0f3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0f50(void) {
  LOAD_REGS();
L_9c0f50: /* 9c0f50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0f53: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0f59(void) {
  LOAD_REGS();
  goto L_9c0f59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0f59: /* 9c0f59: mov eax, 0xa244d0 */
  eax = 0xa244d0u;
/* 9c0f5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0f70(void) {
  LOAD_REGS();
L_9c0f70: /* 9c0f70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0f73: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0f79(void) {
  LOAD_REGS();
L_9c0f79: /* 9c0f79: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0f7c: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0f7f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c0f85(void) {
  LOAD_REGS();
L_9c0f85: /* 9c0f85: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0f88: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0f8b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c0f91(void) {
  LOAD_REGS();
L_9c0f91: /* 9c0f91: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0f94: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0f97: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c0f9d(void) {
  LOAD_REGS();
  goto L_9c0f9d;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0f9d: /* 9c0f9d: mov eax, 0xa24510 */
  eax = 0xa24510u;
/* 9c0fa2: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c0fc0(void) {
  LOAD_REGS();
L_9c0fc0: /* 9c0fc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0fc3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c0fc9(void) {
  LOAD_REGS();
L_9c0fc9: /* 9c0fc9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0fcc: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0fcf: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c0fd5(void) {
  LOAD_REGS();
L_9c0fd5: /* 9c0fd5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c0fd8: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c0fdb: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c0fe1(void) {
  LOAD_REGS();
  goto L_9c0fe1;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c0fe1: /* 9c0fe1: mov eax, 0xa2454c */
  eax = 0xa2454cu;
/* 9c0fe6: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1000(void) {
  LOAD_REGS();
  goto L_9c1000;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1000: /* 9c1000: mov eax, 0xa245b4 */
  eax = 0xa245b4u;
/* 9c1005: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1010(void) {
  LOAD_REGS();
L_9c1010: /* 9c1010: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1013: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c1019(void) {
  LOAD_REGS();
L_9c1019: /* 9c1019: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c101c: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c101f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c1025(void) {
  LOAD_REGS();
L_9c1025: /* 9c1025: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1028: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c102b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c1031(void) {
  LOAD_REGS();
  goto L_9c1031;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1031: /* 9c1031: mov eax, 0xa245f4 */
  eax = 0xa245f4u;
/* 9c1036: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1050(void) {
  LOAD_REGS();
L_9c1050: /* 9c1050: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1053: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c1059(void) {
  LOAD_REGS();
  goto L_9c1059;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1059: /* 9c1059: mov eax, 0xa24620 */
  eax = 0xa24620u;
/* 9c105e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1070(void) {
  LOAD_REGS();
L_9c1070: /* 9c1070: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1073: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c1079(void) {
  LOAD_REGS();
  goto L_9c1079;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1079: /* 9c1079: mov eax, 0xa24648 */
  eax = 0xa24648u;
/* 9c107e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1090(void) {
  LOAD_REGS();
L_9c1090: /* 9c1090: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1093: jmp dword ptr [0xcfa2a0] */
  SPILL(); f_4e152d(); return; /* Core!??1USubsystem@@UAE@XZ */
}

void f_9c1099(void) {
  LOAD_REGS();
  goto L_9c1099;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1099: /* 9c1099: mov eax, 0xa24670 */
  eax = 0xa24670u;
/* 9c109e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c10b0(void) {
  LOAD_REGS();
L_9c10b0: /* 9c10b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c10b3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c10b9(void) {
  LOAD_REGS();
L_9c10b9: /* 9c10b9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c10bc: add ecx, 0x74 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c10bf: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c10c5(void) {
  LOAD_REGS();
L_9c10c5: /* 9c10c5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c10c8: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c10ce: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c10d4(void) {
  LOAD_REGS();
L_9c10d4: /* 9c10d4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c10d7: add ecx, 0x8c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c10dd: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c10e3(void) {
  LOAD_REGS();
  goto L_9c10e3;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c10e3: /* 9c10e3: mov eax, 0xa246b0 */
  eax = 0xa246b0u;
/* 9c10e8: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1100(void) {
  LOAD_REGS();
L_9c1100: /* 9c1100: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1103: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c1109(void) {
  LOAD_REGS();
L_9c1109: /* 9c1109: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c110c: add ecx, 0x74 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c110f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c1115(void) {
  LOAD_REGS();
L_9c1115: /* 9c1115: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1118: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c111e: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c1124(void) {
  LOAD_REGS();
  goto L_9c1124;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1124: /* 9c1124: mov eax, 0xa246ec */
  eax = 0xa246ecu;
/* 9c1129: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1140(void) {
  LOAD_REGS();
L_9c1140: /* 9c1140: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1143: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c1149(void) {
  LOAD_REGS();
L_9c1149: /* 9c1149: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c114c: add ecx, 0x74 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c114f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c1155(void) {
  LOAD_REGS();
L_9c1155: /* 9c1155: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1158: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c115e: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c1164(void) {
  LOAD_REGS();
  goto L_9c1164;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1164: /* 9c1164: mov eax, 0xa24728 */
  eax = 0xa24728u;
/* 9c1169: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1180(void) {
  LOAD_REGS();
L_9c1180: /* 9c1180: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1183: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c1189(void) {
  LOAD_REGS();
  goto L_9c1189;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1189: /* 9c1189: mov eax, 0xa24754 */
  eax = 0xa24754u;
/* 9c118e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c11a0(void) {
  LOAD_REGS();
L_9c11a0: /* 9c11a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c11a3: jmp 0x6c1348 */
  SPILL(); f_6c1348(); return;
}

void f_9c11a8(void) {
  LOAD_REGS();
  goto L_9c11a8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c11a8: /* 9c11a8: mov eax, 0xa2477c */
  eax = 0xa2477cu;
/* 9c11ad: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c11c0(void) {
  LOAD_REGS();
L_9c11c0: /* 9c11c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c11c3: jmp 0x6c1348 */
  SPILL(); f_6c1348(); return;
}

void f_9c11c8(void) {
  LOAD_REGS();
  goto L_9c11c8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c11c8: /* 9c11c8: mov eax, 0xa247a4 */
  eax = 0xa247a4u;
/* 9c11cd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c11e0(void) {
  LOAD_REGS();
L_9c11e0: /* 9c11e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c11e3: jmp 0x6c349f */
  SPILL(); f_6c349f(); return;
}

void f_9c11e8(void) {
  LOAD_REGS();
  goto L_9c11e8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c11e8: /* 9c11e8: mov eax, 0xa247cc */
  eax = 0xa247ccu;
/* 9c11ed: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1200(void) {
  LOAD_REGS();
L_9c1200: /* 9c1200: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1203: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c1208(void) {
  LOAD_REGS();
  goto L_9c1208;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1208: /* 9c1208: mov eax, 0xa247f4 */
  eax = 0xa247f4u;
/* 9c120d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1220(void) {
  LOAD_REGS();
L_9c1220: /* 9c1220: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1223: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c1226: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c122c(void) {
  LOAD_REGS();
  goto L_9c122c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c122c: /* 9c122c: mov eax, 0xa2481c */
  eax = 0xa2481cu;
/* 9c1231: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1240(void) {
  LOAD_REGS();
L_9c1240: /* 9c1240: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1243: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c1246: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c124c(void) {
  LOAD_REGS();
L_9c124c: /* 9c124c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c124f: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c1252: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c1258(void) {
  LOAD_REGS();
  goto L_9c1258;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1258: /* 9c1258: mov eax, 0xa2484c */
  eax = 0xa2484cu;
/* 9c125d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1270(void) {
  LOAD_REGS();
L_9c1270: /* 9c1270: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1273: jmp 0x6c41ec */
  SPILL(); f_6c41ec(); return;
}

void f_9c1278(void) {
  LOAD_REGS();
  goto L_9c1278;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1278: /* 9c1278: mov eax, 0xa24874 */
  eax = 0xa24874u;
/* 9c127d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1290(void) {
  LOAD_REGS();
L_9c1290: /* 9c1290: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1293: jmp 0x6c41ec */
  SPILL(); f_6c41ec(); return;
}

void f_9c1298(void) {
  LOAD_REGS();
  goto L_9c1298;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1298: /* 9c1298: mov eax, 0xa2489c */
  eax = 0xa2489cu;
/* 9c129d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c12b0(void) {
  LOAD_REGS();
L_9c12b0: /* 9c12b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c12b3: jmp 0x6c41ec */
  SPILL(); f_6c41ec(); return;
}

void f_9c12b8(void) {
  LOAD_REGS();
  goto L_9c12b8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c12b8: /* 9c12b8: mov eax, 0xa248c4 */
  eax = 0xa248c4u;
/* 9c12bd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c12d0(void) {
  LOAD_REGS();
L_9c12d0: /* 9c12d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c12d3: jmp 0x6c2cca */
  SPILL(); f_6c2cca(); return;
}

void f_9c12d8(void) {
  LOAD_REGS();
  goto L_9c12d8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c12d8: /* 9c12d8: mov eax, 0xa248ec */
  eax = 0xa248ecu;
/* 9c12dd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c12f0(void) {
  LOAD_REGS();
L_9c12f0: /* 9c12f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c12f3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c12f9(void) {
  LOAD_REGS();
  goto L_9c12f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c12f9: /* 9c12f9: mov eax, 0xa24914 */
  eax = 0xa24914u;
/* 9c12fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1310(void) {
  LOAD_REGS();
L_9c1310: /* 9c1310: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1313: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c1314: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9c1319u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9c1319: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9c131a: ret  */
  esp += 4; SPILL(); return;
}

void f_9c131b(void) {
  LOAD_REGS();
  goto L_9c131b;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c131b: /* 9c131b: mov eax, 0xa2493c */
  eax = 0xa2493cu;
/* 9c1320: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1330(void) {
  LOAD_REGS();
L_9c1330: /* 9c1330: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1333: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c1334: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9c1339u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9c1339: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9c133a: ret  */
  esp += 4; SPILL(); return;
}

void f_9c133b(void) {
  LOAD_REGS();
  goto L_9c133b;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c133b: /* 9c133b: mov eax, 0xa24964 */
  eax = 0xa24964u;
/* 9c1340: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1350(void) {
  LOAD_REGS();
L_9c1350: /* 9c1350: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1353: jmp dword ptr [0xcfa2a0] */
  SPILL(); f_4e152d(); return; /* Core!??1USubsystem@@UAE@XZ */
}

void f_9c1359(void) {
  LOAD_REGS();
  goto L_9c1359;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1359: /* 9c1359: mov eax, 0xa2498c */
  eax = 0xa2498cu;
/* 9c135e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1370(void) {
  LOAD_REGS();
L_9c1370: /* 9c1370: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1373: jmp 0x6c41ec */
  SPILL(); f_6c41ec(); return;
}

void f_9c1378(void) {
  LOAD_REGS();
  goto L_9c1378;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1378: /* 9c1378: mov eax, 0xa249b4 */
  eax = 0xa249b4u;
/* 9c137d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1390(void) {
  LOAD_REGS();
L_9c1390: /* 9c1390: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1393: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c1396: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c139c(void) {
  LOAD_REGS();
  goto L_9c139c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c139c: /* 9c139c: mov eax, 0xa249dc */
  eax = 0xa249dcu;
/* 9c13a1: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c13b0(void) {
  LOAD_REGS();
L_9c13b0: /* 9c13b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c13b3: jmp 0x6c41ec */
  SPILL(); f_6c41ec(); return;
}

void f_9c13b8(void) {
  LOAD_REGS();
  goto L_9c13b8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c13b8: /* 9c13b8: mov eax, 0xa24a04 */
  eax = 0xa24a04u;
/* 9c13bd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c13d0(void) {
  LOAD_REGS();
  goto L_9c13d0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c13d0: /* 9c13d0: mov eax, 0xa24a68 */
  eax = 0xa24a68u;
/* 9c13d5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c13e0(void) {
  LOAD_REGS();
L_9c13e0: /* 9c13e0: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9c13e4: je 0x9c13f8 */
  if (zf) goto L_9c13f8;
L_9c13ea: /* 9c13ea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9c13ed: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c13f0: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9c13f3: jmp 0x9c13ff */
  goto L_9c13ff;
L_9c13f8: /* 9c13f8: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_9c13ff: /* 9c13ff: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c1402: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c1408(void) {
  LOAD_REGS();
  goto L_9c1408;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1408: /* 9c1408: mov eax, 0xa24adc */
  eax = 0xa24adcu;
/* 9c140d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1420(void) {
  LOAD_REGS();
  goto L_9c1420;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1420: /* 9c1420: mov eax, 0xa24b48 */
  eax = 0xa24b48u;
/* 9c1425: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1430(void) {
  LOAD_REGS();
L_9c1430: /* 9c1430: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1433: jmp dword ptr [0xcfa318] */
  SPILL(); f_4e3134(); return; /* Core!??1FInterpCurve@@QAE@XZ */
}

void f_9c1439(void) {
  LOAD_REGS();
  goto L_9c1439;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1439: /* 9c1439: mov eax, 0xa24b78 */
  eax = 0xa24b78u;
/* 9c143e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1450(void) {
  LOAD_REGS();
L_9c1450: /* 9c1450: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1453: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c1456: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c145c(void) {
  LOAD_REGS();
  goto L_9c145c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c145c: /* 9c145c: mov eax, 0xa24ba0 */
  eax = 0xa24ba0u;
/* 9c1461: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1470(void) {
  LOAD_REGS();
L_9c1470: /* 9c1470: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1473: jmp dword ptr [0xcfa318] */
  SPILL(); f_4e3134(); return; /* Core!??1FInterpCurve@@QAE@XZ */
}

void f_9c1479(void) {
  LOAD_REGS();
  goto L_9c1479;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1479: /* 9c1479: mov eax, 0xa24bc8 */
  eax = 0xa24bc8u;
/* 9c147e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1490(void) {
  LOAD_REGS();
L_9c1490: /* 9c1490: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1493: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c1496: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c149c(void) {
  LOAD_REGS();
  goto L_9c149c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c149c: /* 9c149c: mov eax, 0xa24bf0 */
  eax = 0xa24bf0u;
/* 9c14a1: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c14b0(void) {
  LOAD_REGS();
L_9c14b0: /* 9c14b0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9c14b3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c14b9(void) {
  LOAD_REGS();
  goto L_9c14b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c14b9: /* 9c14b9: mov eax, 0xa24c5c */
  eax = 0xa24c5cu;
/* 9c14be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c14d0(void) {
  LOAD_REGS();
  goto L_9c14d0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c14d0: /* 9c14d0: mov eax, 0xa24cc8 */
  eax = 0xa24cc8u;
/* 9c14d5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c14e0(void) {
  LOAD_REGS();
L_9c14e0: /* 9c14e0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 9c14e3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c14e9(void) {
  LOAD_REGS();
L_9c14e9: /* 9c14e9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9c14ec: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c14f2(void) {
  LOAD_REGS();
  goto L_9c14f2;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c14f2: /* 9c14f2: mov eax, 0xa24d44 */
  eax = 0xa24d44u;
/* 9c14f7: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1510(void) {
  LOAD_REGS();
L_9c1510: /* 9c1510: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 9c1513: jmp 0x6ccc16 */
  SPILL(); f_6ccc16(); return;
}

void f_9c1518(void) {
  LOAD_REGS();
L_9c1518: /* 9c1518: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c151b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9c151e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9c1520: je 0x9c152e */
  if (zf) goto L_9c152e;
L_9c1526: /* 9c1526: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 9c1529: jmp 0x6ccc16 */
  SPILL(); f_6ccc16(); return;
L_9c152e: /* 9c152e: ret  */
  esp += 4; SPILL(); return;
}

void f_9c152f(void) {
  LOAD_REGS();
  goto L_9c152f;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c152f: /* 9c152f: mov eax, 0xa24d7c */
  eax = 0xa24d7cu;
/* 9c1534: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1550(void) {
  LOAD_REGS();
L_9c1550: /* 9c1550: lea ecx, [ebp - 0x2d8] */
  ecx = (uint32_t)(ebp + 0xfffffd28u);
/* 9c1556: jmp 0x6cca59 */
  SPILL(); f_6cca59(); return;
}

void f_9c155b(void) {
  LOAD_REGS();
L_9c155b: /* 9c155b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 9c155e: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c1564(void) {
  LOAD_REGS();
L_9c1564: /* 9c1564: lea ecx, [ebp - 0x318] */
  ecx = (uint32_t)(ebp + 0xfffffce8u);
/* 9c156a: jmp 0x6c64fb */
  SPILL(); f_6c64fb(); return;
}

void f_9c156f(void) {
  LOAD_REGS();
L_9c156f: /* 9c156f: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 9c1575: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c157b(void) {
  LOAD_REGS();
L_9c157b: /* 9c157b: lea ecx, [ebp - 0x14c] */
  ecx = (uint32_t)(ebp + 0xfffffeb4u);
/* 9c1581: jmp 0x6c3e59 */
  SPILL(); f_6c3e59(); return;
}

void f_9c1586(void) {
  LOAD_REGS();
L_9c1586: /* 9c1586: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 9c158c: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c1592(void) {
  LOAD_REGS();
L_9c1592: /* 9c1592: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 9c1598: jmp 0x6cca59 */
  SPILL(); f_6cca59(); return;
}

void f_9c159d(void) {
  LOAD_REGS();
L_9c159d: /* 9c159d: lea ecx, [ebp - 0x20c] */
  ecx = (uint32_t)(ebp + 0xfffffdf4u);
/* 9c15a3: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c15a9(void) {
  LOAD_REGS();
L_9c15a9: /* 9c15a9: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 9c15af: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c15b5(void) {
  LOAD_REGS();
L_9c15b5: /* 9c15b5: mov eax, dword ptr [ebp - 0x328] */
  eax = R32((uint32_t)(ebp + 0xfffffcd8u));
/* 9c15bb: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9c15be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9c15c0: je 0x9c15cf */
  if (zf) goto L_9c15cf;
L_9c15c6: /* 9c15c6: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 9c15c9: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
L_9c15cf: /* 9c15cf: ret  */
  esp += 4; SPILL(); return;
}

void f_9c15d0(void) {
  LOAD_REGS();
  goto L_9c15d0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c15d0: /* 9c15d0: mov eax, 0xa24dec */
  eax = 0xa24decu;
/* 9c15d5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1600(void) {
  LOAD_REGS();
L_9c1600: /* 9c1600: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 9c1603: jmp 0x6c185c */
  SPILL(); f_6c185c(); return;
}

void f_9c1608(void) {
  LOAD_REGS();
  goto L_9c1608;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1608: /* 9c1608: mov eax, 0xa24e1c */
  eax = 0xa24e1cu;
/* 9c160d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1620(void) {
  LOAD_REGS();
L_9c1620: /* 9c1620: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 9c1623: jmp 0x6c5e7a */
  SPILL(); f_6c5e7a(); return;
}

void f_9c1628(void) {
  LOAD_REGS();
  goto L_9c1628;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1628: /* 9c1628: mov eax, 0xa24e44 */
  eax = 0xa24e44u;
/* 9c162d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1640(void) {
  LOAD_REGS();
L_9c1640: /* 9c1640: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 9c1643: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c1649(void) {
  LOAD_REGS();
L_9c1649: /* 9c1649: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9c164c: jmp 0x6c8373 */
  SPILL(); f_6c8373(); return;
}

void f_9c1651(void) {
  LOAD_REGS();
  goto L_9c1651;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1651: /* 9c1651: mov eax, 0xa24e74 */
  eax = 0xa24e74u;
/* 9c1656: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1670(void) {
  LOAD_REGS();
L_9c1670: /* 9c1670: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 9c1673: jmp 0x6c4d18 */
  SPILL(); f_6c4d18(); return;
}

void f_9c1678(void) {
  LOAD_REGS();
  goto L_9c1678;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1678: /* 9c1678: mov eax, 0xa24e9c */
  eax = 0xa24e9cu;
/* 9c167d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1690(void) {
  LOAD_REGS();
L_9c1690: /* 9c1690: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 9c1693: jmp 0x6c12fd */
  SPILL(); f_6c12fd(); return;
}

void f_9c1698(void) {
  LOAD_REGS();
  goto L_9c1698;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1698: /* 9c1698: mov eax, 0xa24ec4 */
  eax = 0xa24ec4u;
/* 9c169d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c16b0(void) {
  LOAD_REGS();
L_9c16b0: /* 9c16b0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 9c16b3: jmp 0x6c2509 */
  SPILL(); f_6c2509(); return;
}

void f_9c16b8(void) {
  LOAD_REGS();
L_9c16b8: /* 9c16b8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 9c16bb: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9c16be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9c16c0: je 0x9c16cf */
  if (zf) goto L_9c16cf;
L_9c16c6: /* 9c16c6: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 9c16c9: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_9c16cf: /* 9c16cf: ret  */
  esp += 4; SPILL(); return;
}

void f_9c16d0(void) {
  LOAD_REGS();
  goto L_9c16d0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c16d0: /* 9c16d0: mov eax, 0xa24ef4 */
  eax = 0xa24ef4u;
/* 9c16d5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c16f0(void) {
  LOAD_REGS();
L_9c16f0: /* 9c16f0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9c16f3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c16f9(void) {
  LOAD_REGS();
L_9c16f9: /* 9c16f9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9c16fc: jmp 0x6c7c57 */
  SPILL(); f_6c7c57(); return;
}

void f_9c1701(void) {
  LOAD_REGS();
L_9c1701: /* 9c1701: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9c1704: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c170a(void) {
  LOAD_REGS();
  goto L_9c170a;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c170a: /* 9c170a: mov eax, 0xa24f2c */
  eax = 0xa24f2cu;
/* 9c170f: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1720(void) {
  LOAD_REGS();
L_9c1720: /* 9c1720: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 9c1723: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c1729(void) {
  LOAD_REGS();
L_9c1729: /* 9c1729: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 9c172c: jmp 0x6c3b02 */
  SPILL(); f_6c3b02(); return;
}

void f_9c1731(void) {
  LOAD_REGS();
  goto L_9c1731;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1731: /* 9c1731: mov eax, 0xa24f60 */
  eax = 0xa24f60u;
/* 9c1736: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1750(void) {
  LOAD_REGS();
L_9c1750: /* 9c1750: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 9c1753: jmp 0x6c1645 */
  SPILL(); f_6c1645(); return;
}

void f_9c1758(void) {
  LOAD_REGS();
  goto L_9c1758;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1758: /* 9c1758: mov eax, 0xa24f88 */
  eax = 0xa24f88u;
/* 9c175d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1770(void) {
  LOAD_REGS();
L_9c1770: /* 9c1770: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 9c1773: jmp 0x6c8701 */
  SPILL(); f_6c8701(); return;
}

void f_9c1778(void) {
  LOAD_REGS();
  goto L_9c1778;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1778: /* 9c1778: mov eax, 0xa24fb0 */
  eax = 0xa24fb0u;
/* 9c177d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1790(void) {
  LOAD_REGS();
L_9c1790: /* 9c1790: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9c1793: jmp 0x6c9e0d */
  SPILL(); f_6c9e0d(); return;
}

void f_9c1798(void) {
  LOAD_REGS();
  goto L_9c1798;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1798: /* 9c1798: mov eax, 0xa24fd8 */
  eax = 0xa24fd8u;
/* 9c179d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c17b0(void) {
  LOAD_REGS();
L_9c17b0: /* 9c17b0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 9c17b3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c17b9(void) {
  LOAD_REGS();
L_9c17b9: /* 9c17b9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9c17bc: jmp 0x6c1785 */
  SPILL(); f_6c1785(); return;
}

void f_9c17c1(void) {
  LOAD_REGS();
  goto L_9c17c1;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c17c1: /* 9c17c1: mov eax, 0xa25008 */
  eax = 0xa25008u;
/* 9c17c6: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c17e0(void) {
  LOAD_REGS();
L_9c17e0: /* 9c17e0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 9c17e3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c17e9(void) {
  LOAD_REGS();
L_9c17e9: /* 9c17e9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 9c17ec: jmp 0x6c543e */
  SPILL(); f_6c543e(); return;
}

void f_9c17f1(void) {
  LOAD_REGS();
  goto L_9c17f1;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c17f1: /* 9c17f1: mov eax, 0xa25038 */
  eax = 0xa25038u;
/* 9c17f6: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1810(void) {
  LOAD_REGS();
L_9c1810: /* 9c1810: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 9c1813: jmp 0x6c534e */
  SPILL(); f_6c534e(); return;
}

void f_9c1818(void) {
  LOAD_REGS();
  goto L_9c1818;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1818: /* 9c1818: mov eax, 0xa25060 */
  eax = 0xa25060u;
/* 9c181d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1830(void) {
  LOAD_REGS();
L_9c1830: /* 9c1830: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 9c1833: jmp 0x6c367a */
  SPILL(); f_6c367a(); return;
}

void f_9c1838(void) {
  LOAD_REGS();
  goto L_9c1838;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1838: /* 9c1838: mov eax, 0xa25088 */
  eax = 0xa25088u;
/* 9c183d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1850(void) {
  LOAD_REGS();
L_9c1850: /* 9c1850: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9c1853: jmp 0x6cbf7d */
  SPILL(); f_6cbf7d(); return;
}

void f_9c1858(void) {
  LOAD_REGS();
  goto L_9c1858;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1858: /* 9c1858: mov eax, 0xa250b0 */
  eax = 0xa250b0u;
/* 9c185d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1870(void) {
  LOAD_REGS();
L_9c1870: /* 9c1870: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9c1873: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c1879(void) {
  LOAD_REGS();
L_9c1879: /* 9c1879: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9c187c: jmp 0x6cb9e2 */
  SPILL(); f_6cb9e2(); return;
}

void f_9c1881(void) {
  LOAD_REGS();
L_9c1881: /* 9c1881: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 9c1884: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c188a(void) {
  LOAD_REGS();
  goto L_9c188a;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c188a: /* 9c188a: mov eax, 0xa250e8 */
  eax = 0xa250e8u;
/* 9c188f: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c18a0(void) {
  LOAD_REGS();
L_9c18a0: /* 9c18a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c18a3: jmp 0x6caf88 */
  SPILL(); f_6caf88(); return;
}

void f_9c18a8(void) {
  LOAD_REGS();
L_9c18a8: /* 9c18a8: push 0x6cb582 */
  { uint32_t v = 0x6cb582u; esp -= 4; W32(esp, v); }
/* 9c18ad: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9c18af: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 9c18b1: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c18b4: add eax, 0x68 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c18b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c18b8: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9c18bdu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9c18bd: ret  */
  esp += 4; SPILL(); return;
}

void f_9c18be(void) {
  LOAD_REGS();
  goto L_9c18be;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c18be: /* 9c18be: mov eax, 0xa2511c */
  eax = 0xa2511cu;
/* 9c18c3: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c18e0(void) {
  LOAD_REGS();
L_9c18e0: /* 9c18e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c18e3: jmp 0x6caf88 */
  SPILL(); f_6caf88(); return;
}

void f_9c18e8(void) {
  LOAD_REGS();
  goto L_9c18e8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c18e8: /* 9c18e8: mov eax, 0xa25144 */
  eax = 0xa25144u;
/* 9c18ed: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1900(void) {
  LOAD_REGS();
L_9c1900: /* 9c1900: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 9c1903: jmp 0x6c88aa */
  SPILL(); f_6c88aa(); return;
}

void f_9c1908(void) {
  LOAD_REGS();
  goto L_9c1908;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1908: /* 9c1908: mov eax, 0xa2516c */
  eax = 0xa2516cu;
/* 9c190d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1920(void) {
  LOAD_REGS();
L_9c1920: /* 9c1920: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 9c1923: jmp 0x6c3c10 */
  SPILL(); f_6c3c10(); return;
}

void f_9c1928(void) {
  LOAD_REGS();
  goto L_9c1928;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1928: /* 9c1928: mov eax, 0xa25194 */
  eax = 0xa25194u;
/* 9c192d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1940(void) {
  LOAD_REGS();
L_9c1940: /* 9c1940: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 9c1943: jmp 0x6c2ef0 */
  SPILL(); f_6c2ef0(); return;
}

void f_9c1948(void) {
  LOAD_REGS();
  goto L_9c1948;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1948: /* 9c1948: mov eax, 0xa251bc */
  eax = 0xa251bcu;
/* 9c194d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1960(void) {
  LOAD_REGS();
L_9c1960: /* 9c1960: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 9c1963: jmp 0x6c199c */
  SPILL(); f_6c199c(); return;
}

void f_9c1968(void) {
  LOAD_REGS();
  goto L_9c1968;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1968: /* 9c1968: mov eax, 0xa251e4 */
  eax = 0xa251e4u;
/* 9c196d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1980(void) {
  LOAD_REGS();
L_9c1980: /* 9c1980: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 9c1983: jmp 0x6caf4c */
  SPILL(); f_6caf4c(); return;
}

void f_9c1988(void) {
  LOAD_REGS();
  goto L_9c1988;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1988: /* 9c1988: mov eax, 0xa2520c */
  eax = 0xa2520cu;
/* 9c198d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c19a0(void) {
  LOAD_REGS();
  goto L_9c19a0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c19a0: /* 9c19a0: mov eax, 0xa25270 */
  eax = 0xa25270u;
/* 9c19a5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c19b0(void) {
  LOAD_REGS();
L_9c19b0: /* 9c19b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c19b3: jmp dword ptr [0xcfa2a0] */
  SPILL(); f_4e152d(); return; /* Core!??1USubsystem@@UAE@XZ */
}

void f_9c19b9(void) {
  LOAD_REGS();
L_9c19b9: /* 9c19b9: push 0x6c8e22 */
  { uint32_t v = 0x6c8e22u; esp -= 4; W32(esp, v); }
/* 9c19be: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 9c19c0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9c19c2: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c19c5: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c19c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c19c9: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9c19ceu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9c19ce: ret  */
  esp += 4; SPILL(); return;
}

void f_9c19cf(void) {
  LOAD_REGS();
L_9c19cf: /* 9c19cf: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 9c19d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c19d5: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 9c19da: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9c19dc: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c19df: add ecx, 0x2ac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2acu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c19e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9c19e6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9c19ebu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9c19eb: ret  */
  esp += 4; SPILL(); return;
}

void f_9c19ec(void) {
  LOAD_REGS();
  goto L_9c19ec;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c19ec: /* 9c19ec: mov eax, 0xa252b0 */
  eax = 0xa252b0u;
/* 9c19f1: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1a10(void) {
  LOAD_REGS();
L_9c1a10: /* 9c1a10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1a13: jmp dword ptr [0xcfa2a0] */
  SPILL(); f_4e152d(); return; /* Core!??1USubsystem@@UAE@XZ */
}

void f_9c1a19(void) {
  LOAD_REGS();
  goto L_9c1a19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1a19: /* 9c1a19: mov eax, 0xa252dc */
  eax = 0xa252dcu;
/* 9c1a1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1a30(void) {
  LOAD_REGS();
  goto L_9c1a30;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1a30: /* 9c1a30: mov eax, 0xa25340 */
  eax = 0xa25340u;
/* 9c1a35: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1a40(void) {
  LOAD_REGS();
L_9c1a40: /* 9c1a40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1a43: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1a49(void) {
  LOAD_REGS();
  goto L_9c1a49;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1a49: /* 9c1a49: mov eax, 0xa25370 */
  eax = 0xa25370u;
/* 9c1a4e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1a60(void) {
  LOAD_REGS();
L_9c1a60: /* 9c1a60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1a63: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1a69(void) {
  LOAD_REGS();
  goto L_9c1a69;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1a69: /* 9c1a69: mov eax, 0xa25398 */
  eax = 0xa25398u;
/* 9c1a6e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1a80(void) {
  LOAD_REGS();
L_9c1a80: /* 9c1a80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1a83: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1a89(void) {
  LOAD_REGS();
  goto L_9c1a89;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1a89: /* 9c1a89: mov eax, 0xa253c0 */
  eax = 0xa253c0u;
/* 9c1a8e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1aa0(void) {
  LOAD_REGS();
  goto L_9c1aa0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1aa0: /* 9c1aa0: mov eax, 0xa25424 */
  eax = 0xa25424u;
/* 9c1aa5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1ab0(void) {
  LOAD_REGS();
L_9c1ab0: /* 9c1ab0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c1ab3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1ab9(void) {
  LOAD_REGS();
  goto L_9c1ab9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1ab9: /* 9c1ab9: mov eax, 0xa25454 */
  eax = 0xa25454u;
/* 9c1abe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1ad0(void) {
  LOAD_REGS();
L_9c1ad0: /* 9c1ad0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1ad3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1ad9(void) {
  LOAD_REGS();
  goto L_9c1ad9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1ad9: /* 9c1ad9: mov eax, 0xa2547c */
  eax = 0xa2547cu;
/* 9c1ade: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1af0(void) {
  LOAD_REGS();
L_9c1af0: /* 9c1af0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c1af3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1af9(void) {
  LOAD_REGS();
  goto L_9c1af9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1af9: /* 9c1af9: mov eax, 0xa254a4 */
  eax = 0xa254a4u;
/* 9c1afe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1b10(void) {
  LOAD_REGS();
L_9c1b10: /* 9c1b10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1b13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1b19(void) {
  LOAD_REGS();
  goto L_9c1b19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1b19: /* 9c1b19: mov eax, 0xa254cc */
  eax = 0xa254ccu;
/* 9c1b1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1b30(void) {
  LOAD_REGS();
L_9c1b30: /* 9c1b30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1b33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1b39(void) {
  LOAD_REGS();
  goto L_9c1b39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1b39: /* 9c1b39: mov eax, 0xa254f4 */
  eax = 0xa254f4u;
/* 9c1b3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1b50(void) {
  LOAD_REGS();
L_9c1b50: /* 9c1b50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1b53: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1b59(void) {
  LOAD_REGS();
  goto L_9c1b59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1b59: /* 9c1b59: mov eax, 0xa2551c */
  eax = 0xa2551cu;
/* 9c1b5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1b70(void) {
  LOAD_REGS();
L_9c1b70: /* 9c1b70: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c1b73: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1b79(void) {
  LOAD_REGS();
  goto L_9c1b79;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1b79: /* 9c1b79: mov eax, 0xa25544 */
  eax = 0xa25544u;
/* 9c1b7e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1b90(void) {
  LOAD_REGS();
L_9c1b90: /* 9c1b90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1b93: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1b99(void) {
  LOAD_REGS();
  goto L_9c1b99;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1b99: /* 9c1b99: mov eax, 0xa2556c */
  eax = 0xa2556cu;
/* 9c1b9e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1bb0(void) {
  LOAD_REGS();
L_9c1bb0: /* 9c1bb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1bb3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1bb9(void) {
  LOAD_REGS();
  goto L_9c1bb9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1bb9: /* 9c1bb9: mov eax, 0xa25594 */
  eax = 0xa25594u;
/* 9c1bbe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1bd0(void) {
  LOAD_REGS();
L_9c1bd0: /* 9c1bd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1bd3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1bd9(void) {
  LOAD_REGS();
  goto L_9c1bd9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1bd9: /* 9c1bd9: mov eax, 0xa255bc */
  eax = 0xa255bcu;
/* 9c1bde: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1bf0(void) {
  LOAD_REGS();
L_9c1bf0: /* 9c1bf0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1bf3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1bf9(void) {
  LOAD_REGS();
  goto L_9c1bf9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1bf9: /* 9c1bf9: mov eax, 0xa255e4 */
  eax = 0xa255e4u;
/* 9c1bfe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1c10(void) {
  LOAD_REGS();
L_9c1c10: /* 9c1c10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1c13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1c19(void) {
  LOAD_REGS();
  goto L_9c1c19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1c19: /* 9c1c19: mov eax, 0xa2560c */
  eax = 0xa2560cu;
/* 9c1c1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1c30(void) {
  LOAD_REGS();
L_9c1c30: /* 9c1c30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1c33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1c39(void) {
  LOAD_REGS();
  goto L_9c1c39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1c39: /* 9c1c39: mov eax, 0xa25634 */
  eax = 0xa25634u;
/* 9c1c3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1c50(void) {
  LOAD_REGS();
L_9c1c50: /* 9c1c50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1c53: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1c59(void) {
  LOAD_REGS();
  goto L_9c1c59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1c59: /* 9c1c59: mov eax, 0xa2565c */
  eax = 0xa2565cu;
/* 9c1c5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1c70(void) {
  LOAD_REGS();
L_9c1c70: /* 9c1c70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1c73: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1c79(void) {
  LOAD_REGS();
  goto L_9c1c79;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1c79: /* 9c1c79: mov eax, 0xa25684 */
  eax = 0xa25684u;
/* 9c1c7e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1c90(void) {
  LOAD_REGS();
L_9c1c90: /* 9c1c90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1c93: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1c99(void) {
  LOAD_REGS();
  goto L_9c1c99;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1c99: /* 9c1c99: mov eax, 0xa256ac */
  eax = 0xa256acu;
/* 9c1c9e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1cb0(void) {
  LOAD_REGS();
L_9c1cb0: /* 9c1cb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1cb3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1cb9(void) {
  LOAD_REGS();
  goto L_9c1cb9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1cb9: /* 9c1cb9: mov eax, 0xa256d4 */
  eax = 0xa256d4u;
/* 9c1cbe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1cd0(void) {
  LOAD_REGS();
L_9c1cd0: /* 9c1cd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1cd3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1cd9(void) {
  LOAD_REGS();
  goto L_9c1cd9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1cd9: /* 9c1cd9: mov eax, 0xa256fc */
  eax = 0xa256fcu;
/* 9c1cde: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1cf0(void) {
  LOAD_REGS();
L_9c1cf0: /* 9c1cf0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1cf3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1cf9(void) {
  LOAD_REGS();
  goto L_9c1cf9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1cf9: /* 9c1cf9: mov eax, 0xa25724 */
  eax = 0xa25724u;
/* 9c1cfe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1d10(void) {
  LOAD_REGS();
L_9c1d10: /* 9c1d10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1d13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1d19(void) {
  LOAD_REGS();
  goto L_9c1d19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1d19: /* 9c1d19: mov eax, 0xa2574c */
  eax = 0xa2574cu;
/* 9c1d1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1d30(void) {
  LOAD_REGS();
L_9c1d30: /* 9c1d30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1d33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1d39(void) {
  LOAD_REGS();
  goto L_9c1d39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1d39: /* 9c1d39: mov eax, 0xa25774 */
  eax = 0xa25774u;
/* 9c1d3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1d50(void) {
  LOAD_REGS();
L_9c1d50: /* 9c1d50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1d53: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1d59(void) {
  LOAD_REGS();
  goto L_9c1d59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1d59: /* 9c1d59: mov eax, 0xa2579c */
  eax = 0xa2579cu;
/* 9c1d5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1d70(void) {
  LOAD_REGS();
L_9c1d70: /* 9c1d70: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9c1d74: je 0x9c1d88 */
  if (zf) goto L_9c1d88;
L_9c1d7a: /* 9c1d7a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9c1d7d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c1d80: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9c1d83: jmp 0x9c1d8f */
  goto L_9c1d8f;
L_9c1d88: /* 9c1d88: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_9c1d8f: /* 9c1d8f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c1d92: jmp 0x6c3e13 */
  SPILL(); f_6c3e13(); return;
}

void f_9c1d97(void) {
  LOAD_REGS();
  goto L_9c1d97;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1d97: /* 9c1d97: mov eax, 0xa25808 */
  eax = 0xa25808u;
/* 9c1d9c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1db0(void) {
  LOAD_REGS();
  goto L_9c1db0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1db0: /* 9c1db0: mov eax, 0xa25874 */
  eax = 0xa25874u;
/* 9c1db5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1dc0(void) {
  LOAD_REGS();
  goto L_9c1dc0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1dc0: /* 9c1dc0: mov eax, 0xa258e0 */
  eax = 0xa258e0u;
/* 9c1dc5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1dd0(void) {
  LOAD_REGS();
L_9c1dd0: /* 9c1dd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1dd3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1dd9(void) {
  LOAD_REGS();
  goto L_9c1dd9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1dd9: /* 9c1dd9: mov eax, 0xa25910 */
  eax = 0xa25910u;
/* 9c1dde: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1df0(void) {
  LOAD_REGS();
L_9c1df0: /* 9c1df0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1df3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1df9(void) {
  LOAD_REGS();
  goto L_9c1df9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1df9: /* 9c1df9: mov eax, 0xa25938 */
  eax = 0xa25938u;
/* 9c1dfe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1e10(void) {
  LOAD_REGS();
L_9c1e10: /* 9c1e10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1e13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1e19(void) {
  LOAD_REGS();
  goto L_9c1e19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1e19: /* 9c1e19: mov eax, 0xa25960 */
  eax = 0xa25960u;
/* 9c1e1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1e30(void) {
  LOAD_REGS();
L_9c1e30: /* 9c1e30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1e33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1e39(void) {
  LOAD_REGS();
  goto L_9c1e39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1e39: /* 9c1e39: mov eax, 0xa25988 */
  eax = 0xa25988u;
/* 9c1e3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1e50(void) {
  LOAD_REGS();
L_9c1e50: /* 9c1e50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1e53: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1e59(void) {
  LOAD_REGS();
  goto L_9c1e59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1e59: /* 9c1e59: mov eax, 0xa259b0 */
  eax = 0xa259b0u;
/* 9c1e5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1e70(void) {
  LOAD_REGS();
L_9c1e70: /* 9c1e70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1e73: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1e79(void) {
  LOAD_REGS();
  goto L_9c1e79;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1e79: /* 9c1e79: mov eax, 0xa259d8 */
  eax = 0xa259d8u;
/* 9c1e7e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1e90(void) {
  LOAD_REGS();
L_9c1e90: /* 9c1e90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1e93: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1e99(void) {
  LOAD_REGS();
  goto L_9c1e99;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1e99: /* 9c1e99: mov eax, 0xa25a00 */
  eax = 0xa25a00u;
/* 9c1e9e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1eb0(void) {
  LOAD_REGS();
L_9c1eb0: /* 9c1eb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1eb3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1eb9(void) {
  LOAD_REGS();
  goto L_9c1eb9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1eb9: /* 9c1eb9: mov eax, 0xa25a28 */
  eax = 0xa25a28u;
/* 9c1ebe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1ed0(void) {
  LOAD_REGS();
L_9c1ed0: /* 9c1ed0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1ed3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1ed9(void) {
  LOAD_REGS();
  goto L_9c1ed9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1ed9: /* 9c1ed9: mov eax, 0xa25a50 */
  eax = 0xa25a50u;
/* 9c1ede: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1ef0(void) {
  LOAD_REGS();
L_9c1ef0: /* 9c1ef0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1ef3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1ef9(void) {
  LOAD_REGS();
  goto L_9c1ef9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1ef9: /* 9c1ef9: mov eax, 0xa25a78 */
  eax = 0xa25a78u;
/* 9c1efe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1f10(void) {
  LOAD_REGS();
L_9c1f10: /* 9c1f10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1f13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1f19(void) {
  LOAD_REGS();
  goto L_9c1f19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1f19: /* 9c1f19: mov eax, 0xa25aa0 */
  eax = 0xa25aa0u;
/* 9c1f1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1f30(void) {
  LOAD_REGS();
L_9c1f30: /* 9c1f30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1f33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1f39(void) {
  LOAD_REGS();
  goto L_9c1f39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1f39: /* 9c1f39: mov eax, 0xa25ac8 */
  eax = 0xa25ac8u;
/* 9c1f3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1f50(void) {
  LOAD_REGS();
L_9c1f50: /* 9c1f50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1f53: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1f59(void) {
  LOAD_REGS();
  goto L_9c1f59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1f59: /* 9c1f59: mov eax, 0xa25af0 */
  eax = 0xa25af0u;
/* 9c1f5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1f70(void) {
  LOAD_REGS();
L_9c1f70: /* 9c1f70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1f73: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1f79(void) {
  LOAD_REGS();
  goto L_9c1f79;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1f79: /* 9c1f79: mov eax, 0xa25b18 */
  eax = 0xa25b18u;
/* 9c1f7e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1f90(void) {
  LOAD_REGS();
L_9c1f90: /* 9c1f90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1f93: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1f99(void) {
  LOAD_REGS();
  goto L_9c1f99;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1f99: /* 9c1f99: mov eax, 0xa25b40 */
  eax = 0xa25b40u;
/* 9c1f9e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1fb0(void) {
  LOAD_REGS();
L_9c1fb0: /* 9c1fb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1fb3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1fb9(void) {
  LOAD_REGS();
  goto L_9c1fb9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1fb9: /* 9c1fb9: mov eax, 0xa25b68 */
  eax = 0xa25b68u;
/* 9c1fbe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1fd0(void) {
  LOAD_REGS();
L_9c1fd0: /* 9c1fd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1fd3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1fd9(void) {
  LOAD_REGS();
  goto L_9c1fd9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c1fd9: /* 9c1fd9: mov eax, 0xa25b90 */
  eax = 0xa25b90u;
/* 9c1fde: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c1ff0(void) {
  LOAD_REGS();
L_9c1ff0: /* 9c1ff0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 9c1ff3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c1ff9(void) {
  LOAD_REGS();
L_9c1ff9: /* 9c1ff9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c1ffc: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c2002(void) {
  LOAD_REGS();
  goto L_9c2002;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2002: /* 9c2002: mov eax, 0xa25bc0 */
  eax = 0xa25bc0u;
/* 9c2007: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2020(void) {
  LOAD_REGS();
L_9c2020: /* 9c2020: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2023: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2029(void) {
  LOAD_REGS();
  goto L_9c2029;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2029: /* 9c2029: mov eax, 0xa25be8 */
  eax = 0xa25be8u;
/* 9c202e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2040(void) {
  LOAD_REGS();
L_9c2040: /* 9c2040: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2043: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2049(void) {
  LOAD_REGS();
  goto L_9c2049;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2049: /* 9c2049: mov eax, 0xa25c10 */
  eax = 0xa25c10u;
/* 9c204e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2060(void) {
  LOAD_REGS();
L_9c2060: /* 9c2060: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2063: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2069(void) {
  LOAD_REGS();
  goto L_9c2069;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2069: /* 9c2069: mov eax, 0xa25c38 */
  eax = 0xa25c38u;
/* 9c206e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2080(void) {
  LOAD_REGS();
L_9c2080: /* 9c2080: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2083: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2089(void) {
  LOAD_REGS();
  goto L_9c2089;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2089: /* 9c2089: mov eax, 0xa25c60 */
  eax = 0xa25c60u;
/* 9c208e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c20a0(void) {
  LOAD_REGS();
L_9c20a0: /* 9c20a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c20a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c20a9(void) {
  LOAD_REGS();
  goto L_9c20a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c20a9: /* 9c20a9: mov eax, 0xa25c88 */
  eax = 0xa25c88u;
/* 9c20ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c20c0(void) {
  LOAD_REGS();
L_9c20c0: /* 9c20c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c20c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c20c9(void) {
  LOAD_REGS();
  goto L_9c20c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c20c9: /* 9c20c9: mov eax, 0xa25cb0 */
  eax = 0xa25cb0u;
/* 9c20ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c20e0(void) {
  LOAD_REGS();
L_9c20e0: /* 9c20e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c20e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c20e9(void) {
  LOAD_REGS();
  goto L_9c20e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c20e9: /* 9c20e9: mov eax, 0xa25cd8 */
  eax = 0xa25cd8u;
/* 9c20ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2100(void) {
  LOAD_REGS();
L_9c2100: /* 9c2100: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2103: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2109(void) {
  LOAD_REGS();
  goto L_9c2109;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2109: /* 9c2109: mov eax, 0xa25d00 */
  eax = 0xa25d00u;
/* 9c210e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2120(void) {
  LOAD_REGS();
L_9c2120: /* 9c2120: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2123: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2129(void) {
  LOAD_REGS();
  goto L_9c2129;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2129: /* 9c2129: mov eax, 0xa25d28 */
  eax = 0xa25d28u;
/* 9c212e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2140(void) {
  LOAD_REGS();
L_9c2140: /* 9c2140: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2143: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2149(void) {
  LOAD_REGS();
  goto L_9c2149;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2149: /* 9c2149: mov eax, 0xa25d50 */
  eax = 0xa25d50u;
/* 9c214e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2160(void) {
  LOAD_REGS();
L_9c2160: /* 9c2160: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2163: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2169(void) {
  LOAD_REGS();
  goto L_9c2169;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2169: /* 9c2169: mov eax, 0xa25d78 */
  eax = 0xa25d78u;
/* 9c216e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2180(void) {
  LOAD_REGS();
L_9c2180: /* 9c2180: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2183: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2189(void) {
  LOAD_REGS();
  goto L_9c2189;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2189: /* 9c2189: mov eax, 0xa25da0 */
  eax = 0xa25da0u;
/* 9c218e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c21a0(void) {
  LOAD_REGS();
L_9c21a0: /* 9c21a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c21a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c21a9(void) {
  LOAD_REGS();
  goto L_9c21a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c21a9: /* 9c21a9: mov eax, 0xa25dc8 */
  eax = 0xa25dc8u;
/* 9c21ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c21c0(void) {
  LOAD_REGS();
L_9c21c0: /* 9c21c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c21c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c21c9(void) {
  LOAD_REGS();
  goto L_9c21c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c21c9: /* 9c21c9: mov eax, 0xa25df0 */
  eax = 0xa25df0u;
/* 9c21ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c21e0(void) {
  LOAD_REGS();
L_9c21e0: /* 9c21e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c21e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c21e9(void) {
  LOAD_REGS();
  goto L_9c21e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c21e9: /* 9c21e9: mov eax, 0xa25e18 */
  eax = 0xa25e18u;
/* 9c21ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2200(void) {
  LOAD_REGS();
L_9c2200: /* 9c2200: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2203: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2209(void) {
  LOAD_REGS();
  goto L_9c2209;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2209: /* 9c2209: mov eax, 0xa25e40 */
  eax = 0xa25e40u;
/* 9c220e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2220(void) {
  LOAD_REGS();
L_9c2220: /* 9c2220: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2223: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2229(void) {
  LOAD_REGS();
  goto L_9c2229;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2229: /* 9c2229: mov eax, 0xa25e68 */
  eax = 0xa25e68u;
/* 9c222e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2240(void) {
  LOAD_REGS();
L_9c2240: /* 9c2240: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2243: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2249(void) {
  LOAD_REGS();
  goto L_9c2249;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2249: /* 9c2249: mov eax, 0xa25e90 */
  eax = 0xa25e90u;
/* 9c224e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2260(void) {
  LOAD_REGS();
L_9c2260: /* 9c2260: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2263: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2269(void) {
  LOAD_REGS();
  goto L_9c2269;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2269: /* 9c2269: mov eax, 0xa25eb8 */
  eax = 0xa25eb8u;
/* 9c226e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2280(void) {
  LOAD_REGS();
L_9c2280: /* 9c2280: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2283: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2289(void) {
  LOAD_REGS();
  goto L_9c2289;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2289: /* 9c2289: mov eax, 0xa25ee0 */
  eax = 0xa25ee0u;
/* 9c228e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c22a0(void) {
  LOAD_REGS();
L_9c22a0: /* 9c22a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c22a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c22a9(void) {
  LOAD_REGS();
  goto L_9c22a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c22a9: /* 9c22a9: mov eax, 0xa25f08 */
  eax = 0xa25f08u;
/* 9c22ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c22c0(void) {
  LOAD_REGS();
L_9c22c0: /* 9c22c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c22c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c22c9(void) {
  LOAD_REGS();
  goto L_9c22c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c22c9: /* 9c22c9: mov eax, 0xa25f30 */
  eax = 0xa25f30u;
/* 9c22ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c22e0(void) {
  LOAD_REGS();
L_9c22e0: /* 9c22e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c22e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c22e9(void) {
  LOAD_REGS();
  goto L_9c22e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c22e9: /* 9c22e9: mov eax, 0xa25f58 */
  eax = 0xa25f58u;
/* 9c22ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2300(void) {
  LOAD_REGS();
L_9c2300: /* 9c2300: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2303: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2309(void) {
  LOAD_REGS();
  goto L_9c2309;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2309: /* 9c2309: mov eax, 0xa25f80 */
  eax = 0xa25f80u;
/* 9c230e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2320(void) {
  LOAD_REGS();
L_9c2320: /* 9c2320: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2323: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2329(void) {
  LOAD_REGS();
  goto L_9c2329;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2329: /* 9c2329: mov eax, 0xa25fa8 */
  eax = 0xa25fa8u;
/* 9c232e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2340(void) {
  LOAD_REGS();
L_9c2340: /* 9c2340: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2343: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2349(void) {
  LOAD_REGS();
  goto L_9c2349;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2349: /* 9c2349: mov eax, 0xa25fd0 */
  eax = 0xa25fd0u;
/* 9c234e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2360(void) {
  LOAD_REGS();
L_9c2360: /* 9c2360: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2363: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2369(void) {
  LOAD_REGS();
  goto L_9c2369;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2369: /* 9c2369: mov eax, 0xa25ff8 */
  eax = 0xa25ff8u;
/* 9c236e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2380(void) {
  LOAD_REGS();
L_9c2380: /* 9c2380: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2383: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2389(void) {
  LOAD_REGS();
  goto L_9c2389;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2389: /* 9c2389: mov eax, 0xa26020 */
  eax = 0xa26020u;
/* 9c238e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c23a0(void) {
  LOAD_REGS();
L_9c23a0: /* 9c23a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c23a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c23a9(void) {
  LOAD_REGS();
  goto L_9c23a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c23a9: /* 9c23a9: mov eax, 0xa26048 */
  eax = 0xa26048u;
/* 9c23ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c23c0(void) {
  LOAD_REGS();
L_9c23c0: /* 9c23c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c23c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c23c9(void) {
  LOAD_REGS();
  goto L_9c23c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c23c9: /* 9c23c9: mov eax, 0xa26070 */
  eax = 0xa26070u;
/* 9c23ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c23e0(void) {
  LOAD_REGS();
L_9c23e0: /* 9c23e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c23e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c23e9(void) {
  LOAD_REGS();
  goto L_9c23e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c23e9: /* 9c23e9: mov eax, 0xa26098 */
  eax = 0xa26098u;
/* 9c23ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2400(void) {
  LOAD_REGS();
L_9c2400: /* 9c2400: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2403: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2409(void) {
  LOAD_REGS();
  goto L_9c2409;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2409: /* 9c2409: mov eax, 0xa260c0 */
  eax = 0xa260c0u;
/* 9c240e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2420(void) {
  LOAD_REGS();
L_9c2420: /* 9c2420: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2423: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2429(void) {
  LOAD_REGS();
  goto L_9c2429;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2429: /* 9c2429: mov eax, 0xa260e8 */
  eax = 0xa260e8u;
/* 9c242e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2440(void) {
  LOAD_REGS();
L_9c2440: /* 9c2440: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2443: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2449(void) {
  LOAD_REGS();
  goto L_9c2449;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2449: /* 9c2449: mov eax, 0xa26110 */
  eax = 0xa26110u;
/* 9c244e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2460(void) {
  LOAD_REGS();
L_9c2460: /* 9c2460: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2463: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2469(void) {
  LOAD_REGS();
  goto L_9c2469;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2469: /* 9c2469: mov eax, 0xa26138 */
  eax = 0xa26138u;
/* 9c246e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2480(void) {
  LOAD_REGS();
L_9c2480: /* 9c2480: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2483: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2489(void) {
  LOAD_REGS();
  goto L_9c2489;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2489: /* 9c2489: mov eax, 0xa26160 */
  eax = 0xa26160u;
/* 9c248e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c24a0(void) {
  LOAD_REGS();
L_9c24a0: /* 9c24a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c24a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c24a9(void) {
  LOAD_REGS();
  goto L_9c24a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c24a9: /* 9c24a9: mov eax, 0xa26188 */
  eax = 0xa26188u;
/* 9c24ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c24c0(void) {
  LOAD_REGS();
L_9c24c0: /* 9c24c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c24c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c24c9(void) {
  LOAD_REGS();
  goto L_9c24c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c24c9: /* 9c24c9: mov eax, 0xa261b0 */
  eax = 0xa261b0u;
/* 9c24ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c24e0(void) {
  LOAD_REGS();
L_9c24e0: /* 9c24e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c24e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c24e9(void) {
  LOAD_REGS();
  goto L_9c24e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c24e9: /* 9c24e9: mov eax, 0xa261d8 */
  eax = 0xa261d8u;
/* 9c24ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2500(void) {
  LOAD_REGS();
L_9c2500: /* 9c2500: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2503: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2509(void) {
  LOAD_REGS();
  goto L_9c2509;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2509: /* 9c2509: mov eax, 0xa26200 */
  eax = 0xa26200u;
/* 9c250e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2520(void) {
  LOAD_REGS();
L_9c2520: /* 9c2520: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2523: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2529(void) {
  LOAD_REGS();
  goto L_9c2529;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2529: /* 9c2529: mov eax, 0xa26228 */
  eax = 0xa26228u;
/* 9c252e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2540(void) {
  LOAD_REGS();
L_9c2540: /* 9c2540: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2543: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2549(void) {
  LOAD_REGS();
  goto L_9c2549;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2549: /* 9c2549: mov eax, 0xa26250 */
  eax = 0xa26250u;
/* 9c254e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2560(void) {
  LOAD_REGS();
L_9c2560: /* 9c2560: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2563: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2569(void) {
  LOAD_REGS();
  goto L_9c2569;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2569: /* 9c2569: mov eax, 0xa26278 */
  eax = 0xa26278u;
/* 9c256e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2580(void) {
  LOAD_REGS();
L_9c2580: /* 9c2580: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2583: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2589(void) {
  LOAD_REGS();
  goto L_9c2589;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2589: /* 9c2589: mov eax, 0xa262a0 */
  eax = 0xa262a0u;
/* 9c258e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c25a0(void) {
  LOAD_REGS();
L_9c25a0: /* 9c25a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c25a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c25a9(void) {
  LOAD_REGS();
  goto L_9c25a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c25a9: /* 9c25a9: mov eax, 0xa262c8 */
  eax = 0xa262c8u;
/* 9c25ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c25c0(void) {
  LOAD_REGS();
L_9c25c0: /* 9c25c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c25c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c25c9(void) {
  LOAD_REGS();
  goto L_9c25c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c25c9: /* 9c25c9: mov eax, 0xa262f0 */
  eax = 0xa262f0u;
/* 9c25ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c25e0(void) {
  LOAD_REGS();
L_9c25e0: /* 9c25e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c25e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c25e9(void) {
  LOAD_REGS();
  goto L_9c25e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c25e9: /* 9c25e9: mov eax, 0xa26318 */
  eax = 0xa26318u;
/* 9c25ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2600(void) {
  LOAD_REGS();
L_9c2600: /* 9c2600: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2603: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2609(void) {
  LOAD_REGS();
  goto L_9c2609;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2609: /* 9c2609: mov eax, 0xa26340 */
  eax = 0xa26340u;
/* 9c260e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2620(void) {
  LOAD_REGS();
L_9c2620: /* 9c2620: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2623: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2629(void) {
  LOAD_REGS();
  goto L_9c2629;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2629: /* 9c2629: mov eax, 0xa26368 */
  eax = 0xa26368u;
/* 9c262e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2640(void) {
  LOAD_REGS();
L_9c2640: /* 9c2640: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2643: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2649(void) {
  LOAD_REGS();
  goto L_9c2649;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2649: /* 9c2649: mov eax, 0xa26390 */
  eax = 0xa26390u;
/* 9c264e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2660(void) {
  LOAD_REGS();
L_9c2660: /* 9c2660: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2663: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2669(void) {
  LOAD_REGS();
  goto L_9c2669;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2669: /* 9c2669: mov eax, 0xa263b8 */
  eax = 0xa263b8u;
/* 9c266e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2680(void) {
  LOAD_REGS();
L_9c2680: /* 9c2680: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2683: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2689(void) {
  LOAD_REGS();
  goto L_9c2689;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2689: /* 9c2689: mov eax, 0xa263e0 */
  eax = 0xa263e0u;
/* 9c268e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c26a0(void) {
  LOAD_REGS();
L_9c26a0: /* 9c26a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c26a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c26a9(void) {
  LOAD_REGS();
  goto L_9c26a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c26a9: /* 9c26a9: mov eax, 0xa26408 */
  eax = 0xa26408u;
/* 9c26ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c26c0(void) {
  LOAD_REGS();
L_9c26c0: /* 9c26c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c26c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c26c9(void) {
  LOAD_REGS();
  goto L_9c26c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c26c9: /* 9c26c9: mov eax, 0xa26430 */
  eax = 0xa26430u;
/* 9c26ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c26e0(void) {
  LOAD_REGS();
  goto L_9c26e0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c26e0: /* 9c26e0: mov eax, 0xa26494 */
  eax = 0xa26494u;
/* 9c26e5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c26f0(void) {
  LOAD_REGS();
L_9c26f0: /* 9c26f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c26f3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c26f9(void) {
  LOAD_REGS();
  goto L_9c26f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c26f9: /* 9c26f9: mov eax, 0xa264c4 */
  eax = 0xa264c4u;
/* 9c26fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2710(void) {
  LOAD_REGS();
L_9c2710: /* 9c2710: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2713: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2719(void) {
  LOAD_REGS();
  goto L_9c2719;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2719: /* 9c2719: mov eax, 0xa264ec */
  eax = 0xa264ecu;
/* 9c271e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2730(void) {
  LOAD_REGS();
L_9c2730: /* 9c2730: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2733: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2739(void) {
  LOAD_REGS();
  goto L_9c2739;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2739: /* 9c2739: mov eax, 0xa26514 */
  eax = 0xa26514u;
/* 9c273e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2750(void) {
  LOAD_REGS();
L_9c2750: /* 9c2750: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2753: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2759(void) {
  LOAD_REGS();
  goto L_9c2759;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2759: /* 9c2759: mov eax, 0xa2653c */
  eax = 0xa2653cu;
/* 9c275e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2770(void) {
  LOAD_REGS();
L_9c2770: /* 9c2770: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2773: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2779(void) {
  LOAD_REGS();
  goto L_9c2779;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2779: /* 9c2779: mov eax, 0xa26564 */
  eax = 0xa26564u;
/* 9c277e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2790(void) {
  LOAD_REGS();
L_9c2790: /* 9c2790: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2793: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2799(void) {
  LOAD_REGS();
  goto L_9c2799;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2799: /* 9c2799: mov eax, 0xa2658c */
  eax = 0xa2658cu;
/* 9c279e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c27b0(void) {
  LOAD_REGS();
L_9c27b0: /* 9c27b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c27b3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c27b9(void) {
  LOAD_REGS();
  goto L_9c27b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c27b9: /* 9c27b9: mov eax, 0xa265b4 */
  eax = 0xa265b4u;
/* 9c27be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c27d0(void) {
  LOAD_REGS();
L_9c27d0: /* 9c27d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c27d3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c27d9(void) {
  LOAD_REGS();
  goto L_9c27d9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c27d9: /* 9c27d9: mov eax, 0xa265dc */
  eax = 0xa265dcu;
/* 9c27de: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c27f0(void) {
  LOAD_REGS();
L_9c27f0: /* 9c27f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c27f3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c27f9(void) {
  LOAD_REGS();
  goto L_9c27f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c27f9: /* 9c27f9: mov eax, 0xa26604 */
  eax = 0xa26604u;
/* 9c27fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2810(void) {
  LOAD_REGS();
L_9c2810: /* 9c2810: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2813: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2819(void) {
  LOAD_REGS();
  goto L_9c2819;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2819: /* 9c2819: mov eax, 0xa2662c */
  eax = 0xa2662cu;
/* 9c281e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2830(void) {
  LOAD_REGS();
L_9c2830: /* 9c2830: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2833: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2839(void) {
  LOAD_REGS();
  goto L_9c2839;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2839: /* 9c2839: mov eax, 0xa26654 */
  eax = 0xa26654u;
/* 9c283e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2850(void) {
  LOAD_REGS();
L_9c2850: /* 9c2850: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2853: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2859(void) {
  LOAD_REGS();
  goto L_9c2859;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2859: /* 9c2859: mov eax, 0xa2667c */
  eax = 0xa2667cu;
/* 9c285e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2870(void) {
  LOAD_REGS();
L_9c2870: /* 9c2870: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2873: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2879(void) {
  LOAD_REGS();
  goto L_9c2879;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2879: /* 9c2879: mov eax, 0xa266a4 */
  eax = 0xa266a4u;
/* 9c287e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2890(void) {
  LOAD_REGS();
L_9c2890: /* 9c2890: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2893: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2899(void) {
  LOAD_REGS();
  goto L_9c2899;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2899: /* 9c2899: mov eax, 0xa266cc */
  eax = 0xa266ccu;
/* 9c289e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c28b0(void) {
  LOAD_REGS();
L_9c28b0: /* 9c28b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c28b3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c28b9(void) {
  LOAD_REGS();
  goto L_9c28b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c28b9: /* 9c28b9: mov eax, 0xa266f4 */
  eax = 0xa266f4u;
/* 9c28be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c28d0(void) {
  LOAD_REGS();
L_9c28d0: /* 9c28d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c28d3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c28d9(void) {
  LOAD_REGS();
  goto L_9c28d9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c28d9: /* 9c28d9: mov eax, 0xa2671c */
  eax = 0xa2671cu;
/* 9c28de: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c28f0(void) {
  LOAD_REGS();
L_9c28f0: /* 9c28f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c28f3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c28f9(void) {
  LOAD_REGS();
  goto L_9c28f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c28f9: /* 9c28f9: mov eax, 0xa26744 */
  eax = 0xa26744u;
/* 9c28fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2910(void) {
  LOAD_REGS();
L_9c2910: /* 9c2910: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2913: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2919(void) {
  LOAD_REGS();
  goto L_9c2919;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2919: /* 9c2919: mov eax, 0xa2676c */
  eax = 0xa2676cu;
/* 9c291e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2930(void) {
  LOAD_REGS();
L_9c2930: /* 9c2930: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2933: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2939(void) {
  LOAD_REGS();
  goto L_9c2939;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2939: /* 9c2939: mov eax, 0xa26794 */
  eax = 0xa26794u;
/* 9c293e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2950(void) {
  LOAD_REGS();
L_9c2950: /* 9c2950: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2953: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2959(void) {
  LOAD_REGS();
  goto L_9c2959;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2959: /* 9c2959: mov eax, 0xa267bc */
  eax = 0xa267bcu;
/* 9c295e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2970(void) {
  LOAD_REGS();
L_9c2970: /* 9c2970: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2973: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2979(void) {
  LOAD_REGS();
  goto L_9c2979;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2979: /* 9c2979: mov eax, 0xa267e4 */
  eax = 0xa267e4u;
/* 9c297e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2990(void) {
  LOAD_REGS();
L_9c2990: /* 9c2990: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2993: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2999(void) {
  LOAD_REGS();
  goto L_9c2999;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2999: /* 9c2999: mov eax, 0xa2680c */
  eax = 0xa2680cu;
/* 9c299e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c29b0(void) {
  LOAD_REGS();
L_9c29b0: /* 9c29b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c29b3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c29b9(void) {
  LOAD_REGS();
  goto L_9c29b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c29b9: /* 9c29b9: mov eax, 0xa26834 */
  eax = 0xa26834u;
/* 9c29be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c29d0(void) {
  LOAD_REGS();
L_9c29d0: /* 9c29d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c29d3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c29d9(void) {
  LOAD_REGS();
  goto L_9c29d9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c29d9: /* 9c29d9: mov eax, 0xa2685c */
  eax = 0xa2685cu;
/* 9c29de: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c29f0(void) {
  LOAD_REGS();
L_9c29f0: /* 9c29f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c29f3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c29f9(void) {
  LOAD_REGS();
  goto L_9c29f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c29f9: /* 9c29f9: mov eax, 0xa26884 */
  eax = 0xa26884u;
/* 9c29fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2a10(void) {
  LOAD_REGS();
L_9c2a10: /* 9c2a10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2a13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2a19(void) {
  LOAD_REGS();
  goto L_9c2a19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2a19: /* 9c2a19: mov eax, 0xa268ac */
  eax = 0xa268acu;
/* 9c2a1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2a30(void) {
  LOAD_REGS();
L_9c2a30: /* 9c2a30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2a33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2a39(void) {
  LOAD_REGS();
  goto L_9c2a39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2a39: /* 9c2a39: mov eax, 0xa268d4 */
  eax = 0xa268d4u;
/* 9c2a3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2a50(void) {
  LOAD_REGS();
L_9c2a50: /* 9c2a50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2a53: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2a59(void) {
  LOAD_REGS();
  goto L_9c2a59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2a59: /* 9c2a59: mov eax, 0xa268fc */
  eax = 0xa268fcu;
/* 9c2a5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2a70(void) {
  LOAD_REGS();
L_9c2a70: /* 9c2a70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2a73: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2a79(void) {
  LOAD_REGS();
  goto L_9c2a79;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2a79: /* 9c2a79: mov eax, 0xa26924 */
  eax = 0xa26924u;
/* 9c2a7e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2a90(void) {
  LOAD_REGS();
L_9c2a90: /* 9c2a90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2a93: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2a99(void) {
  LOAD_REGS();
  goto L_9c2a99;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2a99: /* 9c2a99: mov eax, 0xa2694c */
  eax = 0xa2694cu;
/* 9c2a9e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2ab0(void) {
  LOAD_REGS();
L_9c2ab0: /* 9c2ab0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2ab3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2ab9(void) {
  LOAD_REGS();
  goto L_9c2ab9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2ab9: /* 9c2ab9: mov eax, 0xa26974 */
  eax = 0xa26974u;
/* 9c2abe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2ad0(void) {
  LOAD_REGS();
L_9c2ad0: /* 9c2ad0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2ad3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2ad9(void) {
  LOAD_REGS();
  goto L_9c2ad9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2ad9: /* 9c2ad9: mov eax, 0xa2699c */
  eax = 0xa2699cu;
/* 9c2ade: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2af0(void) {
  LOAD_REGS();
L_9c2af0: /* 9c2af0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2af3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2af9(void) {
  LOAD_REGS();
  goto L_9c2af9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2af9: /* 9c2af9: mov eax, 0xa269c4 */
  eax = 0xa269c4u;
/* 9c2afe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2b10(void) {
  LOAD_REGS();
L_9c2b10: /* 9c2b10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2b13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2b19(void) {
  LOAD_REGS();
  goto L_9c2b19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2b19: /* 9c2b19: mov eax, 0xa269ec */
  eax = 0xa269ecu;
/* 9c2b1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2b30(void) {
  LOAD_REGS();
L_9c2b30: /* 9c2b30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2b33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2b39(void) {
  LOAD_REGS();
  goto L_9c2b39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2b39: /* 9c2b39: mov eax, 0xa26a14 */
  eax = 0xa26a14u;
/* 9c2b3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2b50(void) {
  LOAD_REGS();
L_9c2b50: /* 9c2b50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2b53: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2b59(void) {
  LOAD_REGS();
  goto L_9c2b59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2b59: /* 9c2b59: mov eax, 0xa26a3c */
  eax = 0xa26a3cu;
/* 9c2b5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2b70(void) {
  LOAD_REGS();
L_9c2b70: /* 9c2b70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2b73: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c2b76: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_9c2b7b(void) {
  LOAD_REGS();
  goto L_9c2b7b;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2b7b: /* 9c2b7b: mov eax, 0xa26a64 */
  eax = 0xa26a64u;
/* 9c2b80: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2b90(void) {
  LOAD_REGS();
L_9c2b90: /* 9c2b90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2b93: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c2b96: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_9c2b9b(void) {
  LOAD_REGS();
  goto L_9c2b9b;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2b9b: /* 9c2b9b: mov eax, 0xa26a8c */
  eax = 0xa26a8cu;
/* 9c2ba0: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2bb0(void) {
  LOAD_REGS();
  goto L_9c2bb0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2bb0: /* 9c2bb0: mov eax, 0xa26af0 */
  eax = 0xa26af0u;
/* 9c2bb5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2bc0(void) {
  LOAD_REGS();
  goto L_9c2bc0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2bc0: /* 9c2bc0: mov eax, 0xa26b5c */
  eax = 0xa26b5cu;
/* 9c2bc5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2bd0(void) {
  LOAD_REGS();
  goto L_9c2bd0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2bd0: /* 9c2bd0: mov eax, 0xa26bc8 */
  eax = 0xa26bc8u;
/* 9c2bd5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2be0(void) {
  LOAD_REGS();
L_9c2be0: /* 9c2be0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2be3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c2be9(void) {
  LOAD_REGS();
L_9c2be9: /* 9c2be9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2bec: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c2bef: jmp 0x6c1082 */
  SPILL(); f_6c1082(); return;
}

void f_9c2bf4(void) {
  LOAD_REGS();
L_9c2bf4: /* 9c2bf4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2bf7: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c2bfa: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c2c00(void) {
  LOAD_REGS();
  goto L_9c2c00;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2c00: /* 9c2c00: mov eax, 0xa26c08 */
  eax = 0xa26c08u;
/* 9c2c05: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2c20(void) {
  LOAD_REGS();
L_9c2c20: /* 9c2c20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2c23: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c2c29(void) {
  LOAD_REGS();
L_9c2c29: /* 9c2c29: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2c2c: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c2c2f: jmp 0x6c1082 */
  SPILL(); f_6c1082(); return;
}

void f_9c2c34(void) {
  LOAD_REGS();
  goto L_9c2c34;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2c34: /* 9c2c34: mov eax, 0xa26c3c */
  eax = 0xa26c3cu;
/* 9c2c39: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2c50(void) {
  LOAD_REGS();
L_9c2c50: /* 9c2c50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2c53: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c2c59(void) {
  LOAD_REGS();
L_9c2c59: /* 9c2c59: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2c5c: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c2c5f: jmp 0x6c1082 */
  SPILL(); f_6c1082(); return;
}

void f_9c2c64(void) {
  LOAD_REGS();
L_9c2c64: /* 9c2c64: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2c67: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c2c6a: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c2c70(void) {
  LOAD_REGS();
  goto L_9c2c70;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2c70: /* 9c2c70: mov eax, 0xa26c74 */
  eax = 0xa26c74u;
/* 9c2c75: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2c90(void) {
  LOAD_REGS();
L_9c2c90: /* 9c2c90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2c93: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c2c99(void) {
  LOAD_REGS();
L_9c2c99: /* 9c2c99: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2c9c: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c2c9f: jmp 0x6c1082 */
  SPILL(); f_6c1082(); return;
}

void f_9c2ca4(void) {
  LOAD_REGS();
  goto L_9c2ca4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2ca4: /* 9c2ca4: mov eax, 0xa26ca8 */
  eax = 0xa26ca8u;
/* 9c2ca9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2cc0(void) {
  LOAD_REGS();
L_9c2cc0: /* 9c2cc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2cc3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2cc9(void) {
  LOAD_REGS();
  goto L_9c2cc9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2cc9: /* 9c2cc9: mov eax, 0xa26cd0 */
  eax = 0xa26cd0u;
/* 9c2cce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2ce0(void) {
  LOAD_REGS();
  goto L_9c2ce0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2ce0: /* 9c2ce0: mov eax, 0xa26d34 */
  eax = 0xa26d34u;
/* 9c2ce5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2cf0(void) {
  LOAD_REGS();
L_9c2cf0: /* 9c2cf0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2cf3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2cf9(void) {
  LOAD_REGS();
  goto L_9c2cf9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2cf9: /* 9c2cf9: mov eax, 0xa26d64 */
  eax = 0xa26d64u;
/* 9c2cfe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2d10(void) {
  LOAD_REGS();
L_9c2d10: /* 9c2d10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2d13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2d19(void) {
  LOAD_REGS();
  goto L_9c2d19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2d19: /* 9c2d19: mov eax, 0xa26d8c */
  eax = 0xa26d8cu;
/* 9c2d1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2d30(void) {
  LOAD_REGS();
  goto L_9c2d30;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2d30: /* 9c2d30: mov eax, 0xa26df0 */
  eax = 0xa26df0u;
/* 9c2d35: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2d40(void) {
  LOAD_REGS();
L_9c2d40: /* 9c2d40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2d43: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2d49(void) {
  LOAD_REGS();
  goto L_9c2d49;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2d49: /* 9c2d49: mov eax, 0xa26e20 */
  eax = 0xa26e20u;
/* 9c2d4e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2d60(void) {
  LOAD_REGS();
L_9c2d60: /* 9c2d60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2d63: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2d69(void) {
  LOAD_REGS();
  goto L_9c2d69;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2d69: /* 9c2d69: mov eax, 0xa26e48 */
  eax = 0xa26e48u;
/* 9c2d6e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2d80(void) {
  LOAD_REGS();
L_9c2d80: /* 9c2d80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2d83: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2d89(void) {
  LOAD_REGS();
  goto L_9c2d89;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2d89: /* 9c2d89: mov eax, 0xa26e70 */
  eax = 0xa26e70u;
/* 9c2d8e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2da0(void) {
  LOAD_REGS();
L_9c2da0: /* 9c2da0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2da3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2da9(void) {
  LOAD_REGS();
  goto L_9c2da9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2da9: /* 9c2da9: mov eax, 0xa26e98 */
  eax = 0xa26e98u;
/* 9c2dae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2dc0(void) {
  LOAD_REGS();
L_9c2dc0: /* 9c2dc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2dc3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2dc9(void) {
  LOAD_REGS();
  goto L_9c2dc9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2dc9: /* 9c2dc9: mov eax, 0xa26ec0 */
  eax = 0xa26ec0u;
/* 9c2dce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2de0(void) {
  LOAD_REGS();
L_9c2de0: /* 9c2de0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2de3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2de9(void) {
  LOAD_REGS();
  goto L_9c2de9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2de9: /* 9c2de9: mov eax, 0xa26ee8 */
  eax = 0xa26ee8u;
/* 9c2dee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2e00(void) {
  LOAD_REGS();
L_9c2e00: /* 9c2e00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2e03: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2e09(void) {
  LOAD_REGS();
  goto L_9c2e09;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2e09: /* 9c2e09: mov eax, 0xa26f10 */
  eax = 0xa26f10u;
/* 9c2e0e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2e20(void) {
  LOAD_REGS();
  goto L_9c2e20;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2e20: /* 9c2e20: mov eax, 0xa26f74 */
  eax = 0xa26f74u;
/* 9c2e25: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2e30(void) {
  LOAD_REGS();
L_9c2e30: /* 9c2e30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2e33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2e39(void) {
  LOAD_REGS();
  goto L_9c2e39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2e39: /* 9c2e39: mov eax, 0xa26fa4 */
  eax = 0xa26fa4u;
/* 9c2e3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2e50(void) {
  LOAD_REGS();
  goto L_9c2e50;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2e50: /* 9c2e50: mov eax, 0xa27008 */
  eax = 0xa27008u;
/* 9c2e55: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2e60(void) {
  LOAD_REGS();
L_9c2e60: /* 9c2e60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2e63: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2e69(void) {
  LOAD_REGS();
  goto L_9c2e69;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2e69: /* 9c2e69: mov eax, 0xa27038 */
  eax = 0xa27038u;
/* 9c2e6e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2e80(void) {
  LOAD_REGS();
  goto L_9c2e80;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2e80: /* 9c2e80: mov eax, 0xa2709c */
  eax = 0xa2709cu;
/* 9c2e85: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2e90(void) {
  LOAD_REGS();
L_9c2e90: /* 9c2e90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2e93: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2e99(void) {
  LOAD_REGS();
  goto L_9c2e99;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2e99: /* 9c2e99: mov eax, 0xa270cc */
  eax = 0xa270ccu;
/* 9c2e9e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2eb0(void) {
  LOAD_REGS();
  goto L_9c2eb0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2eb0: /* 9c2eb0: mov eax, 0xa27130 */
  eax = 0xa27130u;
/* 9c2eb5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2ec0(void) {
  LOAD_REGS();
L_9c2ec0: /* 9c2ec0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2ec3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2ec9(void) {
  LOAD_REGS();
  goto L_9c2ec9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2ec9: /* 9c2ec9: mov eax, 0xa27160 */
  eax = 0xa27160u;
/* 9c2ece: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2ee0(void) {
  LOAD_REGS();
L_9c2ee0: /* 9c2ee0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2ee3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2ee9(void) {
  LOAD_REGS();
  goto L_9c2ee9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2ee9: /* 9c2ee9: mov eax, 0xa27188 */
  eax = 0xa27188u;
/* 9c2eee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2f00(void) {
  LOAD_REGS();
L_9c2f00: /* 9c2f00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2f03: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2f09(void) {
  LOAD_REGS();
  goto L_9c2f09;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2f09: /* 9c2f09: mov eax, 0xa271b0 */
  eax = 0xa271b0u;
/* 9c2f0e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2f20(void) {
  LOAD_REGS();
L_9c2f20: /* 9c2f20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2f23: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2f29(void) {
  LOAD_REGS();
  goto L_9c2f29;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2f29: /* 9c2f29: mov eax, 0xa271d8 */
  eax = 0xa271d8u;
/* 9c2f2e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2f40(void) {
  LOAD_REGS();
L_9c2f40: /* 9c2f40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2f43: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2f49(void) {
  LOAD_REGS();
  goto L_9c2f49;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2f49: /* 9c2f49: mov eax, 0xa27200 */
  eax = 0xa27200u;
/* 9c2f4e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2f60(void) {
  LOAD_REGS();
L_9c2f60: /* 9c2f60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2f63: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2f69(void) {
  LOAD_REGS();
  goto L_9c2f69;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2f69: /* 9c2f69: mov eax, 0xa27228 */
  eax = 0xa27228u;
/* 9c2f6e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2f80(void) {
  LOAD_REGS();
L_9c2f80: /* 9c2f80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2f83: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2f89(void) {
  LOAD_REGS();
  goto L_9c2f89;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2f89: /* 9c2f89: mov eax, 0xa27250 */
  eax = 0xa27250u;
/* 9c2f8e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2fa0(void) {
  LOAD_REGS();
L_9c2fa0: /* 9c2fa0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2fa3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2fa9(void) {
  LOAD_REGS();
  goto L_9c2fa9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2fa9: /* 9c2fa9: mov eax, 0xa27278 */
  eax = 0xa27278u;
/* 9c2fae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2fc0(void) {
  LOAD_REGS();
  goto L_9c2fc0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2fc0: /* 9c2fc0: mov eax, 0xa272dc */
  eax = 0xa272dcu;
/* 9c2fc5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2fd0(void) {
  LOAD_REGS();
L_9c2fd0: /* 9c2fd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2fd3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2fd9(void) {
  LOAD_REGS();
  goto L_9c2fd9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2fd9: /* 9c2fd9: mov eax, 0xa2730c */
  eax = 0xa2730cu;
/* 9c2fde: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c2ff0(void) {
  LOAD_REGS();
L_9c2ff0: /* 9c2ff0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c2ff3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c2ff9(void) {
  LOAD_REGS();
  goto L_9c2ff9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c2ff9: /* 9c2ff9: mov eax, 0xa27334 */
  eax = 0xa27334u;
/* 9c2ffe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3010(void) {
  LOAD_REGS();
L_9c3010: /* 9c3010: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3013: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3019(void) {
  LOAD_REGS();
  goto L_9c3019;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3019: /* 9c3019: mov eax, 0xa2735c */
  eax = 0xa2735cu;
/* 9c301e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3030(void) {
  LOAD_REGS();
L_9c3030: /* 9c3030: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3033: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3039(void) {
  LOAD_REGS();
  goto L_9c3039;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3039: /* 9c3039: mov eax, 0xa27384 */
  eax = 0xa27384u;
/* 9c303e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3050(void) {
  LOAD_REGS();
L_9c3050: /* 9c3050: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3053: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3059(void) {
  LOAD_REGS();
  goto L_9c3059;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3059: /* 9c3059: mov eax, 0xa273ac */
  eax = 0xa273acu;
/* 9c305e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3070(void) {
  LOAD_REGS();
L_9c3070: /* 9c3070: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3073: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3079(void) {
  LOAD_REGS();
  goto L_9c3079;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3079: /* 9c3079: mov eax, 0xa273d4 */
  eax = 0xa273d4u;
/* 9c307e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3090(void) {
  LOAD_REGS();
L_9c3090: /* 9c3090: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3093: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3099(void) {
  LOAD_REGS();
  goto L_9c3099;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3099: /* 9c3099: mov eax, 0xa273fc */
  eax = 0xa273fcu;
/* 9c309e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c30b0(void) {
  LOAD_REGS();
L_9c30b0: /* 9c30b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c30b3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c30b9(void) {
  LOAD_REGS();
  goto L_9c30b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c30b9: /* 9c30b9: mov eax, 0xa27424 */
  eax = 0xa27424u;
/* 9c30be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c30d0(void) {
  LOAD_REGS();
L_9c30d0: /* 9c30d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c30d3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c30d9(void) {
  LOAD_REGS();
  goto L_9c30d9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c30d9: /* 9c30d9: mov eax, 0xa2744c */
  eax = 0xa2744cu;
/* 9c30de: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c30f0(void) {
  LOAD_REGS();
L_9c30f0: /* 9c30f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c30f3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c30f9(void) {
  LOAD_REGS();
  goto L_9c30f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c30f9: /* 9c30f9: mov eax, 0xa27474 */
  eax = 0xa27474u;
/* 9c30fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3110(void) {
  LOAD_REGS();
  goto L_9c3110;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3110: /* 9c3110: mov eax, 0xa274d8 */
  eax = 0xa274d8u;
/* 9c3115: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3120(void) {
  LOAD_REGS();
L_9c3120: /* 9c3120: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3123: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3129(void) {
  LOAD_REGS();
  goto L_9c3129;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3129: /* 9c3129: mov eax, 0xa27508 */
  eax = 0xa27508u;
/* 9c312e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3140(void) {
  LOAD_REGS();
  goto L_9c3140;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3140: /* 9c3140: mov eax, 0xa2756c */
  eax = 0xa2756cu;
/* 9c3145: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3150(void) {
  LOAD_REGS();
L_9c3150: /* 9c3150: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3153: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3159(void) {
  LOAD_REGS();
  goto L_9c3159;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3159: /* 9c3159: mov eax, 0xa2759c */
  eax = 0xa2759cu;
/* 9c315e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3170(void) {
  LOAD_REGS();
  goto L_9c3170;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3170: /* 9c3170: mov eax, 0xa27600 */
  eax = 0xa27600u;
/* 9c3175: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3180(void) {
  LOAD_REGS();
L_9c3180: /* 9c3180: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3183: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3189(void) {
  LOAD_REGS();
  goto L_9c3189;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3189: /* 9c3189: mov eax, 0xa27630 */
  eax = 0xa27630u;
/* 9c318e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c31a0(void) {
  LOAD_REGS();
L_9c31a0: /* 9c31a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c31a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c31a9(void) {
  LOAD_REGS();
  goto L_9c31a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c31a9: /* 9c31a9: mov eax, 0xa27658 */
  eax = 0xa27658u;
/* 9c31ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c31c0(void) {
  LOAD_REGS();
L_9c31c0: /* 9c31c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c31c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c31c9(void) {
  LOAD_REGS();
  goto L_9c31c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c31c9: /* 9c31c9: mov eax, 0xa27680 */
  eax = 0xa27680u;
/* 9c31ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c31e0(void) {
  LOAD_REGS();
L_9c31e0: /* 9c31e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c31e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c31e9(void) {
  LOAD_REGS();
  goto L_9c31e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c31e9: /* 9c31e9: mov eax, 0xa276a8 */
  eax = 0xa276a8u;
/* 9c31ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3200(void) {
  LOAD_REGS();
L_9c3200: /* 9c3200: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3203: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3209(void) {
  LOAD_REGS();
  goto L_9c3209;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3209: /* 9c3209: mov eax, 0xa276d0 */
  eax = 0xa276d0u;
/* 9c320e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3220(void) {
  LOAD_REGS();
L_9c3220: /* 9c3220: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3223: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3229(void) {
  LOAD_REGS();
  goto L_9c3229;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3229: /* 9c3229: mov eax, 0xa276f8 */
  eax = 0xa276f8u;
/* 9c322e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3240(void) {
  LOAD_REGS();
L_9c3240: /* 9c3240: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3243: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3249(void) {
  LOAD_REGS();
  goto L_9c3249;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3249: /* 9c3249: mov eax, 0xa27720 */
  eax = 0xa27720u;
/* 9c324e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3260(void) {
  LOAD_REGS();
L_9c3260: /* 9c3260: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c3263: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c3269(void) {
  LOAD_REGS();
  goto L_9c3269;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3269: /* 9c3269: mov eax, 0xa2778c */
  eax = 0xa2778cu;
/* 9c326e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3280(void) {
  LOAD_REGS();
L_9c3280: /* 9c3280: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3283: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3289(void) {
  LOAD_REGS();
  goto L_9c3289;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3289: /* 9c3289: mov eax, 0xa277bc */
  eax = 0xa277bcu;
/* 9c328e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c32a0(void) {
  LOAD_REGS();
L_9c32a0: /* 9c32a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c32a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c32a9(void) {
  LOAD_REGS();
  goto L_9c32a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c32a9: /* 9c32a9: mov eax, 0xa277e4 */
  eax = 0xa277e4u;
/* 9c32ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c32c0(void) {
  LOAD_REGS();
L_9c32c0: /* 9c32c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c32c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c32c9(void) {
  LOAD_REGS();
  goto L_9c32c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c32c9: /* 9c32c9: mov eax, 0xa2780c */
  eax = 0xa2780cu;
/* 9c32ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c32e0(void) {
  LOAD_REGS();
L_9c32e0: /* 9c32e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c32e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c32e9(void) {
  LOAD_REGS();
  goto L_9c32e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c32e9: /* 9c32e9: mov eax, 0xa27834 */
  eax = 0xa27834u;
/* 9c32ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3300(void) {
  LOAD_REGS();
L_9c3300: /* 9c3300: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3303: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3309(void) {
  LOAD_REGS();
  goto L_9c3309;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3309: /* 9c3309: mov eax, 0xa2785c */
  eax = 0xa2785cu;
/* 9c330e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3320(void) {
  LOAD_REGS();
L_9c3320: /* 9c3320: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3323: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3329(void) {
  LOAD_REGS();
  goto L_9c3329;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3329: /* 9c3329: mov eax, 0xa27884 */
  eax = 0xa27884u;
/* 9c332e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3340(void) {
  LOAD_REGS();
L_9c3340: /* 9c3340: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3343: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3349(void) {
  LOAD_REGS();
  goto L_9c3349;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3349: /* 9c3349: mov eax, 0xa278ac */
  eax = 0xa278acu;
/* 9c334e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3360(void) {
  LOAD_REGS();
L_9c3360: /* 9c3360: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3363: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3369(void) {
  LOAD_REGS();
  goto L_9c3369;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3369: /* 9c3369: mov eax, 0xa278d4 */
  eax = 0xa278d4u;
/* 9c336e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3380(void) {
  LOAD_REGS();
L_9c3380: /* 9c3380: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3383: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3389(void) {
  LOAD_REGS();
  goto L_9c3389;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3389: /* 9c3389: mov eax, 0xa278fc */
  eax = 0xa278fcu;
/* 9c338e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c33a0(void) {
  LOAD_REGS();
L_9c33a0: /* 9c33a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c33a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c33a9(void) {
  LOAD_REGS();
  goto L_9c33a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c33a9: /* 9c33a9: mov eax, 0xa27924 */
  eax = 0xa27924u;
/* 9c33ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c33c0(void) {
  LOAD_REGS();
L_9c33c0: /* 9c33c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c33c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c33c9(void) {
  LOAD_REGS();
  goto L_9c33c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c33c9: /* 9c33c9: mov eax, 0xa2794c */
  eax = 0xa2794cu;
/* 9c33ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c33e0(void) {
  LOAD_REGS();
L_9c33e0: /* 9c33e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c33e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c33e9(void) {
  LOAD_REGS();
  goto L_9c33e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c33e9: /* 9c33e9: mov eax, 0xa27974 */
  eax = 0xa27974u;
/* 9c33ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3400(void) {
  LOAD_REGS();
L_9c3400: /* 9c3400: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3403: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3409(void) {
  LOAD_REGS();
  goto L_9c3409;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3409: /* 9c3409: mov eax, 0xa2799c */
  eax = 0xa2799cu;
/* 9c340e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3420(void) {
  LOAD_REGS();
L_9c3420: /* 9c3420: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3423: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3429(void) {
  LOAD_REGS();
  goto L_9c3429;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3429: /* 9c3429: mov eax, 0xa279c4 */
  eax = 0xa279c4u;
/* 9c342e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3440(void) {
  LOAD_REGS();
L_9c3440: /* 9c3440: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3443: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3449(void) {
  LOAD_REGS();
  goto L_9c3449;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3449: /* 9c3449: mov eax, 0xa279ec */
  eax = 0xa279ecu;
/* 9c344e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3460(void) {
  LOAD_REGS();
L_9c3460: /* 9c3460: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3463: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3469(void) {
  LOAD_REGS();
  goto L_9c3469;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3469: /* 9c3469: mov eax, 0xa27a14 */
  eax = 0xa27a14u;
/* 9c346e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3480(void) {
  LOAD_REGS();
L_9c3480: /* 9c3480: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3483: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3489(void) {
  LOAD_REGS();
  goto L_9c3489;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3489: /* 9c3489: mov eax, 0xa27a3c */
  eax = 0xa27a3cu;
/* 9c348e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c34a0(void) {
  LOAD_REGS();
L_9c34a0: /* 9c34a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c34a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c34a9(void) {
  LOAD_REGS();
  goto L_9c34a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c34a9: /* 9c34a9: mov eax, 0xa27a64 */
  eax = 0xa27a64u;
/* 9c34ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c34c0(void) {
  LOAD_REGS();
L_9c34c0: /* 9c34c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c34c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c34c9(void) {
  LOAD_REGS();
  goto L_9c34c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c34c9: /* 9c34c9: mov eax, 0xa27a8c */
  eax = 0xa27a8cu;
/* 9c34ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c34e0(void) {
  LOAD_REGS();
L_9c34e0: /* 9c34e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c34e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c34e9(void) {
  LOAD_REGS();
  goto L_9c34e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c34e9: /* 9c34e9: mov eax, 0xa27ab4 */
  eax = 0xa27ab4u;
/* 9c34ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3500(void) {
  LOAD_REGS();
L_9c3500: /* 9c3500: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3503: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3509(void) {
  LOAD_REGS();
  goto L_9c3509;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3509: /* 9c3509: mov eax, 0xa27adc */
  eax = 0xa27adcu;
/* 9c350e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3520(void) {
  LOAD_REGS();
L_9c3520: /* 9c3520: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3523: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3529(void) {
  LOAD_REGS();
  goto L_9c3529;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3529: /* 9c3529: mov eax, 0xa27b04 */
  eax = 0xa27b04u;
/* 9c352e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3540(void) {
  LOAD_REGS();
L_9c3540: /* 9c3540: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3543: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3549(void) {
  LOAD_REGS();
  goto L_9c3549;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3549: /* 9c3549: mov eax, 0xa27b2c */
  eax = 0xa27b2cu;
/* 9c354e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3560(void) {
  LOAD_REGS();
L_9c3560: /* 9c3560: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3563: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3569(void) {
  LOAD_REGS();
  goto L_9c3569;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3569: /* 9c3569: mov eax, 0xa27b54 */
  eax = 0xa27b54u;
/* 9c356e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3580(void) {
  LOAD_REGS();
L_9c3580: /* 9c3580: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3583: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3589(void) {
  LOAD_REGS();
  goto L_9c3589;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3589: /* 9c3589: mov eax, 0xa27b7c */
  eax = 0xa27b7cu;
/* 9c358e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c35a0(void) {
  LOAD_REGS();
L_9c35a0: /* 9c35a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c35a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c35a9(void) {
  LOAD_REGS();
  goto L_9c35a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c35a9: /* 9c35a9: mov eax, 0xa27ba4 */
  eax = 0xa27ba4u;
/* 9c35ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c35c0(void) {
  LOAD_REGS();
L_9c35c0: /* 9c35c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c35c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c35c9(void) {
  LOAD_REGS();
  goto L_9c35c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c35c9: /* 9c35c9: mov eax, 0xa27bcc */
  eax = 0xa27bccu;
/* 9c35ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c35e0(void) {
  LOAD_REGS();
L_9c35e0: /* 9c35e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c35e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c35e9(void) {
  LOAD_REGS();
  goto L_9c35e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c35e9: /* 9c35e9: mov eax, 0xa27bf4 */
  eax = 0xa27bf4u;
/* 9c35ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3600(void) {
  LOAD_REGS();
L_9c3600: /* 9c3600: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3603: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3609(void) {
  LOAD_REGS();
  goto L_9c3609;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3609: /* 9c3609: mov eax, 0xa27c1c */
  eax = 0xa27c1cu;
/* 9c360e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3620(void) {
  LOAD_REGS();
L_9c3620: /* 9c3620: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3623: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3629(void) {
  LOAD_REGS();
  goto L_9c3629;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3629: /* 9c3629: mov eax, 0xa27c44 */
  eax = 0xa27c44u;
/* 9c362e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3640(void) {
  LOAD_REGS();
L_9c3640: /* 9c3640: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3643: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3649(void) {
  LOAD_REGS();
  goto L_9c3649;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3649: /* 9c3649: mov eax, 0xa27c6c */
  eax = 0xa27c6cu;
/* 9c364e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3660(void) {
  LOAD_REGS();
L_9c3660: /* 9c3660: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3663: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3669(void) {
  LOAD_REGS();
  goto L_9c3669;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3669: /* 9c3669: mov eax, 0xa27c94 */
  eax = 0xa27c94u;
/* 9c366e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3680(void) {
  LOAD_REGS();
L_9c3680: /* 9c3680: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3683: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3689(void) {
  LOAD_REGS();
  goto L_9c3689;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3689: /* 9c3689: mov eax, 0xa27cbc */
  eax = 0xa27cbcu;
/* 9c368e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c36a0(void) {
  LOAD_REGS();
L_9c36a0: /* 9c36a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c36a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c36a9(void) {
  LOAD_REGS();
  goto L_9c36a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c36a9: /* 9c36a9: mov eax, 0xa27ce4 */
  eax = 0xa27ce4u;
/* 9c36ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c36c0(void) {
  LOAD_REGS();
L_9c36c0: /* 9c36c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c36c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c36c9(void) {
  LOAD_REGS();
  goto L_9c36c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c36c9: /* 9c36c9: mov eax, 0xa27d0c */
  eax = 0xa27d0cu;
/* 9c36ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c36e0(void) {
  LOAD_REGS();
L_9c36e0: /* 9c36e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c36e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c36e9(void) {
  LOAD_REGS();
  goto L_9c36e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c36e9: /* 9c36e9: mov eax, 0xa27d34 */
  eax = 0xa27d34u;
/* 9c36ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3700(void) {
  LOAD_REGS();
L_9c3700: /* 9c3700: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3703: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3709(void) {
  LOAD_REGS();
  goto L_9c3709;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3709: /* 9c3709: mov eax, 0xa27d5c */
  eax = 0xa27d5cu;
/* 9c370e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3720(void) {
  LOAD_REGS();
L_9c3720: /* 9c3720: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3723: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3729(void) {
  LOAD_REGS();
  goto L_9c3729;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3729: /* 9c3729: mov eax, 0xa27d84 */
  eax = 0xa27d84u;
/* 9c372e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3740(void) {
  LOAD_REGS();
  goto L_9c3740;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3740: /* 9c3740: mov eax, 0xa27de8 */
  eax = 0xa27de8u;
/* 9c3745: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3750(void) {
  LOAD_REGS();
L_9c3750: /* 9c3750: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3753: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3759(void) {
  LOAD_REGS();
  goto L_9c3759;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3759: /* 9c3759: mov eax, 0xa27e18 */
  eax = 0xa27e18u;
/* 9c375e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3770(void) {
  LOAD_REGS();
L_9c3770: /* 9c3770: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3773: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3779(void) {
  LOAD_REGS();
  goto L_9c3779;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3779: /* 9c3779: mov eax, 0xa27e40 */
  eax = 0xa27e40u;
/* 9c377e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3790(void) {
  LOAD_REGS();
L_9c3790: /* 9c3790: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3793: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3799(void) {
  LOAD_REGS();
  goto L_9c3799;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3799: /* 9c3799: mov eax, 0xa27e68 */
  eax = 0xa27e68u;
/* 9c379e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c37b0(void) {
  LOAD_REGS();
L_9c37b0: /* 9c37b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c37b3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c37b9(void) {
  LOAD_REGS();
  goto L_9c37b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c37b9: /* 9c37b9: mov eax, 0xa27e90 */
  eax = 0xa27e90u;
/* 9c37be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c37d0(void) {
  LOAD_REGS();
L_9c37d0: /* 9c37d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c37d3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c37d9(void) {
  LOAD_REGS();
  goto L_9c37d9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c37d9: /* 9c37d9: mov eax, 0xa27eb8 */
  eax = 0xa27eb8u;
/* 9c37de: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c37f0(void) {
  LOAD_REGS();
L_9c37f0: /* 9c37f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c37f3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c37f9(void) {
  LOAD_REGS();
  goto L_9c37f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c37f9: /* 9c37f9: mov eax, 0xa27ee0 */
  eax = 0xa27ee0u;
/* 9c37fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3810(void) {
  LOAD_REGS();
L_9c3810: /* 9c3810: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3813: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3819(void) {
  LOAD_REGS();
  goto L_9c3819;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3819: /* 9c3819: mov eax, 0xa27f08 */
  eax = 0xa27f08u;
/* 9c381e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3830(void) {
  LOAD_REGS();
  goto L_9c3830;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3830: /* 9c3830: mov eax, 0xa27f6c */
  eax = 0xa27f6cu;
/* 9c3835: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3840(void) {
  LOAD_REGS();
L_9c3840: /* 9c3840: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3843: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3849(void) {
  LOAD_REGS();
  goto L_9c3849;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3849: /* 9c3849: mov eax, 0xa27f9c */
  eax = 0xa27f9cu;
/* 9c384e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3860(void) {
  LOAD_REGS();
L_9c3860: /* 9c3860: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3863: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3869(void) {
  LOAD_REGS();
  goto L_9c3869;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3869: /* 9c3869: mov eax, 0xa27fc4 */
  eax = 0xa27fc4u;
/* 9c386e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3880(void) {
  LOAD_REGS();
L_9c3880: /* 9c3880: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3883: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3889(void) {
  LOAD_REGS();
  goto L_9c3889;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3889: /* 9c3889: mov eax, 0xa27fec */
  eax = 0xa27fecu;
/* 9c388e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c38a0(void) {
  LOAD_REGS();
L_9c38a0: /* 9c38a0: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9c38a4: je 0x9c38b8 */
  if (zf) goto L_9c38b8;
L_9c38aa: /* 9c38aa: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9c38ad: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c38b0: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9c38b3: jmp 0x9c38bf */
  goto L_9c38bf;
L_9c38b8: /* 9c38b8: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_9c38bf: /* 9c38bf: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c38c2: jmp 0x6c39cc */
  SPILL(); f_6c39cc(); return;
}

void f_9c38c7(void) {
  LOAD_REGS();
  goto L_9c38c7;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c38c7: /* 9c38c7: mov eax, 0xa28058 */
  eax = 0xa28058u;
/* 9c38cc: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c38e0(void) {
  LOAD_REGS();
  goto L_9c38e0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c38e0: /* 9c38e0: mov eax, 0xa280c4 */
  eax = 0xa280c4u;
/* 9c38e5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c38f0(void) {
  LOAD_REGS();
  goto L_9c38f0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c38f0: /* 9c38f0: mov eax, 0xa28130 */
  eax = 0xa28130u;
/* 9c38f5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3900(void) {
  LOAD_REGS();
L_9c3900: /* 9c3900: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9c3904: je 0x9c3918 */
  if (zf) goto L_9c3918;
L_9c390a: /* 9c390a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9c390d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c3910: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9c3913: jmp 0x9c391f */
  goto L_9c391f;
L_9c3918: /* 9c3918: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_9c391f: /* 9c391f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c3922: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c3927(void) {
  LOAD_REGS();
  goto L_9c3927;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3927: /* 9c3927: mov eax, 0xa281a4 */
  eax = 0xa281a4u;
/* 9c392c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3940(void) {
  LOAD_REGS();
  goto L_9c3940;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3940: /* 9c3940: mov eax, 0xa28210 */
  eax = 0xa28210u;
/* 9c3945: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3950(void) {
  LOAD_REGS();
L_9c3950: /* 9c3950: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3953: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3959(void) {
  LOAD_REGS();
  goto L_9c3959;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3959: /* 9c3959: mov eax, 0xa28240 */
  eax = 0xa28240u;
/* 9c395e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3970(void) {
  LOAD_REGS();
L_9c3970: /* 9c3970: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3973: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3979(void) {
  LOAD_REGS();
  goto L_9c3979;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3979: /* 9c3979: mov eax, 0xa28268 */
  eax = 0xa28268u;
/* 9c397e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3990(void) {
  LOAD_REGS();
L_9c3990: /* 9c3990: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3993: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3999(void) {
  LOAD_REGS();
  goto L_9c3999;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3999: /* 9c3999: mov eax, 0xa28290 */
  eax = 0xa28290u;
/* 9c399e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c39b0(void) {
  LOAD_REGS();
L_9c39b0: /* 9c39b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c39b3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c39b9(void) {
  LOAD_REGS();
  goto L_9c39b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c39b9: /* 9c39b9: mov eax, 0xa282b8 */
  eax = 0xa282b8u;
/* 9c39be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c39d0(void) {
  LOAD_REGS();
L_9c39d0: /* 9c39d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c39d3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c39d9(void) {
  LOAD_REGS();
  goto L_9c39d9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c39d9: /* 9c39d9: mov eax, 0xa282e0 */
  eax = 0xa282e0u;
/* 9c39de: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c39f0(void) {
  LOAD_REGS();
L_9c39f0: /* 9c39f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c39f3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c39f9(void) {
  LOAD_REGS();
  goto L_9c39f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c39f9: /* 9c39f9: mov eax, 0xa28308 */
  eax = 0xa28308u;
/* 9c39fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3a10(void) {
  LOAD_REGS();
L_9c3a10: /* 9c3a10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3a13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3a19(void) {
  LOAD_REGS();
  goto L_9c3a19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3a19: /* 9c3a19: mov eax, 0xa28330 */
  eax = 0xa28330u;
/* 9c3a1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3a30(void) {
  LOAD_REGS();
L_9c3a30: /* 9c3a30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3a33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3a39(void) {
  LOAD_REGS();
  goto L_9c3a39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3a39: /* 9c3a39: mov eax, 0xa28358 */
  eax = 0xa28358u;
/* 9c3a3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3a50(void) {
  LOAD_REGS();
L_9c3a50: /* 9c3a50: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9c3a54: je 0x9c3a68 */
  if (zf) goto L_9c3a68;
L_9c3a5a: /* 9c3a5a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9c3a5d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c3a60: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9c3a63: jmp 0x9c3a6f */
  goto L_9c3a6f;
L_9c3a68: /* 9c3a68: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_9c3a6f: /* 9c3a6f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c3a72: jmp 0x6c9647 */
  SPILL(); f_6c9647(); return;
}

void f_9c3a77(void) {
  LOAD_REGS();
  goto L_9c3a77;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3a77: /* 9c3a77: mov eax, 0xa283c4 */
  eax = 0xa283c4u;
/* 9c3a7c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3a90(void) {
  LOAD_REGS();
  goto L_9c3a90;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3a90: /* 9c3a90: mov eax, 0xa28430 */
  eax = 0xa28430u;
/* 9c3a95: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3aa0(void) {
  LOAD_REGS();
L_9c3aa0: /* 9c3aa0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3aa3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3aa9(void) {
  LOAD_REGS();
  goto L_9c3aa9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3aa9: /* 9c3aa9: mov eax, 0xa28460 */
  eax = 0xa28460u;
/* 9c3aae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3ac0(void) {
  LOAD_REGS();
L_9c3ac0: /* 9c3ac0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3ac3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3ac9(void) {
  LOAD_REGS();
  goto L_9c3ac9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3ac9: /* 9c3ac9: mov eax, 0xa28488 */
  eax = 0xa28488u;
/* 9c3ace: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3ae0(void) {
  LOAD_REGS();
L_9c3ae0: /* 9c3ae0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3ae3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3ae9(void) {
  LOAD_REGS();
  goto L_9c3ae9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3ae9: /* 9c3ae9: mov eax, 0xa284b0 */
  eax = 0xa284b0u;
/* 9c3aee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3b00(void) {
  LOAD_REGS();
L_9c3b00: /* 9c3b00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3b03: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3b09(void) {
  LOAD_REGS();
  goto L_9c3b09;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3b09: /* 9c3b09: mov eax, 0xa284d8 */
  eax = 0xa284d8u;
/* 9c3b0e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3b20(void) {
  LOAD_REGS();
L_9c3b20: /* 9c3b20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3b23: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3b29(void) {
  LOAD_REGS();
  goto L_9c3b29;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3b29: /* 9c3b29: mov eax, 0xa28500 */
  eax = 0xa28500u;
/* 9c3b2e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3b40(void) {
  LOAD_REGS();
L_9c3b40: /* 9c3b40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3b43: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3b49(void) {
  LOAD_REGS();
  goto L_9c3b49;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3b49: /* 9c3b49: mov eax, 0xa28528 */
  eax = 0xa28528u;
/* 9c3b4e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3b60(void) {
  LOAD_REGS();
L_9c3b60: /* 9c3b60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3b63: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3b69(void) {
  LOAD_REGS();
  goto L_9c3b69;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3b69: /* 9c3b69: mov eax, 0xa28550 */
  eax = 0xa28550u;
/* 9c3b6e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3b80(void) {
  LOAD_REGS();
L_9c3b80: /* 9c3b80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3b83: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3b89(void) {
  LOAD_REGS();
  goto L_9c3b89;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3b89: /* 9c3b89: mov eax, 0xa28578 */
  eax = 0xa28578u;
/* 9c3b8e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3ba0(void) {
  LOAD_REGS();
L_9c3ba0: /* 9c3ba0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3ba3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3ba9(void) {
  LOAD_REGS();
  goto L_9c3ba9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3ba9: /* 9c3ba9: mov eax, 0xa285a0 */
  eax = 0xa285a0u;
/* 9c3bae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3bc0(void) {
  LOAD_REGS();
L_9c3bc0: /* 9c3bc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3bc3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3bc9(void) {
  LOAD_REGS();
  goto L_9c3bc9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3bc9: /* 9c3bc9: mov eax, 0xa285c8 */
  eax = 0xa285c8u;
/* 9c3bce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3be0(void) {
  LOAD_REGS();
L_9c3be0: /* 9c3be0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3be3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3be9(void) {
  LOAD_REGS();
  goto L_9c3be9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3be9: /* 9c3be9: mov eax, 0xa285f0 */
  eax = 0xa285f0u;
/* 9c3bee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3c00(void) {
  LOAD_REGS();
L_9c3c00: /* 9c3c00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3c03: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3c09(void) {
  LOAD_REGS();
  goto L_9c3c09;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3c09: /* 9c3c09: mov eax, 0xa28618 */
  eax = 0xa28618u;
/* 9c3c0e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3c20(void) {
  LOAD_REGS();
  goto L_9c3c20;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3c20: /* 9c3c20: mov eax, 0xa2867c */
  eax = 0xa2867cu;
/* 9c3c25: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3c30(void) {
  LOAD_REGS();
L_9c3c30: /* 9c3c30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3c33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3c39(void) {
  LOAD_REGS();
  goto L_9c3c39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3c39: /* 9c3c39: mov eax, 0xa286ac */
  eax = 0xa286acu;
/* 9c3c3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3c50(void) {
  LOAD_REGS();
L_9c3c50: /* 9c3c50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3c53: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3c59(void) {
  LOAD_REGS();
  goto L_9c3c59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3c59: /* 9c3c59: mov eax, 0xa286d4 */
  eax = 0xa286d4u;
/* 9c3c5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3c70(void) {
  LOAD_REGS();
L_9c3c70: /* 9c3c70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3c73: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3c79(void) {
  LOAD_REGS();
  goto L_9c3c79;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3c79: /* 9c3c79: mov eax, 0xa286fc */
  eax = 0xa286fcu;
/* 9c3c7e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3c90(void) {
  LOAD_REGS();
L_9c3c90: /* 9c3c90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3c93: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3c99(void) {
  LOAD_REGS();
  goto L_9c3c99;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3c99: /* 9c3c99: mov eax, 0xa28724 */
  eax = 0xa28724u;
/* 9c3c9e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3cb0(void) {
  LOAD_REGS();
L_9c3cb0: /* 9c3cb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3cb3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3cb9(void) {
  LOAD_REGS();
  goto L_9c3cb9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3cb9: /* 9c3cb9: mov eax, 0xa2874c */
  eax = 0xa2874cu;
/* 9c3cbe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3cd0(void) {
  LOAD_REGS();
L_9c3cd0: /* 9c3cd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3cd3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3cd9(void) {
  LOAD_REGS();
  goto L_9c3cd9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3cd9: /* 9c3cd9: mov eax, 0xa28774 */
  eax = 0xa28774u;
/* 9c3cde: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3cf0(void) {
  LOAD_REGS();
L_9c3cf0: /* 9c3cf0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3cf3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3cf9(void) {
  LOAD_REGS();
  goto L_9c3cf9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3cf9: /* 9c3cf9: mov eax, 0xa2879c */
  eax = 0xa2879cu;
/* 9c3cfe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3d10(void) {
  LOAD_REGS();
L_9c3d10: /* 9c3d10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3d13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3d19(void) {
  LOAD_REGS();
  goto L_9c3d19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3d19: /* 9c3d19: mov eax, 0xa287c4 */
  eax = 0xa287c4u;
/* 9c3d1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3d30(void) {
  LOAD_REGS();
L_9c3d30: /* 9c3d30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3d33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3d39(void) {
  LOAD_REGS();
  goto L_9c3d39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3d39: /* 9c3d39: mov eax, 0xa287ec */
  eax = 0xa287ecu;
/* 9c3d3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3d50(void) {
  LOAD_REGS();
  goto L_9c3d50;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3d50: /* 9c3d50: mov eax, 0xa28850 */
  eax = 0xa28850u;
/* 9c3d55: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3d60(void) {
  LOAD_REGS();
L_9c3d60: /* 9c3d60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3d63: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3d69(void) {
  LOAD_REGS();
  goto L_9c3d69;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3d69: /* 9c3d69: mov eax, 0xa28880 */
  eax = 0xa28880u;
/* 9c3d6e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3d80(void) {
  LOAD_REGS();
  goto L_9c3d80;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3d80: /* 9c3d80: mov eax, 0xa288e4 */
  eax = 0xa288e4u;
/* 9c3d85: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3d90(void) {
  LOAD_REGS();
L_9c3d90: /* 9c3d90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3d93: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3d99(void) {
  LOAD_REGS();
  goto L_9c3d99;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3d99: /* 9c3d99: mov eax, 0xa28914 */
  eax = 0xa28914u;
/* 9c3d9e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3db0(void) {
  LOAD_REGS();
  goto L_9c3db0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3db0: /* 9c3db0: mov eax, 0xa28978 */
  eax = 0xa28978u;
/* 9c3db5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3dc0(void) {
  LOAD_REGS();
L_9c3dc0: /* 9c3dc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3dc3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3dc9(void) {
  LOAD_REGS();
  goto L_9c3dc9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3dc9: /* 9c3dc9: mov eax, 0xa289a8 */
  eax = 0xa289a8u;
/* 9c3dce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3de0(void) {
  LOAD_REGS();
  goto L_9c3de0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3de0: /* 9c3de0: mov eax, 0xa28a0c */
  eax = 0xa28a0cu;
/* 9c3de5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3df0(void) {
  LOAD_REGS();
L_9c3df0: /* 9c3df0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3df3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3df9(void) {
  LOAD_REGS();
  goto L_9c3df9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3df9: /* 9c3df9: mov eax, 0xa28a3c */
  eax = 0xa28a3cu;
/* 9c3dfe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3e10(void) {
  LOAD_REGS();
L_9c3e10: /* 9c3e10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3e13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3e19(void) {
  LOAD_REGS();
  goto L_9c3e19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3e19: /* 9c3e19: mov eax, 0xa28a64 */
  eax = 0xa28a64u;
/* 9c3e1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3e30(void) {
  LOAD_REGS();
L_9c3e30: /* 9c3e30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3e33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3e39(void) {
  LOAD_REGS();
  goto L_9c3e39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3e39: /* 9c3e39: mov eax, 0xa28a8c */
  eax = 0xa28a8cu;
/* 9c3e3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3e50(void) {
  LOAD_REGS();
L_9c3e50: /* 9c3e50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3e53: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3e59(void) {
  LOAD_REGS();
  goto L_9c3e59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3e59: /* 9c3e59: mov eax, 0xa28ab4 */
  eax = 0xa28ab4u;
/* 9c3e5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3e70(void) {
  LOAD_REGS();
L_9c3e70: /* 9c3e70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3e73: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3e79(void) {
  LOAD_REGS();
  goto L_9c3e79;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3e79: /* 9c3e79: mov eax, 0xa28adc */
  eax = 0xa28adcu;
/* 9c3e7e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3e90(void) {
  LOAD_REGS();
L_9c3e90: /* 9c3e90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3e93: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3e99(void) {
  LOAD_REGS();
  goto L_9c3e99;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3e99: /* 9c3e99: mov eax, 0xa28b04 */
  eax = 0xa28b04u;
/* 9c3e9e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3eb0(void) {
  LOAD_REGS();
L_9c3eb0: /* 9c3eb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3eb3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c3eb6: jmp 0x6c34f9 */
  SPILL(); f_6c34f9(); return;
}

void f_9c3ebb(void) {
  LOAD_REGS();
  goto L_9c3ebb;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3ebb: /* 9c3ebb: mov eax, 0xa28b2c */
  eax = 0xa28b2cu;
/* 9c3ec0: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3ed0(void) {
  LOAD_REGS();
  goto L_9c3ed0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3ed0: /* 9c3ed0: mov eax, 0xa28b90 */
  eax = 0xa28b90u;
/* 9c3ed5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3ee0(void) {
  LOAD_REGS();
  goto L_9c3ee0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3ee0: /* 9c3ee0: mov eax, 0xa28bfc */
  eax = 0xa28bfcu;
/* 9c3ee5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3ef0(void) {
  LOAD_REGS();
L_9c3ef0: /* 9c3ef0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3ef3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3ef9(void) {
  LOAD_REGS();
  goto L_9c3ef9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3ef9: /* 9c3ef9: mov eax, 0xa28c2c */
  eax = 0xa28c2cu;
/* 9c3efe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3f10(void) {
  LOAD_REGS();
L_9c3f10: /* 9c3f10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3f13: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3f19(void) {
  LOAD_REGS();
  goto L_9c3f19;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3f19: /* 9c3f19: mov eax, 0xa28c54 */
  eax = 0xa28c54u;
/* 9c3f1e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3f30(void) {
  LOAD_REGS();
L_9c3f30: /* 9c3f30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3f33: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3f39(void) {
  LOAD_REGS();
  goto L_9c3f39;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3f39: /* 9c3f39: mov eax, 0xa28c7c */
  eax = 0xa28c7cu;
/* 9c3f3e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3f50(void) {
  LOAD_REGS();
L_9c3f50: /* 9c3f50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3f53: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3f59(void) {
  LOAD_REGS();
  goto L_9c3f59;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3f59: /* 9c3f59: mov eax, 0xa28ca4 */
  eax = 0xa28ca4u;
/* 9c3f5e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3f70(void) {
  LOAD_REGS();
L_9c3f70: /* 9c3f70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3f73: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3f79(void) {
  LOAD_REGS();
  goto L_9c3f79;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3f79: /* 9c3f79: mov eax, 0xa28ccc */
  eax = 0xa28cccu;
/* 9c3f7e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3f90(void) {
  LOAD_REGS();
L_9c3f90: /* 9c3f90: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9c3f94: je 0x9c3fa8 */
  if (zf) goto L_9c3fa8;
L_9c3f9a: /* 9c3f9a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9c3f9d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c3fa0: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9c3fa3: jmp 0x9c3faf */
  goto L_9c3faf;
L_9c3fa8: /* 9c3fa8: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_9c3faf: /* 9c3faf: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c3fb2: jmp 0x6c1730 */
  SPILL(); f_6c1730(); return;
}

void f_9c3fb7(void) {
  LOAD_REGS();
  goto L_9c3fb7;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3fb7: /* 9c3fb7: mov eax, 0xa28d38 */
  eax = 0xa28d38u;
/* 9c3fbc: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3fd0(void) {
  LOAD_REGS();
L_9c3fd0: /* 9c3fd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3fd3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3fd9(void) {
  LOAD_REGS();
  goto L_9c3fd9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3fd9: /* 9c3fd9: mov eax, 0xa28d68 */
  eax = 0xa28d68u;
/* 9c3fde: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c3ff0(void) {
  LOAD_REGS();
L_9c3ff0: /* 9c3ff0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c3ff3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c3ff9(void) {
  LOAD_REGS();
  goto L_9c3ff9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c3ff9: /* 9c3ff9: mov eax, 0xa28d90 */
  eax = 0xa28d90u;
/* 9c3ffe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4010(void) {
  LOAD_REGS();
L_9c4010: /* 9c4010: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4013: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4016: jmp 0x6c34f9 */
  SPILL(); f_6c34f9(); return;
}

void f_9c401b(void) {
  LOAD_REGS();
  goto L_9c401b;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c401b: /* 9c401b: mov eax, 0xa28db8 */
  eax = 0xa28db8u;
/* 9c4020: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4030(void) {
  LOAD_REGS();
L_9c4030: /* 9c4030: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4033: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4038(void) {
  LOAD_REGS();
L_9c4038: /* 9c4038: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c403b: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c403e: jmp 0x6c8cb0 */
  SPILL(); f_6c8cb0(); return;
}

void f_9c4043(void) {
  LOAD_REGS();
  goto L_9c4043;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4043: /* 9c4043: mov eax, 0xa28de8 */
  eax = 0xa28de8u;
/* 9c4048: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4060(void) {
  LOAD_REGS();
L_9c4060: /* 9c4060: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4063: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4068(void) {
  LOAD_REGS();
  goto L_9c4068;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4068: /* 9c4068: mov eax, 0xa28e10 */
  eax = 0xa28e10u;
/* 9c406d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4080(void) {
  LOAD_REGS();
L_9c4080: /* 9c4080: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4083: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4088(void) {
  LOAD_REGS();
  goto L_9c4088;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4088: /* 9c4088: mov eax, 0xa28e38 */
  eax = 0xa28e38u;
/* 9c408d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c40a0(void) {
  LOAD_REGS();
  goto L_9c40a0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c40a0: /* 9c40a0: mov eax, 0xa28e9c */
  eax = 0xa28e9cu;
/* 9c40a5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c40b0(void) {
  LOAD_REGS();
L_9c40b0: /* 9c40b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c40b3: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c40b8(void) {
  LOAD_REGS();
  goto L_9c40b8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c40b8: /* 9c40b8: mov eax, 0xa28ecc */
  eax = 0xa28eccu;
/* 9c40bd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c40d0(void) {
  LOAD_REGS();
L_9c40d0: /* 9c40d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c40d3: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c40d8(void) {
  LOAD_REGS();
L_9c40d8: /* 9c40d8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c40db: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c40de: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c40e3(void) {
  LOAD_REGS();
  goto L_9c40e3;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c40e3: /* 9c40e3: mov eax, 0xa28efc */
  eax = 0xa28efcu;
/* 9c40e8: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4100(void) {
  LOAD_REGS();
L_9c4100: /* 9c4100: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4103: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4108(void) {
  LOAD_REGS();
  goto L_9c4108;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4108: /* 9c4108: mov eax, 0xa28f24 */
  eax = 0xa28f24u;
/* 9c410d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4120(void) {
  LOAD_REGS();
L_9c4120: /* 9c4120: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4123: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4128(void) {
  LOAD_REGS();
  goto L_9c4128;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4128: /* 9c4128: mov eax, 0xa28f4c */
  eax = 0xa28f4cu;
/* 9c412d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4140(void) {
  LOAD_REGS();
  goto L_9c4140;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4140: /* 9c4140: mov eax, 0xa28fb0 */
  eax = 0xa28fb0u;
/* 9c4145: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4150(void) {
  LOAD_REGS();
L_9c4150: /* 9c4150: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4153: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4158(void) {
  LOAD_REGS();
  goto L_9c4158;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4158: /* 9c4158: mov eax, 0xa28fe0 */
  eax = 0xa28fe0u;
/* 9c415d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4170(void) {
  LOAD_REGS();
L_9c4170: /* 9c4170: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4173: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4178(void) {
  LOAD_REGS();
L_9c4178: /* 9c4178: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c417b: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c417e: jmp 0x6c9052 */
  SPILL(); f_6c9052(); return;
}

void f_9c4183(void) {
  LOAD_REGS();
  goto L_9c4183;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4183: /* 9c4183: mov eax, 0xa29010 */
  eax = 0xa29010u;
/* 9c4188: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c41a0(void) {
  LOAD_REGS();
L_9c41a0: /* 9c41a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c41a3: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c41a8(void) {
  LOAD_REGS();
  goto L_9c41a8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c41a8: /* 9c41a8: mov eax, 0xa29038 */
  eax = 0xa29038u;
/* 9c41ad: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c41c0(void) {
  LOAD_REGS();
L_9c41c0: /* 9c41c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c41c3: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c41c8(void) {
  LOAD_REGS();
  goto L_9c41c8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c41c8: /* 9c41c8: mov eax, 0xa29060 */
  eax = 0xa29060u;
/* 9c41cd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c41e0(void) {
  LOAD_REGS();
  goto L_9c41e0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c41e0: /* 9c41e0: mov eax, 0xa290c4 */
  eax = 0xa290c4u;
/* 9c41e5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c41f0(void) {
  LOAD_REGS();
L_9c41f0: /* 9c41f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c41f3: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c41f8(void) {
  LOAD_REGS();
  goto L_9c41f8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c41f8: /* 9c41f8: mov eax, 0xa290f4 */
  eax = 0xa290f4u;
/* 9c41fd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4210(void) {
  LOAD_REGS();
L_9c4210: /* 9c4210: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4213: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4218(void) {
  LOAD_REGS();
L_9c4218: /* 9c4218: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c421b: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c421e: jmp 0x6c916a */
  SPILL(); f_6c916a(); return;
}

void f_9c4223(void) {
  LOAD_REGS();
  goto L_9c4223;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4223: /* 9c4223: mov eax, 0xa29124 */
  eax = 0xa29124u;
/* 9c4228: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4240(void) {
  LOAD_REGS();
L_9c4240: /* 9c4240: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4243: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4248(void) {
  LOAD_REGS();
  goto L_9c4248;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4248: /* 9c4248: mov eax, 0xa2914c */
  eax = 0xa2914cu;
/* 9c424d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4260(void) {
  LOAD_REGS();
L_9c4260: /* 9c4260: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4263: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4268(void) {
  LOAD_REGS();
  goto L_9c4268;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4268: /* 9c4268: mov eax, 0xa29174 */
  eax = 0xa29174u;
/* 9c426d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4280(void) {
  LOAD_REGS();
  goto L_9c4280;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4280: /* 9c4280: mov eax, 0xa291d8 */
  eax = 0xa291d8u;
/* 9c4285: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4290(void) {
  LOAD_REGS();
L_9c4290: /* 9c4290: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4293: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4298(void) {
  LOAD_REGS();
  goto L_9c4298;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4298: /* 9c4298: mov eax, 0xa29208 */
  eax = 0xa29208u;
/* 9c429d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c42b0(void) {
  LOAD_REGS();
L_9c42b0: /* 9c42b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c42b3: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c42b8(void) {
  LOAD_REGS();
L_9c42b8: /* 9c42b8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c42bb: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c42be: jmp 0x6c91fb */
  SPILL(); f_6c91fb(); return;
}

void f_9c42c3(void) {
  LOAD_REGS();
  goto L_9c42c3;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c42c3: /* 9c42c3: mov eax, 0xa29238 */
  eax = 0xa29238u;
/* 9c42c8: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c42e0(void) {
  LOAD_REGS();
L_9c42e0: /* 9c42e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c42e3: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c42e8(void) {
  LOAD_REGS();
  goto L_9c42e8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c42e8: /* 9c42e8: mov eax, 0xa29260 */
  eax = 0xa29260u;
/* 9c42ed: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4300(void) {
  LOAD_REGS();
L_9c4300: /* 9c4300: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4303: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4308(void) {
  LOAD_REGS();
  goto L_9c4308;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4308: /* 9c4308: mov eax, 0xa29288 */
  eax = 0xa29288u;
/* 9c430d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4320(void) {
  LOAD_REGS();
  goto L_9c4320;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4320: /* 9c4320: mov eax, 0xa292ec */
  eax = 0xa292ecu;
/* 9c4325: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4330(void) {
  LOAD_REGS();
L_9c4330: /* 9c4330: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4333: jmp 0x6c9d18 */
  SPILL(); f_6c9d18(); return;
}

void f_9c4338(void) {
  LOAD_REGS();
  goto L_9c4338;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4338: /* 9c4338: mov eax, 0xa2931c */
  eax = 0xa2931cu;
/* 9c433d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4350(void) {
  LOAD_REGS();
L_9c4350: /* 9c4350: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4353: jmp 0x6c7473 */
  SPILL(); f_6c7473(); return;
}

void f_9c4358(void) {
  LOAD_REGS();
L_9c4358: /* 9c4358: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c435b: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c435e: jmp 0x6cb5af */
  SPILL(); f_6cb5af(); return;
}

void f_9c4363(void) {
  LOAD_REGS();
  goto L_9c4363;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4363: /* 9c4363: mov eax, 0xa2934c */
  eax = 0xa2934cu;
/* 9c4368: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4380(void) {
  LOAD_REGS();
L_9c4380: /* 9c4380: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4383: jmp 0x6c7473 */
  SPILL(); f_6c7473(); return;
}

void f_9c4388(void) {
  LOAD_REGS();
  goto L_9c4388;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4388: /* 9c4388: mov eax, 0xa29374 */
  eax = 0xa29374u;
/* 9c438d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c43a0(void) {
  LOAD_REGS();
L_9c43a0: /* 9c43a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c43a3: jmp 0x6c7473 */
  SPILL(); f_6c7473(); return;
}

void f_9c43a8(void) {
  LOAD_REGS();
  goto L_9c43a8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c43a8: /* 9c43a8: mov eax, 0xa2939c */
  eax = 0xa2939cu;
/* 9c43ad: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c43c0(void) {
  LOAD_REGS();
L_9c43c0: /* 9c43c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c43c3: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c43c8(void) {
  LOAD_REGS();
L_9c43c8: /* 9c43c8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c43cb: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c43ce: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c43d3(void) {
  LOAD_REGS();
L_9c43d3: /* 9c43d3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c43d6: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c43d9: jmp 0x6c678f */
  SPILL(); f_6c678f(); return;
}

void f_9c43de(void) {
  LOAD_REGS();
L_9c43de: /* 9c43de: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c43e1: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c43e4: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c43e9(void) {
  LOAD_REGS();
L_9c43e9: /* 9c43e9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c43ec: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c43ef: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c43f4(void) {
  LOAD_REGS();
L_9c43f4: /* 9c43f4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c43f7: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c43fa: jmp 0x6c678f */
  SPILL(); f_6c678f(); return;
}

void f_9c43ff(void) {
  LOAD_REGS();
L_9c43ff: /* 9c43ff: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4402: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4405: jmp 0x6c4e4e */
  SPILL(); f_6c4e4e(); return;
}

void f_9c440a(void) {
  LOAD_REGS();
  goto L_9c440a;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c440a: /* 9c440a: mov eax, 0xa293f4 */
  eax = 0xa293f4u;
/* 9c440f: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4430(void) {
  LOAD_REGS();
L_9c4430: /* 9c4430: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4433: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4438(void) {
  LOAD_REGS();
L_9c4438: /* 9c4438: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c443b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c443e: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4443(void) {
  LOAD_REGS();
L_9c4443: /* 9c4443: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4446: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4449: jmp 0x6c678f */
  SPILL(); f_6c678f(); return;
}

void f_9c444e(void) {
  LOAD_REGS();
L_9c444e: /* 9c444e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4451: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4454: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4459(void) {
  LOAD_REGS();
L_9c4459: /* 9c4459: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c445c: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c445f: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4464(void) {
  LOAD_REGS();
L_9c4464: /* 9c4464: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4467: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c446a: jmp 0x6c678f */
  SPILL(); f_6c678f(); return;
}

void f_9c446f(void) {
  LOAD_REGS();
L_9c446f: /* 9c446f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4472: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4475: jmp 0x6c4e4e */
  SPILL(); f_6c4e4e(); return;
}

void f_9c447a(void) {
  LOAD_REGS();
  goto L_9c447a;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c447a: /* 9c447a: mov eax, 0xa29450 */
  eax = 0xa29450u;
/* 9c447f: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c44a0(void) {
  LOAD_REGS();
L_9c44a0: /* 9c44a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c44a3: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c44a8(void) {
  LOAD_REGS();
L_9c44a8: /* 9c44a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c44ab: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c44ae: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c44b3(void) {
  LOAD_REGS();
L_9c44b3: /* 9c44b3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c44b6: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c44b9: jmp 0x6c678f */
  SPILL(); f_6c678f(); return;
}

void f_9c44be(void) {
  LOAD_REGS();
L_9c44be: /* 9c44be: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c44c1: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c44c4: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c44c9(void) {
  LOAD_REGS();
L_9c44c9: /* 9c44c9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c44cc: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c44cf: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c44d4(void) {
  LOAD_REGS();
L_9c44d4: /* 9c44d4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c44d7: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c44da: jmp 0x6c678f */
  SPILL(); f_6c678f(); return;
}

void f_9c44df(void) {
  LOAD_REGS();
L_9c44df: /* 9c44df: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c44e2: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c44e5: jmp 0x6c4e4e */
  SPILL(); f_6c4e4e(); return;
}

void f_9c44ea(void) {
  LOAD_REGS();
  goto L_9c44ea;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c44ea: /* 9c44ea: mov eax, 0xa294ac */
  eax = 0xa294acu;
/* 9c44ef: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4510(void) {
  LOAD_REGS();
L_9c4510: /* 9c4510: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4513: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4516: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c451c(void) {
  LOAD_REGS();
L_9c451c: /* 9c451c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c451f: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4522: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c4528(void) {
  LOAD_REGS();
  goto L_9c4528;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4528: /* 9c4528: mov eax, 0xa294e0 */
  eax = 0xa294e0u;
/* 9c452d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4540(void) {
  LOAD_REGS();
L_9c4540: /* 9c4540: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4543: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c4549(void) {
  LOAD_REGS();
L_9c4549: /* 9c4549: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c454c: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c454f: jmp 0x6c678f */
  SPILL(); f_6c678f(); return;
}

void f_9c4554(void) {
  LOAD_REGS();
  goto L_9c4554;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4554: /* 9c4554: mov eax, 0xa29510 */
  eax = 0xa29510u;
/* 9c4559: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4570(void) {
  LOAD_REGS();
L_9c4570: /* 9c4570: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4573: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c4579(void) {
  LOAD_REGS();
  goto L_9c4579;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4579: /* 9c4579: mov eax, 0xa29538 */
  eax = 0xa29538u;
/* 9c457e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4590(void) {
  LOAD_REGS();
L_9c4590: /* 9c4590: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4593: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4596: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_9c459b(void) {
  LOAD_REGS();
  goto L_9c459b;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c459b: /* 9c459b: mov eax, 0xa29560 */
  eax = 0xa29560u;
/* 9c45a0: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c45b0(void) {
  LOAD_REGS();
L_9c45b0: /* 9c45b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c45b3: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c45b9(void) {
  LOAD_REGS();
L_9c45b9: /* 9c45b9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c45bc: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c45bf: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c45c4(void) {
  LOAD_REGS();
  goto L_9c45c4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c45c4: /* 9c45c4: mov eax, 0xa29590 */
  eax = 0xa29590u;
/* 9c45c9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c45e0(void) {
  LOAD_REGS();
L_9c45e0: /* 9c45e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c45e3: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c45e9(void) {
  LOAD_REGS();
L_9c45e9: /* 9c45e9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c45ec: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c45ef: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c45f4(void) {
  LOAD_REGS();
  goto L_9c45f4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c45f4: /* 9c45f4: mov eax, 0xa295c0 */
  eax = 0xa295c0u;
/* 9c45f9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4610(void) {
  LOAD_REGS();
L_9c4610: /* 9c4610: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4613: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c4619(void) {
  LOAD_REGS();
L_9c4619: /* 9c4619: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c461c: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c461f: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4624(void) {
  LOAD_REGS();
  goto L_9c4624;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4624: /* 9c4624: mov eax, 0xa295f0 */
  eax = 0xa295f0u;
/* 9c4629: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4640(void) {
  LOAD_REGS();
L_9c4640: /* 9c4640: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4643: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4646: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c464c(void) {
  LOAD_REGS();
  goto L_9c464c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c464c: /* 9c464c: mov eax, 0xa29618 */
  eax = 0xa29618u;
/* 9c4651: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4660(void) {
  LOAD_REGS();
L_9c4660: /* 9c4660: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4663: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4666: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c466c(void) {
  LOAD_REGS();
  goto L_9c466c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c466c: /* 9c466c: mov eax, 0xa29640 */
  eax = 0xa29640u;
/* 9c4671: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4680(void) {
  LOAD_REGS();
L_9c4680: /* 9c4680: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4683: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4686: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c468c(void) {
  LOAD_REGS();
  goto L_9c468c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c468c: /* 9c468c: mov eax, 0xa29668 */
  eax = 0xa29668u;
/* 9c4691: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c46a0(void) {
  LOAD_REGS();
L_9c46a0: /* 9c46a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c46a3: jmp 0x6c1cc6 */
  SPILL(); f_6c1cc6(); return;
}

void f_9c46a8(void) {
  LOAD_REGS();
L_9c46a8: /* 9c46a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c46ab: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c46ae: jmp 0x6c364d */
  SPILL(); f_6c364d(); return;
}

void f_9c46b3(void) {
  LOAD_REGS();
  goto L_9c46b3;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c46b3: /* 9c46b3: mov eax, 0xa29698 */
  eax = 0xa29698u;
/* 9c46b8: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c46d0(void) {
  LOAD_REGS();
L_9c46d0: /* 9c46d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c46d3: jmp 0x6c1cc6 */
  SPILL(); f_6c1cc6(); return;
}

void f_9c46d8(void) {
  LOAD_REGS();
  goto L_9c46d8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c46d8: /* 9c46d8: mov eax, 0xa296c0 */
  eax = 0xa296c0u;
/* 9c46dd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c46f0(void) {
  LOAD_REGS();
L_9c46f0: /* 9c46f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c46f3: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c46f8(void) {
  LOAD_REGS();
L_9c46f8: /* 9c46f8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c46fb: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c46fe: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c4704(void) {
  LOAD_REGS();
L_9c4704: /* 9c4704: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4707: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c470a: jmp 0x6c4bfb */
  SPILL(); f_6c4bfb(); return;
}

void f_9c470f(void) {
  LOAD_REGS();
L_9c470f: /* 9c470f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4712: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4715: jmp 0x6c6532 */
  SPILL(); f_6c6532(); return;
}

void f_9c471a(void) {
  LOAD_REGS();
  goto L_9c471a;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c471a: /* 9c471a: mov eax, 0xa29700 */
  eax = 0xa29700u;
/* 9c471f: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4740(void) {
  LOAD_REGS();
L_9c4740: /* 9c4740: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4743: jmp 0x6c8f8f */
  SPILL(); f_6c8f8f(); return;
}

void f_9c4748(void) {
  LOAD_REGS();
L_9c4748: /* 9c4748: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c474b: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c474e: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c4754(void) {
  LOAD_REGS();
L_9c4754: /* 9c4754: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4757: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c475a: jmp 0x6c4bfb */
  SPILL(); f_6c4bfb(); return;
}

void f_9c475f(void) {
  LOAD_REGS();
  goto L_9c475f;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c475f: /* 9c475f: mov eax, 0xa2973c */
  eax = 0xa2973cu;
/* 9c4764: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4780(void) {
  LOAD_REGS();
L_9c4780: /* 9c4780: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4783: jmp 0x6c75db */
  SPILL(); f_6c75db(); return;
}

void f_9c4788(void) {
  LOAD_REGS();
  goto L_9c4788;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4788: /* 9c4788: mov eax, 0xa29768 */
  eax = 0xa29768u;
/* 9c478d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c47a0(void) {
  LOAD_REGS();
L_9c47a0: /* 9c47a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c47a3: jmp 0x6c75db */
  SPILL(); f_6c75db(); return;
}

void f_9c47a8(void) {
  LOAD_REGS();
  goto L_9c47a8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c47a8: /* 9c47a8: mov eax, 0xa29790 */
  eax = 0xa29790u;
/* 9c47ad: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c47c0(void) {
  LOAD_REGS();
L_9c47c0: /* 9c47c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c47c3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c47c9(void) {
  LOAD_REGS();
  goto L_9c47c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c47c9: /* 9c47c9: mov eax, 0xa297b8 */
  eax = 0xa297b8u;
/* 9c47ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c47e0(void) {
  LOAD_REGS();
L_9c47e0: /* 9c47e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c47e3: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c47e9(void) {
  LOAD_REGS();
  goto L_9c47e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c47e9: /* 9c47e9: mov eax, 0xa297e0 */
  eax = 0xa297e0u;
/* 9c47ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4800(void) {
  LOAD_REGS();
L_9c4800: /* 9c4800: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4803: jmp 0x6cbf69 */
  SPILL(); f_6cbf69(); return;
}

void f_9c4808(void) {
  LOAD_REGS();
  goto L_9c4808;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4808: /* 9c4808: mov eax, 0xa29808 */
  eax = 0xa29808u;
/* 9c480d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4820(void) {
  LOAD_REGS();
L_9c4820: /* 9c4820: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4823: jmp 0x6cbf69 */
  SPILL(); f_6cbf69(); return;
}

void f_9c4828(void) {
  LOAD_REGS();
  goto L_9c4828;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4828: /* 9c4828: mov eax, 0xa29830 */
  eax = 0xa29830u;
/* 9c482d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4840(void) {
  LOAD_REGS();
L_9c4840: /* 9c4840: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4843: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c4849(void) {
  LOAD_REGS();
L_9c4849: /* 9c4849: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c484c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c484f: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c4855(void) {
  LOAD_REGS();
L_9c4855: /* 9c4855: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4858: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c485b: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c4861(void) {
  LOAD_REGS();
L_9c4861: /* 9c4861: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4864: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4867: jmp 0x6c1cdf */
  SPILL(); f_6c1cdf(); return;
}

void f_9c486c(void) {
  LOAD_REGS();
  goto L_9c486c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c486c: /* 9c486c: mov eax, 0xa29870 */
  eax = 0xa29870u;
/* 9c4871: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4890(void) {
  LOAD_REGS();
L_9c4890: /* 9c4890: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4893: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c4899(void) {
  LOAD_REGS();
L_9c4899: /* 9c4899: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c489c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c489f: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c48a5(void) {
  LOAD_REGS();
L_9c48a5: /* 9c48a5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c48a8: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c48ab: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c48b1(void) {
  LOAD_REGS();
L_9c48b1: /* 9c48b1: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c48b4: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c48b7: jmp 0x6c1cdf */
  SPILL(); f_6c1cdf(); return;
}

void f_9c48bc(void) {
  LOAD_REGS();
  goto L_9c48bc;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c48bc: /* 9c48bc: mov eax, 0xa298b4 */
  eax = 0xa298b4u;
/* 9c48c1: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c48e0(void) {
  LOAD_REGS();
L_9c48e0: /* 9c48e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c48e3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c48e9(void) {
  LOAD_REGS();
L_9c48e9: /* 9c48e9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c48ec: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c48ef: jmp 0x6c788d */
  SPILL(); f_6c788d(); return;
}

void f_9c48f4(void) {
  LOAD_REGS();
  goto L_9c48f4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c48f4: /* 9c48f4: mov eax, 0xa298e8 */
  eax = 0xa298e8u;
/* 9c48f9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4910(void) {
  LOAD_REGS();
L_9c4910: /* 9c4910: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4913: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c4919(void) {
  LOAD_REGS();
  goto L_9c4919;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4919: /* 9c4919: mov eax, 0xa29910 */
  eax = 0xa29910u;
/* 9c491e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4930(void) {
  LOAD_REGS();
L_9c4930: /* 9c4930: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4933: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c4939(void) {
  LOAD_REGS();
L_9c4939: /* 9c4939: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c493c: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c493f: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c4945(void) {
  LOAD_REGS();
L_9c4945: /* 9c4945: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4948: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c494b: jmp 0x6c1cdf */
  SPILL(); f_6c1cdf(); return;
}

void f_9c4950(void) {
  LOAD_REGS();
  goto L_9c4950;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4950: /* 9c4950: mov eax, 0xa29948 */
  eax = 0xa29948u;
/* 9c4955: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4970(void) {
  LOAD_REGS();
L_9c4970: /* 9c4970: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4973: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c4979(void) {
  LOAD_REGS();
L_9c4979: /* 9c4979: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c497c: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c497f: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c4985(void) {
  LOAD_REGS();
  goto L_9c4985;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4985: /* 9c4985: mov eax, 0xa2997c */
  eax = 0xa2997cu;
/* 9c498a: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c49a0(void) {
  LOAD_REGS();
L_9c49a0: /* 9c49a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c49a3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c49a9(void) {
  LOAD_REGS();
L_9c49a9: /* 9c49a9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c49ac: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c49af: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9c49b5(void) {
  LOAD_REGS();
  goto L_9c49b5;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c49b5: /* 9c49b5: mov eax, 0xa299ac */
  eax = 0xa299acu;
/* 9c49ba: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c49d0(void) {
  LOAD_REGS();
L_9c49d0: /* 9c49d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c49d3: jmp 0x6cb6f4 */
  SPILL(); f_6cb6f4(); return;
}

void f_9c49d8(void) {
  LOAD_REGS();
L_9c49d8: /* 9c49d8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c49db: add ecx, 0x128 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c49e1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c49e7(void) {
  LOAD_REGS();
L_9c49e7: /* 9c49e7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c49ea: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c49f0: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_9c49f5(void) {
  LOAD_REGS();
  goto L_9c49f5;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c49f5: /* 9c49f5: mov eax, 0xa299e4 */
  eax = 0xa299e4u;
/* 9c49fa: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4a10(void) {
  LOAD_REGS();
L_9c4a10: /* 9c4a10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4a13: jmp 0x6cb6f4 */
  SPILL(); f_6cb6f4(); return;
}

void f_9c4a18(void) {
  LOAD_REGS();
L_9c4a18: /* 9c4a18: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4a1b: add ecx, 0x128 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4a21: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c4a27(void) {
  LOAD_REGS();
  goto L_9c4a27;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4a27: /* 9c4a27: mov eax, 0xa29a18 */
  eax = 0xa29a18u;
/* 9c4a2c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4a40(void) {
  LOAD_REGS();
L_9c4a40: /* 9c4a40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4a43: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c4a49(void) {
  LOAD_REGS();
L_9c4a49: /* 9c4a49: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4a4c: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4a4f: jmp 0x6c7e32 */
  SPILL(); f_6c7e32(); return;
}

void f_9c4a54(void) {
  LOAD_REGS();
  goto L_9c4a54;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4a54: /* 9c4a54: mov eax, 0xa29a48 */
  eax = 0xa29a48u;
/* 9c4a59: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4a70(void) {
  LOAD_REGS();
L_9c4a70: /* 9c4a70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4a73: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c4a79(void) {
  LOAD_REGS();
  goto L_9c4a79;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4a79: /* 9c4a79: mov eax, 0xa29a70 */
  eax = 0xa29a70u;
/* 9c4a7e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4a90(void) {
  LOAD_REGS();
L_9c4a90: /* 9c4a90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4a93: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4a96: jmp 0x6cae43 */
  SPILL(); f_6cae43(); return;
}

void f_9c4a9b(void) {
  LOAD_REGS();
L_9c4a9b: /* 9c4a9b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4a9e: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4aa1: jmp 0x6cb555 */
  SPILL(); f_6cb555(); return;
}

void f_9c4aa6(void) {
  LOAD_REGS();
  goto L_9c4aa6;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4aa6: /* 9c4aa6: mov eax, 0xa29aa0 */
  eax = 0xa29aa0u;
/* 9c4aab: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4ac0(void) {
  LOAD_REGS();
L_9c4ac0: /* 9c4ac0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4ac3: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4ac6: jmp 0x6cae43 */
  SPILL(); f_6cae43(); return;
}

void f_9c4acb(void) {
  LOAD_REGS();
L_9c4acb: /* 9c4acb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4ace: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4ad1: jmp 0x6cb555 */
  SPILL(); f_6cb555(); return;
}

void f_9c4ad6(void) {
  LOAD_REGS();
  goto L_9c4ad6;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4ad6: /* 9c4ad6: mov eax, 0xa29ad0 */
  eax = 0xa29ad0u;
/* 9c4adb: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4af0(void) {
  LOAD_REGS();
L_9c4af0: /* 9c4af0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4af3: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4af6: jmp 0x6cae43 */
  SPILL(); f_6cae43(); return;
}

void f_9c4afb(void) {
  LOAD_REGS();
L_9c4afb: /* 9c4afb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4afe: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4b01: jmp 0x6cb555 */
  SPILL(); f_6cb555(); return;
}

void f_9c4b06(void) {
  LOAD_REGS();
  goto L_9c4b06;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4b06: /* 9c4b06: mov eax, 0xa29b00 */
  eax = 0xa29b00u;
/* 9c4b0b: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4b20(void) {
  LOAD_REGS();
L_9c4b20: /* 9c4b20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4b23: jmp 0x6c42fa */
  SPILL(); f_6c42fa(); return;
}

void f_9c4b28(void) {
  LOAD_REGS();
L_9c4b28: /* 9c4b28: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4b2b: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4b2e: jmp 0x6c5a29 */
  SPILL(); f_6c5a29(); return;
}

void f_9c4b33(void) {
  LOAD_REGS();
L_9c4b33: /* 9c4b33: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4b36: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4b39: jmp 0x6c1b7c */
  SPILL(); f_6c1b7c(); return;
}

void f_9c4b3e(void) {
  LOAD_REGS();
L_9c4b3e: /* 9c4b3e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4b41: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4b47: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c4b4d(void) {
  LOAD_REGS();
L_9c4b4d: /* 9c4b4d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4b50: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4b56: jmp 0x6c1730 */
  SPILL(); f_6c1730(); return;
}

void f_9c4b5b(void) {
  LOAD_REGS();
L_9c4b5b: /* 9c4b5b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4b5e: add ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4b64: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c4b6a(void) {
  LOAD_REGS();
L_9c4b6a: /* 9c4b6a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4b6d: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4b73: jmp 0x6c39cc */
  SPILL(); f_6c39cc(); return;
}

void f_9c4b78(void) {
  LOAD_REGS();
L_9c4b78: /* 9c4b78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4b7b: add ecx, 0xcc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4b81: jmp 0x6c5515 */
  SPILL(); f_6c5515(); return;
}

void f_9c4b86(void) {
  LOAD_REGS();
  goto L_9c4b86;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4b86: /* 9c4b86: mov eax, 0xa29b60 */
  eax = 0xa29b60u;
/* 9c4b8b: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4bb0(void) {
  LOAD_REGS();
L_9c4bb0: /* 9c4bb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4bb3: jmp 0x6c42fa */
  SPILL(); f_6c42fa(); return;
}

void f_9c4bb8(void) {
  LOAD_REGS();
L_9c4bb8: /* 9c4bb8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4bbb: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4bbe: jmp 0x6c5a29 */
  SPILL(); f_6c5a29(); return;
}

void f_9c4bc3(void) {
  LOAD_REGS();
L_9c4bc3: /* 9c4bc3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4bc6: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4bc9: jmp 0x6c1b7c */
  SPILL(); f_6c1b7c(); return;
}

void f_9c4bce(void) {
  LOAD_REGS();
L_9c4bce: /* 9c4bce: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4bd1: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4bd7: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c4bdd(void) {
  LOAD_REGS();
L_9c4bdd: /* 9c4bdd: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4be0: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4be6: jmp 0x6c1730 */
  SPILL(); f_6c1730(); return;
}

void f_9c4beb(void) {
  LOAD_REGS();
L_9c4beb: /* 9c4beb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4bee: add ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4bf4: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c4bfa(void) {
  LOAD_REGS();
L_9c4bfa: /* 9c4bfa: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4bfd: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4c03: jmp 0x6c39cc */
  SPILL(); f_6c39cc(); return;
}

void f_9c4c08(void) {
  LOAD_REGS();
L_9c4c08: /* 9c4c08: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4c0b: add ecx, 0xcc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4c11: jmp 0x6c5515 */
  SPILL(); f_6c5515(); return;
}

void f_9c4c16(void) {
  LOAD_REGS();
  goto L_9c4c16;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4c16: /* 9c4c16: mov eax, 0xa29bc8 */
  eax = 0xa29bc8u;
/* 9c4c1b: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4c40(void) {
  LOAD_REGS();
L_9c4c40: /* 9c4c40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4c43: jmp 0x6c42fa */
  SPILL(); f_6c42fa(); return;
}

void f_9c4c48(void) {
  LOAD_REGS();
L_9c4c48: /* 9c4c48: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4c4b: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4c4e: jmp 0x6c5a29 */
  SPILL(); f_6c5a29(); return;
}

void f_9c4c53(void) {
  LOAD_REGS();
L_9c4c53: /* 9c4c53: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4c56: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4c59: jmp 0x6c1b7c */
  SPILL(); f_6c1b7c(); return;
}

void f_9c4c5e(void) {
  LOAD_REGS();
L_9c4c5e: /* 9c4c5e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4c61: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4c67: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c4c6d(void) {
  LOAD_REGS();
L_9c4c6d: /* 9c4c6d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4c70: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4c76: jmp 0x6c1730 */
  SPILL(); f_6c1730(); return;
}

void f_9c4c7b(void) {
  LOAD_REGS();
L_9c4c7b: /* 9c4c7b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4c7e: add ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4c84: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c4c8a(void) {
  LOAD_REGS();
L_9c4c8a: /* 9c4c8a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4c8d: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4c93: jmp 0x6c39cc */
  SPILL(); f_6c39cc(); return;
}

void f_9c4c98(void) {
  LOAD_REGS();
  goto L_9c4c98;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4c98: /* 9c4c98: mov eax, 0xa29c28 */
  eax = 0xa29c28u;
/* 9c4c9d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4cc0(void) {
  LOAD_REGS();
L_9c4cc0: /* 9c4cc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4cc3: jmp 0x6cbfb4 */
  SPILL(); f_6cbfb4(); return;
}

void f_9c4cc8(void) {
  LOAD_REGS();
L_9c4cc8: /* 9c4cc8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4ccb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4cce: jmp 0x6c3f5d */
  SPILL(); f_6c3f5d(); return;
}

void f_9c4cd3(void) {
  LOAD_REGS();
L_9c4cd3: /* 9c4cd3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4cd6: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4cd9: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4cde(void) {
  LOAD_REGS();
  goto L_9c4cde;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4cde: /* 9c4cde: mov eax, 0xa29c64 */
  eax = 0xa29c64u;
/* 9c4ce3: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4d00(void) {
  LOAD_REGS();
  goto L_9c4d00;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4d00: /* 9c4d00: mov eax, 0xa29ccc */
  eax = 0xa29cccu;
/* 9c4d05: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4d10(void) {
  LOAD_REGS();
L_9c4d10: /* 9c4d10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4d13: jmp 0x6cbfb4 */
  SPILL(); f_6cbfb4(); return;
}

void f_9c4d18(void) {
  LOAD_REGS();
L_9c4d18: /* 9c4d18: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4d1b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4d1e: jmp 0x6c9bfb */
  SPILL(); f_6c9bfb(); return;
}

void f_9c4d23(void) {
  LOAD_REGS();
L_9c4d23: /* 9c4d23: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4d26: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4d29: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c4d2f(void) {
  LOAD_REGS();
  goto L_9c4d2f;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4d2f: /* 9c4d2f: mov eax, 0xa29d0c */
  eax = 0xa29d0cu;
/* 9c4d34: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4d50(void) {
  LOAD_REGS();
L_9c4d50: /* 9c4d50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4d53: jmp 0x6cbfb4 */
  SPILL(); f_6cbfb4(); return;
}

void f_9c4d58(void) {
  LOAD_REGS();
L_9c4d58: /* 9c4d58: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4d5b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4d5e: jmp 0x6c9bfb */
  SPILL(); f_6c9bfb(); return;
}

void f_9c4d63(void) {
  LOAD_REGS();
L_9c4d63: /* 9c4d63: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4d66: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4d69: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c4d6f(void) {
  LOAD_REGS();
L_9c4d6f: /* 9c4d6f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4d72: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4d75: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4d7a(void) {
  LOAD_REGS();
  goto L_9c4d7a;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4d7a: /* 9c4d7a: mov eax, 0xa29d50 */
  eax = 0xa29d50u;
/* 9c4d7f: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4da0(void) {
  LOAD_REGS();
L_9c4da0: /* 9c4da0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4da3: jmp 0x6cbfb4 */
  SPILL(); f_6cbfb4(); return;
}

void f_9c4da8(void) {
  LOAD_REGS();
L_9c4da8: /* 9c4da8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4dab: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4dae: jmp 0x6c9bfb */
  SPILL(); f_6c9bfb(); return;
}

void f_9c4db3(void) {
  LOAD_REGS();
L_9c4db3: /* 9c4db3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4db6: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4db9: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c4dbf(void) {
  LOAD_REGS();
  goto L_9c4dbf;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4dbf: /* 9c4dbf: mov eax, 0xa29d8c */
  eax = 0xa29d8cu;
/* 9c4dc4: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4de0(void) {
  LOAD_REGS();
L_9c4de0: /* 9c4de0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4de3: jmp 0x6cbfb4 */
  SPILL(); f_6cbfb4(); return;
}

void f_9c4de8(void) {
  LOAD_REGS();
L_9c4de8: /* 9c4de8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4deb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4dee: jmp 0x6c9bfb */
  SPILL(); f_6c9bfb(); return;
}

void f_9c4df3(void) {
  LOAD_REGS();
  goto L_9c4df3;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4df3: /* 9c4df3: mov eax, 0xa29dc0 */
  eax = 0xa29dc0u;
/* 9c4df8: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4e10(void) {
  LOAD_REGS();
L_9c4e10: /* 9c4e10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4e13: jmp 0x6cbfb4 */
  SPILL(); f_6cbfb4(); return;
}

void f_9c4e18(void) {
  LOAD_REGS();
L_9c4e18: /* 9c4e18: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4e1b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4e1e: jmp 0x6c9bfb */
  SPILL(); f_6c9bfb(); return;
}

void f_9c4e23(void) {
  LOAD_REGS();
L_9c4e23: /* 9c4e23: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4e26: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4e29: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c4e2f(void) {
  LOAD_REGS();
  goto L_9c4e2f;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4e2f: /* 9c4e2f: mov eax, 0xa29df8 */
  eax = 0xa29df8u;
/* 9c4e34: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4e50(void) {
  LOAD_REGS();
L_9c4e50: /* 9c4e50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4e53: jmp 0x6cbfb4 */
  SPILL(); f_6cbfb4(); return;
}

void f_9c4e58(void) {
  LOAD_REGS();
L_9c4e58: /* 9c4e58: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4e5b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4e5e: jmp 0x6c9bfb */
  SPILL(); f_6c9bfb(); return;
}

void f_9c4e63(void) {
  LOAD_REGS();
  goto L_9c4e63;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4e63: /* 9c4e63: mov eax, 0xa29e2c */
  eax = 0xa29e2cu;
/* 9c4e68: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4e80(void) {
  LOAD_REGS();
L_9c4e80: /* 9c4e80: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 9c4e83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c4e84: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9c4e89u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9c4e89: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9c4e8a: ret  */
  esp += 4; SPILL(); return;
}

void f_9c4e8b(void) {
  LOAD_REGS();
L_9c4e8b: /* 9c4e8b: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 9c4e8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c4e8f: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9c4e94u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9c4e94: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9c4e95: ret  */
  esp += 4; SPILL(); return;
}

void f_9c4e96(void) {
  LOAD_REGS();
L_9c4e96: /* 9c4e96: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 9c4e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c4e9a: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9c4e9fu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9c4e9f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9c4ea0: ret  */
  esp += 4; SPILL(); return;
}

void f_9c4ea1(void) {
  LOAD_REGS();
  goto L_9c4ea1;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4ea1: /* 9c4ea1: mov eax, 0xa29e64 */
  eax = 0xa29e64u;
/* 9c4ea6: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4ec0(void) {
  LOAD_REGS();
L_9c4ec0: /* 9c4ec0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4ec3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4ec6: jmp 0x6c4499 */
  SPILL(); f_6c4499(); return;
}

void f_9c4ecb(void) {
  LOAD_REGS();
L_9c4ecb: /* 9c4ecb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4ece: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4ed1: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4ed6(void) {
  LOAD_REGS();
  goto L_9c4ed6;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4ed6: /* 9c4ed6: mov eax, 0xa29e98 */
  eax = 0xa29e98u;
/* 9c4edb: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4ef0(void) {
  LOAD_REGS();
L_9c4ef0: /* 9c4ef0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4ef3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4ef6: jmp 0x6c4499 */
  SPILL(); f_6c4499(); return;
}

void f_9c4efb(void) {
  LOAD_REGS();
L_9c4efb: /* 9c4efb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4efe: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4f01: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4f06(void) {
  LOAD_REGS();
  goto L_9c4f06;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4f06: /* 9c4f06: mov eax, 0xa29ec8 */
  eax = 0xa29ec8u;
/* 9c4f0b: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4f20(void) {
  LOAD_REGS();
L_9c4f20: /* 9c4f20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4f23: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4f26: jmp 0x6c4499 */
  SPILL(); f_6c4499(); return;
}

void f_9c4f2b(void) {
  LOAD_REGS();
L_9c4f2b: /* 9c4f2b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4f2e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4f31: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4f36(void) {
  LOAD_REGS();
  goto L_9c4f36;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4f36: /* 9c4f36: mov eax, 0xa29ef8 */
  eax = 0xa29ef8u;
/* 9c4f3b: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4f50(void) {
  LOAD_REGS();
  goto L_9c4f50;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4f50: /* 9c4f50: mov eax, 0xa29f5c */
  eax = 0xa29f5cu;
/* 9c4f55: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4f60(void) {
  LOAD_REGS();
  goto L_9c4f60;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4f60: /* 9c4f60: mov eax, 0xa29fc8 */
  eax = 0xa29fc8u;
/* 9c4f65: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4f70(void) {
  LOAD_REGS();
L_9c4f70: /* 9c4f70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4f73: jmp 0x6cb7c1 */
  SPILL(); f_6cb7c1(); return;
}

void f_9c4f78(void) {
  LOAD_REGS();
L_9c4f78: /* 9c4f78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4f7b: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4f7e: jmp 0x6c9a93 */
  SPILL(); f_6c9a93(); return;
}

void f_9c4f83(void) {
  LOAD_REGS();
  goto L_9c4f83;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4f83: /* 9c4f83: mov eax, 0xa2a000 */
  eax = 0xa2a000u;
/* 9c4f88: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4fa0(void) {
  LOAD_REGS();
L_9c4fa0: /* 9c4fa0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4fa3: jmp 0x6ccc84 */
  SPILL(); f_6ccc84(); return;
}

void f_9c4fa8(void) {
  LOAD_REGS();
L_9c4fa8: /* 9c4fa8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4fab: add ecx, 0x7c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4fae: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4fb3(void) {
  LOAD_REGS();
L_9c4fb3: /* 9c4fb3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4fb6: add ecx, 0x88 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4fbc: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4fc1(void) {
  LOAD_REGS();
  goto L_9c4fc1;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c4fc1: /* 9c4fc1: mov eax, 0xa2a038 */
  eax = 0xa2a038u;
/* 9c4fc6: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c4fe0(void) {
  LOAD_REGS();
L_9c4fe0: /* 9c4fe0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4fe3: jmp 0x6ccc84 */
  SPILL(); f_6ccc84(); return;
}

void f_9c4fe8(void) {
  LOAD_REGS();
L_9c4fe8: /* 9c4fe8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4feb: add ecx, 0x7c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4fee: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c4ff3(void) {
  LOAD_REGS();
L_9c4ff3: /* 9c4ff3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c4ff6: add ecx, 0x88 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c4ffc: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c5001(void) {
  LOAD_REGS();
  goto L_9c5001;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5001: /* 9c5001: mov eax, 0xa2a074 */
  eax = 0xa2a074u;
/* 9c5006: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5020(void) {
  LOAD_REGS();
L_9c5020: /* 9c5020: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5023: jmp 0x6ccc84 */
  SPILL(); f_6ccc84(); return;
}

void f_9c5028(void) {
  LOAD_REGS();
L_9c5028: /* 9c5028: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c502b: add ecx, 0x7c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c502e: jmp 0x6c9543 */
  SPILL(); f_6c9543(); return;
}

void f_9c5033(void) {
  LOAD_REGS();
  goto L_9c5033;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5033: /* 9c5033: mov eax, 0xa2a0a8 */
  eax = 0xa2a0a8u;
/* 9c5038: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5050(void) {
  LOAD_REGS();
L_9c5050: /* 9c5050: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5053: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5056: jmp 0x6c8738 */
  SPILL(); f_6c8738(); return;
}

void f_9c505b(void) {
  LOAD_REGS();
  goto L_9c505b;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c505b: /* 9c505b: mov eax, 0xa2a0d0 */
  eax = 0xa2a0d0u;
/* 9c5060: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5070(void) {
  LOAD_REGS();
L_9c5070: /* 9c5070: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5073: jmp 0x6ca588 */
  SPILL(); f_6ca588(); return;
}

void f_9c5078(void) {
  LOAD_REGS();
  goto L_9c5078;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5078: /* 9c5078: mov eax, 0xa2a0f8 */
  eax = 0xa2a0f8u;
/* 9c507d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5090(void) {
  LOAD_REGS();
L_9c5090: /* 9c5090: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5093: jmp 0x6ca588 */
  SPILL(); f_6ca588(); return;
}

void f_9c5098(void) {
  LOAD_REGS();
  goto L_9c5098;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5098: /* 9c5098: mov eax, 0xa2a120 */
  eax = 0xa2a120u;
/* 9c509d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c50b0(void) {
  LOAD_REGS();
  goto L_9c50b0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c50b0: /* 9c50b0: mov eax, 0xa2a184 */
  eax = 0xa2a184u;
/* 9c50b5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c50c0(void) {
  LOAD_REGS();
L_9c50c0: /* 9c50c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c50c3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c50c6: jmp 0x6c2ed2 */
  SPILL(); f_6c2ed2(); return;
}

void f_9c50cb(void) {
  LOAD_REGS();
  goto L_9c50cb;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c50cb: /* 9c50cb: mov eax, 0xa2a1b4 */
  eax = 0xa2a1b4u;
/* 9c50d0: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c50e0(void) {
  LOAD_REGS();
L_9c50e0: /* 9c50e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c50e3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c50e6: jmp 0x6c2ed2 */
  SPILL(); f_6c2ed2(); return;
}

void f_9c50eb(void) {
  LOAD_REGS();
  goto L_9c50eb;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c50eb: /* 9c50eb: mov eax, 0xa2a1dc */
  eax = 0xa2a1dcu;
/* 9c50f0: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5100(void) {
  LOAD_REGS();
  goto L_9c5100;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5100: /* 9c5100: mov eax, 0xa2a240 */
  eax = 0xa2a240u;
/* 9c5105: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5110(void) {
  LOAD_REGS();
L_9c5110: /* 9c5110: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5113: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5119(void) {
  LOAD_REGS();
  goto L_9c5119;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5119: /* 9c5119: mov eax, 0xa2a270 */
  eax = 0xa2a270u;
/* 9c511e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5130(void) {
  LOAD_REGS();
L_9c5130: /* 9c5130: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5133: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5139(void) {
  LOAD_REGS();
  goto L_9c5139;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5139: /* 9c5139: mov eax, 0xa2a298 */
  eax = 0xa2a298u;
/* 9c513e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5150(void) {
  LOAD_REGS();
L_9c5150: /* 9c5150: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5153: jmp 0x6c14d3 */
  SPILL(); f_6c14d3(); return;
}

void f_9c5158(void) {
  LOAD_REGS();
  goto L_9c5158;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5158: /* 9c5158: mov eax, 0xa2a2c0 */
  eax = 0xa2a2c0u;
/* 9c515d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5170(void) {
  LOAD_REGS();
L_9c5170: /* 9c5170: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5173: jmp 0x6c14d3 */
  SPILL(); f_6c14d3(); return;
}

void f_9c5178(void) {
  LOAD_REGS();
  goto L_9c5178;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5178: /* 9c5178: mov eax, 0xa2a2e8 */
  eax = 0xa2a2e8u;
/* 9c517d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5190(void) {
  LOAD_REGS();
L_9c5190: /* 9c5190: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5193: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5199(void) {
  LOAD_REGS();
  goto L_9c5199;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5199: /* 9c5199: mov eax, 0xa2a310 */
  eax = 0xa2a310u;
/* 9c519e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c51b0(void) {
  LOAD_REGS();
L_9c51b0: /* 9c51b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c51b3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c51b9(void) {
  LOAD_REGS();
  goto L_9c51b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c51b9: /* 9c51b9: mov eax, 0xa2a338 */
  eax = 0xa2a338u;
/* 9c51be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c51d0(void) {
  LOAD_REGS();
L_9c51d0: /* 9c51d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c51d3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c51d9(void) {
  LOAD_REGS();
  goto L_9c51d9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c51d9: /* 9c51d9: mov eax, 0xa2a360 */
  eax = 0xa2a360u;
/* 9c51de: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c51f0(void) {
  LOAD_REGS();
L_9c51f0: /* 9c51f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c51f3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c51f9(void) {
  LOAD_REGS();
  goto L_9c51f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c51f9: /* 9c51f9: mov eax, 0xa2a388 */
  eax = 0xa2a388u;
/* 9c51fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5210(void) {
  LOAD_REGS();
L_9c5210: /* 9c5210: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5213: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5219(void) {
  LOAD_REGS();
  goto L_9c5219;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5219: /* 9c5219: mov eax, 0xa2a3b0 */
  eax = 0xa2a3b0u;
/* 9c521e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5230(void) {
  LOAD_REGS();
L_9c5230: /* 9c5230: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5233: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5239(void) {
  LOAD_REGS();
  goto L_9c5239;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5239: /* 9c5239: mov eax, 0xa2a3d8 */
  eax = 0xa2a3d8u;
/* 9c523e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5250(void) {
  LOAD_REGS();
L_9c5250: /* 9c5250: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5253: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5259(void) {
  LOAD_REGS();
  goto L_9c5259;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5259: /* 9c5259: mov eax, 0xa2a400 */
  eax = 0xa2a400u;
/* 9c525e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5270(void) {
  LOAD_REGS();
L_9c5270: /* 9c5270: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5273: jmp 0x6cb0a0 */
  SPILL(); f_6cb0a0(); return;
}

void f_9c5278(void) {
  LOAD_REGS();
  goto L_9c5278;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5278: /* 9c5278: mov eax, 0xa2a428 */
  eax = 0xa2a428u;
/* 9c527d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5290(void) {
  LOAD_REGS();
L_9c5290: /* 9c5290: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5293: jmp 0x6cb0a0 */
  SPILL(); f_6cb0a0(); return;
}

void f_9c5298(void) {
  LOAD_REGS();
  goto L_9c5298;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5298: /* 9c5298: mov eax, 0xa2a450 */
  eax = 0xa2a450u;
/* 9c529d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c52b0(void) {
  LOAD_REGS();
L_9c52b0: /* 9c52b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c52b3: jmp 0x6cb0a0 */
  SPILL(); f_6cb0a0(); return;
}

void f_9c52b8(void) {
  LOAD_REGS();
  goto L_9c52b8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c52b8: /* 9c52b8: mov eax, 0xa2a478 */
  eax = 0xa2a478u;
/* 9c52bd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c52d0(void) {
  LOAD_REGS();
L_9c52d0: /* 9c52d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c52d3: jmp 0x6c5687 */
  SPILL(); f_6c5687(); return;
}

void f_9c52d8(void) {
  LOAD_REGS();
  goto L_9c52d8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c52d8: /* 9c52d8: mov eax, 0xa2a4a0 */
  eax = 0xa2a4a0u;
/* 9c52dd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c52f0(void) {
  LOAD_REGS();
L_9c52f0: /* 9c52f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c52f3: jmp 0x6c5687 */
  SPILL(); f_6c5687(); return;
}

void f_9c52f8(void) {
  LOAD_REGS();
  goto L_9c52f8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c52f8: /* 9c52f8: mov eax, 0xa2a4c8 */
  eax = 0xa2a4c8u;
/* 9c52fd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5310(void) {
  LOAD_REGS();
L_9c5310: /* 9c5310: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5313: jmp 0x6c5687 */
  SPILL(); f_6c5687(); return;
}

void f_9c5318(void) {
  LOAD_REGS();
  goto L_9c5318;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5318: /* 9c5318: mov eax, 0xa2a4f0 */
  eax = 0xa2a4f0u;
/* 9c531d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5330(void) {
  LOAD_REGS();
L_9c5330: /* 9c5330: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5333: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5339(void) {
  LOAD_REGS();
  goto L_9c5339;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5339: /* 9c5339: mov eax, 0xa2a518 */
  eax = 0xa2a518u;
/* 9c533e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5350(void) {
  LOAD_REGS();
L_9c5350: /* 9c5350: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5353: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5359(void) {
  LOAD_REGS();
  goto L_9c5359;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5359: /* 9c5359: mov eax, 0xa2a540 */
  eax = 0xa2a540u;
/* 9c535e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5370(void) {
  LOAD_REGS();
L_9c5370: /* 9c5370: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9c5374: je 0x9c5388 */
  if (zf) goto L_9c5388;
L_9c537a: /* 9c537a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9c537d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c5380: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9c5383: jmp 0x9c538f */
  goto L_9c538f;
L_9c5388: /* 9c5388: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_9c538f: /* 9c538f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c5392: jmp 0x6cad0d */
  SPILL(); f_6cad0d(); return;
}

void f_9c5397(void) {
  LOAD_REGS();
  goto L_9c5397;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5397: /* 9c5397: mov eax, 0xa2a5ac */
  eax = 0xa2a5acu;
/* 9c539c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c53b0(void) {
  LOAD_REGS();
  goto L_9c53b0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c53b0: /* 9c53b0: mov eax, 0xa2a618 */
  eax = 0xa2a618u;
/* 9c53b5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c53c0(void) {
  LOAD_REGS();
  goto L_9c53c0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c53c0: /* 9c53c0: mov eax, 0xa2a684 */
  eax = 0xa2a684u;
/* 9c53c5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c53d0(void) {
  LOAD_REGS();
  goto L_9c53d0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c53d0: /* 9c53d0: mov eax, 0xa2a6f0 */
  eax = 0xa2a6f0u;
/* 9c53d5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c53e0(void) {
  LOAD_REGS();
  goto L_9c53e0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c53e0: /* 9c53e0: mov eax, 0xa2a75c */
  eax = 0xa2a75cu;
/* 9c53e5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c53f0(void) {
  LOAD_REGS();
  goto L_9c53f0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c53f0: /* 9c53f0: mov eax, 0xa2a7c8 */
  eax = 0xa2a7c8u;
/* 9c53f5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5400(void) {
  LOAD_REGS();
  goto L_9c5400;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5400: /* 9c5400: mov eax, 0xa2a834 */
  eax = 0xa2a834u;
/* 9c5405: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5410(void) {
  LOAD_REGS();
L_9c5410: /* 9c5410: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5413: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5419(void) {
  LOAD_REGS();
  goto L_9c5419;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5419: /* 9c5419: mov eax, 0xa2a864 */
  eax = 0xa2a864u;
/* 9c541e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5430(void) {
  LOAD_REGS();
L_9c5430: /* 9c5430: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9c5434: je 0x9c5448 */
  if (zf) goto L_9c5448;
L_9c543a: /* 9c543a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9c543d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c5440: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9c5443: jmp 0x9c544f */
  goto L_9c544f;
L_9c5448: /* 9c5448: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_9c544f: /* 9c544f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c5452: jmp 0x6c279d */
  SPILL(); f_6c279d(); return;
}

void f_9c5457(void) {
  LOAD_REGS();
  goto L_9c5457;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5457: /* 9c5457: mov eax, 0xa2a8d0 */
  eax = 0xa2a8d0u;
/* 9c545c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5470(void) {
  LOAD_REGS();
  goto L_9c5470;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5470: /* 9c5470: mov eax, 0xa2a93c */
  eax = 0xa2a93cu;
/* 9c5475: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5480(void) {
  LOAD_REGS();
  goto L_9c5480;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5480: /* 9c5480: mov eax, 0xa2a9a8 */
  eax = 0xa2a9a8u;
/* 9c5485: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5490(void) {
  LOAD_REGS();
  goto L_9c5490;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5490: /* 9c5490: mov eax, 0xa2aa14 */
  eax = 0xa2aa14u;
/* 9c5495: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c54a0(void) {
  LOAD_REGS();
  goto L_9c54a0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c54a0: /* 9c54a0: mov eax, 0xa2aa80 */
  eax = 0xa2aa80u;
/* 9c54a5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c54b0(void) {
  LOAD_REGS();
L_9c54b0: /* 9c54b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c54b3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c54b9(void) {
  LOAD_REGS();
  goto L_9c54b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c54b9: /* 9c54b9: mov eax, 0xa2aab0 */
  eax = 0xa2aab0u;
/* 9c54be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c54d0(void) {
  LOAD_REGS();
L_9c54d0: /* 9c54d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c54d3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c54d9(void) {
  LOAD_REGS();
  goto L_9c54d9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c54d9: /* 9c54d9: mov eax, 0xa2aad8 */
  eax = 0xa2aad8u;
/* 9c54de: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c54f0(void) {
  LOAD_REGS();
L_9c54f0: /* 9c54f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c54f3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c54f9(void) {
  LOAD_REGS();
  goto L_9c54f9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c54f9: /* 9c54f9: mov eax, 0xa2ab00 */
  eax = 0xa2ab00u;
/* 9c54fe: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5510(void) {
  LOAD_REGS();
L_9c5510: /* 9c5510: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5513: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5519(void) {
  LOAD_REGS();
  goto L_9c5519;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5519: /* 9c5519: mov eax, 0xa2ab28 */
  eax = 0xa2ab28u;
/* 9c551e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5530(void) {
  LOAD_REGS();
L_9c5530: /* 9c5530: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5533: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c5539(void) {
  LOAD_REGS();
  goto L_9c5539;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5539: /* 9c5539: mov eax, 0xa2ab50 */
  eax = 0xa2ab50u;
/* 9c553e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5550(void) {
  LOAD_REGS();
L_9c5550: /* 9c5550: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9c5554: je 0x9c5568 */
  if (zf) goto L_9c5568;
L_9c555a: /* 9c555a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9c555d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9c5560: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9c5563: jmp 0x9c556f */
  goto L_9c556f;
L_9c5568: /* 9c5568: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_9c556f: /* 9c556f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9c5572: jmp 0x6c14ec */
  SPILL(); f_6c14ec(); return;
}

void f_9c5577(void) {
  LOAD_REGS();
  goto L_9c5577;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5577: /* 9c5577: mov eax, 0xa2abbc */
  eax = 0xa2abbcu;
/* 9c557c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5590(void) {
  LOAD_REGS();
  goto L_9c5590;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5590: /* 9c5590: mov eax, 0xa2ac28 */
  eax = 0xa2ac28u;
/* 9c5595: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c55a0(void) {
  LOAD_REGS();
  goto L_9c55a0;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c55a0: /* 9c55a0: mov eax, 0xa2ac94 */
  eax = 0xa2ac94u;
/* 9c55a5: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c55b0(void) {
  LOAD_REGS();
L_9c55b0: /* 9c55b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c55b3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c55b9(void) {
  LOAD_REGS();
  goto L_9c55b9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c55b9: /* 9c55b9: mov eax, 0xa2acc4 */
  eax = 0xa2acc4u;
/* 9c55be: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c55d0(void) {
  LOAD_REGS();
L_9c55d0: /* 9c55d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c55d3: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c55d6: jmp 0x6c91f6 */
  SPILL(); f_6c91f6(); return;
}

void f_9c55db(void) {
  LOAD_REGS();
  goto L_9c55db;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c55db: /* 9c55db: mov eax, 0xa2acec */
  eax = 0xa2acecu;
/* 9c55e0: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c55f0(void) {
  LOAD_REGS();
L_9c55f0: /* 9c55f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c55f3: jmp 0x6cbadc */
  SPILL(); f_6cbadc(); return;
}

void f_9c55f8(void) {
  LOAD_REGS();
L_9c55f8: /* 9c55f8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c55fb: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c55fe: jmp 0x6c7fc2 */
  SPILL(); f_6c7fc2(); return;
}

void f_9c5603(void) {
  LOAD_REGS();
L_9c5603: /* 9c5603: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5606: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5609: jmp 0x6c7202 */
  SPILL(); f_6c7202(); return;
}

void f_9c560e(void) {
  LOAD_REGS();
L_9c560e: /* 9c560e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5611: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5614: jmp 0x6c7202 */
  SPILL(); f_6c7202(); return;
}

void f_9c5619(void) {
  LOAD_REGS();
L_9c5619: /* 9c5619: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c561c: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c561f: jmp 0x6c6fb4 */
  SPILL(); f_6c6fb4(); return;
}

void f_9c5624(void) {
  LOAD_REGS();
L_9c5624: /* 9c5624: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5627: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c562a: jmp 0x6c6fb4 */
  SPILL(); f_6c6fb4(); return;
}

void f_9c562f(void) {
  LOAD_REGS();
L_9c562f: /* 9c562f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5632: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5635: jmp 0x6c539e */
  SPILL(); f_6c539e(); return;
}

void f_9c563a(void) {
  LOAD_REGS();
L_9c563a: /* 9c563a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c563d: add ecx, 0x98 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5643: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c5649(void) {
  LOAD_REGS();
L_9c5649: /* 9c5649: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c564c: add ecx, 0xa4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5652: jmp 0x6c26e9 */
  SPILL(); f_6c26e9(); return;
}

void f_9c5657(void) {
  LOAD_REGS();
L_9c5657: /* 9c5657: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c565a: add ecx, 0xbc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5660: jmp 0x6c2dd8 */
  SPILL(); f_6c2dd8(); return;
}

void f_9c5665(void) {
  LOAD_REGS();
L_9c5665: /* 9c5665: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5668: add ecx, 0xd4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c566e: jmp 0x6c1596 */
  SPILL(); f_6c1596(); return;
}

void f_9c5673(void) {
  LOAD_REGS();
  goto L_9c5673;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5673: /* 9c5673: mov eax, 0xa2ad64 */
  eax = 0xa2ad64u;
/* 9c5678: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c56a0(void) {
  LOAD_REGS();
L_9c56a0: /* 9c56a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c56a3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c56a9(void) {
  LOAD_REGS();
  goto L_9c56a9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c56a9: /* 9c56a9: mov eax, 0xa2ad94 */
  eax = 0xa2ad94u;
/* 9c56ae: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c56c0(void) {
  LOAD_REGS();
L_9c56c0: /* 9c56c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c56c3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c56c9(void) {
  LOAD_REGS();
  goto L_9c56c9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c56c9: /* 9c56c9: mov eax, 0xa2adbc */
  eax = 0xa2adbcu;
/* 9c56ce: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c56e0(void) {
  LOAD_REGS();
L_9c56e0: /* 9c56e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c56e3: jmp dword ptr [0xcfa3fc] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_9c56e9(void) {
  LOAD_REGS();
  goto L_9c56e9;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c56e9: /* 9c56e9: mov eax, 0xa2ade4 */
  eax = 0xa2ade4u;
/* 9c56ee: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5700(void) {
  LOAD_REGS();
L_9c5700: /* 9c5700: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5703: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5706: jmp 0x6c91f6 */
  SPILL(); f_6c91f6(); return;
}

void f_9c570b(void) {
  LOAD_REGS();
  goto L_9c570b;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c570b: /* 9c570b: mov eax, 0xa2ae0c */
  eax = 0xa2ae0cu;
/* 9c5710: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5720(void) {
  LOAD_REGS();
L_9c5720: /* 9c5720: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5723: jmp 0x6cbadc */
  SPILL(); f_6cbadc(); return;
}

void f_9c5728(void) {
  LOAD_REGS();
L_9c5728: /* 9c5728: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c572b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c572e: jmp 0x6c7fc2 */
  SPILL(); f_6c7fc2(); return;
}

void f_9c5733(void) {
  LOAD_REGS();
L_9c5733: /* 9c5733: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5736: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5739: jmp 0x6c7202 */
  SPILL(); f_6c7202(); return;
}

void f_9c573e(void) {
  LOAD_REGS();
L_9c573e: /* 9c573e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5741: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5744: jmp 0x6c7202 */
  SPILL(); f_6c7202(); return;
}

void f_9c5749(void) {
  LOAD_REGS();
L_9c5749: /* 9c5749: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c574c: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c574f: jmp 0x6c6fb4 */
  SPILL(); f_6c6fb4(); return;
}

void f_9c5754(void) {
  LOAD_REGS();
L_9c5754: /* 9c5754: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5757: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c575a: jmp 0x6c6fb4 */
  SPILL(); f_6c6fb4(); return;
}

void f_9c575f(void) {
  LOAD_REGS();
L_9c575f: /* 9c575f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5762: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5765: jmp 0x6c539e */
  SPILL(); f_6c539e(); return;
}

void f_9c576a(void) {
  LOAD_REGS();
L_9c576a: /* 9c576a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c576d: add ecx, 0x98 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5773: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_9c5779(void) {
  LOAD_REGS();
L_9c5779: /* 9c5779: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c577c: add ecx, 0xa4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5782: jmp 0x6c26e9 */
  SPILL(); f_6c26e9(); return;
}

void f_9c5787(void) {
  LOAD_REGS();
L_9c5787: /* 9c5787: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c578a: add ecx, 0xbc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5790: jmp 0x6c2dd8 */
  SPILL(); f_6c2dd8(); return;
}

void f_9c5795(void) {
  LOAD_REGS();
L_9c5795: /* 9c5795: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5798: add ecx, 0xd4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c579e: jmp 0x6c1596 */
  SPILL(); f_6c1596(); return;
}

void f_9c57a3(void) {
  LOAD_REGS();
  goto L_9c57a3;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c57a3: /* 9c57a3: mov eax, 0xa2ae84 */
  eax = 0xa2ae84u;
/* 9c57a8: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c57d0(void) {
  LOAD_REGS();
L_9c57d0: /* 9c57d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c57d3: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c57d9(void) {
  LOAD_REGS();
L_9c57d9: /* 9c57d9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c57dc: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c57df: jmp 0x6cb659 */
  SPILL(); f_6cb659(); return;
}

void f_9c57e4(void) {
  LOAD_REGS();
  goto L_9c57e4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c57e4: /* 9c57e4: mov eax, 0xa2aebc */
  eax = 0xa2aebcu;
/* 9c57e9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5800(void) {
  LOAD_REGS();
L_9c5800: /* 9c5800: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5803: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c5809(void) {
  LOAD_REGS();
  goto L_9c5809;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5809: /* 9c5809: mov eax, 0xa2aee4 */
  eax = 0xa2aee4u;
/* 9c580e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5820(void) {
  LOAD_REGS();
  goto L_9c5820;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5820: /* 9c5820: mov eax, 0xa2af48 */
  eax = 0xa2af48u;
/* 9c5825: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5830(void) {
  LOAD_REGS();
L_9c5830: /* 9c5830: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5833: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c5839(void) {
  LOAD_REGS();
  goto L_9c5839;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5839: /* 9c5839: mov eax, 0xa2af78 */
  eax = 0xa2af78u;
/* 9c583e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5850(void) {
  LOAD_REGS();
L_9c5850: /* 9c5850: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5853: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c5859(void) {
  LOAD_REGS();
L_9c5859: /* 9c5859: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c585c: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c585f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5865(void) {
  LOAD_REGS();
L_9c5865: /* 9c5865: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5868: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c586b: jmp 0x6c1e1f */
  SPILL(); f_6c1e1f(); return;
}

void f_9c5870(void) {
  LOAD_REGS();
L_9c5870: /* 9c5870: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5873: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5879: jmp 0x6c9624 */
  SPILL(); f_6c9624(); return;
}

void f_9c587e(void) {
  LOAD_REGS();
L_9c587e: /* 9c587e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5881: add ecx, 0x104 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5887: jmp 0x6c6e92 */
  SPILL(); f_6c6e92(); return;
}

void f_9c588c(void) {
  LOAD_REGS();
L_9c588c: /* 9c588c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c588f: add ecx, 0x110 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5895: jmp 0x6c79fa */
  SPILL(); f_6c79fa(); return;
}

void f_9c589a(void) {
  LOAD_REGS();
L_9c589a: /* 9c589a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c589d: add ecx, 0x11c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c58a3: jmp 0x6c9624 */
  SPILL(); f_6c9624(); return;
}

void f_9c58a8(void) {
  LOAD_REGS();
L_9c58a8: /* 9c58a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c58ab: add ecx, 0x1b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c58b1: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c58b7(void) {
  LOAD_REGS();
L_9c58b7: /* 9c58b7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c58ba: add ecx, 0x1fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c58c0: jmp 0x6c79fa */
  SPILL(); f_6c79fa(); return;
}

void f_9c58c5(void) {
  LOAD_REGS();
L_9c58c5: /* 9c58c5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c58c8: add ecx, 0x220 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x220u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c58ce: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c58d4(void) {
  LOAD_REGS();
L_9c58d4: /* 9c58d4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c58d7: add ecx, 0x260 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c58dd: jmp 0x6c932c */
  SPILL(); f_6c932c(); return;
}

void f_9c58e2(void) {
  LOAD_REGS();
L_9c58e2: /* 9c58e2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c58e5: add ecx, 0x26c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x26cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c58eb: jmp 0x6ca0c4 */
  SPILL(); f_6ca0c4(); return;
}

void f_9c58f0(void) {
  LOAD_REGS();
L_9c58f0: /* 9c58f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c58f3: add ecx, 0x2a0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2a0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c58f9: jmp 0x6c364d */
  SPILL(); f_6c364d(); return;
}

void f_9c58fe(void) {
  LOAD_REGS();
L_9c58fe: /* 9c58fe: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5901: add ecx, 0x330 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x330u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5907: jmp 0x6c6d48 */
  SPILL(); f_6c6d48(); return;
}

void f_9c590c(void) {
  LOAD_REGS();
  goto L_9c590c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c590c: /* 9c590c: mov eax, 0xa2b008 */
  eax = 0xa2b008u;
/* 9c5911: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5950(void) {
  LOAD_REGS();
L_9c5950: /* 9c5950: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5953: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c5959(void) {
  LOAD_REGS();
L_9c5959: /* 9c5959: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c595c: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c595f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5965(void) {
  LOAD_REGS();
L_9c5965: /* 9c5965: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5968: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c596b: jmp 0x6c1e1f */
  SPILL(); f_6c1e1f(); return;
}

void f_9c5970(void) {
  LOAD_REGS();
L_9c5970: /* 9c5970: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5973: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5979: jmp 0x6c9624 */
  SPILL(); f_6c9624(); return;
}

void f_9c597e(void) {
  LOAD_REGS();
L_9c597e: /* 9c597e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5981: add ecx, 0x104 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5987: jmp 0x6c6e92 */
  SPILL(); f_6c6e92(); return;
}

void f_9c598c(void) {
  LOAD_REGS();
L_9c598c: /* 9c598c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c598f: add ecx, 0x110 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5995: jmp 0x6c79fa */
  SPILL(); f_6c79fa(); return;
}

void f_9c599a(void) {
  LOAD_REGS();
L_9c599a: /* 9c599a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c599d: add ecx, 0x11c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c59a3: jmp 0x6c9624 */
  SPILL(); f_6c9624(); return;
}

void f_9c59a8(void) {
  LOAD_REGS();
L_9c59a8: /* 9c59a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c59ab: add ecx, 0x1b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c59b1: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c59b7(void) {
  LOAD_REGS();
L_9c59b7: /* 9c59b7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c59ba: add ecx, 0x1fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c59c0: jmp 0x6c79fa */
  SPILL(); f_6c79fa(); return;
}

void f_9c59c5(void) {
  LOAD_REGS();
L_9c59c5: /* 9c59c5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c59c8: add ecx, 0x220 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x220u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c59ce: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c59d4(void) {
  LOAD_REGS();
L_9c59d4: /* 9c59d4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c59d7: add ecx, 0x260 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c59dd: jmp 0x6c932c */
  SPILL(); f_6c932c(); return;
}

void f_9c59e2(void) {
  LOAD_REGS();
L_9c59e2: /* 9c59e2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c59e5: add ecx, 0x26c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x26cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c59eb: jmp 0x6ca0c4 */
  SPILL(); f_6ca0c4(); return;
}

void f_9c59f0(void) {
  LOAD_REGS();
L_9c59f0: /* 9c59f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c59f3: add ecx, 0x2a0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2a0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c59f9: jmp 0x6c364d */
  SPILL(); f_6c364d(); return;
}

void f_9c59fe(void) {
  LOAD_REGS();
  goto L_9c59fe;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c59fe: /* 9c59fe: mov eax, 0xa2b09c */
  eax = 0xa2b09cu;
/* 9c5a03: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5a40(void) {
  LOAD_REGS();
L_9c5a40: /* 9c5a40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5a43: jmp dword ptr [0xcfa254] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_9c5a49(void) {
  LOAD_REGS();
L_9c5a49: /* 9c5a49: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5a4c: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5a4f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5a55(void) {
  LOAD_REGS();
L_9c5a55: /* 9c5a55: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5a58: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5a5b: jmp 0x6c1e1f */
  SPILL(); f_6c1e1f(); return;
}

void f_9c5a60(void) {
  LOAD_REGS();
L_9c5a60: /* 9c5a60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5a63: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5a69: jmp 0x6c9624 */
  SPILL(); f_6c9624(); return;
}

void f_9c5a6e(void) {
  LOAD_REGS();
L_9c5a6e: /* 9c5a6e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5a71: add ecx, 0x104 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5a77: jmp 0x6c6e92 */
  SPILL(); f_6c6e92(); return;
}

void f_9c5a7c(void) {
  LOAD_REGS();
L_9c5a7c: /* 9c5a7c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5a7f: add ecx, 0x110 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5a85: jmp 0x6c79fa */
  SPILL(); f_6c79fa(); return;
}

void f_9c5a8a(void) {
  LOAD_REGS();
L_9c5a8a: /* 9c5a8a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5a8d: add ecx, 0x11c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5a93: jmp 0x6c9624 */
  SPILL(); f_6c9624(); return;
}

void f_9c5a98(void) {
  LOAD_REGS();
L_9c5a98: /* 9c5a98: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5a9b: add ecx, 0x1b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5aa1: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c5aa7(void) {
  LOAD_REGS();
L_9c5aa7: /* 9c5aa7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5aaa: add ecx, 0x1fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5ab0: jmp 0x6c79fa */
  SPILL(); f_6c79fa(); return;
}

void f_9c5ab5(void) {
  LOAD_REGS();
L_9c5ab5: /* 9c5ab5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ab8: add ecx, 0x220 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x220u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5abe: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_9c5ac4(void) {
  LOAD_REGS();
L_9c5ac4: /* 9c5ac4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ac7: add ecx, 0x260 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5acd: jmp 0x6c932c */
  SPILL(); f_6c932c(); return;
}

void f_9c5ad2(void) {
  LOAD_REGS();
L_9c5ad2: /* 9c5ad2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ad5: add ecx, 0x26c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x26cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5adb: jmp 0x6ca0c4 */
  SPILL(); f_6ca0c4(); return;
}

void f_9c5ae0(void) {
  LOAD_REGS();
L_9c5ae0: /* 9c5ae0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ae3: add ecx, 0x2a0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2a0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5ae9: jmp 0x6c364d */
  SPILL(); f_6c364d(); return;
}

void f_9c5aee(void) {
  LOAD_REGS();
  goto L_9c5aee;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5aee: /* 9c5aee: mov eax, 0xa2b130 */
  eax = 0xa2b130u;
/* 9c5af3: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5b30(void) {
  LOAD_REGS();
L_9c5b30: /* 9c5b30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5b33: jmp 0x6c60a5 */
  SPILL(); f_6c60a5(); return;
}

void f_9c5b38(void) {
  LOAD_REGS();
  goto L_9c5b38;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5b38: /* 9c5b38: mov eax, 0xa2b164 */
  eax = 0xa2b164u;
/* 9c5b3d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5b50(void) {
  LOAD_REGS();
L_9c5b50: /* 9c5b50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5b53: jmp 0x6c60a5 */
  SPILL(); f_6c60a5(); return;
}

void f_9c5b58(void) {
  LOAD_REGS();
  goto L_9c5b58;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5b58: /* 9c5b58: mov eax, 0xa2b18c */
  eax = 0xa2b18cu;
/* 9c5b5d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5b70(void) {
  LOAD_REGS();
L_9c5b70: /* 9c5b70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5b73: jmp 0x6cb9c9 */
  SPILL(); f_6cb9c9(); return;
}

void f_9c5b78(void) {
  LOAD_REGS();
L_9c5b78: /* 9c5b78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5b7b: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5b81: jmp 0x6cb073 */
  SPILL(); f_6cb073(); return;
}

void f_9c5b86(void) {
  LOAD_REGS();
  goto L_9c5b86;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5b86: /* 9c5b86: mov eax, 0xa2b1bc */
  eax = 0xa2b1bcu;
/* 9c5b8b: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5ba0(void) {
  LOAD_REGS();
L_9c5ba0: /* 9c5ba0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ba3: jmp 0x6cb9c9 */
  SPILL(); f_6cb9c9(); return;
}

void f_9c5ba8(void) {
  LOAD_REGS();
  goto L_9c5ba8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5ba8: /* 9c5ba8: mov eax, 0xa2b1e4 */
  eax = 0xa2b1e4u;
/* 9c5bad: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5bc0(void) {
  LOAD_REGS();
L_9c5bc0: /* 9c5bc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5bc3: jmp 0x6cb9c9 */
  SPILL(); f_6cb9c9(); return;
}

void f_9c5bc8(void) {
  LOAD_REGS();
  goto L_9c5bc8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5bc8: /* 9c5bc8: mov eax, 0xa2b20c */
  eax = 0xa2b20cu;
/* 9c5bcd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5be0(void) {
  LOAD_REGS();
L_9c5be0: /* 9c5be0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5be3: jmp 0x6cb9c9 */
  SPILL(); f_6cb9c9(); return;
}

void f_9c5be8(void) {
  LOAD_REGS();
  goto L_9c5be8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5be8: /* 9c5be8: mov eax, 0xa2b234 */
  eax = 0xa2b234u;
/* 9c5bed: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5c00(void) {
  LOAD_REGS();
L_9c5c00: /* 9c5c00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5c03: jmp 0x6cb9c9 */
  SPILL(); f_6cb9c9(); return;
}

void f_9c5c08(void) {
  LOAD_REGS();
  goto L_9c5c08;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5c08: /* 9c5c08: mov eax, 0xa2b25c */
  eax = 0xa2b25cu;
/* 9c5c0d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5c20(void) {
  LOAD_REGS();
L_9c5c20: /* 9c5c20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5c23: jmp 0x6cb9c9 */
  SPILL(); f_6cb9c9(); return;
}

void f_9c5c28(void) {
  LOAD_REGS();
  goto L_9c5c28;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5c28: /* 9c5c28: mov eax, 0xa2b284 */
  eax = 0xa2b284u;
/* 9c5c2d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5c40(void) {
  LOAD_REGS();
L_9c5c40: /* 9c5c40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5c43: jmp 0x6cb9c9 */
  SPILL(); f_6cb9c9(); return;
}

void f_9c5c48(void) {
  LOAD_REGS();
  goto L_9c5c48;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5c48: /* 9c5c48: mov eax, 0xa2b2ac */
  eax = 0xa2b2acu;
/* 9c5c4d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5c60(void) {
  LOAD_REGS();
L_9c5c60: /* 9c5c60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5c63: jmp 0x6cb9c9 */
  SPILL(); f_6cb9c9(); return;
}

void f_9c5c68(void) {
  LOAD_REGS();
  goto L_9c5c68;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5c68: /* 9c5c68: mov eax, 0xa2b2d4 */
  eax = 0xa2b2d4u;
/* 9c5c6d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5c80(void) {
  LOAD_REGS();
L_9c5c80: /* 9c5c80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5c83: jmp 0x6c60a5 */
  SPILL(); f_6c60a5(); return;
}

void f_9c5c88(void) {
  LOAD_REGS();
  goto L_9c5c88;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5c88: /* 9c5c88: mov eax, 0xa2b2fc */
  eax = 0xa2b2fcu;
/* 9c5c8d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5ca0(void) {
  LOAD_REGS();
L_9c5ca0: /* 9c5ca0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ca3: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c5ca8(void) {
  LOAD_REGS();
L_9c5ca8: /* 9c5ca8: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 9c5cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c5cae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 9c5cb0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9c5cb2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5cb5: add ecx, 0x340 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x340u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5cbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9c5cbc: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9c5cc1u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9c5cc1: ret  */
  esp += 4; SPILL(); return;
}

void f_9c5cc2(void) {
  LOAD_REGS();
  goto L_9c5cc2;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5cc2: /* 9c5cc2: mov eax, 0xa2b32c */
  eax = 0xa2b32cu;
/* 9c5cc7: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5ce0(void) {
  LOAD_REGS();
L_9c5ce0: /* 9c5ce0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ce3: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c5ce8(void) {
  LOAD_REGS();
  goto L_9c5ce8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5ce8: /* 9c5ce8: mov eax, 0xa2b354 */
  eax = 0xa2b354u;
/* 9c5ced: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5d00(void) {
  LOAD_REGS();
L_9c5d00: /* 9c5d00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5d03: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c5d08(void) {
  LOAD_REGS();
  goto L_9c5d08;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5d08: /* 9c5d08: mov eax, 0xa2b37c */
  eax = 0xa2b37cu;
/* 9c5d0d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5d20(void) {
  LOAD_REGS();
L_9c5d20: /* 9c5d20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5d23: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c5d28(void) {
  LOAD_REGS();
L_9c5d28: /* 9c5d28: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5d2b: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5d31: jmp 0x6c4e85 */
  SPILL(); f_6c4e85(); return;
}

void f_9c5d36(void) {
  LOAD_REGS();
L_9c5d36: /* 9c5d36: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5d39: add ecx, 0x37c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x37cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5d3f: jmp 0x6c6532 */
  SPILL(); f_6c6532(); return;
}

void f_9c5d44(void) {
  LOAD_REGS();
L_9c5d44: /* 9c5d44: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5d47: add ecx, 0x388 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5d4d: jmp 0x6c4bfb */
  SPILL(); f_6c4bfb(); return;
}

void f_9c5d52(void) {
  LOAD_REGS();
  goto L_9c5d52;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5d52: /* 9c5d52: mov eax, 0xa2b3bc */
  eax = 0xa2b3bcu;
/* 9c5d57: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5d70(void) {
  LOAD_REGS();
L_9c5d70: /* 9c5d70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5d73: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c5d78(void) {
  LOAD_REGS();
L_9c5d78: /* 9c5d78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5d7b: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5d81: jmp 0x6c4e85 */
  SPILL(); f_6c4e85(); return;
}

void f_9c5d86(void) {
  LOAD_REGS();
L_9c5d86: /* 9c5d86: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5d89: add ecx, 0x37c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x37cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5d8f: jmp 0x6c6532 */
  SPILL(); f_6c6532(); return;
}

void f_9c5d94(void) {
  LOAD_REGS();
L_9c5d94: /* 9c5d94: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5d97: add ecx, 0x388 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5d9d: jmp 0x6c4bfb */
  SPILL(); f_6c4bfb(); return;
}

void f_9c5da2(void) {
  LOAD_REGS();
  goto L_9c5da2;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5da2: /* 9c5da2: mov eax, 0xa2b400 */
  eax = 0xa2b400u;
/* 9c5da7: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5dc0(void) {
  LOAD_REGS();
L_9c5dc0: /* 9c5dc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5dc3: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c5dc8(void) {
  LOAD_REGS();
L_9c5dc8: /* 9c5dc8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5dcb: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5dd1: jmp 0x6c4e85 */
  SPILL(); f_6c4e85(); return;
}

void f_9c5dd6(void) {
  LOAD_REGS();
L_9c5dd6: /* 9c5dd6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5dd9: add ecx, 0x37c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x37cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5ddf: jmp 0x6c6532 */
  SPILL(); f_6c6532(); return;
}

void f_9c5de4(void) {
  LOAD_REGS();
  goto L_9c5de4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5de4: /* 9c5de4: mov eax, 0xa2b43c */
  eax = 0xa2b43cu;
/* 9c5de9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5e00(void) {
  LOAD_REGS();
L_9c5e00: /* 9c5e00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5e03: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c5e08(void) {
  LOAD_REGS();
  goto L_9c5e08;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5e08: /* 9c5e08: mov eax, 0xa2b468 */
  eax = 0xa2b468u;
/* 9c5e0d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5e20(void) {
  LOAD_REGS();
L_9c5e20: /* 9c5e20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5e23: jmp 0x6c78b5 */
  SPILL(); f_6c78b5(); return;
}

void f_9c5e28(void) {
  LOAD_REGS();
L_9c5e28: /* 9c5e28: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5e2b: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5e31: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5e37(void) {
  LOAD_REGS();
L_9c5e37: /* 9c5e37: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 9c5e3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c5e3d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9c5e3f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9c5e41: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5e44: add ecx, 0x364 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x364u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5e4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9c5e4b: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9c5e50u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9c5e50: ret  */
  esp += 4; SPILL(); return;
}

void f_9c5e51(void) {
  LOAD_REGS();
  goto L_9c5e51;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5e51: /* 9c5e51: mov eax, 0xa2b4a0 */
  eax = 0xa2b4a0u;
/* 9c5e56: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5e70(void) {
  LOAD_REGS();
L_9c5e70: /* 9c5e70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5e73: jmp 0x6c78b5 */
  SPILL(); f_6c78b5(); return;
}

void f_9c5e78(void) {
  LOAD_REGS();
L_9c5e78: /* 9c5e78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5e7b: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5e81: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5e87(void) {
  LOAD_REGS();
  goto L_9c5e87;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5e87: /* 9c5e87: mov eax, 0xa2b4d4 */
  eax = 0xa2b4d4u;
/* 9c5e8c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5ea0(void) {
  LOAD_REGS();
L_9c5ea0: /* 9c5ea0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ea3: jmp 0x6c78b5 */
  SPILL(); f_6c78b5(); return;
}

void f_9c5ea8(void) {
  LOAD_REGS();
L_9c5ea8: /* 9c5ea8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5eab: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5eb1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5eb7(void) {
  LOAD_REGS();
  goto L_9c5eb7;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5eb7: /* 9c5eb7: mov eax, 0xa2b504 */
  eax = 0xa2b504u;
/* 9c5ebc: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5ed0(void) {
  LOAD_REGS();
L_9c5ed0: /* 9c5ed0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ed3: jmp 0x6c78b5 */
  SPILL(); f_6c78b5(); return;
}

void f_9c5ed8(void) {
  LOAD_REGS();
L_9c5ed8: /* 9c5ed8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5edb: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5ee1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5ee7(void) {
  LOAD_REGS();
L_9c5ee7: /* 9c5ee7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5eea: add ecx, 0x348 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5ef0: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5ef6(void) {
  LOAD_REGS();
L_9c5ef6: /* 9c5ef6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ef9: add ecx, 0x388 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5eff: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5f05(void) {
  LOAD_REGS();
L_9c5f05: /* 9c5f05: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5f08: add ecx, 0x394 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x394u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5f0e: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5f14(void) {
  LOAD_REGS();
L_9c5f14: /* 9c5f14: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5f17: add ecx, 0x3a0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5f1d: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5f23(void) {
  LOAD_REGS();
L_9c5f23: /* 9c5f23: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5f26: add ecx, 0x3ac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3acu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5f2c: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5f32(void) {
  LOAD_REGS();
L_9c5f32: /* 9c5f32: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5f35: add ecx, 0x3bc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5f3b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5f41(void) {
  LOAD_REGS();
L_9c5f41: /* 9c5f41: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5f44: add ecx, 0x3c8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3c8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5f4a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5f50(void) {
  LOAD_REGS();
L_9c5f50: /* 9c5f50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5f53: add ecx, 0x3d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5f59: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5f5f(void) {
  LOAD_REGS();
L_9c5f5f: /* 9c5f5f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5f62: add ecx, 0x3e0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5f68: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5f6e(void) {
  LOAD_REGS();
L_9c5f6e: /* 9c5f6e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5f71: add ecx, 0x3f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3f0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5f77: jmp 0x6c9dd1 */
  SPILL(); f_6c9dd1(); return;
}

void f_9c5f7c(void) {
  LOAD_REGS();
L_9c5f7c: /* 9c5f7c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5f7f: add ecx, 0x3fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5f85: jmp 0x6c9dd1 */
  SPILL(); f_6c9dd1(); return;
}

void f_9c5f8a(void) {
  LOAD_REGS();
  goto L_9c5f8a;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c5f8a: /* 9c5f8a: mov eax, 0xa2b58c */
  eax = 0xa2b58cu;
/* 9c5f8f: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c5fd0(void) {
  LOAD_REGS();
L_9c5fd0: /* 9c5fd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5fd3: jmp 0x6c78b5 */
  SPILL(); f_6c78b5(); return;
}

void f_9c5fd8(void) {
  LOAD_REGS();
L_9c5fd8: /* 9c5fd8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5fdb: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5fe1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5fe7(void) {
  LOAD_REGS();
L_9c5fe7: /* 9c5fe7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5fea: add ecx, 0x348 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5ff0: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c5ff6(void) {
  LOAD_REGS();
L_9c5ff6: /* 9c5ff6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c5ff9: add ecx, 0x388 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c5fff: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6005(void) {
  LOAD_REGS();
L_9c6005: /* 9c6005: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6008: add ecx, 0x394 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x394u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c600e: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6014(void) {
  LOAD_REGS();
L_9c6014: /* 9c6014: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6017: add ecx, 0x3a0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c601d: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6023(void) {
  LOAD_REGS();
L_9c6023: /* 9c6023: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6026: add ecx, 0x3ac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3acu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c602c: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6032(void) {
  LOAD_REGS();
L_9c6032: /* 9c6032: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6035: add ecx, 0x3bc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c603b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6041(void) {
  LOAD_REGS();
L_9c6041: /* 9c6041: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6044: add ecx, 0x3c8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3c8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c604a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6050(void) {
  LOAD_REGS();
L_9c6050: /* 9c6050: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6053: add ecx, 0x3d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6059: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c605f(void) {
  LOAD_REGS();
L_9c605f: /* 9c605f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6062: add ecx, 0x3e0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6068: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c606e(void) {
  LOAD_REGS();
L_9c606e: /* 9c606e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6071: add ecx, 0x3f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3f0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6077: jmp 0x6c9dd1 */
  SPILL(); f_6c9dd1(); return;
}

void f_9c607c(void) {
  LOAD_REGS();
  goto L_9c607c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c607c: /* 9c607c: mov eax, 0xa2b618 */
  eax = 0xa2b618u;
/* 9c6081: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c60c0(void) {
  LOAD_REGS();
L_9c60c0: /* 9c60c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c60c3: jmp 0x6c78b5 */
  SPILL(); f_6c78b5(); return;
}

void f_9c60c8(void) {
  LOAD_REGS();
L_9c60c8: /* 9c60c8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c60cb: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c60d1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c60d7(void) {
  LOAD_REGS();
L_9c60d7: /* 9c60d7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c60da: add ecx, 0x348 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c60e0: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c60e6(void) {
  LOAD_REGS();
L_9c60e6: /* 9c60e6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c60e9: add ecx, 0x388 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c60ef: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c60f5(void) {
  LOAD_REGS();
L_9c60f5: /* 9c60f5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c60f8: add ecx, 0x394 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x394u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c60fe: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6104(void) {
  LOAD_REGS();
L_9c6104: /* 9c6104: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6107: add ecx, 0x3a0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c610d: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6113(void) {
  LOAD_REGS();
L_9c6113: /* 9c6113: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6116: add ecx, 0x3ac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3acu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c611c: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6122(void) {
  LOAD_REGS();
L_9c6122: /* 9c6122: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6125: add ecx, 0x3bc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c612b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6131(void) {
  LOAD_REGS();
L_9c6131: /* 9c6131: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6134: add ecx, 0x3c8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3c8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c613a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6140(void) {
  LOAD_REGS();
L_9c6140: /* 9c6140: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6143: add ecx, 0x3d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6149: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c614f(void) {
  LOAD_REGS();
L_9c614f: /* 9c614f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6152: add ecx, 0x3e0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6158: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c615e(void) {
  LOAD_REGS();
L_9c615e: /* 9c615e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6161: add ecx, 0x3f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3f0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6167: jmp 0x6c9dd1 */
  SPILL(); f_6c9dd1(); return;
}

void f_9c616c(void) {
  LOAD_REGS();
  goto L_9c616c;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c616c: /* 9c616c: mov eax, 0xa2b6a0 */
  eax = 0xa2b6a0u;
/* 9c6171: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c61b0(void) {
  LOAD_REGS();
L_9c61b0: /* 9c61b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c61b3: jmp 0x6c78b5 */
  SPILL(); f_6c78b5(); return;
}

void f_9c61b8(void) {
  LOAD_REGS();
L_9c61b8: /* 9c61b8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c61bb: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c61c1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c61c7(void) {
  LOAD_REGS();
L_9c61c7: /* 9c61c7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c61ca: add ecx, 0x364 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x364u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c61d0: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c61d6(void) {
  LOAD_REGS();
L_9c61d6: /* 9c61d6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c61d9: add ecx, 0x370 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c61df: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c61e5(void) {
  LOAD_REGS();
L_9c61e5: /* 9c61e5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c61e8: add ecx, 0x37c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x37cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c61ee: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c61f4(void) {
  LOAD_REGS();
L_9c61f4: /* 9c61f4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c61f7: add ecx, 0x388 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c61fd: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6203(void) {
  LOAD_REGS();
L_9c6203: /* 9c6203: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6206: add ecx, 0x3a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c620c: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6212(void) {
  LOAD_REGS();
L_9c6212: /* 9c6212: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6215: add ecx, 0x3b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c621b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6221(void) {
  LOAD_REGS();
L_9c6221: /* 9c6221: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6224: add ecx, 0x3c0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c622a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6230(void) {
  LOAD_REGS();
L_9c6230: /* 9c6230: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6233: add ecx, 0x3d0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6239: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c623f(void) {
  LOAD_REGS();
L_9c623f: /* 9c623f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6242: add ecx, 0x3dc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3dcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6248: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c624e(void) {
  LOAD_REGS();
L_9c624e: /* 9c624e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6251: add ecx, 0x3e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6257: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c625d(void) {
  LOAD_REGS();
  goto L_9c625d;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c625d: /* 9c625d: mov eax, 0xa2b728 */
  eax = 0xa2b728u;
/* 9c6262: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c62a0(void) {
  LOAD_REGS();
L_9c62a0: /* 9c62a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c62a3: jmp 0x6c78b5 */
  SPILL(); f_6c78b5(); return;
}

void f_9c62a8(void) {
  LOAD_REGS();
L_9c62a8: /* 9c62a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c62ab: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c62b1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c62b7(void) {
  LOAD_REGS();
L_9c62b7: /* 9c62b7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c62ba: add ecx, 0x364 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x364u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c62c0: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c62c6(void) {
  LOAD_REGS();
L_9c62c6: /* 9c62c6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c62c9: add ecx, 0x370 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c62cf: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c62d5(void) {
  LOAD_REGS();
L_9c62d5: /* 9c62d5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c62d8: add ecx, 0x37c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x37cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c62de: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c62e4(void) {
  LOAD_REGS();
L_9c62e4: /* 9c62e4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c62e7: add ecx, 0x388 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c62ed: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c62f3(void) {
  LOAD_REGS();
L_9c62f3: /* 9c62f3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c62f6: add ecx, 0x3a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c62fc: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6302(void) {
  LOAD_REGS();
L_9c6302: /* 9c6302: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6305: add ecx, 0x3b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c630b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6311(void) {
  LOAD_REGS();
L_9c6311: /* 9c6311: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6314: add ecx, 0x3c0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c631a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6320(void) {
  LOAD_REGS();
L_9c6320: /* 9c6320: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6323: add ecx, 0x3d0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6329: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c632f(void) {
  LOAD_REGS();
L_9c632f: /* 9c632f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6332: add ecx, 0x3dc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3dcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6338: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c633e(void) {
  LOAD_REGS();
  goto L_9c633e;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c633e: /* 9c633e: mov eax, 0xa2b7a8 */
  eax = 0xa2b7a8u;
/* 9c6343: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6380(void) {
  LOAD_REGS();
L_9c6380: /* 9c6380: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6383: jmp 0x6c78b5 */
  SPILL(); f_6c78b5(); return;
}

void f_9c6388(void) {
  LOAD_REGS();
L_9c6388: /* 9c6388: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c638b: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6391: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6397(void) {
  LOAD_REGS();
L_9c6397: /* 9c6397: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c639a: add ecx, 0x364 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x364u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c63a0: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c63a6(void) {
  LOAD_REGS();
L_9c63a6: /* 9c63a6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c63a9: add ecx, 0x370 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c63af: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c63b5(void) {
  LOAD_REGS();
L_9c63b5: /* 9c63b5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c63b8: add ecx, 0x37c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x37cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c63be: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c63c4(void) {
  LOAD_REGS();
L_9c63c4: /* 9c63c4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c63c7: add ecx, 0x388 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c63cd: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c63d3(void) {
  LOAD_REGS();
L_9c63d3: /* 9c63d3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c63d6: add ecx, 0x3a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c63dc: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c63e2(void) {
  LOAD_REGS();
L_9c63e2: /* 9c63e2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c63e5: add ecx, 0x3b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c63eb: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c63f1(void) {
  LOAD_REGS();
L_9c63f1: /* 9c63f1: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c63f4: add ecx, 0x3c0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c63fa: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6400(void) {
  LOAD_REGS();
L_9c6400: /* 9c6400: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6403: add ecx, 0x3d0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6409: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c640f(void) {
  LOAD_REGS();
L_9c640f: /* 9c640f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6412: add ecx, 0x3dc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3dcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6418: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c641e(void) {
  LOAD_REGS();
  goto L_9c641e;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c641e: /* 9c641e: mov eax, 0xa2b828 */
  eax = 0xa2b828u;
/* 9c6423: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6460(void) {
  LOAD_REGS();
L_9c6460: /* 9c6460: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6463: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c6468(void) {
  LOAD_REGS();
  goto L_9c6468;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6468: /* 9c6468: mov eax, 0xa2b858 */
  eax = 0xa2b858u;
/* 9c646d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6480(void) {
  LOAD_REGS();
L_9c6480: /* 9c6480: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6483: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c6488(void) {
  LOAD_REGS();
L_9c6488: /* 9c6488: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c648b: add ecx, 0x344 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6491: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6497(void) {
  LOAD_REGS();
L_9c6497: /* 9c6497: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c649a: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c64a0: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c64a6(void) {
  LOAD_REGS();
L_9c64a6: /* 9c64a6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c64a9: add ecx, 0x35c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c64af: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c64b5(void) {
  LOAD_REGS();
L_9c64b5: /* 9c64b5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c64b8: add ecx, 0x368 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c64be: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c64c4(void) {
  LOAD_REGS();
  goto L_9c64c4;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c64c4: /* 9c64c4: mov eax, 0xa2b8a0 */
  eax = 0xa2b8a0u;
/* 9c64c9: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c64f0(void) {
  LOAD_REGS();
L_9c64f0: /* 9c64f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c64f3: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c64f8(void) {
  LOAD_REGS();
L_9c64f8: /* 9c64f8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c64fb: add ecx, 0x344 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6501: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6507(void) {
  LOAD_REGS();
L_9c6507: /* 9c6507: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c650a: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6510: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6516(void) {
  LOAD_REGS();
L_9c6516: /* 9c6516: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6519: add ecx, 0x35c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c651f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6525(void) {
  LOAD_REGS();
  goto L_9c6525;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6525: /* 9c6525: mov eax, 0xa2b8e4 */
  eax = 0xa2b8e4u;
/* 9c652a: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6540(void) {
  LOAD_REGS();
L_9c6540: /* 9c6540: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6543: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c6548(void) {
  LOAD_REGS();
L_9c6548: /* 9c6548: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c654b: add ecx, 0x344 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6551: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6557(void) {
  LOAD_REGS();
L_9c6557: /* 9c6557: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c655a: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6560: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6566(void) {
  LOAD_REGS();
L_9c6566: /* 9c6566: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6569: add ecx, 0x35c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c656f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6575(void) {
  LOAD_REGS();
  goto L_9c6575;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6575: /* 9c6575: mov eax, 0xa2b928 */
  eax = 0xa2b928u;
/* 9c657a: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6590(void) {
  LOAD_REGS();
L_9c6590: /* 9c6590: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6593: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c6598(void) {
  LOAD_REGS();
  goto L_9c6598;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6598: /* 9c6598: mov eax, 0xa2b954 */
  eax = 0xa2b954u;
/* 9c659d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c65b0(void) {
  LOAD_REGS();
L_9c65b0: /* 9c65b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c65b3: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c65b8(void) {
  LOAD_REGS();
  goto L_9c65b8;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c65b8: /* 9c65b8: mov eax, 0xa2b97c */
  eax = 0xa2b97cu;
/* 9c65bd: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c65d0(void) {
  LOAD_REGS();
L_9c65d0: /* 9c65d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c65d3: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c65d8(void) {
  LOAD_REGS();
L_9c65d8: /* 9c65d8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c65db: add ecx, 0x344 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c65e1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c65e7(void) {
  LOAD_REGS();
L_9c65e7: /* 9c65e7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c65ea: add ecx, 0x35c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c65f0: jmp 0x6c6f8c */
  SPILL(); f_6c6f8c(); return;
}

void f_9c65f5(void) {
  LOAD_REGS();
L_9c65f5: /* 9c65f5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c65f8: add ecx, 0x39c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c65fe: jmp 0x6c549d */
  SPILL(); f_6c549d(); return;
}

void f_9c6603(void) {
  LOAD_REGS();
  goto L_9c6603;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6603: /* 9c6603: mov eax, 0xa2b9bc */
  eax = 0xa2b9bcu;
/* 9c6608: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6620(void) {
  LOAD_REGS();
L_9c6620: /* 9c6620: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6623: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c6628(void) {
  LOAD_REGS();
L_9c6628: /* 9c6628: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c662b: add ecx, 0x344 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6631: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6637(void) {
  LOAD_REGS();
L_9c6637: /* 9c6637: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c663a: add ecx, 0x35c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6640: jmp 0x6c6f8c */
  SPILL(); f_6c6f8c(); return;
}

void f_9c6645(void) {
  LOAD_REGS();
  goto L_9c6645;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6645: /* 9c6645: mov eax, 0xa2b9f8 */
  eax = 0xa2b9f8u;
/* 9c664a: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6660(void) {
  LOAD_REGS();
L_9c6660: /* 9c6660: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6663: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c6668(void) {
  LOAD_REGS();
L_9c6668: /* 9c6668: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c666b: add ecx, 0x344 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6671: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6677(void) {
  LOAD_REGS();
L_9c6677: /* 9c6677: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c667a: add ecx, 0x35c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6680: jmp 0x6c6f8c */
  SPILL(); f_6c6f8c(); return;
}

void f_9c6685(void) {
  LOAD_REGS();
  goto L_9c6685;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6685: /* 9c6685: mov eax, 0xa2ba34 */
  eax = 0xa2ba34u;
/* 9c668a: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c66a0(void) {
  LOAD_REGS();
L_9c66a0: /* 9c66a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c66a3: jmp 0x6c5128 */
  SPILL(); f_6c5128(); return;
}

void f_9c66a8(void) {
  LOAD_REGS();
L_9c66a8: /* 9c66a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c66ab: add ecx, 0x3a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c66b1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c66b7(void) {
  LOAD_REGS();
L_9c66b7: /* 9c66b7: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 9c66bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c66bd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9c66bf: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9c66c1: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c66c4: add ecx, 0x3f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c66ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9c66cb: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9c66d0u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9c66d0: ret  */
  esp += 4; SPILL(); return;
}

void f_9c66d1(void) {
  LOAD_REGS();
  goto L_9c66d1;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c66d1: /* 9c66d1: mov eax, 0xa2ba70 */
  eax = 0xa2ba70u;
/* 9c66d6: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c66f0(void) {
  LOAD_REGS();
L_9c66f0: /* 9c66f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c66f3: jmp 0x6c5128 */
  SPILL(); f_6c5128(); return;
}

void f_9c66f8(void) {
  LOAD_REGS();
L_9c66f8: /* 9c66f8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c66fb: add ecx, 0x3a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6701: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6707(void) {
  LOAD_REGS();
  goto L_9c6707;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6707: /* 9c6707: mov eax, 0xa2baa4 */
  eax = 0xa2baa4u;
/* 9c670c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6720(void) {
  LOAD_REGS();
L_9c6720: /* 9c6720: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6723: jmp 0x6c5128 */
  SPILL(); f_6c5128(); return;
}

void f_9c6728(void) {
  LOAD_REGS();
L_9c6728: /* 9c6728: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c672b: add ecx, 0x3a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6731: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6737(void) {
  LOAD_REGS();
  goto L_9c6737;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6737: /* 9c6737: mov eax, 0xa2bad4 */
  eax = 0xa2bad4u;
/* 9c673c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6750(void) {
  LOAD_REGS();
L_9c6750: /* 9c6750: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6753: jmp 0x6c5128 */
  SPILL(); f_6c5128(); return;
}

void f_9c6758(void) {
  LOAD_REGS();
  goto L_9c6758;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6758: /* 9c6758: mov eax, 0xa2bafc */
  eax = 0xa2bafcu;
/* 9c675d: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6770(void) {
  LOAD_REGS();
L_9c6770: /* 9c6770: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6773: jmp 0x6c5128 */
  SPILL(); f_6c5128(); return;
}

void f_9c6778(void) {
  LOAD_REGS();
L_9c6778: /* 9c6778: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c677b: add ecx, 0x3d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6781: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6787(void) {
  LOAD_REGS();
L_9c6787: /* 9c6787: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c678a: add ecx, 0x3e0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6790: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6796(void) {
  LOAD_REGS();
L_9c6796: /* 9c6796: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6799: add ecx, 0x40c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c679f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c67a5(void) {
  LOAD_REGS();
L_9c67a5: /* 9c67a5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c67a8: add ecx, 0x418 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c67ae: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c67b4(void) {
  LOAD_REGS();
L_9c67b4: /* 9c67b4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c67b7: add ecx, 0x42c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c67bd: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c67c3(void) {
  LOAD_REGS();
L_9c67c3: /* 9c67c3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c67c6: add ecx, 0x438 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c67cc: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c67d2(void) {
  LOAD_REGS();
L_9c67d2: /* 9c67d2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c67d5: add ecx, 0x48c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c67db: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c67e1(void) {
  LOAD_REGS();
L_9c67e1: /* 9c67e1: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c67e4: add ecx, 0x4cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c67ea: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c67f0(void) {
  LOAD_REGS();
L_9c67f0: /* 9c67f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c67f3: add ecx, 0x4d8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c67f9: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c67ff(void) {
  LOAD_REGS();
L_9c67ff: /* 9c67ff: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6802: add ecx, 0x4e4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6808: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c680e(void) {
  LOAD_REGS();
L_9c680e: /* 9c680e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6811: add ecx, 0x4f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6817: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c681d(void) {
  LOAD_REGS();
L_9c681d: /* 9c681d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6820: add ecx, 0x4fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6826: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c682c(void) {
  LOAD_REGS();
L_9c682c: /* 9c682c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c682f: add ecx, 0x51c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x51cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6835: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c683b(void) {
  LOAD_REGS();
L_9c683b: /* 9c683b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c683e: add ecx, 0x534 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x534u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6844: jmp 0x6c364d */
  SPILL(); f_6c364d(); return;
}

void f_9c6849(void) {
  LOAD_REGS();
L_9c6849: /* 9c6849: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c684c: add ecx, 0x540 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x540u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6852: jmp 0x6c9539 */
  SPILL(); f_6c9539(); return;
}

void f_9c6857(void) {
  LOAD_REGS();
  goto L_9c6857;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6857: /* 9c6857: mov eax, 0xa2bb9c */
  eax = 0xa2bb9cu;
/* 9c685c: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c68a0(void) {
  LOAD_REGS();
L_9c68a0: /* 9c68a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c68a3: jmp 0x6c5128 */
  SPILL(); f_6c5128(); return;
}

void f_9c68a8(void) {
  LOAD_REGS();
L_9c68a8: /* 9c68a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c68ab: add ecx, 0x3d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c68b1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c68b7(void) {
  LOAD_REGS();
L_9c68b7: /* 9c68b7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c68ba: add ecx, 0x3e0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c68c0: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c68c6(void) {
  LOAD_REGS();
L_9c68c6: /* 9c68c6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c68c9: add ecx, 0x40c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c68cf: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c68d5(void) {
  LOAD_REGS();
L_9c68d5: /* 9c68d5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c68d8: add ecx, 0x418 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c68de: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c68e4(void) {
  LOAD_REGS();
L_9c68e4: /* 9c68e4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c68e7: add ecx, 0x42c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c68ed: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c68f3(void) {
  LOAD_REGS();
L_9c68f3: /* 9c68f3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c68f6: add ecx, 0x438 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c68fc: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6902(void) {
  LOAD_REGS();
L_9c6902: /* 9c6902: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6905: add ecx, 0x48c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c690b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6911(void) {
  LOAD_REGS();
L_9c6911: /* 9c6911: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6914: add ecx, 0x4cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c691a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6920(void) {
  LOAD_REGS();
L_9c6920: /* 9c6920: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6923: add ecx, 0x4d8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6929: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c692f(void) {
  LOAD_REGS();
L_9c692f: /* 9c692f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6932: add ecx, 0x4e4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6938: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c693e(void) {
  LOAD_REGS();
L_9c693e: /* 9c693e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6941: add ecx, 0x4f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6947: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c694d(void) {
  LOAD_REGS();
L_9c694d: /* 9c694d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6950: add ecx, 0x4fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6956: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c695c(void) {
  LOAD_REGS();
L_9c695c: /* 9c695c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c695f: add ecx, 0x51c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x51cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6965: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c696b(void) {
  LOAD_REGS();
L_9c696b: /* 9c696b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c696e: add ecx, 0x534 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x534u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6974: jmp 0x6c364d */
  SPILL(); f_6c364d(); return;
}

void f_9c6979(void) {
  LOAD_REGS();
  goto L_9c6979;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6979: /* 9c6979: mov eax, 0xa2bc40 */
  eax = 0xa2bc40u;
/* 9c697e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c69c0(void) {
  LOAD_REGS();
L_9c69c0: /* 9c69c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c69c3: jmp 0x6c5128 */
  SPILL(); f_6c5128(); return;
}

void f_9c69c8(void) {
  LOAD_REGS();
L_9c69c8: /* 9c69c8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c69cb: add ecx, 0x3d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c69d1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c69d7(void) {
  LOAD_REGS();
L_9c69d7: /* 9c69d7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c69da: add ecx, 0x3e0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c69e0: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c69e6(void) {
  LOAD_REGS();
L_9c69e6: /* 9c69e6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c69e9: add ecx, 0x40c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c69ef: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c69f5(void) {
  LOAD_REGS();
L_9c69f5: /* 9c69f5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c69f8: add ecx, 0x418 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c69fe: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6a04(void) {
  LOAD_REGS();
L_9c6a04: /* 9c6a04: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6a07: add ecx, 0x42c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6a0d: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6a13(void) {
  LOAD_REGS();
L_9c6a13: /* 9c6a13: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6a16: add ecx, 0x438 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6a1c: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6a22(void) {
  LOAD_REGS();
L_9c6a22: /* 9c6a22: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6a25: add ecx, 0x48c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6a2b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6a31(void) {
  LOAD_REGS();
L_9c6a31: /* 9c6a31: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6a34: add ecx, 0x4cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6a3a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6a40(void) {
  LOAD_REGS();
L_9c6a40: /* 9c6a40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6a43: add ecx, 0x4d8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6a49: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6a4f(void) {
  LOAD_REGS();
L_9c6a4f: /* 9c6a4f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6a52: add ecx, 0x4e4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6a58: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6a5e(void) {
  LOAD_REGS();
L_9c6a5e: /* 9c6a5e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6a61: add ecx, 0x4f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6a67: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6a6d(void) {
  LOAD_REGS();
L_9c6a6d: /* 9c6a6d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6a70: add ecx, 0x4fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6a76: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6a7c(void) {
  LOAD_REGS();
L_9c6a7c: /* 9c6a7c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6a7f: add ecx, 0x51c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x51cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6a85: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6a8b(void) {
  LOAD_REGS();
L_9c6a8b: /* 9c6a8b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6a8e: add ecx, 0x534 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x534u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6a94: jmp 0x6c364d */
  SPILL(); f_6c364d(); return;
}

void f_9c6a99(void) {
  LOAD_REGS();
  goto L_9c6a99;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6a99: /* 9c6a99: mov eax, 0xa2bce4 */
  eax = 0xa2bce4u;
/* 9c6a9e: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6ae0(void) {
  LOAD_REGS();
L_9c6ae0: /* 9c6ae0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6ae3: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c6ae8(void) {
  LOAD_REGS();
L_9c6ae8: /* 9c6ae8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6aeb: add ecx, 0x354 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x354u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6af1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6af7(void) {
  LOAD_REGS();
L_9c6af7: /* 9c6af7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6afa: add ecx, 0x360 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x360u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b00: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b06(void) {
  LOAD_REGS();
L_9c6b06: /* 9c6b06: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b09: add ecx, 0x36c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x36cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b0f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b15(void) {
  LOAD_REGS();
L_9c6b15: /* 9c6b15: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b18: add ecx, 0x378 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b1e: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b24(void) {
  LOAD_REGS();
L_9c6b24: /* 9c6b24: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b27: add ecx, 0x384 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x384u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b2d: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b33(void) {
  LOAD_REGS();
L_9c6b33: /* 9c6b33: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b36: add ecx, 0x390 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x390u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b3c: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b42(void) {
  LOAD_REGS();
L_9c6b42: /* 9c6b42: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b45: add ecx, 0x39c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b4b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b51(void) {
  LOAD_REGS();
L_9c6b51: /* 9c6b51: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b54: add ecx, 0x3a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b5a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b60(void) {
  LOAD_REGS();
L_9c6b60: /* 9c6b60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b63: add ecx, 0x3b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b69: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b6f(void) {
  LOAD_REGS();
L_9c6b6f: /* 9c6b6f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b72: add ecx, 0x3c0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b78: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b7e(void) {
  LOAD_REGS();
L_9c6b7e: /* 9c6b7e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b81: add ecx, 0x3cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b87: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b8d(void) {
  LOAD_REGS();
L_9c6b8d: /* 9c6b8d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b90: add ecx, 0x3d8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6b96: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6b9c(void) {
  LOAD_REGS();
L_9c6b9c: /* 9c6b9c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6b9f: add ecx, 0x3fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6ba5: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6bab(void) {
  LOAD_REGS();
L_9c6bab: /* 9c6bab: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6bae: add ecx, 0x408 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x408u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6bb4: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6bba(void) {
  LOAD_REGS();
L_9c6bba: /* 9c6bba: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6bbd: add ecx, 0x434 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x434u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6bc3: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6bc9(void) {
  LOAD_REGS();
L_9c6bc9: /* 9c6bc9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6bcc: add ecx, 0x444 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x444u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6bd2: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6bd8(void) {
  LOAD_REGS();
L_9c6bd8: /* 9c6bd8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6bdb: add ecx, 0x458 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x458u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6be1: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6be7(void) {
  LOAD_REGS();
L_9c6be7: /* 9c6be7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6bea: add ecx, 0x46c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6bf0: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6bf6(void) {
  LOAD_REGS();
L_9c6bf6: /* 9c6bf6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6bf9: add ecx, 0x488 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x488u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6bff: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6c05(void) {
  LOAD_REGS();
L_9c6c05: /* 9c6c05: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6c08: add ecx, 0x494 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x494u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6c0e: jmp 0x6c376f */
  SPILL(); f_6c376f(); return;
}

void f_9c6c13(void) {
  LOAD_REGS();
L_9c6c13: /* 9c6c13: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6c16: add ecx, 0x4a0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4a0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6c1c: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6c22(void) {
  LOAD_REGS();
L_9c6c22: /* 9c6c22: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6c25: add ecx, 0x4ac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4acu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6c2b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6c31(void) {
  LOAD_REGS();
L_9c6c31: /* 9c6c31: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6c34: add ecx, 0x4b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6c3a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6c40(void) {
  LOAD_REGS();
L_9c6c40: /* 9c6c40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6c43: add ecx, 0x4c4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4c4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6c49: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6c4f(void) {
  LOAD_REGS();
L_9c6c4f: /* 9c6c4f: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 9c6c54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c6c55: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 9c6c57: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9c6c59: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6c5c: add ecx, 0x4d0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6c62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9c6c63: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9c6c68u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9c6c68: ret  */
  esp += 4; SPILL(); return;
}

void f_9c6c69(void) {
  LOAD_REGS();
L_9c6c69: /* 9c6c69: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 9c6c6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c6c6f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 9c6c71: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9c6c73: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6c76: add ecx, 0x554 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x554u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6c7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9c6c7d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9c6c82u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9c6c82: ret  */
  esp += 4; SPILL(); return;
}

void f_9c6c83(void) {
  LOAD_REGS();
  goto L_9c6c83;
L_99c950: /* 99c950: jmp dword ptr [0xcfb048] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_9c6c83: /* 9c6c83: mov eax, 0xa2bde8 */
  eax = 0xa2bde8u;
/* 9c6c88: jmp 0x99c950 */
  goto L_99c950;
}

void f_9c6d00(void) {
  LOAD_REGS();
L_9c6d00: /* 9c6d00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d03: jmp 0x6c688e */
  SPILL(); f_6c688e(); return;
}

void f_9c6d08(void) {
  LOAD_REGS();
L_9c6d08: /* 9c6d08: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d0b: add ecx, 0x354 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x354u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6d11: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6d17(void) {
  LOAD_REGS();
L_9c6d17: /* 9c6d17: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d1a: add ecx, 0x360 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x360u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6d20: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6d26(void) {
  LOAD_REGS();
L_9c6d26: /* 9c6d26: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d29: add ecx, 0x36c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x36cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6d2f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6d35(void) {
  LOAD_REGS();
L_9c6d35: /* 9c6d35: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d38: add ecx, 0x378 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6d3e: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6d44(void) {
  LOAD_REGS();
L_9c6d44: /* 9c6d44: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d47: add ecx, 0x384 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x384u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6d4d: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6d53(void) {
  LOAD_REGS();
L_9c6d53: /* 9c6d53: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d56: add ecx, 0x390 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x390u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6d5c: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6d62(void) {
  LOAD_REGS();
L_9c6d62: /* 9c6d62: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d65: add ecx, 0x39c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6d6b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6d71(void) {
  LOAD_REGS();
L_9c6d71: /* 9c6d71: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d74: add ecx, 0x3a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6d7a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6d80(void) {
  LOAD_REGS();
L_9c6d80: /* 9c6d80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d83: add ecx, 0x3b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6d89: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6d8f(void) {
  LOAD_REGS();
L_9c6d8f: /* 9c6d8f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6d92: add ecx, 0x3c0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6d98: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6d9e(void) {
  LOAD_REGS();
L_9c6d9e: /* 9c6d9e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6da1: add ecx, 0x3cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6da7: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6dad(void) {
  LOAD_REGS();
L_9c6dad: /* 9c6dad: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6db0: add ecx, 0x3d8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6db6: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6dbc(void) {
  LOAD_REGS();
L_9c6dbc: /* 9c6dbc: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6dbf: add ecx, 0x3fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6dc5: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6dcb(void) {
  LOAD_REGS();
L_9c6dcb: /* 9c6dcb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6dce: add ecx, 0x408 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x408u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6dd4: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6dda(void) {
  LOAD_REGS();
L_9c6dda: /* 9c6dda: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6ddd: add ecx, 0x434 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x434u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6de3: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6de9(void) {
  LOAD_REGS();
L_9c6de9: /* 9c6de9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6dec: add ecx, 0x444 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x444u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6df2: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6df8(void) {
  LOAD_REGS();
L_9c6df8: /* 9c6df8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6dfb: add ecx, 0x458 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x458u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6e01: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6e07(void) {
  LOAD_REGS();
L_9c6e07: /* 9c6e07: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6e0a: add ecx, 0x46c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6e10: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6e16(void) {
  LOAD_REGS();
L_9c6e16: /* 9c6e16: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6e19: add ecx, 0x488 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x488u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6e1f: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6e25(void) {
  LOAD_REGS();
L_9c6e25: /* 9c6e25: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6e28: add ecx, 0x494 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x494u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6e2e: jmp 0x6c376f */
  SPILL(); f_6c376f(); return;
}

void f_9c6e33(void) {
  LOAD_REGS();
L_9c6e33: /* 9c6e33: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6e36: add ecx, 0x4a0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4a0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6e3c: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6e42(void) {
  LOAD_REGS();
L_9c6e42: /* 9c6e42: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6e45: add ecx, 0x4ac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4acu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6e4b: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6e51(void) {
  LOAD_REGS();
L_9c6e51: /* 9c6e51: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6e54: add ecx, 0x4b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6e5a: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6e60(void) {
  LOAD_REGS();
L_9c6e60: /* 9c6e60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6e63: add ecx, 0x4c4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4c4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6e69: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_9c6e6f(void) {
  LOAD_REGS();
L_9c6e6f: /* 9c6e6f: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 9c6e74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9c6e75: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 9c6e77: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9c6e79: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9c6e7c: add ecx, 0x4d0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9c6e82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9c6e83: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9c6e88u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9c6e88: ret  */
  esp += 4; SPILL(); return;
}
