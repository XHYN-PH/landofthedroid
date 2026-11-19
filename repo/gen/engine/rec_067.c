#include "recomp.h"
#include "rec_mod.h"

void f_83107a(void) {
  LOAD_REGS();
L_83107a: /* 83107a: mov edx, dword ptr [ebp - 0x94] */
  edx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 831080: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 831085: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 83108b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83108c: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 831092: call 0x99caf8 */
  esp -= 4; W32(esp, 0x831097u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_831097(); return;
}

void f_831097(void) {
  LOAD_REGS();
L_831097: /* 831097: push 0xa158a8 */
  { uint32_t v = 0xa158a8u; esp -= 4; W32(esp, v); }
/* 83109c: push 0xae3c28 */
  { uint32_t v = 0xae3c28u; esp -= 4; W32(esp, v); }
/* 8310a1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8310a7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8310a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8310aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8310ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8310ae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8310b3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8310b3: guest_badaddr(0x8310b3); return;
}

void f_8313b0(void) {
  LOAD_REGS();
L_8313b0: /* 8313b0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8313b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8313b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8313b5: mov esi, ecx */
  esi = ecx;
/* 8313b7: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8313bd: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 8313c3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8313c7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8313cb: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8313d1: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 8313d7: mov edx, eax */
  edx = eax;
/* 8313d9: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8313dd: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 8313e1: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 8313e7: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 8313eb: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8313ef: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 8313f5: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 8313fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8313fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8313ff: mov edi, esp */
  edi = esp;
/* 831401: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 831405: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 831407: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 831409: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 83140b: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 831410: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 831414: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 831418: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 83141c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83141d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 831420: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 831423: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 831427: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 831429: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 83142c: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 831430: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 831434: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 831436: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 831438: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 83143b: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 83143f: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 831443: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 831444: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831446: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 831447: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 83144b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83144d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x831453u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 831453: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 831456: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83145c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83145e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 831461: jp 0x831499 */
  if (pf) goto L_831499;
L_831463: /* 831463: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 831465: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 831467: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83146a: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 83146d: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 83146f: mov ecx, esp */
  ecx = esp;
/* 831471: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 831473: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 831476: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 831479: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 83147c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83147f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 831482: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 831483: mov ecx, esi */
  ecx = esi;
/* 831485: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x83148bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83148b: mov eax, 1 */
  eax = 0x1u;
/* 831490: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 831491: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 831492: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 831493: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 831496: ret 0x10 */
  esp += 20; SPILL(); return;
L_831499: /* 831499: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83149a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83149b: xor eax, eax */
  eax = 0;
/* 83149d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83149e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8314a1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8314f0(void) {
  LOAD_REGS();
L_8314f0: /* 8314f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8314f1: mov ebp, esp */
  ebp = esp;
/* 8314f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8314f5: push 0x9d3280 */
  { uint32_t v = 0x9d3280u; esp -= 4; W32(esp, v); }
/* 8314fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 831500: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 831501: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 831508: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83150b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83150c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83150d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83150e: xor edi, edi */
  edi = 0;
/* 831510: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 831513: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 831516: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 831517: mov esi, ecx */
  esi = ecx;
/* 831519: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83151c: mov ecx, esp */
  ecx = esp;
/* 83151e: mov edx, edi */
  edx = edi;
/* 831520: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 831522: mov eax, edi */
  eax = edi;
/* 831524: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 831527: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 83152e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 831531: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 831534: mov ecx, esi */
  ecx = esi;
/* 831536: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 831539: mov dword ptr [ebp - 0x58], edi */
  W32((uint32_t)(ebp + 0xffffffa8u), edi);
/* 83153c: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 83153f: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 831542: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 831545: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 831548: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 83154b: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 83154e: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 831551: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 831554: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 83155b: mov dword ptr [ebp - 0x30], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd0u), 0xffffffffu);
/* 831562: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 831565: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 831568: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 83156b: call 0x6c8d7d */
  esp -= 4; W32(esp, 0x831570u); SPILL(); f_6c8d7d(); if (g_unwind) return; RELOAD();
/* 831570: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 831572: je 0x83158c */
  if (zf) goto L_83158c;
L_831574: /* 831574: mov eax, 1 */
  eax = 0x1u;
/* 831579: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83157c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 831583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 831584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 831585: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 831586: mov esp, ebp */
  esp = ebp;
/* 831588: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 831589: ret 0x18 */
  esp += 28; SPILL(); return;
L_83158c: /* 83158c: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 83158f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 831590: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831593: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 83159a: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83159d: mov ecx, esp */
  ecx = esp;
/* 83159f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8315a1: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 8315a8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8315ab: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8315ae: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8315b5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8315b8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8315bb: mov ecx, esi */
  ecx = esi;
/* 8315bd: call 0x6c8d7d */
  esp -= 4; W32(esp, 0x8315c2u); SPILL(); f_6c8d7d(); if (g_unwind) return; RELOAD();
/* 8315c2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8315c4: jne 0x831574 */
  if (!zf) goto L_831574;
L_8315c6: /* 8315c6: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 8315c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8315ca: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8315cd: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8315d4: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8315d7: mov ecx, esp */
  ecx = esp;
/* 8315d9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8315db: mov dword ptr [ebp - 0x24], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xbf800000u);
/* 8315e2: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8315e5: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8315e8: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8315ef: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8315f2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8315f5: mov ecx, esi */
  ecx = esi;
/* 8315f7: call 0x6c8d7d */
  esp -= 4; W32(esp, 0x8315fcu); SPILL(); f_6c8d7d(); if (g_unwind) return; RELOAD();
/* 8315fc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8315fe: jne 0x831574 */
  if (!zf) goto L_831574;
L_831604: /* 831604: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 831607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 831608: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83160b: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 831612: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 831615: mov ecx, esp */
  ecx = esp;
/* 831617: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 831619: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 831620: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 831623: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 831626: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 83162d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 831630: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 831633: mov ecx, esi */
  ecx = esi;
/* 831635: call 0x6c8d7d */
  esp -= 4; W32(esp, 0x83163au); SPILL(); f_6c8d7d(); if (g_unwind) return; RELOAD();
/* 83163a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83163c: jne 0x831574 */
  if (!zf) goto L_831574;
L_831642: /* 831642: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 831645: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 831646: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831649: mov dword ptr [ebp - 0x28], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xbf800000u);
/* 831650: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 831653: mov ecx, esp */
  ecx = esp;
/* 831655: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 831657: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 83165e: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 831661: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 831664: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 83166b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83166e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 831671: mov ecx, esi */
  ecx = esi;
/* 831673: call 0x6c8d7d */
  esp -= 4; W32(esp, 0x831678u); SPILL(); f_6c8d7d(); if (g_unwind) return; RELOAD();
/* 831678: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83167a: jne 0x831574 */
  if (!zf) goto L_831574;
L_831680: /* 831680: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 831683: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 831684: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831687: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 83168e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 831691: mov ecx, esp */
  ecx = esp;
/* 831693: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 831695: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 83169c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83169f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8316a2: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 8316a9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8316ac: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8316af: mov ecx, esi */
  ecx = esi;
/* 8316b1: call 0x6c8d7d */
  esp -= 4; W32(esp, 0x8316b6u); SPILL(); f_6c8d7d(); if (g_unwind) return; RELOAD();
/* 8316b6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8316b8: jne 0x831574 */
  if (!zf) goto L_831574;
L_8316be: /* 8316be: mov ecx, esi */
  ecx = esi;
/* 8316c0: call 0x6c3d6e */
  esp -= 4; W32(esp, 0x8316c5u); SPILL(); f_6c3d6e(); if (g_unwind) return; RELOAD();
/* 8316c5: cmp byte ptr [esi + 0x50], 9 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8316c9: jne 0x831703 */
  if (!zf) goto L_831703;
L_8316cb: /* 8316cb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8316cd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8316d0: mov ecx, esp */
  ecx = esp;
/* 8316d2: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8316d9: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8316dc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8316de: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8316e5: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8316e8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8316eb: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 8316f2: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8316f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8316f6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8316f9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8316fb: mov ecx, esi */
  ecx = esi;
/* 8316fd: call dword ptr [eax + 0x114] */
  { uint32_t t = R32((uint32_t)(eax + 0x114u)); esp -= 4; W32(esp, 0x831703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_831703: /* 831703: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 831707: jne 0x8317ab */
  if (!zf) goto L_8317ab;
L_83170d: /* 83170d: mov eax, dword ptr [esi + 0x190] */
  eax = R32((uint32_t)(esi + 0x190u));
/* 831713: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 831716: test dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 831720: jne 0x831780 */
  if (!zf) goto L_831780;
L_831722: /* 831722: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 831725: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 831728: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83172a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83172d: jne 0x831780 */
  if (!zf) goto L_831780;
L_83172f: /* 83172f: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 831735: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 831736: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 831739: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 83173c: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 831742: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 831745: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83174b: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 83174e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 831751: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 831754: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 831757: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 83175a: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 83175d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 831760: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 831761: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 831764: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83176au); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83176a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83176c: lea edx, [esi + 0x188] */
  edx = (uint32_t)(esi + 0x188u);
/* 831772: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 831774: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 831777: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83177a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83177d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_831780: /* 831780: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 831783: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 831786: fcomp dword ptr [0xa15904] */
  fpu_com(ST0, F32((uint32_t)(0xa15904u)));
  FPOP();
/* 83178c: mov dword ptr [esi + 0x190], ecx */
  W32((uint32_t)(esi + 0x190u), ecx);
/* 831792: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 831794: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 831797: jne 0x8317ab */
  if (!zf) goto L_8317ab;
L_831799: /* 831799: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 83179c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 83179f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8317a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8317a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8317a3: mov ecx, esi */
  ecx = esi;
/* 8317a5: call dword ptr [edx + 0x128] */
  { uint32_t t = R32((uint32_t)(edx + 0x128u)); esp -= 4; W32(esp, 0x8317abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8317ab: /* 8317ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8317ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8317af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8317b0: xor eax, eax */
  eax = 0;
/* 8317b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8317b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8317ba: mov esp, ebp */
  esp = ebp;
/* 8317bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8317bd: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8317c0(void) {
  LOAD_REGS();
L_8317c0: /* 8317c0: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8317c3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8317c8: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8317cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8317cc: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8317cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8317d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8317d4(); return;
}

void f_8317d4(void) {
  LOAD_REGS();
L_8317d4: /* 8317d4: push 0xa158d4 */
  { uint32_t v = 0xa158d4u; esp -= 4; W32(esp, v); }
/* 8317d9: push 0xae3c30 */
  { uint32_t v = 0xae3c30u; esp -= 4; W32(esp, v); }
/* 8317de: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8317e4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8317e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8317e7: xor edi, edi */
  edi = 0;
/* 8317e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8317ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8317eb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8317f0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8317f0: guest_badaddr(0x8317f0); return;
}

void f_8318d0(void) {
  LOAD_REGS();
L_8318d0: /* 8318d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8318d1: mov ebp, esp */
  ebp = esp;
/* 8318d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8318d5: push 0x9d3290 */
  { uint32_t v = 0x9d3290u; esp -= 4; W32(esp, v); }
/* 8318da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8318e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8318e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8318e8: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8318eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8318ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8318ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8318ee: mov edi, ecx */
  edi = ecx;
/* 8318f0: fld dword ptr [edi + 0x454] */
  { double v = F32((uint32_t)(edi + 0x454u)); FPUSH(v); }
/* 8318f6: lea esi, [edi + 0x44c] */
  esi = (uint32_t)(edi + 0x44cu);
/* 8318fc: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831902: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 831905: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 831908: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 83190b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831911: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 831914: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 831916: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83191d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831923: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 831926: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 831928: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 83192e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 831931: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 831934: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 83193a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 83193d: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 831940: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 831943: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 831949: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 83194c: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 83194f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 831952: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 831955: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 831958: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 83195b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83195d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 83195f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 831961: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831963: fcomp qword ptr [0xa15940] */
  fpu_com(ST0, F64((uint32_t)(0xa15940u)));
  FPOP();
/* 831969: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83196b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83196e: jp 0x831a3e */
  if (pf) goto L_831a3e;
L_831974: /* 831974: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 83197a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83197d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831983: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 831985: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 831988: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83198a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831990: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831992: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 831995: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831997: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 83199d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83199f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8319a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8319a3: lea eax, [edi + 0x17c] */
  eax = (uint32_t)(edi + 0x17cu);
/* 8319a9: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8319ac: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8319ae: mov ecx, esp */
  ecx = esp;
/* 8319b0: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8319b3: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8319b5: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8319b8: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8319bb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8319be: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8319c1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8319c4: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8319c7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8319ca: mov ecx, esp */
  ecx = esp;
/* 8319cc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8319ce: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8319d1: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8319d4: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8319d7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8319da: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 8319e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8319e1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8319e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8319e7: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 8319ed: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8319ef: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8319f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8319f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8319f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8319f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8319fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8319fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8319fe: lea eax, [edi + 0x17c] */
  eax = (uint32_t)(edi + 0x17cu);
/* 831a04: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 831a06: mov ecx, esp */
  ecx = esp;
/* 831a08: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 831a0a: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 831a0d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 831a10: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 831a13: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 831a16: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 831a19: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831a1c: mov ecx, esp */
  ecx = esp;
/* 831a1e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 831a20: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 831a23: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 831a26: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 831a29: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 831a2c: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 831a32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 831a33: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x831a39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 831a39: jmp 0x831b16 */
  goto L_831b16;
L_831a3e: /* 831a3e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 831a40: mov edx, esi */
  edx = esi;
/* 831a42: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 831a44: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 831a47: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 831a4a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 831a4d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 831a50: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 831a53: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831a59: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 831a5c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831a62: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 831a65: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 831a67: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831a6d: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 831a70: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 831a76: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 831a79: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 831a7f: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 831a82: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 831a88: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 831a8b: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 831a8e: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 831a91: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 831a94: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 831a97: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 831a9a: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 831a9d: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 831aa0: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 831aa3: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 831aa6: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x831aacu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 831aac: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 831aaf: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 831ab2: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 831ab5: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 831ab8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831aba: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 831ac0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831ac2: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 831ac5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 831ac7: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 831aca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831acc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831ace: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 831ad1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 831ad2: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 831ad5: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 831ad8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831adb: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 831ae1: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 831ae3: mov edx, esp */
  edx = esp;
/* 831ae5: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 831ae7: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 831aea: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 831aed: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 831af0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 831af3: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 831af6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831af9: mov edx, esp */
  edx = esp;
/* 831afb: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 831afd: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 831b00: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 831b03: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 831b06: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 831b09: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 831b0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 831b10: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x831b16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_831b16: /* 831b16: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 831b19: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 831b1c: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 831b22: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 831b24: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 831b27: jp 0x831fa3 */
  if (pf) goto L_831fa3;
L_831b2d: /* 831b2d: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
/* 831b30: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 831b33: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 831b36: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 831b39: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831b3b: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 831b3e: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 831b40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831b42: fcomp qword ptr [0xa15940] */
  fpu_com(ST0, F64((uint32_t)(0xa15940u)));
  FPOP();
/* 831b48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 831b4a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 831b4d: jp 0x831c2e */
  if (pf) goto L_831c2e;
L_831b53: /* 831b53: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 831b56: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x831b5cu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 831b5c: fst dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0);
/* 831b5f: fmul dword ptr [ebx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x24u)));
/* 831b62: fcomp dword ptr [0xa15938] */
  fpu_com(ST0, F32((uint32_t)(0xa15938u)));
  FPOP();
/* 831b68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 831b6a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 831b6d: jne 0x831c2e */
  if (!zf) goto L_831c2e;
L_831b73: /* 831b73: mov esi, dword ptr [edi + 0x17c] */
  esi = R32((uint32_t)(edi + 0x17cu));
/* 831b79: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 831b7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831b81: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 831b83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831b85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831b87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831b89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 831b8a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831b8d: mov eax, esp */
  eax = esp;
/* 831b8f: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 831b91: mov esi, dword ptr [edi + 0x180] */
  esi = R32((uint32_t)(edi + 0x180u));
/* 831b97: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 831b9a: mov esi, dword ptr [edi + 0x184] */
  esi = R32((uint32_t)(edi + 0x184u));
/* 831ba0: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 831ba3: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 831ba6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831ba9: mov eax, esp */
  eax = esp;
/* 831bab: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 831bad: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 831bb0: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 831bb3: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 831bb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 831bb7: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 831bba: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x831bc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 831bc0: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 831bc6: fsub dword ptr [ebx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x24u)));
/* 831bc9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 831bca: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831bcd: mov ecx, esp */
  ecx = esp;
/* 831bcf: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 831bd2: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 831bd5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831bd8: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 831bdb: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 831bde: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 831be1: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 831be4: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 831be7: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 831bea: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 831bed: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 831bef: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 831bf2: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 831bf5: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 831bf8: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 831bfb: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 831bfe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 831c01: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 831c04: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 831c07: mov eax, esp */
  eax = esp;
/* 831c09: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 831c0b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 831c0e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 831c11: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 831c14: mov ecx, edi */
  ecx = edi;
/* 831c16: call 0x6ccdd8 */
  esp -= 4; W32(esp, 0x831c1bu); SPILL(); f_6ccdd8(); if (g_unwind) return; RELOAD();
L_831c1b: /* 831c1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 831c1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 831c25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 831c26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 831c27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 831c28: mov esp, ebp */
  esp = ebp;
/* 831c2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 831c2b: ret 0x1c */
  esp += 32; SPILL(); return;
L_831c2e: /* 831c2e: mov edx, esi */
  edx = esi;
/* 831c30: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 831c32: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 831c35: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 831c38: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 831c3b: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 831c3e: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 831c41: lea eax, [ebx + 0x14] */
  eax = (uint32_t)(ebx + 0x14u);
/* 831c44: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 831c46: mov ecx, esi */
  ecx = esi;
/* 831c48: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 831c4a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 831c4d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 831c50: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 831c53: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 831c56: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 831c59: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831c5f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 831c62: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831c68: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 831c6b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 831c6d: mov dword ptr [ebx + 0x1c], 0 */
  W32((uint32_t)(ebx + 0x1cu), 0x0u);
/* 831c74: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 831c7a: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 831c7d: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 831c83: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 831c86: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 831c8c: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 831c8f: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 831c95: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 831c98: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 831c9b: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 831c9e: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 831ca1: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 831ca4: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 831ca7: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 831caa: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 831cad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 831cae: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 831cb1: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 831cb4: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 831cb7: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x831cbdu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 831cbd: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 831cc0: mov edx, eax */
  edx = eax;
/* 831cc2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 831cc4: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 831cc7: lea eax, [ebx + 0x14] */
  eax = (uint32_t)(ebx + 0x14u);
/* 831cca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 831ccc: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 831ccf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 831cd2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 831cd5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 831cd8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 831cda: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 831cdd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 831ce0: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 831ce3: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 831ce6: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 831ce9: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 831cec: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 831cef: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 831cf1: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 831cf4: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 831cf7: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 831cfa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 831cfc: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 831cff: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 831d02: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 831d04: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 831d07: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 831d0a: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 831d0d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 831d0f: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 831d12: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 831d15: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 831d18: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 831d1b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 831d1e: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 831d21: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 831d23: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 831d26: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 831d29: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 831d2c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 831d2f: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x831d35u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 831d35: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 831d38: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 831d3b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 831d3e: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 831d41: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 831d44: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 831d46: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 831d49: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 831d4c: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 831d4f: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 831d52: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 831d54: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 831d57: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 831d5a: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 831d5d: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 831d60: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 831d62: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 831d65: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 831d68: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 831d6b: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x831d71u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 831d71: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 831d74: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 831d77: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 831d7a: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 831d7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831d7f: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 831d82: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 831d85: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831d87: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 831d8a: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 831d8d: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 831d90: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 831d93: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831d95: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 831d98: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 831d9b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831d9d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 831da0: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 831da3: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 831da6: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 831da9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831dab: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 831dae: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 831db1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831db3: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 831db6: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 831db9: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 831dbc: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 831dbe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 831dc0: fst dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0);
/* 831dc3: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 831dc6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 831dc8: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 831dcb: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 831dce: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 831dd0: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 831dd3: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 831dd6: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 831dd9: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 831ddc: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 831ddf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 831de1: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 831de4: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 831de7: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 831dea: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 831ded: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 831df0: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 831df3: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 831df6: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 831df9: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 831dfc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 831dfe: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 831e01: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 831e04: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 831e06: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 831e09: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 831e0c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 831e0e: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 831e11: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 831e14: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 831e16: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 831e19: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 831e1c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 831e1e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 831e21: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 831e24: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 831e27: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 831e29: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 831e2c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 831e2e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 831e31: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 831e33: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 831e36: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 831e38: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 831e3b: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 831e3e: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 831e41: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 831e44: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 831e47: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 831e49: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 831e4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 831e4d: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 831e50: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 831e53: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 831e56: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 831e59: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 831e5b: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 831e5e: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 831e61: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 831e64: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 831e66: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 831e69: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 831e6c: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 831e6f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 831e71: mov dword ptr [ebp + 0x18], edx */
  W32((uint32_t)(ebp + 0x18u), edx);
/* 831e74: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 831e77: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 831e7a: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 831e7d: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 831e80: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 831e82: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 831e85: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 831e87: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831e89: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 831e8c: fmul dword ptr [ebp - 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff98u)));
/* 831e8f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 831e91: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 831e97: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 831e99: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 831e9b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 831e9e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 831ea0: jne 0x831fa3 */
  if (!zf) goto L_831fa3;
L_831ea6: /* 831ea6: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 831eac: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 831eae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831eb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831eb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831eb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831eb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 831eb7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831eba: lea eax, [edi + 0x17c] */
  eax = (uint32_t)(edi + 0x17cu);
/* 831ec0: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 831ec2: mov ecx, esp */
  ecx = esp;
/* 831ec4: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 831ec6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 831ec9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 831ecc: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 831ecf: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 831ed2: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 831ed5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831ed8: mov ecx, esp */
  ecx = esp;
/* 831eda: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 831edc: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 831edf: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 831ee2: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 831ee5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 831ee8: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 831eee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 831eef: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x831ef5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 831ef5: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 831ef8: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 831efe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 831f00: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 831f03: jp 0x831fa3 */
  if (pf) goto L_831fa3;
L_831f09: /* 831f09: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 831f0c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 831f0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 831f0f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831f12: lea eax, [ebx + 0x14] */
  eax = (uint32_t)(ebx + 0x14u);
/* 831f15: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 831f17: mov ecx, esp */
  ecx = esp;
/* 831f19: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 831f1b: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 831f1e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 831f21: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 831f24: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 831f27: mov ecx, edi */
  ecx = edi;
/* 831f29: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x831f2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 831f2f: cmp byte ptr [edi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 831f33: je 0x831c1b */
  if (zf) goto L_831c1b;
L_831f39: /* 831f39: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 831f3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 831f3d: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 831f40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 831f41: lea eax, [ebx + 0x14] */
  eax = (uint32_t)(ebx + 0x14u);
/* 831f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 831f45: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 831f48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 831f49: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 831f4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 831f4d: mov ecx, edi */
  ecx = edi;
/* 831f4f: call 0x6c6163 */
  esp -= 4; W32(esp, 0x831f54u); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 831f54: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 831f5a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 831f5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831f5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831f60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831f62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831f64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 831f65: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831f68: lea eax, [edi + 0x17c] */
  eax = (uint32_t)(edi + 0x17cu);
/* 831f6e: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 831f70: mov ecx, esp */
  ecx = esp;
/* 831f72: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 831f74: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 831f77: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 831f7a: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 831f7d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 831f80: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 831f83: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831f86: mov ecx, esp */
  ecx = esp;
/* 831f88: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 831f8a: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 831f8d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 831f90: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 831f93: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 831f96: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 831f9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 831f9d: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x831fa3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_831fa3: /* 831fa3: mov esi, dword ptr [edi + 0x17c] */
  esi = R32((uint32_t)(edi + 0x17cu));
/* 831fa9: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 831faf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831fb1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 831fb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831fb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831fb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831fb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 831fba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831fbd: mov eax, esp */
  eax = esp;
/* 831fbf: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 831fc1: mov esi, dword ptr [edi + 0x180] */
  esi = R32((uint32_t)(edi + 0x180u));
/* 831fc7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 831fca: mov esi, dword ptr [edi + 0x184] */
  esi = R32((uint32_t)(edi + 0x184u));
/* 831fd0: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 831fd3: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 831fd6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831fd9: mov eax, esp */
  eax = esp;
/* 831fdb: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 831fdd: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 831fe0: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 831fe3: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 831fe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 831fe7: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 831fea: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x831ff0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 831ff0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 831ff3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 831ff4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 831ff5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 831ffc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 831ffd: mov esp, ebp */
  esp = ebp;
/* 831fff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 832000: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_832003(void) {
  LOAD_REGS();
L_832003: /* 832003: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 832006: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83200b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 83200e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83200f: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 832012: call 0x99caf8 */
  esp -= 4; W32(esp, 0x832017u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_832017(); return;
}

void f_832017(void) {
  LOAD_REGS();
L_832017: /* 832017: push 0xa15908 */
  { uint32_t v = 0xa15908u; esp -= 4; W32(esp, v); }
/* 83201c: push 0xae3c38 */
  { uint32_t v = 0xae3c38u; esp -= 4; W32(esp, v); }
/* 832021: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x832027u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 832027: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83202a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83202c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83202e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x832033u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_832033: guest_badaddr(0x832033); return;
}

void f_832220(void) {
  LOAD_REGS();
L_832220: /* 832220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 832221: mov ebp, esp */
  ebp = esp;
/* 832223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 832225: push 0x9d32a0 */
  { uint32_t v = 0x9d32a0u; esp -= 4; W32(esp, v); }
/* 83222a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 832230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832231: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 832238: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83223b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83223c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83223d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83223e: mov esi, ecx */
  esi = ecx;
/* 832240: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 832243: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 832246: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83224d: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x832253u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 832253: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 832256: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832258: je 0x83236e */
  if (zf) goto L_83236e;
L_83225e: /* 83225e: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 832261: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832263: jne 0x83236e */
  if (!zf) goto L_83236e;
L_832269: /* 832269: cmp byte ptr [esi + 0x51], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83226d: jne 0x8323ac */
  if (!zf) goto L_8323ac;
L_832273: /* 832273: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* 832279: test ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83227f: je 0x8322ec */
  if (zf) goto L_8322ec;
L_832281: /* 832281: fld dword ptr [esi + 0x29c] */
  { double v = F32((uint32_t)(esi + 0x29cu)); FPUSH(v); }
/* 832287: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83228d: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 832293: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832295: fld dword ptr [esi + 0x298] */
  { double v = F32((uint32_t)(esi + 0x298u)); FPUSH(v); }
/* 83229b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 83229d: fadd dword ptr [eax + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x174u)));
/* 8322a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8322a5: fld dword ptr [esi + 0x294] */
  { double v = F32((uint32_t)(esi + 0x294u)); FPUSH(v); }
/* 8322ab: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8322ae: fadd dword ptr [eax + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x170u)));
/* 8322b4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8322b6: mov edx, esp */
  edx = esp;
/* 8322b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8322b9: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8322bc: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8322bf: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8322c1: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8322c4: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8322c7: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 8322ca: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8322cd: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8322d0: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8322d3: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8322d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8322d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8322dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8322e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8322e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8322e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8322e6: mov esp, ebp */
  esp = ebp;
/* 8322e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8322e9: ret 4 */
  esp += 8; SPILL(); return;
L_8322ec: /* 8322ec: test ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8322f2: je 0x832381 */
  if (zf) goto L_832381;
L_8322f8: /* 8322f8: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 8322fe: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 832301: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 832302: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 832308: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x83230eu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 83230e: mov edx, dword ptr [esi + 0x2dc] */
  edx = R32((uint32_t)(esi + 0x2dcu));
/* 832314: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832315: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 832316: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 832319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83231a: call 0x6cb802 */
  esp -= 4; W32(esp, 0x83231fu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 83231f: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 832322: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 832328: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 83232a: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 83232d: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 832333: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 832336: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 832339: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 83233c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83233e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 832340: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 832342: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 832344: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832346: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832349: mov eax, esp */
  eax = esp;
/* 83234b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83234e: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 832351: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 832353: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 832356: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 832359: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83235c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83235f: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 832362: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 832365: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 832366: mov ecx, edi */
  ecx = edi;
L_832368: /* 832368: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x83236eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_83236e: /* 83236e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 832371: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 832378: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 832379: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83237a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83237b: mov esp, ebp */
  esp = ebp;
/* 83237d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83237e: ret 4 */
  esp += 8; SPILL(); return;
L_832381: /* 832381: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 832387: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 832389: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83238b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 83238d: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 832392: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 832394: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832396: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832399: mov edi, esp */
  edi = esp;
/* 83239b: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 83239d: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8323a0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8323a3: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8323a6: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8323a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8323aa: jmp 0x832368 */
  goto L_832368;
L_8323ac: /* 8323ac: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8323b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8323b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8323b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8323b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8323ba: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8323bf: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8323c1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8323c4: mov edi, esp */
  edi = esp;
/* 8323c6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8323c8: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8323cb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8323ce: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8323d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8323d2: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8323d5: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8323dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8323db: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 8323e1: xor ebx, ebx */
  ebx = 0;
/* 8323e3: test eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8323e8: mov dword ptr [ebp - 0x78], ebx */
  W32((uint32_t)(ebp + 0xffffff88u), ebx);
/* 8323eb: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 8323ee: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 8323f1: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 8323f4: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 8323f7: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 8323fa: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 8323fd: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 832400: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 832403: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
/* 83240a: mov dword ptr [ebp - 0x50], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb0u), 0xffffffffu);
/* 832411: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 832414: jne 0x83236e */
  if (!zf) goto L_83236e;
L_83241a: /* 83241a: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83241f: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 832422: je 0x83243a */
  if (zf) goto L_83243a;
L_832424: /* 832424: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 83242a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83242c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 83242f: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 832432: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 832435: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 832438: jmp 0x8324a1 */
  goto L_8324a1;
L_83243a: /* 83243a: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 832440: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x832446u); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 832446: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 832448: je 0x83246d */
  if (zf) goto L_83246d;
L_83244a: /* 83244a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83244b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83244c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 832451: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 832454: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x83245au); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 83245a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83245c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 83245f: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 832462: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 832465: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 832468: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 83246b: jmp 0x8324a4 */
  goto L_8324a4;
L_83246d: /* 83246d: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 832470: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 832473: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 832474: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 832479: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83247a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 83247d: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 832482: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 832483: call 0x6cb802 */
  esp -= 4; W32(esp, 0x832488u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 832488: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83248b: mov ecx, eax */
  ecx = eax;
/* 83248d: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x832493u); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 832493: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 832495: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 832498: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 83249b: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 83249e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
L_8324a1: /* 8324a1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_8324a4: /* 8324a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8324a5: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8324ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8324ac: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8324ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8324af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8324b0: lea ebx, [ebp - 0x78] */
  ebx = (uint32_t)(ebp + 0xffffff88u);
/* 8324b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8324b4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8324b7: mov ebx, esp */
  ebx = esp;
/* 8324b9: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 8324bb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8324be: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* 8324c1: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 8324c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8324c7: mov edx, esp */
  edx = esp;
/* 8324c9: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8324d0: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8324d3: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8324d5: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8324dc: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8324df: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 8324e2: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8324e9: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8324ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8324ed: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8324f0: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8324f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8324f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8324f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8324fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8324fb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 832502: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 832503: mov esp, ebp */
  esp = ebp;
/* 832505: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 832506: ret 4 */
  esp += 8; SPILL(); return;
}

void f_832509(void) {
  LOAD_REGS();
L_832509: /* 832509: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83250c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 832511: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 832514: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 832515: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 832518: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83251du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83251d(); return;
}

void f_83251d(void) {
  LOAD_REGS();
L_83251d: /* 83251d: push 0xa1594c */
  { uint32_t v = 0xa1594cu; esp -= 4; W32(esp, v); }
/* 832522: push 0xae3c48 */
  { uint32_t v = 0xae3c48u; esp -= 4; W32(esp, v); }
/* 832527: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83252du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83252d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 832530: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832532: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832534: call 0x99caf8 */
  esp -= 4; W32(esp, 0x832539u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_832539: guest_badaddr(0x832539); return;
}

void f_832610(void) {
  LOAD_REGS();
L_832610: /* 832610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 832611: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 832615: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832617: je 0x83262e */
  if (zf) goto L_83262e;
L_832619: /* 832619: push 0xb61798 */
  { uint32_t v = 0xb61798u; esp -= 4; W32(esp, v); }
/* 83261e: mov ecx, esi */
  ecx = esi;
/* 832620: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x832626u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 832626: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832628: je 0x83262e */
  if (zf) goto L_83262e;
L_83262a: /* 83262a: mov eax, esi */
  eax = esi;
/* 83262c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83262d: ret  */
  esp += 4; SPILL(); return;
L_83262e: /* 83262e: xor eax, eax */
  eax = 0;
/* 832630: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 832631: ret  */
  esp += 4; SPILL(); return;
}

void f_832650(void) {
  LOAD_REGS();
L_832650: /* 832650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 832651: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 832655: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832657: je 0x83266e */
  if (zf) goto L_83266e;
L_832659: /* 832659: push 0xce7998 */
  { uint32_t v = 0xce7998u; esp -= 4; W32(esp, v); }
/* 83265e: mov ecx, esi */
  ecx = esi;
/* 832660: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x832666u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 832666: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832668: je 0x83266e */
  if (zf) goto L_83266e;
L_83266a: /* 83266a: mov eax, esi */
  eax = esi;
/* 83266c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83266d: ret  */
  esp += 4; SPILL(); return;
L_83266e: /* 83266e: xor eax, eax */
  eax = 0;
/* 832670: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 832671: ret  */
  esp += 4; SPILL(); return;
}

void f_832690(void) {
  LOAD_REGS();
L_832690: /* 832690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 832691: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 832695: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832697: je 0x8326ae */
  if (zf) goto L_8326ae;
L_832699: /* 832699: push 0xb6a3a8 */
  { uint32_t v = 0xb6a3a8u; esp -= 4; W32(esp, v); }
/* 83269e: mov ecx, esi */
  ecx = esi;
/* 8326a0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8326a6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8326a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8326a8: je 0x8326ae */
  if (zf) goto L_8326ae;
L_8326aa: /* 8326aa: mov eax, esi */
  eax = esi;
/* 8326ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8326ad: ret  */
  esp += 4; SPILL(); return;
L_8326ae: /* 8326ae: xor eax, eax */
  eax = 0;
/* 8326b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8326b1: ret  */
  esp += 4; SPILL(); return;
}

void f_8326d0(void) {
  LOAD_REGS();
L_8326d0: /* 8326d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8326d1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8326d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8326d7: je 0x8326ee */
  if (zf) goto L_8326ee;
L_8326d9: /* 8326d9: push 0xb61cc8 */
  { uint32_t v = 0xb61cc8u; esp -= 4; W32(esp, v); }
/* 8326de: mov ecx, esi */
  ecx = esi;
/* 8326e0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8326e6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8326e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8326e8: je 0x8326ee */
  if (zf) goto L_8326ee;
L_8326ea: /* 8326ea: mov eax, esi */
  eax = esi;
/* 8326ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8326ed: ret  */
  esp += 4; SPILL(); return;
L_8326ee: /* 8326ee: xor eax, eax */
  eax = 0;
/* 8326f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8326f1: ret  */
  esp += 4; SPILL(); return;
}

void f_832710(void) {
  LOAD_REGS();
L_832710: /* 832710: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 832711: mov ebp, esp */
  ebp = esp;
/* 832713: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 832715: push 0x9d32b0 */
  { uint32_t v = 0x9d32b0u; esp -= 4; W32(esp, v); }
/* 83271a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 832720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832721: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 832728: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83272b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 832730: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 832731: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 832732: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 832735: mov ecx, dword ptr [0xce847c] */
  ecx = R32((uint32_t)(0xce847cu));
/* 83273b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83273c: xor esi, esi */
  esi = 0;
/* 83273e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 832741: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 832744: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 832747: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 832749: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 83274b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83274c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83274d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83274e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83274f: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 832751: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 832753: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 832756: mov dword ptr [ebp - 0x88], esi */
  W32((uint32_t)(ebp + 0xffffff78u), esi);
/* 83275c: mov dword ptr [ebp - 0x84], esi */
  W32((uint32_t)(ebp + 0xffffff7cu), esi);
/* 832762: mov dword ptr [ebp - 0x80], esi */
  W32((uint32_t)(ebp + 0xffffff80u), esi);
/* 832765: mov dword ptr [ebp - 0x7c], esi */
  W32((uint32_t)(ebp + 0xffffff84u), esi);
/* 832768: mov dword ptr [ebp - 0x78], esi */
  W32((uint32_t)(ebp + 0xffffff88u), esi);
/* 83276b: mov dword ptr [ebp - 0x74], esi */
  W32((uint32_t)(ebp + 0xffffff8cu), esi);
/* 83276e: mov dword ptr [ebp - 0x70], esi */
  W32((uint32_t)(ebp + 0xffffff90u), esi);
/* 832771: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 832774: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
/* 832777: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 83277a: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 832780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 832781: mov dword ptr [ebp - 0x64], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x3f800000u);
/* 832788: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 83278f: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 832795: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 832797: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83279a: lea esi, [eax + 0x17c] */
  esi = (uint32_t)(eax + 0x17cu);
/* 8327a0: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8327a2: mov edi, esp */
  edi = esp;
/* 8327a4: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8327a6: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8327a9: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8327ac: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8327af: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 8327b2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8327b5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8327b8: mov esi, esp */
  esi = esp;
/* 8327ba: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8327bc: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8327bf: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 8327c2: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 8327c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8327c6: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 8327c9: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8327cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8327cf: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8327d2: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8327d8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8327db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8327dd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8327e0: jp 0x832ab6 */
  if (pf) goto L_832ab6;
L_8327e6: /* 8327e6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8327e9: mov ecx, dword ptr [eax + 0x16c] */
  ecx = R32((uint32_t)(eax + 0x16cu));
/* 8327ef: fld dword ptr [ecx + 0x3cc] */
  { double v = F32((uint32_t)(ecx + 0x3ccu)); FPUSH(v); }
/* 8327f5: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8327fc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 832802: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 832809: mov dword ptr [ebp - 0x2c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xbf800000u);
/* 832810: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 832812: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 832815: jne 0x83281e */
  if (!zf) goto L_83281e;
L_832817: /* 832817: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
L_83281e: /* 83281e: mov esi, dword ptr [0xcfa578] */
  esi = R32((uint32_t)(0xcfa578u));
/* 832824: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 832827: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 832828: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 83282b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x83282du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83282d: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 832830: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 832833: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 832839: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83283c: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 83283f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 832841: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 832844: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83284a: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 83284d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83284f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 832852: je 0x832856 */
  if (zf) goto L_832856;
L_832854: /* 832854: fchs  */
  ST0 = -ST0;
L_832856: /* 832856: fcomp dword ptr [0xa08920] */
  fpu_com(ST0, F32((uint32_t)(0xa08920u)));
  FPOP();
/* 83285c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83285e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 832861: jp 0x832909 */
  if (pf) goto L_832909;
L_832867: /* 832867: fcom dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
/* 83286d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83286f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 832872: jp 0x832909 */
  if (pf) goto L_832909;
L_832878: /* 832878: fcomp dword ptr [0xa159ac] */
  fpu_com(ST0, F32((uint32_t)(0xa159acu)));
  FPOP();
/* 83287e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 832880: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 832883: jne 0x83290b */
  if (!zf) goto L_83290b;
L_832889: /* 832889: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83288f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 832892: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 832895: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 832897: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 83289d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83289e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8328a1: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8328a4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8328a7: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8328aa: mov edx, esp */
  edx = esp;
/* 8328ac: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8328af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8328b2: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8328b5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8328b8: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8328bb: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8328be: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8328c1: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8328c3: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8328c6: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8328c9: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8328cc: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8328cf: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8328d2: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8328d5: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8328d8: mov edx, esp */
  edx = esp;
/* 8328da: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8328dc: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8328df: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8328e2: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8328e5: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8328e8: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8328eb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8328ee: mov edx, esp */
  edx = esp;
/* 8328f0: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8328f2: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8328f5: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8328f8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8328fb: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8328fe: call dword ptr [eax + 0x134] */
  { uint32_t t = R32((uint32_t)(eax + 0x134u)); esp -= 4; W32(esp, 0x832904u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 832904: jmp 0x832ab6 */
  goto L_832ab6;
L_832909: /* 832909: fstp st(0) */
  STI(0) = ST0; FPOP();
L_83290b: /* 83290b: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 83290e: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 832911: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 832914: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 832917: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 832919: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 83291c: fmul dword ptr [ebp - 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff94u)));
/* 83291f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 832921: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 832924: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 832926: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 832929: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83292b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83292e: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 832931: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 832933: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 832936: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 832939: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 83293b: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 83293d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83293f: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 832942: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 832945: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 832948: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 83294b: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 83294e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 832954: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 832957: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83295a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83295c: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83295f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 832962: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 832965: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 832968: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 83296b: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83296e: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 832971: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 832974: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 832977: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 83297a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83297c: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 83297f: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 832982: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 832984: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 832987: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83298a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83298c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 832992: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 832994: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 832996: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 832999: jne 0x832ab6 */
  if (!zf) goto L_832ab6;
L_83299f: /* 83299f: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8329a2: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8329a5: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 8329a8: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 8329ab: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8329ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8329af: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8329b2: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8329b5: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8329b8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8329bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8329ba: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8329bd: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8329c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8329c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8329c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8329c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8329cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8329cd: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 8329d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8329d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8329d7: lea esi, [eax + 0x17c] */
  esi = (uint32_t)(eax + 0x17cu);
/* 8329dd: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8329df: mov edi, esp */
  edi = esp;
/* 8329e1: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8329e3: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8329e6: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8329e9: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8329ec: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 8329ef: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8329f2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8329f5: mov esi, esp */
  esi = esp;
/* 8329f7: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8329f9: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8329fc: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 8329ff: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 832a02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832a03: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 832a06: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x832a0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 832a0c: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 832a0f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 832a15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 832a17: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 832a1a: jp 0x832ab6 */
  if (pf) goto L_832ab6;
L_832a20: /* 832a20: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 832a26: mov esi, dword ptr [ebp - 0x74] */
  esi = R32((uint32_t)(ebp + 0xffffff8cu));
/* 832a29: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 832a2c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 832a2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 832a2f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832a32: mov edx, esp */
  edx = esp;
/* 832a34: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 832a36: mov esi, dword ptr [ebp - 0x70] */
  esi = R32((uint32_t)(ebp + 0xffffff90u));
/* 832a39: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 832a3c: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 832a3f: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 832a42: call dword ptr [eax + 0x130] */
  { uint32_t t = R32((uint32_t)(eax + 0x130u)); esp -= 4; W32(esp, 0x832a48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 832a48: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 832a4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832a4c: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 832a4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 832a50: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 832a53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 832a54: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 832a57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832a58: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 832a5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 832a5c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 832a5f: call 0x6c6163 */
  esp -= 4; W32(esp, 0x832a64u); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 832a64: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 832a67: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 832a6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832a6f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 832a71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832a73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832a75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832a77: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 832a7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 832a7e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832a81: lea esi, [eax + 0x17c] */
  esi = (uint32_t)(eax + 0x17cu);
/* 832a87: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 832a89: mov edi, esp */
  edi = esp;
/* 832a8b: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 832a8d: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 832a90: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 832a93: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 832a96: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 832a99: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 832a9c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832a9f: mov esi, esp */
  esi = esp;
/* 832aa1: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 832aa3: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 832aa6: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 832aa9: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 832aac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832aad: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 832ab0: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x832ab6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_832ab6: /* 832ab6: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 832abb: mov ecx, dword ptr [0xce847c] */
  ecx = R32((uint32_t)(0xce847cu));
/* 832ac1: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 832ac4: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 832ac6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 832ac8: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 832acb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 832acd: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 832ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 832ad1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 832ad3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 832ad6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 832ad7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 832ade: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 832adf: mov esp, ebp */
  esp = ebp;
/* 832ae1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 832ae2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_832ae5(void) {
  LOAD_REGS();
L_832ae5: /* 832ae5: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 832ae8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 832aed: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 832af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832af1: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 832af4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x832af9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_832af9(); return;
}

void f_832af9(void) {
  LOAD_REGS();
L_832af9: /* 832af9: push 0xa1597c */
  { uint32_t v = 0xa1597cu; esp -= 4; W32(esp, v); }
/* 832afe: push 0xae39f8 */
  { uint32_t v = 0xae39f8u; esp -= 4; W32(esp, v); }
/* 832b03: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x832b09u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 832b09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 832b0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832b0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832b10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x832b15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_832b15: guest_badaddr(0x832b15); return;
}

void f_832c30(void) {
  LOAD_REGS();
L_832c30: /* 832c30: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 832c34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832c35: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 832c39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832c3c: mov edx, esp */
  edx = esp;
/* 832c3e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 832c40: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 832c44: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 832c47: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 832c4b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 832c4e: call 0x6cbd34 */
  esp -= 4; W32(esp, 0x832c53u); SPILL(); f_6cbd34(); if (g_unwind) return; RELOAD();
/* 832c53: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_832c70(void) {
  LOAD_REGS();
L_832c70: /* 832c70: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832c73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 832c74: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 832c78: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 832c79: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 832c7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 832c7e: mov esi, ecx */
  esi = ecx;
/* 832c80: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 832c86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832c88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 832c89: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 832c8d: je 0x832d05 */
  if (zf) goto L_832d05;
L_832c8f: /* 832c8f: fld dword ptr [eax + 0x37c] */
  { double v = F32((uint32_t)(eax + 0x37cu)); FPUSH(v); }
/* 832c95: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 832c99: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 832c9f: fld dword ptr [eax + 0x378] */
  { double v = F32((uint32_t)(eax + 0x378u)); FPUSH(v); }
/* 832ca5: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 832cab: fld dword ptr [eax + 0x374] */
  { double v = F32((uint32_t)(eax + 0x374u)); FPUSH(v); }
/* 832cb1: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 832cb5: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 832cbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832cbc: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 832cc0: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 832cc4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 832cc8: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x832cceu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 832cce: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832cd2: jne 0x832ce4 */
  if (!zf) goto L_832ce4;
L_832cd4: /* 832cd4: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 832cdc: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
L_832ce4: /* 832ce4: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 832ce8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 832ce9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832cec: mov ecx, esp */
  ecx = esp;
/* 832cee: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 832cf0: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 832cf3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 832cf6: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 832cfc: call 0x6c5eb1 */
  esp -= 4; W32(esp, 0x832d01u); SPILL(); f_6c5eb1(); if (g_unwind) return; RELOAD();
/* 832d01: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832d03: jne 0x832d1e */
  if (!zf) goto L_832d1e;
L_832d05: /* 832d05: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 832d09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 832d0a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832d0d: mov eax, esp */
  eax = esp;
/* 832d0f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 832d11: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 832d14: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 832d17: mov ecx, esi */
  ecx = esi;
/* 832d19: call 0x6cbd34 */
  esp -= 4; W32(esp, 0x832d1eu); SPILL(); f_6cbd34(); if (g_unwind) return; RELOAD();
L_832d1e: /* 832d1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 832d1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 832d20: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 832d21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 832d22: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 832d25: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_832d60(void) {
  LOAD_REGS();
L_832d60: /* 832d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 832d61: mov ebp, esp */
  ebp = esp;
/* 832d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 832d65: push 0x9d32c0 */
  { uint32_t v = 0x9d32c0u; esp -= 4; W32(esp, v); }
/* 832d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 832d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 832d78: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832d7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 832d7c: mov eax, ecx */
  eax = ecx;
/* 832d7e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 832d81: mov cl, byte ptr [eax + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x50u))) & 0xffu);
/* 832d84: cmp cl, byte ptr [ebp + 8] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x8u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832d87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 832d88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 832d89: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 832d8c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 832d93: je 0x832fca */
  if (zf) goto L_832fca;
L_832d99: /* 832d99: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 832d9f: mov eax, dword ptr [0xce847c] */
  eax = R32((uint32_t)(0xce847cu));
/* 832da4: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 832da7: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 832da9: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 832dab: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 832dae: mov cl, byte ptr [eax + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x50u))) & 0xffu);
/* 832db1: mov bl, 0xc */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xcu) & 0xffu);
/* 832db3: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832db5: jne 0x832e0a */
  if (!zf) goto L_832e0a;
L_832db7: /* 832db7: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 832dbd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832dbf: je 0x832e0a */
  if (zf) goto L_832e0a;
L_832dc1: /* 832dc1: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 832dc6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x832dccu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 832dcc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832dce: je 0x832e07 */
  if (zf) goto L_832e07;
L_832dd0: /* 832dd0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 832dd3: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 832dd9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832ddb: je 0x832e0a */
  if (zf) goto L_832e0a;
L_832ddd: /* 832ddd: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 832de2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x832de8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 832de8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832dea: je 0x832e07 */
  if (zf) goto L_832e07;
L_832dec: /* 832dec: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 832def: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 832df5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 832df7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832df8: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x832dfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 832dfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832e00: mov ecx, eax */
  ecx = eax;
/* 832e02: call 0x6ca489 */
  esp -= 4; W32(esp, 0x832e07u); SPILL(); f_6ca489(); if (g_unwind) return; RELOAD();
L_832e07: /* 832e07: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_832e0a: /* 832e0a: mov cl, byte ptr [eax + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x50u))) & 0xffu);
/* 832e0d: cmp cl, 0xd */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832e10: mov dl, byte ptr [ebp + 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 832e13: mov byte ptr [eax + 0x50], dl */
  W8((uint32_t)(eax + 0x50u), (edx & 0xffu));
/* 832e16: jne 0x832e41 */
  if (!zf) goto L_832e41;
L_832e18: /* 832e18: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 832e1b: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 832e20: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x832e26u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 832e26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832e28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 832e2b: je 0x832e39 */
  if (zf) goto L_832e39;
L_832e2d: /* 832e2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832e2f: je 0x832e39 */
  if (zf) goto L_832e39;
L_832e31: /* 832e31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832e32: call 0x6c9417 */
  esp -= 4; W32(esp, 0x832e37u); SPILL(); f_6c9417(); if (g_unwind) return; RELOAD();
/* 832e37: jmp 0x832e4f */
  goto L_832e4f;
L_832e39: /* 832e39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832e3a: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x832e3fu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
/* 832e3f: jmp 0x832e4f */
  goto L_832e4f;
L_832e41: /* 832e41: cmp cl, 0xe */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832e44: jne 0x832e4f */
  if (!zf) goto L_832e4f;
L_832e46: /* 832e46: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 832e49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832e4a: call 0x6c20a4 */
  esp -= 4; W32(esp, 0x832e4fu); SPILL(); f_6c20a4(); if (g_unwind) return; RELOAD();
L_832e4f: /* 832e4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 832e52: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 832e55: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832e57: je 0x832e5d */
  if (zf) goto L_832e5d;
L_832e59: /* 832e59: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832e5b: jne 0x832e66 */
  if (!zf) goto L_832e66;
L_832e5d: /* 832e5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 832e5e: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x832e63u); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 832e63: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_832e66: /* 832e66: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 832e69: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832e6b: je 0x832ec1 */
  if (zf) goto L_832ec1;
L_832e6d: /* 832e6d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 832e6f: je 0x832ec1 */
  if (zf) goto L_832ec1;
L_832e71: /* 832e71: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832e73: je 0x832ec1 */
  if (zf) goto L_832ec1;
L_832e75: /* 832e75: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832e77: je 0x832ec1 */
  if (zf) goto L_832ec1;
L_832e79: /* 832e79: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832e7b: je 0x832ec1 */
  if (zf) goto L_832ec1;
L_832e7d: /* 832e7d: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 832e80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832e82: je 0x832f36 */
  if (zf) goto L_832f36;
L_832e88: /* 832e88: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 832e8a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 832e8c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832e8f: mov eax, esp */
  eax = esp;
/* 832e91: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 832e98: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 832e9b: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 832e9d: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 832ea4: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 832ea7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 832eaa: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 832eb1: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 832eb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 832eb6: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 832eb9: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x832ebfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 832ebf: jmp 0x832f33 */
  goto L_832f33;
L_832ec1: /* 832ec1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 832ec4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832ec6: jne 0x832ecf */
  if (!zf) goto L_832ecf;
L_832ec8: /* 832ec8: call 0x6c5754 */
  esp -= 4; W32(esp, 0x832ecdu); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
/* 832ecd: jmp 0x832ef5 */
  goto L_832ef5;
L_832ecf: /* 832ecf: cmp dword ptr [ecx + 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x5cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 832ed2: je 0x832ef8 */
  if (zf) goto L_832ef8;
L_832ed4: /* 832ed4: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 832ed7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 832ed9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 832edb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 832ede: mov esi, esp */
  esi = esp;
/* 832ee0: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 832ee2: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 832ee5: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 832ee8: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 832eeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832eec: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 832eef: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x832ef5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_832ef5: /* 832ef5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_832ef8: /* 832ef8: cmp byte ptr [ecx + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832efb: jne 0x832f36 */
  if (!zf) goto L_832f36;
L_832efd: /* 832efd: mov eax, dword ptr [ecx + 0xd0] */
  eax = R32((uint32_t)(ecx + 0xd0u));
/* 832f03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832f05: je 0x832f36 */
  if (zf) goto L_832f36;
L_832f07: /* 832f07: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 832f0c: mov ecx, eax */
  ecx = eax;
/* 832f0e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x832f14u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 832f14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832f16: je 0x832f33 */
  if (zf) goto L_832f33;
L_832f18: /* 832f18: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 832f1b: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 832f21: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 832f23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832f24: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x832f2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 832f2a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 832f2c: mov ecx, eax */
  ecx = eax;
/* 832f2e: call 0x6ca489 */
  esp -= 4; W32(esp, 0x832f33u); SPILL(); f_6ca489(); if (g_unwind) return; RELOAD();
L_832f33: /* 832f33: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_832f36: /* 832f36: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 832f39: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 832f3b: je 0x832f41 */
  if (zf) goto L_832f41;
L_832f3d: /* 832f3d: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 832f3f: jne 0x832f9f */
  if (!zf) goto L_832f9f;
L_832f41: /* 832f41: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 832f47: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 832f4e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 832f51: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 832f53: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 832f5a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 832f5d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 832f60: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 832f67: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 832f6a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 832f6d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 832f70: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 832f76: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 832f7d: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 832f80: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 832f82: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 832f89: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 832f8c: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 832f93: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 832f96: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 832f99: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 832f9c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_832f9f: /* 832f9f: mov eax, dword ptr [ecx + 0x16c] */
  eax = R32((uint32_t)(ecx + 0x16cu));
/* 832fa5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 832fa7: je 0x832fb1 */
  if (zf) goto L_832fb1;
L_832fa9: /* 832fa9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 832faa: mov ecx, eax */
  ecx = eax;
/* 832fac: call 0x6c7f4a */
  esp -= 4; W32(esp, 0x832fb1u); SPILL(); f_6c7f4a(); if (g_unwind) return; RELOAD();
L_832fb1: /* 832fb1: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 832fb6: mov ecx, dword ptr [0xce847c] */
  ecx = R32((uint32_t)(0xce847cu));
/* 832fbc: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 832fbf: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 832fc1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 832fc3: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 832fc6: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 832fc8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_832fca: /* 832fca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 832fcd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 832fce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 832fcf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 832fd6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 832fd7: mov esp, ebp */
  esp = ebp;
/* 832fd9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 832fda: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_832fdd(void) {
  LOAD_REGS();
L_832fdd: /* 832fdd: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 832fe0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 832fe5: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 832fe8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 832fe9: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 832fec: call 0x99caf8 */
  esp -= 4; W32(esp, 0x832ff1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_832ff1(); return;
}

void f_832ff1(void) {
  LOAD_REGS();
L_832ff1: /* 832ff1: push 0xa159b0 */
  { uint32_t v = 0xa159b0u; esp -= 4; W32(esp, v); }
/* 832ff6: push 0xae3a08 */
  { uint32_t v = 0xae3a08u; esp -= 4; W32(esp, v); }
/* 832ffb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x833001u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 833001: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 833004: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833006: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833008: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83300du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83300d: guest_badaddr(0x83300d); return;
}

void f_8330c0(void) {
  LOAD_REGS();
L_8330c0: /* 8330c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8330c1: mov ebp, esp */
  ebp = esp;
/* 8330c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8330c5: push 0x9d32d0 */
  { uint32_t v = 0x9d32d0u; esp -= 4; W32(esp, v); }
/* 8330ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8330d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8330d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8330d8: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8330db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8330dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8330dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8330de: mov edi, ecx */
  edi = ecx;
/* 8330e0: mov al, byte ptr [edi + 0x390] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x390u))) & 0xffu);
/* 8330e6: xor ebx, ebx */
  ebx = 0;
/* 8330e8: test al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8330ea: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8330ed: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8330f0: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8330f3: je 0x8330fc */
  if (zf) goto L_8330fc;
L_8330f5: /* 8330f5: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_8330fc: /* 8330fc: lea esi, [edi + 0x188] */
  esi = (uint32_t)(edi + 0x188u);
/* 833102: mov eax, esi */
  eax = esi;
/* 833104: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 833106: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 833109: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83310c: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 83310f: cmp dword ptr [ebp + 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x24u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 833112: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 833115: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 833118: je 0x8333a1 */
  if (zf) goto L_8333a1;
L_83311e: /* 83311e: lea ecx, [edi + 0x194] */
  ecx = (uint32_t)(edi + 0x194u);
/* 833124: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x83312au); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 83312a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83312c: je 0x8333a1 */
  if (zf) goto L_8333a1;
L_833132: /* 833132: mov ecx, esi */
  ecx = esi;
/* 833134: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 833136: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 833139: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83313c: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 83313f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 833142: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 833145: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 833148: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 83314f: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 833156: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 83315d: mov dword ptr [ebp + 0x24], edx */
  W32((uint32_t)(ebp + 0x24u), edx);
/* 833160: mov ebx, edx */
  ebx = edx;
L_833162: /* 833162: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 833165: fcomp dword ptr [0xa15a10] */
  fpu_com(ST0, F32((uint32_t)(0xa15a10u)));
  FPOP();
/* 83316b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 83316e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 833170: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 833173: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833175: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 833177: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 833179: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83317c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83317e: mov eax, esi */
  eax = esi;
/* 833180: jne 0x833266 */
  if (!zf) goto L_833266;
L_833186: /* 833186: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 833189: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83318b: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 833191: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 833194: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 83319a: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 83319d: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 8331a3: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8331a6: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8331a9: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8331ac: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8331ae: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8331b1: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8331b4: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8331b7: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8331ba: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8331bd: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 8331c0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8331c3: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8331c6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8331c8: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 8331cb: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8331ce: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8331d1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8331d3: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8331d6: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8331d9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8331dc: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8331df: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8331e2: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8331e5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8331e8: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8331eb: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8331ee: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8331f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8331f3: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8331f6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8331f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8331fa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 833200: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833202: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 833205: jne 0x833255 */
  if (!zf) goto L_833255;
L_833207: /* 833207: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 83320a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83320b: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 833211: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 833217: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 83321a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83321b: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 833221: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 833224: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 833226: fmul dword ptr [0xa15a10] */
  ST0 = ST0 * (F32((uint32_t)(0xa15a10u)));
/* 83322c: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 83322f: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 833232: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 833235: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83323bu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83323b: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83323e: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 833240: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 833243: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 833246: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 833249: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83324c: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83324f: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 833252: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
L_833255: /* 833255: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 833258: fsub dword ptr [0xa15a10] */
  ST0 = ST0 - (F32((uint32_t)(0xa15a10u)));
/* 83325e: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 833261: jmp 0x833162 */
  goto L_833162;
L_833266: /* 833266: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 833269: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83326b: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 83326e: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 833271: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 833274: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 833277: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 83327a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 83327d: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 833280: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 833283: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 833285: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 833288: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83328b: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 83328e: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 833291: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 833294: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 833297: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 83329a: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83329d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 83329f: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 8332a2: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8332a5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8332a8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8332aa: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8332ad: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8332b0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8332b3: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8332b6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8332b9: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8332bc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8332bf: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8332c2: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8332c5: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8332c8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8332ca: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8332cd: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8332cf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8332d1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8332d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8332d9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8332dc: jne 0x833323 */
  if (!zf) goto L_833323;
L_8332de: /* 8332de: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8332e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8332e2: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8332e5: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 8332eb: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8332ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8332ef: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8332f2: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8332f5: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8332f8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8332fa: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8332fd: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 833300: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 833303: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x833309u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 833309: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83330c: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 83330e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 833311: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 833314: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 833317: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83331a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83331d: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 833320: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
L_833323: /* 833323: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 833326: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 833329: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83332c: mov eax, esi */
  eax = esi;
/* 83332e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 833330: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 833333: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 833336: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 833339: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 83333c: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83333f: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 833342: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 833344: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 833347: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 833349: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83334b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 833351: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833353: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 833356: jnp 0x833374 */
  if (!pf) goto L_833374;
L_833358: /* 833358: mov ecx, esi */
  ecx = esi;
/* 83335a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x833360u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 833360: fst dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0);
/* 833363: fcomp dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
  FPOP();
/* 833369: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83336b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83336e: jp 0x833526 */
  if (pf) goto L_833526;
L_833374: /* 833374: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 83337b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83337e: mov edx, esi */
  edx = esi;
/* 833380: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 833382: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 833389: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 83338c: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 833393: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 833396: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 833399: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83339c: jmp 0x833526 */
  goto L_833526;
L_8333a1: /* 8333a1: mov ecx, esi */
  ecx = esi;
/* 8333a3: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8333a9u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8333a9: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 8333ac: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8333af: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 8333b2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8333b4: lea ebx, [edi + 0x194] */
  ebx = (uint32_t)(edi + 0x194u);
/* 8333ba: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8333bd: mov ecx, ebx */
  ecx = ebx;
/* 8333bf: je 0x833449 */
  if (zf) goto L_833449;
L_8333c5: /* 8333c5: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8333cbu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8333cb: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 8333ce: fld dword ptr [edi + 0x414] */
  { double v = F32((uint32_t)(edi + 0x414u)); FPUSH(v); }
/* 8333d4: fld dword ptr [edi + 0x408] */
  { double v = F32((uint32_t)(edi + 0x408u)); FPUSH(v); }
/* 8333da: fmul dword ptr [edi + 0x408] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x408u)));
/* 8333e0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8333e2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8333e4: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8333e7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8333e9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8333eb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8333ed: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8333f0: jne 0x83349f */
  if (!zf) goto L_83349f;
L_8333f6: /* 8333f6: fld dword ptr [edi + 0x408] */
  { double v = F32((uint32_t)(edi + 0x408u)); FPUSH(v); }
/* 8333fc: mov edx, dword ptr [edi + 0x414] */
  edx = R32((uint32_t)(edi + 0x414u));
/* 833402: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 833405: mov dword ptr [ebp + 0x24], edx */
  W32((uint32_t)(ebp + 0x24u), edx);
/* 833408: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83340a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83340d: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 833410: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 833412: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 833415: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 833418: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 83341b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83341e: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 833421: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 833424: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 833427: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 83342a: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 83342d: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 833430: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 833433: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 833435: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 833438: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 83343b: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 83343e: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 833441: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 833444: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 833447: jmp 0x83349f */
  goto L_83349f;
L_833449: /* 833449: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83344fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83344f: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 833452: fld dword ptr [edi + 0x408] */
  { double v = F32((uint32_t)(edi + 0x408u)); FPUSH(v); }
/* 833458: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83345a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83345c: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83345f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 833461: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833463: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 833465: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 833468: jne 0x83349f */
  if (!zf) goto L_83349f;
L_83346a: /* 83346a: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 833470: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 833473: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 833476: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 833479: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 83347c: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 83347f: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 833482: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 833485: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 833488: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 83348b: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 83348d: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 833490: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 833493: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 833496: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 833499: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 83349c: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
L_83349f: /* 83349f: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8334a2: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 8334a5: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8334a8: mov ecx, esi */
  ecx = esi;
/* 8334aa: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8334ad: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8334b0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8334b3: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8334b6: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8334b9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8334bc: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8334be: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 8334c1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8334c4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8334c6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8334c8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8334ca: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8334cc: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8334cf: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8334d2: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8334d5: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 8334d8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8334da: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8334dd: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8334e0: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8334e3: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8334e6: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8334e9: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 8334ec: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8334ef: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8334f2: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8334f5: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8334f8: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8334fb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8334fe: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 833501: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 833504: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 833507: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 833509: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 83350c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83350f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 833512: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 833514: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 833517: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83351a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83351d: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 833520: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 833523: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_833526: /* 833526: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 833529: mov eax, esi */
  eax = esi;
/* 83352b: fmul dword ptr [edi + 0x19c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x19cu)));
/* 833531: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 833534: fmul dword ptr [edi + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x198u)));
/* 83353a: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 83353d: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 833540: fmul dword ptr [edi + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x194u)));
/* 833546: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 833549: fild dword ptr [ebp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 83354c: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 83354f: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 833552: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 833558: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83355a: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 83355d: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 833560: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 833562: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 833565: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 833568: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 83356a: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 83356d: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 833570: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 833573: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 833576: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 833579: fadd dword ptr [ebp - 0x70] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff90u)));
/* 83357c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83357f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 833582: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 833584: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 833587: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 83358a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83358d: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 833590: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 833593: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 833596: mov ecx, edi */
  ecx = edi;
/* 833598: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x83359du); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 83359d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83359f: jne 0x8335ad */
  if (!zf) goto L_8335ad;
L_8335a1: /* 8335a1: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8335a4: fmul dword ptr [edi + 0x39c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x39cu)));
/* 8335aa: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
L_8335ad: /* 8335ad: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 8335b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8335b2: je 0x833633 */
  if (zf) goto L_833633;
L_8335b8: /* 8335b8: mov eax, dword ptr [edi + 0x16c] */
  eax = R32((uint32_t)(edi + 0x16cu));
/* 8335be: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8335c1: fmul dword ptr [eax + 0x3cc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3ccu)));
/* 8335c7: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8335cc: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8335cf: mov edx, esi */
  edx = esi;
/* 8335d1: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8335d4: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8335d7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8335d9: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8335dc: fld dword ptr [edi + 0x2e0] */
  { double v = F32((uint32_t)(edi + 0x2e0u)); FPUSH(v); }
/* 8335e2: fdiv dword ptr [edi + 0x2dc] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x2dcu)));
/* 8335e8: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8335ee: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8335f1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8335f3: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8335f6: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 8335f9: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8335fc: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 8335ff: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 833602: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 833605: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 833608: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 83360b: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 83360e: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 833611: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 833614: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 833617: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 833619: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83361c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83361f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 833621: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 833624: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 833627: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83362a: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 83362d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 833630: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_833633: /* 833633: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 833634: mov ecx, esp */
  ecx = esp;
/* 833636: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
/* 833639: push 0x152 */
  { uint32_t v = 0x152u; esp -= 4; W32(esp, v); }
/* 83363e: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x833644u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 833644: mov ecx, edi */
  ecx = edi;
/* 833646: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x83364cu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 83364c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83364e: je 0x83366e */
  if (zf) goto L_83366e;
L_833650: /* 833650: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 833653: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 833656: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833659: mov ecx, esp */
  ecx = esp;
/* 83365b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83365d: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 833660: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 833663: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 833666: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 833667: mov ecx, edi */
  ecx = edi;
/* 833669: call 0x6c68e3 */
  esp -= 4; W32(esp, 0x83366eu); SPILL(); f_6c68e3(); if (g_unwind) return; RELOAD();
L_83366e: /* 83366e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 833671: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 833673: je 0x8336ec */
  if (zf) goto L_8336ec;
L_833675: /* 833675: mov ecx, esi */
  ecx = esi;
/* 833677: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83367du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83367d: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 833680: fld dword ptr [edi + 0x414] */
  { double v = F32((uint32_t)(edi + 0x414u)); FPUSH(v); }
/* 833686: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 833688: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83368a: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 83368d: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 833690: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 833693: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 833695: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833697: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 833699: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83369c: jne 0x8336ec */
  if (!zf) goto L_8336ec;
L_83369e: /* 83369e: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8336a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8336a2: mov ecx, esi */
  ecx = esi;
/* 8336a4: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8336aau); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8336aa: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8336ad: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8336af: fmul dword ptr [edi + 0x414] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x414u)));
/* 8336b5: mov ecx, esi */
  ecx = esi;
/* 8336b7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8336b9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8336bc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8336be: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8336c1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8336c4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8336c7: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8336c9: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8336cb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8336cd: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8336d0: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
L_8336d3: /* 8336d3: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8336d6: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_8336d9: /* 8336d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8336dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8336dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8336de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8336e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8336e6: mov esp, ebp */
  esp = ebp;
/* 8336e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8336e9: ret 0x24 */
  esp += 40; SPILL(); return;
L_8336ec: /* 8336ec: mov ecx, esi */
  ecx = esi;
/* 8336ee: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8336f4u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8336f4: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8336f7: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8336fa: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 8336fd: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 833700: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833702: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 833705: jp 0x8336d9 */
  if (pf) goto L_8336d9;
L_833707: /* 833707: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 83370a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83370b: mov ecx, esi */
  ecx = esi;
/* 83370d: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x833713u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 833713: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 833716: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 833718: mov edx, esi */
  edx = esi;
/* 83371a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83371c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83371f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 833722: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 833725: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 833728: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 83372a: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 83372c: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83372f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 833732: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 833735: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 833738: jmp 0x8336d3 */
  goto L_8336d3;
}

void f_83373a(void) {
  LOAD_REGS();
L_83373a: /* 83373a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83373d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 833742: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 833745: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 833746: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 833749: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83374eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83374e(); return;
}

void f_83374e(void) {
  LOAD_REGS();
L_83374e: /* 83374e: push 0xa159e0 */
  { uint32_t v = 0xa159e0u; esp -= 4; W32(esp, v); }
/* 833753: push 0xae3a94 */
  { uint32_t v = 0xae3a94u; esp -= 4; W32(esp, v); }
/* 833758: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83375eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83375e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 833761: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833763: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833765: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83376au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83376a: guest_badaddr(0x83376a); return;
}

void f_833920(void) {
  LOAD_REGS();
L_833920: /* 833920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 833921: mov ebp, esp */
  ebp = esp;
/* 833923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 833925: push 0x9d32e0 */
  { uint32_t v = 0x9d32e0u; esp -= 4; W32(esp, v); }
/* 83392a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 833930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 833931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 833938: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83393e: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 833941: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 833942: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 833948: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 833949: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 83394c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83394d: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 833953: mov edi, dword ptr [ebp + 0x2c] */
  edi = R32((uint32_t)(ebp + 0x2cu));
/* 833956: xor ebx, ebx */
  ebx = 0;
/* 833958: mov esi, ecx */
  esi = ecx;
/* 83395a: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 83395d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 833960: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 833963: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 833966: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 83396c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 83396f: mov dword ptr [ebp - 0x98], ebx */
  W32((uint32_t)(ebp + 0xffffff68u), ebx);
/* 833975: mov dword ptr [ebp - 0x94], ebx */
  W32((uint32_t)(ebp + 0xffffff6cu), ebx);
/* 83397b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83397e: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 833984: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 83398a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83398d: mov dword ptr [ebp - 0x88], ebx */
  W32((uint32_t)(ebp + 0xffffff78u), ebx);
/* 833993: mov dword ptr [ebp - 0x84], ebx */
  W32((uint32_t)(ebp + 0xffffff7cu), ebx);
/* 833999: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 83399c: mov dword ptr [ebp - 0x80], ebx */
  W32((uint32_t)(ebp + 0xffffff80u), ebx);
/* 83399f: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 8339a2: mov dword ptr [ebp - 0x7c], ebx */
  W32((uint32_t)(ebp + 0xffffff84u), ebx);
/* 8339a5: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8339ab: mov dword ptr [ebp - 0x78], ebx */
  W32((uint32_t)(ebp + 0xffffff88u), ebx);
/* 8339ae: mov dword ptr [ebp - 0x74], 0x3f8ccccd */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f8ccccdu);
/* 8339b5: mov dword ptr [ebp - 0x70], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff90u), 0xffffffffu);
/* 8339bc: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 8339bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8339c1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8339c4: je 0x8339c8 */
  if (zf) goto L_8339c8;
L_8339c6: /* 8339c6: fchs  */
  ST0 = -ST0;
L_8339c8: /* 8339c8: fcomp dword ptr [0xa155bc] */
  fpu_com(ST0, F32((uint32_t)(0xa155bcu)));
  FPOP();
/* 8339ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8339d0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8339d3: jnp 0x833a63 */
  if (!pf) goto L_833a63;
L_8339d9: /* 8339d9: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 8339dc: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 8339e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8339e4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8339e7: je 0x833a63 */
  if (zf) goto L_833a63;
L_8339e9: /* 8339e9: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 8339ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8339ee: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8339f0: je 0x833c19 */
  if (zf) goto L_833c19;
L_8339f6: /* 8339f6: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* 8339f9: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8339ffu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8339ff: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 833a02: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 833a08: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 833a0b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 833a0d: fmul dword ptr [edi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1cu)));
/* 833a10: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 833a13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 833a14: fadd dword ptr [ebp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x28u)));
/* 833a17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 833a18: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 833a1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 833a1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 833a1d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 833a20: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 833a23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 833a24: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 833a27: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 833a2d: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 833a2f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833a32: mov ecx, esp */
  ecx = esp;
/* 833a34: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 833a36: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 833a39: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 833a3c: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 833a3f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 833a42: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 833a45: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833a48: mov ecx, esp */
  ecx = esp;
/* 833a4a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 833a4c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 833a4f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 833a52: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 833a55: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 833a58: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 833a5e: jmp 0x833c12 */
  goto L_833c12;
L_833a63: /* 833a63: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 833a69: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 833a6f: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 833a75: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 833a7b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 833a7e: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 833a81: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 833a84: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 833a87: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833a8a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 833a90: fst dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0);
/* 833a93: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 833a95: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 833a98: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 833a9e: fst dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0);
/* 833aa1: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 833aa4: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 833aa7: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 833aaa: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 833aad: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 833ab3: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 833ab6: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 833ab9: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 833abc: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 833abf: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 833ac5: mov edx, esp */
  edx = esp;
/* 833ac7: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 833aca: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 833acc: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 833ad2: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 833ad5: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 833ad8: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 833adb: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 833ae1: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 833ae4: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 833ae7: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 833aec: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 833aef: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 833af2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 833af3: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 833af6: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 833af9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 833afa: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 833afd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 833afe: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 833b01: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 833b07: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 833b09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 833b0a: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 833b0d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 833b0f: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 833b12: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 833b14: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 833b17: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 833b19: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 833b1f: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 833b22: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 833b28: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 833b2b: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 833b2e: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 833b34: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 833b37: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 833b3a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 833b3d: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 833b40: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 833b43: fadd dword ptr [ebp - 0x68] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff98u)));
/* 833b46: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 833b49: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 833b4c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 833b4f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 833b51: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x833b57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 833b57: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 833b5a: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 833b60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833b62: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 833b65: jne 0x833c19 */
  if (!zf) goto L_833c19;
L_833b6b: /* 833b6b: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 833b6e: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 833b71: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 833b77: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 833b7a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 833b7c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 833b7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833b81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833b83: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 833b86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833b88: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 833b8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833b8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 833b8e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833b91: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 833b97: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 833b99: mov eax, esp */
  eax = esp;
/* 833b9b: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 833b9d: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 833ba0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 833ba3: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 833ba6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 833ba9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 833bac: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833baf: mov eax, esp */
  eax = esp;
/* 833bb1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 833bb3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 833bb6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 833bb9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 833bbc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 833bbf: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 833bc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 833bc6: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x833bccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 833bcc: mov ebx, dword ptr [esi + 0x17c] */
  ebx = R32((uint32_t)(esi + 0x17cu));
/* 833bd2: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 833bd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833bda: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 833bdc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833bde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833be0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833be2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 833be3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833be6: mov eax, esp */
  eax = esp;
/* 833be8: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 833bea: mov ebx, dword ptr [esi + 0x180] */
  ebx = R32((uint32_t)(esi + 0x180u));
/* 833bf0: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 833bf3: mov ebx, dword ptr [esi + 0x184] */
  ebx = R32((uint32_t)(esi + 0x184u));
/* 833bf9: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 833bfc: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 833bff: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833c02: mov eax, esp */
  eax = esp;
/* 833c04: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 833c06: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
/* 833c09: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 833c0c: mov ebx, dword ptr [ebp + 0x28] */
  ebx = R32((uint32_t)(ebp + 0x28u));
/* 833c0f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
L_833c12: /* 833c12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 833c13: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x833c19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_833c19: /* 833c19: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 833c1c: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 833c22: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833c24: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 833c27: jp 0x833f1e */
  if (pf) goto L_833f1e;
L_833c2d: /* 833c2d: mov ecx, esi */
  ecx = esi;
/* 833c2f: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x833c34u); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 833c34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 833c36: je 0x833f7a */
  if (zf) goto L_833f7a;
L_833c3c: /* 833c3c: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 833c3f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 833c41: je 0x833f7a */
  if (zf) goto L_833f7a;
L_833c47: /* 833c47: push 0xb61798 */
  { uint32_t v = 0xb61798u; esp -= 4; W32(esp, v); }
/* 833c4c: mov ecx, ebx */
  ecx = ebx;
/* 833c4e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x833c54u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 833c54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 833c56: je 0x833f7a */
  if (zf) goto L_833f7a;
L_833c5c: /* 833c5c: test byte ptr [ebx + 0x340], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x340u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 833c63: je 0x833f7a */
  if (zf) goto L_833f7a;
L_833c69: /* 833c69: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 833c6c: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 833c6f: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 833c72: fmul dword ptr [edi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1cu)));
/* 833c75: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 833c77: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 833c7a: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 833c7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 833c7f: fcomp qword ptr [0xa15a38] */
  fpu_com(ST0, F64((uint32_t)(0xa15a38u)));
  FPOP();
/* 833c85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833c87: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 833c8a: jp 0x833f7a */
  if (pf) goto L_833f7a;
L_833c90: /* 833c90: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 833c96: or edx, 0x2000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 833c9c: mov dword ptr [esi + 0x390], edx */
  W32((uint32_t)(esi + 0x390u), edx);
/* 833ca2: fld dword ptr [ebx + 0x2dc] */
  { double v = F32((uint32_t)(ebx + 0x2dcu)); FPUSH(v); }
/* 833ca8: fadd dword ptr [esi + 0x2dc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2dcu)));
/* 833cae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 833caf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833cb2: mov eax, esp */
  eax = esp;
/* 833cb4: fdivr dword ptr [esi + 0x2dc] */
  ST0 = (F32((uint32_t)(esi + 0x2dcu))) / ST0;
/* 833cba: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 833cbc: fmul dword ptr [esi + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x188u)));
/* 833cc2: fstp dword ptr [esi + 0x188] */
  WF32((uint32_t)(esi + 0x188u), ST0); FPOP();
/* 833cc8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 833cca: fmul dword ptr [esi + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18cu)));
/* 833cd0: fstp dword ptr [esi + 0x18c] */
  WF32((uint32_t)(esi + 0x18cu), ST0); FPOP();
/* 833cd6: fmul dword ptr [esi + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x190u)));
/* 833cdc: fstp dword ptr [esi + 0x190] */
  WF32((uint32_t)(esi + 0x190u), ST0); FPOP();
/* 833ce2: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 833ce5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 833ce7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 833ce9: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 833cec: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 833cef: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 833cf2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 833cf5: mov ecx, esi */
  ecx = esi;
/* 833cf7: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x833cfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 833cfd: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 833d01: je 0x833f67 */
  if (zf) goto L_833f67;
L_833d07: /* 833d07: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 833d0a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 833d0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 833d0d: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 833d10: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 833d12: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833d15: mov ecx, esp */
  ecx = esp;
/* 833d17: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 833d19: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 833d1c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 833d1f: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 833d22: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 833d25: mov ecx, esi */
  ecx = esi;
/* 833d27: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x833d2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 833d2d: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 833d31: je 0x833f67 */
  if (zf) goto L_833f67;
L_833d37: /* 833d37: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 833d3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 833d3b: lea ebx, [edi + 0x14] */
  ebx = (uint32_t)(edi + 0x14u);
/* 833d3e: mov ecx, ebx */
  ecx = ebx;
/* 833d40: mov dword ptr [edi + 0x1c], 0 */
  W32((uint32_t)(edi + 0x1cu), 0x0u);
/* 833d47: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x833d4du); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 833d4d: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 833d50: mov dword ptr [ebp + 0x2c], eax */
  W32((uint32_t)(ebp + 0x2cu), eax);
/* 833d53: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 833d55: mov edx, ebx */
  edx = ebx;
/* 833d57: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 833d59: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 833d5c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 833d5f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 833d62: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 833d65: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 833d68: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 833d6b: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 833d6e: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 833d71: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 833d74: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 833d77: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 833d7a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 833d7c: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 833d7f: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 833d82: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 833d85: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 833d87: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 833d89: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 833d8c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 833d8f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 833d91: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 833d94: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 833d97: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 833d9a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 833d9c: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 833d9f: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 833da2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 833da4: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 833da7: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 833daa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 833dac: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 833dae: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 833db1: fsubr dword ptr [ebp + 0x28] */
  ST0 = (F32((uint32_t)(ebp + 0x28u))) - ST0;
/* 833db4: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 833db7: fsub dword ptr [ebp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x2cu)));
/* 833dba: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 833dbd: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 833dc0: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 833dc3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 833dc9: fsub dword ptr [edi + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x24u)));
/* 833dcc: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 833dcf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 833dd1: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 833dd4: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 833dd7: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 833dda: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 833ddd: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 833de0: mov dword ptr [ebp + 0x28], ecx */
  W32((uint32_t)(ebp + 0x28u), ecx);
/* 833de3: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 833de6: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 833de9: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 833dec: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 833def: mov dword ptr [ebp + 0x20], edx */
  W32((uint32_t)(ebp + 0x20u), edx);
/* 833df2: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 833df5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 833df8: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 833dfb: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 833dfe: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 833e00: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 833e03: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 833e06: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 833e08: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 833e0b: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 833e0e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 833e10: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 833e16: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 833e18: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833e1a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 833e1d: jne 0x833f1e */
  if (!zf) goto L_833f1e;
L_833e23: /* 833e23: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 833e29: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 833e2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833e2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833e2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833e31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833e33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 833e34: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833e37: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 833e3d: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 833e3f: mov eax, esp */
  eax = esp;
/* 833e41: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 833e43: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 833e46: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 833e49: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 833e4c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 833e4f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 833e52: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833e55: mov eax, esp */
  eax = esp;
/* 833e57: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 833e59: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 833e5c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 833e5f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 833e62: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 833e65: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 833e6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 833e6c: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x833e72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 833e72: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 833e75: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 833e7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833e7d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 833e80: jp 0x833f1e */
  if (pf) goto L_833f1e;
L_833e86: /* 833e86: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 833e89: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 833e8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 833e8c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833e8f: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 833e92: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 833e94: mov ecx, esp */
  ecx = esp;
/* 833e96: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 833e98: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 833e9b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 833e9e: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 833ea1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 833ea4: mov ecx, esi */
  ecx = esi;
/* 833ea6: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x833eacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 833eac: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 833eb0: je 0x833f67 */
  if (zf) goto L_833f67;
L_833eb6: /* 833eb6: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 833eb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 833eba: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 833ebd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 833ebe: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 833ec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 833ec2: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 833ec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 833ec6: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 833ec9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 833eca: mov ecx, esi */
  ecx = esi;
/* 833ecc: call 0x6c6163 */
  esp -= 4; W32(esp, 0x833ed1u); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 833ed1: mov ebx, dword ptr [esi + 0x17c] */
  ebx = R32((uint32_t)(esi + 0x17cu));
/* 833ed7: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 833edd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833edf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 833ee1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833ee3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833ee5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833ee7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 833ee8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833eeb: mov eax, esp */
  eax = esp;
/* 833eed: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 833eef: mov ebx, dword ptr [esi + 0x180] */
  ebx = R32((uint32_t)(esi + 0x180u));
/* 833ef5: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 833ef8: mov ebx, dword ptr [esi + 0x184] */
  ebx = R32((uint32_t)(esi + 0x184u));
/* 833efe: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 833f01: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 833f04: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833f07: mov eax, esp */
  eax = esp;
/* 833f09: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 833f0b: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
/* 833f0e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 833f11: mov ebx, dword ptr [ebp + 0x28] */
  ebx = R32((uint32_t)(ebp + 0x28u));
/* 833f14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 833f15: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 833f18: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x833f1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_833f1e: /* 833f1e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 833f24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833f26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 833f28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833f2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833f2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 833f2f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833f32: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 833f38: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 833f3a: mov edi, esp */
  edi = esp;
/* 833f3c: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 833f3e: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 833f41: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 833f44: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 833f47: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 833f4a: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 833f4d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833f50: mov eax, esp */
  eax = esp;
/* 833f52: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 833f54: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 833f57: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 833f5a: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 833f5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 833f5e: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 833f61: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x833f67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_833f67: /* 833f67: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 833f6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 833f71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 833f72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 833f73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 833f74: mov esp, ebp */
  esp = ebp;
/* 833f76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 833f77: ret 0x28 */
  esp += 44; SPILL(); return;
L_833f7a: /* 833f7a: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 833f7d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 833f83: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833f85: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 833f88: je 0x833f8c */
  if (zf) goto L_833f8c;
L_833f8a: /* 833f8a: fchs  */
  ST0 = -ST0;
L_833f8c: /* 833f8c: fcomp dword ptr [0xa155bc] */
  fpu_com(ST0, F32((uint32_t)(0xa155bcu)));
  FPOP();
/* 833f92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833f94: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 833f97: jp 0x833d07 */
  if (pf) goto L_833d07;
L_833f9d: /* 833f9d: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* 833fa0: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x833fa6u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 833fa6: fst dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0);
/* 833fa9: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 833fac: fcomp dword ptr [0xa15938] */
  fpu_com(ST0, F32((uint32_t)(0xa15938u)));
  FPOP();
/* 833fb2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 833fb4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 833fb7: jne 0x833d07 */
  if (!zf) goto L_833d07;
L_833fbd: /* 833fbd: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 833fc3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 833fc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833fc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833fc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833fcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 833fcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 833fce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833fd1: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 833fd7: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 833fd9: mov ecx, esp */
  ecx = esp;
/* 833fdb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 833fdd: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 833fe0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 833fe3: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 833fe6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 833fe9: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 833fec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 833fef: mov ecx, esp */
  ecx = esp;
/* 833ff1: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 833ff3: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 833ff6: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 833ff9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 833ffc: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 833fff: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 834005: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 834006: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83400cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83400c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 834012: fsub dword ptr [edi + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x24u)));
/* 834015: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 834016: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 834018: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83401b: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 83401e: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 834021: mov eax, esp */
  eax = esp;
/* 834023: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 834026: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834029: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83402c: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 83402f: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 834032: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 834035: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 834038: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83403b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83403d: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 834040: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 834043: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 834046: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 834049: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83404c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83404f: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 834052: mov eax, esp */
  eax = esp;
/* 834054: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 834056: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 834059: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83405c: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 83405f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 834062: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 834065: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834068: mov eax, esp */
  eax = esp;
/* 83406a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83406c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 83406f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 834072: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 834075: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 834078: mov ecx, esi */
  ecx = esi;
/* 83407a: call dword ptr [edx + 0x134] */
  { uint32_t t = R32((uint32_t)(edx + 0x134u)); esp -= 4; W32(esp, 0x834080u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 834080: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 834083: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 834084: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 834085: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83408c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83408d: mov esp, ebp */
  esp = ebp;
/* 83408f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 834090: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_834093(void) {
  LOAD_REGS();
L_834093: /* 834093: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 834099: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83409e: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 8340a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8340a2: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 8340a5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8340aau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8340aa(); return;
}

void f_8340aa(void) {
  LOAD_REGS();
L_8340aa: /* 8340aa: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8340b0: push 0xa15a14 */
  { uint32_t v = 0xa15a14u; esp -= 4; W32(esp, v); }
/* 8340b5: push 0xae3a9c */
  { uint32_t v = 0xae3a9cu; esp -= 4; W32(esp, v); }
/* 8340ba: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8340bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8340bc: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8340bf: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 8340c5: xor eax, eax */
  eax = 0;
/* 8340c7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8340c9: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8340cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8340cd: push 0xae3aa4 */
  { uint32_t v = 0xae3aa4u; esp -= 4; W32(esp, v); }
/* 8340d2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8340d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8340d4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8340d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8340d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8340db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8340e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8340e0: guest_badaddr(0x8340e0); return;
}

void f_8342f0(void) {
  LOAD_REGS();
L_8342f0: /* 8342f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8342f1: mov ebp, esp */
  ebp = esp;
/* 8342f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8342f5: push 0x9d32f0 */
  { uint32_t v = 0x9d32f0u; esp -= 4; W32(esp, v); }
/* 8342fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 834300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834301: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 834308: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83430b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 83430e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83430f: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 834315: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 834316: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 834319: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83431a: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 834320: mov edi, dword ptr [ebp + 0x2c] */
  edi = R32((uint32_t)(ebp + 0x2cu));
/* 834323: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 834326: mov esi, ecx */
  esi = ecx;
/* 834328: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 83432b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 834332: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 834335: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 83433b: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83433e: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 834341: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 834344: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 834347: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 83434d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83434f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 834352: je 0x834356 */
  if (zf) goto L_834356;
L_834354: /* 834354: fchs  */
  ST0 = -ST0;
L_834356: /* 834356: fcomp dword ptr [0xa155bc] */
  fpu_com(ST0, F32((uint32_t)(0xa155bcu)));
  FPOP();
/* 83435c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83435e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 834361: jp 0x83441b */
  if (pf) goto L_83441b;
L_834367: /* 834367: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 83436d: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 834373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 834375: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 834378: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 83437e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834380: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 834383: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834385: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 83438b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83438d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83438f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 834390: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834393: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 834396: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 83439c: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 83439e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8343a1: mov ecx, esp */
  ecx = esp;
/* 8343a3: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8343a5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8343a8: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8343ab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8343ae: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8343b1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8343b4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8343b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8343ba: mov ecx, esp */
  ecx = esp;
/* 8343bc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8343be: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8343c1: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8343c4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8343c7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8343ca: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8343d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8343d1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8343d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8343d7: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8343dd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8343df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8343e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8343e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8343e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8343e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8343e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8343eb: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 8343f1: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8343f3: mov ecx, esp */
  ecx = esp;
/* 8343f5: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8343f7: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8343fa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8343fd: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 834400: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 834403: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 834406: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834409: mov ecx, esp */
  ecx = esp;
/* 83440b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83440d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 834410: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 834413: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 834416: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 834419: jmp 0x834483 */
  goto L_834483;
L_83441b: /* 83441b: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* 83441e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 834420: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x834426u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 834426: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 834429: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 83442c: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 83442f: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 834435: fmul dword ptr [edi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1cu)));
/* 834438: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83443a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83443c: fadd dword ptr [ebp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x28u)));
/* 83443f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834441: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 834444: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834446: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 834449: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83444c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83444e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83444f: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 834452: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 834458: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 83445a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83445d: mov eax, esp */
  eax = esp;
/* 83445f: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 834461: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 834464: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 834467: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 83446a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83446d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 834470: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834473: mov eax, esp */
  eax = esp;
/* 834475: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 834477: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83447a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83447d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 834480: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_834483: /* 834483: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 834489: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83448a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x834490u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 834490: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 834493: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 834499: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83449b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83449e: jp 0x8347d0 */
  if (pf) goto L_8347d0;
L_8344a4: /* 8344a4: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 8344a7: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8344ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8344af: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8344b2: je 0x8344b6 */
  if (zf) goto L_8344b6;
L_8344b4: /* 8344b4: fchs  */
  ST0 = -ST0;
L_8344b6: /* 8344b6: fcomp dword ptr [0xa155bc] */
  fpu_com(ST0, F32((uint32_t)(0xa155bcu)));
  FPOP();
/* 8344bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8344be: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8344c1: jp 0x8345bb */
  if (pf) goto L_8345bb;
L_8344c7: /* 8344c7: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* 8344ca: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8344d0u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8344d0: fst dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0);
/* 8344d3: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 8344d6: fcomp dword ptr [0xa15938] */
  fpu_com(ST0, F32((uint32_t)(0xa15938u)));
  FPOP();
/* 8344dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8344de: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8344e1: jne 0x8345bb */
  if (!zf) goto L_8345bb;
L_8344e7: /* 8344e7: mov ebx, dword ptr [esi + 0x17c] */
  ebx = R32((uint32_t)(esi + 0x17cu));
/* 8344ed: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8344f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8344f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8344f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8344f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8344fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8344fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8344fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834501: mov eax, esp */
  eax = esp;
/* 834503: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 834505: mov ebx, dword ptr [esi + 0x180] */
  ebx = R32((uint32_t)(esi + 0x180u));
/* 83450b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 83450e: mov ebx, dword ptr [esi + 0x184] */
  ebx = R32((uint32_t)(esi + 0x184u));
/* 834514: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 834517: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83451a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83451d: mov eax, esp */
  eax = esp;
/* 83451f: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 834521: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 834524: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 834527: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83452a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83452b: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 83452e: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x834534u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 834534: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83453a: fsub dword ptr [edi + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x24u)));
/* 83453d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83453e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 834540: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834543: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 834546: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 834549: mov eax, esp */
  eax = esp;
/* 83454b: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 83454e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834551: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 834554: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 834557: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 83455a: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 83455d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 834560: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 834563: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 834565: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 834568: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83456b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83456e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 834571: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 834574: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 834577: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 83457a: mov eax, esp */
  eax = esp;
/* 83457c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83457e: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 834581: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 834584: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 834587: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83458a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 83458d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834590: mov eax, esp */
  eax = esp;
/* 834592: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 834594: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 834597: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83459a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 83459d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8345a0: mov ecx, esi */
  ecx = esi;
/* 8345a2: call dword ptr [edx + 0x134] */
  { uint32_t t = R32((uint32_t)(edx + 0x134u)); esp -= 4; W32(esp, 0x8345a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8345a8: /* 8345a8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8345ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8345b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8345b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8345b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8345b5: mov esp, ebp */
  esp = ebp;
/* 8345b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8345b8: ret 0x28 */
  esp += 44; SPILL(); return;
L_8345bb: /* 8345bb: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8345be: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8345c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8345c1: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 8345c4: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8345c6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8345c9: mov ecx, esp */
  ecx = esp;
/* 8345cb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8345cd: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8345d0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8345d3: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8345d6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8345d9: mov ecx, esi */
  ecx = esi;
/* 8345db: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x8345e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8345e1: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8345e5: je 0x8345a8 */
  if (zf) goto L_8345a8;
L_8345e7: /* 8345e7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8345ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8345eb: lea ebx, [edi + 0x14] */
  ebx = (uint32_t)(edi + 0x14u);
/* 8345ee: mov ecx, ebx */
  ecx = ebx;
/* 8345f0: mov dword ptr [edi + 0x1c], 0 */
  W32((uint32_t)(edi + 0x1cu), 0x0u);
/* 8345f7: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8345fdu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8345fd: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 834600: mov dword ptr [ebp + 0x2c], eax */
  W32((uint32_t)(ebp + 0x2cu), eax);
/* 834603: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 834605: mov edx, ebx */
  edx = ebx;
/* 834607: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 834609: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83460c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83460f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 834612: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 834615: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 834618: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 83461b: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 83461e: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 834621: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 834624: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 834627: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 83462a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83462c: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 83462f: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 834632: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 834635: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 834637: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 834639: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 83463c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83463f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 834641: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 834644: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 834647: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 83464a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83464c: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 83464f: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 834652: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 834654: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 834657: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 83465a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83465c: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 83465e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 834661: fsubr dword ptr [ebp + 0x28] */
  ST0 = (F32((uint32_t)(ebp + 0x28u))) - ST0;
/* 834664: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 834667: fsub dword ptr [ebp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x2cu)));
/* 83466a: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 83466d: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 834670: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 834673: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 834679: fsub dword ptr [edi + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x24u)));
/* 83467c: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 83467f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 834681: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 834684: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 834687: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 83468a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 83468d: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 834690: mov dword ptr [ebp + 0x28], ecx */
  W32((uint32_t)(ebp + 0x28u), ecx);
/* 834693: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 834696: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 834699: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83469c: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83469f: mov dword ptr [ebp + 0x20], edx */
  W32((uint32_t)(ebp + 0x20u), edx);
/* 8346a2: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 8346a5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8346a8: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8346ab: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 8346ae: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8346b0: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8346b3: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8346b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8346b8: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8346bb: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8346be: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8346c0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8346c6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8346c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8346ca: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8346cd: jne 0x8347d0 */
  if (!zf) goto L_8347d0;
L_8346d3: /* 8346d3: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8346d9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8346db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8346dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8346df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8346e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8346e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8346e4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8346e7: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 8346ed: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8346ef: mov ecx, esp */
  ecx = esp;
/* 8346f1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8346f3: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8346f6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8346f9: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8346fc: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8346ff: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 834702: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834705: mov ecx, esp */
  ecx = esp;
/* 834707: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 834709: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83470c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83470f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 834712: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 834715: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83471b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83471c: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x834722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 834722: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 834725: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83472b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83472d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 834730: jp 0x8347d0 */
  if (pf) goto L_8347d0;
L_834736: /* 834736: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 834739: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83473b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83473c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83473f: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 834742: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 834744: mov ecx, esp */
  ecx = esp;
/* 834746: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 834748: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 83474b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83474e: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 834751: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 834754: mov ecx, esi */
  ecx = esi;
/* 834756: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x83475cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83475c: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 834760: je 0x8345a8 */
  if (zf) goto L_8345a8;
L_834766: /* 834766: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 834769: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83476a: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 83476d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83476e: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 834771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834772: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 834775: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834776: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 834779: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83477a: mov ecx, esi */
  ecx = esi;
/* 83477c: call 0x6c6163 */
  esp -= 4; W32(esp, 0x834781u); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 834781: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 834787: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 834789: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83478b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83478d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83478f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834791: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 834792: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834795: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 83479b: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 83479d: mov ecx, esp */
  ecx = esp;
/* 83479f: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8347a1: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8347a4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8347a7: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8347aa: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8347ad: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8347b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8347b3: mov ecx, esp */
  ecx = esp;
/* 8347b5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8347b7: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 8347ba: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8347bd: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 8347c0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8347c3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8347c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8347ca: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8347d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8347d0: /* 8347d0: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8347d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8347d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8347da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8347dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8347de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8347e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8347e1: mov edi, dword ptr [esi + 0x17c] */
  edi = R32((uint32_t)(esi + 0x17cu));
/* 8347e7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8347ea: mov eax, esp */
  eax = esp;
/* 8347ec: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8347ee: mov edi, dword ptr [esi + 0x180] */
  edi = R32((uint32_t)(esi + 0x180u));
/* 8347f4: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8347f7: mov edi, dword ptr [esi + 0x184] */
  edi = R32((uint32_t)(esi + 0x184u));
/* 8347fd: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 834800: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 834803: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834806: mov eax, esp */
  eax = esp;
/* 834808: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 83480a: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83480d: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 834810: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 834813: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 834814: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 834817: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83481du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83481d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 834820: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 834821: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 834822: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 834829: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83482a: mov esp, ebp */
  esp = ebp;
/* 83482c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83482d: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_834830(void) {
  LOAD_REGS();
L_834830: /* 834830: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 834833: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 834838: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 83483b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83483c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 83483f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x834844u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_834844(); return;
}

void f_834844(void) {
  LOAD_REGS();
L_834844: /* 834844: push 0xa15a44 */
  { uint32_t v = 0xa15a44u; esp -= 4; W32(esp, v); }
/* 834849: push 0xae3ac4 */
  { uint32_t v = 0xae3ac4u; esp -= 4; W32(esp, v); }
/* 83484e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x834854u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 834854: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 834857: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834859: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83485b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x834860u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_834860: guest_badaddr(0x834860); return;
}

void f_8349d0(void) {
  LOAD_REGS();
L_8349d0: /* 8349d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8349d1: mov ebp, esp */
  ebp = esp;
/* 8349d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8349d5: push 0x9d3300 */
  { uint32_t v = 0x9d3300u; esp -= 4; W32(esp, v); }
/* 8349da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8349e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8349e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8349e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8349eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8349ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8349ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8349ee: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 8349f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8349f4: mov esi, ecx */
  esi = ecx;
/* 8349f6: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 8349fb: mov ecx, edi */
  ecx = edi;
/* 8349fd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 834a04: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x834a0au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 834a0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834a0c: jne 0x834a2c */
  if (!zf) goto L_834a2c;
L_834a0e: /* 834a0e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 834a11: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 834a14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 834a15: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834a18: mov eax, esp */
  eax = esp;
/* 834a1a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 834a1c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 834a1f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 834a22: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 834a25: mov ecx, esi */
  ecx = esi;
/* 834a27: call 0x6cbd34 */
  esp -= 4; W32(esp, 0x834a2cu); SPILL(); f_6cbd34(); if (g_unwind) return; RELOAD();
L_834a2c: /* 834a2c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 834a2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 834a30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 834a31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 834a38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 834a39: mov esp, ebp */
  esp = ebp;
/* 834a3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 834a3c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_834a3f(void) {
  LOAD_REGS();
L_834a3f: /* 834a3f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 834a42: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 834a47: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 834a4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834a4b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 834a4e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x834a53u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_834a53(); return;
}

void f_834a53(void) {
  LOAD_REGS();
L_834a53: /* 834a53: push 0xa15a68 */
  { uint32_t v = 0xa15a68u; esp -= 4; W32(esp, v); }
/* 834a58: push 0xae3acc */
  { uint32_t v = 0xae3accu; esp -= 4; W32(esp, v); }
/* 834a5d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x834a63u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 834a63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 834a66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834a68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834a6a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x834a6fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_834a6f: guest_badaddr(0x834a6f); return;
}

void f_834aa0(void) {
  LOAD_REGS();
L_834aa0: /* 834aa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 834aa1: mov ebp, esp */
  ebp = esp;
/* 834aa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 834aa5: push 0x9d3310 */
  { uint32_t v = 0x9d3310u; esp -= 4; W32(esp, v); }
/* 834aaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 834ab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834ab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 834ab8: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834abb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 834abc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 834abd: mov esi, ecx */
  esi = ecx;
/* 834abf: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 834ac2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834ac4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 834ac5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 834ac8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 834acf: je 0x834d80 */
  if (zf) goto L_834d80;
L_834ad5: /* 834ad5: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 834ada: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x834ae0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 834ae0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834ae2: jne 0x834d80 */
  if (!zf) goto L_834d80;
L_834ae8: /* 834ae8: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 834aee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 834af0: js 0x834d5f */
  if (sf) goto L_834d5f;
L_834af6: /* 834af6: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 834afc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834afe: je 0x834d5f */
  if (zf) goto L_834d5f;
L_834b04: /* 834b04: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 834b0a: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x834b10u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 834b10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834b12: jne 0x834d80 */
  if (!zf) goto L_834d80;
L_834b18: /* 834b18: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 834b1e: fld dword ptr [eax + 0x37c] */
  { double v = F32((uint32_t)(eax + 0x37cu)); FPUSH(v); }
/* 834b24: mov ebx, dword ptr [0xcfa578] */
  ebx = R32((uint32_t)(0xcfa578u));
/* 834b2a: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 834b30: add eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 834b35: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 834b38: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 834b3e: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 834b41: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 834b44: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 834b46: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 834b49: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 834b4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834b4c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 834b4f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 834b52: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 834b55: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x834b57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 834b57: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 834b5b: jne 0x834b9f */
  if (!zf) goto L_834b9f;
L_834b5d: /* 834b5d: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 834b60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 834b61: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 834b64: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 834b6b: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 834b72: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x834b74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 834b74: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 834b76: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 834b79: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 834b7c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 834b7f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 834b82: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 834b85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834b86: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 834b89: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 834b8c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x834b8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 834b8e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 834b90: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 834b93: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 834b96: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 834b99: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 834b9c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_834b9f: /* 834b9f: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 834ba2: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 834ba8: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 834bab: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 834bae: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 834bb1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 834bb3: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 834bb6: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 834bb9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 834bbb: fcomp dword ptr [ecx + 0x3a8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x3a8u)));
  FPOP();
/* 834bc1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 834bc3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 834bc6: je 0x834d80 */
  if (zf) goto L_834d80;
L_834bcc: /* 834bcc: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 834bcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 834bd0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 834bd3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834bd6: mov eax, esp */
  eax = esp;
/* 834bd8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 834bda: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 834bdd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 834be0: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 834be3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 834be6: call 0x6c5eb1 */
  esp -= 4; W32(esp, 0x834bebu); SPILL(); f_6c5eb1(); if (g_unwind) return; RELOAD();
/* 834beb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834bed: jne 0x834d80 */
  if (!zf) goto L_834d80;
L_834bf3: /* 834bf3: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 834bf6: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 834bf8: je 0x834d5f */
  if (zf) goto L_834d5f;
L_834bfe: /* 834bfe: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 834c00: jne 0x834d93 */
  if (!zf) goto L_834d93;
L_834c06: /* 834c06: mov ecx, esi */
  ecx = esi;
/* 834c08: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x834c0du); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 834c0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834c0f: jne 0x834d93 */
  if (!zf) goto L_834d93;
L_834c15: /* 834c15: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 834c1b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 834c1d: jns 0x834d93 */
  if (!sf) goto L_834d93;
L_834c23: /* 834c23: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 834c25: jne 0x834d93 */
  if (!zf) goto L_834d93;
L_834c2b: /* 834c2b: mov ecx, dword ptr [esi + 0x2d4] */
  ecx = R32((uint32_t)(esi + 0x2d4u));
/* 834c31: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 834c34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834c35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 834c36: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 834c39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 834c3a: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 834c41: call 0x6cb802 */
  esp -= 4; W32(esp, 0x834c46u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 834c46: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 834c49: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 834c4c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 834c4f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 834c52: mov ecx, esi */
  ecx = esi;
/* 834c54: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 834c57: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 834c59: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 834c5c: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 834c5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834c5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 834c60: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 834c63: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 834c66: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 834c69: call 0x6c836e */
  esp -= 4; W32(esp, 0x834c6eu); SPILL(); f_6c836e(); if (g_unwind) return; RELOAD();
/* 834c6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834c70: jne 0x834d80 */
  if (!zf) goto L_834d80;
L_834c76: /* 834c76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834c78: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 834c7d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 834c80: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x834c85u); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 834c85: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 834c8b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 834c8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834c8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834c91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834c93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834c95: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 834c98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834c99: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834c9c: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 834ca2: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 834ca4: mov eax, esp */
  eax = esp;
/* 834ca6: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 834ca8: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 834cab: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 834cae: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 834cb1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 834cb4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834cb7: mov eax, esp */
  eax = esp;
/* 834cb9: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 834cc0: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 834cc3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 834cc5: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 834ccc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 834ccf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 834cd2: mov dword ptr [ebp - 0x2c], 0xc20c0000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xc20c0000u);
/* 834cd9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 834cdc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 834cdf: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 834ce5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 834ce6: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x834cecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 834cec: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 834cef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834cf1: je 0x834d33 */
  if (zf) goto L_834d33;
L_834cf3: /* 834cf3: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 834cf9: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 834cfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 834cfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834cfe: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 834d01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 834d02: call 0x6cb802 */
  esp -= 4; W32(esp, 0x834d07u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 834d07: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 834d0a: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 834d0d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 834d10: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 834d13: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 834d16: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 834d19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 834d1a: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 834d1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 834d1d: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 834d1f: mov ecx, esi */
  ecx = esi;
/* 834d21: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 834d24: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 834d27: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 834d2a: call 0x6c836e */
  esp -= 4; W32(esp, 0x834d2fu); SPILL(); f_6c836e(); if (g_unwind) return; RELOAD();
/* 834d2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834d31: jne 0x834d80 */
  if (!zf) goto L_834d80;
L_834d33: /* 834d33: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 834d39: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834d3b: je 0x834d5f */
  if (zf) goto L_834d5f;
L_834d3d: /* 834d3d: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 834d40: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 834d43: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 834d45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 834d46: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834d49: mov edx, esp */
  edx = esp;
/* 834d4b: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 834d4d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 834d50: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 834d53: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 834d56: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 834d59: call dword ptr [eax + 0x19c] */
  { uint32_t t = R32((uint32_t)(eax + 0x19cu)); esp -= 4; W32(esp, 0x834d5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_834d5f: /* 834d5f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 834d62: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 834d65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834d66: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 834d69: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834d6c: mov ecx, esp */
  ecx = esp;
/* 834d6e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 834d70: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 834d73: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 834d76: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 834d79: mov ecx, esi */
  ecx = esi;
/* 834d7b: call 0x6cbd34 */
  esp -= 4; W32(esp, 0x834d80u); SPILL(); f_6cbd34(); if (g_unwind) return; RELOAD();
L_834d80: /* 834d80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 834d83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 834d84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 834d85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 834d8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 834d8d: mov esp, ebp */
  esp = ebp;
/* 834d8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 834d90: ret 0x10 */
  esp += 20; SPILL(); return;
L_834d93: /* 834d93: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 834d9a: jmp 0x834c76 */
  goto L_834c76;
}

void f_834d9f(void) {
  LOAD_REGS();
L_834d9f: /* 834d9f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 834da2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 834da7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 834daa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 834dab: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 834dae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x834db3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_834db3(); return;
}

void f_834db3(void) {
  LOAD_REGS();
L_834db3: /* 834db3: push 0xa15aa0 */
  { uint32_t v = 0xa15aa0u; esp -= 4; W32(esp, v); }
/* 834db8: push 0xae3adc */
  { uint32_t v = 0xae3adcu; esp -= 4; W32(esp, v); }
/* 834dbd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x834dc3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 834dc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 834dc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834dc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834dca: call 0x99caf8 */
  esp -= 4; W32(esp, 0x834dcfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_834dcf: guest_badaddr(0x834dcf); return;
}

void f_834ea0(void) {
  LOAD_REGS();
L_834ea0: /* 834ea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 834ea1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 834ea2: mov edi, ecx */
  edi = ecx;
/* 834ea4: test byte ptr [edi + 0x34c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x34cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 834eab: je 0x834f28 */
  if (zf) goto L_834f28;
L_834ead: /* 834ead: fld dword ptr [edi + 0x2d8] */
  { double v = F32((uint32_t)(edi + 0x2d8u)); FPUSH(v); }
/* 834eb3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 834eb9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 834ebb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 834ebe: jp 0x834ed3 */
  if (pf) goto L_834ed3;
L_834ec0: /* 834ec0: fld dword ptr [edi + 0x2d4] */
  { double v = F32((uint32_t)(edi + 0x2d4u)); FPUSH(v); }
/* 834ec6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 834ecc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 834ece: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 834ed1: jnp 0x834f28 */
  if (!pf) goto L_834f28;
L_834ed3: /* 834ed3: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 834ed7: test byte ptr [esi + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 834ede: je 0x834f0d */
  if (zf) goto L_834f0d;
L_834ee0: /* 834ee0: push 0xce7998 */
  { uint32_t v = 0xce7998u; esp -= 4; W32(esp, v); }
/* 834ee5: mov ecx, esi */
  ecx = esi;
/* 834ee7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x834eedu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 834eed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 834eef: je 0x834f28 */
  if (zf) goto L_834f28;
L_834ef1: /* 834ef1: push 0xce7998 */
  { uint32_t v = 0xce7998u; esp -= 4; W32(esp, v); }
/* 834ef6: mov ecx, esi */
  ecx = esi;
/* 834ef8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x834efeu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 834efe: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 834f00: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 834f02: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 834f04: test byte ptr [eax + 0x33c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x33cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 834f0b: je 0x834f28 */
  if (zf) goto L_834f28;
L_834f0d: /* 834f0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834f0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834f11: mov ecx, edi */
  ecx = edi;
/* 834f13: call 0x6c389b */
  esp -= 4; W32(esp, 0x834f18u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 834f18: mov dword ptr [edi + 0x348], esi */
  W32((uint32_t)(edi + 0x348u), esi);
/* 834f1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 834f1f: mov eax, 1 */
  eax = 0x1u;
/* 834f24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 834f25: ret 4 */
  esp += 8; SPILL(); return;
L_834f28: /* 834f28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 834f29: xor eax, eax */
  eax = 0;
/* 834f2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 834f2c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_834f60(void) {
  LOAD_REGS();
L_834f60: /* 834f60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 834f61: mov ebp, esp */
  ebp = esp;
/* 834f63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 834f65: push 0x9d3320 */
  { uint32_t v = 0x9d3320u; esp -= 4; W32(esp, v); }
/* 834f6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 834f70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834f71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 834f78: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 834f7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 834f7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 834f7d: mov esi, ecx */
  esi = ecx;
/* 834f7f: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 834f85: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 834f8b: fcomp dword ptr [ecx + 0x350] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x350u)));
  FPOP();
/* 834f91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 834f92: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 834f95: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 834f9c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 834f9e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 834fa1: jp 0x834fcb */
  if (pf) goto L_834fcb;
L_834fa3: /* 834fa3: mov al, byte ptr [ecx + 0x354] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x354u))) & 0xffu);
/* 834fa9: mov ecx, dword ptr [0xb7e3cc] */
  ecx = R32((uint32_t)(0xb7e3ccu));
/* 834faf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834fb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 834fb2: mov ecx, esi */
  ecx = esi;
/* 834fb4: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 834fb7: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x834fbdu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 834fbd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 834fbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 834fc1: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* 834fc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 834fc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 834fc6: mov ecx, esi */
  ecx = esi;
/* 834fc8: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x834fcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_834fcb: /* 834fcb: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 834fd1: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 834fd4: jne 0x83504d */
  if (!zf) goto L_83504d;
L_834fd6: /* 834fd6: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 834fdc: test byte ptr [eax + 0x410], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x410u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 834fe3: je 0x835060 */
  if (zf) goto L_835060;
L_834fe5: /* 834fe5: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 834fe8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 834fe9: lea ecx, [eax + 0x3b8] */
  ecx = (uint32_t)(eax + 0x3b8u);
/* 834fef: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 834ff6: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 834ffd: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 835004: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x83500au); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 83500a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83500c: je 0x835060 */
  if (zf) goto L_835060;
L_83500e: /* 83500e: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 835014: fld dword ptr [eax + 0x3bc] */
  { double v = F32((uint32_t)(eax + 0x3bcu)); FPUSH(v); }
/* 83501a: mov ecx, dword ptr [eax + 0x3b8] */
  ecx = R32((uint32_t)(eax + 0x3b8u));
/* 835020: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 835025: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 835028: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 83502b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83502e: fadd dword ptr [0xa14a00] */
  ST0 = ST0 + (F32((uint32_t)(0xa14a00u)));
/* 835034: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 83503a: mov edx, ecx */
  edx = ecx;
/* 83503c: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 83503e: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 835041: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 835044: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 835047: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 83504a: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
L_83504d: /* 83504d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 835050: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 835057: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 835058: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 835059: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83505a: mov esp, ebp */
  esp = ebp;
/* 83505c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83505d: ret 0x18 */
  esp += 28; SPILL(); return;
L_835060: /* 835060: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 835063: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 835066: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 835069: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83506c: mov edx, esp */
  edx = esp;
/* 83506e: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 835070: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 835073: mov ecx, esi */
  ecx = esi;
/* 835075: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 835078: call 0x6c6db1 */
  esp -= 4; W32(esp, 0x83507du); SPILL(); f_6c6db1(); if (g_unwind) return; RELOAD();
/* 83507d: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 835081: jne 0x8350c1 */
  if (!zf) goto L_8350c1;
L_835083: /* 835083: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 835086: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 835088: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83508b: mov eax, esp */
  eax = esp;
/* 83508d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 83508f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 835092: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 835095: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 835098: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835099: xor ebx, ebx */
  ebx = 0;
/* 83509b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83509c: mov ecx, esi */
  ecx = esi;
/* 83509e: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x8350a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8350a4: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 8350aa: mov edx, ebx */
  edx = ebx;
/* 8350ac: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8350ae: mov eax, ebx */
  eax = ebx;
/* 8350b0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8350b3: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8350b6: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8350b9: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8350bc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8350bf: jmp 0x8350c3 */
  goto L_8350c3;
L_8350c1: /* 8350c1: xor ebx, ebx */
  ebx = 0;
L_8350c3: /* 8350c3: test dword ptr [esi + 0x80], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8350cd: je 0x83504d */
  if (zf) goto L_83504d;
L_8350d3: /* 8350d3: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 8350d6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8350d8: jne 0x83504d */
  if (!zf) goto L_83504d;
L_8350de: /* 8350de: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8350e0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8350e3: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 8350e6: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 8350e9: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 8350ec: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8350ef: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 8350f5: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8350f7: mov edx, esp */
  edx = esp;
/* 8350f9: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8350fb: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 8350fe: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 835101: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 835104: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 835107: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 83510a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83510d: mov edx, esp */
  edx = esp;
/* 83510f: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 835111: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 835114: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 835117: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 83511a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 83511d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83511e: mov ecx, esi */
  ecx = esi;
/* 835120: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 835127: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 83512e: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 835135: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 83513c: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 835143: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 83514a: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 835151: mov dword ptr [ebp - 0x30], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd0u), 0xffffffffu);
/* 835158: call dword ptr [eax + 0x12c] */
  { uint32_t t = R32((uint32_t)(eax + 0x12cu)); esp -= 4; W32(esp, 0x83515eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83515e: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 835161: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 835167: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835169: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83516b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83516d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83516f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835171: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 835174: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 835175: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 835178: mov edx, esp */
  edx = esp;
/* 83517a: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 83517c: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83517f: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 835182: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 835185: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 835188: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83518b: mov edx, esp */
  edx = esp;
/* 83518d: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 835194: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 835197: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 835199: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8351a0: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8351a3: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 8351a6: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 8351ad: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 8351b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8351b1: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8351b4: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8351bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8351ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8351bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8351be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8351bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8351c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8351c7: mov esp, ebp */
  esp = ebp;
/* 8351c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8351ca: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8351cd(void) {
  LOAD_REGS();
L_8351cd: /* 8351cd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8351d0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8351d5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8351d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8351d9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8351dc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8351e1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8351e1(); return;
}

void f_8351e1(void) {
  LOAD_REGS();
L_8351e1: /* 8351e1: push 0xa15ad4 */
  { uint32_t v = 0xa15ad4u; esp -= 4; W32(esp, v); }
/* 8351e6: push 0xae3ae4 */
  { uint32_t v = 0xae3ae4u; esp -= 4; W32(esp, v); }
/* 8351eb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8351f1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8351f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8351f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8351f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8351f8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8351fdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8351fd: guest_badaddr(0x8351fd); return;
}

void f_8352b0(void) {
  LOAD_REGS();
L_8352b0: /* 8352b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8352b1: mov ebp, esp */
  ebp = esp;
/* 8352b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8352b5: push 0x9d3330 */
  { uint32_t v = 0x9d3330u; esp -= 4; W32(esp, v); }
/* 8352ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8352c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8352c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8352c8: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8352cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8352cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8352cd: mov esi, ecx */
  esi = ecx;
/* 8352cf: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 8352d5: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8352db: fcomp dword ptr [ecx + 0x350] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x350u)));
  FPOP();
/* 8352e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8352e2: xor edi, edi */
  edi = 0;
/* 8352e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8352e7: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8352ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8352ec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8352ef: jp 0x835317 */
  if (pf) goto L_835317;
L_8352f1: /* 8352f1: mov al, byte ptr [ecx + 0x354] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x354u))) & 0xffu);
/* 8352f7: mov ecx, dword ptr [0xb7e3cc] */
  ecx = R32((uint32_t)(0xb7e3ccu));
/* 8352fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8352fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8352ff: mov ecx, esi */
  ecx = esi;
/* 835301: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 835304: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x83530au); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 83530a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83530c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83530d: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* 835310: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 835311: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835312: mov ecx, esi */
  ecx = esi;
/* 835314: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x835317u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_835317: /* 835317: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 83531d: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 835320: jne 0x835399 */
  if (!zf) goto L_835399;
L_835322: /* 835322: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 835328: test byte ptr [eax + 0x410], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x410u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83532f: je 0x8353ac */
  if (zf) goto L_8353ac;
L_835331: /* 835331: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 835334: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 835335: lea ecx, [eax + 0x3b8] */
  ecx = (uint32_t)(eax + 0x3b8u);
/* 83533b: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 835342: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 835349: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 835350: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x835356u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 835356: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 835358: je 0x8353ac */
  if (zf) goto L_8353ac;
L_83535a: /* 83535a: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 835360: fld dword ptr [eax + 0x3bc] */
  { double v = F32((uint32_t)(eax + 0x3bcu)); FPUSH(v); }
/* 835366: mov ecx, dword ptr [eax + 0x3b8] */
  ecx = R32((uint32_t)(eax + 0x3b8u));
/* 83536c: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 835371: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 835374: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 835377: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83537a: fadd dword ptr [0xa14a00] */
  ST0 = ST0 + (F32((uint32_t)(0xa14a00u)));
/* 835380: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 835386: mov edx, ecx */
  edx = ecx;
/* 835388: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 83538a: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 83538d: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 835390: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 835393: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 835396: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
L_835399: /* 835399: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83539c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8353a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8353a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8353a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8353a6: mov esp, ebp */
  esp = ebp;
/* 8353a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8353a9: ret 0x18 */
  esp += 28; SPILL(); return;
L_8353ac: /* 8353ac: cmp dword ptr [esi + 0x34c], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34cu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8353b3: jge 0x835817 */
  if ((sf == of)) goto L_835817;
L_8353b9: /* 8353b9: mov edx, dword ptr [esi + 0x170] */
  edx = R32((uint32_t)(esi + 0x170u));
/* 8353bf: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8353c5: fmul qword ptr [0xa0d188] */
  ST0 = ST0 * (F64((uint32_t)(0xa0d188u)));
/* 8353cb: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8353d1: fsubr dword ptr [esi + 0x178] */
  ST0 = (F32((uint32_t)(esi + 0x178u))) - ST0;
/* 8353d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8353da: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8353e0: mov eax, edx */
  eax = edx;
/* 8353e2: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8353e5: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8353e8: mov eax, esp */
  eax = esp;
/* 8353ea: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8353ed: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8353f4: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8353f7: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8353fd: fadd dword ptr [esi + 0x2d8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d8u)));
/* 835403: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 835405: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 83540c: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83540f: fadd dword ptr [0xa0b294] */
  ST0 = ST0 + (F32((uint32_t)(0xa0b294u)));
/* 835415: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 835418: fsubr dword ptr [esi + 0x178] */
  ST0 = (F32((uint32_t)(esi + 0x178u))) - ST0;
/* 83541e: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 835425: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 835428: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83542e: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 835431: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 835434: push 0x2bf */
  { uint32_t v = 0x2bfu; esp -= 4; W32(esp, v); }
/* 835439: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 83543c: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 83543f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835440: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 835443: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835444: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 835445: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 835448: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 83544b: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 83544e: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 835455: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 83545c: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 835463: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 83546a: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 835471: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 835478: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 83547b: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 835482: mov dword ptr [ebp - 0x54], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffacu), 0xffffffffu);
/* 835489: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 83548c: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 83548f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 835491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835492: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x835498u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 835498: cmp dword ptr [ebp - 0x78], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83549b: jne 0x835817 */
  if (!zf) goto L_835817;
L_8354a1: /* 8354a1: mov ecx, dword ptr [esi + 0x2d4] */
  ecx = R32((uint32_t)(esi + 0x2d4u));
/* 8354a7: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8354ad: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8354b3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8354b6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8354b9: mov edx, ecx */
  edx = ecx;
/* 8354bb: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8354c1: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 8354c4: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8354c7: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8354cd: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8354d3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8354d6: mov edx, esp */
  edx = esp;
/* 8354d8: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 8354dd: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8354e0: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8354e3: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8354e5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8354e8: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8354eb: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 8354ee: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 8354f0: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8354f3: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8354f6: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8354fc: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8354ff: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 835505: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 835508: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 835509: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 83550c: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 83550f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 835510: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 835513: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 835514: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83551a: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 83551d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 835520: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 835521: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 835527: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83552a: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 835530: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 835533: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 835536: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 835539: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 83553c: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 83553f: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 835545: fsub dword ptr [0xa0b294] */
  ST0 = ST0 - (F32((uint32_t)(0xa0b294u)));
/* 83554b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83554e: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 835554: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 835557: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 83555d: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 835560: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 835563: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 835566: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 835568: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x83556eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83556e: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 835574: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 83557a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 835580: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 835583: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 835586: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 83558c: fmul qword ptr [0xa0b5d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5d8u)));
/* 835592: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 835595: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83559b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83559e: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 8355a4: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8355a7: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 8355ad: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8355b0: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8355b3: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8355b6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8355b8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8355bb: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8355be: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8355c4: fsub dword ptr [0xa0b294] */
  ST0 = ST0 - (F32((uint32_t)(0xa0b294u)));
/* 8355ca: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8355cd: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 8355d3: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8355d6: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 8355dc: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8355df: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8355e2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8355e5: mov edx, esp */
  edx = esp;
/* 8355e7: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8355ea: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8355ec: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 8355ef: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8355f2: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8355f5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8355f7: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8355fa: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 8355ff: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 835602: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 835603: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 835606: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 835607: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 835608: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 83560b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83560c: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x835612u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 835612: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 835618: fmul qword ptr [0xa0b5d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5d8u)));
/* 83561e: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 835621: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 835624: mov ecx, esp */
  ecx = esp;
/* 835626: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 835629: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 83562b: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 83562e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 835631: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 835637: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83563a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83563d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 835640: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 835646: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 83564b: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83564e: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 835651: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 835657: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 835658: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 83565b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83565c: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 83565f: mov edi, eax */
  edi = eax;
/* 835661: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 835667: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83566a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83566b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 83566e: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 835671: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 835672: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 835678: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 83567b: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 83567e: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 835684: fsub dword ptr [0xa0b294] */
  ST0 = ST0 - (F32((uint32_t)(0xa0b294u)));
/* 83568a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83568d: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 835693: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 835696: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 83569c: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 83569f: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8356a2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8356a5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8356a7: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8356adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8356ad: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8356b3: fmul qword ptr [0xa0b5d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5d8u)));
/* 8356b9: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8356bf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8356c2: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8356c5: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8356cb: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 8356d1: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 8356d4: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8356da: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8356dd: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 8356e3: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8356e6: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 8356ec: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8356ef: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8356f2: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8356f5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8356f7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8356fa: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8356fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 835700: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 835706: mov eax, esp */
  eax = esp;
/* 835708: fsub dword ptr [0xa0b294] */
  ST0 = ST0 - (F32((uint32_t)(0xa0b294u)));
/* 83570e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 835710: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 835713: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 835716: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 83571c: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 83571f: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 835722: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 835725: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 83572b: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 83572e: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 835733: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 835736: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835737: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 83573a: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 83573d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83573e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 835741: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 835742: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 835745: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 835748: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83574a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83574b: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x835751u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 835751: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 835754: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 835757: lea ebx, [eax + ecx] */
  ebx = (uint32_t)(eax + ecx);
/* 83575a: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 83575c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 83575e: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 835761: jle 0x835815 */
  if ((zf || sf != of)) goto L_835815;
L_835767: /* 835767: lea ebx, [ecx + edx] */
  ebx = (uint32_t)(ecx + edx);
/* 83576a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83576c: je 0x835815 */
  if (zf) goto L_835815;
L_835772: /* 835772: lea ebx, [eax + edi] */
  ebx = (uint32_t)(eax + edi);
/* 835775: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 835777: je 0x835815 */
  if (zf) goto L_835815;
L_83577d: /* 83577d: inc dword ptr [esi + 0x34c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x34cu), r);
  }
/* 835783: mov ebx, eax */
  ebx = eax;
/* 835785: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 835787: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 835789: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 83578b: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 83578d: mov dword ptr [ebp + 0x1c], ebx */
  W32((uint32_t)(ebp + 0x1cu), ebx);
/* 835790: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 835793: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 835795: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 835797: mov dword ptr [ebp + 0x1c], edi */
  W32((uint32_t)(ebp + 0x1cu), edi);
/* 83579a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83579d: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8357a0: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8357a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8357a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8357a5: mov dword ptr [ebp + 0x10], 0x3f000000 */
  W32((uint32_t)(ebp + 0x10u), 0x3f000000u);
/* 8357ac: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8357af: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8357b5: fadd dword ptr [0xa15b48] */
  ST0 = ST0 + (F32((uint32_t)(0xa15b48u)));
/* 8357bb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8357be: push 0x41f00000 */
  { uint32_t v = 0x41f00000u; esp -= 4; W32(esp, v); }
/* 8357c3: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 8357c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8357ca: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8357d0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8357d3: call 0x6c44ee */
  esp -= 4; W32(esp, 0x8357d8u); SPILL(); f_6c44ee(); if (g_unwind) return; RELOAD();
/* 8357d8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 8357da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8357dd: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 8357e0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8357e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8357e4: call 0x6cb802 */
  esp -= 4; W32(esp, 0x8357e9u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 8357e9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8357eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8357ee: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8357f4: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8357f6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8357f9: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8357fc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8357ff: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 835802: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 835805: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83580c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83580d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83580e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83580f: mov esp, ebp */
  esp = ebp;
/* 835811: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 835812: ret 0x18 */
  esp += 28; SPILL(); return;
L_835815: /* 835815: xor edi, edi */
  edi = 0;
L_835817: /* 835817: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 83581a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 83581d: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 835820: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 835821: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 835822: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 835825: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835826: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 835829: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83582c: mov ecx, esp */
  ecx = esp;
/* 83582e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 835830: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 835833: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 835836: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 835839: mov ecx, esi */
  ecx = esi;
/* 83583b: mov dword ptr [esi + 0x34c], edi */
  W32((uint32_t)(esi + 0x34cu), edi);
/* 835841: call 0x6c3d14 */
  esp -= 4; W32(esp, 0x835846u); SPILL(); f_6c3d14(); if (g_unwind) return; RELOAD();
/* 835846: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 835849: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83584a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83584b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 835852: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 835853: mov esp, ebp */
  esp = ebp;
/* 835855: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 835856: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_835859(void) {
  LOAD_REGS();
L_835859: /* 835859: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83585c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 835861: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 835864: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 835865: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 835868: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83586du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83586d(); return;
}

void f_83586d(void) {
  LOAD_REGS();
L_83586d: /* 83586d: push 0xa15b08 */
  { uint32_t v = 0xa15b08u; esp -= 4; W32(esp, v); }
/* 835872: push 0xae3aec */
  { uint32_t v = 0xae3aecu; esp -= 4; W32(esp, v); }
/* 835877: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83587du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83587d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 835880: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835882: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835884: call 0x99caf8 */
  esp -= 4; W32(esp, 0x835889u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_835889: guest_badaddr(0x835889); return;
}

void f_835a10(void) {
  LOAD_REGS();
L_835a10: /* 835a10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 835a11: mov ebp, esp */
  ebp = esp;
/* 835a13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 835a15: push 0x9d3340 */
  { uint32_t v = 0x9d3340u; esp -= 4; W32(esp, v); }
/* 835a1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 835a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835a21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 835a28: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 835a2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 835a2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 835a2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 835a2e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 835a31: mov esi, ecx */
  esi = ecx;
/* 835a33: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 835a36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835a37: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 835a3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 835a3b: mov ecx, esi */
  ecx = esi;
/* 835a3d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 835a44: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 835a4b: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 835a52: call 0x6c8922 */
  esp -= 4; W32(esp, 0x835a57u); SPILL(); f_6c8922(); if (g_unwind) return; RELOAD();
/* 835a57: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 835a5a: fdiv dword ptr [esi + 0x2dc] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x2dcu)));
/* 835a60: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 835a63: mov edx, eax */
  edx = eax;
/* 835a65: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 835a6b: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 835a6e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 835a70: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 835a73: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 835a75: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 835a78: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 835a7b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 835a7d: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 835a80: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 835a86: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 835a88: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 835a8b: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 835a91: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 835a94: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 835a9a: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 835a9d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 835a9f: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 835aa2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 835aa5: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 835aa8: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 835aab: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 835aae: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 835ab1: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 835ab4: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 835aba: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 835abd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 835abf: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 835ac2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 835ac4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 835ac7: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 835aca: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 835acc: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 835acf: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 835ad2: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 835ad5: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 835ad8: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 835ada: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 835adc: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 835adf: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 835ae1: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 835ae4: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 835ae7: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 835aea: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 835aec: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 835aef: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 835af2: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 835af5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 835af7: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 835afa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 835afd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 835aff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 835b00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 835b01: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 835b08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 835b09: mov esp, ebp */
  esp = ebp;
/* 835b0b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 835b0c: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_835b0f(void) {
  LOAD_REGS();
L_835b0f: /* 835b0f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 835b12: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 835b17: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 835b1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835b1b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 835b1e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x835b23u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_835b23(); return;
}

void f_835b23(void) {
  LOAD_REGS();
L_835b23: /* 835b23: push 0xa15b4c */
  { uint32_t v = 0xa15b4cu; esp -= 4; W32(esp, v); }
/* 835b28: push 0xae3afc */
  { uint32_t v = 0xae3afcu; esp -= 4; W32(esp, v); }
/* 835b2d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x835b33u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 835b33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 835b36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835b38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835b3a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x835b3fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_835b3f: guest_badaddr(0x835b3f); return;
}

void f_835b90(void) {
  LOAD_REGS();
L_835b90: /* 835b90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 835b91: mov ebp, esp */
  ebp = esp;
/* 835b93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 835b95: push 0x9d3350 */
  { uint32_t v = 0x9d3350u; esp -= 4; W32(esp, v); }
/* 835b9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 835ba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835ba1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 835ba8: sub esp, 0x190 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x190u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 835bae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 835baf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 835bb0: mov esi, ecx */
  esi = ecx;
/* 835bb2: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 835bb8: mov al, byte ptr [ecx + 0x358] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x358u))) & 0xffu);
/* 835bbe: fld dword ptr [ecx + 0x350] */
  { double v = F32((uint32_t)(ecx + 0x350u)); FPUSH(v); }
/* 835bc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 835bc5: xor edi, edi */
  edi = 0;
/* 835bc7: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 835bc9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 835bcc: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 835bcf: je 0x835bd7 */
  if (zf) goto L_835bd7;
L_835bd1: /* 835bd1: fsub dword ptr [0xa08704] */
  ST0 = ST0 - (F32((uint32_t)(0xa08704u)));
L_835bd7: /* 835bd7: fcomp dword ptr [esi + 0x178] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x178u)));
  FPOP();
/* 835bdd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 835bdf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 835be2: jne 0x835c1d */
  if (!zf) goto L_835c1d;
L_835be4: /* 835be4: mov al, byte ptr [ecx + 0x354] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x354u))) & 0xffu);
/* 835bea: mov ecx, dword ptr [0xb7e3cc] */
  ecx = R32((uint32_t)(0xb7e3ccu));
/* 835bf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 835bf1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 835bf2: mov ecx, esi */
  ecx = esi;
/* 835bf4: mov byte ptr [ebp + 0xf], al */
  W8((uint32_t)(ebp + 0xfu), (eax & 0xffu));
/* 835bf7: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x835bfdu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 835bfd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 835bff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 835c00: lea ecx, [ebp + 0xf] */
  ecx = (uint32_t)(ebp + 0xfu);
/* 835c03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 835c04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835c05: mov ecx, esi */
  ecx = esi;
/* 835c07: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x835c0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 835c0a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 835c0d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 835c14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 835c15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 835c16: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 835c17: mov esp, ebp */
  esp = ebp;
/* 835c19: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 835c1a: ret 8 */
  esp += 12; SPILL(); return;
L_835c1d: /* 835c1d: mov al, byte ptr [esi + 0xc8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* 835c23: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 835c25: jne 0x835cc1 */
  if (!zf) goto L_835cc1;
L_835c2b: /* 835c2b: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 835c31: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 835c34: jne 0x835cc1 */
  if (!zf) goto L_835cc1;
L_835c3a: /* 835c3a: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 835c41: jne 0x835ca6 */
  if (!zf) goto L_835ca6;
L_835c43: /* 835c43: push 0xb68ee8 */
  { uint32_t v = 0xb68ee8u; esp -= 4; W32(esp, v); }
/* 835c48: mov ecx, esi */
  ecx = esi;
/* 835c4a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x835c50u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 835c50: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 835c52: jne 0x835c65 */
  if (!zf) goto L_835c65;
L_835c54: /* 835c54: push 0xb61798 */
  { uint32_t v = 0xb61798u; esp -= 4; W32(esp, v); }
/* 835c59: mov ecx, esi */
  ecx = esi;
/* 835c5b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x835c61u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 835c61: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 835c63: je 0x835ca6 */
  if (zf) goto L_835ca6;
L_835c65: /* 835c65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 835c66: mov ecx, esi */
  ecx = esi;
/* 835c68: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x835c6eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 835c6e: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 835c74: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 835c7a: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 835c7d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 835c81: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 835c87: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 835c8b: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 835c91: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 835c94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835c95: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 835c97: push 0xae3b50 */
  { uint32_t v = 0xae3b50u; esp -= 4; W32(esp, v); }
/* 835c9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835c9d: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x835ca3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 835ca3: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_835ca6: /* 835ca6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 835ca7: mov ecx, esi */
  ecx = esi;
/* 835ca9: call 0x6c3b7f */
  esp -= 4; W32(esp, 0x835caeu); SPILL(); f_6c3b7f(); if (g_unwind) return; RELOAD();
/* 835cae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 835cb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 835cb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 835cb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 835cba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 835cbb: mov esp, ebp */
  esp = ebp;
/* 835cbd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 835cbe: ret 8 */
  esp += 12; SPILL(); return;
L_835cc1: /* 835cc1: lea ebx, [esi + 0x194] */
  ebx = (uint32_t)(esi + 0x194u);
/* 835cc7: mov ecx, ebx */
  ecx = ebx;
/* 835cc9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 835ccb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 835cce: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 835cd1: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 835cd7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 835cda: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 835ce0: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 835ce6: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 835cec: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* 835cef: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 835cf2: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 835cf9: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 835d00: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 835d07: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 835d0e: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 835d15: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 835d1c: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 835d1f: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 835d26: mov dword ptr [ebp - 0x38], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xffffffffu);
/* 835d2d: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 835d30: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 835d33: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 835d39: jmp 0x835d41 */
  goto L_835d41;
L_835d3b: /* 835d3b: mov ebx, dword ptr [ebp - 0x8c] */
  ebx = R32((uint32_t)(ebp + 0xffffff74u));
L_835d41: /* 835d41: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 835d44: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 835d4a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 835d4c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 835d4f: jne 0x836760 */
  if (!zf) goto L_836760;
L_835d55: /* 835d55: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 835d58: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 835d5b: jge 0x836760 */
  if ((sf == of)) goto L_836760;
L_835d61: /* 835d61: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 835d64: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 835d65: fcomp dword ptr [0xa110dc] */
  fpu_com(ST0, F32((uint32_t)(0xa110dcu)));
  FPOP();
/* 835d6b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 835d6e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 835d70: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 835d73: jne 0x835d9d */
  if (!zf) goto L_835d9d;
L_835d75: /* 835d75: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 835d78: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 835d7e: fld dword ptr [0xa110dc] */
  { double v = F32((uint32_t)(0xa110dcu)); FPUSH(v); }
/* 835d84: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 835d86: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 835d88: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 835d8b: jp 0x835d98 */
  if (pf) goto L_835d98;
L_835d8d: /* 835d8d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 835d8f: mov dword ptr [ebp + 8], 0x3d4ccccd */
  W32((uint32_t)(ebp + 0x8u), 0x3d4ccccdu);
/* 835d96: jmp 0x835da3 */
  goto L_835da3;
L_835d98: /* 835d98: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 835d9b: jmp 0x835da3 */
  goto L_835da3;
L_835d9d: /* 835d9d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 835da0: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_835da3: /* 835da3: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 835da6: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 835dac: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 835dae: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 835db1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 835db4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 835db7: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 835dbd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 835dc0: and dword ptr [esi + 0x88], 0xfffdffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 835dca: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 835dd0: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 835dd3: mov ecx, edi */
  ecx = edi;
/* 835dd5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 835dd7: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 835dda: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 835ddd: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 835de0: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 835de3: lea edx, [ebp - 0xa8] */
  edx = (uint32_t)(ebp + 0xffffff58u);
/* 835de9: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 835dec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 835ded: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 835df3: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 835df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835df7: mov ecx, esi */
  ecx = esi;
/* 835df9: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 835e03: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 835e0d: call 0x6c8922 */
  esp -= 4; W32(esp, 0x835e12u); SPILL(); f_6c8922(); if (g_unwind) return; RELOAD();
/* 835e12: fld dword ptr [ebp - 0xac] */
  { double v = F32((uint32_t)(ebp + 0xffffff54u)); FPUSH(v); }
/* 835e18: fdiv dword ptr [esi + 0x2dc] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x2dcu)));
/* 835e1e: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 835e24: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 835e2a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 835e2c: fmul dword ptr [eax + 0x3cc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3ccu)));
/* 835e32: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 835e34: fmul dword ptr [eax + 0x3c8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3c8u)));
/* 835e3a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 835e3d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 835e3f: fmul dword ptr [eax + 0x3c4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3c4u)));
/* 835e45: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 835e4b: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 835e4e: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 835e51: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 835e54: fld dword ptr [ebp - 0x130] */
  { double v = F32((uint32_t)(ebp + 0xfffffed0u)); FPUSH(v); }
/* 835e5a: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 835e5c: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 835e62: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 835e64: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 835e6a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 835e6d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 835e73: fld dword ptr [ebp - 0x13c] */
  { double v = F32((uint32_t)(ebp + 0xfffffec4u)); FPUSH(v); }
/* 835e79: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 835e7f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 835e82: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 835e85: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 835e88: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 835e8a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 835e8d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 835e90: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 835e93: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 835e99: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 835e9f: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 835ea2: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 835ea8: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 835eab: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 835ead: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 835eb0: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 835eb3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 835eb5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 835eb8: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 835ebb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 835ebd: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 835ec3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 835ec5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 835ec8: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 835ecb: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 835ece: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 835ed1: fld dword ptr [ebp - 0x16c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe94u)); FPUSH(v); }
/* 835ed7: fadd dword ptr [ebp - 0x118] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffee8u)));
/* 835edd: mov ecx, edi */
  ecx = edi;
/* 835edf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835ee1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835ee3: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 835ee9: mov edx, dword ptr [ebp - 0xc4] */
  edx = R32((uint32_t)(ebp + 0xffffff3cu));
/* 835eef: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 835ef1: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 835ef7: mov edx, dword ptr [ebp - 0xc0] */
  edx = R32((uint32_t)(ebp + 0xffffff40u));
/* 835efd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 835f00: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 835f06: mov edx, dword ptr [ebp - 0xbc] */
  edx = R32((uint32_t)(ebp + 0xffffff44u));
/* 835f0c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 835f0f: fld dword ptr [eax + 0x3c0] */
  { double v = F32((uint32_t)(eax + 0x3c0u)); FPUSH(v); }
/* 835f15: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 835f18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835f1a: fld dword ptr [eax + 0x3bc] */
  { double v = F32((uint32_t)(eax + 0x3bcu)); FPUSH(v); }
/* 835f20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835f22: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 835f25: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 835f28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 835f29: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 835f2c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 835f2f: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 835f35: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 835f37: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 835f39: fadd dword ptr [eax + 0x3b8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x3b8u)));
/* 835f3f: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 835f45: mov edx, esp */
  edx = esp;
/* 835f47: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 835f49: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 835f4c: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 835f52: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 835f55: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 835f58: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 835f5b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 835f5e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 835f61: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 835f64: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 835f67: fld dword ptr [ebp - 0x154] */
  { double v = F32((uint32_t)(ebp + 0xfffffeacu)); FPUSH(v); }
/* 835f6d: mov edx, esp */
  edx = esp;
/* 835f6f: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 835f72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 835f73: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 835f76: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 835f79: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 835f7b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 835f7e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 835f81: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 835f84: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 835f87: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 835f8a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 835f8c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 835f8f: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 835f95: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x835f9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 835f9b: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 835fa1: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 835fa4: jne 0x83677a */
  if (!zf) goto L_83677a;
L_835faa: /* 835faa: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 835fad: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 835fb3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 835fb5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 835fb8: jp 0x83659c */
  if (pf) goto L_83659c;
L_835fbe: /* 835fbe: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 835fc1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 835fc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 835fc4: mov ecx, esi */
  ecx = esi;
/* 835fc6: call dword ptr [edx + 0x138] */
  { uint32_t t = R32((uint32_t)(edx + 0x138u)); esp -= 4; W32(esp, 0x835fccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 835fcc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 835fce: je 0x8360a1 */
  if (zf) goto L_8360a1;
L_835fd4: /* 835fd4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 835fda: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 835fe0: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 835fe3: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 835fe8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835fea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835fec: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 835fef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835ff1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 835ff3: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 835ff6: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 835ff9: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 835ffc: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 835fff: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 836002: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 836005: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 836007: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 836009: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 83600f: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 836012: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 836015: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 836018: fld dword ptr [ebp - 0x148] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb8u)); FPUSH(v); }
/* 83601e: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 836021: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 836027: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 83602d: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 836030: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 836036: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 83603c: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 83603f: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 836045: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 83604b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 83604e: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 836054: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 836056: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 836059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83605a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83605d: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 836063: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 836065: mov ecx, esp */
  ecx = esp;
/* 836067: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 836069: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 83606c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83606f: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 836072: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836075: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 83607b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83607e: mov ecx, esp */
  ecx = esp;
/* 836080: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 836082: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 836088: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83608b: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 836091: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836094: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83609a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83609b: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8360a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8360a1: /* 8360a1: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8360a4: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8360aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8360ac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8360af: jp 0x83659c */
  if (pf) goto L_83659c;
L_8360b5: /* 8360b5: push 0xb61798 */
  { uint32_t v = 0xb61798u; esp -= 4; W32(esp, v); }
/* 8360ba: mov ecx, esi */
  ecx = esi;
/* 8360bc: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8360c2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8360c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8360c4: je 0x8360ef */
  if (zf) goto L_8360ef;
L_8360c6: /* 8360c6: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8360c9: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 8360ce: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8360d4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8360d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8360d6: je 0x8360ef */
  if (zf) goto L_8360ef;
L_8360d8: /* 8360d8: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* 8360de: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8360df: xor ecx, ecx */
  ecx = 0;
/* 8360e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8360e3: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8360e6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8360e7: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8360e9: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
L_8360ef: /* 8360ef: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 8360f5: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8360f8: je 0x83614c */
  if (zf) goto L_83614c;
L_8360fa: /* 8360fa: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8360fd: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 836100: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 836101: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 836104: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836107: mov eax, esp */
  eax = esp;
/* 836109: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83610b: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 83610e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 836111: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 836114: mov ecx, esi */
  ecx = esi;
/* 836116: call 0x6cbd34 */
  esp -= 4; W32(esp, 0x83611bu); SPILL(); f_6cbd34(); if (g_unwind) return; RELOAD();
/* 83611b: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 83611e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836120: je 0x83677a */
  if (zf) goto L_83677a;
L_836126: /* 836126: cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff78u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 83612d: jge 0x836141 */
  if ((sf == of)) goto L_836141;
L_83612f: /* 83612f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 836135: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 836138: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83613b: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83613e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_836141: /* 836141: inc dword ptr [ebp - 0x88] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff78u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffff78u), r);
  }
/* 836147: jmp 0x83659c */
  goto L_83659c;
L_83614c: /* 83614c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83614f: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 836155: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836157: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83615a: jne 0x83623a */
  if (!zf) goto L_83623a;
L_836160: /* 836160: test ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 836166: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83616c: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 83616f: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 836172: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 836175: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 836178: jne 0x8361fb */
  if (!zf) goto L_8361fb;
L_83617e: /* 83617e: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 836181: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 836187: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836189: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83618c: jne 0x8361fb */
  if (!zf) goto L_8361fb;
L_83618e: /* 83618e: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 836191: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 836194: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 836197: fcomp dword ptr [0xa15bb4] */
  fpu_com(ST0, F32((uint32_t)(0xa15bb4u)));
  FPOP();
/* 83619d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83619f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8361a2: jne 0x8361fb */
  if (!zf) goto L_8361fb;
L_8361a4: /* 8361a4: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8361aa: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8361ad: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 8361b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8361b1: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8361b7: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 8361bd: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 8361c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8361c1: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8361c7: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8361cd: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 8361d3: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 8361d9: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8361df: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8361e5: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8361ebu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8361eb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8361ed: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8361ef: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8361f2: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 8361f5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8361f8: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_8361fb: /* 8361fb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8361fe: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 836201: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 836203: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836204: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 836207: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 836208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836209: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 83620c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83620f: mov ecx, esp */
  ecx = esp;
/* 836211: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 836213: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 836216: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 836219: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 83621c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83621f: mov ecx, esi */
  ecx = esi;
/* 836221: call dword ptr [edx + 0x124] */
  { uint32_t t = R32((uint32_t)(edx + 0x124u)); esp -= 4; W32(esp, 0x836227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 836227: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83622a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 836231: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 836232: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 836233: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 836234: mov esp, ebp */
  esp = ebp;
/* 836236: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 836237: ret 8 */
  esp += 12; SPILL(); return;
L_83623a: /* 83623a: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 83623d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83623f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836240: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 836243: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836246: mov ecx, esp */
  ecx = esp;
/* 836248: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83624a: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 83624d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 836250: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 836253: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836256: mov ecx, esi */
  ecx = esi;
/* 836258: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x83625eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83625e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 836261: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 836264: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 836267: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83626a: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 83626d: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 836270: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 836273: mov dword ptr [ebp - 0xb0], eax */
  W32((uint32_t)(ebp + 0xffffff50u), eax);
/* 836279: mov dword ptr [ebp - 0xb8], ecx */
  W32((uint32_t)(ebp + 0xffffff48u), ecx);
/* 83627f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 836281: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 836287: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83628a: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 83628d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83628f: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 836292: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 836294: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 836297: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 836299: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83629c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83629f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8362a1: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 8362a7: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8362aa: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8362ac: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8362ae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8362b0: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8362b3: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8362b6: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8362b9: fsub dword ptr [ebp - 0x160] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffea0u)));
/* 8362bf: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 8362c5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8362cb: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8362ce: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8362d1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8362d3: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8362d6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8362d9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8362dc: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8362df: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 8362e2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8362e5: fld dword ptr [ebp - 0x178] */
  { double v = F32((uint32_t)(ebp + 0xfffffe88u)); FPUSH(v); }
/* 8362eb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8362ee: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8362f1: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 8362f4: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8362f7: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8362fa: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8362fd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 836300: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 836303: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 836305: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 836308: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 83630b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83630d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 836313: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836315: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836318: jne 0x836532 */
  if (!zf) goto L_836532;
L_83631e: /* 83631e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 836321: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 836327: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836329: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83632c: jne 0x836352 */
  if (!zf) goto L_836352;
L_83632e: /* 83632e: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 836331: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 836337: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 83633a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83633d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 836343: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 836346: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 836349: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83634f: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
L_836352: /* 836352: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 836358: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83635a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83635c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83635e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836360: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836362: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 836365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836366: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836369: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 83636f: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 836371: mov ecx, esp */
  ecx = esp;
/* 836373: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 836375: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 836378: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83637b: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 83637e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836381: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 836384: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836387: mov ecx, esp */
  ecx = esp;
/* 836389: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83638b: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 83638e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 836391: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 836394: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836397: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83639d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83639e: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8363a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8363a4: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8363a7: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8363ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8363af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8363b2: jp 0x836532 */
  if (pf) goto L_836532;
L_8363b8: /* 8363b8: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8363bb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8363bd: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 8363c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8363c5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8363c8: je 0x8364f7 */
  if (zf) goto L_8364f7;
L_8363ce: /* 8363ce: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8363d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8363d2: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8363d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8363d8: mov ecx, esp */
  ecx = esp;
/* 8363da: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8363dc: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8363df: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8363e2: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8363e5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8363e8: mov ecx, esi */
  ecx = esi;
/* 8363ea: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x8363f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8363f0: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 8363f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8363f7: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8363fa: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x836400u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 836400: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 836403: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 836404: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 83640a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83640b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 83640e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83640f: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 836412: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 836413: lea eax, [ebp - 0x124] */
  eax = (uint32_t)(ebp + 0xfffffedcu);
/* 836419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83641a: mov ecx, esi */
  ecx = esi;
/* 83641c: call 0x6c6163 */
  esp -= 4; W32(esp, 0x836421u); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 836421: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 836427: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83642d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83642f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836432: jne 0x836487 */
  if (!zf) goto L_836487;
L_836434: /* 836434: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 836437: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83643d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83643f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836442: jne 0x836487 */
  if (!zf) goto L_836487;
L_836444: /* 836444: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 836447: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83644d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83644f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 836452: jp 0x836487 */
  if (pf) goto L_836487;
L_836454: /* 836454: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 83645a: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 836461: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 836464: fld dword ptr [ebp - 0xb4] */
  { double v = F32((uint32_t)(ebp + 0xffffff4cu)); FPUSH(v); }
/* 83646a: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83646d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83646f: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 836475: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 836478: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83647a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 836480: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836482: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 836485: jnp 0x83648e */
  if (!pf) goto L_83648e;
L_836487: /* 836487: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_83648e: /* 83648e: mov ebx, dword ptr [esi + 0x17c] */
  ebx = R32((uint32_t)(esi + 0x17cu));
/* 836494: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83649a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83649c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83649e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8364a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8364a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8364a4: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8364a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8364a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8364ab: mov eax, esp */
  eax = esp;
/* 8364ad: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8364af: mov ebx, dword ptr [esi + 0x180] */
  ebx = R32((uint32_t)(esi + 0x180u));
/* 8364b5: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8364b8: mov ebx, dword ptr [esi + 0x184] */
  ebx = R32((uint32_t)(esi + 0x184u));
/* 8364be: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8364c1: mov ebx, dword ptr [ebp - 0x6c] */
  ebx = R32((uint32_t)(ebp + 0xffffff94u));
/* 8364c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8364c7: mov eax, esp */
  eax = esp;
/* 8364c9: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8364cb: mov ebx, dword ptr [ebp - 0x68] */
  ebx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8364ce: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8364d1: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8364d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8364d5: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8364d8: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8364deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8364de: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8364e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8364e3: jne 0x8364f5 */
  if (!zf) goto L_8364f5;
L_8364e5: /* 8364e5: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8364e8: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 8364ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8364f0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8364f3: jne 0x836532 */
  if (!zf) goto L_836532;
L_8364f5: /* 8364f5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
L_8364f7: /* 8364f7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8364fa: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8364fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8364fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836500: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 836501: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 836504: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836507: mov eax, esp */
  eax = esp;
/* 836509: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83650b: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 83650e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 836511: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 836514: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 836517: mov ecx, esi */
  ecx = esi;
/* 836519: call dword ptr [edx + 0x124] */
  { uint32_t t = R32((uint32_t)(edx + 0x124u)); esp -= 4; W32(esp, 0x83651fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83651f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 836522: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 836529: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83652a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83652b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83652c: mov esp, ebp */
  esp = ebp;
/* 83652e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83652f: ret 8 */
  esp += 12; SPILL(); return;
L_836532: /* 836532: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 836538: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83653b: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 83653e: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 836541: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 836547: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836548: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 83654b: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 836551: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 836557: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 836558: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83655e: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 836564: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 83656a: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 836570: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 836576: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 83657c: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x836582u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 836582: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 836584: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 836587: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 83658a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 83658d: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* 836593: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 836596: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 836599: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_83659c: /* 83659c: test dword ptr [esi + 0x88], 0x22000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x22000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8365a6: jne 0x835d3b */
  if (!zf) goto L_835d3b;
L_8365ac: /* 8365ac: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8365b2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8365b5: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 8365b8: mov ebx, dword ptr [esi + 0x16c] */
  ebx = R32((uint32_t)(esi + 0x16cu));
/* 8365be: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8365c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8365c5: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 8365c8: lea edx, [ebp - 0x19c] */
  edx = (uint32_t)(ebp + 0xfffffe64u);
/* 8365ce: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8365d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8365d5: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 8365db: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 8365e1: add ebx, 0x3b8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8365e7: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 8365ed: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 8365f3: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 8365f9: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8365ffu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8365ff: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 836602: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 836605: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 836608: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 83660b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83660d: mov eax, edi */
  eax = edi;
/* 83660f: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 836611: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 836617: mov ecx, dword ptr [ebp - 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 83661d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83661f: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 836625: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 83662b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83662e: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 836634: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 83663a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83663d: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 836643: fcomp dword ptr [ebp - 0x70] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff90u)));
  FPOP();
/* 836646: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836648: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83664b: jnp 0x83665d */
  if (!pf) goto L_83665d;
L_83664d: /* 83664d: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 836650: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 836656: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836658: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83665b: jne 0x8366b4 */
  if (!zf) goto L_8366b4;
L_83665d: /* 83665d: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 836660: mov edx, edi */
  edx = edi;
/* 836662: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 836664: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 836667: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 836669: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83666c: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83666e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 836670: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 836676: fsub dword ptr [ebp - 0x70] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff90u)));
/* 836679: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83667c: fsub dword ptr [ebp - 0x74] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 83667f: fld dword ptr [ebp - 0x10c] */
  { double v = F32((uint32_t)(ebp + 0xfffffef4u)); FPUSH(v); }
/* 836685: fsub dword ptr [ebp - 0x78] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff88u)));
/* 836688: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 83668e: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 836694: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 836696: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 83669c: mov ecx, dword ptr [ebp - 0xd0] */
  ecx = R32((uint32_t)(ebp + 0xffffff30u));
/* 8366a2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8366a5: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 8366ab: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 8366b1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_8366b4: /* 8366b4: mov ecx, edi */
  ecx = edi;
/* 8366b6: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8366bcu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8366bc: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8366bf: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 8366c5: fld dword ptr [ecx + 0x3d4] */
  { double v = F32((uint32_t)(ecx + 0x3d4u)); FPUSH(v); }
/* 8366cb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8366cd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8366cf: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8366d2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8366d4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8366d6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8366d8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8366db: jne 0x835d3b */
  if (!zf) goto L_835d3b;
L_8366e1: /* 8366e1: lea edx, [ebp - 0x190] */
  edx = (uint32_t)(ebp + 0xfffffe70u);
/* 8366e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8366e8: mov ecx, edi */
  ecx = edi;
/* 8366ea: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8366f0u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8366f0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8366f2: mov ecx, edi */
  ecx = edi;
/* 8366f4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8366f6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8366f9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8366fc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8366ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836702: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 836708: fld dword ptr [ecx + 0x3d4] */
  { double v = F32((uint32_t)(ecx + 0x3d4u)); FPUSH(v); }
/* 83670e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 836710: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 836712: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 836714: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 836716: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 836719: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 83671c: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 83671f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 836722: jmp 0x835d3b */
  goto L_835d3b;
L_836760: /* 836760: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 836766: mov edx, dword ptr [ebp - 0x94] */
  edx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 83676c: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 836772: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 836774: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 836777: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
L_83677a: /* 83677a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83677d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83677e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83677f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 836786: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 836787: mov esp, ebp */
  esp = ebp;
/* 836789: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83678a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_836727(void) {
  LOAD_REGS();
L_836727: /* 836727: mov edx, dword ptr [ebp - 0x100] */
  edx = R32((uint32_t)(ebp + 0xffffff00u));
/* 83672d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 836732: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 836738: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836739: mov dword ptr [ebp - 0xc8], edx */
  W32((uint32_t)(ebp + 0xffffff38u), edx);
/* 83673f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x836744u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_836744(); return;
}

void f_836744(void) {
  LOAD_REGS();
L_836744: /* 836744: push 0xa15b84 */
  { uint32_t v = 0xa15b84u; esp -= 4; W32(esp, v); }
/* 836749: push 0xae3b9c */
  { uint32_t v = 0xae3b9cu; esp -= 4; W32(esp, v); }
/* 83674e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x836754u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 836754: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 836757: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836759: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83675b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x836760u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 836760: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 836766: mov edx, dword ptr [ebp - 0x94] */
  edx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 83676c: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 836772: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 836774: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 836777: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 83677a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83677d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83677e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83677f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 836786: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 836787: mov esp, ebp */
  esp = ebp;
/* 836789: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83678a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_836a90(void) {
  LOAD_REGS();
L_836a90: /* 836a90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 836a91: mov ebp, esp */
  ebp = esp;
/* 836a93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 836a95: push 0x9d3360 */
  { uint32_t v = 0x9d3360u; esp -= 4; W32(esp, v); }
/* 836a9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 836aa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836aa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 836aa8: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836aae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 836aaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 836ab0: mov esi, ecx */
  esi = ecx;
/* 836ab2: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 836ab8: xor ebx, ebx */
  ebx = 0;
/* 836aba: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836abc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 836abd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 836ac0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 836ac3: je 0x836b27 */
  if (zf) goto L_836b27;
L_836ac5: /* 836ac5: cmp byte ptr [esi + 0xc8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xc8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 836acb: jne 0x836b27 */
  if (!zf) goto L_836b27;
L_836acd: /* 836acd: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836ad0: jne 0x836b27 */
  if (!zf) goto L_836b27;
L_836ad2: /* 836ad2: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 836ad8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 836ada: je 0x836ae5 */
  if (zf) goto L_836ae5;
L_836adc: /* 836adc: test byte ptr [eax + 0x350], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x350u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836ae3: jne 0x836b14 */
  if (!zf) goto L_836b14;
L_836ae5: /* 836ae5: mov ecx, esi */
  ecx = esi;
/* 836ae7: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x836aedu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 836aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836aee: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 836af3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 836af5: push 0xae3bac */
  { uint32_t v = 0xae3bacu; esp -= 4; W32(esp, v); }
/* 836afa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 836afb: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x836b01u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 836b01: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 836b07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 836b09: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 836b0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 836b0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 836b0e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x836b14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_836b14: /* 836b14: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 836b17: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 836b1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 836b1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 836b20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 836b21: mov esp, ebp */
  esp = ebp;
/* 836b23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 836b24: ret 8 */
  esp += 12; SPILL(); return;
L_836b27: /* 836b27: lea edi, [esi + 0x194] */
  edi = (uint32_t)(esi + 0x194u);
/* 836b2d: mov ecx, edi */
  ecx = edi;
/* 836b2f: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x836b35u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 836b35: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 836b37: je 0x836b43 */
  if (zf) goto L_836b43;
L_836b39: /* 836b39: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 836b3b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 836b3e: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 836b41: jmp 0x836b57 */
  goto L_836b57;
L_836b43: /* 836b43: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 836b46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836b47: mov ecx, edi */
  ecx = edi;
/* 836b49: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x836b4fu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 836b4f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 836b51: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 836b54: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
L_836b57: /* 836b57: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 836b5d: fld dword ptr [eax + 0x3f4] */
  { double v = F32((uint32_t)(eax + 0x3f4u)); FPUSH(v); }
/* 836b63: mov eax, dword ptr [esi + 0x400] */
  eax = R32((uint32_t)(esi + 0x400u));
/* 836b69: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 836b6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 836b70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 836b71: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 836b73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 836b74: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 836b77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836b78: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 836b7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836b7c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836b7f: mov eax, esp */
  eax = esp;
/* 836b81: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 836b83: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 836b86: mov ecx, esi */
  ecx = esi;
/* 836b88: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 836b8b: call 0x6c6b40 */
  esp -= 4; W32(esp, 0x836b90u); SPILL(); f_6c6b40(); if (g_unwind) return; RELOAD();
/* 836b90: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 836b96: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 836b98: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 836b9b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 836b9e: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 836ba1: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 836ba7: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 836bad: and eax, 0xfffdffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 836bb2: mov ecx, esi */
  ecx = esi;
/* 836bb4: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 836bb7: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 836bbd: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x836bc2u); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 836bc2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 836bc4: jne 0x836c11 */
  if (!zf) goto L_836c11;
L_836bc6: /* 836bc6: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 836bcc: add ecx, 0x3b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 836bd2: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x836bd8u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 836bd8: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 836bdb: fcomp dword ptr [0xa15be4] */
  fpu_com(ST0, F32((uint32_t)(0xa15be4u)));
  FPOP();
/* 836be1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836be3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836be6: je 0x836c11 */
  if (zf) goto L_836c11;
L_836be8: /* 836be8: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 836bef: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 836bf2: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 836bf9: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 836bfc: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 836c03: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 836c06: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 836c09: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 836c0c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 836c0f: jmp 0x836c2e */
  goto L_836c2e;
L_836c11: /* 836c11: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 836c17: add ecx, 0x3b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 836c1d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 836c1f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 836c22: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 836c25: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 836c28: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 836c2b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_836c2e: /* 836c2e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 836c31: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 836c37: fadd dword ptr [esi + 0x190] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x190u)));
/* 836c3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 836c3e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 836c41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 836c42: fadd dword ptr [esi + 0x18c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x18cu)));
/* 836c48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 836c49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 836c4a: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 836c4d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 836c50: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 836c53: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 836c56: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 836c59: fadd dword ptr [esi + 0x188] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x188u)));
/* 836c5f: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 836c62: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 836c69: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 836c70: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 836c73: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 836c7a: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 836c81: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 836c84: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 836c8b: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 836c8e: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 836c95: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 836c98: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 836c9f: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 836ca2: mov dword ptr [ebp - 0x44], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xffffffffu);
/* 836ca9: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 836cac: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 836cb2: mov ecx, edi */
  ecx = edi;
/* 836cb4: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 836cb6: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 836cb9: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 836cbc: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 836cbf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 836cc1: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 836cc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836cc5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836cc8: mov eax, esp */
  eax = esp;
/* 836cca: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 836ccc: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 836ccf: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 836cd2: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 836cd5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 836cd8: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 836cdb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836cde: mov eax, esp */
  eax = esp;
/* 836ce0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 836ce2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 836ce5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 836ce8: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 836ceb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 836cee: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 836cf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 836cf5: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x836cfbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 836cfb: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 836cfe: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 836d04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836d06: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 836d09: jp 0x83702a */
  if (pf) goto L_83702a;
L_836d0f: /* 836d0f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 836d12: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 836d15: lea edx, [esi + 0x44c] */
  edx = (uint32_t)(esi + 0x44cu);
/* 836d1b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 836d1d: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 836d20: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 836d23: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 836d29: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 836d2c: fld dword ptr [ecx + 0x3cc] */
  { double v = F32((uint32_t)(ecx + 0x3ccu)); FPUSH(v); }
/* 836d32: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 836d38: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 836d3f: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 836d46: mov dword ptr [ebp - 0x18], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xbf800000u);
/* 836d4d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836d4f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836d52: jne 0x836d5b */
  if (!zf) goto L_836d5b;
L_836d54: /* 836d54: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
L_836d5b: /* 836d5b: mov ebx, dword ptr [0xcfa578] */
  ebx = R32((uint32_t)(0xcfa578u));
/* 836d61: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 836d67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 836d68: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 836d6b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x836d6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 836d6d: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 836d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836d71: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 836d77: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x836d79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 836d79: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 836d7c: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 836d7f: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 836d85: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 836d88: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 836d8b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 836d8d: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 836d90: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 836d96: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 836d99: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836d9b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836d9e: je 0x836da2 */
  if (zf) goto L_836da2;
L_836da0: /* 836da0: fchs  */
  ST0 = -ST0;
L_836da2: /* 836da2: fcomp dword ptr [0xa08920] */
  fpu_com(ST0, F32((uint32_t)(0xa08920u)));
  FPOP();
/* 836da8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836daa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 836dad: jp 0x836e72 */
  if (pf) goto L_836e72;
L_836db3: /* 836db3: fcom dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
/* 836db9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836dbb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 836dbe: jp 0x836e72 */
  if (pf) goto L_836e72;
L_836dc4: /* 836dc4: fcomp dword ptr [0xa159ac] */
  fpu_com(ST0, F32((uint32_t)(0xa159acu)));
  FPOP();
/* 836dca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836dcc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836dcf: jne 0x836e74 */
  if (!zf) goto L_836e74;
L_836dd5: /* 836dd5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 836ddb: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 836de1: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 836de4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 836de7: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 836dea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836deb: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 836dee: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 836df1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 836df3: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 836df6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836df9: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 836dfc: mov ecx, esp */
  ecx = esp;
/* 836dfe: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 836e01: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836e04: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 836e07: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 836e0a: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 836e0d: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 836e10: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 836e12: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 836e15: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 836e18: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 836e1b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 836e1e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 836e21: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836e24: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 836e2a: mov ecx, esp */
  ecx = esp;
/* 836e2c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 836e2e: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 836e34: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 836e37: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 836e3d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836e40: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 836e43: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836e46: mov ecx, esp */
  ecx = esp;
/* 836e48: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 836e4a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 836e4d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 836e50: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 836e53: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836e56: mov ecx, esi */
  ecx = esi;
/* 836e58: call dword ptr [edx + 0x134] */
  { uint32_t t = R32((uint32_t)(edx + 0x134u)); esp -= 4; W32(esp, 0x836e5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 836e5e: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 836e61: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 836e64: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 836e6a: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 836e6d: jmp 0x837056 */
  goto L_837056;
L_836e72: /* 836e72: fstp st(0) */
  STI(0) = ST0; FPOP();
L_836e74: /* 836e74: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 836e77: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 836e79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836e7a: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 836e7d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836e80: mov ecx, esp */
  ecx = esp;
/* 836e82: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 836e84: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 836e87: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 836e8a: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 836e8d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836e90: mov ecx, esi */
  ecx = esi;
/* 836e92: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x836e98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 836e98: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 836e9b: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 836e9e: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 836ea1: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 836ea4: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 836ea7: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 836eaa: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 836ead: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 836eb0: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 836eb3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 836eb5: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 836eb8: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 836ebb: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 836ebe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 836ec0: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 836ec3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 836ec5: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 836ec8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 836eca: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 836ecd: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 836ed0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 836ed2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 836ed5: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 836ed8: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 836eda: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 836edc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 836ede: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 836ee1: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 836ee4: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 836ee7: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 836eea: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 836eed: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 836ef3: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 836ef6: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 836ef9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 836efb: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 836efe: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 836f01: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 836f04: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 836f07: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 836f0a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 836f0d: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 836f10: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 836f13: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 836f16: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 836f19: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 836f1c: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 836f1f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 836f21: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 836f23: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 836f26: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 836f29: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 836f2b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 836f31: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836f33: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 836f35: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 836f38: jne 0x837056 */
  if (!zf) goto L_837056;
L_836f3e: /* 836f3e: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 836f44: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 836f46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836f48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836f4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836f4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836f4e: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 836f51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836f52: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836f55: mov eax, esp */
  eax = esp;
/* 836f57: mov ecx, edi */
  ecx = edi;
/* 836f59: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 836f5b: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 836f5d: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 836f60: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 836f63: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 836f66: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 836f69: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 836f6c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836f6f: mov eax, esp */
  eax = esp;
/* 836f71: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 836f73: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 836f76: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 836f79: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 836f7c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 836f7f: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 836f85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 836f86: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x836f8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 836f8c: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 836f8f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 836f95: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 836f97: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 836f9a: jp 0x837056 */
  if (pf) goto L_837056;
L_836fa0: /* 836fa0: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 836fa3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 836fa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836fa6: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 836fa9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836fac: mov ecx, esp */
  ecx = esp;
/* 836fae: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 836fb0: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 836fb3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 836fb6: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 836fb9: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 836fbc: mov ecx, esi */
  ecx = esi;
/* 836fbe: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x836fc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 836fc4: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 836fc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 836fc8: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 836fcb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 836fcc: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 836fcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 836fd0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 836fd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 836fd4: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 836fda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 836fdb: mov ecx, esi */
  ecx = esi;
/* 836fdd: call 0x6c6163 */
  esp -= 4; W32(esp, 0x836fe2u); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 836fe2: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 836fe4: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 836fea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836fec: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 836fee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836ff0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836ff2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 836ff4: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 836ff7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 836ff8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 836ffb: mov edx, esp */
  edx = esp;
/* 836ffd: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 836fff: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 837002: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 837005: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 837008: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 83700b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83700e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 837011: mov edx, esp */
  edx = esp;
/* 837013: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 837015: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 837018: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 83701b: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83701e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83701f: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 837022: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x837028u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 837028: jmp 0x837056 */
  goto L_837056;
L_83702a: /* 83702a: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 837031: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 837034: lea eax, [esi + 0x44c] */
  eax = (uint32_t)(esi + 0x44cu);
/* 83703a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83703c: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 837043: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 837046: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 83704d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 837050: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 837053: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_837056: /* 837056: test dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 837060: jne 0x8370c3 */
  if (!zf) goto L_8370c3;
L_837062: /* 837062: test dword ptr [esi + 0x390], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83706c: jne 0x8370c3 */
  if (!zf) goto L_8370c3;
L_83706e: /* 83706e: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 837074: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 837077: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 83707a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83707b: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 837081: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 837087: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 83708a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83708b: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 837091: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 837094: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83709a: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 83709d: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8370a0: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8370a3: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8370a9u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8370a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8370ab: mov dword ptr [esi + 0x188], ecx */
  W32((uint32_t)(esi + 0x188u), ecx);
/* 8370b1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8370b4: mov dword ptr [esi + 0x18c], edx */
  W32((uint32_t)(esi + 0x18cu), edx);
/* 8370ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8370bd: mov dword ptr [esi + 0x190], eax */
  W32((uint32_t)(esi + 0x190u), eax);
L_8370c3: /* 8370c3: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 8370c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8370cc: and eax, 0xfdffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfdffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8370d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8370d2: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 8370d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8370d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8370e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8370e1: mov esp, ebp */
  esp = ebp;
/* 8370e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8370e4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8370e7(void) {
  LOAD_REGS();
L_8370e7: /* 8370e7: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 8370ed: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8370f2: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 8370f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8370f9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 8370ff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x837104u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_837104(); return;
}

void f_837104(void) {
  LOAD_REGS();
L_837104: /* 837104: push 0xa15bb8 */
  { uint32_t v = 0xa15bb8u; esp -= 4; W32(esp, v); }
/* 837109: push 0xae3be0 */
  { uint32_t v = 0xae3be0u; esp -= 4; W32(esp, v); }
/* 83710e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x837114u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 837114: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 837117: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 837119: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83711b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x837120u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_837120: guest_badaddr(0x837120); return;
}

void f_8372e0(void) {
  LOAD_REGS();
L_8372e0: /* 8372e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8372e1: mov ebp, esp */
  ebp = esp;
/* 8372e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8372e5: push 0x9d3370 */
  { uint32_t v = 0x9d3370u; esp -= 4; W32(esp, v); }
/* 8372ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8372f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8372f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8372f8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8372fb: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 837300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 837301: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837302: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 837303: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 837306: mov ebx, ecx */
  ebx = ecx;
/* 837308: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837309: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 83730c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 837313: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x837319u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 837319: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 83731f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 837320: push 0x8e */
  { uint32_t v = 0x8eu; esp -= 4; W32(esp, v); }
/* 837325: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837326: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 83732c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83732f: mov eax, esp */
  eax = esp;
/* 837331: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 837333: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 83733a: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83733d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 83733f: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 837346: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 837349: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 83734c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83734f: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 837356: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 837359: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 83735c: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 83735f: mov eax, esp */
  eax = esp;
/* 837361: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 837363: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 837366: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 837369: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 83736c: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 83736f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 837372: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 837375: mov eax, esp */
  eax = esp;
/* 837377: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 837379: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 83737c: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 83737f: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 837382: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 837385: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 83738a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83738b: call dword ptr [edx + 0xd8] */
  { uint32_t t = R32((uint32_t)(edx + 0xd8u)); esp -= 4; W32(esp, 0x837391u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 837391: mov edi, eax */
  edi = eax;
L_837393: /* 837393: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 837395: je 0x837498 */
  if (zf) goto L_837498;
L_83739b: /* 83739b: mov eax, ebx */
  eax = ebx;
/* 83739d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8373a0: /* 8373a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8373a2: je 0x8373b2 */
  if (zf) goto L_8373b2;
L_8373a4: /* 8373a4: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8373a7: je 0x837491 */
  if (zf) goto L_837491;
L_8373ad: /* 8373ad: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 8373b0: jmp 0x8373a0 */
  goto L_8373a0;
L_8373b2: /* 8373b2: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 8373b5: test dword ptr [esi + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8373bf: jne 0x8374a1 */
  if (!zf) goto L_8374a1;
L_8373c5: /* 8373c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8373c7: je 0x837491 */
  if (zf) goto L_837491;
L_8373cd: /* 8373cd: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 8373d2: mov ecx, esi */
  ecx = esi;
/* 8373d4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8373dau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8373da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8373dc: je 0x837491 */
  if (zf) goto L_837491;
L_8373e2: /* 8373e2: test byte ptr [esi + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8373e9: je 0x837491 */
  if (zf) goto L_837491;
L_8373ef: /* 8373ef: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8373f2: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 8373f5: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8373f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8373f9: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8373fc: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 8373ff: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 837402: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 837405: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 837408: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 83740b: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 83740e: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 837411: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x837417u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 837417: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 837419: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 83741c: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83741f: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 837425: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 837428: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 83742b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83742e: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 837431: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 837434: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 837437: mov eax, dword ptr [ebx + 0x16c] */
  eax = R32((uint32_t)(ebx + 0x16cu));
/* 83743d: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 837443: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 837445: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 837448: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 83744b: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 83744e: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 837454: jne 0x837480 */
  if (!zf) goto L_837480;
L_837456: /* 837456: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 837459: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 83745c: fadd dword ptr [edi + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xcu)));
/* 83745f: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 837462: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
L_837465: /* 837465: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 837467: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 83746a: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 83746d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 837470: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 837477: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 837478: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 837479: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83747a: mov esp, ebp */
  esp = ebp;
/* 83747c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83747d: ret 0x1c */
  esp += 32; SPILL(); return;
L_837480: /* 837480: fsubr dword ptr [edi + 0x10] */
  ST0 = (F32((uint32_t)(edi + 0x10u))) - ST0;
/* 837483: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 837486: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 837489: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 83748c: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 83748f: jmp 0x837465 */
  goto L_837465;
L_837491: /* 837491: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 837493: jmp 0x837393 */
  goto L_837393;
L_837498: /* 837498: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 83749b: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8374a1u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
L_8374a1: /* 8374a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8374a4: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8374a7: mov ecx, eax */
  ecx = eax;
/* 8374a9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8374ab: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8374ae: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8374b1: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 8374b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8374b5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8374b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8374bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8374bc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8374c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8374c4: mov esp, ebp */
  esp = ebp;
/* 8374c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8374c7: ret 0x1c */
  esp += 32; SPILL(); return;
}
