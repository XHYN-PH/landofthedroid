#include "recomp.h"
#include "rec_mod.h"

void f_7931dd(void) {
  LOAD_REGS();
  goto L_7931dd;
L_7931bd: /* 7931bd: cmp edx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7931c0: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7931c3: jg 0x7932de */
  if ((!zf && sf == of)) goto L_7932de;
L_7931c9: /* 7931c9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_7931cc: /* 7931cc: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7931cf: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* 7931d2: jg 0x7932d8 */
  if ((!zf && sf == of)) goto L_7932d8;
L_7931d8: /* 7931d8: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7931db: jmp 0x7931e0 */
  goto L_7931e0;
L_7931dd: /* 7931dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7931e0: /* 7931e0: cmp ebx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7931e3: jg 0x7932d2 */
  if ((!zf && sf == of)) goto L_7932d2;
L_7931e9: /* 7931e9: mov ecx, dword ptr [ebx*4 + 0xb221f8] */
  ecx = R32((uint32_t)(ebx*4 + 0xb221f8u));
/* 7931f0: xor ecx, dword ptr [eax*4 + 0xb321f8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax*4 + 0xb321f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7931f7: mov edi, ebx */
  edi = ebx;
/* 7931f9: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7931fc: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7931fe: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 793201: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 793203: xor ecx, dword ptr [edx*4 + 0xb421f8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx*4 + 0xb421f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79320a: mov esi, dword ptr [esi + ecx*4 + 4] */
  esi = R32((uint32_t)(esi + ecx*4 + 0x4u));
L_79320e: /* 79320e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793210: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 793216: je 0x7932c9 */
  if (zf) goto L_7932c9;
L_79321c: /* 79321c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 79321e: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793224: je 0x7932bb */
  if (zf) goto L_7932bb;
L_79322a: /* 79322a: cmp dword ptr [esi + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79322d: jne 0x7932bb */
  if (!zf) goto L_7932bb;
L_793233: /* 793233: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 793239: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 79323b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79323d: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793243u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793243: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 793245: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 793247: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793248: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 79324b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79324c: mov ecx, eax */
  ecx = eax;
/* 79324e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x793251u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793251: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793254: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793255: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 793258: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x79325eu); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 79325e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 793261: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 793264: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 793267: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 79326a: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 79326d: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 793270: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 793273: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 793276: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 793279: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 79327c: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x793282u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 793282: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 793285: fcomp dword ptr [ebp - 0x34] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffccu)));
  FPOP();
/* 793288: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79328a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79328d: jp 0x7932bb */
  if (pf) goto L_7932bb;
L_79328f: /* 79328f: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 793295: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 793297: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 793299: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x79329fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 79329f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7932a1: je 0x7932ac */
  if (zf) goto L_7932ac;
L_7932a3: /* 7932a3: mov dword ptr [eax + 0x2c], 0 */
  W32((uint32_t)(eax + 0x2cu), 0x0u);
/* 7932aa: jmp 0x7932ae */
  goto L_7932ae;
L_7932ac: /* 7932ac: xor eax, eax */
  eax = 0;
L_7932ae: /* 7932ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7932b0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7932b3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7932b6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7932b8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7932bb: /* 7932bb: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7932be: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7932c1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7932c4: jmp 0x79320e */
  goto L_79320e;
L_7932c9: /* 7932c9: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7932cc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7932cd: jmp 0x7931e0 */
  goto L_7931e0;
L_7932d2: /* 7932d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7932d3: jmp 0x7931cc */
  goto L_7931cc;
L_7932d8: /* 7932d8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7932d9: jmp 0x7931bd */
  goto L_7931bd;
L_7932de: /* 7932de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7932e1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7932e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7932e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7932e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7932ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7932ee: mov esp, ebp */
  esp = ebp;
/* 7932f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7932f1: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_7932f4(void) {
  LOAD_REGS();
L_7932f4: /* 7932f4: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7932f7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7932fc: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7932ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793300: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 793303: call 0x99caf8 */
  esp -= 4; W32(esp, 0x793308u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_793308(); return;
}

void f_793308(void) {
  LOAD_REGS();
L_793308: /* 793308: push 0xa0a5e0 */
  { uint32_t v = 0xa0a5e0u; esp -= 4; W32(esp, v); }
/* 79330d: push 0xacae2c */
  { uint32_t v = 0xacae2cu; esp -= 4; W32(esp, v); }
/* 793312: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x793318u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 793318: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79331b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79331d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79331f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x793324u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_793324: guest_badaddr(0x793324); return;
}

void f_7933c0(void) {
  LOAD_REGS();
L_7933c0: /* 7933c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7933c1: mov ebp, esp */
  ebp = esp;
/* 7933c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7933c5: push 0x9ccee0 */
  { uint32_t v = 0x9ccee0u; esp -= 4; W32(esp, v); }
/* 7933ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7933d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7933d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7933d8: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7933db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7933dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7933dd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7933e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7933e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7933e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7933e6: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7933e9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7933f0: jne 0x79340a */
  if (!zf) goto L_79340a;
L_7933f2: /* 7933f2: push 0x4b8 */
  { uint32_t v = 0x4b8u; esp -= 4; W32(esp, v); }
/* 7933f7: push 0xacae34 */
  { uint32_t v = 0xacae34u; esp -= 4; W32(esp, v); }
/* 7933fc: push 0xacae44 */
  { uint32_t v = 0xacae44u; esp -= 4; W32(esp, v); }
/* 793401: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x793407u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 793407: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79340a: /* 79340a: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 79340d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 793410: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 793413: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 793416: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 79341c: mov edi, eax */
  edi = eax;
/* 79341e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 793420: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 793423: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 793426: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 793429: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79342b: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 79342e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 793431: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 793434: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 793437: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 79343a: mov dword ptr [ebp + 0x18], edi */
  W32((uint32_t)(ebp + 0x18u), edi);
/* 79343d: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 793440: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 793446: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 793449: mov edi, eax */
  edi = eax;
/* 79344b: mov dword ptr [ebp + 0x14], ebx */
  W32((uint32_t)(ebp + 0x14u), ebx);
/* 79344e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 793450: mov dword ptr [ebp + 0x1c], ebx */
  W32((uint32_t)(ebp + 0x1cu), ebx);
/* 793453: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 793456: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 793459: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79345b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 79345e: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 793461: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 793464: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 793467: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793468: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 79346b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79346c: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 79346f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793470: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 793473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793474: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 793477: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793478: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79347b: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 79347e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79347f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793480: mov dword ptr [ebp + 0x20], ebx */
  W32((uint32_t)(ebp + 0x20u), ebx);
/* 793483: mov dword ptr [ebp + 0x24], edi */
  W32((uint32_t)(ebp + 0x24u), edi);
/* 793486: call 0x6cce9b */
  esp -= 4; W32(esp, 0x79348bu); SPILL(); f_6cce9b(); if (g_unwind) return; RELOAD();
/* 79348b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 79348e: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 793491: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 793494: inc dword ptr [0xb521fc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb521fcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xb521fcu), r);
  }
L_79349a: /* 79349a: cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79349d: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7934a0: jg 0x79365f */
  if ((!zf && sf == of)) goto L_79365f;
L_7934a6: /* 7934a6: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
L_7934a9: /* 7934a9: cmp ecx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7934ac: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7934af: jg 0x793659 */
  if ((!zf && sf == of)) goto L_793659;
L_7934b5: /* 7934b5: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
L_7934b8: /* 7934b8: cmp eax, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7934bb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7934be: jg 0x793653 */
  if ((!zf && sf == of)) goto L_793653;
L_7934c4: /* 7934c4: mov ebx, dword ptr [eax*4 + 0xb221f8] */
  ebx = R32((uint32_t)(eax*4 + 0xb221f8u));
/* 7934cb: xor ebx, dword ptr [ecx*4 + 0xb321f8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx*4 + 0xb321f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 7934d2: mov edi, eax */
  edi = eax;
/* 7934d4: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7934d7: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7934d9: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7934dc: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7934de: xor ebx, dword ptr [edx*4 + 0xb421f8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx*4 + 0xb421f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 7934e5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7934e8: mov ebx, dword ptr [edx + ebx*4 + 4] */
  ebx = R32((uint32_t)(edx + ebx*4 + 0x4u));
/* 7934ec: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 7934ef: nop  */
L_7934f0: /* 7934f0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7934f2: je 0x79364a */
  if (zf) goto L_79364a;
L_7934f8: /* 7934f8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7934fa: mov eax, dword ptr [ecx + 0x164] */
  eax = R32((uint32_t)(ecx + 0x164u));
/* 793500: cmp eax, dword ptr [0xb521fc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xb521fcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793506: je 0x79363c */
  if (zf) goto L_79363c;
L_79350c: /* 79350c: cmp dword ptr [ebx + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79350f: jne 0x79363c */
  if (!zf) goto L_79363c;
L_793515: /* 793515: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793516: call 0x6c2626 */
  esp -= 4; W32(esp, 0x79351bu); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 79351b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79351d: jne 0x79363c */
  if (!zf) goto L_79363c;
L_793523: /* 793523: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 793526: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793528: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79352a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79352b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79352c: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x793532u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793532: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793534: je 0x79363c */
  if (zf) goto L_79363c;
L_79353a: /* 79353a: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793541: je 0x79358a */
  if (zf) goto L_79358a;
L_793543: /* 793543: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 793546: xor ecx, ecx */
  ecx = 0;
/* 793548: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79354a: je 0x79355c */
  if (zf) goto L_79355c;
L_79354c: /* 79354c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 79354e: mov ecx, esi */
  ecx = esi;
/* 793550: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x793556u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793558: jne 0x793578 */
  if (!zf) goto L_793578;
L_79355a: /* 79355a: xor ecx, ecx */
  ecx = 0;
L_79355c: /* 79355c: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 79355f: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 793561: je 0x793578 */
  if (zf) goto L_793578;
L_793563: /* 793563: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 793565: jne 0x79358c */
  if (!zf) goto L_79358c;
L_793567: /* 793567: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 79356c: mov ecx, esi */
  ecx = esi;
/* 79356e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x793574u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 793574: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793576: jne 0x79358a */
  if (!zf) goto L_79358a;
L_793578: /* 793578: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 79357a: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793584: jne 0x79363c */
  if (!zf) goto L_79363c;
L_79358a: /* 79358a: xor ecx, ecx */
  ecx = 0;
L_79358c: /* 79358c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 79358e: mov eax, dword ptr [0xb521fc] */
  eax = R32((uint32_t)(0xb521fcu));
/* 793593: mov dword ptr [edx + 0x164], eax */
  W32((uint32_t)(edx + 0x164u), eax);
/* 793599: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 79359b: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 7935a1: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 7935a4: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 7935a7: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 7935aa: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7935b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7935b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7935b2: mov ecx, esi */
  ecx = esi;
/* 7935b4: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 7935bb: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7935c2: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7935c9: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7935d0: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7935d7: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 7935de: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 7935e5: mov dword ptr [ebp - 0x5c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa4u), 0xffffffffu);
/* 7935ec: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7935f1u); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7935f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7935f3: je 0x79363c */
  if (zf) goto L_79363c;
L_7935f5: /* 7935f5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7935f7: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7935fd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7935ff: xor esi, esi */
  esi = 0;
/* 793601: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 793603: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 793606: mov dword ptr [ebp - 0x64], esi */
  W32((uint32_t)(ebp + 0xffffff9cu), esi);
/* 793609: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x79360fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 79360f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793611: je 0x793618 */
  if (zf) goto L_793618;
L_793613: /* 793613: mov dword ptr [eax + 0x2c], esi */
  W32((uint32_t)(eax + 0x2cu), esi);
/* 793616: jmp 0x79361a */
  goto L_79361a;
L_793618: /* 793618: xor eax, eax */
  eax = 0;
L_79361a: /* 79361a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79361d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793620: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 793622: mov edi, eax */
  edi = eax;
/* 793624: mov ecx, 0xc */
  ecx = 0xcu;
/* 793629: lea esi, [ebp - 0x84] */
  esi = (uint32_t)(ebp + 0xffffff7cu);
/* 79362f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793631: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 793633: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 793636: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 793639: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_79363c: /* 79363c: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 79363f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793642: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793645: jmp 0x7934f0 */
  goto L_7934f0;
L_79364a: /* 79364a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 79364d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79364e: jmp 0x7934b8 */
  goto L_7934b8;
L_793653: /* 793653: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 793654: jmp 0x7934a9 */
  goto L_7934a9;
L_793659: /* 793659: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 79365a: jmp 0x79349a */
  goto L_79349a;
L_79365f: /* 79365f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 793662: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 793665: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 79366b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 79366d: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 793670: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 793673: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 793676: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 793679: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 79367c: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 79367f: add esi, 0x17c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 793685: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 793687: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79368a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 79368d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793690: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 793693: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793694: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 79369a: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 79369d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79369e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7936a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7936a6: mov esp, ebp */
  esp = ebp;
/* 7936a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7936a9: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_7936ac(void) {
  LOAD_REGS();
L_7936ac: /* 7936ac: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7936af: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7936b4: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7936b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7936b8: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 7936bb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7936c0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7936c0(); return;
}

void f_7936c0(void) {
  LOAD_REGS();
L_7936c0: /* 7936c0: push 0xa0a638 */
  { uint32_t v = 0xa0a638u; esp -= 4; W32(esp, v); }
/* 7936c5: push 0xacae50 */
  { uint32_t v = 0xacae50u; esp -= 4; W32(esp, v); }
/* 7936ca: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7936d0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7936d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7936d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7936d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7936d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7936dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7936dc: guest_badaddr(0x7936dc); return;
}

void f_7937b0(void) {
  LOAD_REGS();
L_7937b0: /* 7937b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7937b1: mov ebp, esp */
  ebp = esp;
/* 7937b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7937b5: push 0x9ccef0 */
  { uint32_t v = 0x9ccef0u; esp -= 4; W32(esp, v); }
/* 7937ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7937c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7937c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7937c8: sub esp, 0xc8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7937ce: mov eax, dword ptr [0xb521fc] */
  eax = R32((uint32_t)(0xb521fcu));
/* 7937d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7937d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7937d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7937d6: xor edi, edi */
  edi = 0;
/* 7937d8: mov esi, ecx */
  esi = ecx;
/* 7937da: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7937db: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 7937de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7937e1: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 7937e4: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7937e7: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7937ea: mov dword ptr [0xb521fc], eax */
  W32((uint32_t)(0xb521fcu), eax);
/* 7937ef: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7937f5u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7937f5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7937f7: je 0x793bd4 */
  if (zf) goto L_793bd4;
L_7937fd: /* 7937fd: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 793800: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 793806: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 793809: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79380a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 79380d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 793810: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 793813: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 793816: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 793819: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 79381c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 79381f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 793822: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x793828u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 793828: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 79382a: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 79382d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 793830: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 793833: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 793836: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 793839: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79383a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 79383d: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 793840: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793841: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 793844: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 793847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793848: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 79384b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79384e: mov ecx, esp */
  ecx = esp;
/* 793850: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 793852: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 793855: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 793858: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 79385b: mov ecx, esi */
  ecx = esi;
/* 79385d: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793862u); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793862: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 793865: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793866: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 793869: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79386a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 79386d: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 793870: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793871: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 793874: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793877: mov eax, esp */
  eax = esp;
/* 793879: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79387b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79387e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 793881: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 793884: mov ecx, esi */
  ecx = esi;
/* 793886: call 0x6c1398 */
  esp -= 4; W32(esp, 0x79388bu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
L_79388b: /* 79388b: mov eax, 1 */
  eax = 0x1u;
L_793890: /* 793890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793892: je 0x793a34 */
  if (zf) goto L_793a34;
L_793898: /* 793898: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79389b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79389e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7938a1: mov eax, ecx */
  eax = ecx;
/* 7938a3: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938a6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938a8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938ab: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938ad: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7938b0: mov eax, dword ptr [esi*4 + 0xb421f8] */
  eax = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 7938b7: mov esi, dword ptr [edx*4 + 0xb321f8] */
  esi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 7938be: mov edx, dword ptr [ecx*4 + 0xb221f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb221f8u));
/* 7938c5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7938c8: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938ca: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938cc: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_7938d0: /* 7938d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7938d2: je 0x793a21 */
  if (zf) goto L_793a21;
L_7938d8: /* 7938d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7938da: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 7938e0: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938e6: je 0x793a19 */
  if (zf) goto L_793a19;
L_7938ec: /* 7938ec: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7938ef: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938f2: jne 0x793a19 */
  if (!zf) goto L_793a19;
L_7938f8: /* 7938f8: xor edi, edi */
  edi = 0;
/* 7938fa: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 793900: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 793906: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 793909: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 79390c: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 79390f: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 793912: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 793915: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 793918: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 79391b: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 79391e: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793925: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 793928: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 79392e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793930: test byte ptr [ecx + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793937: je 0x793a19 */
  if (zf) goto L_793a19;
L_79393d: /* 79393d: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793940: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793942: je 0x793a19 */
  if (zf) goto L_793a19;
L_793948: /* 793948: mov eax, edx */
  eax = edx;
/* 79394a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_793950: /* 793950: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793952: je 0x793961 */
  if (zf) goto L_793961;
L_793954: /* 793954: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793956: je 0x793a19 */
  if (zf) goto L_793a19;
L_79395c: /* 79395c: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 79395f: jmp 0x793950 */
  goto L_793950;
L_793961: /* 793961: mov esi, dword ptr [ebp + 0x30] */
  esi = R32((uint32_t)(ebp + 0x30u));
/* 793964: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793968: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x79396eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79396e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793970: je 0x793a19 */
  if (zf) goto L_793a19;
L_793976: /* 793976: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793978: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79397a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793980: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793984: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79398b: mov ecx, esp */
  ecx = esp;
/* 79398d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 79398f: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793992: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793995: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793998: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 79399b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79399e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7939a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939a3: mov ecx, esp */
  ecx = esp;
/* 7939a5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939a7: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7939aa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939ad: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7939b0: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939b3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7939b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939b9: mov ecx, esp */
  ecx = esp;
/* 7939bb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939bd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7939c0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939c3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7939c6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939c9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7939cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939cc: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7939d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939d3: mov ecx, eax */
  ecx = eax;
/* 7939d5: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7939d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7939d8: xor edx, edx */
  edx = 0;
/* 7939da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939dc: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7939df: mov eax, edx */
  eax = edx;
/* 7939e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939e3: je 0x793a19 */
  if (zf) goto L_793a19;
L_7939e5: /* 7939e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7939e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7939ea: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7939ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7939f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7939f2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939f4: je 0x793a07 */
  if (zf) goto L_793a07;
L_7939f6: /* 7939f6: mov ecx, 0xc */
  ecx = 0xcu;
/* 7939fb: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793a01: mov edi, eax */
  edi = eax;
/* 793a03: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793a05: jmp 0x793a09 */
  goto L_793a09;
L_793a07: /* 793a07: xor eax, eax */
  eax = 0;
L_793a09: /* 793a09: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793a11: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a14: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a17: jne 0x793a21 */
  if (!zf) goto L_793a21;
L_793a19: /* 793a19: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793a1c: jmp 0x7938d0 */
  goto L_7938d0;
L_793a21: /* 793a21: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793a26: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a2c: /* 793a2c: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a2f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a32: je 0x793a4a */
  if (zf) goto L_793a4a;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a4a: /* 793a4a: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a4d: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a4f: /* 793a4f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a52: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793a55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793a56: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 793a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793a5e: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 793a61: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 793a63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793a66: mov eax, esp */
  eax = esp;
/* 793a68: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a6a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 793a6d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 793a70: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 793a73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793a76: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 793a79: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793a7eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793a7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793a81: cmp dword ptr [ebp - 0x54], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a84: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a86: /* 793a86: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793a89: cmp dword ptr [ebp - 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a8c: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a8e: /* 793a8e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793a91: cmp dword ptr [ebp - 0x4c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a94: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a96: /* 793a96: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_793a9b: /* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_793aa3: /* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793ab6: /* 793ab6: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793ab9: cmp esi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793abc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793abf: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac1: /* 793ac1: cmp edx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793ac4: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac6: /* 793ac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ac9: cmp ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793acc: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ace: /* 793ace: xor eax, eax */
  eax = 0;
/* 793ad0: jmp 0x793890 */
  goto L_793890;
L_793ad5: /* 793ad5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 793ad8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793adb: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793ae2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793ae6: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793aebu); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793aeb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793aee: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793af1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 793af4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 793af7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793afd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793b02: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b07u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b07: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b0a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b0d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 793b10: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 793b13: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 793b16: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793b21: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b26u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b29: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b2c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b2f: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 793b32: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 793b35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b3a: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b3c: /* 793b3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b3f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b44: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b47: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b49: /* 793b49: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 793b4c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b57: jp 0x793b61 */
  if (pf) goto L_793b61;
L_793b59: /* 793b59: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 793b5a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b5d: mov eax, esi */
  eax = esi;
/* 793b5f: jmp 0x793bbc */
  goto L_793bbc;
L_793b61: /* 793b61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 793b62: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b65: mov eax, esi */
  eax = esi;
/* 793b67: jmp 0x793bbc */
  goto L_793bbc;
L_793b69: /* 793b69: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b6c: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 793b6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b74: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b76: /* 793b76: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b79: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b81: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b83: /* 793b83: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 793b86: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b91: jp 0x793b9b */
  if (pf) goto L_793b9b;
L_793b93: /* 793b93: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 793b94: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b97: mov eax, edx */
  eax = edx;
/* 793b99: jmp 0x793bbc */
  goto L_793bbc;
L_793b9b: /* 793b9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 793b9c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b9f: mov eax, edx */
  eax = edx;
/* 793ba1: jmp 0x793bbc */
  goto L_793bbc;
L_793ba3: /* 793ba3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 793ba6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793bac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793bae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793bb1: jp 0x793bb6 */
  if (pf) goto L_793bb6;
L_793bb3: /* 793bb3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 793bb4: jmp 0x793bb7 */
  goto L_793bb7;
L_793bb6: /* 793bb6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_793bb7: /* 793bb7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 793bba: mov eax, edi */
  eax = edi;
L_793bbc: /* 793bbc: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793bc1: jge 0x793ace */
  if ((sf == of)) goto L_793ace;
L_793bc7: /* 793bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 793bc9: jl 0x793ace */
  if ((sf != of)) goto L_793ace;
L_793bcf: /* 793bcf: jmp 0x79388b */
  goto L_79388b;
L_793bd4: /* 793bd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793bd5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 793bdb: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x793be1u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 793be1: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 793be4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793be5: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 793be8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793be9: mov ecx, eax */
  ecx = eax;
/* 793beb: call dword ptr [0xcfa5e4] */
  esp -= 4; W32(esp, 0x793bf1u); SPILL(); f_4e348b(); if (g_unwind) return; /* Core!??HFBox@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 793bf1: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 793bf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793bf5: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 793bfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793bfc: mov ecx, eax */
  ecx = eax;
/* 793bfe: call dword ptr [0xcfa5e4] */
  esp -= 4; W32(esp, 0x793c04u); SPILL(); f_4e348b(); if (g_unwind) return; /* Core!??HFBox@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 793c04: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 793c0a: fsub dword ptr [ebp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x2cu)));
/* 793c0d: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 793c10: fld dword ptr [ebp - 0xa4] */
  { double v = F32((uint32_t)(ebp + 0xffffff5cu)); FPUSH(v); }
/* 793c16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793c17: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 793c1a: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 793c1d: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 793c23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793c24: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 793c27: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 793c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793c2b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793c2e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 793c31: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793c34: mov edx, esp */
  edx = esp;
/* 793c36: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 793c39: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793c3c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 793c3e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 793c41: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 793c44: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793c47: mov ecx, esi */
  ecx = esi;
/* 793c49: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 793c4c: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793c51u); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793c51: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 793c57: fadd dword ptr [ebp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x2cu)));
/* 793c5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793c5d: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 793c63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793c64: fadd dword ptr [ebp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x28u)));
/* 793c67: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793c6a: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 793c70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793c71: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 793c74: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 793c77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793c78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793c7b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 793c7e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793c81: mov ecx, esp */
  ecx = esp;
/* 793c83: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 793c85: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 793c88: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793c8b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 793c8e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 793c91: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793c94: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 793c97: mov ecx, esi */
  ecx = esi;
/* 793c99: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793c9eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793c9e: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 793ca1: mov esi, dword ptr [0xb521fc] */
  esi = R32((uint32_t)(0xb521fcu));
L_793ca7: /* 793ca7: mov ecx, eax */
  ecx = eax;
/* 793ca9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 793cac: cmp ecx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793caf: jg 0x793e82 */
  if ((!zf && sf == of)) goto L_793e82;
L_793cb5: /* 793cb5: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 793cb8: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 793cbb: jmp 0x793cc0 */
  goto L_793cc0;
L_793cc0: /* 793cc0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 793cc3: cmp eax, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793cc6: jg 0x793e79 */
  if ((!zf && sf == of)) goto L_793e79;
L_793ccc: /* 793ccc: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 793ccf: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_793cd2: /* 793cd2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793cd5: cmp edx, dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793cd8: jg 0x793e71 */
  if ((!zf && sf == of)) goto L_793e71;
L_793cde: /* 793cde: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793ce1: mov edi, edx */
  edi = edx;
/* 793ce3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ce6: mov eax, edi */
  eax = edi;
/* 793ce8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 793ceb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 793ced: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 793cf0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 793cf2: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 793cf5: mov eax, dword ptr [edi*4 + 0xb221f8] */
  eax = R32((uint32_t)(edi*4 + 0xb221f8u));
/* 793cfc: mov edi, dword ptr [edx*4 + 0xb321f8] */
  edi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 793d03: mov edx, dword ptr [ecx*4 + 0xb421f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb421f8u));
/* 793d0a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793d0d: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 793d0f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 793d11: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_793d15: /* 793d15: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793d17: je 0x793e69 */
  if (zf) goto L_793e69;
L_793d1d: /* 793d1d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 793d1f: cmp dword ptr [eax + 0x164], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d25: je 0x793e61 */
  if (zf) goto L_793e61;
L_793d2b: /* 793d2b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 793d2e: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d31: jne 0x793e61 */
  if (!zf) goto L_793e61;
L_793d37: /* 793d37: xor ecx, ecx */
  ecx = 0;
/* 793d39: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 793d3f: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 793d45: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 793d48: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 793d4b: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 793d4e: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 793d51: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 793d54: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 793d57: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 793d5a: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 793d5d: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 793d60: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793d67: mov dword ptr [eax + 0x164], esi */
  W32((uint32_t)(eax + 0x164u), esi);
/* 793d6d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793d6f: mov al, byte ptr [ecx + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x88u))) & 0xffu);
/* 793d75: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 793d77: jns 0x793e5b */
  if (!sf) goto L_793e5b;
L_793d7d: /* 793d7d: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 793d80: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d82: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793d88: /* 793d88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793d8a: je 0x793d99 */
  if (zf) goto L_793d99;
L_793d8c: /* 793d8c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d8e: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793d94: /* 793d94: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 793d97: jmp 0x793d88 */
  goto L_793d88;
L_793d99: /* 793d99: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 793d9c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793d9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793d9f: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793da2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793da3: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x793da9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793da9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793dab: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793db1: /* 793db1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793db3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793db5: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x793dbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793dbb: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 793dbe: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793dc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793dc2: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793dc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793dc6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793dc9: mov ecx, esp */
  ecx = esp;
/* 793dcb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 793dcd: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793dd0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793dd3: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793dd6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 793dd9: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 793ddc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 793dde: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793de1: mov ecx, esp */
  ecx = esp;
/* 793de3: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 793de5: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 793de8: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793deb: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 793dee: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 793df1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 793df4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793df7: mov ecx, esp */
  ecx = esp;
/* 793df9: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 793dfb: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 793dfe: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793e01: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 793e04: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 793e07: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793e09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793e0a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 793e10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793e11: mov ecx, eax */
  ecx = eax;
/* 793e13: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x793e16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793e16: xor edx, edx */
  edx = 0;
/* 793e18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e1a: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 793e1d: mov eax, edx */
  eax = edx;
/* 793e1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e21: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793e23: /* 793e23: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 793e26: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 793e28: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 793e2a: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x793e30u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 793e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e32: je 0x793e45 */
  if (zf) goto L_793e45;
L_793e34: /* 793e34: mov ecx, 0xc */
  ecx = 0xcu;
/* 793e39: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793e3f: mov edi, eax */
  edi = eax;
/* 793e41: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793e43: jmp 0x793e47 */
  goto L_793e47;
L_793e45: /* 793e45: xor eax, eax */
  eax = 0;
L_793e47: /* 793e47: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793e4a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793e4c: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 793e4f: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793e52: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793e55: jne 0x793aa3 */
  if (!zf) goto L_793aa3;
L_793e5b: /* 793e5b: mov esi, dword ptr [0xb521fc] */
  esi = R32((uint32_t)(0xb521fcu));
L_793e61: /* 793e61: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793e64: jmp 0x793d15 */
  goto L_793d15;
L_793e69: /* 793e69: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 793e6c: jmp 0x793cd2 */
  goto L_793cd2;
L_793e71: /* 793e71: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 793e74: jmp 0x793cc0 */
  goto L_793cc0;
L_793e79: /* 793e79: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793e7c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 793e7d: jmp 0x793ca7 */
  goto L_793ca7;
L_793e82: /* 793e82: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793e85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e87: je 0x793a34 */
  if (zf) goto L_793a34;
L_793e8d: /* 793e8d: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793e90: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793e93: je 0x793a34 */
  if (zf) goto L_793a34;
L_793e99: /* 793e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793e9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793e9b: jmp 0x793a9b */
  goto L_793a9b;
}

void f_793a4a(void) {
  LOAD_REGS();
  goto L_793a4a;
L_79388b: /* 79388b: mov eax, 1 */
  eax = 0x1u;
L_793890: /* 793890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793892: je 0x793a34 */
  if (zf) goto L_793a34;
L_793898: /* 793898: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79389b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79389e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7938a1: mov eax, ecx */
  eax = ecx;
/* 7938a3: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938a6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938a8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938ab: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938ad: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7938b0: mov eax, dword ptr [esi*4 + 0xb421f8] */
  eax = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 7938b7: mov esi, dword ptr [edx*4 + 0xb321f8] */
  esi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 7938be: mov edx, dword ptr [ecx*4 + 0xb221f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb221f8u));
/* 7938c5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7938c8: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938ca: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938cc: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_7938d0: /* 7938d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7938d2: je 0x793a21 */
  if (zf) goto L_793a21;
L_7938d8: /* 7938d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7938da: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 7938e0: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938e6: je 0x793a19 */
  if (zf) goto L_793a19;
L_7938ec: /* 7938ec: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7938ef: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938f2: jne 0x793a19 */
  if (!zf) goto L_793a19;
L_7938f8: /* 7938f8: xor edi, edi */
  edi = 0;
/* 7938fa: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 793900: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 793906: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 793909: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 79390c: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 79390f: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 793912: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 793915: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 793918: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 79391b: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 79391e: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793925: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 793928: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 79392e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793930: test byte ptr [ecx + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793937: je 0x793a19 */
  if (zf) goto L_793a19;
L_79393d: /* 79393d: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793940: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793942: je 0x793a19 */
  if (zf) goto L_793a19;
L_793948: /* 793948: mov eax, edx */
  eax = edx;
/* 79394a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_793950: /* 793950: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793952: je 0x793961 */
  if (zf) goto L_793961;
L_793954: /* 793954: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793956: je 0x793a19 */
  if (zf) goto L_793a19;
L_79395c: /* 79395c: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 79395f: jmp 0x793950 */
  goto L_793950;
L_793961: /* 793961: mov esi, dword ptr [ebp + 0x30] */
  esi = R32((uint32_t)(ebp + 0x30u));
/* 793964: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793968: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x79396eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79396e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793970: je 0x793a19 */
  if (zf) goto L_793a19;
L_793976: /* 793976: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793978: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79397a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793980: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793984: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79398b: mov ecx, esp */
  ecx = esp;
/* 79398d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 79398f: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793992: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793995: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793998: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 79399b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79399e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7939a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939a3: mov ecx, esp */
  ecx = esp;
/* 7939a5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939a7: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7939aa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939ad: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7939b0: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939b3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7939b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939b9: mov ecx, esp */
  ecx = esp;
/* 7939bb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939bd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7939c0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939c3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7939c6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939c9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7939cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939cc: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7939d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939d3: mov ecx, eax */
  ecx = eax;
/* 7939d5: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7939d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7939d8: xor edx, edx */
  edx = 0;
/* 7939da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939dc: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7939df: mov eax, edx */
  eax = edx;
/* 7939e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939e3: je 0x793a19 */
  if (zf) goto L_793a19;
L_7939e5: /* 7939e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7939e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7939ea: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7939ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7939f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7939f2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939f4: je 0x793a07 */
  if (zf) goto L_793a07;
L_7939f6: /* 7939f6: mov ecx, 0xc */
  ecx = 0xcu;
/* 7939fb: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793a01: mov edi, eax */
  edi = eax;
/* 793a03: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793a05: jmp 0x793a09 */
  goto L_793a09;
L_793a07: /* 793a07: xor eax, eax */
  eax = 0;
L_793a09: /* 793a09: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793a11: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a14: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a17: jne 0x793a21 */
  if (!zf) goto L_793a21;
L_793a19: /* 793a19: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793a1c: jmp 0x7938d0 */
  goto L_7938d0;
L_793a21: /* 793a21: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793a26: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a2c: /* 793a2c: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a2f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a32: je 0x793a4a */
  if (zf) goto L_793a4a;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a4a: /* 793a4a: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a4d: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a4f: /* 793a4f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a52: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793a55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793a56: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 793a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793a5e: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 793a61: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 793a63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793a66: mov eax, esp */
  eax = esp;
/* 793a68: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a6a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 793a6d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 793a70: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 793a73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793a76: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 793a79: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793a7eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793a7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793a81: cmp dword ptr [ebp - 0x54], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a84: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a86: /* 793a86: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793a89: cmp dword ptr [ebp - 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a8c: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a8e: /* 793a8e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793a91: cmp dword ptr [ebp - 0x4c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a94: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a96: /* 793a96: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793ab6: /* 793ab6: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793ab9: cmp esi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793abc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793abf: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac1: /* 793ac1: cmp edx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793ac4: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac6: /* 793ac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ac9: cmp ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793acc: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ace: /* 793ace: xor eax, eax */
  eax = 0;
/* 793ad0: jmp 0x793890 */
  goto L_793890;
L_793ad5: /* 793ad5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 793ad8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793adb: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793ae2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793ae6: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793aebu); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793aeb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793aee: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793af1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 793af4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 793af7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793afd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793b02: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b07u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b07: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b0a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b0d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 793b10: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 793b13: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 793b16: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793b21: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b26u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b29: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b2c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b2f: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 793b32: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 793b35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b3a: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b3c: /* 793b3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b3f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b44: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b47: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b49: /* 793b49: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 793b4c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b57: jp 0x793b61 */
  if (pf) goto L_793b61;
L_793b59: /* 793b59: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 793b5a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b5d: mov eax, esi */
  eax = esi;
/* 793b5f: jmp 0x793bbc */
  goto L_793bbc;
L_793b61: /* 793b61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 793b62: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b65: mov eax, esi */
  eax = esi;
/* 793b67: jmp 0x793bbc */
  goto L_793bbc;
L_793b69: /* 793b69: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b6c: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 793b6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b74: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b76: /* 793b76: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b79: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b81: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b83: /* 793b83: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 793b86: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b91: jp 0x793b9b */
  if (pf) goto L_793b9b;
L_793b93: /* 793b93: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 793b94: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b97: mov eax, edx */
  eax = edx;
/* 793b99: jmp 0x793bbc */
  goto L_793bbc;
L_793b9b: /* 793b9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 793b9c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b9f: mov eax, edx */
  eax = edx;
/* 793ba1: jmp 0x793bbc */
  goto L_793bbc;
L_793ba3: /* 793ba3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 793ba6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793bac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793bae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793bb1: jp 0x793bb6 */
  if (pf) goto L_793bb6;
L_793bb3: /* 793bb3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 793bb4: jmp 0x793bb7 */
  goto L_793bb7;
L_793bb6: /* 793bb6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_793bb7: /* 793bb7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 793bba: mov eax, edi */
  eax = edi;
L_793bbc: /* 793bbc: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793bc1: jge 0x793ace */
  if ((sf == of)) goto L_793ace;
L_793bc7: /* 793bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 793bc9: jl 0x793ace */
  if ((sf != of)) goto L_793ace;
L_793bcf: /* 793bcf: jmp 0x79388b */
  goto L_79388b;
}

void f_793ab6(void) {
  LOAD_REGS();
  goto L_793ab6;
L_79388b: /* 79388b: mov eax, 1 */
  eax = 0x1u;
L_793890: /* 793890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793892: je 0x793a34 */
  if (zf) goto L_793a34;
L_793898: /* 793898: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79389b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79389e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7938a1: mov eax, ecx */
  eax = ecx;
/* 7938a3: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938a6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938a8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938ab: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938ad: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7938b0: mov eax, dword ptr [esi*4 + 0xb421f8] */
  eax = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 7938b7: mov esi, dword ptr [edx*4 + 0xb321f8] */
  esi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 7938be: mov edx, dword ptr [ecx*4 + 0xb221f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb221f8u));
/* 7938c5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7938c8: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938ca: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938cc: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_7938d0: /* 7938d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7938d2: je 0x793a21 */
  if (zf) goto L_793a21;
L_7938d8: /* 7938d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7938da: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 7938e0: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938e6: je 0x793a19 */
  if (zf) goto L_793a19;
L_7938ec: /* 7938ec: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7938ef: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938f2: jne 0x793a19 */
  if (!zf) goto L_793a19;
L_7938f8: /* 7938f8: xor edi, edi */
  edi = 0;
/* 7938fa: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 793900: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 793906: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 793909: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 79390c: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 79390f: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 793912: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 793915: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 793918: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 79391b: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 79391e: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793925: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 793928: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 79392e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793930: test byte ptr [ecx + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793937: je 0x793a19 */
  if (zf) goto L_793a19;
L_79393d: /* 79393d: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793940: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793942: je 0x793a19 */
  if (zf) goto L_793a19;
L_793948: /* 793948: mov eax, edx */
  eax = edx;
/* 79394a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_793950: /* 793950: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793952: je 0x793961 */
  if (zf) goto L_793961;
L_793954: /* 793954: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793956: je 0x793a19 */
  if (zf) goto L_793a19;
L_79395c: /* 79395c: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 79395f: jmp 0x793950 */
  goto L_793950;
L_793961: /* 793961: mov esi, dword ptr [ebp + 0x30] */
  esi = R32((uint32_t)(ebp + 0x30u));
/* 793964: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793968: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x79396eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79396e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793970: je 0x793a19 */
  if (zf) goto L_793a19;
L_793976: /* 793976: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793978: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79397a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793980: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793984: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79398b: mov ecx, esp */
  ecx = esp;
/* 79398d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 79398f: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793992: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793995: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793998: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 79399b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79399e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7939a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939a3: mov ecx, esp */
  ecx = esp;
/* 7939a5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939a7: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7939aa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939ad: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7939b0: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939b3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7939b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939b9: mov ecx, esp */
  ecx = esp;
/* 7939bb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939bd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7939c0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939c3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7939c6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939c9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7939cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939cc: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7939d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939d3: mov ecx, eax */
  ecx = eax;
/* 7939d5: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7939d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7939d8: xor edx, edx */
  edx = 0;
/* 7939da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939dc: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7939df: mov eax, edx */
  eax = edx;
/* 7939e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939e3: je 0x793a19 */
  if (zf) goto L_793a19;
L_7939e5: /* 7939e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7939e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7939ea: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7939ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7939f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7939f2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939f4: je 0x793a07 */
  if (zf) goto L_793a07;
L_7939f6: /* 7939f6: mov ecx, 0xc */
  ecx = 0xcu;
/* 7939fb: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793a01: mov edi, eax */
  edi = eax;
/* 793a03: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793a05: jmp 0x793a09 */
  goto L_793a09;
L_793a07: /* 793a07: xor eax, eax */
  eax = 0;
L_793a09: /* 793a09: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793a11: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a14: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a17: jne 0x793a21 */
  if (!zf) goto L_793a21;
L_793a19: /* 793a19: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793a1c: jmp 0x7938d0 */
  goto L_7938d0;
L_793a21: /* 793a21: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793a26: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a2c: /* 793a2c: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a2f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a32: je 0x793a4a */
  if (zf) goto L_793a4a;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a4a: /* 793a4a: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a4d: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a4f: /* 793a4f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a52: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793a55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793a56: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 793a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793a5e: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 793a61: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 793a63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793a66: mov eax, esp */
  eax = esp;
/* 793a68: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a6a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 793a6d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 793a70: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 793a73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793a76: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 793a79: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793a7eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793a7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793a81: cmp dword ptr [ebp - 0x54], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a84: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a86: /* 793a86: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793a89: cmp dword ptr [ebp - 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a8c: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a8e: /* 793a8e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793a91: cmp dword ptr [ebp - 0x4c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a94: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a96: /* 793a96: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793ab6: /* 793ab6: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793ab9: cmp esi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793abc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793abf: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac1: /* 793ac1: cmp edx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793ac4: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac6: /* 793ac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ac9: cmp ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793acc: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ace: /* 793ace: xor eax, eax */
  eax = 0;
/* 793ad0: jmp 0x793890 */
  goto L_793890;
L_793ad5: /* 793ad5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 793ad8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793adb: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793ae2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793ae6: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793aebu); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793aeb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793aee: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793af1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 793af4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 793af7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793afd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793b02: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b07u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b07: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b0a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b0d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 793b10: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 793b13: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 793b16: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793b21: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b26u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b29: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b2c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b2f: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 793b32: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 793b35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b3a: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b3c: /* 793b3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b3f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b44: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b47: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b49: /* 793b49: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 793b4c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b57: jp 0x793b61 */
  if (pf) goto L_793b61;
L_793b59: /* 793b59: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 793b5a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b5d: mov eax, esi */
  eax = esi;
/* 793b5f: jmp 0x793bbc */
  goto L_793bbc;
L_793b61: /* 793b61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 793b62: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b65: mov eax, esi */
  eax = esi;
/* 793b67: jmp 0x793bbc */
  goto L_793bbc;
L_793b69: /* 793b69: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b6c: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 793b6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b74: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b76: /* 793b76: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b79: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b81: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b83: /* 793b83: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 793b86: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b91: jp 0x793b9b */
  if (pf) goto L_793b9b;
L_793b93: /* 793b93: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 793b94: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b97: mov eax, edx */
  eax = edx;
/* 793b99: jmp 0x793bbc */
  goto L_793bbc;
L_793b9b: /* 793b9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 793b9c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b9f: mov eax, edx */
  eax = edx;
/* 793ba1: jmp 0x793bbc */
  goto L_793bbc;
L_793ba3: /* 793ba3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 793ba6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793bac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793bae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793bb1: jp 0x793bb6 */
  if (pf) goto L_793bb6;
L_793bb3: /* 793bb3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 793bb4: jmp 0x793bb7 */
  goto L_793bb7;
L_793bb6: /* 793bb6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_793bb7: /* 793bb7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 793bba: mov eax, edi */
  eax = edi;
L_793bbc: /* 793bbc: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793bc1: jge 0x793ace */
  if ((sf == of)) goto L_793ace;
L_793bc7: /* 793bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 793bc9: jl 0x793ace */
  if ((sf != of)) goto L_793ace;
L_793bcf: /* 793bcf: jmp 0x79388b */
  goto L_79388b;
}

void f_793ad5(void) {
  LOAD_REGS();
  goto L_793ad5;
L_79388b: /* 79388b: mov eax, 1 */
  eax = 0x1u;
L_793890: /* 793890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793892: je 0x793a34 */
  if (zf) goto L_793a34;
L_793898: /* 793898: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79389b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79389e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7938a1: mov eax, ecx */
  eax = ecx;
/* 7938a3: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938a6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938a8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938ab: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938ad: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7938b0: mov eax, dword ptr [esi*4 + 0xb421f8] */
  eax = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 7938b7: mov esi, dword ptr [edx*4 + 0xb321f8] */
  esi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 7938be: mov edx, dword ptr [ecx*4 + 0xb221f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb221f8u));
/* 7938c5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7938c8: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938ca: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938cc: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_7938d0: /* 7938d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7938d2: je 0x793a21 */
  if (zf) goto L_793a21;
L_7938d8: /* 7938d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7938da: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 7938e0: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938e6: je 0x793a19 */
  if (zf) goto L_793a19;
L_7938ec: /* 7938ec: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7938ef: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938f2: jne 0x793a19 */
  if (!zf) goto L_793a19;
L_7938f8: /* 7938f8: xor edi, edi */
  edi = 0;
/* 7938fa: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 793900: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 793906: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 793909: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 79390c: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 79390f: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 793912: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 793915: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 793918: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 79391b: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 79391e: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793925: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 793928: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 79392e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793930: test byte ptr [ecx + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793937: je 0x793a19 */
  if (zf) goto L_793a19;
L_79393d: /* 79393d: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793940: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793942: je 0x793a19 */
  if (zf) goto L_793a19;
L_793948: /* 793948: mov eax, edx */
  eax = edx;
/* 79394a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_793950: /* 793950: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793952: je 0x793961 */
  if (zf) goto L_793961;
L_793954: /* 793954: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793956: je 0x793a19 */
  if (zf) goto L_793a19;
L_79395c: /* 79395c: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 79395f: jmp 0x793950 */
  goto L_793950;
L_793961: /* 793961: mov esi, dword ptr [ebp + 0x30] */
  esi = R32((uint32_t)(ebp + 0x30u));
/* 793964: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793968: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x79396eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79396e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793970: je 0x793a19 */
  if (zf) goto L_793a19;
L_793976: /* 793976: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793978: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79397a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793980: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793984: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79398b: mov ecx, esp */
  ecx = esp;
/* 79398d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 79398f: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793992: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793995: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793998: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 79399b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79399e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7939a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939a3: mov ecx, esp */
  ecx = esp;
/* 7939a5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939a7: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7939aa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939ad: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7939b0: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939b3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7939b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939b9: mov ecx, esp */
  ecx = esp;
/* 7939bb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939bd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7939c0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939c3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7939c6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939c9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7939cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939cc: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7939d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939d3: mov ecx, eax */
  ecx = eax;
/* 7939d5: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7939d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7939d8: xor edx, edx */
  edx = 0;
/* 7939da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939dc: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7939df: mov eax, edx */
  eax = edx;
/* 7939e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939e3: je 0x793a19 */
  if (zf) goto L_793a19;
L_7939e5: /* 7939e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7939e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7939ea: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7939ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7939f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7939f2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939f4: je 0x793a07 */
  if (zf) goto L_793a07;
L_7939f6: /* 7939f6: mov ecx, 0xc */
  ecx = 0xcu;
/* 7939fb: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793a01: mov edi, eax */
  edi = eax;
/* 793a03: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793a05: jmp 0x793a09 */
  goto L_793a09;
L_793a07: /* 793a07: xor eax, eax */
  eax = 0;
L_793a09: /* 793a09: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793a11: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a14: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a17: jne 0x793a21 */
  if (!zf) goto L_793a21;
L_793a19: /* 793a19: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793a1c: jmp 0x7938d0 */
  goto L_7938d0;
L_793a21: /* 793a21: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793a26: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a2c: /* 793a2c: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a2f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a32: je 0x793a4a */
  if (zf) goto L_793a4a;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a4a: /* 793a4a: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a4d: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a4f: /* 793a4f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a52: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793a55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793a56: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 793a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793a5e: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 793a61: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 793a63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793a66: mov eax, esp */
  eax = esp;
/* 793a68: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a6a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 793a6d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 793a70: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 793a73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793a76: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 793a79: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793a7eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793a7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793a81: cmp dword ptr [ebp - 0x54], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a84: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a86: /* 793a86: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793a89: cmp dword ptr [ebp - 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a8c: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a8e: /* 793a8e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793a91: cmp dword ptr [ebp - 0x4c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a94: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a96: /* 793a96: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793ab6: /* 793ab6: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793ab9: cmp esi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793abc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793abf: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac1: /* 793ac1: cmp edx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793ac4: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac6: /* 793ac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ac9: cmp ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793acc: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ace: /* 793ace: xor eax, eax */
  eax = 0;
/* 793ad0: jmp 0x793890 */
  goto L_793890;
L_793ad5: /* 793ad5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 793ad8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793adb: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793ae2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793ae6: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793aebu); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793aeb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793aee: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793af1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 793af4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 793af7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793afd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793b02: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b07u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b07: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b0a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b0d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 793b10: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 793b13: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 793b16: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793b21: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b26u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b29: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b2c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b2f: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 793b32: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 793b35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b3a: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b3c: /* 793b3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b3f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b44: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b47: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b49: /* 793b49: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 793b4c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b57: jp 0x793b61 */
  if (pf) goto L_793b61;
L_793b59: /* 793b59: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 793b5a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b5d: mov eax, esi */
  eax = esi;
/* 793b5f: jmp 0x793bbc */
  goto L_793bbc;
L_793b61: /* 793b61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 793b62: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b65: mov eax, esi */
  eax = esi;
/* 793b67: jmp 0x793bbc */
  goto L_793bbc;
L_793b69: /* 793b69: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b6c: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 793b6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b74: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b76: /* 793b76: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b79: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b81: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b83: /* 793b83: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 793b86: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b91: jp 0x793b9b */
  if (pf) goto L_793b9b;
L_793b93: /* 793b93: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 793b94: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b97: mov eax, edx */
  eax = edx;
/* 793b99: jmp 0x793bbc */
  goto L_793bbc;
L_793b9b: /* 793b9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 793b9c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b9f: mov eax, edx */
  eax = edx;
/* 793ba1: jmp 0x793bbc */
  goto L_793bbc;
L_793ba3: /* 793ba3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 793ba6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793bac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793bae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793bb1: jp 0x793bb6 */
  if (pf) goto L_793bb6;
L_793bb3: /* 793bb3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 793bb4: jmp 0x793bb7 */
  goto L_793bb7;
L_793bb6: /* 793bb6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_793bb7: /* 793bb7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 793bba: mov eax, edi */
  eax = edi;
L_793bbc: /* 793bbc: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793bc1: jge 0x793ace */
  if ((sf == of)) goto L_793ace;
L_793bc7: /* 793bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 793bc9: jl 0x793ace */
  if ((sf != of)) goto L_793ace;
L_793bcf: /* 793bcf: jmp 0x79388b */
  goto L_79388b;
}

void f_793b61(void) {
  LOAD_REGS();
  goto L_793b61;
L_79388b: /* 79388b: mov eax, 1 */
  eax = 0x1u;
L_793890: /* 793890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793892: je 0x793a34 */
  if (zf) goto L_793a34;
L_793898: /* 793898: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79389b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79389e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7938a1: mov eax, ecx */
  eax = ecx;
/* 7938a3: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938a6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938a8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938ab: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938ad: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7938b0: mov eax, dword ptr [esi*4 + 0xb421f8] */
  eax = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 7938b7: mov esi, dword ptr [edx*4 + 0xb321f8] */
  esi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 7938be: mov edx, dword ptr [ecx*4 + 0xb221f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb221f8u));
/* 7938c5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7938c8: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938ca: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938cc: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_7938d0: /* 7938d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7938d2: je 0x793a21 */
  if (zf) goto L_793a21;
L_7938d8: /* 7938d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7938da: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 7938e0: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938e6: je 0x793a19 */
  if (zf) goto L_793a19;
L_7938ec: /* 7938ec: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7938ef: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938f2: jne 0x793a19 */
  if (!zf) goto L_793a19;
L_7938f8: /* 7938f8: xor edi, edi */
  edi = 0;
/* 7938fa: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 793900: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 793906: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 793909: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 79390c: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 79390f: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 793912: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 793915: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 793918: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 79391b: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 79391e: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793925: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 793928: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 79392e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793930: test byte ptr [ecx + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793937: je 0x793a19 */
  if (zf) goto L_793a19;
L_79393d: /* 79393d: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793940: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793942: je 0x793a19 */
  if (zf) goto L_793a19;
L_793948: /* 793948: mov eax, edx */
  eax = edx;
/* 79394a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_793950: /* 793950: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793952: je 0x793961 */
  if (zf) goto L_793961;
L_793954: /* 793954: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793956: je 0x793a19 */
  if (zf) goto L_793a19;
L_79395c: /* 79395c: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 79395f: jmp 0x793950 */
  goto L_793950;
L_793961: /* 793961: mov esi, dword ptr [ebp + 0x30] */
  esi = R32((uint32_t)(ebp + 0x30u));
/* 793964: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793968: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x79396eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79396e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793970: je 0x793a19 */
  if (zf) goto L_793a19;
L_793976: /* 793976: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793978: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79397a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793980: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793984: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79398b: mov ecx, esp */
  ecx = esp;
/* 79398d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 79398f: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793992: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793995: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793998: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 79399b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79399e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7939a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939a3: mov ecx, esp */
  ecx = esp;
/* 7939a5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939a7: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7939aa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939ad: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7939b0: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939b3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7939b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939b9: mov ecx, esp */
  ecx = esp;
/* 7939bb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939bd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7939c0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939c3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7939c6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939c9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7939cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939cc: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7939d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939d3: mov ecx, eax */
  ecx = eax;
/* 7939d5: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7939d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7939d8: xor edx, edx */
  edx = 0;
/* 7939da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939dc: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7939df: mov eax, edx */
  eax = edx;
/* 7939e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939e3: je 0x793a19 */
  if (zf) goto L_793a19;
L_7939e5: /* 7939e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7939e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7939ea: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7939ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7939f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7939f2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939f4: je 0x793a07 */
  if (zf) goto L_793a07;
L_7939f6: /* 7939f6: mov ecx, 0xc */
  ecx = 0xcu;
/* 7939fb: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793a01: mov edi, eax */
  edi = eax;
/* 793a03: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793a05: jmp 0x793a09 */
  goto L_793a09;
L_793a07: /* 793a07: xor eax, eax */
  eax = 0;
L_793a09: /* 793a09: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793a11: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a14: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a17: jne 0x793a21 */
  if (!zf) goto L_793a21;
L_793a19: /* 793a19: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793a1c: jmp 0x7938d0 */
  goto L_7938d0;
L_793a21: /* 793a21: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793a26: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a2c: /* 793a2c: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a2f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a32: je 0x793a4a */
  if (zf) goto L_793a4a;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a4a: /* 793a4a: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a4d: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a4f: /* 793a4f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a52: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793a55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793a56: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 793a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793a5e: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 793a61: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 793a63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793a66: mov eax, esp */
  eax = esp;
/* 793a68: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a6a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 793a6d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 793a70: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 793a73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793a76: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 793a79: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793a7eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793a7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793a81: cmp dword ptr [ebp - 0x54], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a84: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a86: /* 793a86: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793a89: cmp dword ptr [ebp - 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a8c: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a8e: /* 793a8e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793a91: cmp dword ptr [ebp - 0x4c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a94: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a96: /* 793a96: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793ab6: /* 793ab6: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793ab9: cmp esi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793abc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793abf: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac1: /* 793ac1: cmp edx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793ac4: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac6: /* 793ac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ac9: cmp ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793acc: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ace: /* 793ace: xor eax, eax */
  eax = 0;
/* 793ad0: jmp 0x793890 */
  goto L_793890;
L_793ad5: /* 793ad5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 793ad8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793adb: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793ae2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793ae6: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793aebu); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793aeb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793aee: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793af1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 793af4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 793af7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793afd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793b02: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b07u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b07: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b0a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b0d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 793b10: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 793b13: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 793b16: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793b21: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b26u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b29: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b2c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b2f: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 793b32: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 793b35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b3a: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b3c: /* 793b3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b3f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b44: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b47: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b49: /* 793b49: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 793b4c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b57: jp 0x793b61 */
  if (pf) goto L_793b61;
L_793b59: /* 793b59: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 793b5a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b5d: mov eax, esi */
  eax = esi;
/* 793b5f: jmp 0x793bbc */
  goto L_793bbc;
L_793b61: /* 793b61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 793b62: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b65: mov eax, esi */
  eax = esi;
/* 793b67: jmp 0x793bbc */
  goto L_793bbc;
L_793b69: /* 793b69: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b6c: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 793b6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b74: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b76: /* 793b76: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b79: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b81: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b83: /* 793b83: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 793b86: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b91: jp 0x793b9b */
  if (pf) goto L_793b9b;
L_793b93: /* 793b93: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 793b94: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b97: mov eax, edx */
  eax = edx;
/* 793b99: jmp 0x793bbc */
  goto L_793bbc;
L_793b9b: /* 793b9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 793b9c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b9f: mov eax, edx */
  eax = edx;
/* 793ba1: jmp 0x793bbc */
  goto L_793bbc;
L_793ba3: /* 793ba3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 793ba6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793bac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793bae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793bb1: jp 0x793bb6 */
  if (pf) goto L_793bb6;
L_793bb3: /* 793bb3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 793bb4: jmp 0x793bb7 */
  goto L_793bb7;
L_793bb6: /* 793bb6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_793bb7: /* 793bb7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 793bba: mov eax, edi */
  eax = edi;
L_793bbc: /* 793bbc: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793bc1: jge 0x793ace */
  if ((sf == of)) goto L_793ace;
L_793bc7: /* 793bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 793bc9: jl 0x793ace */
  if ((sf != of)) goto L_793ace;
L_793bcf: /* 793bcf: jmp 0x79388b */
  goto L_79388b;
}

void f_793b69(void) {
  LOAD_REGS();
  goto L_793b69;
L_79388b: /* 79388b: mov eax, 1 */
  eax = 0x1u;
L_793890: /* 793890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793892: je 0x793a34 */
  if (zf) goto L_793a34;
L_793898: /* 793898: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79389b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79389e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7938a1: mov eax, ecx */
  eax = ecx;
/* 7938a3: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938a6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938a8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938ab: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938ad: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7938b0: mov eax, dword ptr [esi*4 + 0xb421f8] */
  eax = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 7938b7: mov esi, dword ptr [edx*4 + 0xb321f8] */
  esi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 7938be: mov edx, dword ptr [ecx*4 + 0xb221f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb221f8u));
/* 7938c5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7938c8: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938ca: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938cc: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_7938d0: /* 7938d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7938d2: je 0x793a21 */
  if (zf) goto L_793a21;
L_7938d8: /* 7938d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7938da: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 7938e0: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938e6: je 0x793a19 */
  if (zf) goto L_793a19;
L_7938ec: /* 7938ec: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7938ef: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938f2: jne 0x793a19 */
  if (!zf) goto L_793a19;
L_7938f8: /* 7938f8: xor edi, edi */
  edi = 0;
/* 7938fa: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 793900: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 793906: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 793909: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 79390c: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 79390f: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 793912: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 793915: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 793918: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 79391b: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 79391e: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793925: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 793928: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 79392e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793930: test byte ptr [ecx + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793937: je 0x793a19 */
  if (zf) goto L_793a19;
L_79393d: /* 79393d: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793940: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793942: je 0x793a19 */
  if (zf) goto L_793a19;
L_793948: /* 793948: mov eax, edx */
  eax = edx;
/* 79394a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_793950: /* 793950: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793952: je 0x793961 */
  if (zf) goto L_793961;
L_793954: /* 793954: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793956: je 0x793a19 */
  if (zf) goto L_793a19;
L_79395c: /* 79395c: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 79395f: jmp 0x793950 */
  goto L_793950;
L_793961: /* 793961: mov esi, dword ptr [ebp + 0x30] */
  esi = R32((uint32_t)(ebp + 0x30u));
/* 793964: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793968: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x79396eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79396e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793970: je 0x793a19 */
  if (zf) goto L_793a19;
L_793976: /* 793976: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793978: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79397a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793980: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793984: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79398b: mov ecx, esp */
  ecx = esp;
/* 79398d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 79398f: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793992: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793995: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793998: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 79399b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79399e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7939a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939a3: mov ecx, esp */
  ecx = esp;
/* 7939a5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939a7: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7939aa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939ad: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7939b0: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939b3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7939b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939b9: mov ecx, esp */
  ecx = esp;
/* 7939bb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939bd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7939c0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939c3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7939c6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939c9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7939cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939cc: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7939d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939d3: mov ecx, eax */
  ecx = eax;
/* 7939d5: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7939d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7939d8: xor edx, edx */
  edx = 0;
/* 7939da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939dc: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7939df: mov eax, edx */
  eax = edx;
/* 7939e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939e3: je 0x793a19 */
  if (zf) goto L_793a19;
L_7939e5: /* 7939e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7939e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7939ea: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7939ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7939f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7939f2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939f4: je 0x793a07 */
  if (zf) goto L_793a07;
L_7939f6: /* 7939f6: mov ecx, 0xc */
  ecx = 0xcu;
/* 7939fb: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793a01: mov edi, eax */
  edi = eax;
/* 793a03: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793a05: jmp 0x793a09 */
  goto L_793a09;
L_793a07: /* 793a07: xor eax, eax */
  eax = 0;
L_793a09: /* 793a09: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793a11: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a14: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a17: jne 0x793a21 */
  if (!zf) goto L_793a21;
L_793a19: /* 793a19: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793a1c: jmp 0x7938d0 */
  goto L_7938d0;
L_793a21: /* 793a21: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793a26: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a2c: /* 793a2c: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a2f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a32: je 0x793a4a */
  if (zf) goto L_793a4a;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a4a: /* 793a4a: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a4d: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a4f: /* 793a4f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a52: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793a55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793a56: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 793a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793a5e: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 793a61: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 793a63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793a66: mov eax, esp */
  eax = esp;
/* 793a68: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a6a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 793a6d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 793a70: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 793a73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793a76: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 793a79: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793a7eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793a7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793a81: cmp dword ptr [ebp - 0x54], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a84: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a86: /* 793a86: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793a89: cmp dword ptr [ebp - 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a8c: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a8e: /* 793a8e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793a91: cmp dword ptr [ebp - 0x4c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a94: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a96: /* 793a96: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793ab6: /* 793ab6: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793ab9: cmp esi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793abc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793abf: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac1: /* 793ac1: cmp edx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793ac4: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac6: /* 793ac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ac9: cmp ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793acc: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ace: /* 793ace: xor eax, eax */
  eax = 0;
/* 793ad0: jmp 0x793890 */
  goto L_793890;
L_793ad5: /* 793ad5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 793ad8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793adb: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793ae2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793ae6: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793aebu); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793aeb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793aee: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793af1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 793af4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 793af7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793afd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793b02: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b07u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b07: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b0a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b0d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 793b10: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 793b13: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 793b16: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793b21: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b26u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b29: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b2c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b2f: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 793b32: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 793b35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b3a: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b3c: /* 793b3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b3f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b44: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b47: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b49: /* 793b49: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 793b4c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b57: jp 0x793b61 */
  if (pf) goto L_793b61;
L_793b59: /* 793b59: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 793b5a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b5d: mov eax, esi */
  eax = esi;
/* 793b5f: jmp 0x793bbc */
  goto L_793bbc;
L_793b61: /* 793b61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 793b62: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b65: mov eax, esi */
  eax = esi;
/* 793b67: jmp 0x793bbc */
  goto L_793bbc;
L_793b69: /* 793b69: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b6c: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 793b6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b74: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b76: /* 793b76: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b79: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b81: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b83: /* 793b83: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 793b86: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b91: jp 0x793b9b */
  if (pf) goto L_793b9b;
L_793b93: /* 793b93: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 793b94: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b97: mov eax, edx */
  eax = edx;
/* 793b99: jmp 0x793bbc */
  goto L_793bbc;
L_793b9b: /* 793b9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 793b9c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b9f: mov eax, edx */
  eax = edx;
/* 793ba1: jmp 0x793bbc */
  goto L_793bbc;
L_793ba3: /* 793ba3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 793ba6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793bac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793bae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793bb1: jp 0x793bb6 */
  if (pf) goto L_793bb6;
L_793bb3: /* 793bb3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 793bb4: jmp 0x793bb7 */
  goto L_793bb7;
L_793bb6: /* 793bb6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_793bb7: /* 793bb7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 793bba: mov eax, edi */
  eax = edi;
L_793bbc: /* 793bbc: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793bc1: jge 0x793ace */
  if ((sf == of)) goto L_793ace;
L_793bc7: /* 793bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 793bc9: jl 0x793ace */
  if ((sf != of)) goto L_793ace;
L_793bcf: /* 793bcf: jmp 0x79388b */
  goto L_79388b;
}

void f_793b9b(void) {
  LOAD_REGS();
  goto L_793b9b;
L_79388b: /* 79388b: mov eax, 1 */
  eax = 0x1u;
L_793890: /* 793890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793892: je 0x793a34 */
  if (zf) goto L_793a34;
L_793898: /* 793898: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79389b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79389e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7938a1: mov eax, ecx */
  eax = ecx;
/* 7938a3: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938a6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938a8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938ab: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938ad: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7938b0: mov eax, dword ptr [esi*4 + 0xb421f8] */
  eax = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 7938b7: mov esi, dword ptr [edx*4 + 0xb321f8] */
  esi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 7938be: mov edx, dword ptr [ecx*4 + 0xb221f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb221f8u));
/* 7938c5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7938c8: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938ca: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938cc: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_7938d0: /* 7938d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7938d2: je 0x793a21 */
  if (zf) goto L_793a21;
L_7938d8: /* 7938d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7938da: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 7938e0: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938e6: je 0x793a19 */
  if (zf) goto L_793a19;
L_7938ec: /* 7938ec: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7938ef: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938f2: jne 0x793a19 */
  if (!zf) goto L_793a19;
L_7938f8: /* 7938f8: xor edi, edi */
  edi = 0;
/* 7938fa: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 793900: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 793906: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 793909: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 79390c: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 79390f: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 793912: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 793915: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 793918: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 79391b: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 79391e: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793925: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 793928: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 79392e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793930: test byte ptr [ecx + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793937: je 0x793a19 */
  if (zf) goto L_793a19;
L_79393d: /* 79393d: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793940: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793942: je 0x793a19 */
  if (zf) goto L_793a19;
L_793948: /* 793948: mov eax, edx */
  eax = edx;
/* 79394a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_793950: /* 793950: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793952: je 0x793961 */
  if (zf) goto L_793961;
L_793954: /* 793954: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793956: je 0x793a19 */
  if (zf) goto L_793a19;
L_79395c: /* 79395c: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 79395f: jmp 0x793950 */
  goto L_793950;
L_793961: /* 793961: mov esi, dword ptr [ebp + 0x30] */
  esi = R32((uint32_t)(ebp + 0x30u));
/* 793964: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793968: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x79396eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79396e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793970: je 0x793a19 */
  if (zf) goto L_793a19;
L_793976: /* 793976: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793978: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79397a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793980: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793984: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79398b: mov ecx, esp */
  ecx = esp;
/* 79398d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 79398f: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793992: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793995: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793998: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 79399b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79399e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7939a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939a3: mov ecx, esp */
  ecx = esp;
/* 7939a5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939a7: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7939aa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939ad: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7939b0: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939b3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7939b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939b9: mov ecx, esp */
  ecx = esp;
/* 7939bb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939bd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7939c0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939c3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7939c6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939c9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7939cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939cc: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7939d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939d3: mov ecx, eax */
  ecx = eax;
/* 7939d5: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7939d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7939d8: xor edx, edx */
  edx = 0;
/* 7939da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939dc: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7939df: mov eax, edx */
  eax = edx;
/* 7939e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939e3: je 0x793a19 */
  if (zf) goto L_793a19;
L_7939e5: /* 7939e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7939e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7939ea: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7939ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7939f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7939f2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939f4: je 0x793a07 */
  if (zf) goto L_793a07;
L_7939f6: /* 7939f6: mov ecx, 0xc */
  ecx = 0xcu;
/* 7939fb: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793a01: mov edi, eax */
  edi = eax;
/* 793a03: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793a05: jmp 0x793a09 */
  goto L_793a09;
L_793a07: /* 793a07: xor eax, eax */
  eax = 0;
L_793a09: /* 793a09: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793a11: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a14: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a17: jne 0x793a21 */
  if (!zf) goto L_793a21;
L_793a19: /* 793a19: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793a1c: jmp 0x7938d0 */
  goto L_7938d0;
L_793a21: /* 793a21: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793a26: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a2c: /* 793a2c: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a2f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a32: je 0x793a4a */
  if (zf) goto L_793a4a;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a4a: /* 793a4a: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a4d: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a4f: /* 793a4f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a52: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793a55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793a56: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 793a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793a5e: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 793a61: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 793a63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793a66: mov eax, esp */
  eax = esp;
/* 793a68: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a6a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 793a6d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 793a70: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 793a73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793a76: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 793a79: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793a7eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793a7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793a81: cmp dword ptr [ebp - 0x54], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a84: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a86: /* 793a86: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793a89: cmp dword ptr [ebp - 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a8c: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a8e: /* 793a8e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793a91: cmp dword ptr [ebp - 0x4c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a94: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a96: /* 793a96: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793ab6: /* 793ab6: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793ab9: cmp esi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793abc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793abf: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac1: /* 793ac1: cmp edx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793ac4: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac6: /* 793ac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ac9: cmp ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793acc: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ace: /* 793ace: xor eax, eax */
  eax = 0;
/* 793ad0: jmp 0x793890 */
  goto L_793890;
L_793ad5: /* 793ad5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 793ad8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793adb: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793ae2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793ae6: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793aebu); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793aeb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793aee: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793af1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 793af4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 793af7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793afd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793b02: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b07u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b07: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b0a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b0d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 793b10: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 793b13: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 793b16: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793b21: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b26u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b29: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b2c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b2f: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 793b32: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 793b35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b3a: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b3c: /* 793b3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b3f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b44: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b47: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b49: /* 793b49: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 793b4c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b57: jp 0x793b61 */
  if (pf) goto L_793b61;
L_793b59: /* 793b59: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 793b5a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b5d: mov eax, esi */
  eax = esi;
/* 793b5f: jmp 0x793bbc */
  goto L_793bbc;
L_793b61: /* 793b61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 793b62: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b65: mov eax, esi */
  eax = esi;
/* 793b67: jmp 0x793bbc */
  goto L_793bbc;
L_793b69: /* 793b69: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b6c: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 793b6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b74: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b76: /* 793b76: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b79: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b81: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b83: /* 793b83: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 793b86: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b91: jp 0x793b9b */
  if (pf) goto L_793b9b;
L_793b93: /* 793b93: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 793b94: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b97: mov eax, edx */
  eax = edx;
/* 793b99: jmp 0x793bbc */
  goto L_793bbc;
L_793b9b: /* 793b9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 793b9c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b9f: mov eax, edx */
  eax = edx;
/* 793ba1: jmp 0x793bbc */
  goto L_793bbc;
L_793ba3: /* 793ba3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 793ba6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793bac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793bae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793bb1: jp 0x793bb6 */
  if (pf) goto L_793bb6;
L_793bb3: /* 793bb3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 793bb4: jmp 0x793bb7 */
  goto L_793bb7;
L_793bb6: /* 793bb6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_793bb7: /* 793bb7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 793bba: mov eax, edi */
  eax = edi;
L_793bbc: /* 793bbc: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793bc1: jge 0x793ace */
  if ((sf == of)) goto L_793ace;
L_793bc7: /* 793bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 793bc9: jl 0x793ace */
  if ((sf != of)) goto L_793ace;
L_793bcf: /* 793bcf: jmp 0x79388b */
  goto L_79388b;
}

void f_793ba3(void) {
  LOAD_REGS();
  goto L_793ba3;
L_79388b: /* 79388b: mov eax, 1 */
  eax = 0x1u;
L_793890: /* 793890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793892: je 0x793a34 */
  if (zf) goto L_793a34;
L_793898: /* 793898: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79389b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79389e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7938a1: mov eax, ecx */
  eax = ecx;
/* 7938a3: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938a6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938a8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938ab: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938ad: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7938b0: mov eax, dword ptr [esi*4 + 0xb421f8] */
  eax = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 7938b7: mov esi, dword ptr [edx*4 + 0xb321f8] */
  esi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 7938be: mov edx, dword ptr [ecx*4 + 0xb221f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb221f8u));
/* 7938c5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7938c8: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938ca: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938cc: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_7938d0: /* 7938d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7938d2: je 0x793a21 */
  if (zf) goto L_793a21;
L_7938d8: /* 7938d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7938da: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 7938e0: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938e6: je 0x793a19 */
  if (zf) goto L_793a19;
L_7938ec: /* 7938ec: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7938ef: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938f2: jne 0x793a19 */
  if (!zf) goto L_793a19;
L_7938f8: /* 7938f8: xor edi, edi */
  edi = 0;
/* 7938fa: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 793900: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 793906: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 793909: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 79390c: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 79390f: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 793912: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 793915: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 793918: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 79391b: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 79391e: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793925: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 793928: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 79392e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793930: test byte ptr [ecx + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793937: je 0x793a19 */
  if (zf) goto L_793a19;
L_79393d: /* 79393d: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793940: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793942: je 0x793a19 */
  if (zf) goto L_793a19;
L_793948: /* 793948: mov eax, edx */
  eax = edx;
/* 79394a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_793950: /* 793950: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793952: je 0x793961 */
  if (zf) goto L_793961;
L_793954: /* 793954: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793956: je 0x793a19 */
  if (zf) goto L_793a19;
L_79395c: /* 79395c: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 79395f: jmp 0x793950 */
  goto L_793950;
L_793961: /* 793961: mov esi, dword ptr [ebp + 0x30] */
  esi = R32((uint32_t)(ebp + 0x30u));
/* 793964: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793968: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x79396eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79396e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793970: je 0x793a19 */
  if (zf) goto L_793a19;
L_793976: /* 793976: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793978: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79397a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793980: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793984: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79398b: mov ecx, esp */
  ecx = esp;
/* 79398d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 79398f: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793992: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793995: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793998: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 79399b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79399e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7939a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939a3: mov ecx, esp */
  ecx = esp;
/* 7939a5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939a7: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7939aa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939ad: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7939b0: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939b3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7939b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939b9: mov ecx, esp */
  ecx = esp;
/* 7939bb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939bd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7939c0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939c3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7939c6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939c9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7939cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939cc: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7939d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939d3: mov ecx, eax */
  ecx = eax;
/* 7939d5: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7939d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7939d8: xor edx, edx */
  edx = 0;
/* 7939da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939dc: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7939df: mov eax, edx */
  eax = edx;
/* 7939e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939e3: je 0x793a19 */
  if (zf) goto L_793a19;
L_7939e5: /* 7939e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7939e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7939ea: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7939ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7939f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7939f2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939f4: je 0x793a07 */
  if (zf) goto L_793a07;
L_7939f6: /* 7939f6: mov ecx, 0xc */
  ecx = 0xcu;
/* 7939fb: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793a01: mov edi, eax */
  edi = eax;
/* 793a03: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793a05: jmp 0x793a09 */
  goto L_793a09;
L_793a07: /* 793a07: xor eax, eax */
  eax = 0;
L_793a09: /* 793a09: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793a11: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a14: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a17: jne 0x793a21 */
  if (!zf) goto L_793a21;
L_793a19: /* 793a19: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793a1c: jmp 0x7938d0 */
  goto L_7938d0;
L_793a21: /* 793a21: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793a26: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a2c: /* 793a2c: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a2f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a32: je 0x793a4a */
  if (zf) goto L_793a4a;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a4a: /* 793a4a: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a4d: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a4f: /* 793a4f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a52: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793a55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793a56: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 793a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793a5e: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 793a61: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 793a63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793a66: mov eax, esp */
  eax = esp;
/* 793a68: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a6a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 793a6d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 793a70: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 793a73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793a76: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 793a79: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793a7eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793a7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793a81: cmp dword ptr [ebp - 0x54], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a84: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a86: /* 793a86: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793a89: cmp dword ptr [ebp - 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a8c: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a8e: /* 793a8e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793a91: cmp dword ptr [ebp - 0x4c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a94: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a96: /* 793a96: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793ab6: /* 793ab6: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793ab9: cmp esi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793abc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793abf: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac1: /* 793ac1: cmp edx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793ac4: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac6: /* 793ac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ac9: cmp ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793acc: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ace: /* 793ace: xor eax, eax */
  eax = 0;
/* 793ad0: jmp 0x793890 */
  goto L_793890;
L_793ad5: /* 793ad5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 793ad8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793adb: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793ae2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793ae6: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793aebu); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793aeb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793aee: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793af1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 793af4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 793af7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793afd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793b02: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b07u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b07: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b0a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b0d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 793b10: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 793b13: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 793b16: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793b21: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b26u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b29: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b2c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b2f: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 793b32: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 793b35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b3a: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b3c: /* 793b3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b3f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b44: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b47: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b49: /* 793b49: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 793b4c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b57: jp 0x793b61 */
  if (pf) goto L_793b61;
L_793b59: /* 793b59: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 793b5a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b5d: mov eax, esi */
  eax = esi;
/* 793b5f: jmp 0x793bbc */
  goto L_793bbc;
L_793b61: /* 793b61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 793b62: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b65: mov eax, esi */
  eax = esi;
/* 793b67: jmp 0x793bbc */
  goto L_793bbc;
L_793b69: /* 793b69: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b6c: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 793b6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b74: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b76: /* 793b76: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b79: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b81: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b83: /* 793b83: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 793b86: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b91: jp 0x793b9b */
  if (pf) goto L_793b9b;
L_793b93: /* 793b93: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 793b94: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b97: mov eax, edx */
  eax = edx;
/* 793b99: jmp 0x793bbc */
  goto L_793bbc;
L_793b9b: /* 793b9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 793b9c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b9f: mov eax, edx */
  eax = edx;
/* 793ba1: jmp 0x793bbc */
  goto L_793bbc;
L_793ba3: /* 793ba3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 793ba6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793bac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793bae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793bb1: jp 0x793bb6 */
  if (pf) goto L_793bb6;
L_793bb3: /* 793bb3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 793bb4: jmp 0x793bb7 */
  goto L_793bb7;
L_793bb6: /* 793bb6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_793bb7: /* 793bb7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 793bba: mov eax, edi */
  eax = edi;
L_793bbc: /* 793bbc: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793bc1: jge 0x793ace */
  if ((sf == of)) goto L_793ace;
L_793bc7: /* 793bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 793bc9: jl 0x793ace */
  if ((sf != of)) goto L_793ace;
L_793bcf: /* 793bcf: jmp 0x79388b */
  goto L_79388b;
}

void f_793bb6(void) {
  LOAD_REGS();
  goto L_793bb6;
L_79388b: /* 79388b: mov eax, 1 */
  eax = 0x1u;
L_793890: /* 793890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793892: je 0x793a34 */
  if (zf) goto L_793a34;
L_793898: /* 793898: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79389b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79389e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7938a1: mov eax, ecx */
  eax = ecx;
/* 7938a3: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938a6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938a8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7938ab: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7938ad: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7938b0: mov eax, dword ptr [esi*4 + 0xb421f8] */
  eax = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 7938b7: mov esi, dword ptr [edx*4 + 0xb321f8] */
  esi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 7938be: mov edx, dword ptr [ecx*4 + 0xb221f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb221f8u));
/* 7938c5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7938c8: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938ca: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7938cc: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_7938d0: /* 7938d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7938d2: je 0x793a21 */
  if (zf) goto L_793a21;
L_7938d8: /* 7938d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7938da: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 7938e0: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938e6: je 0x793a19 */
  if (zf) goto L_793a19;
L_7938ec: /* 7938ec: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7938ef: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7938f2: jne 0x793a19 */
  if (!zf) goto L_793a19;
L_7938f8: /* 7938f8: xor edi, edi */
  edi = 0;
/* 7938fa: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 793900: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 793906: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 793909: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 79390c: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 79390f: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 793912: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 793915: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 793918: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 79391b: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 79391e: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793925: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 793928: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 79392e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793930: test byte ptr [ecx + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793937: je 0x793a19 */
  if (zf) goto L_793a19;
L_79393d: /* 79393d: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793940: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793942: je 0x793a19 */
  if (zf) goto L_793a19;
L_793948: /* 793948: mov eax, edx */
  eax = edx;
/* 79394a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_793950: /* 793950: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793952: je 0x793961 */
  if (zf) goto L_793961;
L_793954: /* 793954: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793956: je 0x793a19 */
  if (zf) goto L_793a19;
L_79395c: /* 79395c: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 79395f: jmp 0x793950 */
  goto L_793950;
L_793961: /* 793961: mov esi, dword ptr [ebp + 0x30] */
  esi = R32((uint32_t)(ebp + 0x30u));
/* 793964: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793968: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x79396eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79396e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793970: je 0x793a19 */
  if (zf) goto L_793a19;
L_793976: /* 793976: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793978: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79397a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793980: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793984: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79398b: mov ecx, esp */
  ecx = esp;
/* 79398d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 79398f: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793992: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793995: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793998: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 79399b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79399e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7939a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939a3: mov ecx, esp */
  ecx = esp;
/* 7939a5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939a7: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7939aa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939ad: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7939b0: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939b3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7939b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7939b9: mov ecx, esp */
  ecx = esp;
/* 7939bb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7939bd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7939c0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7939c3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7939c6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7939c9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7939cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939cc: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7939d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7939d3: mov ecx, eax */
  ecx = eax;
/* 7939d5: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7939d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7939d8: xor edx, edx */
  edx = 0;
/* 7939da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939dc: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7939df: mov eax, edx */
  eax = edx;
/* 7939e1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939e3: je 0x793a19 */
  if (zf) goto L_793a19;
L_7939e5: /* 7939e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7939e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7939ea: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7939ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7939f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7939f2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7939f4: je 0x793a07 */
  if (zf) goto L_793a07;
L_7939f6: /* 7939f6: mov ecx, 0xc */
  ecx = 0xcu;
/* 7939fb: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793a01: mov edi, eax */
  edi = eax;
/* 793a03: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793a05: jmp 0x793a09 */
  goto L_793a09;
L_793a07: /* 793a07: xor eax, eax */
  eax = 0;
L_793a09: /* 793a09: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a0e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793a11: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a14: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a17: jne 0x793a21 */
  if (!zf) goto L_793a21;
L_793a19: /* 793a19: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793a1c: jmp 0x7938d0 */
  goto L_7938d0;
L_793a21: /* 793a21: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793a26: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a2c: /* 793a2c: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a2f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a32: je 0x793a4a */
  if (zf) goto L_793a4a;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a4a: /* 793a4a: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793a4d: je 0x793ab6 */
  if (zf) goto L_793ab6;
L_793a4f: /* 793a4f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a52: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793a55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793a56: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 793a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793a5e: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 793a61: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 793a63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793a66: mov eax, esp */
  eax = esp;
/* 793a68: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793a6a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 793a6d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 793a70: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 793a73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793a76: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 793a79: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793a7eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793a7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793a81: cmp dword ptr [ebp - 0x54], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a84: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a86: /* 793a86: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793a89: cmp dword ptr [ebp - 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a8c: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a8e: /* 793a8e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793a91: cmp dword ptr [ebp - 0x4c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793a94: jne 0x793ab6 */
  if (!zf) goto L_793ab6;
L_793a96: /* 793a96: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793ab6: /* 793ab6: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793ab9: cmp esi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793abc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793abf: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac1: /* 793ac1: cmp edx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793ac4: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ac6: /* 793ac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ac9: cmp ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793acc: jne 0x793ad5 */
  if (!zf) goto L_793ad5;
L_793ace: /* 793ace: xor eax, eax */
  eax = 0;
/* 793ad0: jmp 0x793890 */
  goto L_793890;
L_793ad5: /* 793ad5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 793ad8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793adb: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793ae2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 793ae6: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793aebu); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793aeb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793aee: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793af1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 793af4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 793af7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793afd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793b02: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b07u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b07: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b0a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b0d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 793b10: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 793b13: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 793b16: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 793b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793b20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793b21: call 0x6c6235 */
  esp -= 4; W32(esp, 0x793b26u); SPILL(); f_6c6235(); if (g_unwind) return; RELOAD();
/* 793b26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 793b29: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b2c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 793b2f: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 793b32: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 793b35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b3a: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b3c: /* 793b3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 793b3f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b44: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b47: jp 0x793b69 */
  if (pf) goto L_793b69;
L_793b49: /* 793b49: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 793b4c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b54: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b57: jp 0x793b61 */
  if (pf) goto L_793b61;
L_793b59: /* 793b59: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 793b5a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b5d: mov eax, esi */
  eax = esi;
/* 793b5f: jmp 0x793bbc */
  goto L_793bbc;
L_793b61: /* 793b61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 793b62: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 793b65: mov eax, esi */
  eax = esi;
/* 793b67: jmp 0x793bbc */
  goto L_793bbc;
L_793b69: /* 793b69: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b6c: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 793b6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b74: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b76: /* 793b76: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 793b79: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 793b7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b81: jp 0x793ba3 */
  if (pf) goto L_793ba3;
L_793b83: /* 793b83: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 793b86: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793b91: jp 0x793b9b */
  if (pf) goto L_793b9b;
L_793b93: /* 793b93: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 793b94: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b97: mov eax, edx */
  eax = edx;
/* 793b99: jmp 0x793bbc */
  goto L_793bbc;
L_793b9b: /* 793b9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 793b9c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 793b9f: mov eax, edx */
  eax = edx;
/* 793ba1: jmp 0x793bbc */
  goto L_793bbc;
L_793ba3: /* 793ba3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 793ba6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 793bac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 793bae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 793bb1: jp 0x793bb6 */
  if (pf) goto L_793bb6;
L_793bb3: /* 793bb3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 793bb4: jmp 0x793bb7 */
  goto L_793bb7;
L_793bb6: /* 793bb6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_793bb7: /* 793bb7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 793bba: mov eax, edi */
  eax = edi;
L_793bbc: /* 793bbc: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793bc1: jge 0x793ace */
  if ((sf == of)) goto L_793ace;
L_793bc7: /* 793bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 793bc9: jl 0x793ace */
  if ((sf != of)) goto L_793ace;
L_793bcf: /* 793bcf: jmp 0x79388b */
  goto L_79388b;
}

void f_793bd4(void) {
  LOAD_REGS();
  goto L_793bd4;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a9b: /* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_793aa3: /* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793bd4: /* 793bd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 793bd5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 793bdb: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x793be1u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 793be1: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 793be4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793be5: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 793be8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793be9: mov ecx, eax */
  ecx = eax;
/* 793beb: call dword ptr [0xcfa5e4] */
  esp -= 4; W32(esp, 0x793bf1u); SPILL(); f_4e348b(); if (g_unwind) return; /* Core!??HFBox@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 793bf1: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 793bf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793bf5: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 793bfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793bfc: mov ecx, eax */
  ecx = eax;
/* 793bfe: call dword ptr [0xcfa5e4] */
  esp -= 4; W32(esp, 0x793c04u); SPILL(); f_4e348b(); if (g_unwind) return; /* Core!??HFBox@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 793c04: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 793c0a: fsub dword ptr [ebp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x2cu)));
/* 793c0d: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 793c10: fld dword ptr [ebp - 0xa4] */
  { double v = F32((uint32_t)(ebp + 0xffffff5cu)); FPUSH(v); }
/* 793c16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793c17: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 793c1a: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 793c1d: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 793c23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793c24: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 793c27: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 793c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793c2b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793c2e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 793c31: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793c34: mov edx, esp */
  edx = esp;
/* 793c36: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 793c39: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793c3c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 793c3e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 793c41: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 793c44: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793c47: mov ecx, esi */
  ecx = esi;
/* 793c49: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 793c4c: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793c51u); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793c51: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 793c57: fadd dword ptr [ebp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x2cu)));
/* 793c5a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 793c5d: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 793c63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793c64: fadd dword ptr [ebp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x28u)));
/* 793c67: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793c6a: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 793c70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793c71: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 793c74: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 793c77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793c78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793c7b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 793c7e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 793c81: mov ecx, esp */
  ecx = esp;
/* 793c83: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 793c85: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 793c88: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 793c8b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 793c8e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 793c91: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 793c94: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 793c97: mov ecx, esi */
  ecx = esi;
/* 793c99: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793c9eu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793c9e: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 793ca1: mov esi, dword ptr [0xb521fc] */
  esi = R32((uint32_t)(0xb521fcu));
L_793ca7: /* 793ca7: mov ecx, eax */
  ecx = eax;
/* 793ca9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 793cac: cmp ecx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793caf: jg 0x793e82 */
  if ((!zf && sf == of)) goto L_793e82;
L_793cb5: /* 793cb5: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 793cb8: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 793cbb: jmp 0x793cc0 */
  goto L_793cc0;
L_793cc0: /* 793cc0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 793cc3: cmp eax, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793cc6: jg 0x793e79 */
  if ((!zf && sf == of)) goto L_793e79;
L_793ccc: /* 793ccc: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 793ccf: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_793cd2: /* 793cd2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793cd5: cmp edx, dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793cd8: jg 0x793e71 */
  if ((!zf && sf == of)) goto L_793e71;
L_793cde: /* 793cde: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793ce1: mov edi, edx */
  edi = edx;
/* 793ce3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ce6: mov eax, edi */
  eax = edi;
/* 793ce8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 793ceb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 793ced: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 793cf0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 793cf2: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 793cf5: mov eax, dword ptr [edi*4 + 0xb221f8] */
  eax = R32((uint32_t)(edi*4 + 0xb221f8u));
/* 793cfc: mov edi, dword ptr [edx*4 + 0xb321f8] */
  edi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 793d03: mov edx, dword ptr [ecx*4 + 0xb421f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb421f8u));
/* 793d0a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793d0d: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 793d0f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 793d11: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_793d15: /* 793d15: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793d17: je 0x793e69 */
  if (zf) goto L_793e69;
L_793d1d: /* 793d1d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 793d1f: cmp dword ptr [eax + 0x164], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d25: je 0x793e61 */
  if (zf) goto L_793e61;
L_793d2b: /* 793d2b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 793d2e: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d31: jne 0x793e61 */
  if (!zf) goto L_793e61;
L_793d37: /* 793d37: xor ecx, ecx */
  ecx = 0;
/* 793d39: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 793d3f: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 793d45: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 793d48: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 793d4b: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 793d4e: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 793d51: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 793d54: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 793d57: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 793d5a: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 793d5d: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 793d60: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793d67: mov dword ptr [eax + 0x164], esi */
  W32((uint32_t)(eax + 0x164u), esi);
/* 793d6d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793d6f: mov al, byte ptr [ecx + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x88u))) & 0xffu);
/* 793d75: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 793d77: jns 0x793e5b */
  if (!sf) goto L_793e5b;
L_793d7d: /* 793d7d: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 793d80: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d82: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793d88: /* 793d88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793d8a: je 0x793d99 */
  if (zf) goto L_793d99;
L_793d8c: /* 793d8c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d8e: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793d94: /* 793d94: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 793d97: jmp 0x793d88 */
  goto L_793d88;
L_793d99: /* 793d99: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 793d9c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793d9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793d9f: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793da2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793da3: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x793da9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793da9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793dab: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793db1: /* 793db1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793db3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793db5: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x793dbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793dbb: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 793dbe: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793dc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793dc2: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793dc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793dc6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793dc9: mov ecx, esp */
  ecx = esp;
/* 793dcb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 793dcd: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793dd0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793dd3: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793dd6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 793dd9: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 793ddc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 793dde: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793de1: mov ecx, esp */
  ecx = esp;
/* 793de3: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 793de5: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 793de8: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793deb: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 793dee: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 793df1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 793df4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793df7: mov ecx, esp */
  ecx = esp;
/* 793df9: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 793dfb: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 793dfe: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793e01: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 793e04: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 793e07: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793e09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793e0a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 793e10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793e11: mov ecx, eax */
  ecx = eax;
/* 793e13: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x793e16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793e16: xor edx, edx */
  edx = 0;
/* 793e18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e1a: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 793e1d: mov eax, edx */
  eax = edx;
/* 793e1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e21: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793e23: /* 793e23: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 793e26: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 793e28: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 793e2a: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x793e30u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 793e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e32: je 0x793e45 */
  if (zf) goto L_793e45;
L_793e34: /* 793e34: mov ecx, 0xc */
  ecx = 0xcu;
/* 793e39: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793e3f: mov edi, eax */
  edi = eax;
/* 793e41: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793e43: jmp 0x793e47 */
  goto L_793e47;
L_793e45: /* 793e45: xor eax, eax */
  eax = 0;
L_793e47: /* 793e47: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793e4a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793e4c: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 793e4f: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793e52: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793e55: jne 0x793aa3 */
  if (!zf) goto L_793aa3;
L_793e5b: /* 793e5b: mov esi, dword ptr [0xb521fc] */
  esi = R32((uint32_t)(0xb521fcu));
L_793e61: /* 793e61: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793e64: jmp 0x793d15 */
  goto L_793d15;
L_793e69: /* 793e69: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 793e6c: jmp 0x793cd2 */
  goto L_793cd2;
L_793e71: /* 793e71: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 793e74: jmp 0x793cc0 */
  goto L_793cc0;
L_793e79: /* 793e79: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793e7c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 793e7d: jmp 0x793ca7 */
  goto L_793ca7;
L_793e82: /* 793e82: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793e85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e87: je 0x793a34 */
  if (zf) goto L_793a34;
L_793e8d: /* 793e8d: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793e90: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793e93: je 0x793a34 */
  if (zf) goto L_793a34;
L_793e99: /* 793e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793e9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793e9b: jmp 0x793a9b */
  goto L_793a9b;
}

void f_793cbd(void) {
  LOAD_REGS();
  goto L_793cbd;
L_793a34: /* 793a34: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793a37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793a44: mov esp, ebp */
  esp = ebp;
/* 793a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793a47: ret 0x34 */
  esp += 56; SPILL(); return;
L_793a9b: /* 793a9b: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x793aa0u); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 793aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_793aa3: /* 793aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 793aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 793aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 793aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 793aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 793ab0: mov esp, ebp */
  esp = ebp;
/* 793ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 793ab3: ret 0x34 */
  esp += 56; SPILL(); return;
L_793ca7: /* 793ca7: mov ecx, eax */
  ecx = eax;
/* 793ca9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 793cac: cmp ecx, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793caf: jg 0x793e82 */
  if ((!zf && sf == of)) goto L_793e82;
L_793cb5: /* 793cb5: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 793cb8: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 793cbb: jmp 0x793cc0 */
  goto L_793cc0;
L_793cbd: /* 793cbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_793cc0: /* 793cc0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 793cc3: cmp eax, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793cc6: jg 0x793e79 */
  if ((!zf && sf == of)) goto L_793e79;
L_793ccc: /* 793ccc: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 793ccf: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_793cd2: /* 793cd2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 793cd5: cmp edx, dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 793cd8: jg 0x793e71 */
  if ((!zf && sf == of)) goto L_793e71;
L_793cde: /* 793cde: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793ce1: mov edi, edx */
  edi = edx;
/* 793ce3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 793ce6: mov eax, edi */
  eax = edi;
/* 793ce8: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 793ceb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 793ced: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 793cf0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 793cf2: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 793cf5: mov eax, dword ptr [edi*4 + 0xb221f8] */
  eax = R32((uint32_t)(edi*4 + 0xb221f8u));
/* 793cfc: mov edi, dword ptr [edx*4 + 0xb321f8] */
  edi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 793d03: mov edx, dword ptr [ecx*4 + 0xb421f8] */
  edx = R32((uint32_t)(ecx*4 + 0xb421f8u));
/* 793d0a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 793d0d: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 793d0f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 793d11: mov ebx, dword ptr [ecx + eax*4 + 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x4u));
L_793d15: /* 793d15: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793d17: je 0x793e69 */
  if (zf) goto L_793e69;
L_793d1d: /* 793d1d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 793d1f: cmp dword ptr [eax + 0x164], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d25: je 0x793e61 */
  if (zf) goto L_793e61;
L_793d2b: /* 793d2b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 793d2e: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d31: jne 0x793e61 */
  if (!zf) goto L_793e61;
L_793d37: /* 793d37: xor ecx, ecx */
  ecx = 0;
/* 793d39: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 793d3f: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 793d45: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 793d48: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 793d4b: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 793d4e: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 793d51: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 793d54: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 793d57: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 793d5a: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 793d5d: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 793d60: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 793d67: mov dword ptr [eax + 0x164], esi */
  W32((uint32_t)(eax + 0x164u), esi);
/* 793d6d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793d6f: mov al, byte ptr [ecx + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x88u))) & 0xffu);
/* 793d75: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 793d77: jns 0x793e5b */
  if (!sf) goto L_793e5b;
L_793d7d: /* 793d7d: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 793d80: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d82: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793d88: /* 793d88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793d8a: je 0x793d99 */
  if (zf) goto L_793d99;
L_793d8c: /* 793d8c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793d8e: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793d94: /* 793d94: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 793d97: jmp 0x793d88 */
  goto L_793d88;
L_793d99: /* 793d99: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 793d9c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793d9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793d9f: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 793da2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793da3: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x793da9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793da9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793dab: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793db1: /* 793db1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793db3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 793db5: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x793dbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793dbb: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 793dbe: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 793dc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793dc2: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 793dc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793dc6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793dc9: mov ecx, esp */
  ecx = esp;
/* 793dcb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 793dcd: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 793dd0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793dd3: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 793dd6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 793dd9: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 793ddc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 793dde: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793de1: mov ecx, esp */
  ecx = esp;
/* 793de3: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 793de5: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 793de8: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793deb: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 793dee: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 793df1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 793df4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793df7: mov ecx, esp */
  ecx = esp;
/* 793df9: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 793dfb: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 793dfe: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 793e01: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 793e04: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 793e07: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 793e09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793e0a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 793e10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793e11: mov ecx, eax */
  ecx = eax;
/* 793e13: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x793e16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793e16: xor edx, edx */
  edx = 0;
/* 793e18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e1a: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 793e1d: mov eax, edx */
  eax = edx;
/* 793e1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e21: je 0x793e5b */
  if (zf) goto L_793e5b;
L_793e23: /* 793e23: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 793e26: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 793e28: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 793e2a: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x793e30u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 793e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e32: je 0x793e45 */
  if (zf) goto L_793e45;
L_793e34: /* 793e34: mov ecx, 0xc */
  ecx = 0xcu;
/* 793e39: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 793e3f: mov edi, eax */
  edi = eax;
/* 793e41: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 793e43: jmp 0x793e47 */
  goto L_793e47;
L_793e45: /* 793e45: xor eax, eax */
  eax = 0;
L_793e47: /* 793e47: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793e4a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793e4c: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 793e4f: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793e52: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 793e55: jne 0x793aa3 */
  if (!zf) goto L_793aa3;
L_793e5b: /* 793e5b: mov esi, dword ptr [0xb521fc] */
  esi = R32((uint32_t)(0xb521fcu));
L_793e61: /* 793e61: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 793e64: jmp 0x793d15 */
  goto L_793d15;
L_793e69: /* 793e69: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 793e6c: jmp 0x793cd2 */
  goto L_793cd2;
L_793e71: /* 793e71: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 793e74: jmp 0x793cc0 */
  goto L_793cc0;
L_793e79: /* 793e79: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 793e7c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 793e7d: jmp 0x793ca7 */
  goto L_793ca7;
L_793e82: /* 793e82: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 793e85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793e87: je 0x793a34 */
  if (zf) goto L_793a34;
L_793e8d: /* 793e8d: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 793e90: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 793e93: je 0x793a34 */
  if (zf) goto L_793a34;
L_793e99: /* 793e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793e9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793e9b: jmp 0x793a9b */
  goto L_793a9b;
}

void f_793ea0(void) {
  LOAD_REGS();
L_793ea0: /* 793ea0: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 793ea6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 793eab: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 793eb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793eb2: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 793eb8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x793ebdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_793ebd(); return;
}

void f_793ebd(void) {
  LOAD_REGS();
L_793ebd: /* 793ebd: push 0xa0a698 */
  { uint32_t v = 0xa0a698u; esp -= 4; W32(esp, v); }
/* 793ec2: push 0xacae58 */
  { uint32_t v = 0xacae58u; esp -= 4; W32(esp, v); }
/* 793ec7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x793ecdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 793ecd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 793ed0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 793ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 793ed4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x793ed9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_793ed9: guest_badaddr(0x793ed9); return;
}

void f_7940b0(void) {
  LOAD_REGS();
L_7940b0: /* 7940b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7940b2: push 0x9ccf09 */
  { uint32_t v = 0x9ccf09u; esp -= 4; W32(esp, v); }
/* 7940b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7940bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7940be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7940c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7940c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7940c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7940c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7940c9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7940cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7940d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7940d2: mov esi, ecx */
  esi = ecx;
/* 7940d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7940d5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7940d9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7940dfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7940df: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 7940e6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7940e9: xor ebx, ebx */
  ebx = 0;
/* 7940eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7940ed: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7940f5: jle 0x79411b */
  if ((zf || sf != of)) goto L_79411b;
L_7940f7: /* 7940f7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7940f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7940fb: mov ecx, esi */
  ecx = esi;
/* 7940fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x794103u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 794103: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 794105: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 794108: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79410a: je 0x794113 */
  if (zf) goto L_794113;
L_79410c: /* 79410c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 79410e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 794111: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_794113: /* 794113: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 794116: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 794117: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794119: jl 0x7940f7 */
  if ((sf != of)) goto L_7940f7;
L_79411b: /* 79411b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 79411f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794120: mov eax, esi */
  eax = esi;
/* 794122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794124: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79412b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79412e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_794170(void) {
  LOAD_REGS();
L_794170: /* 794170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794171: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 794173: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 794175: mov esi, ecx */
  esi = ecx;
/* 794177: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x79417du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 79417d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 794181: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 794183: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 794185: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 794188: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794189: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7941a0(void) {
  LOAD_REGS();
L_7941a0: /* 7941a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7941a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7941a2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7941a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7941a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7941aa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7941ae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7941b0: mov esi, ecx */
  esi = ecx;
/* 7941b2: jge 0x7941c8 */
  if ((sf == of)) goto L_7941c8;
L_7941b4: /* 7941b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7941b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7941be: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7941c3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7941c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7941c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7941c8: /* 7941c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7941cb: jle 0x7941e1 */
  if ((zf || sf != of)) goto L_7941e1;
L_7941cd: /* 7941cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7941d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7941d7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7941dc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7941deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7941de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7941e1: /* 7941e1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7941e5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7941e8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7941eb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7941ed: jle 0x794203 */
  if ((zf || sf != of)) goto L_794203;
L_7941ef: /* 7941ef: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7941f4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7941f9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7941fe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x794200u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 794200: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_794203: /* 794203: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 794205: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 794206: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 794207: mov ecx, esi */
  ecx = esi;
/* 794209: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x79420fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 79420f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794210: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794211: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 794212: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794213: ret 8 */
  esp += 12; SPILL(); return;
}

void f_794240(void) {
  LOAD_REGS();
L_794240: /* 794240: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 794244: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794245: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 794247: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x79424du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 79424d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_794260(void) {
  LOAD_REGS();
L_794260: /* 794260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 794261: mov ebp, esp */
  ebp = esp;
/* 794263: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 794265: push 0x9ccf20 */
  { uint32_t v = 0x9ccf20u; esp -= 4; W32(esp, v); }
/* 79426a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 794270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794271: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 794278: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79427b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79427c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79427d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79427e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 794281: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 794288: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79428b: mov esi, ecx */
  esi = ecx;
/* 79428d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 794294: jne 0x7942ae */
  if (!zf) goto L_7942ae;
L_794296: /* 794296: push 0x3cc */
  { uint32_t v = 0x3ccu; esp -= 4; W32(esp, v); }
/* 79429b: push 0xacac4c */
  { uint32_t v = 0xacac4cu; esp -= 4; W32(esp, v); }
/* 7942a0: push 0xacac5c */
  { uint32_t v = 0xacac5cu; esp -= 4; W32(esp, v); }
/* 7942a5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7942abu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7942ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7942ae: /* 7942ae: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 7942b4: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7942b7: jne 0x794451 */
  if (!zf) goto L_794451;
L_7942bd: /* 7942bd: test dword ptr [edi + 0x84], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x84u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7942c7: jne 0x794451 */
  if (!zf) goto L_794451;
L_7942cd: /* 7942cd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7942cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7942d0: mov ecx, esi */
  ecx = esi;
/* 7942d2: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x7942d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7942d5: inc dword ptr [0xb52200] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb52200u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xb52200u), r);
  }
/* 7942db: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7942de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7942df: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7942e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7942e3: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7942e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7942e7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7942ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7942eb: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7942ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7942ef: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7942f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7942f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7942f4: mov ecx, esi */
  ecx = esi;
/* 7942f6: call 0x6cce9b */
  esp -= 4; W32(esp, 0x7942fbu); SPILL(); f_6cce9b(); if (g_unwind) return; RELOAD();
/* 7942fb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
L_7942fe: /* 7942fe: cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794301: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 794304: jg 0x794435 */
  if ((!zf && sf == of)) goto L_794435;
L_79430a: /* 79430a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
L_79430d: /* 79430d: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794310: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 794313: jg 0x79442f */
  if ((!zf && sf == of)) goto L_79442f;
L_794319: /* 794319: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
L_79431c: /* 79431c: cmp ecx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79431f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 794322: jg 0x794426 */
  if ((!zf && sf == of)) goto L_794426;
L_794328: /* 794328: mov ebx, dword ptr [ecx*4 + 0xb221f8] */
  ebx = R32((uint32_t)(ecx*4 + 0xb221f8u));
/* 79432f: xor ebx, dword ptr [eax*4 + 0xb321f8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax*4 + 0xb321f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 794336: mov edi, ecx */
  edi = ecx;
/* 794338: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 79433b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 79433d: mov eax, dword ptr [edx*4 + 0xb421f8] */
  eax = R32((uint32_t)(edx*4 + 0xb421f8u));
/* 794344: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 794347: xor ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 794349: mov eax, dword ptr [esi + 0x10004] */
  eax = R32((uint32_t)(esi + 0x10004u));
/* 79434f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 794351: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 794353: lea edx, [esi + ebx*4 + 4] */
  edx = (uint32_t)(esi + ebx*4 + 0x4u);
/* 794357: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 79435a: jne 0x7943e2 */
  if (!zf) goto L_7943e2;
L_794360: /* 794360: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 794366: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 794368: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79436a: push 0xacac74 */
  { uint32_t v = 0xacac74u; esp -= 4; W32(esp, v); }
/* 79436f: push 0x3000 */
  { uint32_t v = 0x3000u; esp -= 4; W32(esp, v); }
/* 794374: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x794376u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 794376: mov edx, dword ptr [0xb52210] */
  edx = R32((uint32_t)(0xb52210u));
/* 79437c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79437e: add edx, 0x3000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3000u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 794384: lea ebx, [esi + 0x10008] */
  ebx = (uint32_t)(esi + 0x10008u);
/* 79438a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79438c: mov ecx, ebx */
  ecx = ebx;
/* 79438e: mov dword ptr [esi + 0x10004], eax */
  W32((uint32_t)(esi + 0x10004u), eax);
/* 794394: mov dword ptr [0xb52210], edx */
  W32((uint32_t)(0xb52210u), edx);
/* 79439a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7943a0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7943a0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7943a2: mov edx, dword ptr [esi + 0x10004] */
  edx = R32((uint32_t)(esi + 0x10004u));
/* 7943a8: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7943ab: xor eax, eax */
  eax = 0;
/* 7943ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7943b0: /* 7943b0: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7943b5: jge 0x7943cc */
  if ((sf == of)) goto L_7943cc;
L_7943b7: /* 7943b7: mov edx, dword ptr [esi + 0x10004] */
  edx = R32((uint32_t)(esi + 0x10004u));
/* 7943bd: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7943c0: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7943c3: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 7943c6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7943c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7943ca: jmp 0x7943b0 */
  goto L_7943b0;
L_7943cc: /* 7943cc: mov eax, dword ptr [esi + 0x10004] */
  eax = R32((uint32_t)(esi + 0x10004u));
/* 7943d2: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7943d5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7943d8: mov dword ptr [eax + 0x2ff8], 0 */
  W32((uint32_t)(eax + 0x2ff8u), 0x0u);
L_7943e2: /* 7943e2: mov eax, dword ptr [esi + 0x10004] */
  eax = R32((uint32_t)(esi + 0x10004u));
/* 7943e8: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7943eb: mov dword ptr [esi + 0x10004], ebx */
  W32((uint32_t)(esi + 0x10004u), ebx);
/* 7943f1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7943f4: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7943f6: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7943f8: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 7943fb: mov edi, dword ptr [0xb52208] */
  edi = R32((uint32_t)(0xb52208u));
/* 794401: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 794404: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 794406: mov edx, dword ptr [0xb52204] */
  edx = R32((uint32_t)(0xb52204u));
/* 79440c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79440f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 794410: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 794411: mov dword ptr [0xb52204], edx */
  W32((uint32_t)(0xb52204u), edx);
/* 794417: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 79441a: mov dword ptr [0xb52208], edi */
  W32((uint32_t)(0xb52208u), edi);
/* 794420: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 794421: jmp 0x79431c */
  goto L_79431c;
L_794426: /* 794426: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 794429: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79442a: jmp 0x79430d */
  goto L_79430d;
L_79442f: /* 79442f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 794430: jmp 0x7942fe */
  goto L_7942fe;
L_794435: /* 794435: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 79443b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79443d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 794440: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 794443: add edi, 0x300 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 794449: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 79444b: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 79444e: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
L_794451: /* 794451: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 794454: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794455: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794456: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79445d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79445e: mov esp, ebp */
  esp = ebp;
/* 794460: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 794461: ret 4 */
  esp += 8; SPILL(); return;
}

void f_794464(void) {
  LOAD_REGS();
L_794464: /* 794464: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 794467: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79446c: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 79446f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794470: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 794473: call 0x99caf8 */
  esp -= 4; W32(esp, 0x794478u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_794478(); return;
}

void f_794478(void) {
  LOAD_REGS();
L_794478: /* 794478: push 0xa0a6e4 */
  { uint32_t v = 0xa0a6e4u; esp -= 4; W32(esp, v); }
/* 79447d: push 0xacac94 */
  { uint32_t v = 0xacac94u; esp -= 4; W32(esp, v); }
/* 794482: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x794488u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 794488: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79448b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79448d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79448f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x794494u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_794494: guest_badaddr(0x794494); return;
}

void f_794530(void) {
  LOAD_REGS();
L_794530: /* 794530: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 794532: push 0x9ccf39 */
  { uint32_t v = 0x9ccf39u; esp -= 4; W32(esp, v); }
/* 794537: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79453d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79453e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 794545: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 794546: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 794547: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794548: mov esi, ecx */
  esi = ecx;
/* 79454a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79454b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 79454f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 794552: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 794554: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 79455a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 794562: jge 0x794578 */
  if ((sf == of)) goto L_794578;
L_794564: /* 794564: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 794569: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79456e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 794573: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x794575u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 794575: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_794578: /* 794578: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79457b: jle 0x794591 */
  if ((zf || sf != of)) goto L_794591;
L_79457d: /* 79457d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 794582: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 794587: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 79458c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x79458eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79458e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_794591: /* 794591: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 794593: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 794594: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 794596: mov ecx, esi */
  ecx = esi;
/* 794598: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x79459eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 79459e: mov ecx, esi */
  ecx = esi;
/* 7945a0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7945a8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7945aeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7945ae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7945b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7945b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7945b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7945b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7945bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7945bf: ret  */
  esp += 4; SPILL(); return;
}

void f_7945f0(void) {
  LOAD_REGS();
L_7945f0: /* 7945f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7945f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7945f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7945f3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7945f7: mov esi, ecx */
  esi = ecx;
/* 7945f9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7945fb: je 0x794636 */
  if (zf) goto L_794636;
L_7945fd: /* 7945fd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 794600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794601: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 794603: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x794609u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 794609: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 79460c: xor ebx, ebx */
  ebx = 0;
/* 79460e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 794610: jle 0x794636 */
  if ((zf || sf != of)) goto L_794636;
L_794612: /* 794612: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 794614: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 794616: mov ecx, esi */
  ecx = esi;
/* 794618: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x79461eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 79461e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 794620: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 794623: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 794625: je 0x79462e */
  if (zf) goto L_79462e;
L_794627: /* 794627: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 794629: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 79462c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_79462e: /* 79462e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 794631: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 794632: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794634: jl 0x794612 */
  if ((sf != of)) goto L_794612;
L_794636: /* 794636: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794637: mov eax, esi */
  eax = esi;
/* 794639: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79463a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79463b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_794660(void) {
  LOAD_REGS();
L_794660: /* 794660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794661: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 794662: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 794666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 794667: mov esi, ecx */
  esi = ecx;
/* 794669: call 0x6cab5f */
  esp -= 4; W32(esp, 0x79466eu); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 79466e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 794671: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 794674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794675: mov eax, esi */
  eax = esi;
/* 794677: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794678: ret 4 */
  esp += 8; SPILL(); return;
}

void f_794690(void) {
  LOAD_REGS();
L_794690: /* 794690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794691: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 794692: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 794696: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 794697: mov esi, ecx */
  esi = ecx;
/* 794699: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x79469eu); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 79469e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 7946a1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7946a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7946a5: mov eax, esi */
  eax = esi;
/* 7946a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7946a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7946c0(void) {
  LOAD_REGS();
L_7946c0: /* 7946c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7946c2: push 0x9ccf58 */
  { uint32_t v = 0x9ccf58u; esp -= 4; W32(esp, v); }
/* 7946c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7946cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7946ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7946d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7946d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7946d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7946d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7946d9: mov ebx, ecx */
  ebx = ecx;
/* 7946db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7946dc: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 7946e0: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 7946e4: mov dword ptr [ebx], 0xa0a720 */
  W32((uint32_t)(ebx), 0xa0a720u);
/* 7946ea: mov ecx, 0x4000 */
  ecx = 0x4000u;
/* 7946ef: lea esi, [ebp + 4] */
  esi = (uint32_t)(ebp + 0x4u);
/* 7946f2: lea edi, [ebx + 4] */
  edi = (uint32_t)(ebx + 0x4u);
/* 7946f5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7946f7: mov eax, dword ptr [ebp + 0x10004] */
  eax = R32((uint32_t)(ebp + 0x10004u));
/* 7946fd: lea ecx, [ebp + 0x10008] */
  ecx = (uint32_t)(ebp + 0x10008u);
/* 794703: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 794704: lea ecx, [ebx + 0x10008] */
  ecx = (uint32_t)(ebx + 0x10008u);
/* 79470a: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 794712: mov dword ptr [ebx + 0x10004], eax */
  W32((uint32_t)(ebx + 0x10004u), eax);
/* 794718: call 0x6c8d14 */
  esp -= 4; W32(esp, 0x79471du); SPILL(); f_6c8d14(); if (g_unwind) return; RELOAD();
/* 79471d: mov edx, dword ptr [ebp + 0x10014] */
  edx = R32((uint32_t)(ebp + 0x10014u));
/* 794723: mov dword ptr [ebx + 0x10014], edx */
  W32((uint32_t)(ebx + 0x10014u), edx);
/* 794729: mov eax, dword ptr [ebp + 0x10018] */
  eax = R32((uint32_t)(ebp + 0x10018u));
/* 79472f: mov dword ptr [ebx + 0x10018], eax */
  W32((uint32_t)(ebx + 0x10018u), eax);
/* 794735: mov ecx, dword ptr [ebp + 0x1001c] */
  ecx = R32((uint32_t)(ebp + 0x1001cu));
/* 79473b: mov dword ptr [ebx + 0x1001c], ecx */
  W32((uint32_t)(ebx + 0x1001cu), ecx);
/* 794741: mov edx, dword ptr [ebp + 0x10020] */
  edx = R32((uint32_t)(ebp + 0x10020u));
/* 794747: mov dword ptr [ebx + 0x10020], edx */
  W32((uint32_t)(ebx + 0x10020u), edx);
/* 79474d: mov eax, dword ptr [ebp + 0x10024] */
  eax = R32((uint32_t)(ebp + 0x10024u));
/* 794753: mov dword ptr [ebx + 0x10024], eax */
  W32((uint32_t)(ebx + 0x10024u), eax);
/* 794759: mov ecx, dword ptr [ebp + 0x10028] */
  ecx = R32((uint32_t)(ebp + 0x10028u));
/* 79475f: mov dword ptr [ebx + 0x10028], ecx */
  W32((uint32_t)(ebx + 0x10028u), ecx);
/* 794765: mov edx, dword ptr [ebp + 0x1002c] */
  edx = R32((uint32_t)(ebp + 0x1002cu));
/* 79476b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 79476f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794770: mov dword ptr [ebx + 0x1002c], edx */
  W32((uint32_t)(ebx + 0x1002cu), edx);
/* 794776: mov eax, dword ptr [ebp + 0x10030] */
  eax = R32((uint32_t)(ebp + 0x10030u));
/* 79477c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79477d: mov dword ptr [ebx + 0x10030], eax */
  W32((uint32_t)(ebx + 0x10030u), eax);
/* 794783: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 794784: mov eax, ebx */
  eax = ebx;
/* 794786: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794787: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79478e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 794791: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7947e0(void) {
  LOAD_REGS();
L_7947e0: /* 7947e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7947e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7947e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7947e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7947e7: mov esi, ecx */
  esi = ecx;
/* 7947e9: mov ecx, edi */
  ecx = edi;
/* 7947eb: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7947ee: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7947f0: mov edx, 0x4000 */
  edx = 0x4000u;
L_7947f5: /* 7947f5: mov ebx, dword ptr [ecx + eax] */
  ebx = R32((uint32_t)(ecx + eax));
/* 7947f8: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7947fa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7947fd: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 7947fe: jne 0x7947f5 */
  if (!zf) goto L_7947f5;
L_794800: /* 794800: mov eax, dword ptr [edi + 0x10004] */
  eax = R32((uint32_t)(edi + 0x10004u));
/* 794806: lea ecx, [edi + 0x10008] */
  ecx = (uint32_t)(edi + 0x10008u);
/* 79480c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79480d: lea ecx, [esi + 0x10008] */
  ecx = (uint32_t)(esi + 0x10008u);
/* 794813: mov dword ptr [esi + 0x10004], eax */
  W32((uint32_t)(esi + 0x10004u), eax);
/* 794819: call 0x6c7289 */
  esp -= 4; W32(esp, 0x79481eu); SPILL(); f_6c7289(); if (g_unwind) return; RELOAD();
/* 79481e: mov edx, dword ptr [edi + 0x10014] */
  edx = R32((uint32_t)(edi + 0x10014u));
/* 794824: mov dword ptr [esi + 0x10014], edx */
  W32((uint32_t)(esi + 0x10014u), edx);
/* 79482a: mov eax, dword ptr [edi + 0x10018] */
  eax = R32((uint32_t)(edi + 0x10018u));
/* 794830: mov dword ptr [esi + 0x10018], eax */
  W32((uint32_t)(esi + 0x10018u), eax);
/* 794836: mov ecx, dword ptr [edi + 0x1001c] */
  ecx = R32((uint32_t)(edi + 0x1001cu));
/* 79483c: mov dword ptr [esi + 0x1001c], ecx */
  W32((uint32_t)(esi + 0x1001cu), ecx);
/* 794842: mov edx, dword ptr [edi + 0x10020] */
  edx = R32((uint32_t)(edi + 0x10020u));
/* 794848: mov dword ptr [esi + 0x10020], edx */
  W32((uint32_t)(esi + 0x10020u), edx);
/* 79484e: mov eax, dword ptr [edi + 0x10024] */
  eax = R32((uint32_t)(edi + 0x10024u));
/* 794854: mov dword ptr [esi + 0x10024], eax */
  W32((uint32_t)(esi + 0x10024u), eax);
/* 79485a: mov ecx, dword ptr [edi + 0x10028] */
  ecx = R32((uint32_t)(edi + 0x10028u));
/* 794860: mov dword ptr [esi + 0x10028], ecx */
  W32((uint32_t)(esi + 0x10028u), ecx);
/* 794866: mov edx, dword ptr [edi + 0x1002c] */
  edx = R32((uint32_t)(edi + 0x1002cu));
/* 79486c: mov dword ptr [esi + 0x1002c], edx */
  W32((uint32_t)(esi + 0x1002cu), edx);
/* 794872: mov eax, dword ptr [edi + 0x10030] */
  eax = R32((uint32_t)(edi + 0x10030u));
/* 794878: mov dword ptr [esi + 0x10030], eax */
  W32((uint32_t)(esi + 0x10030u), eax);
/* 79487e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79487f: mov eax, esi */
  eax = esi;
/* 794881: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794882: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794883: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7948c0(void) {
  LOAD_REGS();
L_7948c0: /* 7948c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7948c1: mov ebp, esp */
  ebp = esp;
/* 7948c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7948c5: push 0x9ccf86 */
  { uint32_t v = 0x9ccf86u; esp -= 4; W32(esp, v); }
/* 7948ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7948d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7948d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7948d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7948db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7948dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7948dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7948de: mov ebx, ecx */
  ebx = ecx;
/* 7948e0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7948e3: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7948e6: xor esi, esi */
  esi = 0;
/* 7948e8: lea ecx, [ebx + 0x10008] */
  ecx = (uint32_t)(ebx + 0x10008u);
/* 7948ee: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7948f1: mov dword ptr [ebx], 0xa0a720 */
  W32((uint32_t)(ebx), 0xa0a720u);
/* 7948f7: mov dword ptr [ebx + 0x10004], esi */
  W32((uint32_t)(ebx + 0x10004u), esi);
/* 7948fd: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x794903u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 794903: cmp dword ptr [0xb521f8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb521f8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794909: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 79490d: jne 0x794a1e */
  if (!zf) goto L_794a1e;
L_794913: /* 794913: mov dword ptr [0xb521f8], 1 */
  W32((uint32_t)(0xb521f8u), 0x1u);
/* 79491d: xor eax, eax */
  eax = 0;
/* 79491f: nop  */
L_794920: /* 794920: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794925: jge 0x79493f */
  if ((sf == of)) goto L_79493f;
L_794927: /* 794927: mov dword ptr [eax*4 + 0xb221f8], eax */
  W32((uint32_t)(eax*4 + 0xb221f8u), eax);
/* 79492e: mov dword ptr [eax*4 + 0xb321f8], eax */
  W32((uint32_t)(eax*4 + 0xb321f8u), eax);
/* 794935: mov dword ptr [eax*4 + 0xb421f8], eax */
  W32((uint32_t)(eax*4 + 0xb421f8u), eax);
/* 79493c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79493d: jmp 0x794920 */
  goto L_794920;
L_79493f: /* 79493f: mov edi, dword ptr [0xcfa5ec] */
  edi = R32((uint32_t)(0xcfa5ecu));
/* 794945: jmp 0x794950 */
  goto L_794950;
L_794950: /* 794950: cmp esi, 0x4000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794956: jge 0x794a1c */
  if ((sf == of)) goto L_794a1c;
L_79495c: /* 79495c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79495eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79495e: and eax, 0x80003fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80003fffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 794963: jns 0x79496c */
  if (!sf) goto L_79496c;
L_794965: /* 794965: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 794966: or eax, 0xffffc000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffc000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 79496b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_79496c: /* 79496c: mov edx, dword ptr [eax*4 + 0xb421f8] */
  edx = R32((uint32_t)(eax*4 + 0xb421f8u));
/* 794973: mov ecx, dword ptr [esi*4 + 0xb421f8] */
  ecx = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 79497a: lea eax, [eax*4 + 0xb421f8] */
  eax = (uint32_t)(eax*4 + 0xb421f8u);
/* 794981: mov dword ptr [esi*4 + 0xb421f8], edx */
  W32((uint32_t)(esi*4 + 0xb421f8u), edx);
/* 794988: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79498a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79498cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79498c: and eax, 0x80003fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80003fffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 794991: jns 0x79499a */
  if (!sf) goto L_79499a;
L_794993: /* 794993: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 794994: or eax, 0xffffc000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffc000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 794999: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_79499a: /* 79499a: mov edx, dword ptr [eax*4 + 0xb321f8] */
  edx = R32((uint32_t)(eax*4 + 0xb321f8u));
/* 7949a1: mov ecx, dword ptr [esi*4 + 0xb321f8] */
  ecx = R32((uint32_t)(esi*4 + 0xb321f8u));
/* 7949a8: lea eax, [eax*4 + 0xb321f8] */
  eax = (uint32_t)(eax*4 + 0xb321f8u);
/* 7949af: mov dword ptr [esi*4 + 0xb321f8], edx */
  W32((uint32_t)(esi*4 + 0xb321f8u), edx);
/* 7949b6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7949b8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7949bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7949ba: and eax, 0x80003fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80003fffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 7949bf: jns 0x7949c8 */
  if (!sf) goto L_7949c8;
L_7949c1: /* 7949c1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7949c2: or eax, 0xffffc000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffc000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7949c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_7949c8: /* 7949c8: mov ecx, dword ptr [esi*4 + 0xb221f8] */
  ecx = R32((uint32_t)(esi*4 + 0xb221f8u));
/* 7949cf: mov edx, dword ptr [eax*4 + 0xb221f8] */
  edx = R32((uint32_t)(eax*4 + 0xb221f8u));
/* 7949d6: lea eax, [eax*4 + 0xb221f8] */
  eax = (uint32_t)(eax*4 + 0xb221f8u);
/* 7949dd: mov dword ptr [esi*4 + 0xb221f8], edx */
  W32((uint32_t)(esi*4 + 0xb221f8u), edx);
/* 7949e4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7949e6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7949e7: jmp 0x794950 */
  goto L_794950;
L_794a1c: /* 794a1c: xor esi, esi */
  esi = 0;
L_794a1e: /* 794a1e: xor eax, eax */
  eax = 0;
L_794a20: /* 794a20: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794a25: jge 0x794a2e */
  if ((sf == of)) goto L_794a2e;
L_794a27: /* 794a27: mov dword ptr [ebx + eax*4 + 4], esi */
  W32((uint32_t)(ebx + eax*4 + 0x4u), esi);
/* 794a2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 794a2c: jmp 0x794a20 */
  goto L_794a20;
L_794a2e: /* 794a2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 794a31: mov dword ptr [ebx + 0x10014], esi */
  W32((uint32_t)(ebx + 0x10014u), esi);
/* 794a37: mov dword ptr [ebx + 0x10018], esi */
  W32((uint32_t)(ebx + 0x10018u), esi);
/* 794a3d: mov dword ptr [ebx + 0x1001c], esi */
  W32((uint32_t)(ebx + 0x1001cu), esi);
/* 794a43: mov dword ptr [ebx + 0x10020], esi */
  W32((uint32_t)(ebx + 0x10020u), esi);
/* 794a49: mov dword ptr [ebx + 0x10024], esi */
  W32((uint32_t)(ebx + 0x10024u), esi);
/* 794a4f: mov dword ptr [ebx + 0x10028], esi */
  W32((uint32_t)(ebx + 0x10028u), esi);
/* 794a55: mov dword ptr [ebx + 0x1002c], esi */
  W32((uint32_t)(ebx + 0x1002cu), esi);
/* 794a5b: mov dword ptr [ebx + 0x10030], esi */
  W32((uint32_t)(ebx + 0x10030u), esi);
/* 794a61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794a62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794a63: mov eax, ebx */
  eax = ebx;
/* 794a65: mov dword ptr [0xb52210], 0x40034 */
  W32((uint32_t)(0xb52210u), 0x40034u);
/* 794a6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 794a76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794a77: mov esp, ebp */
  esp = ebp;
/* 794a79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 794a7a: ret  */
  esp += 4; SPILL(); return;
}

void f_794947(void) {
  LOAD_REGS();
L_794947: /* 794947: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 79494e: mov edi, edi */
  edi = edi;
L_794950: /* 794950: cmp esi, 0x4000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794956: jge 0x794a1c */
  if ((sf == of)) goto L_794a1c;
L_79495c: /* 79495c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79495eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79495e: and eax, 0x80003fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80003fffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 794963: jns 0x79496c */
  if (!sf) goto L_79496c;
L_794965: /* 794965: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 794966: or eax, 0xffffc000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffc000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 79496b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_79496c: /* 79496c: mov edx, dword ptr [eax*4 + 0xb421f8] */
  edx = R32((uint32_t)(eax*4 + 0xb421f8u));
/* 794973: mov ecx, dword ptr [esi*4 + 0xb421f8] */
  ecx = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 79497a: lea eax, [eax*4 + 0xb421f8] */
  eax = (uint32_t)(eax*4 + 0xb421f8u);
/* 794981: mov dword ptr [esi*4 + 0xb421f8], edx */
  W32((uint32_t)(esi*4 + 0xb421f8u), edx);
/* 794988: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79498a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79498cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79498c: and eax, 0x80003fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80003fffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 794991: jns 0x79499a */
  if (!sf) goto L_79499a;
L_794993: /* 794993: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 794994: or eax, 0xffffc000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffc000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 794999: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_79499a: /* 79499a: mov edx, dword ptr [eax*4 + 0xb321f8] */
  edx = R32((uint32_t)(eax*4 + 0xb321f8u));
/* 7949a1: mov ecx, dword ptr [esi*4 + 0xb321f8] */
  ecx = R32((uint32_t)(esi*4 + 0xb321f8u));
/* 7949a8: lea eax, [eax*4 + 0xb321f8] */
  eax = (uint32_t)(eax*4 + 0xb321f8u);
/* 7949af: mov dword ptr [esi*4 + 0xb321f8], edx */
  W32((uint32_t)(esi*4 + 0xb321f8u), edx);
/* 7949b6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7949b8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7949bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7949ba: and eax, 0x80003fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80003fffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 7949bf: jns 0x7949c8 */
  if (!sf) goto L_7949c8;
L_7949c1: /* 7949c1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7949c2: or eax, 0xffffc000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffc000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7949c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_7949c8: /* 7949c8: mov ecx, dword ptr [esi*4 + 0xb221f8] */
  ecx = R32((uint32_t)(esi*4 + 0xb221f8u));
/* 7949cf: mov edx, dword ptr [eax*4 + 0xb221f8] */
  edx = R32((uint32_t)(eax*4 + 0xb221f8u));
/* 7949d6: lea eax, [eax*4 + 0xb221f8] */
  eax = (uint32_t)(eax*4 + 0xb221f8u);
/* 7949dd: mov dword ptr [esi*4 + 0xb221f8], edx */
  W32((uint32_t)(esi*4 + 0xb221f8u), edx);
/* 7949e4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7949e6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7949e7: jmp 0x794950 */
  goto L_794950;
L_794a1c: /* 794a1c: xor esi, esi */
  esi = 0;
/* 794a1e: xor eax, eax */
  eax = 0;
L_794a20: /* 794a20: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794a25: jge 0x794a2e */
  if ((sf == of)) goto L_794a2e;
L_794a27: /* 794a27: mov dword ptr [ebx + eax*4 + 4], esi */
  W32((uint32_t)(ebx + eax*4 + 0x4u), esi);
/* 794a2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 794a2c: jmp 0x794a20 */
  goto L_794a20;
L_794a2e: /* 794a2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 794a31: mov dword ptr [ebx + 0x10014], esi */
  W32((uint32_t)(ebx + 0x10014u), esi);
/* 794a37: mov dword ptr [ebx + 0x10018], esi */
  W32((uint32_t)(ebx + 0x10018u), esi);
/* 794a3d: mov dword ptr [ebx + 0x1001c], esi */
  W32((uint32_t)(ebx + 0x1001cu), esi);
/* 794a43: mov dword ptr [ebx + 0x10020], esi */
  W32((uint32_t)(ebx + 0x10020u), esi);
/* 794a49: mov dword ptr [ebx + 0x10024], esi */
  W32((uint32_t)(ebx + 0x10024u), esi);
/* 794a4f: mov dword ptr [ebx + 0x10028], esi */
  W32((uint32_t)(ebx + 0x10028u), esi);
/* 794a55: mov dword ptr [ebx + 0x1002c], esi */
  W32((uint32_t)(ebx + 0x1002cu), esi);
/* 794a5b: mov dword ptr [ebx + 0x10030], esi */
  W32((uint32_t)(ebx + 0x10030u), esi);
/* 794a61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794a62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794a63: mov eax, ebx */
  eax = ebx;
/* 794a65: mov dword ptr [0xb52210], 0x40034 */
  W32((uint32_t)(0xb52210u), 0x40034u);
/* 794a6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 794a76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794a77: mov esp, ebp */
  esp = ebp;
/* 794a79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 794a7a: ret  */
  esp += 4; SPILL(); return;
}

void f_7949ec(void) {
  LOAD_REGS();
L_7949ec: /* 7949ec: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7949ef: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7949f4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7949f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7949f8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7949fb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x794a00u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_794a00(); return;
}

void f_794a00(void) {
  LOAD_REGS();
L_794a00: /* 794a00: push 0xa0a75c */
  { uint32_t v = 0xa0a75cu; esp -= 4; W32(esp, v); }
/* 794a05: push 0xacac2c */
  { uint32_t v = 0xacac2cu; esp -= 4; W32(esp, v); }
/* 794a0a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x794a10u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 794a10: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 794a13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 794a15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 794a17: call 0x99caf8 */
  esp -= 4; W32(esp, 0x794a1cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 794a1c: xor esi, esi */
  esi = 0;
/* 794a1e: xor eax, eax */
  eax = 0;
L_794a20: /* 794a20: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794a25: jge 0x794a2e */
  if ((sf == of)) goto L_794a2e;
L_794a27: /* 794a27: mov dword ptr [ebx + eax*4 + 4], esi */
  W32((uint32_t)(ebx + eax*4 + 0x4u), esi);
/* 794a2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 794a2c: jmp 0x794a20 */
  goto L_794a20;
L_794a2e: /* 794a2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 794a31: mov dword ptr [ebx + 0x10014], esi */
  W32((uint32_t)(ebx + 0x10014u), esi);
/* 794a37: mov dword ptr [ebx + 0x10018], esi */
  W32((uint32_t)(ebx + 0x10018u), esi);
/* 794a3d: mov dword ptr [ebx + 0x1001c], esi */
  W32((uint32_t)(ebx + 0x1001cu), esi);
/* 794a43: mov dword ptr [ebx + 0x10020], esi */
  W32((uint32_t)(ebx + 0x10020u), esi);
/* 794a49: mov dword ptr [ebx + 0x10024], esi */
  W32((uint32_t)(ebx + 0x10024u), esi);
/* 794a4f: mov dword ptr [ebx + 0x10028], esi */
  W32((uint32_t)(ebx + 0x10028u), esi);
/* 794a55: mov dword ptr [ebx + 0x1002c], esi */
  W32((uint32_t)(ebx + 0x1002cu), esi);
/* 794a5b: mov dword ptr [ebx + 0x10030], esi */
  W32((uint32_t)(ebx + 0x10030u), esi);
/* 794a61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794a62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794a63: mov eax, ebx */
  eax = ebx;
/* 794a65: mov dword ptr [0xb52210], 0x40034 */
  W32((uint32_t)(0xb52210u), 0x40034u);
/* 794a6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 794a76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794a77: mov esp, ebp */
  esp = ebp;
/* 794a79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 794a7a: ret  */
  esp += 4; SPILL(); return;
}

void f_794af0(void) {
  LOAD_REGS();
L_794af0: /* 794af0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 794af1: mov ebp, esp */
  ebp = esp;
/* 794af3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 794af5: push 0x9ccfb6 */
  { uint32_t v = 0x9ccfb6u; esp -= 4; W32(esp, v); }
/* 794afa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 794b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794b01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 794b08: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 794b0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 794b0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794b0d: mov esi, ecx */
  esi = ecx;
/* 794b0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 794b10: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 794b13: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 794b16: mov dword ptr [esi], 0xa0a720 */
  W32((uint32_t)(esi), 0xa0a720u);
/* 794b1c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 794b23: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 794b27: xor edi, edi */
  edi = 0;
/* 794b29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_794b30: /* 794b30: cmp edi, dword ptr [esi + 0x1000c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1000cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 794b36: jge 0x794b81 */
  if ((sf == of)) goto L_794b81;
L_794b38: /* 794b38: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 794b3d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 794b3f: mov eax, dword ptr [esi + 0x10008] */
  eax = R32((uint32_t)(esi + 0x10008u));
/* 794b45: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 794b48: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 794b4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794b4b: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x794b4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 794b4e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 794b4f: jmp 0x794b30 */
  goto L_794b30;
L_794b81: /* 794b81: lea ecx, [esi + 0x10008] */
  ecx = (uint32_t)(esi + 0x10008u);
/* 794b87: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 794b8e: call 0x6cc1ee */
  esp -= 4; W32(esp, 0x794b93u); SPILL(); f_6cc1ee(); if (g_unwind) return; RELOAD();
/* 794b93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 794b96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794b97: mov dword ptr [esi], 0xa0a44c */
  W32((uint32_t)(esi), 0xa0a44cu);
/* 794b9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794b9e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 794ba5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794ba6: mov esp, ebp */
  esp = ebp;
/* 794ba8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 794ba9: ret  */
  esp += 4; SPILL(); return;
}

void f_794b51(void) {
  LOAD_REGS();
L_794b51: /* 794b51: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 794b54: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 794b59: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 794b5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 794b5d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 794b60: call 0x99caf8 */
  esp -= 4; W32(esp, 0x794b65u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_794b65(); return;
}

void f_794b65(void) {
  LOAD_REGS();
L_794b65: /* 794b65: push 0xa0a7a8 */
  { uint32_t v = 0xa0a7a8u; esp -= 4; W32(esp, v); }
/* 794b6a: push 0xacac34 */
  { uint32_t v = 0xacac34u; esp -= 4; W32(esp, v); }
/* 794b6f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x794b75u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 794b75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 794b78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 794b7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 794b7c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x794b81u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 794b81: lea ecx, [esi + 0x10008] */
  ecx = (uint32_t)(esi + 0x10008u);
/* 794b87: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 794b8e: call 0x6cc1ee */
  esp -= 4; W32(esp, 0x794b93u); SPILL(); f_6cc1ee(); if (g_unwind) return; RELOAD();
/* 794b93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 794b96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794b97: mov dword ptr [esi], 0xa0a44c */
  W32((uint32_t)(esi), 0xa0a44cu);
/* 794b9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794b9e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 794ba5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794ba6: mov esp, ebp */
  esp = ebp;
/* 794ba8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 794ba9: ret  */
  esp += 4; SPILL(); return;
}

void f_794be0(void) {
  LOAD_REGS();
L_794be0: /* 794be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794be1: mov esi, ecx */
  esi = ecx;
/* 794be3: call 0x6cca13 */
  esp -= 4; W32(esp, 0x794be8u); SPILL(); f_6cca13(); if (g_unwind) return; RELOAD();
/* 794be8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 794bed: je 0x794bfc */
  if (zf) goto L_794bfc;
L_794bef: /* 794bef: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 794bf4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 794bf6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 794bf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794bf9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x794bfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_794bfc: /* 794bfc: mov eax, esi */
  eax = esi;
/* 794bfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794bff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_794c20(void) {
  LOAD_REGS();
L_794c20: /* 794c20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 794c21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 794c25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 794c28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794c29: mov esi, ecx */
  esi = ecx;
/* 794c2b: je 0x794c60 */
  if (zf) goto L_794c60;
L_794c2d: /* 794c2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 794c30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 794c31: push 0x6cca13 */
  { uint32_t v = 0x6cca13u; esp -= 4; W32(esp, v); }
/* 794c36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 794c39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794c3a: push 0x10034 */
  { uint32_t v = 0x10034u; esp -= 4; W32(esp, v); }
/* 794c3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794c40: call 0x99ca3d */
  esp -= 4; W32(esp, 0x794c45u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 794c45: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 794c48: je 0x794c58 */
  if (zf) goto L_794c58;
L_794c4a: /* 794c4a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 794c50: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 794c52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 794c54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 794c55: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x794c58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_794c58: /* 794c58: mov eax, edi */
  eax = edi;
/* 794c5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 794c5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794c5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794c5d: ret 4 */
  esp += 8; SPILL(); return;
L_794c60: /* 794c60: mov ecx, esi */
  ecx = esi;
/* 794c62: call 0x6cca13 */
  esp -= 4; W32(esp, 0x794c67u); SPILL(); f_6cca13(); if (g_unwind) return; RELOAD();
/* 794c67: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 794c6a: je 0x794c79 */
  if (zf) goto L_794c79;
L_794c6c: /* 794c6c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 794c71: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 794c73: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 794c75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794c76: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x794c79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_794c79: /* 794c79: mov eax, esi */
  eax = esi;
/* 794c7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794c7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 794c7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_794ca0(void) {
  LOAD_REGS();
L_794ca0: /* 794ca0: mov cl, byte ptr [esp + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 794ca4: mov dl, byte ptr [esp + 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 794ca8: xor eax, eax */
  eax = 0;
/* 794caa: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 794cac: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 794caf: ret  */
  esp += 4; SPILL(); return;
}

void f_794cc0(void) {
  LOAD_REGS();
L_794cc0: /* 794cc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 794cc4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 794cc8: xor eax, eax */
  eax = 0;
/* 794cca: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794ccc: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 794ccf: ret  */
  esp += 4; SPILL(); return;
}

void f_794ce0(void) {
  LOAD_REGS();
L_794ce0: /* 794ce0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 794ce4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 794ce8: xor eax, eax */
  eax = 0;
/* 794cea: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794cec: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 794cef: ret  */
  esp += 4; SPILL(); return;
}

void f_794d00(void) {
  LOAD_REGS();
L_794d00: /* 794d00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 794d04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 794d06: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 794d0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794d0b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 794d0d: xor eax, eax */
  eax = 0;
/* 794d0f: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794d11: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 794d14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794d15: ret  */
  esp += 4; SPILL(); return;
}

void f_794d30(void) {
  LOAD_REGS();
L_794d30: /* 794d30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 794d34: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 794d38: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 794d3a: cmp edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794d3c: jne 0x794d51 */
  if (!zf) goto L_794d51;
L_794d3e: /* 794d3e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 794d41: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794d44: jne 0x794d51 */
  if (!zf) goto L_794d51;
L_794d46: /* 794d46: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 794d49: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794d4c: jne 0x794d51 */
  if (!zf) goto L_794d51;
L_794d4e: /* 794d4e: xor eax, eax */
  eax = 0;
/* 794d50: ret  */
  esp += 4; SPILL(); return;
L_794d51: /* 794d51: mov eax, 1 */
  eax = 0x1u;
/* 794d56: ret  */
  esp += 4; SPILL(); return;
}

void f_794d70(void) {
  LOAD_REGS();
L_794d70: /* 794d70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 794d74: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 794d78: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 794d7a: cmp edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794d7c: jne 0x794d91 */
  if (!zf) goto L_794d91;
L_794d7e: /* 794d7e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 794d81: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794d84: jne 0x794d91 */
  if (!zf) goto L_794d91;
L_794d86: /* 794d86: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 794d89: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794d8c: jne 0x794d91 */
  if (!zf) goto L_794d91;
L_794d8e: /* 794d8e: xor eax, eax */
  eax = 0;
/* 794d90: ret  */
  esp += 4; SPILL(); return;
L_794d91: /* 794d91: mov eax, 1 */
  eax = 0x1u;
/* 794d96: ret  */
  esp += 4; SPILL(); return;
}

void f_794db0(void) {
  LOAD_REGS();
L_794db0: /* 794db0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 794db4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 794db6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794db7: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 794dbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794dbc: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x794dbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 794dbf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 794dc1: je 0x794dd0 */
  if (zf) goto L_794dd0;
L_794dc3: /* 794dc3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 794dc7: xor eax, eax */
  eax = 0;
/* 794dc9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794dcb: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 794dce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794dcf: ret  */
  esp += 4; SPILL(); return;
L_794dd0: /* 794dd0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 794dd4: mov dword ptr [ecx + 0x90], 1 */
  W32((uint32_t)(ecx + 0x90u), 0x1u);
/* 794dde: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 794de2: xor eax, eax */
  eax = 0;
/* 794de4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 794de6: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 794de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794dea: ret  */
  esp += 4; SPILL(); return;
}

void f_794e00(void) {
  LOAD_REGS();
L_794e00: /* 794e00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 794e04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 794e06: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 794e0a: xor eax, eax */
  eax = 0;
/* 794e0c: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794e0e: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 794e11: ret  */
  esp += 4; SPILL(); return;
}

void f_794e30(void) {
  LOAD_REGS();
L_794e30: /* 794e30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 794e34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 794e36: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 794e3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794e3b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 794e3d: xor eax, eax */
  eax = 0;
/* 794e3f: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794e41: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 794e44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794e45: ret  */
  esp += 4; SPILL(); return;
}

void f_794e60(void) {
  LOAD_REGS();
L_794e60: /* 794e60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 794e64: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 794e68: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 794e6a: cmp edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794e6c: jne 0x794e89 */
  if (!zf) goto L_794e89;
L_794e6e: /* 794e6e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 794e71: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794e74: jne 0x794e89 */
  if (!zf) goto L_794e89;
L_794e76: /* 794e76: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 794e79: cmp edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794e7c: jne 0x794e89 */
  if (!zf) goto L_794e89;
L_794e7e: /* 794e7e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 794e81: cmp eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 794e84: jne 0x794e89 */
  if (!zf) goto L_794e89;
L_794e86: /* 794e86: xor eax, eax */
  eax = 0;
/* 794e88: ret  */
  esp += 4; SPILL(); return;
L_794e89: /* 794e89: mov eax, 1 */
  eax = 0x1u;
/* 794e8e: ret  */
  esp += 4; SPILL(); return;
}

void f_794ea0(void) {
  LOAD_REGS();
L_794ea0: /* 794ea0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 794ea6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 794ea8: push 0x9ccfe2 */
  { uint32_t v = 0x9ccfe2u; esp -= 4; W32(esp, v); }
/* 794ead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794eae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 794eb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794eb6: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 794eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794ebb: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 794ebf: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 794ec7: call dword ptr [0xcfa5f0] */
  esp -= 4; W32(esp, 0x794ecdu); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* 794ecd: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 794ed1: mov esi, eax */
  esi = eax;
/* 794ed3: mov byte ptr [esp + 0xc], 0 */
  W8((uint32_t)(esp + 0xcu), 0x0u);
/* 794ed8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x794edeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 794ede: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 794ee2: mov dword ptr [esp + 0xc], 0xffffffff */
  W32((uint32_t)(esp + 0xcu), 0xffffffffu);
/* 794eea: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x794ef0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 794ef0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 794ef4: mov eax, esi */
  eax = esi;
/* 794ef6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 794efd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 794efe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 794f01: ret  */
  esp += 4; SPILL(); return;
}

void f_794f30(void) {
  LOAD_REGS();
L_794f30: /* 794f30: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 794f34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794f35: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 794f39: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x794f3fu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 794f3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 794f41: jne 0x794f5d */
  if (!zf) goto L_794f5d;
L_794f43: /* 794f43: mov cl, byte ptr [esp + 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* 794f47: cmp cl, byte ptr [esp + 0x18] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esp + 0x18u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 794f4b: jne 0x794f5d */
  if (!zf) goto L_794f5d;
L_794f4d: /* 794f4d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 794f51: xor edx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 794f55: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 794f58: jne 0x794f5d */
  if (!zf) goto L_794f5d;
L_794f5a: /* 794f5a: xor eax, eax */
  eax = 0;
/* 794f5c: ret  */
  esp += 4; SPILL(); return;
L_794f5d: /* 794f5d: mov eax, 1 */
  eax = 0x1u;
/* 794f62: ret  */
  esp += 4; SPILL(); return;
}

void f_794f80(void) {
  LOAD_REGS();
L_794f80: /* 794f80: mov eax, 1 */
  eax = 0x1u;
/* 794f85: ret  */
  esp += 4; SPILL(); return;
}

void f_794fa0(void) {
  LOAD_REGS();
L_794fa0: /* 794fa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 794fa4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 794fa6: je 0x794fb8 */
  if (zf) goto L_794fb8;
L_794fa8: /* 794fa8: test byte ptr [eax + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 794fac: je 0x794fb8 */
  if (zf) goto L_794fb8;
L_794fae: /* 794fae: or dword ptr [ecx + 0x80], 0x80000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x80u), r);
  }
L_794fb8: /* 794fb8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_794fd0(void) {
  LOAD_REGS();
L_794fd0: /* 794fd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 794fd1: mov ebp, esp */
  ebp = esp;
/* 794fd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 794fd5: push 0x9cd000 */
  { uint32_t v = 0x9cd000u; esp -= 4; W32(esp, v); }
/* 794fda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 794fe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 794fe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 794fe8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 794feb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 794fec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794fed: mov esi, ecx */
  esi = ecx;
/* 794fef: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 794ff5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 794ff7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 794ff8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 794ffb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 794ffc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 795003: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x795009u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 795009: mov eax, dword ptr [esi + 0x318] */
  eax = R32((uint32_t)(esi + 0x318u));
/* 79500f: shl eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 795012: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 795015: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795016: movzx eax, byte ptr [esi + 0x31e] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x31eu)));
/* 79501d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 795020: movzx eax, byte ptr [esi + 0x31c] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x31cu)));
/* 795027: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 79502a: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 795030: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 795032: fdivr dword ptr [0xa0a848] */
  ST0 = (F32((uint32_t)(0xa0a848u))) / ST0;
/* 795038: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79503b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79503e: mov eax, dword ptr [esi + 0x314] */
  eax = R32((uint32_t)(esi + 0x314u));
/* 795044: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 795048: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 79504b: fsub dword ptr [0xa0a844] */
  ST0 = ST0 - (F32((uint32_t)(0xa0a844u)));
/* 795051: fmul dword ptr [0xa0a840] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a840u)));
/* 795057: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 79505a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79505b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79505d: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x795063u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 795063: movzx eax, byte ptr [esi + 0x31d] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x31du)));
/* 79506a: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 795070: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 795072: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 795075: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795077: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795078: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 79507b: fsub dword ptr [0xa0a83c] */
  ST0 = ST0 - (F32((uint32_t)(0xa0a83cu)));
/* 795081: fmul dword ptr [0xa0a838] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a838u)));
/* 795087: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 79508a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79508c: call dword ptr [edx + 0x104] */
  { uint32_t t = R32((uint32_t)(edx + 0x104u)); esp -= 4; W32(esp, 0x795092u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 795092: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 795095: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 795096: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 795097: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79509e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79509f: mov esp, ebp */
  esp = ebp;
/* 7950a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7950a2: ret  */
  esp += 4; SPILL(); return;
}

void f_7950a3(void) {
  LOAD_REGS();
L_7950a3: /* 7950a3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7950a6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7950ab: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7950ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7950af: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7950b2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7950b7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7950b7(); return;
}

void f_7950b7(void) {
  LOAD_REGS();
L_7950b7: /* 7950b7: push 0xa0a7f8 */
  { uint32_t v = 0xa0a7f8u; esp -= 4; W32(esp, v); }
/* 7950bc: push 0xacca60 */
  { uint32_t v = 0xacca60u; esp -= 4; W32(esp, v); }
/* 7950c1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7950c7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7950c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7950ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7950cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7950ce: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7950d3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7950d3: guest_badaddr(0x7950d3); return;
}

void f_795130(void) {
  LOAD_REGS();
L_795130: /* 795130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795131: mov esi, ecx */
  esi = ecx;
/* 795133: cmp byte ptr [esi + 0x51], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 795137: jne 0x79515b */
  if (!zf) goto L_79515b;
L_795139: /* 795139: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 79513f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795141: je 0x79515b */
  if (zf) goto L_79515b;
L_795143: /* 795143: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 795145: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795146: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x79514cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79514c: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 795152: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 795154: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 795155: jmp dword ptr [edx + 0xdc] */
  { uint32_t t = R32((uint32_t)(edx + 0xdcu)); SPILL(); call_ind(t); return; }
L_79515b: /* 79515b: xor eax, eax */
  eax = 0;
/* 79515d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79515e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_795180(void) {
  LOAD_REGS();
L_795180: /* 795180: mov eax, dword ptr [ecx + 0xd0] */
  eax = R32((uint32_t)(ecx + 0xd0u));
/* 795186: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795188: je 0x79519f */
  if (zf) goto L_79519f;
L_79518a: /* 79518a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 79518c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79518d: mov ecx, eax */
  ecx = eax;
/* 79518f: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x795195u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 795195: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 795197: mov ecx, eax */
  ecx = eax;
/* 795199: jmp dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); SPILL(); call_ind(t); return; }
L_79519f: /* 79519f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7951c0(void) {
  LOAD_REGS();
L_7951c0: /* 7951c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7951c1: test byte ptr [ecx + 0x88], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7951c8: je 0x7951e3 */
  if (zf) goto L_7951e3;
L_7951ca: /* 7951ca: movzx eax, byte ptr [ecx + 0x2c8] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x2c8u)));
/* 7951d1: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7951d5: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7951d9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 7951df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7951e0: ret 4 */
  esp += 8; SPILL(); return;
L_7951e3: /* 7951e3: movzx ecx, byte ptr [ecx + 0x2c8] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x2c8u)));
/* 7951ea: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 7951ee: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 7951f2: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 7951f6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 7951fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7951fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_795210(void) {
  LOAD_REGS();
L_795210: /* 795210: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 795214: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 795216: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 79521a: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 79521c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79521e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795221: jne 0x795269 */
  if (!zf) goto L_795269;
L_795223: /* 795223: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 795225: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 795228: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79522a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79522d: jp 0x795269 */
  if (pf) goto L_795269;
L_79522f: /* 79522f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 795232: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 795235: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 795237: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79523a: jne 0x795269 */
  if (!zf) goto L_795269;
L_79523c: /* 79523c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 79523f: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 795242: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 795244: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 795247: jp 0x795269 */
  if (pf) goto L_795269;
L_795249: /* 795249: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 79524c: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 79524f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 795251: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795254: jne 0x795269 */
  if (!zf) goto L_795269;
L_795256: /* 795256: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 795259: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 79525c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79525e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 795261: jp 0x795269 */
  if (pf) goto L_795269;
L_795263: /* 795263: mov eax, 1 */
  eax = 0x1u;
/* 795268: ret  */
  esp += 4; SPILL(); return;
L_795269: /* 795269: xor eax, eax */
  eax = 0;
/* 79526b: ret  */
  esp += 4; SPILL(); return;
}

void f_795290(void) {
  LOAD_REGS();
L_795290: /* 795290: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 795296: test byte ptr [eax + 0x444], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x444u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79529d: je 0x7952b0 */
  if (zf) goto L_7952b0;
L_79529f: /* 79529f: mov edx, dword ptr [0xcfa5f4] */
  edx = R32((uint32_t)(0xcfa5f4u));
/* 7952a5: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7952a8: jne 0x7952b0 */
  if (!zf) goto L_7952b0;
L_7952aa: /* 7952aa: jmp dword ptr [0xcfa244] */
  SPILL(); f_4e3954(); return; /* Core!?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
L_7952b0: /* 7952b0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7952d0(void) {
  LOAD_REGS();
L_7952d0: /* 7952d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7952d1: mov ebp, esp */
  ebp = esp;
/* 7952d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7952d5: push 0x9cd010 */
  { uint32_t v = 0x9cd010u; esp -= 4; W32(esp, v); }
/* 7952da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7952e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7952e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7952e8: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7952ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7952ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7952f0: mov esi, ecx */
  esi = ecx;
/* 7952f2: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7952f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7952f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7952f8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7952fb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 795302: je 0x7953b6 */
  if (zf) goto L_7953b6;
L_795308: /* 795308: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795312: jne 0x7953b6 */
  if (!zf) goto L_7953b6;
L_795318: /* 795318: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79531a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 79531d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x795323u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 795323: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 795326: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795327: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 79532d: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x795333u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 795333: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795335: jne 0x7953b6 */
  if (!zf) goto L_7953b6;
L_795337: /* 795337: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 79533a: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 795340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795341: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 795347: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 79534d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79534e: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 795351: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x795357u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 795357: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 79535d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79535e: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 795361: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795362: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 795368: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79536b: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x795371u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 795371: mov edi, dword ptr [0xcfa568] */
  edi = R32((uint32_t)(0xcfa568u));
/* 795377: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 79537a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79537b: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 795381: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x795383u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 795383: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795384: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 79538a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79538b: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 79538e: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x795394u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 795394: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 795397: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795398: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 79539e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7953a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7953a0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7953a2: add esi, 0x214 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7953a8: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 7953aa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7953ad: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7953b0: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7953b3: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_7953b6: /* 7953b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7953b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7953ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7953bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7953c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7953c3: mov esp, ebp */
  esp = ebp;
/* 7953c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7953c6: ret  */
  esp += 4; SPILL(); return;
}

void f_7953c7(void) {
  LOAD_REGS();
L_7953c7: /* 7953c7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7953ca: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7953cf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7953d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7953d3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7953d6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7953dbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7953db(); return;
}

void f_7953db(void) {
  LOAD_REGS();
L_7953db: /* 7953db: push 0xa0a84c */
  { uint32_t v = 0xa0a84cu; esp -= 4; W32(esp, v); }
/* 7953e0: push 0xaccc0c */
  { uint32_t v = 0xaccc0cu; esp -= 4; W32(esp, v); }
/* 7953e5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7953ebu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7953eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7953ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7953f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7953f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7953f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7953f7: guest_badaddr(0x7953f7); return;
}

void f_795450(void) {
  LOAD_REGS();
L_795450: /* 795450: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 795451: mov edi, eax */
  edi = eax;
/* 795453: mov al, byte ptr [esi + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x18u))) & 0xffu);
/* 795456: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795458: jne 0x79545e */
  if (!zf) goto L_79545e;
L_79545a: /* 79545a: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 79545c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79545d: ret  */
  esp += 4; SPILL(); return;
L_79545e: /* 79545e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79545f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 795460: call 0x6c50d8 */
  esp -= 4; W32(esp, 0x795465u); SPILL(); f_6c50d8(); if (g_unwind) return; RELOAD();
/* 795465: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795468: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79546a: je 0x79545a */
  if (zf) goto L_79545a;
L_79546c: /* 79546c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79546d: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 795470: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 795471: call 0x6c50d8 */
  esp -= 4; W32(esp, 0x795476u); SPILL(); f_6c50d8(); if (g_unwind) return; RELOAD();
/* 795476: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795479: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79547b: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 79547e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79547f: ret  */
  esp += 4; SPILL(); return;
}

void f_795490(void) {
  LOAD_REGS();
L_795490: /* 795490: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_7954b0(void) {
  LOAD_REGS();
L_7954b0: /* 7954b0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7954b2: je 0x7954dd */
  if (zf) goto L_7954dd;
L_7954b4: /* 7954b4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
L_7954b8: /* 7954b8: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7954ba: je 0x7954e2 */
  if (zf) goto L_7954e2;
L_7954bc: /* 7954bc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7954be: je 0x7954d6 */
  if (zf) goto L_7954d6;
L_7954c0: /* 7954c0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7954c2: je 0x7954d6 */
  if (zf) goto L_7954d6;
L_7954c4: /* 7954c4: mov eax, dword ptr [ecx + 0x168] */
  eax = R32((uint32_t)(ecx + 0x168u));
/* 7954ca: cmp eax, dword ptr [edx + 0x168] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x168u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7954d0: jne 0x7954d6 */
  if (!zf) goto L_7954d6;
L_7954d2: /* 7954d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7954d4: jne 0x7954e2 */
  if (!zf) goto L_7954e2;
L_7954d6: /* 7954d6: mov ecx, dword ptr [ecx + 0x5c] */
  ecx = R32((uint32_t)(ecx + 0x5cu));
/* 7954d9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7954db: jne 0x7954b8 */
  if (!zf) goto L_7954b8;
L_7954dd: /* 7954dd: xor eax, eax */
  eax = 0;
/* 7954df: ret 4 */
  esp += 8; SPILL(); return;
L_7954e2: /* 7954e2: mov eax, 1 */
  eax = 0x1u;
/* 7954e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_795500(void) {
  LOAD_REGS();
L_795500: /* 795500: mov eax, ecx */
  eax = ecx;
/* 795502: ret  */
  esp += 4; SPILL(); return;
}

void f_795520(void) {
  LOAD_REGS();
L_795520: /* 795520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 795521: mov ebp, esp */
  ebp = esp;
/* 795523: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 795525: push 0x9cd020 */
  { uint32_t v = 0x9cd020u; esp -= 4; W32(esp, v); }
/* 79552a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 795530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795531: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 795538: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79553b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79553c: mov ebx, ecx */
  ebx = ecx;
/* 79553e: mov eax, dword ptr [ebx + 0x280] */
  eax = R32((uint32_t)(ebx + 0x280u));
/* 795544: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795547: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 795548: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79554b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 795552: jne 0x79556c */
  if (!zf) goto L_79556c;
L_795554: /* 795554: push 0x8f9 */
  { uint32_t v = 0x8f9u; esp -= 4; W32(esp, v); }
/* 795559: push 0xacce04 */
  { uint32_t v = 0xacce04u; esp -= 4; W32(esp, v); }
/* 79555e: push 0xacce10 */
  { uint32_t v = 0xacce10u; esp -= 4; W32(esp, v); }
/* 795563: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x795569u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 795569: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79556c: /* 79556c: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 795572: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 795575: lea edi, [ebx + 0x350] */
  edi = (uint32_t)(ebx + 0x350u);
/* 79557b: mov ecx, 5 */
  ecx = 0x5u;
/* 795580: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 795582: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 795588: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 79558b: lea edi, [ebx + 0x364] */
  edi = (uint32_t)(ebx + 0x364u);
/* 795591: mov ecx, 5 */
  ecx = 0x5u;
/* 795596: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 795598: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 79559f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7955a2: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 7955a8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7955aa: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7955b1: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7955b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7955b6: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7955bd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7955c0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7955c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7955c5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7955c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7955ca: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7955cd: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7955d3u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7955d3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7955d5: lea edx, [ebx + 0x17c] */
  edx = (uint32_t)(ebx + 0x17cu);
/* 7955db: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7955dd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7955e0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7955e3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7955e6: add ebx, 0x294 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7955ec: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7955ef: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7955f6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7955f9: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 7955fb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7955fe: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 795605: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 795608: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 79560b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79560c: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 795613: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 795616: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 795619: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79561a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 795621: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 795622: mov esp, ebp */
  esp = ebp;
/* 795624: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 795625: ret  */
  esp += 4; SPILL(); return;
}

void f_795626(void) {
  LOAD_REGS();
L_795626: /* 795626: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 795629: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79562e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 795631: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 795632: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 795635: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79563au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79563a(); return;
}

void f_79563a(void) {
  LOAD_REGS();
L_79563a: /* 79563a: push 0xa0a898 */
  { uint32_t v = 0xa0a898u; esp -= 4; W32(esp, v); }
/* 79563f: push 0xacce18 */
  { uint32_t v = 0xacce18u; esp -= 4; W32(esp, v); }
/* 795644: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79564au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79564a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79564d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79564f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795651: call 0x99caf8 */
  esp -= 4; W32(esp, 0x795656u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_795656: guest_badaddr(0x795656); return;
}

void f_7956b0(void) {
  LOAD_REGS();
L_7956b0: /* 7956b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7956b3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7956b7: mov eax, ecx */
  eax = ecx;
/* 7956b9: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7956bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7956c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7956c1: mov esi, edx */
  esi = edx;
/* 7956c3: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 7956c6: and esi, 0x3fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 7956cc: fld dword ptr [ecx + esi*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + esi*4 + 0x8cu)); FPUSH(v); }
/* 7956d3: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 7956d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7956d8: mov edi, esi */
  edi = esi;
/* 7956da: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 7956dd: and edi, 0x3fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 7956e3: fld dword ptr [ecx + edi*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + edi*4 + 0x8cu)); FPUSH(v); }
/* 7956ea: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7956ee: mov ebx, edi */
  ebx = edi;
/* 7956f0: add edx, 0x4000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7956f6: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 7956f9: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 7956fc: add esi, 0x4000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 795702: and ebx, 0x3fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 795708: fld dword ptr [ecx + ebx*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + ebx*4 + 0x8cu)); FPUSH(v); }
/* 79570f: and edx, 0x3fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 795715: fld dword ptr [ecx + edx*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + edx*4 + 0x8cu)); FPUSH(v); }
/* 79571c: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 79571f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 795723: add edi, 0x4000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 795729: and esi, 0x3fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 79572f: fld dword ptr [ecx + esi*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + esi*4 + 0x8cu)); FPUSH(v); }
/* 795736: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 795739: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 79573d: and edi, 0x3fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 795743: fld dword ptr [ecx + edi*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + edi*4 + 0x8cu)); FPUSH(v); }
/* 79574a: xor ecx, ecx */
  ecx = 0;
/* 79574c: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 795750: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 795753: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 795757: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 79575a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 79575c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 795760: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 795762: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 795765: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 795767: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 79576a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 79576e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 795770: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 795774: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 795778: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 79577a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 79577c: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 795780: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 795783: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 795787: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 79578b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 79578d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 79578f: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 795791: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 795793: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 795796: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 79579a: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 79579c: fchs  */
  ST0 = -ST0;
/* 79579e: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 7957a1: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7957a3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7957a5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7957a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7957a9: fchs  */
  ST0 = -ST0;
/* 7957ab: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7957ae: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 7957b2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7957b4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7957b8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7957ba: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7957bc: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 7957bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7957c1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7957c3: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7957c7: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 7957cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7957cc: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* 7957cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7957d0: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 7957d3: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 7957d6: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 7957d9: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 7957dc: mov dword ptr [eax + 0x3c], 0x3f800000 */
  W32((uint32_t)(eax + 0x3cu), 0x3f800000u);
/* 7957e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7957e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7957e7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_795840(void) {
  LOAD_REGS();
L_795840: /* 795840: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 795844: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795845: mov esi, ecx */
  esi = ecx;
/* 795847: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 79584a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 79584b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 79584e: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 795851: jne 0x795868 */
  if (!zf) goto L_795868;
L_795853: /* 795853: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 795854: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 795857: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 79585a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79585c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79585d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 795862: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x795868u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_795868: /* 795868: mov byte ptr [esi + 0x6c], 0 */
  W8((uint32_t)(esi + 0x6cu), 0x0u);
/* 79586c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79586d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_795880(void) {
  LOAD_REGS();
L_795880: /* 795880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 795884: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795885: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 795887: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x79588du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 79588d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7958a0(void) {
  LOAD_REGS();
L_7958a0: /* 7958a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7958a4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7958a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7958a7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7958adu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7958ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7958c0(void) {
  LOAD_REGS();
L_7958c0: /* 7958c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7958c4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7958c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7958c7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7958cdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7958cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7958e0(void) {
  LOAD_REGS();
L_7958e0: /* 7958e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7958e4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7958e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7958e7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7958edu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7958ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_795900(void) {
  LOAD_REGS();
L_795900: /* 795900: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 795904: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 795908: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 79590c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79590d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79590e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79590f: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x795915u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 795915: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795916: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x79591cu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 79591c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79591f: ret  */
  esp += 4; SPILL(); return;
}

void f_795930(void) {
  LOAD_REGS();
L_795930: /* 795930: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 795934: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 795938: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 79593a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79593b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 79593d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 79593f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 795941: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 795942: ret  */
  esp += 4; SPILL(); return;
}

void f_795960(void) {
  LOAD_REGS();
L_795960: /* 795960: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 795964: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 795968: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79596a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 79596c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 79596e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 795970: ret  */
  esp += 4; SPILL(); return;
}

void f_795990(void) {
  LOAD_REGS();
L_795990: /* 795990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 795994: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 795996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795997: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 79599b: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 79599d: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 79599f: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 7959a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7959a2: ret  */
  esp += 4; SPILL(); return;
}

void f_7959c0(void) {
  LOAD_REGS();
L_7959c0: /* 7959c0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7959c4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7959c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7959ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7959cb: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 7959cd: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7959cf: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7959d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7959d2: ret  */
  esp += 4; SPILL(); return;
}

void f_7959f0(void) {
  LOAD_REGS();
L_7959f0: /* 7959f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7959f2: push 0x9cd057 */
  { uint32_t v = 0x9cd057u; esp -= 4; W32(esp, v); }
/* 7959f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7959fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7959fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 795a05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795a06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795a07: mov esi, ecx */
  esi = ecx;
/* 795a09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 795a0d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 795a10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795a12: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 795a1a: je 0x795a31 */
  if (zf) goto L_795a31;
L_795a1c: /* 795a1c: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 795a1e: push 0xacd4c8 */
  { uint32_t v = 0xacd4c8u; esp -= 4; W32(esp, v); }
/* 795a23: push 0xacd4b0 */
  { uint32_t v = 0xacd4b0u; esp -= 4; W32(esp, v); }
/* 795a28: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x795a2eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 795a2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_795a31: /* 795a31: lea ecx, [esi + 0x11c] */
  ecx = (uint32_t)(esi + 0x11cu);
/* 795a37: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 795a3c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x795a42u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 795a42: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 795a45: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 795a4a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x795a50u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 795a50: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 795a53: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 795a5b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x795a61u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 795a61: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 795a65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 795a66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 795a6d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795a70: ret  */
  esp += 4; SPILL(); return;
}

void f_795ab0(void) {
  LOAD_REGS();
L_795ab0: /* 795ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795ab1: mov esi, ecx */
  esi = ecx;
/* 795ab3: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x795ab8u); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 795ab8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795abd: je 0x795acc */
  if (zf) goto L_795acc;
L_795abf: /* 795abf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 795ac4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 795ac6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 795ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795ac9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x795accu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_795acc: /* 795acc: mov eax, esi */
  eax = esi;
/* 795ace: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 795acf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_795af0(void) {
  LOAD_REGS();
L_795af0: /* 795af0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 795af4: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 795af8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 795afa: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795afd: jne 0x795b04 */
  if (!zf) goto L_795b04;
L_795aff: /* 795aff: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 795b03: ret  */
  esp += 4; SPILL(); return;
L_795b04: /* 795b04: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 795b08: ret  */
  esp += 4; SPILL(); return;
}

void f_795b20(void) {
  LOAD_REGS();
L_795b20: /* 795b20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 795b21: mov ebp, esp */
  ebp = esp;
/* 795b23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 795b25: push 0x9cd434 */
  { uint32_t v = 0x9cd434u; esp -= 4; W32(esp, v); }
/* 795b2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 795b30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795b31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 795b38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 795b3b: mov eax, dword ptr [0xb5c400] */
  eax = R32((uint32_t)(0xb5c400u));
/* 795b40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 795b41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795b42: xor esi, esi */
  esi = 0;
/* 795b44: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795b47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 795b48: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 795b4b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 795b4e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 795b51: je 0x797473 */
  if (zf) goto L_797473;
L_795b57: /* 795b57: mov eax, dword ptr [ecx + 0x84] */
  eax = R32((uint32_t)(ecx + 0x84u));
/* 795b5d: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795b5f: je 0x795b83 */
  if (zf) goto L_795b83;
L_795b61: /* 795b61: test dword ptr [ecx + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795b6b: jne 0x795b83 */
  if (!zf) goto L_795b83;
L_795b6d: /* 795b6d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 795b70: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 795b73: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 795b7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 795b7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 795b7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 795b7d: mov esp, ebp */
  esp = ebp;
/* 795b7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 795b80: ret 0x14 */
  esp += 24; SPILL(); return;
L_795b83: /* 795b83: cmp byte ptr [ecx + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 795b8a: jne 0x797473 */
  if (!zf) goto L_797473;
L_795b90: /* 795b90: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795b92: je 0x79639d */
  if (zf) goto L_79639d;
L_795b98: /* 795b98: mov dl, byte ptr [ecx + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x90u))) & 0xffu);
/* 795b9e: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* 795ba0: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 795ba2: je 0x796315 */
  if (zf) goto L_796315;
L_795ba8: /* 795ba8: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795bab: jne 0x795c03 */
  if (!zf) goto L_795c03;
L_795bad: /* 795bad: cmp dword ptr [ecx + 0x5c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x5cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 795bb0: jne 0x795c03 */
  if (!zf) goto L_795c03;
L_795bb2: /* 795bb2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 795bb5: cmp dword ptr [eax + 0x5c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 795bb8: je 0x795c03 */
  if (zf) goto L_795c03;
L_795bba: /* 795bba: test byte ptr [0xb5bcb0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcb0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795bc1: jne 0x795bea */
  if (!zf) goto L_795bea;
L_795bc3: /* 795bc3: or dword ptr [0xb5bcb0], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcb0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcb0u), r);
  }
/* 795bca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795bcb: push 0xacb644 */
  { uint32_t v = 0xacb644u; esp -= 4; W32(esp, v); }
/* 795bd0: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 795bd5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 795bd9: call 0x6cad67 */
  esp -= 4; W32(esp, 0x795bdeu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 795bde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795be1: mov dword ptr [0xb5bcac], eax */
  W32((uint32_t)(0xb5bcacu), eax);
/* 795be6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_795bea: /* 795bea: mov ecx, dword ptr [0xb5bcac] */
  ecx = R32((uint32_t)(0xb5bcacu));
/* 795bf0: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 795bf4: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 795bf7: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 795bf9: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 795bfc: mov esi, 1 */
  esi = 0x1u;
/* 795c01: jmp 0x795c06 */
  goto L_795c06;
L_795c03: /* 795c03: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_795c06: /* 795c06: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 795c09: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 795c0c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 795c0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795c10: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 795c13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795c14: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 795c17: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* 795c1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795c1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 795c1c: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x795c21u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 795c21: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795c24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795c26: je 0x795c67 */
  if (zf) goto L_795c67;
L_795c28: /* 795c28: test byte ptr [0xb5bcb0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcb0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795c2f: jne 0x795c59 */
  if (!zf) goto L_795c59;
L_795c31: /* 795c31: or dword ptr [0xb5bcb0], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcb0u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcb0u), r);
  }
/* 795c38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795c3a: push 0xacb658 */
  { uint32_t v = 0xacb658u; esp -= 4; W32(esp, v); }
/* 795c3f: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 795c44: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 795c48: call 0x6cad67 */
  esp -= 4; W32(esp, 0x795c4du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 795c4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795c50: mov dword ptr [0xb5bca8], eax */
  W32((uint32_t)(0xb5bca8u), eax);
/* 795c55: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_795c59: /* 795c59: mov eax, dword ptr [0xb5bca8] */
  eax = R32((uint32_t)(0xb5bca8u));
/* 795c5e: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 795c62: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 795c64: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_795c67: /* 795c67: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 795c6a: mov al, byte ptr [edx + 0x82] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x82u))) & 0xffu);
/* 795c70: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 795c73: xor al, byte ptr [ecx + 0x82] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x82u)));
  uint8_t r = (uint8_t)(a ^ b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 795c79: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795c7b: je 0x795cbf */
  if (zf) goto L_795cbf;
L_795c7d: /* 795c7d: test byte ptr [0xb5bcb0], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcb0u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795c84: jne 0x795cb0 */
  if (!zf) goto L_795cb0;
L_795c86: /* 795c86: or dword ptr [0xb5bcb0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcb0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcb0u), r);
  }
/* 795c8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795c8f: push 0xacb664 */
  { uint32_t v = 0xacb664u; esp -= 4; W32(esp, v); }
/* 795c94: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 795c99: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 795c9c: call 0x6cad67 */
  esp -= 4; W32(esp, 0x795ca1u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 795ca1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 795ca4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795ca7: mov dword ptr [0xb5bca4], eax */
  W32((uint32_t)(0xb5bca4u), eax);
/* 795cac: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_795cb0: /* 795cb0: mov edx, dword ptr [0xb5bca4] */
  edx = R32((uint32_t)(0xb5bca4u));
/* 795cb6: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 795cba: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 795cbc: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_795cbf: /* 795cbf: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 795cc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795cc4: je 0x795e7b */
  if (zf) goto L_795e7b;
L_795cca: /* 795cca: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795cd4: jne 0x795e7b */
  if (!zf) goto L_795e7b;
L_795cda: /* 795cda: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 795cdd: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 795ce0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 795ce3: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 795ce6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 795ce7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795ce8: add edx, 0x208 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 795cee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 795cef: lea eax, [esi + 0x208] */
  eax = (uint32_t)(esi + 0x208u);
/* 795cf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795cf6: call 0x6cc21b */
  esp -= 4; W32(esp, 0x795cfbu); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 795cfb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795cfe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795d00: je 0x795d42 */
  if (zf) goto L_795d42;
L_795d02: /* 795d02: test byte ptr [0xb5bcb0], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcb0u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795d09: jne 0x795d33 */
  if (!zf) goto L_795d33;
L_795d0b: /* 795d0b: or dword ptr [0xb5bcb0], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcb0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcb0u), r);
  }
/* 795d12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795d14: push 0xacb68c */
  { uint32_t v = 0xacb68cu; esp -= 4; W32(esp, v); }
/* 795d19: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 795d1e: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 795d22: call 0x6cad67 */
  esp -= 4; W32(esp, 0x795d27u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 795d27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795d2a: mov dword ptr [0xb5bca0], eax */
  W32((uint32_t)(0xb5bca0u), eax);
/* 795d2f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_795d33: /* 795d33: mov ecx, dword ptr [0xb5bca0] */
  ecx = R32((uint32_t)(0xb5bca0u));
/* 795d39: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 795d3d: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 795d3f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_795d42: /* 795d42: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 795d45: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 795d48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 795d49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795d4a: add ecx, 0x214 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 795d50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795d51: lea edx, [esi + 0x214] */
  edx = (uint32_t)(esi + 0x214u);
/* 795d57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 795d58: call 0x6c6aff */
  esp -= 4; W32(esp, 0x795d5du); SPILL(); f_6c6aff(); if (g_unwind) return; RELOAD();
/* 795d5d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795d60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795d62: je 0x795da3 */
  if (zf) goto L_795da3;
L_795d64: /* 795d64: test byte ptr [0xb5bcb0], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcb0u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795d6b: jne 0x795d95 */
  if (!zf) goto L_795d95;
L_795d6d: /* 795d6d: or dword ptr [0xb5bcb0], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcb0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcb0u), r);
  }
/* 795d74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795d76: push 0xacb6b0 */
  { uint32_t v = 0xacb6b0u; esp -= 4; W32(esp, v); }
/* 795d7b: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 795d80: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 795d84: call 0x6cad67 */
  esp -= 4; W32(esp, 0x795d89u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 795d89: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795d8c: mov dword ptr [0xb5bc9c], eax */
  W32((uint32_t)(0xb5bc9cu), eax);
/* 795d91: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_795d95: /* 795d95: mov eax, dword ptr [0xb5bc9c] */
  eax = R32((uint32_t)(0xb5bc9cu));
/* 795d9a: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 795d9e: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 795da0: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_795da3: /* 795da3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 795da6: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* 795dac: cmp edx, dword ptr [eax + 0xac] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xacu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 795db2: je 0x795df4 */
  if (zf) goto L_795df4;
L_795db4: /* 795db4: test byte ptr [0xb5bcb0], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcb0u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795dbb: jne 0x795de5 */
  if (!zf) goto L_795de5;
L_795dbd: /* 795dbd: or dword ptr [0xb5bcb0], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcb0u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcb0u), r);
  }
/* 795dc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795dc6: push 0xacb6d4 */
  { uint32_t v = 0xacb6d4u; esp -= 4; W32(esp, v); }
/* 795dcb: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 795dd0: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 795dd4: call 0x6cad67 */
  esp -= 4; W32(esp, 0x795dd9u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 795dd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795ddc: mov dword ptr [0xb5bc98], eax */
  W32((uint32_t)(0xb5bc98u), eax);
/* 795de1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_795de5: /* 795de5: mov ecx, dword ptr [0xb5bc98] */
  ecx = R32((uint32_t)(0xb5bc98u));
/* 795deb: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 795def: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 795df1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_795df4: /* 795df4: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 795dfa: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795dfd: jne 0x795fb5 */
  if (!zf) goto L_795fb5;
L_795e03: /* 795e03: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 795e06: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 795e09: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795e0b: jne 0x795fb5 */
  if (!zf) goto L_795fb5;
L_795e11: /* 795e11: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 795e14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 795e15: mov edx, eax */
  edx = eax;
/* 795e17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795e18: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 795e1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 795e1f: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 795e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795e26: call 0x6cc21b */
  esp -= 4; W32(esp, 0x795e2bu); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 795e2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795e2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795e30: je 0x795fb5 */
  if (zf) goto L_795fb5;
L_795e36: /* 795e36: test byte ptr [0xb5bcb0], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcb0u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795e3d: jne 0x795e67 */
  if (!zf) goto L_795e67;
L_795e3f: /* 795e3f: or dword ptr [0xb5bcb0], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcb0u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcb0u), r);
  }
/* 795e46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795e48: push 0xacb6f4 */
  { uint32_t v = 0xacb6f4u; esp -= 4; W32(esp, v); }
/* 795e4d: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 795e52: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 795e56: call 0x6cad67 */
  esp -= 4; W32(esp, 0x795e5bu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 795e5b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795e5e: mov dword ptr [0xb5bc94], eax */
  W32((uint32_t)(0xb5bc94u), eax);
/* 795e63: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_795e67: /* 795e67: mov ecx, dword ptr [0xb5bc94] */
  ecx = R32((uint32_t)(0xb5bc94u));
/* 795e6d: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 795e71: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 795e73: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 795e76: jmp 0x795fb5 */
  goto L_795fb5;
L_795e7b: /* 795e7b: mov eax, dword ptr [ecx + 0x84] */
  eax = R32((uint32_t)(ecx + 0x84u));
/* 795e81: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795e84: jne 0x795faf */
  if (!zf) goto L_795faf;
L_795e8a: /* 795e8a: cmp byte ptr [ecx + 0x90], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x90u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 795e91: jb 0x795ea7 */
  if (cf) goto L_795ea7;
L_795e93: /* 795e93: test dword ptr [ecx + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795e9d: jne 0x795ea7 */
  if (!zf) goto L_795ea7;
L_795e9f: /* 795e9f: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795ea1: je 0x795faf */
  if (zf) goto L_795faf;
L_795ea7: /* 795ea7: test dword ptr [ecx + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795eb1: jne 0x795f24 */
  if (!zf) goto L_795f24;
L_795eb3: /* 795eb3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795eb5: jne 0x795f24 */
  if (!zf) goto L_795f24;
L_795eb7: /* 795eb7: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 795eba: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 795ebd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 795ec0: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 795ec3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795ec4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795ec5: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 795ecb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 795ecc: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 795ed2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795ed3: call 0x6cc21b */
  esp -= 4; W32(esp, 0x795ed8u); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 795ed8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795edb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795edd: je 0x795f24 */
  if (zf) goto L_795f24;
L_795edf: /* 795edf: mov al, byte ptr [0xb5bcb0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bcb0u))) & 0xffu);
/* 795ee4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 795ee6: js 0x795f13 */
  if (sf) goto L_795f13;
L_795ee8: /* 795ee8: or dword ptr [0xb5bcb0], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcb0u))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcb0u), r);
  }
/* 795ef2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795ef4: push 0xacb708 */
  { uint32_t v = 0xacb708u; esp -= 4; W32(esp, v); }
/* 795ef9: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 795efe: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 795f02: call 0x6cad67 */
  esp -= 4; W32(esp, 0x795f07u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 795f07: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795f0a: mov dword ptr [0xb5bc90], eax */
  W32((uint32_t)(0xb5bc90u), eax);
/* 795f0f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_795f13: /* 795f13: mov ecx, dword ptr [0xb5bc90] */
  ecx = R32((uint32_t)(0xb5bc90u));
/* 795f19: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 795f1d: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 795f1f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 795f22: jmp 0x795f27 */
  goto L_795f27;
L_795f24: /* 795f24: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_795f27: /* 795f27: mov al, byte ptr [esi + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x51u))) & 0xffu);
/* 795f2a: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 795f2c: je 0x795f32 */
  if (zf) goto L_795f32;
L_795f2e: /* 795f2e: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 795f30: jne 0x795faf */
  if (!zf) goto L_795faf;
L_795f32: /* 795f32: test dword ptr [esi + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795f3c: mov ebx, 0x100 */
  ebx = 0x100u;
/* 795f41: je 0x795f4b */
  if (zf) goto L_795f4b;
L_795f43: /* 795f43: test dword ptr [esi + 0x84], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x84u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795f49: jne 0x795faf */
  if (!zf) goto L_795faf;
L_795f4b: /* 795f4b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 795f4e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 795f51: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 795f54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 795f55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 795f56: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 795f5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 795f5d: add esi, 0x17c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 795f63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 795f64: call 0x6c6aff */
  esp -= 4; W32(esp, 0x795f69u); SPILL(); f_6c6aff(); if (g_unwind) return; RELOAD();
/* 795f69: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795f6e: je 0x795faf */
  if (zf) goto L_795faf;
L_795f70: /* 795f70: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 795f75: test ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 795f77: jne 0x795fa1 */
  if (!zf) goto L_795fa1;
L_795f79: /* 795f79: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 795f7b: mov dword ptr [0xb5bcb0], eax */
  W32((uint32_t)(0xb5bcb0u), eax);
/* 795f80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795f82: push 0xacb71c */
  { uint32_t v = 0xacb71cu; esp -= 4; W32(esp, v); }
/* 795f87: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 795f8c: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 795f90: call 0x6cad67 */
  esp -= 4; W32(esp, 0x795f95u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 795f95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 795f98: mov dword ptr [0xb5bc8c], eax */
  W32((uint32_t)(0xb5bc8cu), eax);
/* 795f9d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_795fa1: /* 795fa1: mov eax, dword ptr [0xb5bc8c] */
  eax = R32((uint32_t)(0xb5bc8cu));
/* 795fa6: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 795faa: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 795fac: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_795faf: /* 795faf: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 795fb2: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_795fb5: /* 795fb5: cmp byte ptr [esi + 0x50], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 795fb9: jne 0x796149 */
  if (!zf) goto L_796149;
L_795fbf: /* 795fbf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 795fc2: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* 795fc8: xor eax, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 795fce: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795fd1: je 0x79601b */
  if (zf) goto L_79601b;
L_795fd3: /* 795fd3: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 795fd8: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 795fdb: jne 0x79600c */
  if (!zf) goto L_79600c;
L_795fdd: /* 795fdd: mov edx, eax */
  edx = eax;
/* 795fdf: or edx, 0x200 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 795fe5: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 795feb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 795fed: push 0xacb730 */
  { uint32_t v = 0xacb730u; esp -= 4; W32(esp, v); }
/* 795ff2: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 795ff7: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 795ffb: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796000u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796000: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796003: mov dword ptr [0xb5bc88], eax */
  W32((uint32_t)(0xb5bc88u), eax);
/* 796008: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79600c: /* 79600c: mov ecx, dword ptr [0xb5bc88] */
  ecx = R32((uint32_t)(0xb5bc88u));
/* 796012: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 796016: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 796018: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79601b: /* 79601b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79601e: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 796024: xor ecx, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79602a: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 79602c: jns 0x796076 */
  if (!sf) goto L_796076;
L_79602e: /* 79602e: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 796033: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796036: jne 0x796067 */
  if (!zf) goto L_796067;
L_796038: /* 796038: mov edx, eax */
  edx = eax;
/* 79603a: or edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796040: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 796046: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796048: push 0xacb754 */
  { uint32_t v = 0xacb754u; esp -= 4; W32(esp, v); }
/* 79604d: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796052: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 796056: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79605bu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79605b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79605e: mov dword ptr [0xb5bc84], eax */
  W32((uint32_t)(0xb5bc84u), eax);
/* 796063: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796067: /* 796067: mov edx, dword ptr [0xb5bc84] */
  edx = R32((uint32_t)(0xb5bc84u));
/* 79606d: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 796071: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 796073: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796076: /* 796076: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 796079: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79607c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79607d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79607e: add edx, 0x2e4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2e4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 796084: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796085: lea eax, [esi + 0x2e4] */
  eax = (uint32_t)(esi + 0x2e4u);
/* 79608b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79608c: call 0x6c6aff */
  esp -= 4; W32(esp, 0x796091u); SPILL(); f_6c6aff(); if (g_unwind) return; RELOAD();
/* 796091: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796094: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796096: je 0x7960e0 */
  if (zf) goto L_7960e0;
L_796098: /* 796098: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 79609d: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7960a0: jne 0x7960d1 */
  if (!zf) goto L_7960d1;
L_7960a2: /* 7960a2: mov edx, eax */
  edx = eax;
/* 7960a4: or edx, 0x800 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7960aa: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 7960b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7960b2: push 0xacb778 */
  { uint32_t v = 0xacb778u; esp -= 4; W32(esp, v); }
/* 7960b7: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7960bc: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7960c0: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7960c5u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7960c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7960c8: mov dword ptr [0xb5bc80], eax */
  W32((uint32_t)(0xb5bc80u), eax);
/* 7960cd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7960d1: /* 7960d1: mov ecx, dword ptr [0xb5bc80] */
  ecx = R32((uint32_t)(0xb5bc80u));
/* 7960d7: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 7960db: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7960dd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7960e0: /* 7960e0: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7960e3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7960e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7960e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7960e8: add ecx, 0x2f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2f0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7960ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7960ef: lea edx, [esi + 0x2f0] */
  edx = (uint32_t)(esi + 0x2f0u);
/* 7960f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7960f6: call 0x6c6aff */
  esp -= 4; W32(esp, 0x7960fbu); SPILL(); f_6c6aff(); if (g_unwind) return; RELOAD();
/* 7960fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7960fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796100: je 0x796149 */
  if (zf) goto L_796149;
L_796102: /* 796102: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 796107: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79610a: jne 0x79613b */
  if (!zf) goto L_79613b;
L_79610c: /* 79610c: mov edx, eax */
  edx = eax;
/* 79610e: or edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796114: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 79611a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79611c: push 0xacb794 */
  { uint32_t v = 0xacb794u; esp -= 4; W32(esp, v); }
/* 796121: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796126: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 79612a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79612fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79612f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796132: mov dword ptr [0xb5bc7c], eax */
  W32((uint32_t)(0xb5bc7cu), eax);
/* 796137: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79613b: /* 79613b: mov eax, dword ptr [0xb5bc7c] */
  eax = R32((uint32_t)(0xb5bc7cu));
/* 796140: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796144: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796146: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796149: /* 796149: cmp byte ptr [esi + 0x90], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 796150: jne 0x796245 */
  if (!zf) goto L_796245;
L_796156: /* 796156: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 79615c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79615f: jne 0x7961da */
  if (!zf) goto L_7961da;
L_796161: /* 796161: test dword ptr [esi + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79616b: jne 0x796171 */
  if (!zf) goto L_796171;
L_79616d: /* 79616d: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79616f: je 0x7961da */
  if (zf) goto L_7961da;
L_796171: /* 796171: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 796174: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 796177: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 796178: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796179: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79617e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79617f: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 796185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 796186: call 0x6cc21b */
  esp -= 4; W32(esp, 0x79618bu); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 79618b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79618e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796190: je 0x7961da */
  if (zf) goto L_7961da;
L_796192: /* 796192: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 796197: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79619a: jne 0x7961cb */
  if (!zf) goto L_7961cb;
L_79619c: /* 79619c: mov edx, eax */
  edx = eax;
/* 79619e: or edx, 0x2000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7961a4: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 7961aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7961ac: push 0xacb7b4 */
  { uint32_t v = 0xacb7b4u; esp -= 4; W32(esp, v); }
/* 7961b1: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7961b6: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7961ba: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7961bfu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7961bf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7961c2: mov dword ptr [0xb5bc78], eax */
  W32((uint32_t)(0xb5bc78u), eax);
/* 7961c7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7961cb: /* 7961cb: mov edx, dword ptr [0xb5bc78] */
  edx = R32((uint32_t)(0xb5bc78u));
/* 7961d1: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 7961d5: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7961d7: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7961da: /* 7961da: test dword ptr [esi + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7961e4: je 0x7963a6 */
  if (zf) goto L_7963a6;
L_7961ea: /* 7961ea: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7961ed: mov cl, byte ptr [esi + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 7961f0: cmp cl, byte ptr [edx + 0x50] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + 0x50u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7961f3: je 0x7963a6 */
  if (zf) goto L_7963a6;
L_7961f9: /* 7961f9: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 7961fe: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796201: jne 0x796232 */
  if (!zf) goto L_796232;
L_796203: /* 796203: mov edx, eax */
  edx = eax;
/* 796205: or edx, 0x4000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79620b: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 796211: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796213: push 0xacb7c8 */
  { uint32_t v = 0xacb7c8u; esp -= 4; W32(esp, v); }
/* 796218: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79621d: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 796221: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796226u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796226: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796229: mov dword ptr [0xb5bc74], eax */
  W32((uint32_t)(0xb5bc74u), eax);
/* 79622e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796232: /* 796232: mov eax, dword ptr [0xb5bc74] */
  eax = R32((uint32_t)(0xb5bc74u));
/* 796237: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79623b: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 79623d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 796240: jmp 0x7963a6 */
  goto L_7963a6;
L_796245: /* 796245: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 796248: mov dl, byte ptr [esi + 0x50] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 79624b: cmp dl, byte ptr [eax + 0x50] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x50u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79624e: je 0x796297 */
  if (zf) goto L_796297;
L_796250: /* 796250: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 796255: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 796257: js 0x796288 */
  if (sf) goto L_796288;
L_796259: /* 796259: mov edx, eax */
  edx = eax;
/* 79625b: or edx, 0x8000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796261: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 796267: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796269: push 0xacb7d8 */
  { uint32_t v = 0xacb7d8u; esp -= 4; W32(esp, v); }
/* 79626e: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796273: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 796277: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79627cu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79627c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79627f: mov dword ptr [0xb5bc70], eax */
  W32((uint32_t)(0xb5bc70u), eax);
/* 796284: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796288: /* 796288: mov ecx, dword ptr [0xb5bc70] */
  ecx = R32((uint32_t)(0xb5bc70u));
/* 79628e: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 796292: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 796294: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796297: /* 796297: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79629b: jne 0x7963a6 */
  if (!zf) goto L_7963a6;
L_7962a1: /* 7962a1: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7962a4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7962a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7962a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7962a9: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7962af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7962b0: lea edx, [esi + 0x188] */
  edx = (uint32_t)(esi + 0x188u);
/* 7962b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7962b7: call 0x6cc21b */
  esp -= 4; W32(esp, 0x7962bcu); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 7962bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7962bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7962c1: je 0x7963a6 */
  if (zf) goto L_7963a6;
L_7962c7: /* 7962c7: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 7962cc: test eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7962d1: jne 0x796302 */
  if (!zf) goto L_796302;
L_7962d3: /* 7962d3: mov edx, eax */
  edx = eax;
/* 7962d5: or edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7962db: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 7962e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7962e3: push 0xacb7e8 */
  { uint32_t v = 0xacb7e8u; esp -= 4; W32(esp, v); }
/* 7962e8: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7962ed: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7962f1: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7962f6u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7962f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7962f9: mov dword ptr [0xb5bc6c], eax */
  W32((uint32_t)(0xb5bc6cu), eax);
/* 7962fe: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796302: /* 796302: mov eax, dword ptr [0xb5bc6c] */
  eax = R32((uint32_t)(0xb5bc6cu));
/* 796307: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79630b: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 79630d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 796310: jmp 0x7963a6 */
  goto L_7963a6;
L_796315: /* 796315: test dword ptr [ecx + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79631f: je 0x79639d */
  if (zf) goto L_79639d;
L_796321: /* 796321: mov al, byte ptr [ecx + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x51u))) & 0xffu);
/* 796324: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 796326: je 0x79632c */
  if (zf) goto L_79632c;
L_796328: /* 796328: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79632a: jne 0x79639d */
  if (!zf) goto L_79639d;
L_79632c: /* 79632c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 79632f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 796332: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796333: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 796336: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 796337: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 79633d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79633e: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 796344: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 796345: call 0x6c6aff */
  esp -= 4; W32(esp, 0x79634au); SPILL(); f_6c6aff(); if (g_unwind) return; RELOAD();
/* 79634a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79634d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79634f: je 0x79639d */
  if (zf) goto L_79639d;
L_796351: /* 796351: mov ecx, dword ptr [0xb5bcb0] */
  ecx = R32((uint32_t)(0xb5bcb0u));
/* 796357: mov eax, 0x20000 */
  eax = 0x20000u;
/* 79635c: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79635e: jne 0x79638a */
  if (!zf) goto L_79638a;
L_796360: /* 796360: mov ebx, ecx */
  ebx = ecx;
/* 796362: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 796364: mov dword ptr [0xb5bcb0], ebx */
  W32((uint32_t)(0xb5bcb0u), ebx);
/* 79636a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79636b: push 0xacb7fc */
  { uint32_t v = 0xacb7fcu; esp -= 4; W32(esp, v); }
/* 796370: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796375: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 796379: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79637eu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79637e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796381: mov dword ptr [0xb5bc68], eax */
  W32((uint32_t)(0xb5bc68u), eax);
/* 796386: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79638a: /* 79638a: mov eax, dword ptr [0xb5bc68] */
  eax = R32((uint32_t)(0xb5bc68u));
/* 79638f: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796393: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 796396: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796398: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 79639b: jmp 0x7963a0 */
  goto L_7963a0;
L_79639d: /* 79639d: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_7963a0: /* 7963a0: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 7963a3: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7963a6: /* 7963a6: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 7963ac: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7963b1: je 0x7963ca */
  if (zf) goto L_7963ca;
L_7963b3: /* 7963b3: test dword ptr [esi + 0x84], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x84u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7963bd: je 0x7963ca */
  if (zf) goto L_7963ca;
L_7963bf: /* 7963bf: test eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7963c4: je 0x7965b2 */
  if (zf) goto L_7965b2;
L_7963ca: /* 7963ca: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7963cd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7963d0: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* 7963d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7963d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7963d8: mov edx, dword ptr [esi + 0xa8] */
  edx = R32((uint32_t)(esi + 0xa8u));
/* 7963de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7963df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7963e0: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x7963e5u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 7963e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7963e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7963ea: je 0x796439 */
  if (zf) goto L_796439;
L_7963ec: /* 7963ec: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 7963f1: test eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7963f6: jne 0x79642b */
  if (!zf) goto L_79642b;
L_7963f8: /* 7963f8: or eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7963fd: mov dword ptr [0xb5bcb0], eax */
  W32((uint32_t)(0xb5bcb0u), eax);
/* 796402: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 796406: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79640cu); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79640c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79640e: push 0xacb810 */
  { uint32_t v = 0xacb810u; esp -= 4; W32(esp, v); }
/* 796413: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796418: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 796419: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x79641fu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 79641f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796422: mov dword ptr [0xb5bc64], eax */
  W32((uint32_t)(0xb5bc64u), eax);
/* 796427: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79642b: /* 79642b: mov eax, dword ptr [0xb5bc64] */
  eax = R32((uint32_t)(0xb5bc64u));
/* 796430: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796434: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796436: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796439: /* 796439: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* 79643f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796441: je 0x7965b2 */
  if (zf) goto L_7965b2;
L_796447: /* 796447: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79644a: mov edx, dword ptr [esi + 0x2c4] */
  edx = R32((uint32_t)(esi + 0x2c4u));
/* 796450: cmp edx, dword ptr [eax + 0x2c4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2c4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 796456: je 0x7964a2 */
  if (zf) goto L_7964a2;
L_796458: /* 796458: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 79645d: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796462: jne 0x796493 */
  if (!zf) goto L_796493;
L_796464: /* 796464: mov edx, eax */
  edx = eax;
/* 796466: or edx, 0x80000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79646c: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 796472: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796474: push 0xacb82c */
  { uint32_t v = 0xacb82cu; esp -= 4; W32(esp, v); }
/* 796479: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79647e: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 796482: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796487u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796487: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79648a: mov dword ptr [0xb5bc60], eax */
  W32((uint32_t)(0xb5bc60u), eax);
/* 79648f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796493: /* 796493: mov ecx, dword ptr [0xb5bc60] */
  ecx = R32((uint32_t)(0xb5bc60u));
/* 796499: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79649d: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 79649f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7964a2: /* 7964a2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7964a5: mov al, byte ptr [esi + 0x2c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2c8u))) & 0xffu);
/* 7964ab: cmp al, byte ptr [ecx + 0x2c8] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x2c8u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7964b1: je 0x7964fd */
  if (zf) goto L_7964fd;
L_7964b3: /* 7964b3: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 7964b8: test eax, 0x100000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7964bd: jne 0x7964ee */
  if (!zf) goto L_7964ee;
L_7964bf: /* 7964bf: mov edx, eax */
  edx = eax;
/* 7964c1: or edx, 0x100000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7964c7: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 7964cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7964cf: push 0xacb844 */
  { uint32_t v = 0xacb844u; esp -= 4; W32(esp, v); }
/* 7964d4: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7964d9: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 7964dd: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7964e2u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7964e2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7964e5: mov dword ptr [0xb5bc5c], eax */
  W32((uint32_t)(0xb5bc5cu), eax);
/* 7964ea: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7964ee: /* 7964ee: mov edx, dword ptr [0xb5bc5c] */
  edx = R32((uint32_t)(0xb5bc5cu));
/* 7964f4: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 7964f8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7964fa: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7964fd: /* 7964fd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 796500: mov cl, byte ptr [esi + 0x2c9] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2c9u))) & 0xffu);
/* 796506: cmp cl, byte ptr [edx + 0x2c9] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + 0x2c9u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79650c: je 0x796557 */
  if (zf) goto L_796557;
L_79650e: /* 79650e: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 796513: test eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796518: jne 0x796549 */
  if (!zf) goto L_796549;
L_79651a: /* 79651a: mov edx, eax */
  edx = eax;
/* 79651c: or edx, 0x200000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796522: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 796528: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79652a: push 0xacb85c */
  { uint32_t v = 0xacb85cu; esp -= 4; W32(esp, v); }
/* 79652f: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796534: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 796538: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79653du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79653d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796540: mov dword ptr [0xb5bc58], eax */
  W32((uint32_t)(0xb5bc58u), eax);
/* 796545: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796549: /* 796549: mov eax, dword ptr [0xb5bc58] */
  eax = R32((uint32_t)(0xb5bc58u));
/* 79654e: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796552: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796554: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796557: /* 796557: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79655a: mov dl, byte ptr [esi + 0x2ca] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2cau))) & 0xffu);
/* 796560: cmp dl, byte ptr [eax + 0x2ca] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x2cau)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 796566: je 0x7965b2 */
  if (zf) goto L_7965b2;
L_796568: /* 796568: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 79656d: test eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796572: jne 0x7965a3 */
  if (!zf) goto L_7965a3;
L_796574: /* 796574: mov edx, eax */
  edx = eax;
/* 796576: or edx, 0x400000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79657c: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 796582: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796584: push 0xacb874 */
  { uint32_t v = 0xacb874u; esp -= 4; W32(esp, v); }
/* 796589: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79658e: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 796592: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796597u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796597: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79659a: mov dword ptr [0xb5bc54], eax */
  W32((uint32_t)(0xb5bc54u), eax);
/* 79659f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7965a3: /* 7965a3: mov ecx, dword ptr [0xb5bc54] */
  ecx = R32((uint32_t)(0xb5bc54u));
/* 7965a9: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 7965ad: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7965af: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7965b2: /* 7965b2: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7965b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 7965ba: jns 0x7971f0 */
  if (!sf) goto L_7971f0;
L_7965c0: /* 7965c0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7965c3: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 7965c9: cmp eax, dword ptr [ecx + 0x284] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x284u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7965cf: je 0x79661b */
  if (zf) goto L_79661b;
L_7965d1: /* 7965d1: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 7965d6: test eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7965db: jne 0x79660c */
  if (!zf) goto L_79660c;
L_7965dd: /* 7965dd: mov edx, eax */
  edx = eax;
/* 7965df: or edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7965e5: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 7965eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7965ed: push 0xacb894 */
  { uint32_t v = 0xacb894u; esp -= 4; W32(esp, v); }
/* 7965f2: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7965f7: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 7965fb: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796600u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796600: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796603: mov dword ptr [0xb5bc50], eax */
  W32((uint32_t)(0xb5bc50u), eax);
/* 796608: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79660c: /* 79660c: mov edx, dword ptr [0xb5bc50] */
  edx = R32((uint32_t)(0xb5bc50u));
/* 796612: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 796616: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 796618: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79661b: /* 79661b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79661e: mov cl, byte ptr [esi + 0x51] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x51u))) & 0xffu);
/* 796621: cmp cl, byte ptr [edx + 0x51] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + 0x51u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 796624: je 0x79666f */
  if (zf) goto L_79666f;
L_796626: /* 796626: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 79662b: test eax, 0x1000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796630: jne 0x796661 */
  if (!zf) goto L_796661;
L_796632: /* 796632: mov edx, eax */
  edx = eax;
/* 796634: or edx, 0x1000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79663a: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 796640: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796642: push 0xacb8a8 */
  { uint32_t v = 0xacb8a8u; esp -= 4; W32(esp, v); }
/* 796647: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79664c: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 796650: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796655u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796655: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796658: mov dword ptr [0xb5bc4c], eax */
  W32((uint32_t)(0xb5bc4cu), eax);
/* 79665d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796661: /* 796661: mov eax, dword ptr [0xb5bc4c] */
  eax = R32((uint32_t)(0xb5bc4cu));
/* 796666: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79666a: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 79666c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79666f: /* 79666f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 796672: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* 796678: xor eax, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 79667e: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796680: je 0x7966cc */
  if (zf) goto L_7966cc;
L_796682: /* 796682: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 796687: test eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79668c: jne 0x7966bd */
  if (!zf) goto L_7966bd;
L_79668e: /* 79668e: mov edx, eax */
  edx = eax;
/* 796690: or edx, 0x2000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796696: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 79669c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79669e: push 0xacb8bc */
  { uint32_t v = 0xacb8bcu; esp -= 4; W32(esp, v); }
/* 7966a3: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7966a8: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 7966ac: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7966b1u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7966b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7966b4: mov dword ptr [0xb5bc48], eax */
  W32((uint32_t)(0xb5bc48u), eax);
/* 7966b9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7966bd: /* 7966bd: mov ecx, dword ptr [0xb5bc48] */
  ecx = R32((uint32_t)(0xb5bc48u));
/* 7966c3: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 7966c7: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7966c9: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7966cc: /* 7966cc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7966cf: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7966d5: xor ecx, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7966db: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7966de: je 0x79672a */
  if (zf) goto L_79672a;
L_7966e0: /* 7966e0: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 7966e5: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7966ea: jne 0x79671b */
  if (!zf) goto L_79671b;
L_7966ec: /* 7966ec: mov edx, eax */
  edx = eax;
/* 7966ee: or edx, 0x4000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7966f4: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 7966fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7966fc: push 0xacb8dc */
  { uint32_t v = 0xacb8dcu; esp -= 4; W32(esp, v); }
/* 796701: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796706: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 79670a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79670fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79670f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796712: mov dword ptr [0xb5bc44], eax */
  W32((uint32_t)(0xb5bc44u), eax);
/* 796717: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79671b: /* 79671b: mov edx, dword ptr [0xb5bc44] */
  edx = R32((uint32_t)(0xb5bc44u));
/* 796721: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 796725: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 796727: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79672a: /* 79672a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79672d: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* 796733: xor ecx, dword ptr [edx + 0x80] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 796739: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79673c: je 0x796787 */
  if (zf) goto L_796787;
L_79673e: /* 79673e: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 796743: test eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796748: jne 0x796779 */
  if (!zf) goto L_796779;
L_79674a: /* 79674a: mov edx, eax */
  edx = eax;
/* 79674c: or edx, 0x8000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796752: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 796758: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79675a: push 0xacb8f8 */
  { uint32_t v = 0xacb8f8u; esp -= 4; W32(esp, v); }
/* 79675f: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796764: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 796768: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79676du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79676d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796770: mov dword ptr [0xb5bc40], eax */
  W32((uint32_t)(0xb5bc40u), eax);
/* 796775: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796779: /* 796779: mov eax, dword ptr [0xb5bc40] */
  eax = R32((uint32_t)(0xb5bc40u));
/* 79677e: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796782: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796784: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796787: /* 796787: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79678a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79678d: mov ecx, dword ptr [eax + 0x278] */
  ecx = R32((uint32_t)(eax + 0x278u));
/* 796793: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 796794: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796795: mov edx, dword ptr [esi + 0x278] */
  edx = R32((uint32_t)(esi + 0x278u));
/* 79679b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79679c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79679d: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x7967a2u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 7967a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7967a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7967a7: je 0x7967f2 */
  if (zf) goto L_7967f2;
L_7967a9: /* 7967a9: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 7967ae: test eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7967b3: jne 0x7967e4 */
  if (!zf) goto L_7967e4;
L_7967b5: /* 7967b5: mov edx, eax */
  edx = eax;
/* 7967b7: or edx, 0x10000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7967bd: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 7967c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7967c5: push 0xacb914 */
  { uint32_t v = 0xacb914u; esp -= 4; W32(esp, v); }
/* 7967ca: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7967cf: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 7967d3: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7967d8u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7967d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7967db: mov dword ptr [0xb5bc3c], eax */
  W32((uint32_t)(0xb5bc3cu), eax);
/* 7967e0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7967e4: /* 7967e4: mov eax, dword ptr [0xb5bc3c] */
  eax = R32((uint32_t)(0xb5bc3cu));
/* 7967e9: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7967ed: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7967ef: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7967f2: /* 7967f2: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7967f5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7967f8: mov ecx, dword ptr [eax + 0x2ac] */
  ecx = R32((uint32_t)(eax + 0x2acu));
/* 7967fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7967ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796800: mov edx, dword ptr [esi + 0x2ac] */
  edx = R32((uint32_t)(esi + 0x2acu));
/* 796806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 796807: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796808: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79680du); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79680d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796810: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796812: je 0x79685d */
  if (zf) goto L_79685d;
L_796814: /* 796814: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 796819: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79681e: jne 0x79684f */
  if (!zf) goto L_79684f;
L_796820: /* 796820: mov edx, eax */
  edx = eax;
/* 796822: or edx, 0x20000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796828: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 79682e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796830: push 0xacb924 */
  { uint32_t v = 0xacb924u; esp -= 4; W32(esp, v); }
/* 796835: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79683a: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 79683e: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796843u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796843: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796846: mov dword ptr [0xb5bc38], eax */
  W32((uint32_t)(0xb5bc38u), eax);
/* 79684b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79684f: /* 79684f: mov eax, dword ptr [0xb5bc38] */
  eax = R32((uint32_t)(0xb5bc38u));
/* 796854: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796858: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 79685a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79685d: /* 79685d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 796860: mov dl, byte ptr [esi + 0x2c0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2c0u))) & 0xffu);
/* 796866: cmp dl, byte ptr [eax + 0x2c0] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x2c0u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79686c: je 0x7968b7 */
  if (zf) goto L_7968b7;
L_79686e: /* 79686e: mov ecx, dword ptr [0xb5bcb0] */
  ecx = R32((uint32_t)(0xb5bcb0u));
/* 796874: mov eax, 0x40000000 */
  eax = 0x40000000u;
/* 796879: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79687b: jne 0x7968a8 */
  if (!zf) goto L_7968a8;
L_79687d: /* 79687d: mov edx, ecx */
  edx = ecx;
/* 79687f: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796881: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 796887: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796889: push 0xacb934 */
  { uint32_t v = 0xacb934u; esp -= 4; W32(esp, v); }
/* 79688e: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796893: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 796897: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79689cu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79689c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79689f: mov dword ptr [0xb5bc34], eax */
  W32((uint32_t)(0xb5bc34u), eax);
/* 7968a4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7968a8: /* 7968a8: mov ecx, dword ptr [0xb5bc34] */
  ecx = R32((uint32_t)(0xb5bc34u));
/* 7968ae: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 7968b2: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7968b4: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7968b7: /* 7968b7: mov al, byte ptr [esi + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x51u))) & 0xffu);
/* 7968ba: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7968bc: je 0x7968c2 */
  if (zf) goto L_7968c2;
L_7968be: /* 7968be: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7968c0: jne 0x79692a */
  if (!zf) goto L_79692a;
L_7968c2: /* 7968c2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7968c5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7968c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7968c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7968ca: add ecx, 0x294 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7968d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7968d1: lea edx, [esi + 0x294] */
  edx = (uint32_t)(esi + 0x294u);
/* 7968d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7968d8: call 0x6cc21b */
  esp -= 4; W32(esp, 0x7968ddu); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 7968dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7968e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7968e2: je 0x79692a */
  if (zf) goto L_79692a;
L_7968e4: /* 7968e4: mov eax, dword ptr [0xb5bcb0] */
  eax = R32((uint32_t)(0xb5bcb0u));
/* 7968e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 7968eb: js 0x79691c */
  if (sf) goto L_79691c;
L_7968ed: /* 7968ed: mov edx, eax */
  edx = eax;
/* 7968ef: or edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7968f5: mov dword ptr [0xb5bcb0], edx */
  W32((uint32_t)(0xb5bcb0u), edx);
/* 7968fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7968fd: push 0xacb940 */
  { uint32_t v = 0xacb940u; esp -= 4; W32(esp, v); }
/* 796902: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796907: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 79690b: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796910u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796910: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796913: mov dword ptr [0xb5bc30], eax */
  W32((uint32_t)(0xb5bc30u), eax);
/* 796918: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79691c: /* 79691c: mov eax, dword ptr [0xb5bc30] */
  eax = R32((uint32_t)(0xb5bc30u));
/* 796921: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796925: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796927: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79692a: /* 79692a: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 796930: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796932: je 0x796acf */
  if (zf) goto L_796acf;
L_796938: /* 796938: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79693b: mov ecx, dword ptr [edx + 0x88] */
  ecx = R32((uint32_t)(edx + 0x88u));
/* 796941: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 796943: test cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796946: je 0x796988 */
  if (zf) goto L_796988;
L_796948: /* 796948: test byte ptr [0xb5bc2c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bc2cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79694f: jne 0x796979 */
  if (!zf) goto L_796979;
L_796951: /* 796951: or dword ptr [0xb5bc2c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bc2cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bc2cu), r);
  }
/* 796958: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79695a: push 0xacb954 */
  { uint32_t v = 0xacb954u; esp -= 4; W32(esp, v); }
/* 79695f: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796964: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 796968: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79696du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79696d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796970: mov dword ptr [0xb5bc28], eax */
  W32((uint32_t)(0xb5bc28u), eax);
/* 796975: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796979: /* 796979: mov edx, dword ptr [0xb5bc28] */
  edx = R32((uint32_t)(0xb5bc28u));
/* 79697f: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 796983: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 796985: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796988: /* 796988: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79698b: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 796991: xor edx, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 796997: test dl, 8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79699a: je 0x7969db */
  if (zf) goto L_7969db;
L_79699c: /* 79699c: test byte ptr [0xb5bc2c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bc2cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7969a3: jne 0x7969cd */
  if (!zf) goto L_7969cd;
L_7969a5: /* 7969a5: or dword ptr [0xb5bc2c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bc2cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bc2cu), r);
  }
/* 7969ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7969ae: push 0xacb96c */
  { uint32_t v = 0xacb96cu; esp -= 4; W32(esp, v); }
/* 7969b3: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7969b8: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 7969bc: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7969c1u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7969c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7969c4: mov dword ptr [0xb5bc24], eax */
  W32((uint32_t)(0xb5bc24u), eax);
/* 7969c9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7969cd: /* 7969cd: mov eax, dword ptr [0xb5bc24] */
  eax = R32((uint32_t)(0xb5bc24u));
/* 7969d2: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7969d6: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7969d8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7969db: /* 7969db: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7969de: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* 7969e4: xor eax, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7969ea: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7969ec: je 0x796a2e */
  if (zf) goto L_796a2e;
L_7969ee: /* 7969ee: test byte ptr [0xb5bc2c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bc2cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7969f5: jne 0x796a1f */
  if (!zf) goto L_796a1f;
L_7969f7: /* 7969f7: or dword ptr [0xb5bc2c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bc2cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bc2cu), r);
  }
/* 7969fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796a00: push 0xacb988 */
  { uint32_t v = 0xacb988u; esp -= 4; W32(esp, v); }
/* 796a05: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796a0a: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 796a0e: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796a13u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796a13: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796a16: mov dword ptr [0xb5bc20], eax */
  W32((uint32_t)(0xb5bc20u), eax);
/* 796a1b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796a1f: /* 796a1f: mov ecx, dword ptr [0xb5bc20] */
  ecx = R32((uint32_t)(0xb5bc20u));
/* 796a25: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 796a29: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 796a2b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796a2e: /* 796a2e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 796a31: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 796a37: cmp eax, dword ptr [ecx + 0x2d4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2d4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 796a3d: je 0x796a7f */
  if (zf) goto L_796a7f;
L_796a3f: /* 796a3f: test byte ptr [0xb5bc2c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bc2cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796a46: jne 0x796a70 */
  if (!zf) goto L_796a70;
L_796a48: /* 796a48: or dword ptr [0xb5bc2c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bc2cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bc2cu), r);
  }
/* 796a4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796a51: push 0xacb9a4 */
  { uint32_t v = 0xacb9a4u; esp -= 4; W32(esp, v); }
/* 796a56: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796a5b: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 796a5f: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796a64u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796a64: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796a67: mov dword ptr [0xb5bc1c], eax */
  W32((uint32_t)(0xb5bc1cu), eax);
/* 796a6c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796a70: /* 796a70: mov edx, dword ptr [0xb5bc1c] */
  edx = R32((uint32_t)(0xb5bc1cu));
/* 796a76: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 796a7a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 796a7c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796a7f: /* 796a7f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 796a82: mov ecx, dword ptr [esi + 0x2d8] */
  ecx = R32((uint32_t)(esi + 0x2d8u));
/* 796a88: cmp ecx, dword ptr [edx + 0x2d8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x2d8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 796a8e: je 0x796acf */
  if (zf) goto L_796acf;
L_796a90: /* 796a90: test byte ptr [0xb5bc2c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bc2cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796a97: jne 0x796ac1 */
  if (!zf) goto L_796ac1;
L_796a99: /* 796a99: or dword ptr [0xb5bc2c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bc2cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bc2cu), r);
  }
/* 796aa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796aa2: push 0xacb9c4 */
  { uint32_t v = 0xacb9c4u; esp -= 4; W32(esp, v); }
/* 796aa7: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796aac: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 796ab0: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796ab5u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796ab5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796ab8: mov dword ptr [0xb5bc18], eax */
  W32((uint32_t)(0xb5bc18u), eax);
/* 796abd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796ac1: /* 796ac1: mov eax, dword ptr [0xb5bc18] */
  eax = R32((uint32_t)(0xb5bc18u));
/* 796ac6: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796aca: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796acc: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796acf: /* 796acf: test byte ptr [esi + 0x84], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796ad6: jne 0x796c7b */
  if (!zf) goto L_796c7b;
L_796adc: /* 796adc: test dword ptr [esi + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796ae6: je 0x796ba5 */
  if (zf) goto L_796ba5;
L_796aec: /* 796aec: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 796aef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 796af2: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 796af5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 796af6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796af7: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 796afa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 796afb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796afc: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x796b01u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 796b01: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796b04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796b06: je 0x796b47 */
  if (zf) goto L_796b47;
L_796b08: /* 796b08: test byte ptr [0xb5bc2c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bc2cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796b0f: jne 0x796b39 */
  if (!zf) goto L_796b39;
L_796b11: /* 796b11: or dword ptr [0xb5bc2c], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bc2cu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bc2cu), r);
  }
/* 796b18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796b1a: push 0xacb9e4 */
  { uint32_t v = 0xacb9e4u; esp -= 4; W32(esp, v); }
/* 796b1f: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796b24: mov byte ptr [ebp - 4], 0x26 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 796b28: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796b2du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796b2d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796b30: mov dword ptr [0xb5bc14], eax */
  W32((uint32_t)(0xb5bc14u), eax);
/* 796b35: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796b39: /* 796b39: mov eax, dword ptr [0xb5bc14] */
  eax = R32((uint32_t)(0xb5bc14u));
/* 796b3e: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796b42: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796b44: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796b47: /* 796b47: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 796b4a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 796b4d: mov ecx, dword ptr [eax + 0xe4] */
  ecx = R32((uint32_t)(eax + 0xe4u));
/* 796b53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 796b54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796b55: mov edx, dword ptr [esi + 0xe4] */
  edx = R32((uint32_t)(esi + 0xe4u));
/* 796b5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 796b5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796b5d: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x796b62u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 796b62: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796b65: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796b67: je 0x796c09 */
  if (zf) goto L_796c09;
L_796b6d: /* 796b6d: test byte ptr [0xb5bc2c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bc2cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796b74: jne 0x796b9e */
  if (!zf) goto L_796b9e;
L_796b76: /* 796b76: or dword ptr [0xb5bc2c], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bc2cu))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bc2cu), r);
  }
/* 796b7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796b7f: push 0xacb9f0 */
  { uint32_t v = 0xacb9f0u; esp -= 4; W32(esp, v); }
/* 796b84: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796b89: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 796b8d: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796b92u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796b92: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796b95: mov dword ptr [0xb5bc10], eax */
  W32((uint32_t)(0xb5bc10u), eax);
/* 796b9a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796b9e: /* 796b9e: mov eax, dword ptr [0xb5bc10] */
  eax = R32((uint32_t)(0xb5bc10u));
/* 796ba3: jmp 0x796c00 */
  goto L_796c00;
L_796ba5: /* 796ba5: cmp byte ptr [esi + 0x50], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 796ba9: jne 0x796c09 */
  if (!zf) goto L_796c09;
L_796bab: /* 796bab: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 796bae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 796bb1: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 796bb4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 796bb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796bb6: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 796bb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 796bba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796bbb: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x796bc0u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 796bc0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796bc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796bc5: je 0x796c09 */
  if (zf) goto L_796c09;
L_796bc7: /* 796bc7: mov al, byte ptr [0xb5bc2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bc2cu))) & 0xffu);
/* 796bcc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 796bce: js 0x796bfb */
  if (sf) goto L_796bfb;
L_796bd0: /* 796bd0: or dword ptr [0xb5bc2c], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bc2cu))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bc2cu), r);
  }
/* 796bda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796bdc: push 0xacba04 */
  { uint32_t v = 0xacba04u; esp -= 4; W32(esp, v); }
/* 796be1: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796be6: mov byte ptr [ebp - 4], 0x28 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x28u);
/* 796bea: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796befu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796bef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796bf2: mov dword ptr [0xb5bc0c], eax */
  W32((uint32_t)(0xb5bc0cu), eax);
/* 796bf7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796bfb: /* 796bfb: mov eax, dword ptr [0xb5bc0c] */
  eax = R32((uint32_t)(0xb5bc0cu));
L_796c00: /* 796c00: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796c04: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796c06: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796c09: /* 796c09: test byte ptr [esi + 0x84], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796c10: je 0x796c7b */
  if (zf) goto L_796c7b;
L_796c12: /* 796c12: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 796c15: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 796c18: mov ecx, dword ptr [eax + 0xa4] */
  ecx = R32((uint32_t)(eax + 0xa4u));
/* 796c1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 796c1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796c20: mov edx, dword ptr [esi + 0xa4] */
  edx = R32((uint32_t)(esi + 0xa4u));
/* 796c26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 796c27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796c28: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x796c2du); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 796c2d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796c30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796c32: je 0x796c7b */
  if (zf) goto L_796c7b;
L_796c34: /* 796c34: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 796c39: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796c3c: jne 0x796c6d */
  if (!zf) goto L_796c6d;
L_796c3e: /* 796c3e: mov edx, eax */
  edx = eax;
/* 796c40: or edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796c46: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 796c4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796c4e: push 0xacba10 */
  { uint32_t v = 0xacba10u; esp -= 4; W32(esp, v); }
/* 796c53: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796c58: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 796c5c: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796c61u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796c61: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796c64: mov dword ptr [0xb5bc08], eax */
  W32((uint32_t)(0xb5bc08u), eax);
/* 796c69: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796c6d: /* 796c6d: mov eax, dword ptr [0xb5bc08] */
  eax = R32((uint32_t)(0xb5bc08u));
/* 796c72: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796c76: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796c78: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796c7b: /* 796c7b: mov al, byte ptr [esi + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x51u))) & 0xffu);
/* 796c7e: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 796c80: jne 0x796ea3 */
  if (!zf) goto L_796ea3;
L_796c86: /* 796c86: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 796c89: mov dl, byte ptr [esi + 0x2b0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2b0u))) & 0xffu);
/* 796c8f: cmp dl, byte ptr [eax + 0x2b0] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x2b0u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 796c95: je 0x796cdf */
  if (zf) goto L_796cdf;
L_796c97: /* 796c97: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 796c9c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796c9f: jne 0x796cd0 */
  if (!zf) goto L_796cd0;
L_796ca1: /* 796ca1: mov edx, eax */
  edx = eax;
/* 796ca3: or edx, 0x200 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796ca9: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 796caf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796cb1: push 0xacba28 */
  { uint32_t v = 0xacba28u; esp -= 4; W32(esp, v); }
/* 796cb6: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796cbb: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 796cbf: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796cc4u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796cc4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796cc7: mov dword ptr [0xb5bc04], eax */
  W32((uint32_t)(0xb5bc04u), eax);
/* 796ccc: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796cd0: /* 796cd0: mov ecx, dword ptr [0xb5bc04] */
  ecx = R32((uint32_t)(0xb5bc04u));
/* 796cd6: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 796cda: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 796cdc: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796cdf: /* 796cdf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 796ce2: mov eax, dword ptr [esi + 0x2bc] */
  eax = R32((uint32_t)(esi + 0x2bcu));
/* 796ce8: cmp eax, dword ptr [ecx + 0x2bc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 796cee: je 0x796d38 */
  if (zf) goto L_796d38;
L_796cf0: /* 796cf0: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 796cf5: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796cf8: jne 0x796d29 */
  if (!zf) goto L_796d29;
L_796cfa: /* 796cfa: mov edx, eax */
  edx = eax;
/* 796cfc: or edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796d02: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 796d08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796d0a: push 0xacba40 */
  { uint32_t v = 0xacba40u; esp -= 4; W32(esp, v); }
/* 796d0f: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796d14: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 796d18: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796d1du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796d1d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796d20: mov dword ptr [0xb5bc00], eax */
  W32((uint32_t)(0xb5bc00u), eax);
/* 796d25: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796d29: /* 796d29: mov edx, dword ptr [0xb5bc00] */
  edx = R32((uint32_t)(0xb5bc00u));
/* 796d2f: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 796d33: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 796d35: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796d38: /* 796d38: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 796d3b: mov edx, dword ptr [ecx + 0x84] */
  edx = R32((uint32_t)(ecx + 0x84u));
/* 796d41: xor edx, dword ptr [esi + 0x84] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x84u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 796d47: test dh, 0x20 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796d4a: je 0x796d93 */
  if (zf) goto L_796d93;
L_796d4c: /* 796d4c: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 796d51: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796d54: jne 0x796d85 */
  if (!zf) goto L_796d85;
L_796d56: /* 796d56: mov edx, eax */
  edx = eax;
/* 796d58: or edx, 0x800 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796d5e: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 796d64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796d66: push 0xacba54 */
  { uint32_t v = 0xacba54u; esp -= 4; W32(esp, v); }
/* 796d6b: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796d70: mov byte ptr [ebp - 4], 0x2c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2cu);
/* 796d74: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796d79u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796d79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796d7c: mov dword ptr [0xb5bbfc], eax */
  W32((uint32_t)(0xb5bbfcu), eax);
/* 796d81: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796d85: /* 796d85: mov eax, dword ptr [0xb5bbfc] */
  eax = R32((uint32_t)(0xb5bbfcu));
/* 796d8a: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796d8e: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796d90: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796d93: /* 796d93: test dword ptr [esi + 0x88], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796d9d: jne 0x796e08 */
  if (!zf) goto L_796e08;
L_796d9f: /* 796d9f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 796da2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 796da5: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 796dab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 796dac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796dad: mov edx, dword ptr [esi + 0xd0] */
  edx = R32((uint32_t)(esi + 0xd0u));
/* 796db3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 796db4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796db5: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x796dbau); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 796dba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796dbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796dbf: je 0x796e08 */
  if (zf) goto L_796e08;
L_796dc1: /* 796dc1: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 796dc6: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796dc9: jne 0x796dfa */
  if (!zf) goto L_796dfa;
L_796dcb: /* 796dcb: mov edx, eax */
  edx = eax;
/* 796dcd: or edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796dd3: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 796dd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796ddb: push 0xacba64 */
  { uint32_t v = 0xacba64u; esp -= 4; W32(esp, v); }
/* 796de0: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796de5: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 796de9: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796deeu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796dee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796df1: mov dword ptr [0xb5bbf8], eax */
  W32((uint32_t)(0xb5bbf8u), eax);
/* 796df6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796dfa: /* 796dfa: mov eax, dword ptr [0xb5bbf8] */
  eax = R32((uint32_t)(0xb5bbf8u));
/* 796dff: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796e03: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796e05: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796e08: /* 796e08: mov al, byte ptr [esi + 0x84] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x84u))) & 0xffu);
/* 796e0e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 796e10: jns 0x796f0a */
  if (!sf) goto L_796f0a;
L_796e16: /* 796e16: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 796e19: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 796e1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 796e1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 796e1e: add eax, 0x314 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x314u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 796e23: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 796e25: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 796e28: mov ecx, esp */
  ecx = esp;
/* 796e2a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 796e2c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 796e2f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 796e32: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 796e35: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 796e38: lea ecx, [esi + 0x314] */
  ecx = (uint32_t)(esi + 0x314u);
/* 796e3e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 796e40: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 796e43: mov edx, esp */
  edx = esp;
/* 796e45: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 796e47: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 796e4a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 796e4d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 796e50: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 796e53: call 0x6ca6a0 */
  esp -= 4; W32(esp, 0x796e58u); SPILL(); f_6ca6a0(); if (g_unwind) return; RELOAD();
/* 796e58: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796e5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796e5d: je 0x796f0a */
  if (zf) goto L_796f0a;
L_796e63: /* 796e63: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 796e69: mov eax, 0x2000 */
  eax = 0x2000u;
/* 796e6e: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796e70: jne 0x796e9b */
  if (!zf) goto L_796e9b;
L_796e72: /* 796e72: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 796e74: mov dword ptr [0xb5bc2c], ecx */
  W32((uint32_t)(0xb5bc2cu), ecx);
/* 796e7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796e7c: push 0xacba70 */
  { uint32_t v = 0xacba70u; esp -= 4; W32(esp, v); }
/* 796e81: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796e86: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 796e8a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796e8fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796e8f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796e92: mov dword ptr [0xb5bbf4], eax */
  W32((uint32_t)(0xb5bbf4u), eax);
/* 796e97: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796e9b: /* 796e9b: mov edx, dword ptr [0xb5bbf4] */
  edx = R32((uint32_t)(0xb5bbf4u));
/* 796ea1: jmp 0x796f01 */
  goto L_796f01;
L_796ea3: /* 796ea3: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 796ea5: jne 0x796f0a */
  if (!zf) goto L_796f0a;
L_796ea7: /* 796ea7: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 796eaa: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 796ead: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 796eb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 796eb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 796eb2: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 796eb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 796eb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 796eb7: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x796ebcu); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 796ebc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796ebf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796ec1: je 0x796f0a */
  if (zf) goto L_796f0a;
L_796ec3: /* 796ec3: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 796ec9: mov eax, 0x4000 */
  eax = 0x4000u;
/* 796ece: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796ed0: jne 0x796efb */
  if (!zf) goto L_796efb;
L_796ed2: /* 796ed2: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 796ed4: mov dword ptr [0xb5bc2c], ecx */
  W32((uint32_t)(0xb5bc2cu), ecx);
/* 796eda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796edc: push 0xacba80 */
  { uint32_t v = 0xacba80u; esp -= 4; W32(esp, v); }
/* 796ee1: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796ee6: mov byte ptr [ebp - 4], 0x2f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2fu);
/* 796eea: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796eefu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796eef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796ef2: mov dword ptr [0xb5bbf0], eax */
  W32((uint32_t)(0xb5bbf0u), eax);
/* 796ef7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796efb: /* 796efb: mov edx, dword ptr [0xb5bbf0] */
  edx = R32((uint32_t)(0xb5bbf0u));
L_796f01: /* 796f01: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 796f05: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 796f07: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796f0a: /* 796f0a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 796f0d: mov cl, byte ptr [esi + 0x28] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x28u))) & 0xffu);
/* 796f10: cmp cl, byte ptr [edx + 0x28] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + 0x28u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 796f13: je 0x796f5b */
  if (zf) goto L_796f5b;
L_796f15: /* 796f15: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 796f1b: mov eax, 0x8000 */
  eax = 0x8000u;
/* 796f20: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796f22: jne 0x796f4d */
  if (!zf) goto L_796f4d;
L_796f24: /* 796f24: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 796f26: mov dword ptr [0xb5bc2c], ecx */
  W32((uint32_t)(0xb5bc2cu), ecx);
/* 796f2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796f2e: push 0xacba98 */
  { uint32_t v = 0xacba98u; esp -= 4; W32(esp, v); }
/* 796f33: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796f38: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 796f3c: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796f41u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796f41: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796f44: mov dword ptr [0xb5bbec], eax */
  W32((uint32_t)(0xb5bbecu), eax);
/* 796f49: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796f4d: /* 796f4d: mov eax, dword ptr [0xb5bbec] */
  eax = R32((uint32_t)(0xb5bbecu));
/* 796f52: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796f56: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796f58: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796f5b: /* 796f5b: mov al, byte ptr [esi + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x28u))) & 0xffu);
/* 796f5e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 796f60: je 0x7971f0 */
  if (zf) goto L_7971f0;
L_796f66: /* 796f66: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 796f69: mov dl, byte ptr [esi + 0x29] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x29u))) & 0xffu);
/* 796f6c: cmp dl, byte ptr [ebx + 0x29] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx + 0x29u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 796f6f: je 0x796fb9 */
  if (zf) goto L_796fb9;
L_796f71: /* 796f71: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 796f77: mov eax, 0x10000 */
  eax = 0x10000u;
/* 796f7c: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796f7e: jne 0x796fab */
  if (!zf) goto L_796fab;
L_796f80: /* 796f80: mov edx, ecx */
  edx = ecx;
/* 796f82: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796f84: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 796f8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796f8c: push 0xacbaac */
  { uint32_t v = 0xacbaacu; esp -= 4; W32(esp, v); }
/* 796f91: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796f96: mov byte ptr [ebp - 4], 0x31 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x31u);
/* 796f9a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796f9fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796f9f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796fa2: mov dword ptr [0xb5bbe8], eax */
  W32((uint32_t)(0xb5bbe8u), eax);
/* 796fa7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796fab: /* 796fab: mov eax, dword ptr [0xb5bbe8] */
  eax = R32((uint32_t)(0xb5bbe8u));
/* 796fb0: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 796fb4: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 796fb6: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_796fb9: /* 796fb9: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 796fbc: cmp edx, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 796fbf: je 0x797009 */
  if (zf) goto L_797009;
L_796fc1: /* 796fc1: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 796fc7: mov eax, 0x20000 */
  eax = 0x20000u;
/* 796fcc: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 796fce: jne 0x796ffb */
  if (!zf) goto L_796ffb;
L_796fd0: /* 796fd0: mov edx, ecx */
  edx = ecx;
/* 796fd2: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 796fd4: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 796fda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 796fdc: push 0xacbac4 */
  { uint32_t v = 0xacbac4u; esp -= 4; W32(esp, v); }
/* 796fe1: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 796fe6: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 796fea: call 0x6cad67 */
  esp -= 4; W32(esp, 0x796fefu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 796fef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 796ff2: mov dword ptr [0xb5bbe4], eax */
  W32((uint32_t)(0xb5bbe4u), eax);
/* 796ff7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_796ffb: /* 796ffb: mov eax, dword ptr [0xb5bbe4] */
  eax = R32((uint32_t)(0xb5bbe4u));
/* 797000: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 797004: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 797006: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_797009: /* 797009: mov dl, byte ptr [esi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x34u))) & 0xffu);
/* 79700c: cmp dl, byte ptr [ebx + 0x34] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx + 0x34u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79700f: je 0x797059 */
  if (zf) goto L_797059;
L_797011: /* 797011: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 797017: mov eax, 0x40000 */
  eax = 0x40000u;
/* 79701c: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79701e: jne 0x79704b */
  if (!zf) goto L_79704b;
L_797020: /* 797020: mov edx, ecx */
  edx = ecx;
/* 797022: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 797024: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 79702a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79702c: push 0xacbae4 */
  { uint32_t v = 0xacbae4u; esp -= 4; W32(esp, v); }
/* 797031: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 797036: mov byte ptr [ebp - 4], 0x33 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x33u);
/* 79703a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79703fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79703f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797042: mov dword ptr [0xb5bbe0], eax */
  W32((uint32_t)(0xb5bbe0u), eax);
/* 797047: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79704b: /* 79704b: mov eax, dword ptr [0xb5bbe0] */
  eax = R32((uint32_t)(0xb5bbe0u));
/* 797050: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 797054: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 797056: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_797059: /* 797059: mov dl, byte ptr [esi + 0x35] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x35u))) & 0xffu);
/* 79705c: cmp dl, byte ptr [ebx + 0x35] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx + 0x35u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79705f: je 0x7970a9 */
  if (zf) goto L_7970a9;
L_797061: /* 797061: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 797067: mov eax, 0x80000 */
  eax = 0x80000u;
/* 79706c: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79706e: jne 0x79709b */
  if (!zf) goto L_79709b;
L_797070: /* 797070: mov edx, ecx */
  edx = ecx;
/* 797072: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 797074: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 79707a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79707c: push 0xacbaf8 */
  { uint32_t v = 0xacbaf8u; esp -= 4; W32(esp, v); }
/* 797081: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 797086: mov byte ptr [ebp - 4], 0x34 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x34u);
/* 79708a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79708fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79708f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797092: mov dword ptr [0xb5bbdc], eax */
  W32((uint32_t)(0xb5bbdcu), eax);
/* 797097: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79709b: /* 79709b: mov eax, dword ptr [0xb5bbdc] */
  eax = R32((uint32_t)(0xb5bbdcu));
/* 7970a0: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7970a4: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7970a6: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7970a9: /* 7970a9: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7970ac: cmp edx, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7970af: je 0x7970f9 */
  if (zf) goto L_7970f9;
L_7970b1: /* 7970b1: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 7970b7: mov eax, 0x100000 */
  eax = 0x100000u;
/* 7970bc: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7970be: jne 0x7970eb */
  if (!zf) goto L_7970eb;
L_7970c0: /* 7970c0: mov edx, ecx */
  edx = ecx;
/* 7970c2: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7970c4: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 7970ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7970cc: push 0xacbb18 */
  { uint32_t v = 0xacbb18u; esp -= 4; W32(esp, v); }
/* 7970d1: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7970d6: mov byte ptr [ebp - 4], 0x35 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x35u);
/* 7970da: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7970dfu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7970df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7970e2: mov dword ptr [0xb5bbd8], eax */
  W32((uint32_t)(0xb5bbd8u), eax);
/* 7970e7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7970eb: /* 7970eb: mov eax, dword ptr [0xb5bbd8] */
  eax = R32((uint32_t)(0xb5bbd8u));
/* 7970f0: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7970f4: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7970f6: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7970f9: /* 7970f9: mov dl, byte ptr [esi + 0x36] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x36u))) & 0xffu);
/* 7970fc: cmp dl, byte ptr [ebx + 0x36] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx + 0x36u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7970ff: je 0x797149 */
  if (zf) goto L_797149;
L_797101: /* 797101: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 797107: mov eax, 0x200000 */
  eax = 0x200000u;
/* 79710c: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79710e: jne 0x79713b */
  if (!zf) goto L_79713b;
L_797110: /* 797110: mov edx, ecx */
  edx = ecx;
/* 797112: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 797114: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 79711a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79711c: push 0xacbb30 */
  { uint32_t v = 0xacbb30u; esp -= 4; W32(esp, v); }
/* 797121: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 797126: mov byte ptr [ebp - 4], 0x36 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x36u);
/* 79712a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79712fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79712f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797132: mov dword ptr [0xb5bbd4], eax */
  W32((uint32_t)(0xb5bbd4u), eax);
/* 797137: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79713b: /* 79713b: mov eax, dword ptr [0xb5bbd4] */
  eax = R32((uint32_t)(0xb5bbd4u));
/* 797140: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 797144: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 797146: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_797149: /* 797149: mov dl, byte ptr [esi + 0x37] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x37u))) & 0xffu);
/* 79714c: cmp dl, byte ptr [ebx + 0x37] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx + 0x37u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79714f: je 0x797199 */
  if (zf) goto L_797199;
L_797151: /* 797151: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 797157: mov eax, 0x400000 */
  eax = 0x400000u;
/* 79715c: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79715e: jne 0x79718b */
  if (!zf) goto L_79718b;
L_797160: /* 797160: mov edx, ecx */
  edx = ecx;
/* 797162: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 797164: mov dword ptr [0xb5bc2c], edx */
  W32((uint32_t)(0xb5bc2cu), edx);
/* 79716a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79716c: push 0xacbb48 */
  { uint32_t v = 0xacbb48u; esp -= 4; W32(esp, v); }
/* 797171: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 797176: mov byte ptr [ebp - 4], 0x37 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x37u);
/* 79717a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79717fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79717f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797182: mov dword ptr [0xb5bbd0], eax */
  W32((uint32_t)(0xb5bbd0u), eax);
/* 797187: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79718b: /* 79718b: mov eax, dword ptr [0xb5bbd0] */
  eax = R32((uint32_t)(0xb5bbd0u));
/* 797190: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 797194: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 797196: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_797199: /* 797199: mov edx, dword ptr [esi + 0x80] */
  edx = R32((uint32_t)(esi + 0x80u));
/* 79719f: xor edx, dword ptr [ebx + 0x80] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7971a5: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7971a8: je 0x7971f0 */
  if (zf) goto L_7971f0;
L_7971aa: /* 7971aa: mov ecx, dword ptr [0xb5bc2c] */
  ecx = R32((uint32_t)(0xb5bc2cu));
/* 7971b0: mov eax, 0x800000 */
  eax = 0x800000u;
/* 7971b5: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7971b7: jne 0x7971e2 */
  if (!zf) goto L_7971e2;
L_7971b9: /* 7971b9: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7971bb: mov dword ptr [0xb5bc2c], ecx */
  W32((uint32_t)(0xb5bc2cu), ecx);
/* 7971c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7971c3: push 0xacbb60 */
  { uint32_t v = 0xacbb60u; esp -= 4; W32(esp, v); }
/* 7971c8: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7971cd: mov byte ptr [ebp - 4], 0x38 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x38u);
/* 7971d1: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7971d6u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7971d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7971d9: mov dword ptr [0xb5bbcc], eax */
  W32((uint32_t)(0xb5bbccu), eax);
/* 7971de: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7971e2: /* 7971e2: mov eax, dword ptr [0xb5bbcc] */
  eax = R32((uint32_t)(0xb5bbccu));
/* 7971e7: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7971eb: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7971ed: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7971f0: /* 7971f0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7971f3: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 7971f9: xor eax, dword ptr [esi + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7971ff: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 797201: jns 0x797251 */
  if (!sf) goto L_797251;
L_797203: /* 797203: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 797208: test eax, 0x1000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79720d: jne 0x797242 */
  if (!zf) goto L_797242;
L_79720f: /* 79720f: or eax, 0x1000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 797214: mov dword ptr [0xb5bc2c], eax */
  W32((uint32_t)(0xb5bc2cu), eax);
/* 797219: mov byte ptr [ebp - 4], 0x39 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x39u);
/* 79721d: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x797223u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 797223: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 797225: push 0xacbb78 */
  { uint32_t v = 0xacbb78u; esp -= 4; W32(esp, v); }
/* 79722a: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79722f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797230: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x797236u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 797236: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797239: mov dword ptr [0xb5bbc8], eax */
  W32((uint32_t)(0xb5bbc8u), eax);
/* 79723e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_797242: /* 797242: mov ecx, dword ptr [0xb5bbc8] */
  ecx = R32((uint32_t)(0xb5bbc8u));
/* 797248: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79724c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 79724e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_797251: /* 797251: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 797254: mov al, byte ptr [esi + 0x91] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x91u))) & 0xffu);
/* 79725a: cmp al, byte ptr [ecx + 0x91] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x91u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 797260: je 0x7972b0 */
  if (zf) goto L_7972b0;
L_797262: /* 797262: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 797267: test eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79726c: jne 0x7972a1 */
  if (!zf) goto L_7972a1;
L_79726e: /* 79726e: or eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 797273: mov dword ptr [0xb5bc2c], eax */
  W32((uint32_t)(0xb5bc2cu), eax);
/* 797278: mov byte ptr [ebp - 4], 0x3a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3au);
/* 79727c: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x797282u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 797282: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 797284: push 0xacbb88 */
  { uint32_t v = 0xacbb88u; esp -= 4; W32(esp, v); }
/* 797289: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79728e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79728f: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x797295u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 797295: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797298: mov dword ptr [0xb5bbc4], eax */
  W32((uint32_t)(0xb5bbc4u), eax);
/* 79729d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7972a1: /* 7972a1: mov edx, dword ptr [0xb5bbc4] */
  edx = R32((uint32_t)(0xb5bbc4u));
/* 7972a7: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 7972ab: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7972ad: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7972b0: /* 7972b0: test dword ptr [esi + 0x88], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7972ba: je 0x7972c5 */
  if (zf) goto L_7972c5;
L_7972bc: /* 7972bc: test byte ptr [esi + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7972c3: jne 0x79731f */
  if (!zf) goto L_79731f;
L_7972c5: /* 7972c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7972c8: mov cl, byte ptr [esi + 0x90] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x90u))) & 0xffu);
/* 7972ce: cmp cl, byte ptr [edx + 0x90] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + 0x90u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7972d4: je 0x79731f */
  if (zf) goto L_79731f;
L_7972d6: /* 7972d6: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 7972db: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7972e0: jne 0x797311 */
  if (!zf) goto L_797311;
L_7972e2: /* 7972e2: mov ecx, eax */
  ecx = eax;
/* 7972e4: or ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7972ea: mov dword ptr [0xb5bc2c], ecx */
  W32((uint32_t)(0xb5bc2cu), ecx);
/* 7972f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7972f2: push 0xacbb94 */
  { uint32_t v = 0xacbb94u; esp -= 4; W32(esp, v); }
/* 7972f7: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7972fc: mov byte ptr [ebp - 4], 0x3b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3bu);
/* 797300: call 0x6cad67 */
  esp -= 4; W32(esp, 0x797305u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 797305: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797308: mov dword ptr [0xb5bbc0], eax */
  W32((uint32_t)(0xb5bbc0u), eax);
/* 79730d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_797311: /* 797311: mov eax, dword ptr [0xb5bbc0] */
  eax = R32((uint32_t)(0xb5bbc0u));
/* 797316: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79731a: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 79731c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79731f: /* 79731f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 797322: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* 797328: xor eax, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 79732e: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797333: je 0x797383 */
  if (zf) goto L_797383;
L_797335: /* 797335: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 79733a: test eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79733f: jne 0x797374 */
  if (!zf) goto L_797374;
L_797341: /* 797341: or eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 797346: mov dword ptr [0xb5bc2c], eax */
  W32((uint32_t)(0xb5bc2cu), eax);
/* 79734b: mov byte ptr [ebp - 4], 0x3c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3cu);
/* 79734f: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x797355u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 797355: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 797357: push 0xacbbac */
  { uint32_t v = 0xacbbacu; esp -= 4; W32(esp, v); }
/* 79735c: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 797361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797362: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x797368u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 797368: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79736b: mov dword ptr [0xb5bbbc], eax */
  W32((uint32_t)(0xb5bbbcu), eax);
/* 797370: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_797374: /* 797374: mov ecx, dword ptr [0xb5bbbc] */
  ecx = R32((uint32_t)(0xb5bbbcu));
/* 79737a: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79737e: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 797380: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_797383: /* 797383: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 797386: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 79738c: xor eax, dword ptr [ecx + 0x84] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x84u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 797392: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797394: je 0x7973e4 */
  if (zf) goto L_7973e4;
L_797396: /* 797396: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 79739b: test eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7973a0: jne 0x7973d5 */
  if (!zf) goto L_7973d5;
L_7973a2: /* 7973a2: or eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7973a7: mov dword ptr [0xb5bc2c], eax */
  W32((uint32_t)(0xb5bc2cu), eax);
/* 7973ac: mov byte ptr [ebp - 4], 0x3d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3du);
/* 7973b0: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x7973b6u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7973b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7973b8: push 0xacbbc0 */
  { uint32_t v = 0xacbbc0u; esp -= 4; W32(esp, v); }
/* 7973bd: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7973c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7973c3: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7973c9u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7973c9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7973cc: mov dword ptr [0xb5bbb8], eax */
  W32((uint32_t)(0xb5bbb8u), eax);
/* 7973d1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7973d5: /* 7973d5: mov edx, dword ptr [0xb5bbb8] */
  edx = R32((uint32_t)(0xb5bbb8u));
/* 7973db: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 7973df: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7973e1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7973e4: /* 7973e4: mov ecx, dword ptr [esi + 0x84] */
  ecx = R32((uint32_t)(esi + 0x84u));
/* 7973ea: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7973ed: xor ecx, dword ptr [edx + 0x84] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x84u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7973f3: test ch, 0x10 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7973f6: je 0x797476 */
  if (zf) goto L_797476;
L_7973f8: /* 7973f8: mov eax, dword ptr [0xb5bc2c] */
  eax = R32((uint32_t)(0xb5bc2cu));
/* 7973fd: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797402: jne 0x797433 */
  if (!zf) goto L_797433;
L_797404: /* 797404: or eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 797409: mov dword ptr [0xb5bc2c], eax */
  W32((uint32_t)(0xb5bc2cu), eax);
/* 79740e: mov byte ptr [ebp - 4], 0x3e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3eu);
/* 797412: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x797418u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 797418: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79741a: push 0xacbbd4 */
  { uint32_t v = 0xacbbd4u; esp -= 4; W32(esp, v); }
/* 79741f: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 797424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797425: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x79742bu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 79742b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79742e: mov dword ptr [0xb5bbb4], eax */
  W32((uint32_t)(0xb5bbb4u), eax);
L_797433: /* 797433: mov eax, dword ptr [0xb5bbb4] */
  eax = R32((uint32_t)(0xb5bbb4u));
/* 797438: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79743c: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 79743e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 797441: jmp 0x797476 */
  goto L_797476;
L_797473: /* 797473: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_797476: /* 797476: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 797479: mov eax, edi */
  eax = edi;
/* 79747b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79747c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79747d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 797484: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 797485: mov esp, ebp */
  esp = ebp;
/* 797487: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 797488: ret 0x14 */
  esp += 24; SPILL(); return;
}
