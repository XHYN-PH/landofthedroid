#include "recomp.h"
#include "rec_mod.h"

void f_da6158(void) {
  LOAD_REGS();
L_da6158: /* da6158: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* da615b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da6160: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* da6163: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da6164: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* da6167: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda616cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da616c(); return;
}

void f_da616c(void) {
  LOAD_REGS();
L_da616c: /* da616c: push 0xdc3dc4 */
  { uint32_t v = 0xdc3dc4u; esp -= 4; W32(esp, v); }
/* da6171: push 0xde3b88 */
  { uint32_t v = 0xde3b88u; esp -= 4; W32(esp, v); }
/* da6176: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda617cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da617c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da617f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6181: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6183: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6188u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da6188: guest_badaddr(0xda6188); return;
}

void f_da61d0(void) {
  LOAD_REGS();
L_da61d0: /* da61d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da61d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da61d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da61d5: mov esi, ecx */
  esi = ecx;
/* da61d7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da61da: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* da61de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da61df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da61e0: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda61e6u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da61e6: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* da61ea: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* da61ed: fmul dword ptr [0xdc3ae4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae4u)));
/* da61f3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* da61f5: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xda61fau); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* da61fa: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* da61fd: fadd dword ptr [esi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x48u)));
/* da6200: mov edi, eax */
  edi = eax;
/* da6202: fmul dword ptr [0xdc3ae4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae4u)));
/* da6208: fmul st(1) */
  ST0 = ST0 * STI(1);
/* da620a: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xda620fu); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* da620f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* da6211: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da6215: mov ecx, eax */
  ecx = eax;
/* da6217: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* da621b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* da621d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* da6221: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* da6224: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da6225: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* da6228: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* da622b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da622c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da622f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da6260(void) {
  LOAD_REGS();
L_da6260: /* da6260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da6261: mov ebp, esp */
  ebp = esp;
/* da6263: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da6265: push 0xdba460 */
  { uint32_t v = 0xdba460u; esp -= 4; W32(esp, v); }
/* da626a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da6270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6271: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da6278: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da627b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da627c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da627d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da627e: mov esi, ecx */
  esi = ecx;
/* da6280: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da6283: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da6286: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* da6289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da628a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da628b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da6292: call dword ptr [0xde8ef8] */
  esp -= 4; W32(esp, 0xda6298u); SPILL(); call_ind(R32(0xde8ef8u)); if (g_unwind) return; /* USER32!BeginPaint */ RELOAD();
/* da6298: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* da629b: mov edi, eax */
  edi = eax;
/* da629d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da62a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da62a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da62a2: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda62a8u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da62a8: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da62ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da62ac: call dword ptr [0xde8f68] */
  esp -= 4; W32(esp, 0xda62b2u); SPILL(); call_ind(R32(0xde8f68u)); if (g_unwind) return; /* USER32!IsWindowEnabled */ RELOAD();
/* da62b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da62b4: mov eax, dword ptr [0xde50e4] */
  eax = R32((uint32_t)(0xde50e4u));
/* da62b9: jne 0xda62c0 */
  if (!zf) goto L_da62c0;
L_da62bb: /* da62bb: mov eax, dword ptr [0xde5158] */
  eax = R32((uint32_t)(0xde5158u));
L_da62c0: /* da62c0: mov ebx, dword ptr [0xde8f6c] */
  ebx = R32((uint32_t)(0xde8f6cu));
/* da62c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da62c7: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* da62ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da62cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da62cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda62ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da62ce: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da62d0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da62d2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* da62d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da62d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da62d7: mov ecx, esi */
  ecx = esi;
/* da62d9: call dword ptr [eax + 0xe4] */
  { uint32_t t = R32((uint32_t)(eax + 0xe4u)); esp -= 4; W32(esp, 0xda62dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da62df: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da62e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da62e3: call dword ptr [0xde8f68] */
  esp -= 4; W32(esp, 0xda62e9u); SPILL(); call_ind(R32(0xde8f68u)); if (g_unwind) return; /* USER32!IsWindowEnabled */ RELOAD();
/* da62e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da62eb: je 0xda6303 */
  if (zf) goto L_da6303;
L_da62ed: /* da62ed: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* da62f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da62f1: mov ecx, esi */
  ecx = esi;
/* da62f3: call 0xd81f78 */
  esp -= 4; W32(esp, 0xda62f8u); SPILL(); f_d81f78(); if (g_unwind) return; RELOAD();
/* da62f8: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* da62fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da62fc: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* da62ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6301: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda6303u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da6303: /* da6303: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da6306: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* da6309: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da630a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da630b: call dword ptr [0xde8f04] */
  esp -= 4; W32(esp, 0xda6311u); SPILL(); call_ind(R32(0xde8f04u)); if (g_unwind) return; /* USER32!EndPaint */ RELOAD();
/* da6311: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da6314: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da6315: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da6316: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da631d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da631e: mov esp, ebp */
  esp = ebp;
/* da6320: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da6321: ret  */
  esp += 4; SPILL(); return;
}

void f_da6322(void) {
  LOAD_REGS();
L_da6322: /* da6322: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da6325: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da632a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* da632d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da632e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* da6331: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6336u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da6336(); return;
}

void f_da6336(void) {
  LOAD_REGS();
L_da6336: /* da6336: push 0xdc3e08 */
  { uint32_t v = 0xdc3e08u; esp -= 4; W32(esp, v); }
/* da633b: push 0xde3bb0 */
  { uint32_t v = 0xde3bb0u; esp -= 4; W32(esp, v); }
/* da6340: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda6346u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da6346: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6349: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da634b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da634d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6352u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da6352: guest_badaddr(0xda6352); return;
}

void f_da63a0(void) {
  LOAD_REGS();
L_da63a0: /* da63a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da63a1: mov ebp, esp */
  ebp = esp;
/* da63a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da63a5: push 0xdba470 */
  { uint32_t v = 0xdba470u; esp -= 4; W32(esp, v); }
/* da63aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da63b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da63b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da63b8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da63bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da63bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da63bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da63be: mov esi, ecx */
  esi = ecx;
/* da63c0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* da63c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da63c6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da63cd: call dword ptr [0xde8e80] */
  esp -= 4; W32(esp, 0xda63d3u); SPILL(); call_ind(R32(0xde8e80u)); if (g_unwind) return; /* USER32!GetCapture */ RELOAD();
/* da63d3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da63d5: jne 0xda644b */
  if (!zf) goto L_da644b;
L_da63d7: /* da63d7: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* da63da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da63db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da63dc: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda63e2u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da63e2: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* da63e5: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* da63e8: mov ecx, edi */
  ecx = edi;
/* da63ea: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* da63ec: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da63ef: je 0xda6442 */
  if (zf) goto L_da6442;
L_da63f1: /* da63f1: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* da63f4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* da63f7: sub edx, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* da63fa: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* da63fd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* da6400: fidiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* da6403: fmul dword ptr [0xdc3ae8] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae8u)));
/* da6409: fadd dword ptr [esi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x48u)));
/* da640c: fst dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0);
/* da640f: fcomp dword ptr [0xdc1460] */
  fpu_com(ST0, F32((uint32_t)(0xdc1460u)));
  FPOP();
/* da6415: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* da6417: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* da641a: jp 0xda6423 */
  if (pf) goto L_da6423;
L_da641c: /* da641c: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
L_da6423: /* da6423: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* da6426: fcomp dword ptr [0xdc3ae8] */
  fpu_com(ST0, F32((uint32_t)(0xdc3ae8u)));
  FPOP();
/* da642c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* da642e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da6431: jne 0xda643a */
  if (!zf) goto L_da643a;
L_da6433: /* da6433: mov dword ptr [esi + 0x48], 0x42c80000 */
  W32((uint32_t)(esi + 0x48u), 0x42c80000u);
L_da643a: /* da643a: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* da643d: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* da6440: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xda6442u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da6442: /* da6442: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* da6445: mov dword ptr [esi + 0x64], edi */
  W32((uint32_t)(esi + 0x64u), edi);
/* da6448: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
L_da644b: /* da644b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da644e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6450: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6452: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da6453: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda6459u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da6459: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da645c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da645d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da645e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da6465: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da6466: mov esp, ebp */
  esp = ebp;
/* da6468: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da6469: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da646c(void) {
  LOAD_REGS();
L_da646c: /* da646c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* da646f: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da6474: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* da6477: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6478: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* da647b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6480u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da6480(); return;
}

void f_da6480(void) {
  LOAD_REGS();
L_da6480: /* da6480: push 0xdc3e44 */
  { uint32_t v = 0xdc3e44u; esp -= 4; W32(esp, v); }
/* da6485: push 0xde3bf8 */
  { uint32_t v = 0xde3bf8u; esp -= 4; W32(esp, v); }
/* da648a: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda6490u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da6490: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6493: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6495: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6497: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda649cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da649c: guest_badaddr(0xda649c); return;
}

void f_da64e0(void) {
  LOAD_REGS();
L_da64e0: /* da64e0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da64e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da64e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da64e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da64e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da64e7: mov esi, ecx */
  esi = ecx;
/* da64e9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da64ec: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* da64f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da64f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da64f2: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda64f8u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da64f8: mov edi, dword ptr [esi + 0x70] */
  edi = R32((uint32_t)(esi + 0x70u));
/* da64fb: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* da64ff: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* da6503: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* da6507: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* da6509: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* da650c: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* da6510: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* da6514: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* da6517: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* da651a: sub ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* da651d: fmul dword ptr [0xdc3ae4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae4u)));
/* da6523: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* da6525: fadd dword ptr [0xdc1444] */
  ST0 = ST0 + (F32((uint32_t)(0xdc1444u)));
/* da652b: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xda6530u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* da6530: mov ecx, eax */
  ecx = eax;
/* da6532: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* da6536: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* da6539: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da653a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* da653d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* da653f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da6540: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* da6543: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da6544: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* da6547: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da6548: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da654b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da6570(void) {
  LOAD_REGS();
L_da6570: /* da6570: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da6571: mov ebp, esp */
  ebp = esp;
/* da6573: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da6575: push 0xdba480 */
  { uint32_t v = 0xdba480u; esp -= 4; W32(esp, v); }
/* da657a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da6580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6581: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da6588: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da658b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da658c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da658d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da658e: mov esi, ecx */
  esi = ecx;
/* da6590: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da6593: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da6596: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* da659c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da659d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da659e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da65a5: call dword ptr [0xde8ef8] */
  esp -= 4; W32(esp, 0xda65abu); SPILL(); call_ind(R32(0xde8ef8u)); if (g_unwind) return; /* USER32!BeginPaint */ RELOAD();
/* da65ab: mov ebx, eax */
  ebx = eax;
/* da65ad: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da65b0: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* da65b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da65b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da65b5: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* da65b8: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda65beu); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da65be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da65bf: call dword ptr [0xde8c78] */
  esp -= 4; W32(esp, 0xda65c5u); SPILL(); call_ind(R32(0xde8c78u)); if (g_unwind) return; /* GDI32!CreateCompatibleDC */ RELOAD();
/* da65c5: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* da65c8: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* da65cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da65cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da65cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da65ce: mov edi, eax */
  edi = eax;
/* da65d0: call dword ptr [0xde8cac] */
  esp -= 4; W32(esp, 0xda65d6u); SPILL(); call_ind(R32(0xde8cacu)); if (g_unwind) return; /* GDI32!CreateCompatibleBitmap */ RELOAD();
/* da65d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da65d7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da65da: call dword ptr [0xde8c78] */
  esp -= 4; W32(esp, 0xda65e0u); SPILL(); call_ind(R32(0xde8c78u)); if (g_unwind) return; /* GDI32!CreateCompatibleDC */ RELOAD();
/* da65e0: mov ebx, eax */
  ebx = eax;
/* da65e2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* da65e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da65e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da65e7: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda65edu); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da65ed: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* da65f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da65f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da65f2: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda65f8u); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da65f8: mov edx, dword ptr [esi + 0xa4] */
  edx = R32((uint32_t)(esi + 0xa4u));
/* da65fe: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* da6601: push 0xcc0020 */
  { uint32_t v = 0xcc0020u; esp -= 4; W32(esp, v); }
/* da6606: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6607: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* da660a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* da660d: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* da6613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6614: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6616: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6618: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6619: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da661a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da661b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da661d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da661f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da6620: call dword ptr [0xde8ca8] */
  esp -= 4; W32(esp, 0xda6626u); SPILL(); call_ind(R32(0xde8ca8u)); if (g_unwind) return; /* GDI32!StretchBlt */ RELOAD();
/* da6626: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* da6629: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da662a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da662b: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda6631u); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da6631: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* da6637: mov edx, dword ptr [esi + 0x88] */
  edx = R32((uint32_t)(esi + 0x88u));
/* da663d: push 0xcc0020 */
  { uint32_t v = 0xcc0020u; esp -= 4; W32(esp, v); }
/* da6642: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6644: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6646: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6647: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da6648: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6649: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da664b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da664d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da664e: call dword ptr [0xde8c6c] */
  esp -= 4; W32(esp, 0xda6654u); SPILL(); call_ind(R32(0xde8c6cu)); if (g_unwind) return; /* GDI32!BitBlt */ RELOAD();
/* da6654: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* da6657: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6658: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6659: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda665fu); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da665f: mov ecx, dword ptr [esi + 0xbc] */
  ecx = R32((uint32_t)(esi + 0xbcu));
/* da6665: push 0xcc0020 */
  { uint32_t v = 0xcc0020u; esp -= 4; W32(esp, v); }
/* da666a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da666c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da666e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da666f: mov edx, dword ptr [esi + 0xb8] */
  edx = R32((uint32_t)(esi + 0xb8u));
/* da6675: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* da6678: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da6679: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da667a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da667c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* da667d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da667e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da667f: call dword ptr [0xde8c6c] */
  esp -= 4; W32(esp, 0xda6685u); SPILL(); call_ind(R32(0xde8c6cu)); if (g_unwind) return; /* GDI32!BitBlt */ RELOAD();
/* da6685: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* da6688: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da6689: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da668a: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda6690u); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da6690: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* da6693: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6694: mov ecx, esi */
  ecx = esi;
/* da6696: call 0xd82694 */
  esp -= 4; W32(esp, 0xda669bu); SPILL(); f_d82694(); if (g_unwind) return; RELOAD();
/* da669b: mov eax, dword ptr [esi + 0x74] */
  eax = R32((uint32_t)(esi + 0x74u));
/* da669e: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* da66a1: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* da66a4: push 0xcc0020 */
  { uint32_t v = 0xcc0020u; esp -= 4; W32(esp, v); }
/* da66a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da66ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da66ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da66ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da66af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da66b0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* da66b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da66b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da66b4: call dword ptr [0xde8c6c] */
  esp -= 4; W32(esp, 0xda66bau); SPILL(); call_ind(R32(0xde8c6cu)); if (g_unwind) return; /* GDI32!BitBlt */ RELOAD();
/* da66ba: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* da66bd: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* da66c0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da66c3: push 0xcc0020 */
  { uint32_t v = 0xcc0020u; esp -= 4; W32(esp, v); }
/* da66c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da66ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da66cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da66cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da66ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da66cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da66d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da66d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da66d4: call dword ptr [0xde8c6c] */
  esp -= 4; W32(esp, 0xda66dau); SPILL(); call_ind(R32(0xde8c6cu)); if (g_unwind) return; /* GDI32!BitBlt */ RELOAD();
/* da66da: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* da66dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da66de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da66df: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda66e5u); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da66e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* da66e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da66e9: call dword ptr [0xde8c5c] */
  esp -= 4; W32(esp, 0xda66efu); SPILL(); call_ind(R32(0xde8c5cu)); if (g_unwind) return; /* GDI32!DeleteObject */ RELOAD();
/* da66ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da66f0: mov edi, dword ptr [0xde8cb0] */
  edi = R32((uint32_t)(0xde8cb0u));
/* da66f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda66f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da66f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da66f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda66fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da66fb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da66fe: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* da6704: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6706: call dword ptr [0xde8f04] */
  esp -= 4; W32(esp, 0xda670cu); SPILL(); call_ind(R32(0xde8f04u)); if (g_unwind) return; /* USER32!EndPaint */ RELOAD();
/* da670c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da670f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da6710: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da6711: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da6718: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da6719: mov esp, ebp */
  esp = ebp;
/* da671b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da671c: ret  */
  esp += 4; SPILL(); return;
}

void f_da671d(void) {
  LOAD_REGS();
L_da671d: /* da671d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* da6720: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da6725: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* da6728: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6729: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* da672c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6731u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da6731(); return;
}

void f_da6731(void) {
  LOAD_REGS();
L_da6731: /* da6731: push 0xdc3e88 */
  { uint32_t v = 0xdc3e88u; esp -= 4; W32(esp, v); }
/* da6736: push 0xde3c20 */
  { uint32_t v = 0xde3c20u; esp -= 4; W32(esp, v); }
/* da673b: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda6741u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da6741: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6744: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6746: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6748: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda674du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da674d: guest_badaddr(0xda674d); return;
}

void f_da67d0(void) {
  LOAD_REGS();
L_da67d0: /* da67d0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* da67d4: fcom dword ptr [0xdc1460] */
  fpu_com(ST0, F32((uint32_t)(0xdc1460u)));
/* da67da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* da67dc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da67df: je 0xda67fd */
  if (zf) goto L_da67fd;
L_da67e1: /* da67e1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da67e4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* da67e6: fld dword ptr [0xdc1460] */
  { double v = F32((uint32_t)(0xdc1460u)); FPUSH(v); }
/* da67ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da67ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da67f0: fstp dword ptr [ecx + 0x48] */
  WF32((uint32_t)(ecx + 0x48u), ST0); FPOP();
/* da67f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da67f4: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda67fau); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da67fa: ret 4 */
  esp += 8; SPILL(); return;
L_da67fd: /* da67fd: fcom dword ptr [0xdc3ae8] */
  fpu_com(ST0, F32((uint32_t)(0xdc3ae8u)));
/* da6803: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* da6805: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* da6808: jnp 0xda6812 */
  if (!pf) goto L_da6812;
L_da680a: /* da680a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* da680c: fld dword ptr [0xdc3ae8] */
  { double v = F32((uint32_t)(0xdc3ae8u)); FPUSH(v); }
L_da6812: /* da6812: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da6815: fstp dword ptr [ecx + 0x48] */
  WF32((uint32_t)(ecx + 0x48u), ST0); FPOP();
/* da6818: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da681a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da681c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da681d: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda6823u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da6823: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da6850(void) {
  LOAD_REGS();
L_da6850: /* da6850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da6851: mov ebp, esp */
  ebp = esp;
/* da6853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da6855: push 0xdba490 */
  { uint32_t v = 0xdba490u; esp -= 4; W32(esp, v); }
/* da685a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da6860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da6868: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da686b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da686c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da686d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da686e: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* da6871: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da6874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6875: mov esi, ecx */
  esi = ecx;
/* da6877: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da687e: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xda6884u); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* da6884: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* da6887: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* da688a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* da688d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* da6890: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da6893: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6894: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da6895: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* da6898: call dword ptr [0xde8f20] */
  esp -= 4; W32(esp, 0xda689eu); SPILL(); call_ind(R32(0xde8f20u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* da689e: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* da68a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da68a2: mov ecx, esi */
  ecx = esi;
/* da68a4: call 0xd82694 */
  esp -= 4; W32(esp, 0xda68a9u); SPILL(); f_d82694(); if (g_unwind) return; RELOAD();
/* da68a9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* da68ac: cmp eax, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da68af: jl 0xda68ea */
  if ((sf != of)) goto L_da68ea;
L_da68b1: /* da68b1: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da68b4: jge 0xda68ea */
  if ((sf == of)) goto L_da68ea;
L_da68b6: /* da68b6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* da68b9: cmp eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da68bc: jl 0xda68ea */
  if ((sf != of)) goto L_da68ea;
L_da68be: /* da68be: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da68c1: jge 0xda68ea */
  if ((sf == of)) goto L_da68ea;
L_da68c3: /* da68c3: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da68c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da68ca: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* da68cd: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* da68d0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da68d2: movzx ecx, word ptr [esi + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* da68d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da68d7: push 0x802d */
  { uint32_t v = 0x802du; esp -= 4; W32(esp, v); }
/* da68dc: push 0x111 */
  { uint32_t v = 0x111u; esp -= 4; W32(esp, v); }
/* da68e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da68e2: je 0xda68fb */
  if (zf) goto L_da68fb;
L_da68e4: /* da68e4: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda68eau); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
L_da68ea: /* da68ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da68ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da68f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da68f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da68f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da68f7: mov esp, ebp */
  esp = ebp;
/* da68f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da68fa: ret  */
  esp += 4; SPILL(); return;
L_da68fb: /* da68fb: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda6901u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da6901: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da6904: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da6905: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da6906: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da690d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da690e: mov esp, ebp */
  esp = ebp;
/* da6910: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da6911: ret  */
  esp += 4; SPILL(); return;
}

void f_da6912(void) {
  LOAD_REGS();
L_da6912: /* da6912: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da6915: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da691a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* da691d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da691e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da6921: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6926u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da6926(); return;
}

void f_da6926(void) {
  LOAD_REGS();
L_da6926: /* da6926: push 0xdc3ec4 */
  { uint32_t v = 0xdc3ec4u; esp -= 4; W32(esp, v); }
/* da692b: push 0xde3c58 */
  { uint32_t v = 0xde3c58u; esp -= 4; W32(esp, v); }
/* da6930: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda6936u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da6936: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6939: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da693b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da693d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6942u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da6942: guest_badaddr(0xda6942); return;
}

void f_da6990(void) {
  LOAD_REGS();
L_da6990: /* da6990: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da6993: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* da6997: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6998: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xda699eu); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* da699e: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da69a2: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* da69a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da69a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da69a8: call dword ptr [0xde8e40] */
  esp -= 4; W32(esp, 0xda69aeu); SPILL(); call_ind(R32(0xde8e40u)); if (g_unwind) return; /* USER32!WindowFromPoint */ RELOAD();
/* da69ae: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* da69b4: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da69b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da69b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da69bb: push 0x8034 */
  { uint32_t v = 0x8034u; esp -= 4; W32(esp, v); }
/* da69c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da69c1: je 0xda69cb */
  if (zf) goto L_da69cb;
L_da69c3: /* da69c3: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda69c9u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da69c9: jmp 0xda69d1 */
  goto L_da69d1;
L_da69cb: /* da69cb: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda69d1u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_da69d1: /* da69d1: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* da69d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da69d9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* da69db: je 0xda69ff */
  if (zf) goto L_da69ff;
L_da69dd: /* da69dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da69df: push 0x5a6 */
  { uint32_t v = 0x5a6u; esp -= 4; W32(esp, v); }
/* da69e4: je 0xda6a21 */
  if (zf) goto L_da6a21;
L_da69e6: /* da69e6: mov eax, dword ptr [0xde5034] */
  eax = R32((uint32_t)(0xde5034u));
/* da69eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da69ec: call dword ptr [0xde8df0] */
  esp -= 4; W32(esp, 0xda69f2u); SPILL(); call_ind(R32(0xde8df0u)); if (g_unwind) return; /* USER32!LoadCursorW */ RELOAD();
/* da69f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da69f3: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda69f9u); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da69f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da69fc: ret 0xc */
  esp += 16; SPILL(); return;
L_da69ff: /* da69ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da6a01: push 0x5a5 */
  { uint32_t v = 0x5a5u; esp -= 4; W32(esp, v); }
/* da6a06: je 0xda6a21 */
  if (zf) goto L_da6a21;
L_da6a08: /* da6a08: mov eax, dword ptr [0xde5034] */
  eax = R32((uint32_t)(0xde5034u));
/* da6a0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6a0e: call dword ptr [0xde8df0] */
  esp -= 4; W32(esp, 0xda6a14u); SPILL(); call_ind(R32(0xde8df0u)); if (g_unwind) return; /* USER32!LoadCursorW */ RELOAD();
/* da6a14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6a15: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda6a1bu); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da6a1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6a1e: ret 0xc */
  esp += 16; SPILL(); return;
L_da6a21: /* da6a21: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* da6a27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da6a28: call dword ptr [0xde8dec] */
  esp -= 4; W32(esp, 0xda6a2eu); SPILL(); call_ind(R32(0xde8decu)); if (g_unwind) return; /* USER32!LoadCursorA */ RELOAD();
/* da6a2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6a2f: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda6a35u); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da6a35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6a38: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da6a70(void) {
  LOAD_REGS();
L_da6a70: /* da6a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6a71: mov esi, ecx */
  esi = ecx;
/* da6a73: call 0xd8208b */
  esp -= 4; W32(esp, 0xda6a78u); SPILL(); f_d8208b(); if (g_unwind) return; RELOAD();
/* da6a78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da6a7d: je 0xda6a8c */
  if (zf) goto L_da6a8c;
L_da6a7f: /* da6a7f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* da6a84: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da6a86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da6a88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6a89: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda6a8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da6a8c: /* da6a8c: mov eax, esi */
  eax = esi;
/* da6a8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da6a8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da6ab0(void) {
  LOAD_REGS();
L_da6ab0: /* da6ab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da6ab1: mov ebp, esp */
  ebp = esp;
/* da6ab3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da6ab5: push 0xdba4a0 */
  { uint32_t v = 0xdba4a0u; esp -= 4; W32(esp, v); }
/* da6aba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da6ac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6ac1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da6ac8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da6acb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da6acc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6acd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6ace: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da6ad1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6ad3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6ad5: mov edi, ecx */
  edi = ecx;
/* da6ad7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da6ad9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da6adb: lea esi, [edi + 0x40] */
  esi = (uint32_t)(edi + 0x40u);
/* da6ade: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da6ae0: mov ecx, esi */
  ecx = esi;
/* da6ae2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da6ae9: call 0xd8263f */
  esp -= 4; W32(esp, 0xda6aeeu); SPILL(); f_d8263f(); if (g_unwind) return; RELOAD();
/* da6aee: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* da6af0: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xda6af6u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* da6af6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6af7: mov ecx, esi */
  ecx = esi;
/* da6af9: call 0xd81ce4 */
  esp -= 4; W32(esp, 0xda6afeu); SPILL(); f_d81ce4(); if (g_unwind) return; RELOAD();
/* da6afe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da6b00: add edi, 0xc4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da6b06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6b07: mov ecx, esi */
  ecx = esi;
/* da6b09: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0xda6b0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da6b0c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da6b0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da6b10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da6b11: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da6b18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da6b19: mov esp, ebp */
  esp = ebp;
/* da6b1b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da6b1c: ret  */
  esp += 4; SPILL(); return;
}

void f_da6b1d(void) {
  LOAD_REGS();
L_da6b1d: /* da6b1d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da6b20: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da6b25: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* da6b28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6b29: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da6b2c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6b31u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da6b31(); return;
}

void f_da6b31(void) {
  LOAD_REGS();
L_da6b31: /* da6b31: push 0xdc3f0c */
  { uint32_t v = 0xdc3f0cu; esp -= 4; W32(esp, v); }
/* da6b36: push 0xde3e18 */
  { uint32_t v = 0xde3e18u; esp -= 4; W32(esp, v); }
/* da6b3b: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda6b41u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da6b41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6b44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6b46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6b48: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6b4du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da6b4d: guest_badaddr(0xda6b4d); return;
}

void f_da6b80(void) {
  LOAD_REGS();
L_da6b80: /* da6b80: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* da6b83: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* da6b87: jmp dword ptr [0xde8ed8] */
  SPILL(); call_ind(R32(0xde8ed8u)); return; /* USER32!SetFocus */
}

void f_da6ba0(void) {
  LOAD_REGS();
L_da6ba0: /* da6ba0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da6ba1: mov ebp, esp */
  ebp = esp;
/* da6ba3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da6ba5: push 0xdba4b0 */
  { uint32_t v = 0xdba4b0u; esp -= 4; W32(esp, v); }
/* da6baa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da6bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6bb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da6bb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da6bbb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* da6bbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da6bbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6bc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6bc1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da6bc4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da6bc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6bc7: mov esi, ecx */
  esi = ecx;
/* da6bc9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* da6bcc: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* da6bcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da6bd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6bd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6bd4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6bd5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da6bdc: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xda6be2u); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* da6be2: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* da6be5: call 0xd81a14 */
  esp -= 4; W32(esp, 0xda6beau); SPILL(); f_d81a14(); if (g_unwind) return; RELOAD();
/* da6bea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da6bed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da6bee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da6bef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da6bf6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da6bf7: mov esp, ebp */
  esp = ebp;
/* da6bf9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da6bfa: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da6bfd(void) {
  LOAD_REGS();
L_da6bfd: /* da6bfd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* da6c00: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da6c05: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da6c08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da6c09: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da6c0c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6c11u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da6c11(); return;
}

void f_da6c11(void) {
  LOAD_REGS();
L_da6c11: /* da6c11: push 0xdc3f3c */
  { uint32_t v = 0xdc3f3cu; esp -= 4; W32(esp, v); }
/* da6c16: push 0xde3e60 */
  { uint32_t v = 0xde3e60u; esp -= 4; W32(esp, v); }
/* da6c1b: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda6c21u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da6c21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6c24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6c26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6c28: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6c2du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da6c2d: guest_badaddr(0xda6c2d); return;
}

void f_da6c60(void) {
  LOAD_REGS();
L_da6c60: /* da6c60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da6c61: mov ebp, esp */
  ebp = esp;
/* da6c63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da6c65: push 0xdba4c0 */
  { uint32_t v = 0xdba4c0u; esp -= 4; W32(esp, v); }
/* da6c6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da6c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6c71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da6c78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da6c7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da6c7c: mov ebx, ecx */
  ebx = ecx;
/* da6c7e: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* da6c81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6c82: lea esi, [ebx + 0x40] */
  esi = (uint32_t)(ebx + 0x40u);
/* da6c85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6c86: mov ecx, esi */
  ecx = esi;
/* da6c88: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da6c8b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da6c92: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xda6c95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da6c95: add ebx, 0xc4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* da6c9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da6c9c: mov edi, eax */
  edi = eax;
/* da6c9e: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xda6ca4u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* da6ca4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6ca7: mov ecx, edi */
  ecx = edi;
/* da6ca9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* da6cab: mov eax, 0 */
  eax = 0x0u;
/* da6cb0: sets al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* da6cb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6cb4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* da6cb5: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da6cb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6cb8: mov ecx, esi */
  ecx = esi;
/* da6cba: call 0xd81b81 */
  esp -= 4; W32(esp, 0xda6cbfu); SPILL(); f_d81b81(); if (g_unwind) return; RELOAD();
/* da6cbf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da6cc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da6cc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da6cc4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da6ccb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da6ccc: mov esp, ebp */
  esp = ebp;
/* da6cce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da6ccf: ret  */
  esp += 4; SPILL(); return;
}

void f_da6cd0(void) {
  LOAD_REGS();
L_da6cd0: /* da6cd0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da6cd3: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da6cd8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* da6cdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6cdc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da6cdf: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6ce4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da6ce4(); return;
}

void f_da6ce4(void) {
  LOAD_REGS();
L_da6ce4: /* da6ce4: push 0xdc3f68 */
  { uint32_t v = 0xdc3f68u; esp -= 4; W32(esp, v); }
/* da6ce9: push 0xde3e9c */
  { uint32_t v = 0xde3e9cu; esp -= 4; W32(esp, v); }
/* da6cee: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda6cf4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da6cf4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6cf7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6cf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6cfb: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6d00u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da6d00: guest_badaddr(0xda6d00); return;
}

void f_da6d40(void) {
  LOAD_REGS();
L_da6d40: /* da6d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da6d41: mov ebp, esp */
  ebp = esp;
/* da6d43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da6d45: push 0xdba4d0 */
  { uint32_t v = 0xdba4d0u; esp -= 4; W32(esp, v); }
/* da6d4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da6d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6d51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da6d58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da6d5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da6d5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6d5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6d5e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da6d61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6d63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6d65: mov edi, ecx */
  edi = ecx;
/* da6d67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da6d69: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da6d6b: lea esi, [edi + 0x40] */
  esi = (uint32_t)(edi + 0x40u);
/* da6d6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da6d70: mov ecx, esi */
  ecx = esi;
/* da6d72: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da6d79: call 0xd8263f */
  esp -= 4; W32(esp, 0xda6d7eu); SPILL(); f_d8263f(); if (g_unwind) return; RELOAD();
/* da6d7e: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* da6d80: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xda6d86u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* da6d86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6d87: mov ecx, esi */
  ecx = esi;
/* da6d89: call 0xd81ce4 */
  esp -= 4; W32(esp, 0xda6d8eu); SPILL(); f_d81ce4(); if (g_unwind) return; RELOAD();
/* da6d8e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da6d90: add edi, 0xc4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da6d96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6d97: mov ecx, esi */
  ecx = esi;
/* da6d99: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0xda6d9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da6d9c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da6d9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da6da0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da6da1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da6da8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da6da9: mov esp, ebp */
  esp = ebp;
/* da6dab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da6dac: ret  */
  esp += 4; SPILL(); return;
}

void f_da6dad(void) {
  LOAD_REGS();
L_da6dad: /* da6dad: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da6db0: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da6db5: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* da6db8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da6db9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da6dbc: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6dc1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da6dc1(); return;
}

void f_da6dc1(void) {
  LOAD_REGS();
L_da6dc1: /* da6dc1: push 0xdc3fa4 */
  { uint32_t v = 0xdc3fa4u; esp -= 4; W32(esp, v); }
/* da6dc6: push 0xde3eac */
  { uint32_t v = 0xde3eacu; esp -= 4; W32(esp, v); }
/* da6dcb: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda6dd1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da6dd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6dd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6dd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6dd8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6dddu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da6ddd: guest_badaddr(0xda6ddd); return;
}

void f_da6e10(void) {
  LOAD_REGS();
L_da6e10: /* da6e10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da6e11: mov ebp, esp */
  ebp = esp;
/* da6e13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da6e15: push 0xdba4e0 */
  { uint32_t v = 0xdba4e0u; esp -= 4; W32(esp, v); }
/* da6e1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da6e20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6e21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da6e28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da6e2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da6e2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6e2d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* da6e30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6e31: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da6e34: xor ebx, ebx */
  ebx = 0;
/* da6e36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6e37: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* da6e3a: call 0xd82536 */
  esp -= 4; W32(esp, 0xda6e3fu); SPILL(); f_d82536(); if (g_unwind) return; RELOAD();
/* da6e3f: cmp dword ptr [0xde51c4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xde51c4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da6e45: je 0xda6ee2 */
  if (zf) goto L_da6ee2;
L_da6e4b: /* da6e4b: mov eax, dword ptr [0xde88f8] */
  eax = R32((uint32_t)(0xde88f8u));
/* da6e50: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da6e52: je 0xda6ef8 */
  if (zf) goto L_da6ef8;
L_da6e58: /* da6e58: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* da6e5e: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da6e60: jne 0xda6ef8 */
  if (!zf) goto L_da6ef8;
L_da6e66: /* da6e66: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* da6e6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6e6d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda6e6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da6e6f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6e72: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da6e74: je 0xda6e92 */
  if (zf) goto L_da6e92;
L_da6e76: /* da6e76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6e77: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda6e79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da6e79: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da6e7c: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da6e7f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da6e82: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6e85: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da6e88: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda6e8du); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da6e8d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da6e90: mov ebx, esp */
  ebx = esp;
L_da6e92: /* da6e92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6e93: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xda6e99u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* da6e99: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6e9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da6e9d: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da6ea0: mov edi, 0x40 */
  edi = 0x40u;
/* da6ea5: jge 0xda6ea9 */
  if ((sf == of)) goto L_da6ea9;
L_da6ea7: /* da6ea7: mov edi, eax */
  edi = eax;
L_da6ea9: /* da6ea9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6eaa: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xda6eb0u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* da6eb0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6eb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6eb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6eb5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da6eb6: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda6ebcu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da6ebc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6ebf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6ec1: push 0xde5110 */
  { uint32_t v = 0xde5110u; esp -= 4; W32(esp, v); }
/* da6ec6: call 0xd828f6 */
  esp -= 4; W32(esp, 0xda6ecbu); SPILL(); f_d828f6(); if (g_unwind) return; RELOAD();
/* da6ecb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6ece: push 0xde50f8 */
  { uint32_t v = 0xde50f8u; esp -= 4; W32(esp, v); }
/* da6ed3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da6ed5: mov byte ptr [0xde514f], 0 */
  W8((uint32_t)(0xde514fu), 0x0u);
/* da6edc: call dword ptr [0xde8dbc] */
  esp -= 4; W32(esp, 0xda6ee2u); SPILL(); call_ind(R32(0xde8dbcu)); if (g_unwind) return; /* SHELL32!Shell_NotifyIconA */ RELOAD();
L_da6ee2: /* da6ee2: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* da6ee5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da6ee8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da6eef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da6ef0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da6ef1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da6ef2: mov esp, ebp */
  esp = ebp;
/* da6ef4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da6ef5: ret 4 */
  esp += 8; SPILL(); return;
L_da6ef8: /* da6ef8: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* da6efa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6efb: push 0xde5050 */
  { uint32_t v = 0xde5050u; esp -= 4; W32(esp, v); }
/* da6f00: call dword ptr [0xde8a78] */
  esp -= 4; W32(esp, 0xda6f06u); SPILL(); f_4e2be4(); if (g_unwind) return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */ RELOAD();
/* da6f06: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6f09: push 0xde5038 */
  { uint32_t v = 0xde5038u; esp -= 4; W32(esp, v); }
/* da6f0e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da6f10: call dword ptr [0xde51cc] */
  { uint32_t t = R32((uint32_t)(0xde51ccu)); esp -= 4; W32(esp, 0xda6f16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da6f16: jmp 0xda6ee2 */
  goto L_da6ee2;
}

void f_da6f18(void) {
  LOAD_REGS();
L_da6f18: /* da6f18: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da6f1b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da6f20: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* da6f23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6f24: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* da6f27: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6f2cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da6f2c(); return;
}

void f_da6f2c(void) {
  LOAD_REGS();
L_da6f2c: /* da6f2c: push 0xdc3fc8 */
  { uint32_t v = 0xdc3fc8u; esp -= 4; W32(esp, v); }
/* da6f31: push 0xde3eb4 */
  { uint32_t v = 0xde3eb4u; esp -= 4; W32(esp, v); }
/* da6f36: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda6f3cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da6f3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da6f3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6f41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da6f43: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda6f48u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da6f48: guest_badaddr(0xda6f48); return;
}

void f_da6fa0(void) {
  LOAD_REGS();
L_da6fa0: /* da6fa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da6fa1: mov ebp, esp */
  ebp = esp;
/* da6fa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da6fa5: push 0xdba4f0 */
  { uint32_t v = 0xdba4f0u; esp -= 4; W32(esp, v); }
/* da6faa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da6fb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6fb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da6fb8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da6fbb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* da6fbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da6fbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da6fc0: mov esi, ecx */
  esi = ecx;
/* da6fc2: cmp eax, dword ptr [esi + 0x2c8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2c8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da6fc8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da6fc9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da6fcc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da6fd3: jne 0xda7097 */
  if (!zf) goto L_da7097;
L_da6fd9: /* da6fd9: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* da6fdc: cmp ebx, 0x204 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x204u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da6fe2: je 0xda6ff0 */
  if (zf) goto L_da6ff0;
L_da6fe4: /* da6fe4: cmp ebx, 0x201 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x201u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da6fea: jne 0xda707f */
  if (!zf) goto L_da707f;
L_da6ff0: /* da6ff0: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* da6ff3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da6ff4: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xda6ffau); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* da6ffa: mov ecx, dword ptr [0xde50e8] */
  ecx = R32((uint32_t)(0xde50e8u));
/* da7000: push 0xde3fb8 */
  { uint32_t v = 0xde3fb8u; esp -= 4; W32(esp, v); }
/* da7005: push 0xde3fc8 */
  { uint32_t v = 0xde3fc8u; esp -= 4; W32(esp, v); }
/* da700a: push 0x75 */
  { uint32_t v = 0x75u; esp -= 4; W32(esp, v); }
/* da700c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da700d: call 0xd81749 */
  esp -= 4; W32(esp, 0xda7012u); SPILL(); f_d81749(); if (g_unwind) return; RELOAD();
/* da7012: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da7015: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7018: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7019: mov edi, eax */
  edi = eax;
/* da701b: call dword ptr [0xde8f74] */
  esp -= 4; W32(esp, 0xda7021u); SPILL(); call_ind(R32(0xde8f74u)); if (g_unwind) return; /* USER32!SetForegroundWindow */ RELOAD();
/* da7021: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7024: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* da7027: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* da702a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da702c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da702d: xor eax, eax */
  eax = 0;
/* da702f: cmp ebx, 0x201 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x201u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da7035: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* da7038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da703a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da703b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da703c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* da703d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da7040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7041: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7043: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7044: call dword ptr [0xde8e8c] */
  esp -= 4; W32(esp, 0xda704au); SPILL(); call_ind(R32(0xde8e8cu)); if (g_unwind) return; /* USER32!GetSubMenu */ RELOAD();
/* da704a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da704b: call dword ptr [0xde8e88] */
  esp -= 4; W32(esp, 0xda7051u); SPILL(); call_ind(R32(0xde8e88u)); if (g_unwind) return; /* USER32!TrackPopupMenu */ RELOAD();
/* da7051: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7052: call dword ptr [0xde8e84] */
  esp -= 4; W32(esp, 0xda7058u); SPILL(); call_ind(R32(0xde8e84u)); if (g_unwind) return; /* USER32!DestroyMenu */ RELOAD();
/* da7058: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* da705e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da7061: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7063: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7065: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7067: je 0xda7075 */
  if (zf) goto L_da7075;
L_da7069: /* da7069: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da706c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da706d: call dword ptr [0xde8f50] */
  esp -= 4; W32(esp, 0xda7073u); SPILL(); call_ind(R32(0xde8f50u)); if (g_unwind) return; /* USER32!PostMessageW */ RELOAD();
/* da7073: jmp 0xda707f */
  goto L_da707f;
L_da7075: /* da7075: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7079: call dword ptr [0xde8f54] */
  esp -= 4; W32(esp, 0xda707fu); SPILL(); call_ind(R32(0xde8f54u)); if (g_unwind) return; /* USER32!PostMessageA */ RELOAD();
L_da707f: /* da707f: mov eax, 1 */
  eax = 0x1u;
/* da7084: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da7087: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da708e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da708f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da7090: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da7091: mov esp, ebp */
  esp = ebp;
/* da7093: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da7094: ret 0xc */
  esp += 16; SPILL(); return;
L_da7097: /* da7097: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* da709a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* da709d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da709e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da709f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da70a0: mov ecx, esi */
  ecx = esi;
/* da70a2: call 0xd828d8 */
  esp -= 4; W32(esp, 0xda70a7u); SPILL(); f_d828d8(); if (g_unwind) return; RELOAD();
/* da70a7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da70aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da70ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da70ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da70b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da70b4: mov esp, ebp */
  esp = ebp;
/* da70b6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da70b7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da70ba(void) {
  LOAD_REGS();
L_da70ba: /* da70ba: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* da70bd: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da70c2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da70c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da70c6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da70c9: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda70ceu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da70ce(); return;
}

void f_da70ce(void) {
  LOAD_REGS();
L_da70ce: /* da70ce: push 0xdc3fec */
  { uint32_t v = 0xdc3fecu; esp -= 4; W32(esp, v); }
/* da70d3: push 0xde3fec */
  { uint32_t v = 0xde3fecu; esp -= 4; W32(esp, v); }
/* da70d8: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda70deu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da70de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da70e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da70e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da70e5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda70eau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da70ea: guest_badaddr(0xda70ea); return;
}

void f_da7150(void) {
  LOAD_REGS();
L_da7150: /* da7150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da7151: mov ebp, esp */
  ebp = esp;
/* da7153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da7155: push 0xdba51b */
  { uint32_t v = 0xdba51bu; esp -= 4; W32(esp, v); }
/* da715a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da7160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7161: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da7168: sub esp, 0x830 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x830u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da716e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da716f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7170: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7171: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da7174: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da7177: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da717e: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xda7184u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* da7184: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da7189: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da718b: xor eax, eax */
  eax = 0;
/* da718d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da718f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* da7193: jne 0xda71dd */
  if (!zf) goto L_da71dd;
L_da7195: /* da7195: mov cl, byte ptr [0xde51da] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xde51dau))) & 0xffu);
/* da719b: mov byte ptr [ebp - 0x43c], cl */
  W8((uint32_t)(ebp + 0xfffffbc4u), (ecx & 0xffu));
/* da71a1: mov ecx, 0xff */
  ecx = 0xffu;
/* da71a6: lea edi, [ebp - 0x43b] */
  edi = (uint32_t)(ebp + 0xfffffbc5u);
/* da71ac: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* da71ae: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* da71b0: lea edx, [ebp - 0x43c] */
  edx = (uint32_t)(ebp + 0xfffffbc4u);
/* da71b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da71b7: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* da71bc: stosb byte ptr es:[edi], al */
  W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1);
/* da71bd: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* da71c0: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* da71c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da71c3: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda71c9u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da71c9: lea eax, [ebp - 0x43c] */
  eax = (uint32_t)(ebp + 0xfffffbc4u);
/* da71cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da71d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da71d2: call dword ptr [0xde88ec] */
  esp -= 4; W32(esp, 0xda71d8u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* da71d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da71db: jmp 0xda7218 */
  goto L_da7218;
L_da71dd: /* da71dd: mov cx, word ptr [0xde51dc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xde51dcu))) & 0xffffu);
/* da71e4: mov word ptr [ebp - 0x83c], cx */
  W16((uint32_t)(ebp + 0xfffff7c4u), (ecx & 0xffffu));
/* da71eb: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* da71f0: lea edi, [ebp - 0x83a] */
  edi = (uint32_t)(ebp + 0xfffff7c6u);
/* da71f6: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* da71f8: lea edx, [ebp - 0x83c] */
  edx = (uint32_t)(ebp + 0xfffff7c4u);
/* da71fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da71ff: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* da7204: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* da7206: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* da7209: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* da720b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da720c: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda7212u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da7212: lea eax, [ebp - 0x83c] */
  eax = (uint32_t)(ebp + 0xfffff7c4u);
L_da7218: /* da7218: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da721b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da721c: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xda7222u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* da7222: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da7225: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7226: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* da7229: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xda722fu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* da722f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da7231: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* da7234: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* da7236: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7237: mov ecx, eax */
  ecx = eax;
/* da7239: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* da723c: call dword ptr [0xde895c] */
  esp -= 4; W32(esp, 0xda7242u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* da7242: push 0xde4068 */
  { uint32_t v = 0xde4068u; esp -= 4; W32(esp, v); }
/* da7247: mov ecx, eax */
  ecx = eax;
/* da7249: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* da724d: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xda7253u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* da7253: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* da7256: mov esi, eax */
  esi = eax;
/* da7258: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* da725b: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda7261u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da7261: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* da7264: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* da7268: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda726eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da726e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da7270: je 0xda738f */
  if (zf) goto L_da738f;
L_da7276: /* da7276: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da727b: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da727e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da7281: je 0xda72a6 */
  if (zf) goto L_da72a6;
L_da7283: /* da7283: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xda7289u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* da7289: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* da728c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* da728f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7291: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7293: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7294: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7295: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da7297: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7298: call dword ptr [0xde8914] */
  esp -= 4; W32(esp, 0xda729eu); SPILL(); f_4e43db(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBG000H@Z */ RELOAD();
/* da729e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da72a1: jmp 0xda73c5 */
  goto L_da73c5;
L_da72a6: /* da72a6: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xda72acu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* da72ac: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* da72af: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da72b2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da72b4: mov edi, dword ptr [0xde8914] */
  edi = R32((uint32_t)(0xde8914u));
/* da72ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da72bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da72be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da72bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da72c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da72c1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda72c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da72c3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da72c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da72c7: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda72ccu); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da72cc: mov ebx, dword ptr [0xde88c8] */
  ebx = R32((uint32_t)(0xde88c8u));
/* da72d2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da72d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da72d6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda72d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da72d8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da72db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da72dd: jne 0xda72e4 */
  if (!zf) goto L_da72e4;
L_da72df: /* da72df: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* da72e2: jmp 0xda7324 */
  goto L_da7324;
L_da72e4: /* da72e4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da72e7: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xda72edu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* da72ed: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da72f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da72f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da72f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da72f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da72f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da72f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da72f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda72fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da72fb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da72fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da72ff: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda7304u); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da7304: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7307: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7308: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda730au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da730a: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da730d: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da7310: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da7313: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7316: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da7319: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda731eu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da731e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da7321: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
L_da7324: /* da7324: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da7327: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xda732du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* da732d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da7330: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da7332: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7334: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7336: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7337: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7338: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7339: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda733bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da733b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da733e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da733f: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda7344u); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da7344: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7347: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7348: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda734au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da734a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da734d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da7350: mov ebx, eax */
  ebx = eax;
/* da7352: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xda7358u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* da7358: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da735b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da735d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da735f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7361: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7362: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7363: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7364: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda7366u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7366: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da736a: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda736fu); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da736f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7372: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da7373: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7374: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* da7377: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7378: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda737eu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da737e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da7381: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7385: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7387: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* da7389: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da738a: jmp 0xda7588 */
  goto L_da7588;
L_da738f: /* da738f: push 0xde4074 */
  { uint32_t v = 0xde4074u; esp -= 4; W32(esp, v); }
/* da7394: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da7397: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xda739du); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* da739d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da739f: je 0xda749d */
  if (zf) goto L_da749d;
L_da73a5: /* da73a5: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* da73ab: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da73ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da73b0: je 0xda73df */
  if (zf) goto L_da73df;
L_da73b2: /* da73b2: push 0xde4080 */
  { uint32_t v = 0xde4080u; esp -= 4; W32(esp, v); }
/* da73b7: push 0xde4090 */
  { uint32_t v = 0xde4090u; esp -= 4; W32(esp, v); }
L_da73bc: /* da73bc: call dword ptr [0xde8918] */
  esp -= 4; W32(esp, 0xda73c2u); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* da73c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da73c5: /* da73c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da73c6: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda73cbu); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da73cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da73ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da73cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da73d1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* da73d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da73d4: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda73dau); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da73da: jmp 0xda7591 */
  goto L_da7591;
L_da73df: /* da73df: mov ebx, dword ptr [0xde8918] */
  ebx = R32((uint32_t)(0xde8918u));
/* da73e5: push 0xde40d4 */
  { uint32_t v = 0xde40d4u; esp -= 4; W32(esp, v); }
/* da73ea: push 0xde40e4 */
  { uint32_t v = 0xde40e4u; esp -= 4; W32(esp, v); }
/* da73ef: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda73f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da73f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da73f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da73f5: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda73fau); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da73fa: mov esi, dword ptr [0xde88c8] */
  esi = R32((uint32_t)(0xde88c8u));
/* da7400: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7404: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda7406u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7406: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7409: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da740b: jne 0xda7411 */
  if (!zf) goto L_da7411;
L_da740d: /* da740d: xor edi, edi */
  edi = 0;
/* da740f: jmp 0xda7447 */
  goto L_da7447;
L_da7411: /* da7411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7413: push 0xde40f0 */
  { uint32_t v = 0xde40f0u; esp -= 4; W32(esp, v); }
/* da7418: push 0xde4100 */
  { uint32_t v = 0xde4100u; esp -= 4; W32(esp, v); }
/* da741d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda741fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da741f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7422: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7423: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda7428u); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da7428: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da742b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da742c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda742eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da742e: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da7431: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da7434: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da7437: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da743a: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da743d: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda7442u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da7442: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da7445: mov edi, esp */
  edi = esp;
L_da7447: /* da7447: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7449: push 0xde409c */
  { uint32_t v = 0xde409cu; esp -= 4; W32(esp, v); }
/* da744e: push 0xde40ac */
  { uint32_t v = 0xde40acu; esp -= 4; W32(esp, v); }
/* da7453: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda7455u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7455: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7458: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7459: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda745eu); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da745e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7461: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7462: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda7464u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7464: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7467: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7469: push 0xde40b8 */
  { uint32_t v = 0xde40b8u; esp -= 4; W32(esp, v); }
/* da746e: push 0xde40c8 */
  { uint32_t v = 0xde40c8u; esp -= 4; W32(esp, v); }
/* da7473: mov esi, eax */
  esi = eax;
/* da7475: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda7477u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7477: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da747a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da747b: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda7480u); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da7480: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7483: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7484: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7485: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7486: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda748cu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da748c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da748f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7490: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* da7493: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7495: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* da7497: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7498: jmp 0xda7588 */
  goto L_da7588;
L_da749d: /* da749d: push 0xde410c */
  { uint32_t v = 0xde410cu; esp -= 4; W32(esp, v); }
/* da74a2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da74a5: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xda74abu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* da74ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da74ad: je 0xda7591 */
  if (zf) goto L_da7591;
L_da74b3: /* da74b3: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* da74b9: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da74bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da74be: je 0xda74cf */
  if (zf) goto L_da74cf;
L_da74c0: /* da74c0: push 0xde4120 */
  { uint32_t v = 0xde4120u; esp -= 4; W32(esp, v); }
/* da74c5: push 0xde4130 */
  { uint32_t v = 0xde4130u; esp -= 4; W32(esp, v); }
/* da74ca: jmp 0xda73bc */
  goto L_da73bc;
L_da74cf: /* da74cf: mov ebx, dword ptr [0xde8918] */
  ebx = R32((uint32_t)(0xde8918u));
/* da74d5: push 0xde4180 */
  { uint32_t v = 0xde4180u; esp -= 4; W32(esp, v); }
/* da74da: push 0xde4190 */
  { uint32_t v = 0xde4190u; esp -= 4; W32(esp, v); }
/* da74df: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda74e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da74e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da74e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da74e5: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda74eau); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da74ea: mov esi, dword ptr [0xde88c8] */
  esi = R32((uint32_t)(0xde88c8u));
/* da74f0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da74f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da74f4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda74f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da74f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da74f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da74fb: jne 0xda7501 */
  if (!zf) goto L_da7501;
L_da74fd: /* da74fd: xor edi, edi */
  edi = 0;
/* da74ff: jmp 0xda7537 */
  goto L_da7537;
L_da7501: /* da7501: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7503: push 0xde41a0 */
  { uint32_t v = 0xde41a0u; esp -= 4; W32(esp, v); }
/* da7508: push 0xde41b0 */
  { uint32_t v = 0xde41b0u; esp -= 4; W32(esp, v); }
/* da750d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda750fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da750f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7512: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7513: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda7518u); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da7518: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da751b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da751c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda751eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da751e: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da7521: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da7524: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da7527: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da752a: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da752d: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda7532u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da7532: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da7535: mov edi, esp */
  edi = esp;
L_da7537: /* da7537: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7539: push 0xde4140 */
  { uint32_t v = 0xde4140u; esp -= 4; W32(esp, v); }
/* da753e: push 0xde4150 */
  { uint32_t v = 0xde4150u; esp -= 4; W32(esp, v); }
/* da7543: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda7545u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7545: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7549: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda754eu); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da754e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7551: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7552: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda7554u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7554: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7557: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7559: push 0xde4160 */
  { uint32_t v = 0xde4160u; esp -= 4; W32(esp, v); }
/* da755e: push 0xde4170 */
  { uint32_t v = 0xde4170u; esp -= 4; W32(esp, v); }
/* da7563: mov esi, eax */
  esi = eax;
/* da7565: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda7567u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7567: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da756a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da756b: call 0xd811a9 */
  esp -= 4; W32(esp, 0xda7570u); SPILL(); f_d811a9(); if (g_unwind) return; RELOAD();
/* da7570: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7573: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7574: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7575: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7576: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda757cu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da757c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* da757f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7582: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7583: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7585: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* da7587: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_da7588: /* da7588: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda758eu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da758e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_da7591: /* da7591: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da7596: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da7599: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da759b: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* da759d: je 0xda75b1 */
  if (zf) goto L_da75b1;
L_da759f: /* da759f: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xda75a5u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* da75a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da75a6: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* da75a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da75a9: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda75afu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da75af: jmp 0xda75c1 */
  goto L_da75c1;
L_da75b1: /* da75b1: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xda75b7u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* da75b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da75b8: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* da75ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da75bb: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda75c1u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_da75c1: /* da75c1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da75c4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da75c8: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda75ceu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da75ce: mov eax, 1 */
  eax = 0x1u;
/* da75d3: lea esp, [ebp - 0x848] */
  esp = (uint32_t)(ebp + 0xfffff7b8u);
/* da75d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da75dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da75e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da75e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da75e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da75e6: mov esp, ebp */
  esp = ebp;
/* da75e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da75e9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da75ec(void) {
  LOAD_REGS();
L_da75ec: /* da75ec: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* da75ef: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da75f4: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* da75f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da75f8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* da75fb: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda7600u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da7600(); return;
}

void f_da7600(void) {
  LOAD_REGS();
L_da7600: /* da7600: push 0xdc4010 */
  { uint32_t v = 0xdc4010u; esp -= 4; W32(esp, v); }
/* da7605: push 0xde41c0 */
  { uint32_t v = 0xde41c0u; esp -= 4; W32(esp, v); }
/* da760a: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda7610u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da7610: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7613: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7615: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7617: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda761cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da761c: guest_badaddr(0xda761c); return;
}

void f_da7760(void) {
  LOAD_REGS();
L_da7760: /* da7760: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da7761: mov ebp, esp */
  ebp = esp;
/* da7763: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da7765: push 0xdba530 */
  { uint32_t v = 0xdba530u; esp -= 4; W32(esp, v); }
/* da776a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da7770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7771: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da7778: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da777b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* da777e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da777f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7780: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7781: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da7784: mov esi, ecx */
  esi = ecx;
/* da7786: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* da7789: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* da778c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da778d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* da7790: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7793: push 0xd819e2 */
  { uint32_t v = 0xd819e2u; esp -= 4; W32(esp, v); }
/* da7798: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7799: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da77a0: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* da77a3: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* da77a6: call dword ptr [0xde8f3c] */
  esp -= 4; W32(esp, 0xda77acu); SPILL(); call_ind(R32(0xde8f3cu)); if (g_unwind) return; /* USER32!EnumChildWindows */ RELOAD();
/* da77ac: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da77af: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* da77b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da77b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da77b4: call 0xd819e2 */
  esp -= 4; W32(esp, 0xda77b9u); SPILL(); f_d819e2(); if (g_unwind) return; RELOAD();
/* da77b9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da77bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da77bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da77be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da77c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da77c6: mov esp, ebp */
  esp = ebp;
/* da77c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da77c9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da77cc(void) {
  LOAD_REGS();
L_da77cc: /* da77cc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da77cf: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da77d4: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* da77d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da77d8: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* da77db: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda77e0u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da77e0(); return;
}

void f_da77e0(void) {
  LOAD_REGS();
L_da77e0: /* da77e0: push 0xdc4058 */
  { uint32_t v = 0xdc4058u; esp -= 4; W32(esp, v); }
/* da77e5: push 0xde41c8 */
  { uint32_t v = 0xde41c8u; esp -= 4; W32(esp, v); }
/* da77ea: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda77f0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da77f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da77f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da77f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da77f7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda77fcu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da77fc: guest_badaddr(0xda77fc); return;
}

void f_da7830(void) {
  LOAD_REGS();
L_da7830: /* da7830: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da7833: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7834: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7835: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* da7839: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da783b: mov esi, ecx */
  esi = ecx;
/* da783d: jne 0xda784e */
  if (!zf) goto L_da784e;
L_da783f: /* da783f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* da7842: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* da7845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7846: call dword ptr [0xde8ed0] */
  esp -= 4; W32(esp, 0xda784cu); SPILL(); call_ind(R32(0xde8ed0u)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* da784c: mov edi, eax */
  edi = eax;
L_da784e: /* da784e: mov ecx, dword ptr [0xde5168] */
  ecx = R32((uint32_t)(0xde5168u));
/* da7854: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da7855: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da7856: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7857: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7858: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda785eu); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da785e: mov ebx, dword ptr [0xde8cb4] */
  ebx = R32((uint32_t)(0xde8cb4u));
/* da7864: mov ebp, dword ptr [0xde8f60] */
  ebp = R32((uint32_t)(0xde8f60u));
/* da786a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* da786e: cmp dword ptr [esi + 0x44], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da7872: je 0xda789f */
  if (zf) goto L_da789f;
L_da7874: /* da7874: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* da7877: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* da787a: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* da787e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da787f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7880: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda7882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7882: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* da7886: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* da788a: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* da788d: push 0x5a0049 */
  { uint32_t v = 0x5a0049u; esp -= 4; W32(esp, v); }
/* da7892: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* da7894: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* da7897: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7898: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7899: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da789b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da789c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da789d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda789fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da789f: /* da789f: cmp dword ptr [esi + 0x48], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da78a3: je 0xda78d0 */
  if (zf) goto L_da78d0;
L_da78a5: /* da78a5: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* da78a8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* da78ab: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* da78af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da78b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da78b1: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda78b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da78b3: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* da78b7: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* da78ba: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* da78be: push 0x5a0049 */
  { uint32_t v = 0x5a0049u; esp -= 4; W32(esp, v); }
/* da78c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da78c4: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* da78c6: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* da78c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da78ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da78cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da78cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da78ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda78d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da78d0: /* da78d0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* da78d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da78d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da78d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da78d8: jne 0xda78e5 */
  if (!zf) goto L_da78e5;
L_da78da: /* da78da: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da78dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da78de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da78df: call dword ptr [0xde8ed4] */
  esp -= 4; W32(esp, 0xda78e5u); SPILL(); call_ind(R32(0xde8ed4u)); if (g_unwind) return; /* USER32!ReleaseDC */ RELOAD();
L_da78e5: /* da78e5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da78e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da78ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da78eb: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda78f1u); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da78f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da78f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da78f3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da78f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da7940(void) {
  LOAD_REGS();
L_da7940: /* da7940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da7941: mov ebp, esp */
  ebp = esp;
/* da7943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da7945: push 0xdba540 */
  { uint32_t v = 0xdba540u; esp -= 4; W32(esp, v); }
/* da794a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da7950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da7958: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da795b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da795c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da795d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da795e: mov esi, ecx */
  esi = ecx;
/* da7960: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da7962: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da7965: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7967: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da796e: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0xda7974u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7974: xor ecx, ecx */
  ecx = 0;
/* da7976: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* da7979: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da7980: /* da7980: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da7983: jge 0xda79b9 */
  if ((sf == of)) goto L_da79b9;
L_da7985: /* da7985: cmp dword ptr [esi + ecx*4 + 0x44], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + ecx*4 + 0x44u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da7989: je 0xda79b6 */
  if (zf) goto L_da79b6;
L_da798b: /* da798b: mov eax, dword ptr [ebp + ecx*4 + 0xc] */
  eax = R32((uint32_t)(ebp + ecx*4 + 0xcu));
/* da798f: sub eax, dword ptr [esi + ecx*4 + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + ecx*4 + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* da7993: mov edx, dword ptr [esi + ecx*4 + 0x64] */
  edx = R32((uint32_t)(esi + ecx*4 + 0x64u));
/* da7997: add eax, dword ptr [esi + ecx*4 + 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + ecx*4 + 0x4cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da799b: mov edi, dword ptr [esi + ecx*4 + 0x6c] */
  edi = R32((uint32_t)(esi + ecx*4 + 0x6cu));
/* da799f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da79a1: jge 0xda79ac */
  if ((sf == of)) goto L_da79ac;
L_da79a3: /* da79a3: mov eax, edx */
  eax = edx;
/* da79a5: mov dword ptr [esi + ecx*4 + 0x4c], eax */
  W32((uint32_t)(esi + ecx*4 + 0x4cu), eax);
/* da79a9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* da79aa: jmp 0xda7980 */
  goto L_da7980;
L_da79ac: /* da79ac: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da79ae: jl 0xda79b2 */
  if ((sf != of)) goto L_da79b2;
L_da79b0: /* da79b0: mov eax, edi */
  eax = edi;
L_da79b2: /* da79b2: mov dword ptr [esi + ecx*4 + 0x4c], eax */
  W32((uint32_t)(esi + ecx*4 + 0x4cu), eax);
L_da79b6: /* da79b6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* da79b7: jmp 0xda7980 */
  goto L_da7980;
L_da79b9: /* da79b9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da79bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da79bd: mov ecx, esi */
  ecx = esi;
/* da79bf: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xda79c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da79c5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* da79c8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* da79cb: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* da79ce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da79d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da79d2: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* da79d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da79d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da79dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da79de: mov esp, ebp */
  esp = ebp;
/* da79e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da79e1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da79e4(void) {
  LOAD_REGS();
L_da79e4: /* da79e4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da79e7: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da79ec: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* da79ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da79f0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* da79f3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda79f8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da79f8(); return;
}

void f_da79f8(void) {
  LOAD_REGS();
L_da79f8: /* da79f8: push 0xdc408c */
  { uint32_t v = 0xdc408cu; esp -= 4; W32(esp, v); }
/* da79fd: push 0xde4238 */
  { uint32_t v = 0xde4238u; esp -= 4; W32(esp, v); }
/* da7a02: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda7a08u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da7a08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7a0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7a0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7a0f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda7a14u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da7a14: guest_badaddr(0xda7a14); return;
}

void f_da7a60(void) {
  LOAD_REGS();
L_da7a60: /* da7a60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da7a61: mov ebp, esp */
  ebp = esp;
/* da7a63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da7a65: push 0xdba550 */
  { uint32_t v = 0xdba550u; esp -= 4; W32(esp, v); }
/* da7a6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da7a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7a71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da7a78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da7a7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da7a7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7a7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7a7e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da7a81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7a83: mov esi, ecx */
  esi = ecx;
/* da7a85: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da7a8c: call dword ptr [0xde8e94] */
  esp -= 4; W32(esp, 0xda7a92u); SPILL(); call_ind(R32(0xde8e94u)); if (g_unwind) return; /* USER32!ClipCursor */ RELOAD();
/* da7a92: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da7a94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7a96: mov ecx, esi */
  ecx = esi;
/* da7a98: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0xda7a9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7a9e: mov eax, dword ptr [esi + 0x74] */
  eax = R32((uint32_t)(esi + 0x74u));
/* da7aa1: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* da7aa4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da7aa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7aa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7aa8: call dword ptr [edx + 0xd4] */
  { uint32_t t = R32((uint32_t)(edx + 0xd4u)); esp -= 4; W32(esp, 0xda7aaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7aae: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da7ab1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7ab2: call dword ptr [0xde8f0c] */
  esp -= 4; W32(esp, 0xda7ab8u); SPILL(); call_ind(R32(0xde8f0cu)); if (g_unwind) return; /* USER32!DestroyWindow */ RELOAD();
/* da7ab8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da7abb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da7abc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da7abd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da7ac4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da7ac5: mov esp, ebp */
  esp = ebp;
/* da7ac7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da7ac8: ret  */
  esp += 4; SPILL(); return;
}

void f_da7ac9(void) {
  LOAD_REGS();
L_da7ac9: /* da7ac9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da7acc: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da7ad1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* da7ad4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7ad5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* da7ad8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda7addu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da7add(); return;
}

void f_da7add(void) {
  LOAD_REGS();
L_da7add: /* da7add: push 0xdc40d8 */
  { uint32_t v = 0xdc40d8u; esp -= 4; W32(esp, v); }
/* da7ae2: push 0xde4240 */
  { uint32_t v = 0xde4240u; esp -= 4; W32(esp, v); }
/* da7ae7: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda7aedu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da7aed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7af0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7af2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7af4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda7af9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da7af9: guest_badaddr(0xda7af9); return;
}

void f_da7b30(void) {
  LOAD_REGS();
L_da7b30: /* da7b30: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da7b33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7b34: mov esi, ecx */
  esi = ecx;
/* da7b36: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7b39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7b3a: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* da7b3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7b3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7b40: call dword ptr [0xde8ef8] */
  esp -= 4; W32(esp, 0xda7b46u); SPILL(); call_ind(R32(0xde8ef8u)); if (g_unwind) return; /* USER32!BeginPaint */ RELOAD();
/* da7b46: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* da7b4a: mov edi, eax */
  edi = eax;
/* da7b4c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7b4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7b51: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda7b57u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da7b57: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* da7b5b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* da7b5f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da7b63: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* da7b67: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* da7b6b: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* da7b6d: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* da7b71: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* da7b75: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* da7b79: call dword ptr [0xde8e98] */
  esp -= 4; W32(esp, 0xda7b7fu); SPILL(); call_ind(R32(0xde8e98u)); if (g_unwind) return; /* USER32!GetSysColorBrush */ RELOAD();
/* da7b7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7b80: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* da7b84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7b85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7b86: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xda7b8cu); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* da7b8c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da7b8f: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* da7b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7b94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7b95: call dword ptr [0xde8f04] */
  esp -= 4; W32(esp, 0xda7b9bu); SPILL(); call_ind(R32(0xde8f04u)); if (g_unwind) return; /* USER32!EndPaint */ RELOAD();
/* da7b9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da7b9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da7b9d: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7ba0: ret  */
  esp += 4; SPILL(); return;
}

void f_da7bd0(void) {
  LOAD_REGS();
L_da7bd0: /* da7bd0: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da7bd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7bd4: mov esi, ecx */
  esi = ecx;
/* da7bd6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7bd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7bda: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* da7bde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7bdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7be0: call dword ptr [0xde8ef8] */
  esp -= 4; W32(esp, 0xda7be6u); SPILL(); call_ind(R32(0xde8ef8u)); if (g_unwind) return; /* USER32!BeginPaint */ RELOAD();
/* da7be6: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* da7bea: mov edi, eax */
  edi = eax;
/* da7bec: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7bef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7bf1: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda7bf7u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da7bf7: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* da7bfb: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* da7bff: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* da7c03: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* da7c07: mov edx, dword ptr [0xde5024] */
  edx = R32((uint32_t)(0xde5024u));
/* da7c0d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* da7c11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7c12: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* da7c16: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* da7c1a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* da7c1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7c1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7c20: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* da7c24: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xda7c2au); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* da7c2a: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* da7c2c: call dword ptr [0xde8e80] */
  esp -= 4; W32(esp, 0xda7c32u); SPILL(); call_ind(R32(0xde8e80u)); if (g_unwind) return; /* USER32!GetCapture */ RELOAD();
/* da7c32: sub eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* da7c35: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* da7c37: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* da7c39: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da7c3c: add eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da7c3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7c40: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* da7c44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7c45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7c46: call dword ptr [0xde8f64] */
  esp -= 4; W32(esp, 0xda7c4cu); SPILL(); call_ind(R32(0xde8f64u)); if (g_unwind) return; /* USER32!DrawEdge */ RELOAD();
/* da7c4c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7c4f: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* da7c53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7c54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7c55: call dword ptr [0xde8f04] */
  esp -= 4; W32(esp, 0xda7c5bu); SPILL(); call_ind(R32(0xde8f04u)); if (g_unwind) return; /* USER32!EndPaint */ RELOAD();
/* da7c5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da7c5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da7c5d: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7c60: ret  */
  esp += 4; SPILL(); return;
}

void f_da7ca0(void) {
  LOAD_REGS();
L_da7ca0: /* da7ca0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da7ca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7ca4: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* da7ca8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7ca9: mov esi, ecx */
  esi = ecx;
/* da7cab: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xda7cb1u); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* da7cb1: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da7cb5: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da7cb9: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* da7cbd: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* da7cc1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da7cc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7cc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7cc6: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* da7cca: call dword ptr [0xde8f20] */
  esp -= 4; W32(esp, 0xda7cd0u); SPILL(); call_ind(R32(0xde8f20u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* da7cd0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da7cd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7cd4: call dword ptr [0xde8e3c] */
  esp -= 4; W32(esp, 0xda7cdau); SPILL(); call_ind(R32(0xde8e3cu)); if (g_unwind) return; /* USER32!SetCapture */ RELOAD();
/* da7cda: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7cdd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da7cdf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7ce1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7ce2: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda7ce8u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da7ce8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da7ce9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7cec: ret  */
  esp += 4; SPILL(); return;
}

void f_da7d10(void) {
  LOAD_REGS();
L_da7d10: /* da7d10: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da7d13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7d14: mov esi, ecx */
  esi = ecx;
/* da7d16: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* da7d19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da7d1b: je 0xda7e45 */
  if (zf) goto L_da7e45;
L_da7d21: /* da7d21: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da7d24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da7d25: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da7d26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7d27: mov edi, dword ptr [0xde8f60] */
  edi = R32((uint32_t)(0xde8f60u));
/* da7d2d: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* da7d31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7d32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7d33: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda7d35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7d35: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* da7d38: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* da7d3b: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* da7d3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da7d40: fmul dword ptr [0xdc3ae4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae4u)));
/* da7d46: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da7d48: je 0xda7dbf */
  if (zf) goto L_da7dbf;
L_da7d4a: /* da7d4a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* da7d4e: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* da7d52: add edx, -6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffau);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da7d55: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* da7d59: fimul dword ptr [esp + 0x14] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esp + 0x14u)));
/* da7d5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da7d5e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* da7d62: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* da7d66: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xda7d6bu); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* da7d6b: mov ebp, dword ptr [0xde8f48] */
  ebp = R32((uint32_t)(0xde8f48u));
/* da7d71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7d72: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* da7d75: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* da7d78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7d7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7d7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7d7d: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda7d7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7d7f: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* da7d82: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* da7d85: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* da7d89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7d8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7d8b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda7d8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7d8d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* da7d91: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da7d93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da7d94: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* da7d98: fsub dword ptr [0xdc144c] */
  ST0 = ST0 - (F32((uint32_t)(0xdc144cu)));
/* da7d9e: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xda7da3u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* da7da3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* da7da7: fadd dword ptr [0xdc144c] */
  ST0 = ST0 + (F32((uint32_t)(0xdc144cu)));
/* da7dad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7dae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7db0: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xda7db5u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* da7db5: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* da7db8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7db9: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* da7dbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7dbd: jmp 0xda7e32 */
  goto L_da7e32;
L_da7dbf: /* da7dbf: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* da7dc3: add ecx, -6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffau);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da7dc6: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* da7dca: fimul dword ptr [esp + 0x14] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esp + 0x14u)));
/* da7dce: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* da7dd2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* da7dd6: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xda7ddbu); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* da7ddb: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* da7ddf: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* da7de2: mov ebp, dword ptr [0xde8f48] */
  ebp = R32((uint32_t)(0xde8f48u));
/* da7de8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7de9: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* da7dec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da7ded: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7def: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7df1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7df2: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda7df4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7df4: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* da7df7: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* da7dfa: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* da7dfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7dff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7e00: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda7e02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7e02: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* da7e06: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da7e08: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* da7e0c: fsub dword ptr [0xdc144c] */
  ST0 = ST0 - (F32((uint32_t)(0xdc144cu)));
/* da7e12: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xda7e17u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* da7e17: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* da7e1b: fadd dword ptr [0xdc144c] */
  ST0 = ST0 + (F32((uint32_t)(0xdc144cu)));
/* da7e21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7e22: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da7e23: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xda7e28u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* da7e28: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* da7e2b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* da7e2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7e2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7e31: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_da7e32: /* da7e32: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda7e34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7e34: mov esi, dword ptr [esi + 0x48] */
  esi = R32((uint32_t)(esi + 0x48u));
/* da7e37: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da7e39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da7e3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da7e3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da7e3c: je 0xda7e45 */
  if (zf) goto L_da7e45;
L_da7e3e: /* da7e3e: mov ecx, esi */
  ecx = esi;
/* da7e40: call 0xd8267b */
  esp -= 4; W32(esp, 0xda7e45u); SPILL(); f_d8267b(); if (g_unwind) return; RELOAD();
L_da7e45: /* da7e45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da7e46: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7e49: ret  */
  esp += 4; SPILL(); return;
}

void f_da7ea0(void) {
  LOAD_REGS();
L_da7ea0: /* da7ea0: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da7ea3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7ea4: mov esi, ecx */
  esi = ecx;
/* da7ea6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7ea9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7eaa: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* da7eae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7eb0: call dword ptr [0xde8ef8] */
  esp -= 4; W32(esp, 0xda7eb6u); SPILL(); call_ind(R32(0xde8ef8u)); if (g_unwind) return; /* USER32!BeginPaint */ RELOAD();
/* da7eb6: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* da7eba: mov edi, eax */
  edi = eax;
/* da7ebc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da7ebf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7ec1: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda7ec7u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da7ec7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* da7ecb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da7ecf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* da7ed3: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* da7ed7: mov edx, dword ptr [0xde50e4] */
  edx = R32((uint32_t)(0xde50e4u));
/* da7edd: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* da7ee1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7ee2: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* da7ee6: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* da7eea: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* da7eee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7eef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7ef0: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* da7ef4: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xda7efau); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* da7efa: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da7efd: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* da7f01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7f02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da7f03: call dword ptr [0xde8f04] */
  esp -= 4; W32(esp, 0xda7f09u); SPILL(); call_ind(R32(0xde8f04u)); if (g_unwind) return; /* USER32!EndPaint */ RELOAD();
/* da7f09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da7f0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da7f0b: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da7f0e: ret  */
  esp += 4; SPILL(); return;
}

void f_da7f30(void) {
  LOAD_REGS();
L_da7f30: /* da7f30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da7f34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7f35: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da7f37: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xda7f3du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* da7f3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da7f50(void) {
  LOAD_REGS();
L_da7f50: /* da7f50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7f51: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da7f53: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da7f55: mov esi, ecx */
  esi = ecx;
/* da7f57: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda7f5du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da7f5d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da7f61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da7f63: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* da7f65: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* da7f68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da7f69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da7f80(void) {
  LOAD_REGS();
L_da7f80: /* da7f80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da7f82: push 0xdba569 */
  { uint32_t v = 0xdba569u; esp -= 4; W32(esp, v); }
/* da7f87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da7f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da7f8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da7f95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da7f96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da7f97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da7f98: mov esi, ecx */
  esi = ecx;
/* da7f9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7f9b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* da7f9f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* da7fa2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da7fa4: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* da7faa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* da7fb2: jge 0xda7fc8 */
  if ((sf == of)) goto L_da7fc8;
L_da7fb4: /* da7fb4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* da7fb9: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da7fbe: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* da7fc3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda7fc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7fc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da7fc8: /* da7fc8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da7fcb: jle 0xda7fe1 */
  if ((zf || sf != of)) goto L_da7fe1;
L_da7fcd: /* da7fcd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* da7fd2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da7fd7: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* da7fdc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda7fdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da7fde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da7fe1: /* da7fe1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da7fe3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da7fe4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da7fe6: mov ecx, esi */
  ecx = esi;
/* da7fe8: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xda7feeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* da7fee: mov ecx, esi */
  ecx = esi;
/* da7ff0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* da7ff8: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xda7ffeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* da7ffe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* da8002: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8003: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8004: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8005: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da800c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da800f: ret  */
  esp += 4; SPILL(); return;
}

void f_da8040(void) {
  LOAD_REGS();
L_da8040: /* da8040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8041: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da8043: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da8045: mov esi, ecx */
  esi = ecx;
/* da8047: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda804du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da804d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da8051: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da8053: mov dl, byte ptr [edx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* da8055: mov byte ptr [eax + ecx], dl */
  W8((uint32_t)(eax + ecx), (edx & 0xffu));
/* da8058: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8059: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8070(void) {
  LOAD_REGS();
L_da8070: /* da8070: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8071: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da8072: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* da8078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8079: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da807a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* da807e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da8080: mov esi, ecx */
  esi = ecx;
/* da8082: jge 0xda8098 */
  if ((sf == of)) goto L_da8098;
L_da8084: /* da8084: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* da8089: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da808e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* da8093: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda8095u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8095: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8098: /* da8098: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da809b: jle 0xda80b1 */
  if ((zf || sf != of)) goto L_da80b1;
L_da809d: /* da809d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* da80a2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da80a7: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* da80ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda80aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da80ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da80b1: /* da80b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* da80b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da80b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* da80bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da80bd: jle 0xda80d3 */
  if ((zf || sf != of)) goto L_da80d3;
L_da80bf: /* da80bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* da80c4: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da80c9: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* da80ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda80d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da80d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da80d3: /* da80d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da80d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da80d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da80d7: mov ecx, esi */
  ecx = esi;
/* da80d9: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xda80dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* da80df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da80e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da80e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da80e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da80e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da8110(void) {
  LOAD_REGS();
L_da8110: /* da8110: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8111: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da8112: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* da8118: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8119: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da811a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* da811e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da8120: mov esi, ecx */
  esi = ecx;
/* da8122: jge 0xda8138 */
  if ((sf == of)) goto L_da8138;
L_da8124: /* da8124: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* da8129: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da812e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* da8133: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda8135u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8135: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8138: /* da8138: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da813b: jle 0xda8151 */
  if ((zf || sf != of)) goto L_da8151;
L_da813d: /* da813d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* da8142: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8147: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* da814c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda814eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da814e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8151: /* da8151: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* da8155: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da8158: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* da815b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da815d: jle 0xda8173 */
  if ((zf || sf != of)) goto L_da8173;
L_da815f: /* da815f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* da8164: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8169: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* da816e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda8170u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8170: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8173: /* da8173: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8175: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8176: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8177: mov ecx, esi */
  ecx = esi;
/* da8179: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xda817fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* da817f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8180: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8181: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da8182: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8183: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da81b0(void) {
  LOAD_REGS();
L_da81b0: /* da81b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da81b1: mov esi, ecx */
  esi = ecx;
/* da81b3: call dword ptr [0xde8e9c] */
  esp -= 4; W32(esp, 0xda81b9u); SPILL(); call_ind(R32(0xde8e9cu)); if (g_unwind) return; /* USER32!GetCursor */ RELOAD();
/* da81b9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* da81bb: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da81c0: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da81c3: push 0x7f02 */
  { uint32_t v = 0x7f02u; esp -= 4; W32(esp, v); }
/* da81c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da81ca: je 0xda81dd */
  if (zf) goto L_da81dd;
L_da81cc: /* da81cc: call dword ptr [0xde8df0] */
  esp -= 4; W32(esp, 0xda81d2u); SPILL(); call_ind(R32(0xde8df0u)); if (g_unwind) return; /* USER32!LoadCursorW */ RELOAD();
/* da81d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da81d3: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda81d9u); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da81d9: mov eax, esi */
  eax = esi;
/* da81db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da81dc: ret  */
  esp += 4; SPILL(); return;
L_da81dd: /* da81dd: call dword ptr [0xde8dec] */
  esp -= 4; W32(esp, 0xda81e3u); SPILL(); call_ind(R32(0xde8decu)); if (g_unwind) return; /* USER32!LoadCursorA */ RELOAD();
/* da81e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da81e4: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda81eau); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da81ea: mov eax, esi */
  eax = esi;
/* da81ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da81ed: ret  */
  esp += 4; SPILL(); return;
}

void f_da8200(void) {
  LOAD_REGS();
L_da8200: /* da8200: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da8206: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da8208: push 0xdba589 */
  { uint32_t v = 0xdba589u; esp -= 4; W32(esp, v); }
/* da820d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da820e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da8215: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8216: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8217: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* da821b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da821e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8221: mov esi, ecx */
  esi = ecx;
/* da8223: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xda8229u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* da8229: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da822c: xor eax, eax */
  eax = 0;
/* da822e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da8230: jle 0xda8244 */
  if ((zf || sf != of)) goto L_da8244;
L_da8232: /* da8232: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* da8234: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* da8237: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da8239: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* da823c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da823f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da8240: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8242: jl 0xda8232 */
  if ((sf != of)) goto L_da8232;
L_da8244: /* da8244: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* da8248: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8249: mov eax, esi */
  eax = esi;
/* da824b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da8252: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8253: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8256: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8280(void) {
  LOAD_REGS();
L_da8280: /* da8280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8282: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8283: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* da8287: mov esi, ecx */
  esi = ecx;
/* da8289: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da828b: je 0xda82c6 */
  if (zf) goto L_da82c6;
L_da828d: /* da828d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8291: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8293: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xda8299u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* da8299: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da829c: xor ebx, ebx */
  ebx = 0;
/* da829e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da82a0: jle 0xda82c6 */
  if ((zf || sf != of)) goto L_da82c6;
L_da82a2: /* da82a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da82a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da82a6: mov ecx, esi */
  ecx = esi;
/* da82a8: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda82aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da82ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da82b0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da82b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da82b5: je 0xda82be */
  if (zf) goto L_da82be;
L_da82b7: /* da82b7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da82b9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* da82bc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_da82be: /* da82be: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da82c1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* da82c2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da82c4: jl 0xda82a2 */
  if ((sf != of)) goto L_da82a2;
L_da82c6: /* da82c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da82c7: mov eax, esi */
  eax = esi;
/* da82c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da82ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da82cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da82f0(void) {
  LOAD_REGS();
L_da82f0: /* da82f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da82f2: push 0xdba5a9 */
  { uint32_t v = 0xdba5a9u; esp -= 4; W32(esp, v); }
/* da82f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da82fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da82fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da8305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8306: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8307: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8308: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8309: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* da830d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8310: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8312: mov esi, ecx */
  esi = ecx;
/* da8314: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8315: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* da8319: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xda831fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* da831f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* da8326: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8329: xor ebx, ebx */
  ebx = 0;
/* da832b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da832d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* da8335: jle 0xda835b */
  if ((zf || sf != of)) goto L_da835b;
L_da8337: /* da8337: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8339: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da833b: mov ecx, esi */
  ecx = esi;
/* da833d: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda8343u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da8343: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da8345: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da8348: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da834a: je 0xda8353 */
  if (zf) goto L_da8353;
L_da834c: /* da834c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da834e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* da8351: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_da8353: /* da8353: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8356: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* da8357: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8359: jl 0xda8337 */
  if ((sf != of)) goto L_da8337;
L_da835b: /* da835b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* da835f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8360: mov eax, esi */
  eax = esi;
/* da8362: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8363: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8364: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da836b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da836e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da83b0(void) {
  LOAD_REGS();
L_da83b0: /* da83b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da83b2: push 0xdba5c9 */
  { uint32_t v = 0xdba5c9u; esp -= 4; W32(esp, v); }
/* da83b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da83bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da83be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da83c5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da83c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da83c9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da83ca: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* da83ce: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* da83d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da83d2: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* da83d4: mov ebx, ecx */
  ebx = ecx;
/* da83d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da83d7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* da83db: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xda83e1u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* da83e1: xor esi, esi */
  esi = 0;
/* da83e3: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* da83e6: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da83e9: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* da83ed: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* da83f1: jle 0xda8471 */
  if ((zf || sf != of)) goto L_da8471;
L_da83f3: /* da83f3: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* da83f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_da83f8: /* da83f8: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* da83fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da83fc: mov ecx, ebx */
  ecx = ebx;
/* da83fe: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda8404u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da8404: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* da8406: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* da8409: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* da840c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da840e: je 0xda8455 */
  if (zf) goto L_da8455;
L_da8410: /* da8410: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* da8413: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* da8417: mov eax, dword ptr [esi + ecx] */
  eax = R32((uint32_t)(esi + ecx));
/* da841a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da841c: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* da841e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* da8421: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da8423: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* da8426: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* da8428: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da842b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* da842e: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* da8431: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* da8434: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* da8437: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* da843a: lea edx, [esi + 0x14] */
  edx = (uint32_t)(esi + 0x14u);
/* da843d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da843e: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* da8441: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xda8447u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* da8447: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* da844a: mov dword ptr [edi + 0x20], eax */
  W32((uint32_t)(edi + 0x20u), eax);
/* da844d: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* da8450: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* da8453: xor esi, esi */
  esi = 0;
L_da8455: /* da8455: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da8459: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* da845d: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* da8460: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da8461: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da8464: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8466: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* da846a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* da846e: jl 0xda83f8 */
  if ((sf != of)) goto L_da83f8;
L_da8470: /* da8470: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_da8471: /* da8471: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* da8475: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8476: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da8477: mov eax, ebx */
  eax = ebx;
/* da8479: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da847a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da8481: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8484: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da84d0(void) {
  LOAD_REGS();
L_da84d0: /* da84d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da84d2: push 0xdba5e9 */
  { uint32_t v = 0xdba5e9u; esp -= 4; W32(esp, v); }
/* da84d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da84dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da84de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da84e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da84e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da84e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da84e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da84e9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* da84ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da84f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da84f2: mov esi, ecx */
  esi = ecx;
/* da84f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da84f5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* da84f9: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xda84ffu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* da84ff: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* da8506: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8509: xor ebx, ebx */
  ebx = 0;
/* da850b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da850d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* da8515: jle 0xda853b */
  if ((zf || sf != of)) goto L_da853b;
L_da8517: /* da8517: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8519: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da851b: mov ecx, esi */
  ecx = esi;
/* da851d: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda8523u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da8523: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da8525: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da8528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da852a: je 0xda8533 */
  if (zf) goto L_da8533;
L_da852c: /* da852c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da852e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* da8531: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_da8533: /* da8533: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8536: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* da8537: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8539: jl 0xda8517 */
  if ((sf != of)) goto L_da8517;
L_da853b: /* da853b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* da853f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8540: mov eax, esi */
  eax = esi;
/* da8542: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8543: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8544: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da854b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da854e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8590(void) {
  LOAD_REGS();
L_da8590: /* da8590: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da8592: push 0xdba609 */
  { uint32_t v = 0xdba609u; esp -= 4; W32(esp, v); }
/* da8597: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da859d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da859e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da85a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da85a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da85a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da85a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da85a9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* da85ad: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da85b0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da85b2: mov esi, ecx */
  esi = ecx;
/* da85b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da85b5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* da85b9: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xda85bfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* da85bf: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* da85c6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da85c9: xor ebx, ebx */
  ebx = 0;
/* da85cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da85cd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* da85d5: jle 0xda85fb */
  if ((zf || sf != of)) goto L_da85fb;
L_da85d7: /* da85d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da85d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da85db: mov ecx, esi */
  ecx = esi;
/* da85dd: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda85e3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da85e3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da85e5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da85e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da85ea: je 0xda85f3 */
  if (zf) goto L_da85f3;
L_da85ec: /* da85ec: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da85ee: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* da85f1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_da85f3: /* da85f3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da85f6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* da85f7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da85f9: jl 0xda85d7 */
  if ((sf != of)) goto L_da85d7;
L_da85fb: /* da85fb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* da85ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8600: mov eax, esi */
  eax = esi;
/* da8602: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8603: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8604: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da860b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da860e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8650(void) {
  LOAD_REGS();
L_da8650: /* da8650: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da8652: push 0xdba629 */
  { uint32_t v = 0xdba629u; esp -= 4; W32(esp, v); }
/* da8657: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da865d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da865e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da8665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8666: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8667: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8668: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8669: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* da866d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8670: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8672: mov esi, ecx */
  esi = ecx;
/* da8674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8675: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* da8679: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xda867fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* da867f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* da8686: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8689: xor ebx, ebx */
  ebx = 0;
/* da868b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da868d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* da8695: jle 0xda86bb */
  if ((zf || sf != of)) goto L_da86bb;
L_da8697: /* da8697: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8699: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da869b: mov ecx, esi */
  ecx = esi;
/* da869d: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda86a3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da86a3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da86a5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da86a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da86aa: je 0xda86b3 */
  if (zf) goto L_da86b3;
L_da86ac: /* da86ac: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da86ae: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* da86b1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_da86b3: /* da86b3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da86b6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* da86b7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da86b9: jl 0xda8697 */
  if ((sf != of)) goto L_da8697;
L_da86bb: /* da86bb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* da86bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da86c0: mov eax, esi */
  eax = esi;
/* da86c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da86c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da86c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da86cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da86ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8710(void) {
  LOAD_REGS();
L_da8710: /* da8710: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da8712: push 0xdba649 */
  { uint32_t v = 0xdba649u; esp -= 4; W32(esp, v); }
/* da8717: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da871d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da871e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da8725: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8726: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8727: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8728: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8729: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* da872d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8730: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8732: mov esi, ecx */
  esi = ecx;
/* da8734: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8735: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* da8739: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xda873fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* da873f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* da8746: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8749: xor ebx, ebx */
  ebx = 0;
/* da874b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da874d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* da8755: jle 0xda877b */
  if ((zf || sf != of)) goto L_da877b;
L_da8757: /* da8757: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8759: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da875b: mov ecx, esi */
  ecx = esi;
/* da875d: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda8763u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da8763: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da8765: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da8768: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da876a: je 0xda8773 */
  if (zf) goto L_da8773;
L_da876c: /* da876c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da876e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* da8771: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_da8773: /* da8773: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8776: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* da8777: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8779: jl 0xda8757 */
  if ((sf != of)) goto L_da8757;
L_da877b: /* da877b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* da877f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8780: mov eax, esi */
  eax = esi;
/* da8782: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8783: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8784: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da878b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da878e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da87d0(void) {
  LOAD_REGS();
L_da87d0: /* da87d0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da87d6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da87d8: push 0xdba669 */
  { uint32_t v = 0xdba669u; esp -= 4; W32(esp, v); }
/* da87dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da87de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da87e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da87e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da87e8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* da87ec: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da87ef: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da87f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da87f2: mov esi, ecx */
  esi = ecx;
/* da87f4: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xda87fau); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* da87fa: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da87fd: xor eax, eax */
  eax = 0;
/* da87ff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da8801: jle 0xda881d */
  if ((zf || sf != of)) goto L_da881d;
L_da8803: /* da8803: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* da8805: mov ebx, dword ptr [ecx + eax*8] */
  ebx = R32((uint32_t)(ecx + eax*8));
/* da8808: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da880a: mov dword ptr [edx + eax*8], ebx */
  W32((uint32_t)(edx + eax*8), ebx);
/* da880d: mov ecx, dword ptr [ecx + eax*8 + 4] */
  ecx = R32((uint32_t)(ecx + eax*8 + 0x4u));
/* da8811: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* da8815: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da8818: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da8819: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da881b: jl 0xda8803 */
  if ((sf != of)) goto L_da8803;
L_da881d: /* da881d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* da8821: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8822: mov eax, esi */
  eax = esi;
/* da8824: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8825: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da882c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da882d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8830: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8860(void) {
  LOAD_REGS();
L_da8860: /* da8860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da8862: push 0xdba689 */
  { uint32_t v = 0xdba689u; esp -= 4; W32(esp, v); }
/* da8867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da886d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da886e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da8875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8876: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8877: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8878: mov esi, ecx */
  esi = ecx;
/* da887a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da887b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* da887f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* da8882: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da8884: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* da888a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* da8892: jge 0xda88a8 */
  if ((sf == of)) goto L_da88a8;
L_da8894: /* da8894: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* da8899: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da889e: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* da88a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda88a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da88a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da88a8: /* da88a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da88ab: jle 0xda88c1 */
  if ((zf || sf != of)) goto L_da88c1;
L_da88ad: /* da88ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* da88b2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da88b7: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* da88bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda88beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da88be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da88c1: /* da88c1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da88c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da88c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da88c6: mov ecx, esi */
  ecx = esi;
/* da88c8: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xda88ceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* da88ce: mov ecx, esi */
  ecx = esi;
/* da88d0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* da88d8: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xda88deu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* da88de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* da88e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da88e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da88e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da88e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da88ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da88ef: ret  */
  esp += 4; SPILL(); return;
}

void f_da8920(void) {
  LOAD_REGS();
L_da8920: /* da8920: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8921: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* da8925: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8926: mov esi, ecx */
  esi = ecx;
/* da8928: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da892a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da892b: je 0xda896d */
  if (zf) goto L_da896d;
L_da892d: /* da892d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* da8930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8931: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da8933: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xda8939u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* da8939: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* da893c: xor edi, edi */
  edi = 0;
/* da893e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da8940: jle 0xda896d */
  if ((zf || sf != of)) goto L_da896d;
L_da8942: /* da8942: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da8944: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da8946: mov ecx, esi */
  ecx = esi;
/* da8948: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda894eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da894e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da8950: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* da8953: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da8955: je 0xda8965 */
  if (zf) goto L_da8965;
L_da8957: /* da8957: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* da8959: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* da895c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* da895e: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* da8962: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_da8965: /* da8965: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* da8968: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* da8969: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da896b: jl 0xda8942 */
  if ((sf != of)) goto L_da8942;
L_da896d: /* da896d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da896e: mov eax, esi */
  eax = esi;
/* da8970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8971: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8972: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da89a0(void) {
  LOAD_REGS();
L_da89a0: /* da89a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da89a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da89a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da89a5: mov esi, ecx */
  esi = ecx;
/* da89a7: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda89adu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da89ad: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da89b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da89b3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* da89b5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* da89b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da89b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da89d0(void) {
  LOAD_REGS();
L_da89d0: /* da89d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da89d2: push 0xdba6a9 */
  { uint32_t v = 0xdba6a9u; esp -= 4; W32(esp, v); }
/* da89d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da89dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da89de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da89e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da89e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da89e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da89e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da89e9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* da89ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da89f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da89f2: mov esi, ecx */
  esi = ecx;
/* da89f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da89f5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* da89f9: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xda89ffu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* da89ff: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* da8a06: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8a09: xor ebx, ebx */
  ebx = 0;
/* da8a0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da8a0d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* da8a15: jle 0xda8a3b */
  if ((zf || sf != of)) goto L_da8a3b;
L_da8a17: /* da8a17: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8a19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da8a1b: mov ecx, esi */
  ecx = esi;
/* da8a1d: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda8a23u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da8a23: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da8a25: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da8a28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da8a2a: je 0xda8a33 */
  if (zf) goto L_da8a33;
L_da8a2c: /* da8a2c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da8a2e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* da8a31: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_da8a33: /* da8a33: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da8a36: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* da8a37: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8a39: jl 0xda8a17 */
  if ((sf != of)) goto L_da8a17;
L_da8a3b: /* da8a3b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* da8a3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8a40: mov eax, esi */
  eax = esi;
/* da8a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8a44: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da8a4b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8a4e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8a90(void) {
  LOAD_REGS();
L_da8a90: /* da8a90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8a91: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* da8a95: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da8a97: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da8a98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8a99: mov esi, dword ptr [0xde88a8] */
  esi = R32((uint32_t)(0xde88a8u));
/* da8a9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8aa0: mov ebp, ecx */
  ebp = ecx;
/* da8aa2: jge 0xda8ab8 */
  if ((sf == of)) goto L_da8ab8;
L_da8aa4: /* da8aa4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* da8aa9: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8aae: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* da8ab3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda8ab5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8ab5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8ab8: /* da8ab8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8abb: jle 0xda8ad1 */
  if ((zf || sf != of)) goto L_da8ad1;
L_da8abd: /* da8abd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* da8ac2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8ac7: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* da8acc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda8aceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8ace: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8ad1: /* da8ad1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* da8ad5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* da8ad8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8adb: jle 0xda8af1 */
  if ((zf || sf != of)) goto L_da8af1;
L_da8add: /* da8add: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* da8ae2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8ae7: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* da8aec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda8aeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8aee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8af1: /* da8af1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8af3: jge 0xda8b11 */
  if ((sf == of)) goto L_da8b11;
L_da8af5: /* da8af5: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* da8af8: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* da8afb: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* da8afd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_da8b00: /* da8b00: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* da8b03: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da8b05: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda8b0bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da8b0b: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da8b0e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* da8b0f: jne 0xda8b00 */
  if (!zf) goto L_da8b00;
L_da8b11: /* da8b11: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* da8b15: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* da8b17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8b18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8b19: mov ecx, ebp */
  ecx = ebp;
/* da8b1b: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xda8b21u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* da8b21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8b22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8b23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da8b24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8b25: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da8b60(void) {
  LOAD_REGS();
L_da8b60: /* da8b60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da8b64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8b65: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8b67: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xda8b6du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* da8b6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8b80(void) {
  LOAD_REGS();
L_da8b80: /* da8b80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8b81: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da8b82: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* da8b88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8b89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8b8a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* da8b8e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da8b90: mov esi, ecx */
  esi = ecx;
/* da8b92: jge 0xda8ba8 */
  if ((sf == of)) goto L_da8ba8;
L_da8b94: /* da8b94: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* da8b99: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8b9e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* da8ba3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda8ba5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8ba5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8ba8: /* da8ba8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8bab: jle 0xda8bc1 */
  if ((zf || sf != of)) goto L_da8bc1;
L_da8bad: /* da8bad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* da8bb2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8bb7: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* da8bbc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda8bbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8bbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8bc1: /* da8bc1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* da8bc5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da8bc8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* da8bcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8bcd: jle 0xda8be3 */
  if ((zf || sf != of)) goto L_da8be3;
L_da8bcf: /* da8bcf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* da8bd4: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8bd9: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* da8bde: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda8be0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8be0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8be3: /* da8be3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8be5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8be6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8be7: mov ecx, esi */
  ecx = esi;
/* da8be9: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xda8befu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* da8bef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8bf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8bf1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da8bf2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8bf3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da8c20(void) {
  LOAD_REGS();
L_da8c20: /* da8c20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da8c24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8c25: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8c27: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xda8c2du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* da8c2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8c40(void) {
  LOAD_REGS();
L_da8c40: /* da8c40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8c41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da8c42: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* da8c48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8c49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8c4a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* da8c4e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da8c50: mov esi, ecx */
  esi = ecx;
/* da8c52: jge 0xda8c68 */
  if ((sf == of)) goto L_da8c68;
L_da8c54: /* da8c54: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* da8c59: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8c5e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* da8c63: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda8c65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8c65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8c68: /* da8c68: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8c6b: jle 0xda8c81 */
  if ((zf || sf != of)) goto L_da8c81;
L_da8c6d: /* da8c6d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* da8c72: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8c77: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* da8c7c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda8c7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8c7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8c81: /* da8c81: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* da8c85: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da8c88: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* da8c8b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da8c8d: jle 0xda8ca3 */
  if ((zf || sf != of)) goto L_da8ca3;
L_da8c8f: /* da8c8f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* da8c94: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da8c99: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* da8c9e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda8ca0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8ca0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da8ca3: /* da8ca3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8ca5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8ca6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8ca7: mov ecx, esi */
  ecx = esi;
/* da8ca9: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xda8cafu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* da8caf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da8cb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da8cb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da8cb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da8cb3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da8ce0(void) {
  LOAD_REGS();
L_da8ce0: /* da8ce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da8ce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8ce5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8ce7: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xda8cedu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* da8ced: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8d00(void) {
  LOAD_REGS();
L_da8d00: /* da8d00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da8d04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8d05: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da8d07: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xda8d0du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* da8d0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da8d20(void) {
  LOAD_REGS();
L_da8d20: /* da8d20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da8d21: mov ebp, esp */
  ebp = esp;
/* da8d23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da8d25: push 0xdba6c9 */
  { uint32_t v = 0xdba6c9u; esp -= 4; W32(esp, v); }
/* da8d2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da8d30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8d31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da8d38: sub esp, 0x210 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da8d3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da8d3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8d40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da8d41: mov esi, ecx */
  esi = ecx;
/* da8d43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da8d46: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* da8d49: call dword ptr [0xde8adc] */
  esp -= 4; W32(esp, 0xda8d4fu); SPILL(); f_4e22e3(); if (g_unwind) return; /* Core!??0USubsystem@@IAE@XZ */ RELOAD();
/* da8d4f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da8d56: mov dword ptr [esi], 0xdc4180 */
  W32((uint32_t)(esi), 0xdc4180u);
/* da8d5c: mov dword ptr [esi + 0x28], 0xdc4178 */
  W32((uint32_t)(esi + 0x28u), 0xdc4178u);
/* da8d63: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* da8d67: call dword ptr [0xde8874] */
  esp -= 4; W32(esp, 0xda8d6du); SPILL(); call_ind(R32(0xde8874u)); if (g_unwind) return; /* COMCTL32!#17 */ RELOAD();
/* da8d6d: push 0xde4bac */
  { uint32_t v = 0xde4bacu; esp -= 4; W32(esp, v); }
/* da8d72: call dword ptr [0xde8d10] */
  esp -= 4; W32(esp, 0xda8d78u); SPILL(); call_ind(R32(0xde8d10u)); if (g_unwind) return; /* KERNEL32!GetModuleHandleW */ RELOAD();
/* da8d78: mov edi, dword ptr [0xde8d0c] */
  edi = R32((uint32_t)(0xde8d0cu));
/* da8d7e: mov esi, eax */
  esi = eax;
/* da8d80: push 0xde4b94 */
  { uint32_t v = 0xde4b94u; esp -= 4; W32(esp, v); }
/* da8d85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8d86: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda8d88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8d88: push 0xde4b78 */
  { uint32_t v = 0xde4b78u; esp -= 4; W32(esp, v); }
/* da8d8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8d8e: mov dword ptr [0xde51cc], eax */
  W32((uint32_t)(0xde51ccu), eax);
/* da8d93: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda8d95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8d95: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* da8d9b: mov dword ptr [0xde51a0], eax */
  W32((uint32_t)(0xde51a0u), eax);
/* da8da0: mov eax, dword ptr [0xde5034] */
  eax = R32((uint32_t)(0xde5034u));
/* da8da5: mov dword ptr [0xde50e8], eax */
  W32((uint32_t)(0xde50e8u), eax);
/* da8daa: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da8dad: push 0xde4b58 */
  { uint32_t v = 0xde4b58u; esp -= 4; W32(esp, v); }
/* da8db2: je 0xda8dc2 */
  if (zf) goto L_da8dc2;
L_da8db4: /* da8db4: call dword ptr [0xde8d08] */
  esp -= 4; W32(esp, 0xda8dbau); SPILL(); call_ind(R32(0xde8d08u)); if (g_unwind) return; /* KERNEL32!LoadLibraryW */ RELOAD();
/* da8dba: mov ebx, dword ptr [0xde88c8] */
  ebx = R32((uint32_t)(0xde88c8u));
/* da8dc0: jmp 0xda8e16 */
  goto L_da8e16;
L_da8dc2: /* da8dc2: mov ebx, dword ptr [0xde88c8] */
  ebx = R32((uint32_t)(0xde88c8u));
/* da8dc8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda8dcau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8dca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8dcd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da8dcf: jne 0xda8dd5 */
  if (!zf) goto L_da8dd5;
L_da8dd1: /* da8dd1: xor esi, esi */
  esi = 0;
/* da8dd3: jmp 0xda8df5 */
  goto L_da8df5;
L_da8dd5: /* da8dd5: push 0xde4b58 */
  { uint32_t v = 0xde4b58u; esp -= 4; W32(esp, v); }
/* da8dda: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda8ddcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8ddc: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da8ddf: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da8de2: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da8de5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8de8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da8deb: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda8df0u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da8df0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da8df3: mov esi, esp */
  esi = esp;
L_da8df5: /* da8df5: push 0xde4b58 */
  { uint32_t v = 0xde4b58u; esp -= 4; W32(esp, v); }
/* da8dfa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda8dfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da8dfc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8dff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8e00: push 0xde4b58 */
  { uint32_t v = 0xde4b58u; esp -= 4; W32(esp, v); }
/* da8e05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da8e06: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda8e0cu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da8e0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8e0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8e10: call dword ptr [0xde8d04] */
  esp -= 4; W32(esp, 0xda8e16u); SPILL(); call_ind(R32(0xde8d04u)); if (g_unwind) return; /* KERNEL32!LoadLibraryA */ RELOAD();
L_da8e16: /* da8e16: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da8e1c: push 0xde47e8 */
  { uint32_t v = 0xde47e8u; esp -= 4; W32(esp, v); }
/* da8e21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da8e22: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8e27u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8e27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8e2a: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da8e30: push 0xde4b44 */
  { uint32_t v = 0xde4b44u; esp -= 4; W32(esp, v); }
/* da8e35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8e36: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8e3bu); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8e3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8e3e: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da8e44: push 0xde4824 */
  { uint32_t v = 0xde4824u; esp -= 4; W32(esp, v); }
/* da8e49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8e4a: mov dword ptr [0xde5160], eax */
  W32((uint32_t)(0xde5160u), eax);
/* da8e4f: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8e54u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8e54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8e57: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da8e5d: push 0xde4b44 */
  { uint32_t v = 0xde4b44u; esp -= 4; W32(esp, v); }
/* da8e62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da8e63: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8e68u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8e68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8e6b: mov dword ptr [0xde5160], eax */
  W32((uint32_t)(0xde5160u), eax);
/* da8e70: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da8e76: push 0xde4800 */
  { uint32_t v = 0xde4800u; esp -= 4; W32(esp, v); }
/* da8e7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8e7c: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8e81u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8e81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8e84: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da8e8a: push 0xde4b44 */
  { uint32_t v = 0xde4b44u; esp -= 4; W32(esp, v); }
/* da8e8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8e90: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8e95u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8e95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8e98: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da8e9e: push 0xde45e8 */
  { uint32_t v = 0xde45e8u; esp -= 4; W32(esp, v); }
/* da8ea3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da8ea4: mov dword ptr [0xde519c], eax */
  W32((uint32_t)(0xde519cu), eax);
/* da8ea9: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8eaeu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8eae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8eb1: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da8eb7: push 0xde4b34 */
  { uint32_t v = 0xde4b34u; esp -= 4; W32(esp, v); }
/* da8ebc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8ebd: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8ec2u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8ec2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8ec5: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da8ecb: push 0xde460c */
  { uint32_t v = 0xde460cu; esp -= 4; W32(esp, v); }
/* da8ed0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8ed1: mov dword ptr [0xde5190], eax */
  W32((uint32_t)(0xde5190u), eax);
/* da8ed6: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8edbu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8edb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8ede: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da8ee4: push 0xde4b34 */
  { uint32_t v = 0xde4b34u; esp -= 4; W32(esp, v); }
/* da8ee9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da8eea: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8eefu); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8eef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8ef2: mov dword ptr [0xde50e0], eax */
  W32((uint32_t)(0xde50e0u), eax);
/* da8ef7: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da8efd: push 0xde1dbc */
  { uint32_t v = 0xde1dbcu; esp -= 4; W32(esp, v); }
/* da8f02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8f03: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8f08u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8f08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8f0b: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da8f11: push 0xde4b0c */
  { uint32_t v = 0xde4b0cu; esp -= 4; W32(esp, v); }
/* da8f16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8f17: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8f1cu); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8f1c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8f1f: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da8f25: push 0xde1e0c */
  { uint32_t v = 0xde1e0cu; esp -= 4; W32(esp, v); }
/* da8f2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da8f2b: mov dword ptr [0xde51a4], eax */
  W32((uint32_t)(0xde51a4u), eax);
/* da8f30: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8f35u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8f35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8f38: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da8f3e: push 0xde4afc */
  { uint32_t v = 0xde4afcu; esp -= 4; W32(esp, v); }
/* da8f43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8f44: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8f49u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8f49: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8f4c: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da8f52: push 0xde4568 */
  { uint32_t v = 0xde4568u; esp -= 4; W32(esp, v); }
/* da8f57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8f58: mov dword ptr [0xde5198], eax */
  W32((uint32_t)(0xde5198u), eax);
/* da8f5d: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8f62u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8f62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8f65: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da8f6b: push 0xde4b34 */
  { uint32_t v = 0xde4b34u; esp -= 4; W32(esp, v); }
/* da8f70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da8f71: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8f76u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8f76: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8f79: mov dword ptr [0xde5028], eax */
  W32((uint32_t)(0xde5028u), eax);
/* da8f7e: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da8f84: push 0xde45c8 */
  { uint32_t v = 0xde45c8u; esp -= 4; W32(esp, v); }
/* da8f89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8f8a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8f8fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8f8f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8f92: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da8f98: push 0xde4afc */
  { uint32_t v = 0xde4afcu; esp -= 4; W32(esp, v); }
/* da8f9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8f9e: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8fa3u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8fa3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8fa6: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da8fac: push 0xde483c */
  { uint32_t v = 0xde483cu; esp -= 4; W32(esp, v); }
/* da8fb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da8fb2: mov dword ptr [0xde50ec], eax */
  W32((uint32_t)(0xde50ecu), eax);
/* da8fb7: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8fbcu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8fbc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8fbf: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da8fc5: push 0xde4ad8 */
  { uint32_t v = 0xde4ad8u; esp -= 4; W32(esp, v); }
/* da8fca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da8fcb: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8fd0u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8fd0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8fd3: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da8fd9: push 0xde3590 */
  { uint32_t v = 0xde3590u; esp -= 4; W32(esp, v); }
/* da8fde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da8fdf: mov dword ptr [0xde5194], eax */
  W32((uint32_t)(0xde5194u), eax);
/* da8fe4: call 0xd8218f */
  esp -= 4; W32(esp, 0xda8fe9u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da8fe9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da8fec: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da8ff2: push 0xde4acc */
  { uint32_t v = 0xde4accu; esp -= 4; W32(esp, v); }
/* da8ff7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da8ff8: call 0xd8286f */
  esp -= 4; W32(esp, 0xda8ffdu); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da8ffd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9000: mov dword ptr [0xde5164], eax */
  W32((uint32_t)(0xde5164u), eax);
/* da9005: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da900b: push 0xde471c */
  { uint32_t v = 0xde471cu; esp -= 4; W32(esp, v); }
/* da9010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9011: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9016u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9016: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9019: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da901f: push 0xde4ab4 */
  { uint32_t v = 0xde4ab4u; esp -= 4; W32(esp, v); }
/* da9024: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9025: call 0xd8286f */
  esp -= 4; W32(esp, 0xda902au); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da902a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da902d: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da9033: push 0xde3578 */
  { uint32_t v = 0xde3578u; esp -= 4; W32(esp, v); }
/* da9038: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9039: mov dword ptr [0xde5020], eax */
  W32((uint32_t)(0xde5020u), eax);
/* da903e: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9043u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9043: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9046: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da904c: push 0xde4a9c */
  { uint32_t v = 0xde4a9cu; esp -= 4; W32(esp, v); }
/* da9051: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9052: call 0xd8286f */
  esp -= 4; W32(esp, 0xda9057u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da9057: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da905a: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da9060: push 0xde4758 */
  { uint32_t v = 0xde4758u; esp -= 4; W32(esp, v); }
/* da9065: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9066: mov dword ptr [0xde5018], eax */
  W32((uint32_t)(0xde5018u), eax);
/* da906b: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9070u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9070: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9073: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da9079: push 0xde4acc */
  { uint32_t v = 0xde4accu; esp -= 4; W32(esp, v); }
/* da907e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da907f: call 0xd8286f */
  esp -= 4; W32(esp, 0xda9084u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da9084: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9087: mov dword ptr [0xde5164], eax */
  W32((uint32_t)(0xde5164u), eax);
/* da908c: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da9092: push 0xde3548 */
  { uint32_t v = 0xde3548u; esp -= 4; W32(esp, v); }
/* da9097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9098: call 0xd8218f */
  esp -= 4; W32(esp, 0xda909du); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da909d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da90a0: push 0xde4b34 */
  { uint32_t v = 0xde4b34u; esp -= 4; W32(esp, v); }
/* da90a5: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da90ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da90ac: call 0xd8286f */
  esp -= 4; W32(esp, 0xda90b1u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da90b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da90b4: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da90ba: push 0xde45a4 */
  { uint32_t v = 0xde45a4u; esp -= 4; W32(esp, v); }
/* da90bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da90c0: mov dword ptr [0xde5030], eax */
  W32((uint32_t)(0xde5030u), eax);
/* da90c5: call 0xd8218f */
  esp -= 4; W32(esp, 0xda90cau); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da90ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da90cd: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da90d3: push 0xde4afc */
  { uint32_t v = 0xde4afcu; esp -= 4; W32(esp, v); }
/* da90d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da90d9: call 0xd8286f */
  esp -= 4; W32(esp, 0xda90deu); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da90de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da90e1: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da90e7: push 0xde1e1c */
  { uint32_t v = 0xde1e1cu; esp -= 4; W32(esp, v); }
/* da90ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da90ed: mov dword ptr [0xde50d4], eax */
  W32((uint32_t)(0xde50d4u), eax);
/* da90f2: call 0xd8218f */
  esp -= 4; W32(esp, 0xda90f7u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da90f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da90fa: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da9100: push 0xde4a74 */
  { uint32_t v = 0xde4a74u; esp -= 4; W32(esp, v); }
/* da9105: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9106: call 0xd8286f */
  esp -= 4; W32(esp, 0xda910bu); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da910b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da910e: mov dword ptr [0xde51b4], eax */
  W32((uint32_t)(0xde51b4u), eax);
/* da9113: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da9119: push 0xde355c */
  { uint32_t v = 0xde355cu; esp -= 4; W32(esp, v); }
/* da911e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da911f: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9124u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9124: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9127: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da912d: push 0xde4b34 */
  { uint32_t v = 0xde4b34u; esp -= 4; W32(esp, v); }
/* da9132: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9133: call 0xd8286f */
  esp -= 4; W32(esp, 0xda9138u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da9138: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da913b: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da9141: push 0xde4700 */
  { uint32_t v = 0xde4700u; esp -= 4; W32(esp, v); }
/* da9146: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9147: mov dword ptr [0xde517c], eax */
  W32((uint32_t)(0xde517cu), eax);
/* da914c: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9151u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9151: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9154: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da915a: push 0xde4b34 */
  { uint32_t v = 0xde4b34u; esp -= 4; W32(esp, v); }
/* da915f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9160: call 0xd8286f */
  esp -= 4; W32(esp, 0xda9165u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da9165: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9168: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da916e: push 0xde46b4 */
  { uint32_t v = 0xde46b4u; esp -= 4; W32(esp, v); }
/* da9173: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9174: mov dword ptr [0xde5174], eax */
  W32((uint32_t)(0xde5174u), eax);
/* da9179: call 0xd8218f */
  esp -= 4; W32(esp, 0xda917eu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da917e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9181: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da9187: push 0xde4b34 */
  { uint32_t v = 0xde4b34u; esp -= 4; W32(esp, v); }
/* da918c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da918d: call 0xd8286f */
  esp -= 4; W32(esp, 0xda9192u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da9192: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9195: mov dword ptr [0xde518c], eax */
  W32((uint32_t)(0xde518cu), eax);
/* da919a: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da91a0: push 0xde46cc */
  { uint32_t v = 0xde46ccu; esp -= 4; W32(esp, v); }
/* da91a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da91a6: call 0xd8218f */
  esp -= 4; W32(esp, 0xda91abu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da91ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da91ae: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da91b4: push 0xde4a5c */
  { uint32_t v = 0xde4a5cu; esp -= 4; W32(esp, v); }
/* da91b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da91ba: call 0xd8286f */
  esp -= 4; W32(esp, 0xda91bfu); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da91bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da91c2: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da91c8: push 0xde46e8 */
  { uint32_t v = 0xde46e8u; esp -= 4; W32(esp, v); }
/* da91cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da91ce: mov dword ptr [0xde50f4], eax */
  W32((uint32_t)(0xde50f4u), eax);
/* da91d3: call 0xd8218f */
  esp -= 4; W32(esp, 0xda91d8u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da91d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da91db: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da91e1: push 0xde4a38 */
  { uint32_t v = 0xde4a38u; esp -= 4; W32(esp, v); }
/* da91e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da91e7: call 0xd8286f */
  esp -= 4; W32(esp, 0xda91ecu); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da91ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da91ef: mov dword ptr [0xde5154], eax */
  W32((uint32_t)(0xde5154u), eax);
/* da91f4: push 0xde35a0 */
  { uint32_t v = 0xde35a0u; esp -= 4; W32(esp, v); }
/* da91f9: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da91ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9200: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9205u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9205: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9208: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da920e: push 0xde4a0c */
  { uint32_t v = 0xde4a0cu; esp -= 4; W32(esp, v); }
/* da9213: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9214: call 0xd8286f */
  esp -= 4; W32(esp, 0xda9219u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da9219: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da921c: mov dword ptr [0xde51a8], eax */
  W32((uint32_t)(0xde51a8u), eax);
/* da9221: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da9227: push 0xde47c8 */
  { uint32_t v = 0xde47c8u; esp -= 4; W32(esp, v); }
/* da922c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da922d: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9232u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9232: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9235: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da923b: push 0xde49e0 */
  { uint32_t v = 0xde49e0u; esp -= 4; W32(esp, v); }
/* da9240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9241: call 0xd8286f */
  esp -= 4; W32(esp, 0xda9246u); SPILL(); f_d8286f(); if (g_unwind) return; RELOAD();
/* da9246: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9249: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da924f: push 0xde477c */
  { uint32_t v = 0xde477cu; esp -= 4; W32(esp, v); }
/* da9254: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9255: mov dword ptr [0xde50d8], eax */
  W32((uint32_t)(0xde50d8u), eax);
/* da925a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda925fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da925f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9262: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da9268: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da926a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da926b: call 0xd8222a */
  esp -= 4; W32(esp, 0xda9270u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da9270: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9273: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da9279: push 0xde4794 */
  { uint32_t v = 0xde4794u; esp -= 4; W32(esp, v); }
/* da927e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da927f: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9284u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9284: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9287: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da928d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da928f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9290: call 0xd8222a */
  esp -= 4; W32(esp, 0xda9295u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da9295: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9298: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da929e: push 0xde47a0 */
  { uint32_t v = 0xde47a0u; esp -= 4; W32(esp, v); }
/* da92a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da92a4: call 0xd8218f */
  esp -= 4; W32(esp, 0xda92a9u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da92a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da92ac: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da92b2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da92b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da92b5: call 0xd8222a */
  esp -= 4; W32(esp, 0xda92bau); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da92ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da92bd: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da92c3: push 0xde4854 */
  { uint32_t v = 0xde4854u; esp -= 4; W32(esp, v); }
/* da92c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da92c9: call 0xd8218f */
  esp -= 4; W32(esp, 0xda92ceu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da92ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da92d1: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da92d7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da92d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da92da: call 0xd8222a */
  esp -= 4; W32(esp, 0xda92dfu); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da92df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da92e2: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da92e8: push 0xde4870 */
  { uint32_t v = 0xde4870u; esp -= 4; W32(esp, v); }
/* da92ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da92ee: call 0xd8218f */
  esp -= 4; W32(esp, 0xda92f3u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da92f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da92f6: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da92fc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da92fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da92ff: call 0xd8222a */
  esp -= 4; W32(esp, 0xda9304u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da9304: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9307: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da930d: push 0xde48c4 */
  { uint32_t v = 0xde48c4u; esp -= 4; W32(esp, v); }
/* da9312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9313: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9318u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9318: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da931b: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da9321: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da9323: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9324: call 0xd8222a */
  esp -= 4; W32(esp, 0xda9329u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da9329: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da932c: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da9332: push 0xde489c */
  { uint32_t v = 0xde489cu; esp -= 4; W32(esp, v); }
/* da9337: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9338: call 0xd8218f */
  esp -= 4; W32(esp, 0xda933du); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da933d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9340: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da9346: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da9348: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9349: call 0xd8222a */
  esp -= 4; W32(esp, 0xda934eu); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da934e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9351: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da9357: push 0xde490c */
  { uint32_t v = 0xde490cu; esp -= 4; W32(esp, v); }
/* da935c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da935d: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9362u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9362: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9365: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da936b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da936d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da936e: call 0xd8222a */
  esp -= 4; W32(esp, 0xda9373u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da9373: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9376: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da937c: push 0xde48f0 */
  { uint32_t v = 0xde48f0u; esp -= 4; W32(esp, v); }
/* da9381: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9382: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9387u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9387: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da938a: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da9390: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9392: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9393: call 0xd8222a */
  esp -= 4; W32(esp, 0xda9398u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da9398: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da939b: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da93a1: push 0xde35b8 */
  { uint32_t v = 0xde35b8u; esp -= 4; W32(esp, v); }
/* da93a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da93a7: call 0xd8218f */
  esp -= 4; W32(esp, 0xda93acu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da93ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da93af: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da93b5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da93b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da93b8: call 0xd8222a */
  esp -= 4; W32(esp, 0xda93bdu); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da93bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da93c0: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da93c6: push 0xde4674 */
  { uint32_t v = 0xde4674u; esp -= 4; W32(esp, v); }
/* da93cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da93cc: call 0xd8218f */
  esp -= 4; W32(esp, 0xda93d1u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da93d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da93d4: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da93da: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da93dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da93dd: call 0xd8222a */
  esp -= 4; W32(esp, 0xda93e2u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da93e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da93e5: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da93eb: push 0xde4698 */
  { uint32_t v = 0xde4698u; esp -= 4; W32(esp, v); }
/* da93f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da93f1: call 0xd8218f */
  esp -= 4; W32(esp, 0xda93f6u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da93f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da93f9: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da93ff: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da9401: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9402: call 0xd8222a */
  esp -= 4; W32(esp, 0xda9407u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da9407: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da940a: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da9410: push 0xde462c */
  { uint32_t v = 0xde462cu; esp -= 4; W32(esp, v); }
/* da9415: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9416: call 0xd8218f */
  esp -= 4; W32(esp, 0xda941bu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da941b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da941e: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da9424: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da9426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9427: call 0xd8222a */
  esp -= 4; W32(esp, 0xda942cu); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da942c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da942f: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da9435: push 0xde4650 */
  { uint32_t v = 0xde4650u; esp -= 4; W32(esp, v); }
/* da943a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da943b: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9440u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9440: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9443: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da9449: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da944b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da944c: call 0xd8222a */
  esp -= 4; W32(esp, 0xda9451u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da9451: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9454: push 0xde4580 */
  { uint32_t v = 0xde4580u; esp -= 4; W32(esp, v); }
/* da9459: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da945f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9460: call 0xd8218f */
  esp -= 4; W32(esp, 0xda9465u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da9465: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9468: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da946e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da9470: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9471: call 0xd8222a */
  esp -= 4; W32(esp, 0xda9476u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da9476: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9479: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da947f: push 0xde4954 */
  { uint32_t v = 0xde4954u; esp -= 4; W32(esp, v); }
/* da9484: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9485: call 0xd8218f */
  esp -= 4; W32(esp, 0xda948au); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da948a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da948d: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da9493: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da9495: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9496: call 0xd8222a */
  esp -= 4; W32(esp, 0xda949bu); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da949b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da949e: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da94a4: push 0xde4930 */
  { uint32_t v = 0xde4930u; esp -= 4; W32(esp, v); }
/* da94a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da94aa: call 0xd8218f */
  esp -= 4; W32(esp, 0xda94afu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da94af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da94b2: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* da94b8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da94ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da94bb: call 0xd8222a */
  esp -= 4; W32(esp, 0xda94c0u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da94c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da94c3: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* da94c9: push 0xde496c */
  { uint32_t v = 0xde496cu; esp -= 4; W32(esp, v); }
/* da94ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da94cf: call 0xd8218f */
  esp -= 4; W32(esp, 0xda94d4u); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da94d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da94d7: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* da94dd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da94df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da94e0: call 0xd8222a */
  esp -= 4; W32(esp, 0xda94e5u); SPILL(); f_d8222a(); if (g_unwind) return; RELOAD();
/* da94e5: mov esi, dword ptr [0xde8c80] */
  esi = R32((uint32_t)(0xde8c80u));
/* da94eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da94ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da94f0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda94f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da94f2: push 0xffffff */
  { uint32_t v = 0xffffffu; esp -= 4; W32(esp, v); }
/* da94f7: mov dword ptr [0xde50e4], eax */
  W32((uint32_t)(0xde50e4u), eax);
/* da94fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda94feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da94fe: push 0xe0e0e0 */
  { uint32_t v = 0xe0e0e0u; esp -= 4; W32(esp, v); }
/* da9503: mov dword ptr [0xde5168], eax */
  W32((uint32_t)(0xde5168u), eax);
/* da9508: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda950au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da950a: push 0xc8c8c8 */
  { uint32_t v = 0xc8c8c8u; esp -= 4; W32(esp, v); }
/* da950f: mov dword ptr [0xde50f0], eax */
  W32((uint32_t)(0xde50f0u), eax);
/* da9514: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9516u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9516: push 0xa0a0a0 */
  { uint32_t v = 0xa0a0a0u; esp -= 4; W32(esp, v); }
/* da951b: mov dword ptr [0xde5170], eax */
  W32((uint32_t)(0xde5170u), eax);
/* da9520: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9522u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9522: push 0x404040 */
  { uint32_t v = 0x404040u; esp -= 4; W32(esp, v); }
/* da9527: mov dword ptr [0xde5180], eax */
  W32((uint32_t)(0xde5180u), eax);
/* da952c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda952eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da952e: push 0x808080 */
  { uint32_t v = 0x808080u; esp -= 4; W32(esp, v); }
/* da9533: mov dword ptr [0xde516c], eax */
  W32((uint32_t)(0xde516cu), eax);
/* da9538: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda953au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da953a: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* da953c: mov dword ptr [0xde5158], eax */
  W32((uint32_t)(0xde5158u), eax);
/* da9541: call dword ptr [0xde8eec] */
  esp -= 4; W32(esp, 0xda9547u); SPILL(); call_ind(R32(0xde8eecu)); if (g_unwind) return; /* USER32!GetSysColor */ RELOAD();
/* da9547: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9548: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda954au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da954a: push 0xa0a0a0 */
  { uint32_t v = 0xa0a0a0u; esp -= 4; W32(esp, v); }
/* da954f: mov dword ptr [0xde5024], eax */
  W32((uint32_t)(0xde5024u), eax);
/* da9554: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9556u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9556: push 0xb4b4b4 */
  { uint32_t v = 0xb4b4b4u; esp -= 4; W32(esp, v); }
/* da955b: mov dword ptr [0xde5184], eax */
  W32((uint32_t)(0xde5184u), eax);
/* da9560: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9562u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9562: push 0xc5c5c5 */
  { uint32_t v = 0xc5c5c5u; esp -= 4; W32(esp, v); }
/* da9567: mov dword ptr [0xde515c], eax */
  W32((uint32_t)(0xde515cu), eax);
/* da956c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda956eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da956e: push 0xc8c800 */
  { uint32_t v = 0xc8c800u; esp -= 4; W32(esp, v); }
/* da9573: mov dword ptr [0xde5150], eax */
  W32((uint32_t)(0xde5150u), eax);
/* da9578: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda957au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da957a: push 0x8c8c00 */
  { uint32_t v = 0x8c8c00u; esp -= 4; W32(esp, v); }
/* da957f: mov dword ptr [0xde5178], eax */
  W32((uint32_t)(0xde5178u), eax);
/* da9584: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9586u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9586: mov dword ptr [0xde5188], eax */
  W32((uint32_t)(0xde5188u), eax);
/* da958b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da958d: call dword ptr [0xde8ed0] */
  esp -= 4; W32(esp, 0xda9593u); SPILL(); call_ind(R32(0xde8ed0u)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* da9593: mov esi, dword ptr [0xde8c84] */
  esi = R32((uint32_t)(0xde8c84u));
/* da9599: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* da959b: mov edi, eax */
  edi = eax;
/* da959d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda959fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da959f: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* da95a1: mov dword ptr [0xde51ac], eax */
  W32((uint32_t)(0xde51acu), eax);
/* da95a6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda95a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da95a8: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* da95aa: mov dword ptr [0xde51b8], eax */
  W32((uint32_t)(0xde51b8u), eax);
/* da95af: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda95b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da95b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da95b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da95b4: mov dword ptr [0xde50d0], eax */
  W32((uint32_t)(0xde50d0u), eax);
/* da95b9: call dword ptr [0xde8ed4] */
  esp -= 4; W32(esp, 0xda95bfu); SPILL(); call_ind(R32(0xde8ed4u)); if (g_unwind) return; /* USER32!ReleaseDC */ RELOAD();
/* da95bf: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* da95c5: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da95c8: push 0xde49c4 */
  { uint32_t v = 0xde49c4u; esp -= 4; W32(esp, v); }
/* da95cd: je 0xda95d7 */
  if (zf) goto L_da95d7;
L_da95cf: /* da95cf: call dword ptr [0xde8e68] */
  esp -= 4; W32(esp, 0xda95d5u); SPILL(); call_ind(R32(0xde8e68u)); if (g_unwind) return; /* USER32!RegisterWindowMessageW */ RELOAD();
/* da95d5: jmp 0xda9625 */
  goto L_da9625;
L_da95d7: /* da95d7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda95d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da95d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da95dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da95de: jne 0xda95e4 */
  if (!zf) goto L_da95e4;
L_da95e0: /* da95e0: xor esi, esi */
  esi = 0;
/* da95e2: jmp 0xda9604 */
  goto L_da9604;
L_da95e4: /* da95e4: push 0xde49c4 */
  { uint32_t v = 0xde49c4u; esp -= 4; W32(esp, v); }
/* da95e9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda95ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da95eb: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da95ee: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da95f1: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da95f4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da95f7: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da95fa: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda95ffu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da95ff: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da9602: mov esi, esp */
  esi = esp;
L_da9604: /* da9604: push 0xde49c4 */
  { uint32_t v = 0xde49c4u; esp -= 4; W32(esp, v); }
/* da9609: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda960bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da960b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da960e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da960f: push 0xde49c4 */
  { uint32_t v = 0xde49c4u; esp -= 4; W32(esp, v); }
/* da9614: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da9615: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda961bu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da961b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da961e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da961f: call dword ptr [0xde8ea0] */
  esp -= 4; W32(esp, 0xda9625u); SPILL(); call_ind(R32(0xde8ea0u)); if (g_unwind) return; /* USER32!RegisterWindowMessageA */ RELOAD();
L_da9625: /* da9625: mov dword ptr [0xde502c], eax */
  W32((uint32_t)(0xde502cu), eax);
/* da962a: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da962f: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da9632: push 0xde499c */
  { uint32_t v = 0xde499cu; esp -= 4; W32(esp, v); }
/* da9637: je 0xda9641 */
  if (zf) goto L_da9641;
L_da9639: /* da9639: call dword ptr [0xde8e68] */
  esp -= 4; W32(esp, 0xda963fu); SPILL(); call_ind(R32(0xde8e68u)); if (g_unwind) return; /* USER32!RegisterWindowMessageW */ RELOAD();
/* da963f: jmp 0xda968f */
  goto L_da968f;
L_da9641: /* da9641: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda9643u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9643: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9646: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da9648: jne 0xda964e */
  if (!zf) goto L_da964e;
L_da964a: /* da964a: xor esi, esi */
  esi = 0;
/* da964c: jmp 0xda966e */
  goto L_da966e;
L_da964e: /* da964e: push 0xde499c */
  { uint32_t v = 0xde499cu; esp -= 4; W32(esp, v); }
/* da9653: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda9655u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9655: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da9658: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da965b: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da965e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9661: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da9664: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda9669u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da9669: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da966c: mov esi, esp */
  esi = esp;
L_da966e: /* da966e: push 0xde499c */
  { uint32_t v = 0xde499cu; esp -= 4; W32(esp, v); }
/* da9673: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda9675u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9675: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9679: push 0xde499c */
  { uint32_t v = 0xde499cu; esp -= 4; W32(esp, v); }
/* da967e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da967f: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda9685u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da9685: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9688: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9689: call dword ptr [0xde8ea0] */
  esp -= 4; W32(esp, 0xda968fu); SPILL(); call_ind(R32(0xde8ea0u)); if (g_unwind) return; /* USER32!RegisterWindowMessageA */ RELOAD();
L_da968f: /* da968f: mov dword ptr [0xde50dc], eax */
  W32((uint32_t)(0xde50dcu), eax);
/* da9694: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* da9697: lea esp, [ebp - 0x228] */
  esp = (uint32_t)(ebp + 0xfffffdd8u);
/* da969d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da96a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da96a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da96a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da96a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da96aa: mov esp, ebp */
  esp = ebp;
/* da96ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da96ad: ret  */
  esp += 4; SPILL(); return;
}

void f_da96ae(void) {
  LOAD_REGS();
L_da96ae: /* da96ae: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* da96b1: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da96b6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* da96b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da96ba: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da96bd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda96c2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da96c2(); return;
}

void f_da96c2(void) {
  LOAD_REGS();
L_da96c2: /* da96c2: push 0xdc412c */
  { uint32_t v = 0xdc412cu; esp -= 4; W32(esp, v); }
/* da96c7: push 0xde1dd8 */
  { uint32_t v = 0xde1dd8u; esp -= 4; W32(esp, v); }
/* da96cc: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda96d2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da96d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da96d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da96d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da96d9: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda96deu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da96de: guest_badaddr(0xda96de); return;
}

void f_da9950(void) {
  LOAD_REGS();
L_da9950: /* da9950: xor eax, eax */
  eax = 0;
/* da9952: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da9970(void) {
  LOAD_REGS();
L_da9970: /* da9970: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da9971: mov esi, ecx */
  esi = ecx;
/* da9973: call 0xd821a8 */
  esp -= 4; W32(esp, 0xda9978u); SPILL(); f_d821a8(); if (g_unwind) return; RELOAD();
/* da9978: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da997d: je 0xda998b */
  if (zf) goto L_da998b;
L_da997f: /* da997f: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* da9981: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da9982: call dword ptr [0xde8ae0] */
  esp -= 4; W32(esp, 0xda9988u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* da9988: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da998b: /* da998b: mov eax, esi */
  eax = esi;
/* da998d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da998e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da99b0(void) {
  LOAD_REGS();
L_da99b0: /* da99b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da99b2: push 0xdba6e9 */
  { uint32_t v = 0xdba6e9u; esp -= 4; W32(esp, v); }
/* da99b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da99bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da99be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da99c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da99c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da99c7: mov esi, ecx */
  esi = ecx;
/* da99c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* da99cd: mov dword ptr [esi], 0xdc4180 */
  W32((uint32_t)(esi), 0xdc4180u);
/* da99d3: mov dword ptr [esi + 0x28], 0xdc4178 */
  W32((uint32_t)(esi + 0x28u), 0xdc4178u);
/* da99da: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* da99e2: call dword ptr [0xde8ae4] */
  esp -= 4; W32(esp, 0xda99e8u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* da99e8: mov ecx, esi */
  ecx = esi;
/* da99ea: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* da99f2: call dword ptr [0xde8ad8] */
  esp -= 4; W32(esp, 0xda99f8u); SPILL(); f_4e152d(); if (g_unwind) return; /* Core!??1USubsystem@@UAE@XZ */ RELOAD();
/* da99f8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* da99fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da99fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da9a04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9a07: ret  */
  esp += 4; SPILL(); return;
}

void f_da9a30(void) {
  LOAD_REGS();
L_da9a30: /* da9a30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da9a31: mov ebp, esp */
  ebp = esp;
/* da9a33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da9a35: push 0xdba700 */
  { uint32_t v = 0xdba700u; esp -= 4; W32(esp, v); }
/* da9a3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da9a40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9a41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da9a48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da9a4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da9a4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da9a4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da9a4e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* da9a51: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da9a54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da9a55: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da9a5c: call dword ptr [0xde8ae8] */
  esp -= 4; W32(esp, 0xda9a62u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* da9a62: xor esi, esi */
  esi = 0;
L_da9a64: /* da9a64: cmp esi, dword ptr [0xde51e4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xde51e4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da9a6a: jge 0xda9a7d */
  if ((sf == of)) goto L_da9a7d;
L_da9a6c: /* da9a6c: mov eax, dword ptr [0xde51e0] */
  eax = R32((uint32_t)(0xde51e0u));
/* da9a71: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* da9a74: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da9a76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da9a77: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda9a7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9a7a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* da9a7b: jmp 0xda9a64 */
  goto L_da9a64;
L_da9a7d: /* da9a7d: xor esi, esi */
  esi = 0;
/* da9a7f: nop  */
L_da9a80: /* da9a80: cmp esi, dword ptr [0xde5730] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xde5730u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da9a86: jge 0xda9ac9 */
  if ((sf == of)) goto L_da9ac9;
L_da9a88: /* da9a88: mov eax, dword ptr [0xde572c] */
  eax = R32((uint32_t)(0xde572cu));
/* da9a8d: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* da9a90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da9a92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da9a93: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda9a96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9a96: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* da9a97: jmp 0xda9a80 */
  goto L_da9a80;
L_da9ac9: /* da9ac9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da9acc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da9acd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da9ace: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da9ad5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da9ad6: mov esp, ebp */
  esp = ebp;
/* da9ad8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da9ad9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da9a99(void) {
  LOAD_REGS();
L_da9a99: /* da9a99: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* da9a9c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da9aa1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da9aa4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9aa5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da9aa8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda9aadu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da9aad(); return;
}

void f_da9aad(void) {
  LOAD_REGS();
L_da9aad: /* da9aad: push 0xdc4204 */
  { uint32_t v = 0xdc4204u; esp -= 4; W32(esp, v); }
/* da9ab2: push 0xde1dd8 */
  { uint32_t v = 0xde1dd8u; esp -= 4; W32(esp, v); }
/* da9ab7: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda9abdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da9abd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9ac0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9ac2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9ac4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda9ac9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* da9ac9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da9acc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da9acd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da9ace: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da9ad5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da9ad6: mov esp, ebp */
  esp = ebp;
/* da9ad8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da9ad9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da9b10(void) {
  LOAD_REGS();
L_da9b10: /* da9b10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da9b11: mov ebp, esp */
  ebp = esp;
/* da9b13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da9b15: push 0xdba710 */
  { uint32_t v = 0xdba710u; esp -= 4; W32(esp, v); }
/* da9b1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da9b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9b21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da9b28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da9b2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da9b2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da9b2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da9b2e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da9b31: mov edi, ecx */
  edi = ecx;
/* da9b33: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da9b3a: call dword ptr [0xde8af0] */
  esp -= 4; W32(esp, 0xda9b40u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* da9b40: mov eax, dword ptr [0xde50e4] */
  eax = R32((uint32_t)(0xde50e4u));
/* da9b45: mov esi, dword ptr [0xde8c5c] */
  esi = R32((uint32_t)(0xde8c5cu));
/* da9b4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9b4c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9b4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9b4e: mov ecx, dword ptr [0xde5168] */
  ecx = R32((uint32_t)(0xde5168u));
/* da9b54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9b55: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9b57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9b57: mov edx, dword ptr [0xde50f0] */
  edx = R32((uint32_t)(0xde50f0u));
/* da9b5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9b5e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9b60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9b60: mov eax, dword ptr [0xde5170] */
  eax = R32((uint32_t)(0xde5170u));
/* da9b65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9b66: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9b68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9b68: mov ecx, dword ptr [0xde5180] */
  ecx = R32((uint32_t)(0xde5180u));
/* da9b6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9b6f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9b71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9b71: mov edx, dword ptr [0xde516c] */
  edx = R32((uint32_t)(0xde516cu));
/* da9b77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9b78: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9b7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9b7a: mov eax, dword ptr [0xde5158] */
  eax = R32((uint32_t)(0xde5158u));
/* da9b7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9b80: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9b82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9b82: mov ecx, dword ptr [0xde5024] */
  ecx = R32((uint32_t)(0xde5024u));
/* da9b88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9b89: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9b8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9b8b: mov edx, dword ptr [0xde5184] */
  edx = R32((uint32_t)(0xde5184u));
/* da9b91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9b92: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9b94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9b94: mov eax, dword ptr [0xde515c] */
  eax = R32((uint32_t)(0xde515cu));
/* da9b99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9b9a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9b9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9b9c: mov ecx, dword ptr [0xde5150] */
  ecx = R32((uint32_t)(0xde5150u));
/* da9ba2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9ba3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9ba5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9ba5: mov edx, dword ptr [0xde5178] */
  edx = R32((uint32_t)(0xde5178u));
/* da9bab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9bac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9baeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9bae: mov eax, dword ptr [0xde5188] */
  eax = R32((uint32_t)(0xde5188u));
/* da9bb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9bb4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda9bb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9bb6: mov ecx, dword ptr [0xde8aec] */
  ecx = R32((uint32_t)(0xde8aecu));
/* da9bbc: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da9bbe: je 0xda9bd8 */
  if (zf) goto L_da9bd8;
L_da9bc0: /* da9bc0: push 0x115 */
  { uint32_t v = 0x115u; esp -= 4; W32(esp, v); }
/* da9bc5: push 0xde4be4 */
  { uint32_t v = 0xde4be4u; esp -= 4; W32(esp, v); }
/* da9bca: push 0xde4bc8 */
  { uint32_t v = 0xde4bc8u; esp -= 4; W32(esp, v); }
/* da9bcf: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda9bd5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da9bd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da9bd8: /* da9bd8: mov edx, dword ptr [0xde8aec] */
  edx = R32((uint32_t)(0xde8aecu));
/* da9bde: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* da9be4: mov eax, dword ptr [0xde8a74] */
  eax = R32((uint32_t)(0xde8a74u));
/* da9be9: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da9bec: jne 0xda9bf7 */
  if (!zf) goto L_da9bf7;
L_da9bee: /* da9bee: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da9bf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9bf2: mov ecx, edi */
  ecx = edi;
/* da9bf4: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0xda9bf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da9bf7: /* da9bf7: mov ecx, dword ptr [0xde51e4] */
  ecx = R32((uint32_t)(0xde51e4u));
/* da9bfd: xor eax, eax */
  eax = 0;
/* da9bff: nop  */
L_da9c00: /* da9c00: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da9c02: jge 0xda9c07 */
  if ((sf == of)) goto L_da9c07;
L_da9c04: /* da9c04: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da9c05: jmp 0xda9c00 */
  goto L_da9c00;
L_da9c07: /* da9c07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9c09: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da9c0b: mov ecx, 0xde51e0 */
  ecx = 0xde51e0u;
/* da9c10: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xda9c16u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* da9c16: mov ecx, dword ptr [0xde5730] */
  ecx = R32((uint32_t)(0xde5730u));
/* da9c1c: xor eax, eax */
  eax = 0;
/* da9c1e: mov edi, edi */
  edi = edi;
L_da9c20: /* da9c20: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da9c22: jge 0xda9c27 */
  if ((sf == of)) goto L_da9c27;
L_da9c24: /* da9c24: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da9c25: jmp 0xda9c20 */
  goto L_da9c20;
L_da9c27: /* da9c27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9c29: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da9c2b: mov ecx, 0xde572c */
  ecx = 0xde572cu;
/* da9c30: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xda9c36u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* da9c36: mov ecx, dword ptr [0xde5724] */
  ecx = R32((uint32_t)(0xde5724u));
/* da9c3c: xor eax, eax */
  eax = 0;
/* da9c3e: mov edi, edi */
  edi = edi;
L_da9c40: /* da9c40: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da9c42: jge 0xda9c47 */
  if ((sf == of)) goto L_da9c47;
L_da9c44: /* da9c44: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da9c45: jmp 0xda9c40 */
  goto L_da9c40;
L_da9c47: /* da9c47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9c49: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da9c4b: mov ecx, 0xde5720 */
  ecx = 0xde5720u;
/* da9c50: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xda9c56u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* da9c56: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da9c59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da9c5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da9c5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da9c62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da9c63: mov esp, ebp */
  esp = ebp;
/* da9c65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da9c66: ret  */
  esp += 4; SPILL(); return;
}

void f_da9c67(void) {
  LOAD_REGS();
L_da9c67: /* da9c67: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* da9c6a: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da9c6f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da9c72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9c73: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da9c76: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda9c7bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da9c7b(); return;
}

void f_da9c7b(void) {
  LOAD_REGS();
L_da9c7b: /* da9c7b: push 0xdc4244 */
  { uint32_t v = 0xdc4244u; esp -= 4; W32(esp, v); }
/* da9c80: push 0xde1dd8 */
  { uint32_t v = 0xde1dd8u; esp -= 4; W32(esp, v); }
/* da9c85: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda9c8bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da9c8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9c8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9c90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9c92: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda9c97u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da9c97: guest_badaddr(0xda9c97); return;
}

void f_da9d10(void) {
  LOAD_REGS();
L_da9d10: /* da9d10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da9d11: mov ebp, esp */
  ebp = esp;
/* da9d13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da9d15: push 0xdba720 */
  { uint32_t v = 0xdba720u; esp -= 4; W32(esp, v); }
/* da9d1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da9d20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9d21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da9d28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da9d2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da9d2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da9d2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da9d2e: mov edi, dword ptr [0xde88a8] */
  edi = R32((uint32_t)(0xde88a8u));
/* da9d34: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da9d37: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_da9d3e: /* da9d3e: mov edx, dword ptr [0xde5730] */
  edx = R32((uint32_t)(0xde5730u));
/* da9d44: mov ecx, dword ptr [0xde572c] */
  ecx = R32((uint32_t)(0xde572cu));
/* da9d4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_da9d50: /* da9d50: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da9d52: je 0xda9dc8 */
  if (zf) goto L_da9dc8;
L_da9d54: /* da9d54: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* da9d56: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da9d58: je 0xda9d6f */
  if (zf) goto L_da9d6f;
L_da9d5a: /* da9d5a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da9d5c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da9d5e: mov ecx, esi */
  ecx = esi;
/* da9d60: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xda9d63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9d63: mov edx, dword ptr [0xde5730] */
  edx = R32((uint32_t)(0xde5730u));
/* da9d69: mov ecx, dword ptr [0xde572c] */
  ecx = R32((uint32_t)(0xde572cu));
L_da9d6f: /* da9d6f: xor eax, eax */
  eax = 0;
L_da9d71: /* da9d71: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da9d73: jge 0xda9d50 */
  if ((sf == of)) goto L_da9d50;
L_da9d75: /* da9d75: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da9d78: je 0xda9d7d */
  if (zf) goto L_da9d7d;
L_da9d7a: /* da9d7a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da9d7b: jmp 0xda9d71 */
  goto L_da9d71;
L_da9d7d: /* da9d7d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da9d80: je 0xda9d50 */
  if (zf) goto L_da9d50;
L_da9d82: /* da9d82: push 0x127 */
  { uint32_t v = 0x127u; esp -= 4; W32(esp, v); }
/* da9d87: push 0xde4be4 */
  { uint32_t v = 0xde4be4u; esp -= 4; W32(esp, v); }
/* da9d8c: push 0xde4bf4 */
  { uint32_t v = 0xde4bf4u; esp -= 4; W32(esp, v); }
/* da9d91: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda9d93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da9d93: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9d96: jmp 0xda9d3e */
  goto L_da9d3e;
L_da9dc8: /* da9dc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da9dcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da9dcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da9dcd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da9dd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da9dd5: mov esp, ebp */
  esp = ebp;
/* da9dd7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da9dd8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da9d98(void) {
  LOAD_REGS();
L_da9d98: /* da9d98: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da9d9b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da9da0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* da9da3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9da4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da9da7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda9dacu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da9dac(); return;
}

void f_da9dac(void) {
  LOAD_REGS();
L_da9dac: /* da9dac: push 0xdc4280 */
  { uint32_t v = 0xdc4280u; esp -= 4; W32(esp, v); }
/* da9db1: push 0xde1dd8 */
  { uint32_t v = 0xde1dd8u; esp -= 4; W32(esp, v); }
/* da9db6: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda9dbcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da9dbc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9dbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9dc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9dc3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda9dc8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* da9dc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da9dcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da9dcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da9dcd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da9dd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da9dd5: mov esp, ebp */
  esp = ebp;
/* da9dd7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da9dd8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da9e20(void) {
  LOAD_REGS();
L_da9e20: /* da9e20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da9e21: mov ebp, esp */
  ebp = esp;
/* da9e23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da9e25: push 0xdba730 */
  { uint32_t v = 0xdba730u; esp -= 4; W32(esp, v); }
/* da9e2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da9e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9e31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da9e38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da9e3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da9e3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da9e3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da9e3e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da9e41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9e43: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da9e46: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da9e4d: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xda9e53u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* da9e53: call dword ptr [0xde8af8] */
  esp -= 4; W32(esp, 0xda9e59u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* da9e59: mov ecx, dword ptr [0xde89ac] */
  ecx = R32((uint32_t)(0xde89acu));
/* da9e5f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da9e61: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* da9e64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9e66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9e68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9e69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9e6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9e6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9e6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9e6f: push 0xde51f0 */
  { uint32_t v = 0xde51f0u; esp -= 4; W32(esp, v); }
/* da9e74: call dword ptr [0xde8a58] */
  esp -= 4; W32(esp, 0xda9e7au); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* da9e7a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9e7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da9e7f: je 0xda9e8a */
  if (zf) goto L_da9e8a;
L_da9e81: /* da9e81: mov ecx, eax */
  ecx = eax;
/* da9e83: call 0xd8154b */
  esp -= 4; W32(esp, 0xda9e88u); SPILL(); f_d8154b(); if (g_unwind) return; RELOAD();
/* da9e88: jmp 0xda9e8c */
  goto L_da9e8c;
L_da9e8a: /* da9e8a: xor eax, eax */
  eax = 0;
L_da9e8c: /* da9e8c: mov edx, dword ptr [0xde8aec] */
  edx = R32((uint32_t)(0xde8aecu));
/* da9e92: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* da9e94: mov eax, dword ptr [0xde8aec] */
  eax = R32((uint32_t)(0xde8aecu));
/* da9e99: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da9e9b: call dword ptr [0xde8af4] */
  esp -= 4; W32(esp, 0xda9ea1u); SPILL(); f_4e3ef4(); if (g_unwind) return; /* Core!?AddToRoot@UObject@@QAEXXZ */ RELOAD();
/* da9ea1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da9ea4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da9ea5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da9ea6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da9ead: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da9eae: mov esp, ebp */
  esp = ebp;
/* da9eb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da9eb1: ret  */
  esp += 4; SPILL(); return;
}

void f_da9eb2(void) {
  LOAD_REGS();
L_da9eb2: /* da9eb2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* da9eb5: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da9eba: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* da9ebd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9ebe: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* da9ec1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda9ec6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da9ec6(); return;
}

void f_da9ec6(void) {
  LOAD_REGS();
L_da9ec6: /* da9ec6: push 0xdc42b4 */
  { uint32_t v = 0xdc42b4u; esp -= 4; W32(esp, v); }
/* da9ecb: push 0xde3704 */
  { uint32_t v = 0xde3704u; esp -= 4; W32(esp, v); }
/* da9ed0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda9ed6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da9ed6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9ed9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9edb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da9edd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda9ee2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da9ee2: guest_badaddr(0xda9ee2); return;
}

void f_da9f30(void) {
  LOAD_REGS();
L_da9f30: /* da9f30: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da9f33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da9f34: mov esi, ecx */
  esi = ecx;
/* da9f36: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da9f39: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* da9f3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9f3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da9f3f: call dword ptr [0xde8f1c] */
  esp -= 4; W32(esp, 0xda9f45u); SPILL(); call_ind(R32(0xde8f1cu)); if (g_unwind) return; /* USER32!GetWindowRect */ RELOAD();
/* da9f45: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* da9f49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da9f4b: je 0xda9fd2 */
  if (zf) goto L_da9fd2;
L_da9f51: /* da9f51: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* da9f54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da9f56: je 0xda9f89 */
  if (zf) goto L_da9f89;
L_da9f58: /* da9f58: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* da9f5c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da9f60: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* da9f64: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* da9f68: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* da9f6c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da9f70: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* da9f74: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* da9f78: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* da9f7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da9f7d: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* da9f81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da9f82: call 0xd81a23 */
  esp -= 4; W32(esp, 0xda9f87u); SPILL(); f_d81a23(); if (g_unwind) return; RELOAD();
/* da9f87: jmp 0xda9fad */
  goto L_da9fad;
L_da9f89: /* da9f89: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da9f8d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* da9f91: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da9f95: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* da9f99: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* da9f9d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* da9fa1: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* da9fa5: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* da9fa9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
L_da9fad: /* da9fad: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* da9faf: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* da9fb3: mov edx, ecx */
  edx = ecx;
/* da9fb5: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* da9fb7: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* da9fba: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* da9fbd: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* da9fc0: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* da9fc3: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* da9fc6: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* da9fc9: mov eax, ecx */
  eax = ecx;
/* da9fcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da9fcc: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9fcf: ret 8 */
  esp += 12; SPILL(); return;
L_da9fd2: /* da9fd2: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* da9fd6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da9fda: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da9fde: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* da9fe0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* da9fe4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* da9fe7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* da9feb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* da9fee: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* da9ff1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da9ff2: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da9ff5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_daa040(void) {
  LOAD_REGS();
L_daa040: /* daa040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daa041: mov ebp, esp */
  ebp = esp;
/* daa043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daa045: push 0xdba740 */
  { uint32_t v = 0xdba740u; esp -= 4; W32(esp, v); }
/* daa04a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daa050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daa058: sub esp, 0x414 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daa05e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daa05f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daa060: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daa061: mov edi, ecx */
  edi = ecx;
/* daa063: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* daa066: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa068: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daa06b: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* daa06e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* daa075: je 0xdaa08f */
  if (zf) goto L_daa08f;
L_daa077: /* daa077: push 0x38b */
  { uint32_t v = 0x38bu; esp -= 4; W32(esp, v); }
/* daa07c: push 0xde397c */
  { uint32_t v = 0xde397cu; esp -= 4; W32(esp, v); }
/* daa081: push 0xde3988 */
  { uint32_t v = 0xde3988u; esp -= 4; W32(esp, v); }
/* daa086: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xdaa08cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* daa08c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daa08f: /* daa08f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa091: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* daa094: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdaa09au); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* daa09a: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* daa09d: lea ebx, [edi + 8] */
  ebx = (uint32_t)(edi + 0x8u);
/* daa0a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa0a1: mov ecx, ebx */
  ecx = ebx;
/* daa0a3: call dword ptr [0xde8a04] */
  esp -= 4; W32(esp, 0xdaa0a9u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* daa0a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa0ab: je 0xdaa192 */
  if (zf) goto L_daa192;
L_daa0b1: /* daa0b1: mov ecx, ebx */
  ecx = ebx;
/* daa0b3: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xdaa0b9u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* daa0b9: mov ecx, dword ptr [0xde89d8] */
  ecx = R32((uint32_t)(0xde89d8u));
/* daa0bf: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* daa0c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daa0c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa0c5: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* daa0ca: lea esi, [ebp - 0x420] */
  esi = (uint32_t)(ebp + 0xfffffbe0u);
/* daa0d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daa0d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa0d2: push 0xde3994 */
  { uint32_t v = 0xde3994u; esp -= 4; W32(esp, v); }
/* daa0d7: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xdaa0dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa0da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa0dc: je 0xdaa192 */
  if (zf) goto L_daa192;
L_daa0e2: /* daa0e2: mov esi, dword ptr [0xde8b00] */
  esi = R32((uint32_t)(0xde8b00u));
/* daa0e8: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* daa0eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa0ec: lea ecx, [ebp - 0x420] */
  ecx = (uint32_t)(ebp + 0xfffffbe0u);
/* daa0f2: push 0xde39b4 */
  { uint32_t v = 0xde39b4u; esp -= 4; W32(esp, v); }
/* daa0f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa0f8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xdaa0fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa0fa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa0fd: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* daa100: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa101: lea eax, [ebp - 0x420] */
  eax = (uint32_t)(ebp + 0xfffffbe0u);
/* daa107: push 0xde39bc */
  { uint32_t v = 0xde39bcu; esp -= 4; W32(esp, v); }
/* daa10c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa10d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xdaa10fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa10f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* daa112: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa115: test eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa11a: je 0xdaa146 */
  if (zf) goto L_daa146;
L_daa11c: /* daa11c: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* daa11f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa120: lea edx, [ebp - 0x420] */
  edx = (uint32_t)(ebp + 0xfffffbe0u);
/* daa126: push 0xde39c4 */
  { uint32_t v = 0xde39c4u; esp -= 4; W32(esp, v); }
/* daa12b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa12c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xdaa12eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa12e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa131: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* daa134: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa135: lea ecx, [ebp - 0x420] */
  ecx = (uint32_t)(ebp + 0xfffffbe0u);
/* daa13b: push 0xde39cc */
  { uint32_t v = 0xde39ccu; esp -= 4; W32(esp, v); }
/* daa140: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa141: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xdaa143u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa143: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daa146: /* daa146: xor edi, edi */
  edi = 0;
/* daa148: xor esi, esi */
  esi = 0;
/* daa14a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_daa150: /* daa150: cmp esi, dword ptr [0xde51e4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xde51e4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daa156: jge 0xdaa170 */
  if ((sf == of)) goto L_daa170;
L_daa158: /* daa158: mov edx, dword ptr [0xde51e0] */
  edx = R32((uint32_t)(0xde51e0u));
/* daa15e: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* daa161: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daa162: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* daa165: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xdaa16bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* daa16b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* daa16d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* daa16e: jmp 0xdaa150 */
  goto L_daa150;
L_daa170: /* daa170: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa172: je 0xdaa187 */
  if (zf) goto L_daa187;
L_daa174: /* daa174: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* daa177: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* daa17a: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* daa17d: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* daa17f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* daa181: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* daa184: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_daa187: /* daa187: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* daa18a: call 0xd81753 */
  esp -= 4; W32(esp, 0xdaa18fu); SPILL(); f_d81753(); if (g_unwind) return; RELOAD();
/* daa18f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_daa192: /* daa192: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* daa194: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* daa196: mov ecx, 0xde51e0 */
  ecx = 0xde51e0u;
/* daa19b: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdaa1a1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* daa1a1: mov ecx, dword ptr [0xde51e0] */
  ecx = R32((uint32_t)(0xde51e0u));
/* daa1a7: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* daa1aa: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* daa1ac: lea eax, [ebp - 0x220] */
  eax = (uint32_t)(ebp + 0xfffffde0u);
/* daa1b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa1b3: mov ecx, edi */
  ecx = edi;
/* daa1b5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xdaa1b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa1b8: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* daa1be: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* daa1c1: je 0xdaa201 */
  if (zf) goto L_daa201;
L_daa1c3: /* daa1c3: mov edx, dword ptr [0xde50e8] */
  edx = R32((uint32_t)(0xde50e8u));
/* daa1c9: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* daa1cc: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* daa1cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daa1d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa1d1: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* daa1d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa1d5: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* daa1d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa1d9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* daa1dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa1dd: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* daa1e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa1e1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* daa1e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa1e5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* daa1e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa1e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa1ea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* daa1ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa1ee: lea edx, [ebp - 0x220] */
  edx = (uint32_t)(ebp + 0xfffffde0u);
/* daa1f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa1f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa1f6: call dword ptr [0xde8ea8] */
  esp -= 4; W32(esp, 0xdaa1fcu); SPILL(); call_ind(R32(0xde8ea8u)); if (g_unwind) return; /* USER32!CreateWindowExW */ RELOAD();
/* daa1fc: jmp 0xdaa2da */
  goto L_daa2da;
L_daa201: /* daa201: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* daa204: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* daa20a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daa20b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdaa20du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa20d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa210: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa212: jne 0xdaa218 */
  if (!zf) goto L_daa218;
L_daa214: /* daa214: xor esi, esi */
  esi = 0;
/* daa216: jmp 0xdaa234 */
  goto L_daa234;
L_daa218: /* daa218: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daa219: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdaa21bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa21b: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* daa21e: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* daa221: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* daa224: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa227: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* daa22a: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xdaa22fu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* daa22f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daa232: mov esi, esp */
  esi = esp;
L_daa234: /* daa234: lea ecx, [ebp - 0x220] */
  ecx = (uint32_t)(ebp + 0xfffffde0u);
/* daa23a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa23b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdaa23du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa23d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa240: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa242: jne 0xdaa248 */
  if (!zf) goto L_daa248;
L_daa244: /* daa244: xor ebx, ebx */
  ebx = 0;
/* daa246: jmp 0xdaa26a */
  goto L_daa26a;
L_daa248: /* daa248: lea edx, [ebp - 0x220] */
  edx = (uint32_t)(ebp + 0xfffffde0u);
/* daa24e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa24f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdaa251u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa251: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* daa254: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* daa257: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* daa25a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa25d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* daa260: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xdaa265u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* daa265: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daa268: mov ebx, esp */
  ebx = esp;
L_daa26a: /* daa26a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* daa26d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa26e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdaa270u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa270: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* daa273: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa276: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa277: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa278: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daa279: mov esi, dword ptr [0xde88c4] */
  esi = R32((uint32_t)(0xde88c4u));
/* daa27f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xdaa281u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa281: lea edx, [ebp - 0x220] */
  edx = (uint32_t)(ebp + 0xfffffde0u);
/* daa287: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa28a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa28b: mov edi, eax */
  edi = eax;
/* daa28d: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xdaa293u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* daa293: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa296: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa297: lea eax, [ebp - 0x220] */
  eax = (uint32_t)(ebp + 0xfffffde0u);
/* daa29d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa29e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daa29f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xdaa2a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa2a1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* daa2a4: mov edx, dword ptr [0xde50e8] */
  edx = R32((uint32_t)(0xde50e8u));
/* daa2aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa2ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa2ae: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* daa2b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa2b2: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* daa2b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa2b6: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* daa2b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa2ba: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* daa2bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa2be: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* daa2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa2c2: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* daa2c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa2c6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* daa2c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa2ca: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* daa2cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa2ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daa2cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa2d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa2d1: call dword ptr [0xde8ea4] */
  esp -= 4; W32(esp, 0xdaa2d7u); SPILL(); call_ind(R32(0xde8ea4u)); if (g_unwind) return; /* USER32!CreateWindowExA */ RELOAD();
/* daa2d7: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_daa2da: /* daa2da: mov esi, eax */
  esi = eax;
/* daa2dc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa2de: jne 0xdaa319 */
  if (!zf) goto L_daa319;
L_daa2e0: /* daa2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa2e1: call dword ptr [0xde8afc] */
  esp -= 4; W32(esp, 0xdaa2e7u); SPILL(); f_4e3ada(); if (g_unwind) return; /* Core!?appGetSystemErrorMessage@@YAPBGH@Z */ RELOAD();
/* daa2e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa2ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa2eb: mov eax, dword ptr [0xde89ac] */
  eax = R32((uint32_t)(0xde89acu));
/* daa2f0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daa2f2: push 0xde39d4 */
  { uint32_t v = 0xde39d4u; esp -= 4; W32(esp, v); }
/* daa2f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa2f8: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xdaa2feu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* daa2fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa301: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* daa306: push 0xde3a08 */
  { uint32_t v = 0xde3a08u; esp -= 4; W32(esp, v); }
/* daa30b: push 0xde3a14 */
  { uint32_t v = 0xde3a14u; esp -= 4; W32(esp, v); }
/* daa310: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xdaa316u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* daa316: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daa319: /* daa319: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* daa31c: je 0xdaa336 */
  if (zf) goto L_daa336;
L_daa31e: /* daa31e: push 0x3b5 */
  { uint32_t v = 0x3b5u; esp -= 4; W32(esp, v); }
/* daa323: push 0xde3a20 */
  { uint32_t v = 0xde3a20u; esp -= 4; W32(esp, v); }
/* daa328: push 0xde3a2c */
  { uint32_t v = 0xde3a2cu; esp -= 4; W32(esp, v); }
/* daa32d: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xdaa333u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* daa333: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daa336: /* daa336: lea esp, [ebp - 0x42c] */
  esp = (uint32_t)(ebp + 0xfffffbd4u);
/* daa33c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daa33f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daa346: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daa347: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daa348: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daa349: mov esp, ebp */
  esp = ebp;
/* daa34b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daa34c: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_daa34f(void) {
  LOAD_REGS();
L_daa34f: /* daa34f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* daa352: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* daa357: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* daa35a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa35b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* daa35e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa363u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_daa363(); return;
}

void f_daa363(void) {
  LOAD_REGS();
L_daa363: /* daa363: push 0xdc42d8 */
  { uint32_t v = 0xdc42d8u; esp -= 4; W32(esp, v); }
/* daa368: push 0xde3a40 */
  { uint32_t v = 0xde3a40u; esp -= 4; W32(esp, v); }
/* daa36d: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdaa373u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* daa373: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa376: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa378: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa37a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa37fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_daa37f: guest_badaddr(0xdaa37f); return;
}

void f_daa450(void) {
  LOAD_REGS();
L_daa450: /* daa450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daa451: mov ebp, esp */
  ebp = esp;
/* daa453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daa455: push 0xdba750 */
  { uint32_t v = 0xdba750u; esp -= 4; W32(esp, v); }
/* daa45a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daa460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daa468: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daa46b: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* daa46e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa470: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daa471: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daa472: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daa473: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daa476: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* daa47d: je 0xdaa484 */
  if (zf) goto L_daa484;
L_daa47f: /* daa47f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* daa482: jmp 0xdaa486 */
  goto L_daa486;
L_daa484: /* daa484: xor eax, eax */
  eax = 0;
L_daa486: /* daa486: mov edx, dword ptr [0xde5034] */
  edx = R32((uint32_t)(0xde5034u));
/* daa48c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa48d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* daa490: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa492: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa493: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* daa496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa497: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* daa49a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa49b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* daa49e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa49f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa4a0: push 0x56000000 */
  { uint32_t v = 0x56000000u; esp -= 4; W32(esp, v); }
/* daa4a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa4a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa4a9: call 0xd81852 */
  esp -= 4; W32(esp, 0xdaa4aeu); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* daa4ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daa4b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daa4b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daa4b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daa4ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daa4bb: mov esp, ebp */
  esp = ebp;
/* daa4bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daa4be: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_daa4c1(void) {
  LOAD_REGS();
L_daa4c1: /* daa4c1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* daa4c4: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* daa4c9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* daa4cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa4cd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* daa4d0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa4d5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_daa4d5(); return;
}

void f_daa4d5(void) {
  LOAD_REGS();
L_daa4d5: /* daa4d5: push 0xdc430c */
  { uint32_t v = 0xdc430cu; esp -= 4; W32(esp, v); }
/* daa4da: push 0xde3b78 */
  { uint32_t v = 0xde3b78u; esp -= 4; W32(esp, v); }
/* daa4df: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdaa4e5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* daa4e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa4e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa4ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa4ec: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa4f1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_daa4f1: guest_badaddr(0xdaa4f1); return;
}

void f_daa530(void) {
  LOAD_REGS();
L_daa530: /* daa530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daa531: mov ebp, esp */
  ebp = esp;
/* daa533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daa535: push 0xdba760 */
  { uint32_t v = 0xdba760u; esp -= 4; W32(esp, v); }
/* daa53a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daa540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daa548: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daa54b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daa54c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daa54d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daa54e: mov esi, ecx */
  esi = ecx;
/* daa550: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* daa553: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daa556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa557: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* daa55e: call dword ptr [0xde8f68] */
  esp -= 4; W32(esp, 0xdaa564u); SPILL(); call_ind(R32(0xde8f68u)); if (g_unwind) return; /* USER32!IsWindowEnabled */ RELOAD();
/* daa564: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa566: je 0xdaa5ca */
  if (zf) goto L_daa5ca;
L_daa568: /* daa568: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* daa56b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa56c: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xdaa572u); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* daa572: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* daa575: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* daa578: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* daa57b: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* daa57e: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* daa581: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa582: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa583: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* daa586: call dword ptr [0xde8f20] */
  esp -= 4; W32(esp, 0xdaa58cu); SPILL(); call_ind(R32(0xde8f20u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* daa58c: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* daa58f: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* daa592: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* daa595: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa596: mov ecx, esi */
  ecx = esi;
/* daa598: mov dword ptr [esi + 0x5c], ebx */
  W32((uint32_t)(esi + 0x5cu), ebx);
/* daa59b: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* daa59e: call 0xd81f78 */
  esp -= 4; W32(esp, 0xdaa5a3u); SPILL(); f_d81f78(); if (g_unwind) return; RELOAD();
/* daa5a3: cmp ebx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daa5a6: jl 0xdaa5db */
  if ((sf != of)) goto L_daa5db;
L_daa5a8: /* daa5a8: cmp ebx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daa5ab: jge 0xdaa5db */
  if ((sf == of)) goto L_daa5db;
L_daa5ad: /* daa5ad: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daa5b0: jl 0xdaa5db */
  if ((sf != of)) goto L_daa5db;
L_daa5b2: /* daa5b2: cmp edi, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daa5b5: jge 0xdaa5db */
  if ((sf == of)) goto L_daa5db;
L_daa5b7: /* daa5b7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* daa5ba: mov ecx, dword ptr [0xde5178] */
  ecx = R32((uint32_t)(0xde5178u));
/* daa5c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa5c1: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* daa5c4: call dword ptr [0xde8e3c] */
  esp -= 4; W32(esp, 0xdaa5cau); SPILL(); call_ind(R32(0xde8e3cu)); if (g_unwind) return; /* USER32!SetCapture */ RELOAD();
L_daa5ca: /* daa5ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daa5cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daa5d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daa5d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daa5d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daa5d7: mov esp, ebp */
  esp = ebp;
/* daa5d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daa5da: ret  */
  esp += 4; SPILL(); return;
L_daa5db: /* daa5db: mov eax, dword ptr [0xde5188] */
  eax = R32((uint32_t)(0xde5188u));
/* daa5e0: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* daa5e3: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* daa5e6: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daa5e9: jge 0xdaa5f3 */
  if ((sf == of)) goto L_daa5f3;
L_daa5eb: /* daa5eb: fsub dword ptr [0xdc17f4] */
  ST0 = ST0 - (F32((uint32_t)(0xdc17f4u)));
/* daa5f1: jmp 0xdaa5f9 */
  goto L_daa5f9;
L_daa5f3: /* daa5f3: fadd dword ptr [0xdc17f4] */
  ST0 = ST0 + (F32((uint32_t)(0xdc17f4u)));
L_daa5f9: /* daa5f9: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* daa5fc: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* daa5ff: fcomp dword ptr [0xdc1460] */
  fpu_com(ST0, F32((uint32_t)(0xdc1460u)));
  FPOP();
/* daa605: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* daa607: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* daa60a: jp 0xdaa613 */
  if (pf) goto L_daa613;
L_daa60c: /* daa60c: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
L_daa613: /* daa613: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* daa616: fadd dword ptr [esi + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4cu)));
/* daa619: fcomp dword ptr [0xdc3ae8] */
  fpu_com(ST0, F32((uint32_t)(0xdc3ae8u)));
  FPOP();
/* daa61f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* daa621: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daa624: jne 0xdaa632 */
  if (!zf) goto L_daa632;
L_daa626: /* daa626: fld dword ptr [0xdc3ae8] */
  { double v = F32((uint32_t)(0xdc3ae8u)); FPUSH(v); }
/* daa62c: fsub dword ptr [esi + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4cu)));
/* daa62f: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
L_daa632: /* daa632: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* daa635: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* daa638: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xdaa63au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa63a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daa63d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daa63e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daa63f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daa646: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daa647: mov esp, ebp */
  esp = ebp;
/* daa649: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daa64a: ret  */
  esp += 4; SPILL(); return;
}

void f_daa64b(void) {
  LOAD_REGS();
L_daa64b: /* daa64b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* daa64e: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* daa653: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* daa656: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa657: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* daa65a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa65fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_daa65f(); return;
}

void f_daa65f(void) {
  LOAD_REGS();
L_daa65f: /* daa65f: push 0xdc4350 */
  { uint32_t v = 0xdc4350u; esp -= 4; W32(esp, v); }
/* daa664: push 0xde3b80 */
  { uint32_t v = 0xde3b80u; esp -= 4; W32(esp, v); }
/* daa669: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdaa66fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* daa66f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa674: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa676: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa67bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_daa67b: guest_badaddr(0xdaa67b); return;
}

void f_daa6e0(void) {
  LOAD_REGS();
L_daa6e0: /* daa6e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daa6e1: mov ebp, esp */
  ebp = esp;
/* daa6e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daa6e5: push 0xdba770 */
  { uint32_t v = 0xdba770u; esp -= 4; W32(esp, v); }
/* daa6ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daa6f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa6f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daa6f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daa6fb: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* daa6fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daa701: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daa702: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daa703: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daa706: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* daa70d: je 0xdaa714 */
  if (zf) goto L_daa714;
L_daa70f: /* daa70f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* daa712: jmp 0xdaa716 */
  goto L_daa716;
L_daa714: /* daa714: xor eax, eax */
  eax = 0;
L_daa716: /* daa716: mov edx, dword ptr [0xde5034] */
  edx = R32((uint32_t)(0xde5034u));
/* daa71c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa71d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* daa720: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa722: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa723: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* daa726: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* daa728: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa729: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* daa72c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa72d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa72e: push 0x56000000 */
  { uint32_t v = 0x56000000u; esp -= 4; W32(esp, v); }
/* daa733: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa735: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa737: call 0xd81852 */
  esp -= 4; W32(esp, 0xdaa73cu); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* daa73c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daa73f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daa740: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daa741: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daa748: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daa749: mov esp, ebp */
  esp = ebp;
/* daa74b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daa74c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_daa74f(void) {
  LOAD_REGS();
L_daa74f: /* daa74f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* daa752: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* daa757: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* daa75a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa75b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* daa75e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa763u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_daa763(); return;
}

void f_daa763(void) {
  LOAD_REGS();
L_daa763: /* daa763: push 0xdc43a0 */
  { uint32_t v = 0xdc43a0u; esp -= 4; W32(esp, v); }
/* daa768: push 0xde3be8 */
  { uint32_t v = 0xde3be8u; esp -= 4; W32(esp, v); }
/* daa76d: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdaa773u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* daa773: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa776: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa778: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa77a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa77fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_daa77f: guest_badaddr(0xdaa77f); return;
}

void f_daa7b0(void) {
  LOAD_REGS();
L_daa7b0: /* daa7b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daa7b1: mov ebp, esp */
  ebp = esp;
/* daa7b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daa7b5: push 0xdba780 */
  { uint32_t v = 0xdba780u; esp -= 4; W32(esp, v); }
/* daa7ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daa7c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa7c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daa7c8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daa7cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daa7cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daa7cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daa7ce: mov esi, ecx */
  esi = ecx;
/* daa7d0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* daa7d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daa7d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa7d7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* daa7de: call dword ptr [0xde8f68] */
  esp -= 4; W32(esp, 0xdaa7e4u); SPILL(); call_ind(R32(0xde8f68u)); if (g_unwind) return; /* USER32!IsWindowEnabled */ RELOAD();
/* daa7e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daa7e6: je 0xdaa841 */
  if (zf) goto L_daa841;
L_daa7e8: /* daa7e8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* daa7eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa7ec: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xdaa7f2u); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* daa7f2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* daa7f5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* daa7f8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* daa7fb: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* daa7fe: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* daa801: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa802: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa803: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* daa806: call dword ptr [0xde8f20] */
  esp -= 4; W32(esp, 0xdaa80cu); SPILL(); call_ind(R32(0xde8f20u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* daa80c: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* daa80f: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* daa812: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* daa815: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa816: mov ecx, esi */
  ecx = esi;
/* daa818: mov dword ptr [esi + 0x64], edi */
  W32((uint32_t)(esi + 0x64u), edi);
/* daa81b: mov dword ptr [esi + 0x68], ebx */
  W32((uint32_t)(esi + 0x68u), ebx);
/* daa81e: call 0xd82694 */
  esp -= 4; W32(esp, 0xdaa823u); SPILL(); f_d82694(); if (g_unwind) return; RELOAD();
/* daa823: cmp edi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daa826: jl 0xdaa852 */
  if ((sf != of)) goto L_daa852;
L_daa828: /* daa828: cmp edi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daa82b: jge 0xdaa85d */
  if ((sf == of)) goto L_daa85d;
L_daa82d: /* daa82d: cmp ebx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daa830: jl 0xdaa85d */
  if ((sf != of)) goto L_daa85d;
L_daa832: /* daa832: cmp ebx, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daa835: jge 0xdaa85d */
  if ((sf == of)) goto L_daa85d;
L_daa837: /* daa837: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* daa83a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa83b: call dword ptr [0xde8e3c] */
  esp -= 4; W32(esp, 0xdaa841u); SPILL(); call_ind(R32(0xde8e3cu)); if (g_unwind) return; /* USER32!SetCapture */ RELOAD();
L_daa841: /* daa841: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daa844: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daa84b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daa84c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daa84d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daa84e: mov esp, ebp */
  esp = ebp;
/* daa850: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daa851: ret  */
  esp += 4; SPILL(); return;
L_daa852: /* daa852: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* daa855: fsub dword ptr [0xdc17f4] */
  ST0 = ST0 - (F32((uint32_t)(0xdc17f4u)));
/* daa85b: jmp 0xdaa866 */
  goto L_daa866;
L_daa85d: /* daa85d: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* daa860: fadd dword ptr [0xdc17f4] */
  ST0 = ST0 + (F32((uint32_t)(0xdc17f4u)));
L_daa866: /* daa866: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* daa869: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* daa86c: fcomp dword ptr [0xdc1460] */
  fpu_com(ST0, F32((uint32_t)(0xdc1460u)));
  FPOP();
/* daa872: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* daa874: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* daa877: jp 0xdaa880 */
  if (pf) goto L_daa880;
L_daa879: /* daa879: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
L_daa880: /* daa880: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* daa883: fcomp dword ptr [0xdc3ae8] */
  fpu_com(ST0, F32((uint32_t)(0xdc3ae8u)));
  FPOP();
/* daa889: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* daa88b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daa88e: jne 0xdaa897 */
  if (!zf) goto L_daa897;
L_daa890: /* daa890: mov dword ptr [esi + 0x48], 0x42c80000 */
  W32((uint32_t)(esi + 0x48u), 0x42c80000u);
L_daa897: /* daa897: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* daa89a: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* daa89d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xdaa89fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa89f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daa8a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daa8a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daa8a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daa8ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daa8ac: mov esp, ebp */
  esp = ebp;
/* daa8ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daa8af: ret  */
  esp += 4; SPILL(); return;
}

void f_daa8b0(void) {
  LOAD_REGS();
L_daa8b0: /* daa8b0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* daa8b3: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* daa8b8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* daa8bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daa8bc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* daa8bf: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa8c4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_daa8c4(); return;
}

void f_daa8c4(void) {
  LOAD_REGS();
L_daa8c4: /* daa8c4: push 0xdc43e0 */
  { uint32_t v = 0xdc43e0u; esp -= 4; W32(esp, v); }
/* daa8c9: push 0xde3bf0 */
  { uint32_t v = 0xde3bf0u; esp -= 4; W32(esp, v); }
/* daa8ce: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdaa8d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* daa8d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa8d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa8d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa8db: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa8e0u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_daa8e0: guest_badaddr(0xdaa8e0); return;
}

void f_daa940(void) {
  LOAD_REGS();
L_daa940: /* daa940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daa941: mov ebp, esp */
  ebp = esp;
/* daa943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daa945: push 0xdba790 */
  { uint32_t v = 0xdba790u; esp -= 4; W32(esp, v); }
/* daa94a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daa950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daa958: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daa95b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daa95c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daa95d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daa95e: mov esi, ecx */
  esi = ecx;
/* daa960: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* daa963: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* daa966: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daa969: and edx, 0xfffffffd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* daa96c: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* daa96f: mov eax, dword ptr [0xde5034] */
  eax = R32((uint32_t)(0xde5034u));
/* daa974: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* daa977: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daa978: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa97a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa97b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* daa97d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* daa97f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa981: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa983: push 0x56000000 */
  { uint32_t v = 0x56000000u; esp -= 4; W32(esp, v); }
/* daa988: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa98a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa98c: mov ecx, esi */
  ecx = esi;
/* daa98e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* daa995: call 0xd81852 */
  esp -= 4; W32(esp, 0xdaa99au); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* daa99a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* daa99c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa99e: mov ecx, esi */
  ecx = esi;
/* daa9a0: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xdaa9a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daa9a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daa9a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daa9a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daa9a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daa9af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daa9b0: mov esp, ebp */
  esp = ebp;
/* daa9b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daa9b3: ret  */
  esp += 4; SPILL(); return;
}

void f_daa9b4(void) {
  LOAD_REGS();
L_daa9b4: /* daa9b4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* daa9b7: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* daa9bc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* daa9bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daa9c0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* daa9c3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa9c8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_daa9c8(); return;
}

void f_daa9c8(void) {
  LOAD_REGS();
L_daa9c8: /* daa9c8: push 0xdc4430 */
  { uint32_t v = 0xdc4430u; esp -= 4; W32(esp, v); }
/* daa9cd: push 0xde3c60 */
  { uint32_t v = 0xde3c60u; esp -= 4; W32(esp, v); }
/* daa9d2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdaa9d8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* daa9d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daa9db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa9dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daa9df: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaa9e4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_daa9e4: guest_badaddr(0xdaa9e4); return;
}

void f_daaa20(void) {
  LOAD_REGS();
L_daaa20: /* daaa20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daaa21: mov ebp, esp */
  ebp = esp;
/* daaa23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daaa25: push 0xdba7a0 */
  { uint32_t v = 0xdba7a0u; esp -= 4; W32(esp, v); }
/* daaa2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daaa30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daaa31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daaa38: sub esp, 0x80c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daaa3e: cmp dword ptr [ebp + 0xc], 0x314 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x314u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* daaa45: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daaa46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daaa47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daaa48: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daaa4b: mov ebx, ecx */
  ebx = ecx;
/* daaa4d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* daaa54: jne 0xdaaa76 */
  if (!zf) goto L_daaa76;
L_daaa56: /* daaa56: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* daaa59: mov eax, dword ptr [ebx - 0x3c] */
  eax = R32((uint32_t)(ebx + 0xffffffc4u));
/* daaa5c: lea ecx, [ebx - 0x3c] */
  ecx = (uint32_t)(ebx + 0xffffffc4u);
/* daaa5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daaa60: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0xdaaa63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daaa63: /* daaa63: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daaa66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daaa6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daaa6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daaa6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daaa70: mov esp, ebp */
  esp = ebp;
/* daaa72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daaa73: ret 8 */
  esp += 12; SPILL(); return;
L_daaa76: /* daaa76: mov eax, dword ptr [ebx + 0x288] */
  eax = R32((uint32_t)(ebx + 0x288u));
/* daaa7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daaa7e: je 0xdaaa63 */
  if (zf) goto L_daaa63;
L_daaa80: /* daaa80: lea esi, [ebx + 4] */
  esi = (uint32_t)(ebx + 0x4u);
/* daaa83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daaa85: mov ecx, esi */
  ecx = esi;
/* daaa87: call 0xd8260d */
  esp -= 4; W32(esp, 0xdaaa8cu); SPILL(); f_d8260d(); if (g_unwind) return; RELOAD();
/* daaa8c: mov ecx, esi */
  ecx = esi;
/* daaa8e: call 0xd824d2 */
  esp -= 4; W32(esp, 0xdaaa93u); SPILL(); f_d824d2(); if (g_unwind) return; RELOAD();
/* daaa93: cmp eax, dword ptr [ebx + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daaa99: jle 0xdaaae7 */
  if ((zf || sf != of)) goto L_daaae7;
L_daaa9b: /* daaa9b: mov edx, dword ptr [ebx + 0x84] */
  edx = R32((uint32_t)(ebx + 0x84u));
/* daaaa1: mov ecx, eax */
  ecx = eax;
/* daaaa3: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* daaaa5: mov edx, 0 */
  edx = 0x0u;
/* daaaaa: sets dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* daaaad: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* daaaae: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* daaab0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* daaab2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daaab3: mov ecx, esi */
  ecx = esi;
/* daaab5: call 0xd8176c */
  esp -= 4; W32(esp, 0xdaaabau); SPILL(); f_d8176c(); if (g_unwind) return; RELOAD();
/* daaaba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daaabb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daaabd: mov ecx, esi */
  ecx = esi;
/* daaabf: call 0xd81b81 */
  esp -= 4; W32(esp, 0xdaaac4u); SPILL(); f_d81b81(); if (g_unwind) return; RELOAD();
/* daaac4: push 0xde51d0 */
  { uint32_t v = 0xde51d0u; esp -= 4; W32(esp, v); }
/* daaac9: mov ecx, esi */
  ecx = esi;
/* daaacb: call 0xd8179e */
  esp -= 4; W32(esp, 0xdaaad0u); SPILL(); f_d8179e(); if (g_unwind) return; RELOAD();
/* daaad0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* daaad2: mov ecx, esi */
  ecx = esi;
/* daaad4: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xdaaad7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daaad7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daaad8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daaad9: mov ecx, esi */
  ecx = esi;
/* daaadb: call 0xd81b81 */
  esp -= 4; W32(esp, 0xdaaae0u); SPILL(); f_d81b81(); if (g_unwind) return; RELOAD();
/* daaae0: mov ecx, esi */
  ecx = esi;
/* daaae2: call 0xd81a14 */
  esp -= 4; W32(esp, 0xdaaae7u); SPILL(); f_d81a14(); if (g_unwind) return; RELOAD();
L_daaae7: /* daaae7: mov cx, word ptr [0xde51d4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xde51d4u))) & 0xffffu);
/* daaaee: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* daaaf1: mov word ptr [ebp - 0x818], cx */
  W16((uint32_t)(ebp + 0xfffff7e8u), (ecx & 0xffffu));
/* daaaf8: xor eax, eax */
  eax = 0;
/* daaafa: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* daaaff: lea edi, [ebp - 0x816] */
  edi = (uint32_t)(ebp + 0xfffff7eau);
/* daab05: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* daab07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daab08: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* daab0b: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* daab0d: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdaab13u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* daab13: mov ecx, eax */
  ecx = eax;
/* daab15: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xdaab1bu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* daab1b: mov edi, dword ptr [0xde8b04] */
  edi = R32((uint32_t)(0xde8b04u));
/* daab21: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* daab26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daab27: lea eax, [ebp - 0x818] */
  eax = (uint32_t)(ebp + 0xfffff7e8u);
/* daab2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daab2e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdaab30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daab30: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daab33: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* daab38: lea ecx, [ebp - 0x818] */
  ecx = (uint32_t)(ebp + 0xfffff7e8u);
/* daab3e: push 0xde3df8 */
  { uint32_t v = 0xde3df8u; esp -= 4; W32(esp, v); }
/* daab43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daab44: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdaab46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daab46: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* daab49: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daab4c: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* daab51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daab52: lea eax, [ebp - 0x818] */
  eax = (uint32_t)(ebp + 0xfffff7e8u);
/* daab58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daab59: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdaab5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daab5b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daab5e: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* daab63: lea ecx, [ebp - 0x818] */
  ecx = (uint32_t)(ebp + 0xfffff7e8u);
/* daab69: push 0xde3e00 */
  { uint32_t v = 0xde3e00u; esp -= 4; W32(esp, v); }
/* daab6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daab6f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdaab71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daab71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daab74: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* daab79: lea edx, [ebx + 0x88] */
  edx = (uint32_t)(ebx + 0x88u);
/* daab7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daab80: lea eax, [ebp - 0x818] */
  eax = (uint32_t)(ebp + 0xfffff7e8u);
/* daab86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daab87: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdaab89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daab89: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daab8c: lea ecx, [ebx - 0x3c] */
  ecx = (uint32_t)(ebx + 0xffffffc4u);
/* daab8f: mov word ptr [ebp - 0x1a], 0 */
  W16((uint32_t)(ebp + 0xffffffe6u), 0x0u);
/* daab95: call 0xd826f3 */
  esp -= 4; W32(esp, 0xdaab9au); SPILL(); f_d826f3(); if (g_unwind) return; RELOAD();
/* daab9a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* daab9c: mov ecx, esi */
  ecx = esi;
/* daab9e: call 0xd8260d */
  esp -= 4; W32(esp, 0xdaaba3u); SPILL(); f_d8260d(); if (g_unwind) return; RELOAD();
/* daaba3: lea ecx, [ebp - 0x818] */
  ecx = (uint32_t)(ebp + 0xfffff7e8u);
/* daaba9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daabaa: mov ecx, esi */
  ecx = esi;
/* daabac: call 0xd8179e */
  esp -= 4; W32(esp, 0xdaabb1u); SPILL(); f_d8179e(); if (g_unwind) return; RELOAD();
/* daabb1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daabb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daabb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daabb6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daabbd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daabbe: mov esp, ebp */
  esp = ebp;
/* daabc0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daabc1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_daabc4(void) {
  LOAD_REGS();
L_daabc4: /* daabc4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* daabc7: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* daabcc: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* daabcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daabd0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* daabd3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaabd8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_daabd8(); return;
}

void f_daabd8(void) {
  LOAD_REGS();
L_daabd8: /* daabd8: push 0xdc4468 */
  { uint32_t v = 0xdc4468u; esp -= 4; W32(esp, v); }
/* daabdd: push 0xde3e08 */
  { uint32_t v = 0xde3e08u; esp -= 4; W32(esp, v); }
/* daabe2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdaabe8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* daabe8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daabeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daabed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daabef: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaabf4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_daabf4: guest_badaddr(0xdaabf4); return;
}

void f_daac80(void) {
  LOAD_REGS();
L_daac80: /* daac80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daac81: mov ebp, esp */
  ebp = esp;
/* daac83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daac85: push 0xdba7b9 */
  { uint32_t v = 0xdba7b9u; esp -= 4; W32(esp, v); }
/* daac8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daac90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daac91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daac98: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daac9b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* daac9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daac9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daaca0: mov esi, ecx */
  esi = ecx;
/* daaca2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daaca3: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* daaca6: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* daaca9: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* daacac: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* daacae: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* daacb1: xor edx, edx */
  edx = 0;
/* daacb3: mov ebx, edi */
  ebx = edi;
/* daacb5: xor ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* daacb7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* daacb9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daacbc: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* daacbf: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* daacc2: mov ecx, ebx */
  ecx = ebx;
/* daacc4: je 0xdaacce */
  if (zf) goto L_daacce;
L_daacc6: /* daacc6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* daacc9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* daaccc: jmp 0xdaacd1 */
  goto L_daacd1;
L_daacce: /* daacce: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_daacd1: /* daacd1: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daacd4: je 0xdaacdd */
  if (zf) goto L_daacdd;
L_daacd6: /* daacd6: mov edi, 0x40 */
  edi = 0x40u;
/* daacdb: jmp 0xdaacea */
  goto L_daacea;
L_daacdd: /* daacdd: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* daace0: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edi = r;
  }
/* daace2: sbb edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* daace4: and edi, 0x40000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
L_daacea: /* daacea: mov ebx, dword ptr [0xde8918] */
  ebx = R32((uint32_t)(0xde8918u));
/* daacf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daacf1: push 0xde3e20 */
  { uint32_t v = 0xde3e20u; esp -= 4; W32(esp, v); }
/* daacf6: push 0xde3e2c */
  { uint32_t v = 0xde3e2cu; esp -= 4; W32(esp, v); }
/* daacfb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaacfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daacfd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daad00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daad02: push 0xde3e34 */
  { uint32_t v = 0xde3e34u; esp -= 4; W32(esp, v); }
/* daad07: push 0xde3e44 */
  { uint32_t v = 0xde3e44u; esp -= 4; W32(esp, v); }
/* daad0c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* daad0f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaad11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daad11: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* daad14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daad17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daad18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daad19: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* daad1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daad1d: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xdaad23u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* daad23: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daad26: mov ecx, eax */
  ecx = eax;
/* daad28: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* daad2c: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdaad32u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* daad32: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* daad38: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* daad3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daad3c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* daad3f: and cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* daad42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daad44: neg cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* daad46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daad47: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* daad4c: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* daad51: push 0x80000000 */
  { uint32_t v = 0x80000000u; esp -= 4; W32(esp, v); }
/* daad56: push 0x80000000 */
  { uint32_t v = 0x80000000u; esp -= 4; W32(esp, v); }
/* daad5b: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* daad5d: and ecx, 0x46030000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46030000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* daad63: add ecx, 0xcc0000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcc0000u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* daad69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daad6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daad6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daad6c: mov ecx, esi */
  ecx = esi;
/* daad6e: call 0xd81852 */
  esp -= 4; W32(esp, 0xdaad73u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* daad73: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* daad76: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* daad7a: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdaad80u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* daad80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daad83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daad84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daad85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daad8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daad8d: mov esp, ebp */
  esp = ebp;
/* daad8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daad90: ret 8 */
  esp += 12; SPILL(); return;
}

void f_daad93(void) {
  LOAD_REGS();
L_daad93: /* daad93: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* daad96: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* daad9b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* daad9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daad9f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* daada2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaada7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_daada7(); return;
}

void f_daada7(void) {
  LOAD_REGS();
L_daada7: /* daada7: push 0xdc449c */
  { uint32_t v = 0xdc449cu; esp -= 4; W32(esp, v); }
/* daadac: push 0xde3e50 */
  { uint32_t v = 0xde3e50u; esp -= 4; W32(esp, v); }
/* daadb1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdaadb7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* daadb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daadba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daadbc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daadbe: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaadc3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_daadc3: guest_badaddr(0xdaadc3); return;
}

void f_daae30(void) {
  LOAD_REGS();
L_daae30: /* daae30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daae31: mov ebp, esp */
  ebp = esp;
/* daae33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daae35: push 0xdba7d9 */
  { uint32_t v = 0xdba7d9u; esp -= 4; W32(esp, v); }
/* daae3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daae40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daae41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daae48: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daae4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daae4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daae4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daae4e: xor ebx, ebx */
  ebx = 0;
/* daae50: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daae53: mov esi, ecx */
  esi = ecx;
/* daae55: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* daae58: call 0xd826f3 */
  esp -= 4; W32(esp, 0xdaae5du); SPILL(); f_d826f3(); if (g_unwind) return; RELOAD();
/* daae5d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* daae60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daae61: call dword ptr [0xde8b08] */
  esp -= 4; W32(esp, 0xdaae67u); SPILL(); f_4e1e79(); if (g_unwind) return; /* Core!?appClipboardPaste@@YA?AVFString@@XZ */ RELOAD();
/* daae67: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daae6a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* daae6d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* daae71: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdaae77u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* daae77: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* daae7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daae7d: lea ecx, [esi + 0xc4] */
  ecx = (uint32_t)(esi + 0xc4u);
/* daae83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daae84: call dword ptr [0xde8b04] */
  esp -= 4; W32(esp, 0xdaae8au); SPILL(); f_4e4287(); if (g_unwind) return; /* Core!?appStrncat@@YAPAGPAGPBGH@Z */ RELOAD();
/* daae8a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daae8d: mov word ptr [esi + 0x2c2], bx */
  W16((uint32_t)(esi + 0x2c2u), (ebx & 0xffffu));
/* daae94: xor ecx, ecx */
  ecx = 0;
/* daae96: jmp 0xdaaea0 */
  goto L_daaea0;
L_daaea0: /* daaea0: mov ax, word ptr [esi + ecx*2 + 0xc4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + ecx*2 + 0xc4u))) & 0xffffu);
/* daaea8: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* daaeab: je 0xdaaec4 */
  if (zf) goto L_daaec4;
L_daaead: /* daaead: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* daaeb1: jb 0xdaaeb9 */
  if (cf) goto L_daaeb9;
L_daaeb3: /* daaeb3: cmp ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* daaeb7: jb 0xdaaec1 */
  if (cf) goto L_daaec1;
L_daaeb9: /* daaeb9: mov word ptr [esi + ecx*2 + 0xc4], bx */
  W16((uint32_t)(esi + ecx*2 + 0xc4u), (ebx & 0xffffu));
L_daaec1: /* daaec1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* daaec2: jmp 0xdaaea0 */
  goto L_daaea0;
L_daaec4: /* daaec4: mov ecx, esi */
  ecx = esi;
/* daaec6: call 0xd814ce */
  esp -= 4; W32(esp, 0xdaaecbu); SPILL(); f_d814ce(); if (g_unwind) return; RELOAD();
/* daaecb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* daaece: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* daaed1: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdaaed7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* daaed7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daaeda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daaedb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daaedc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daaee3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daaee4: mov esp, ebp */
  esp = ebp;
/* daaee6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daaee7: ret  */
  esp += 4; SPILL(); return;
}

void f_daae98(void) {
  LOAD_REGS();
L_daae98: /* daae98: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* daae9f: nop  */
L_daaea0: /* daaea0: mov ax, word ptr [esi + ecx*2 + 0xc4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + ecx*2 + 0xc4u))) & 0xffffu);
/* daaea8: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* daaeab: je 0xdaaec4 */
  if (zf) goto L_daaec4;
L_daaead: /* daaead: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* daaeb1: jb 0xdaaeb9 */
  if (cf) goto L_daaeb9;
L_daaeb3: /* daaeb3: cmp ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* daaeb7: jb 0xdaaec1 */
  if (cf) goto L_daaec1;
L_daaeb9: /* daaeb9: mov word ptr [esi + ecx*2 + 0xc4], bx */
  W16((uint32_t)(esi + ecx*2 + 0xc4u), (ebx & 0xffffu));
L_daaec1: /* daaec1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* daaec2: jmp 0xdaaea0 */
  goto L_daaea0;
L_daaec4: /* daaec4: mov ecx, esi */
  ecx = esi;
/* daaec6: call 0xd814ce */
  esp -= 4; W32(esp, 0xdaaecbu); SPILL(); f_d814ce(); if (g_unwind) return; RELOAD();
/* daaecb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* daaece: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* daaed1: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdaaed7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* daaed7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* daaeda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daaedb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daaedc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daaee3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daaee4: mov esp, ebp */
  esp = ebp;
/* daaee6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daaee7: ret  */
  esp += 4; SPILL(); return;
}

void f_daaee8(void) {
  LOAD_REGS();
L_daaee8: /* daaee8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* daaeeb: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* daaef0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* daaef3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daaef4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* daaef7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaaefcu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_daaefc(); return;
}

void f_daaefc(void) {
  LOAD_REGS();
L_daaefc: /* daaefc: push 0xdc44d0 */
  { uint32_t v = 0xdc44d0u; esp -= 4; W32(esp, v); }
/* daaf01: push 0xde3e68 */
  { uint32_t v = 0xde3e68u; esp -= 4; W32(esp, v); }
/* daaf06: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdaaf0cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* daaf0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daaf0f: xor ebx, ebx */
  ebx = 0;
/* daaf11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daaf12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daaf13: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdaaf18u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_daaf18: guest_badaddr(0xdaaf18); return;
}

void f_daaf60(void) {
  LOAD_REGS();
L_daaf60: /* daaf60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daaf61: mov ebp, esp */
  ebp = esp;
/* daaf63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daaf65: push 0xdba7f0 */
  { uint32_t v = 0xdba7f0u; esp -= 4; W32(esp, v); }
/* daaf6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daaf70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daaf71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daaf78: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daaf7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daaf7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daaf80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daaf81: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daaf84: mov esi, ecx */
  esi = ecx;
/* daaf86: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* daaf8d: call 0xd826f3 */
  esp -= 4; W32(esp, 0xdaaf92u); SPILL(); f_d826f3(); if (g_unwind) return; RELOAD();
/* daaf92: lea ebx, [esi + 0xc4] */
  ebx = (uint32_t)(esi + 0xc4u);
/* daaf98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daaf99: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xdaaf9fu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* daaf9f: mov di, word ptr [ebp + 8] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x8u))) & 0xffffu);
/* daafa3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daafa6: cmp di, 0x20 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* daafaa: jb 0xdaafce */
  if (cf) goto L_daafce;
L_daafac: /* daafac: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* daafb1: jae 0xdab097 */
  if (!cf) goto L_dab097;
L_daafb7: /* daafb7: mov word ptr [esi + eax*2 + 0xc4], di */
  W16((uint32_t)(esi + eax*2 + 0xc4u), (edi & 0xffffu));
/* daafbf: mov word ptr [esi + eax*2 + 0xc6], 0 */
  W16((uint32_t)(esi + eax*2 + 0xc6u), 0x0u);
/* daafc9: jmp 0xdab097 */
  goto L_dab097;
L_daafce: /* daafce: cmp di, 0xd */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* daafd2: jne 0xdab065 */
  if (!zf) goto L_dab065;
L_daafd8: /* daafd8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daafdb: jle 0xdab097 */
  if ((zf || sf != of)) goto L_dab097;
L_daafe1: /* daafe1: mov ecx, esi */
  ecx = esi;
/* daafe3: call 0xd814ce */
  esp -= 4; W32(esp, 0xdaafe8u); SPILL(); f_d814ce(); if (g_unwind) return; RELOAD();
/* daafe8: push 0xde3e70 */
  { uint32_t v = 0xde3e70u; esp -= 4; W32(esp, v); }
/* daafed: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* daaff0: call 0xd8179e */
  esp -= 4; W32(esp, 0xdaaff5u); SPILL(); f_d8179e(); if (g_unwind) return; RELOAD();
/* daaff5: mov edi, dword ptr [0xde88b4] */
  edi = R32((uint32_t)(0xde88b4u));
/* daaffb: lea eax, [esi + 0xc6] */
  eax = (uint32_t)(esi + 0xc6u);
/* dab001: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab002: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* dab008: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab009: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdab00bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab00b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dab00e: push 0xde3e78 */
  { uint32_t v = 0xde3e78u; esp -= 4; W32(esp, v); }
/* dab013: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab014: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdab016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab016: mov ecx, dword ptr [esi + 0xb8] */
  ecx = R32((uint32_t)(esi + 0xb8u));
/* dab01c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dab01f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab021: je 0xdab058 */
  if (zf) goto L_dab058;
L_dab023: /* dab023: mov eax, dword ptr [0xde8a10] */
  eax = R32((uint32_t)(0xde8a10u));
/* dab028: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* dab02a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dab02c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab02d: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* dab033: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab034: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xdab036u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab036: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab038: jne 0xdab058 */
  if (!zf) goto L_dab058;
L_dab03a: /* dab03a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab03b: push 0xde3e7c */
  { uint32_t v = 0xde3e7cu; esp -= 4; W32(esp, v); }
/* dab040: push 0xde3e88 */
  { uint32_t v = 0xde3e88u; esp -= 4; W32(esp, v); }
/* dab045: call dword ptr [0xde8978] */
  esp -= 4; W32(esp, 0xdab04bu); SPILL(); f_4e2702(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBDPBG1@Z */ RELOAD();
/* dab04b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dab04e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab04f: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* dab052: call dword ptr [0xde8b0c] */
  esp -= 4; W32(esp, 0xdab058u); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
L_dab058: /* dab058: mov ecx, esi */
  ecx = esi;
/* dab05a: call 0xd826f3 */
  esp -= 4; W32(esp, 0xdab05fu); SPILL(); f_d826f3(); if (g_unwind) return; RELOAD();
/* dab05f: mov di, word ptr [ebp + 8] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x8u))) & 0xffffu);
/* dab063: jmp 0xdab097 */
  goto L_dab097;
L_dab065: /* dab065: cmp di, 8 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x8u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* dab069: je 0xdab071 */
  if (zf) goto L_dab071;
L_dab06b: /* dab06b: cmp di, 0x7f */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* dab06f: jne 0xdab082 */
  if (!zf) goto L_dab082;
L_dab071: /* dab071: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dab074: jle 0xdab082 */
  if ((zf || sf != of)) goto L_dab082;
L_dab076: /* dab076: mov word ptr [esi + eax*2 + 0xc2], 0 */
  W16((uint32_t)(esi + eax*2 + 0xc2u), 0x0u);
/* dab080: jmp 0xdab097 */
  goto L_dab097;
L_dab082: /* dab082: cmp di, 0x1b */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x1bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* dab086: jne 0xdab097 */
  if (!zf) goto L_dab097;
L_dab088: /* dab088: push 0xde3e90 */
  { uint32_t v = 0xde3e90u; esp -= 4; W32(esp, v); }
/* dab08d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab08e: call dword ptr [0xde88b4] */
  esp -= 4; W32(esp, 0xdab094u); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* dab094: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dab097: /* dab097: mov ecx, esi */
  ecx = esi;
/* dab099: call 0xd814ce */
  esp -= 4; W32(esp, 0xdab09eu); SPILL(); f_d814ce(); if (g_unwind) return; RELOAD();
/* dab09e: cmp di, 0x16 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x16u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* dab0a2: jne 0xdab0ae */
  if (!zf) goto L_dab0ae;
L_dab0a4: /* dab0a4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* dab0a6: mov ecx, esi */
  ecx = esi;
/* dab0a8: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xdab0aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dab0ae: /* dab0ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dab0b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dab0b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dab0b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dab0ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dab0bb: mov esp, ebp */
  esp = ebp;
/* dab0bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dab0be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dab0c1(void) {
  LOAD_REGS();
L_dab0c1: /* dab0c1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* dab0c4: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dab0c9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* dab0cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab0cd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* dab0d0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdab0d5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dab0d5(); return;
}

void f_dab0d5(void) {
  LOAD_REGS();
L_dab0d5: /* dab0d5: push 0xdc44f8 */
  { uint32_t v = 0xdc44f8u; esp -= 4; W32(esp, v); }
/* dab0da: push 0xde3e94 */
  { uint32_t v = 0xde3e94u; esp -= 4; W32(esp, v); }
/* dab0df: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdab0e5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dab0e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dab0e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dab0ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dab0ec: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdab0f1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dab0f1: guest_badaddr(0xdab0f1); return;
}

void f_dab170(void) {
  LOAD_REGS();
L_dab170: /* dab170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dab171: mov ebp, esp */
  ebp = esp;
/* dab173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dab175: push 0xdba811 */
  { uint32_t v = 0xdba811u; esp -= 4; W32(esp, v); }
/* dab17a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dab180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dab188: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dab18b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* dab18e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab18f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab190: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dab191: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dab194: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dab195: mov ebx, ecx */
  ebx = ecx;
/* dab197: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dab19e: call 0xd827d9 */
  esp -= 4; W32(esp, 0xdab1a3u); SPILL(); f_d827d9(); if (g_unwind) return; RELOAD();
/* dab1a3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab1a5: je 0xdab327 */
  if (zf) goto L_dab327;
L_dab1ab: /* dab1ab: mov eax, dword ptr [ebx + 0x2cc] */
  eax = R32((uint32_t)(ebx + 0x2ccu));
/* dab1b1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dab1b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab1b5: je 0xdab30c */
  if (zf) goto L_dab30c;
L_dab1bb: /* dab1bb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dab1bd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab1bf: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xdab1c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab1c1: lea ecx, [ebx + 0x2d0] */
  ecx = (uint32_t)(ebx + 0x2d0u);
/* dab1c7: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdab1cdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dab1cd: mov esi, dword ptr [0xde8b1c] */
  esi = R32((uint32_t)(0xde8b1cu));
/* dab1d3: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* dab1d5: mov ecx, dword ptr [0xde8a64] */
  ecx = R32((uint32_t)(0xde8a64u));
/* dab1db: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dab1dd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dab1df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab1e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dab1e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab1e3: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xdab1e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab1e6: mov esi, eax */
  esi = eax;
/* dab1e8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab1ea: je 0xdab2df */
  if (zf) goto L_dab2df;
L_dab1f0: /* dab1f0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* dab1f2: mov ecx, esi */
  ecx = esi;
/* dab1f4: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0xdab1f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab1f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab1f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab1fa: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* dab1fd: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xdab203u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* dab203: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* dab206: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dab209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* dab20b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab20c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab20d: mov ecx, esi */
  ecx = esi;
/* dab20f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dab213: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xdab216u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab216: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* dab218: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab21a: mov ecx, esi */
  ecx = esi;
/* dab21c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xdab21eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab21e: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* dab221: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dab224: xor eax, eax */
  eax = 0;
/* dab226: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
/* dab229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_dab230: /* dab230: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dab232: jle 0xdab250 */
  if ((zf || sf != of)) goto L_dab250;
L_dab234: /* dab234: cmp eax, dword ptr [ebx + 0xbc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xbcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dab23a: jge 0xdab250 */
  if ((sf == of)) goto L_dab250;
L_dab23c: /* dab23c: xor edx, edx */
  edx = 0;
/* dab23e: cmp byte ptr [esi + ecx], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* dab242: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* dab245: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dab247: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* dab248: jmp 0xdab230 */
  goto L_dab230;
L_dab250: /* dab250: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dab252: jge 0xdab25d */
  if ((sf == of)) goto L_dab25d;
L_dab254: /* dab254: cmp byte ptr [esi + ecx], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* dab258: jne 0xdab25d */
  if (!zf) goto L_dab25d;
L_dab25a: /* dab25a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* dab25b: jmp 0xdab250 */
  goto L_dab250;
L_dab25d: /* dab25d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab25f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab261: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* dab264: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdab26au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dab26a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dab26d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab26f: mov byte ptr [eax + ecx], 0x3e */
  W8((uint32_t)(eax + ecx), 0x3eu);
/* dab273: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab275: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* dab278: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdab27eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dab27e: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dab281: mov byte ptr [eax + edx], 0 */
  W8((uint32_t)(eax + edx), 0x0u);
/* dab285: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* dab288: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab289: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dab28c: call dword ptr [0xde8b18] */
  esp -= 4; W32(esp, 0xdab292u); SPILL(); f_4e1082(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@H@Z */ RELOAD();
/* dab292: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* dab296: xor edi, edi */
  edi = 0;
L_dab298: /* dab298: cmp edi, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dab29b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dab29e: jge 0xdab2b5 */
  if ((sf == of)) goto L_dab2b5;
L_dab2a0: /* dab2a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dab2a1: call dword ptr [0xde8b14] */
  esp -= 4; W32(esp, 0xdab2a7u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* dab2a7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dab2aa: movzx dx, byte ptr [edi + ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edi + ecx)))) & 0xffffu);
/* dab2af: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* dab2b2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* dab2b3: jmp 0xdab298 */
  goto L_dab298;
L_dab2b5: /* dab2b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab2b6: call dword ptr [0xde8b14] */
  esp -= 4; W32(esp, 0xdab2bcu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* dab2bc: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* dab2bf: lea ecx, [ebx + 0x40] */
  ecx = (uint32_t)(ebx + 0x40u);
/* dab2c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab2c3: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xdab2c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab2c6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dab2c9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dab2cd: call dword ptr [0xde8b10] */
  esp -= 4; W32(esp, 0xdab2d3u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* dab2d3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* dab2d6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dab2da: call 0xd813cf */
  esp -= 4; W32(esp, 0xdab2dfu); SPILL(); f_d813cf(); if (g_unwind) return; RELOAD();
L_dab2df: /* dab2df: lea ecx, [ebx + 0x2d0] */
  ecx = (uint32_t)(ebx + 0x2d0u);
/* dab2e5: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdab2ebu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dab2eb: mov esi, dword ptr [0xde8b1c] */
  esi = R32((uint32_t)(0xde8b1cu));
/* dab2f1: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* dab2f3: mov ecx, dword ptr [0xde8a64] */
  ecx = R32((uint32_t)(0xde8a64u));
/* dab2f9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dab2fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dab2fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab2fe: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* dab300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab301: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xdab304u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab304: mov ecx, dword ptr [ebx + 0x2cc] */
  ecx = R32((uint32_t)(ebx + 0x2ccu));
/* dab30a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_dab30c: /* dab30c: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* dab30f: lea esi, [ebx + 0x40] */
  esi = (uint32_t)(ebx + 0x40u);
/* dab312: mov ecx, esi */
  ecx = esi;
/* dab314: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xdab317u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab317: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab319: mov ecx, esi */
  ecx = esi;
/* dab31b: call 0xd81b81 */
  esp -= 4; W32(esp, 0xdab320u); SPILL(); f_d81b81(); if (g_unwind) return; RELOAD();
/* dab320: mov ecx, esi */
  ecx = esi;
/* dab322: call 0xd81a14 */
  esp -= 4; W32(esp, 0xdab327u); SPILL(); f_d81a14(); if (g_unwind) return; RELOAD();
L_dab327: /* dab327: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dab32a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dab32b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dab32c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dab333: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dab334: mov esp, ebp */
  esp = ebp;
/* dab336: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dab337: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dab24a(void) {
  LOAD_REGS();
L_dab24a: /* dab24a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_dab250: /* dab250: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dab252: jge 0xdab25d */
  if ((sf == of)) goto L_dab25d;
L_dab254: /* dab254: cmp byte ptr [esi + ecx], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* dab258: jne 0xdab25d */
  if (!zf) goto L_dab25d;
L_dab25a: /* dab25a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* dab25b: jmp 0xdab250 */
  goto L_dab250;
L_dab25d: /* dab25d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab25f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab261: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* dab264: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdab26au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dab26a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dab26d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab26f: mov byte ptr [eax + ecx], 0x3e */
  W8((uint32_t)(eax + ecx), 0x3eu);
/* dab273: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab275: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* dab278: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdab27eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dab27e: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dab281: mov byte ptr [eax + edx], 0 */
  W8((uint32_t)(eax + edx), 0x0u);
/* dab285: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* dab288: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab289: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dab28c: call dword ptr [0xde8b18] */
  esp -= 4; W32(esp, 0xdab292u); SPILL(); f_4e1082(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@H@Z */ RELOAD();
/* dab292: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* dab296: xor edi, edi */
  edi = 0;
L_dab298: /* dab298: cmp edi, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dab29b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dab29e: jge 0xdab2b5 */
  if ((sf == of)) goto L_dab2b5;
L_dab2a0: /* dab2a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dab2a1: call dword ptr [0xde8b14] */
  esp -= 4; W32(esp, 0xdab2a7u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* dab2a7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dab2aa: movzx dx, byte ptr [edi + ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edi + ecx)))) & 0xffffu);
/* dab2af: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* dab2b2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* dab2b3: jmp 0xdab298 */
  goto L_dab298;
L_dab2b5: /* dab2b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab2b6: call dword ptr [0xde8b14] */
  esp -= 4; W32(esp, 0xdab2bcu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* dab2bc: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* dab2bf: lea ecx, [ebx + 0x40] */
  ecx = (uint32_t)(ebx + 0x40u);
/* dab2c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab2c3: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xdab2c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab2c6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dab2c9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dab2cd: call dword ptr [0xde8b10] */
  esp -= 4; W32(esp, 0xdab2d3u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* dab2d3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* dab2d6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dab2da: call 0xd813cf */
  esp -= 4; W32(esp, 0xdab2dfu); SPILL(); f_d813cf(); if (g_unwind) return; RELOAD();
/* dab2df: lea ecx, [ebx + 0x2d0] */
  ecx = (uint32_t)(ebx + 0x2d0u);
/* dab2e5: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdab2ebu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dab2eb: mov esi, dword ptr [0xde8b1c] */
  esi = R32((uint32_t)(0xde8b1cu));
/* dab2f1: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* dab2f3: mov ecx, dword ptr [0xde8a64] */
  ecx = R32((uint32_t)(0xde8a64u));
/* dab2f9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dab2fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dab2fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab2fe: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* dab300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab301: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xdab304u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab304: mov ecx, dword ptr [ebx + 0x2cc] */
  ecx = R32((uint32_t)(ebx + 0x2ccu));
/* dab30a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* dab30c: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* dab30f: lea esi, [ebx + 0x40] */
  esi = (uint32_t)(ebx + 0x40u);
/* dab312: mov ecx, esi */
  ecx = esi;
/* dab314: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xdab317u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab317: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab319: mov ecx, esi */
  ecx = esi;
/* dab31b: call 0xd81b81 */
  esp -= 4; W32(esp, 0xdab320u); SPILL(); f_d81b81(); if (g_unwind) return; RELOAD();
/* dab320: mov ecx, esi */
  ecx = esi;
/* dab322: call 0xd81a14 */
  esp -= 4; W32(esp, 0xdab327u); SPILL(); f_d81a14(); if (g_unwind) return; RELOAD();
/* dab327: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dab32a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dab32b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dab32c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dab333: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dab334: mov esp, ebp */
  esp = ebp;
/* dab336: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dab337: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dab33a(void) {
  LOAD_REGS();
L_dab33a: /* dab33a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* dab33d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dab342: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* dab345: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab346: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* dab349: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdab34eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dab34e(); return;
}

void f_dab34e(void) {
  LOAD_REGS();
L_dab34e: /* dab34e: push 0xdc4528 */
  { uint32_t v = 0xdc4528u; esp -= 4; W32(esp, v); }
/* dab353: push 0xde3ebc */
  { uint32_t v = 0xde3ebcu; esp -= 4; W32(esp, v); }
/* dab358: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdab35eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dab35e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dab361: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dab363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dab365: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdab36au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dab36a: guest_badaddr(0xdab36a); return;
}

void f_dab3f0(void) {
  LOAD_REGS();
L_dab3f0: /* dab3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dab3f1: mov ebp, esp */
  ebp = esp;
/* dab3f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dab3f5: push 0xdba830 */
  { uint32_t v = 0xdba830u; esp -= 4; W32(esp, v); }
/* dab3fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dab400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dab408: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dab40b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* dab40e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab40f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab410: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dab411: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dab414: xor ebx, ebx */
  ebx = 0;
/* dab416: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab418: mov esi, ecx */
  esi = ecx;
/* dab41a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* dab41d: call 0xd8256d */
  esp -= 4; W32(esp, 0xdab422u); SPILL(); f_d8256d(); if (g_unwind) return; RELOAD();
/* dab422: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* dab425: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* dab427: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab428: mov ecx, esi */
  ecx = esi;
/* dab42a: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xdab42du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab42d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* dab430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab431: call dword ptr [0xde8f38] */
  esp -= 4; W32(esp, 0xdab437u); SPILL(); call_ind(R32(0xde8f38u)); if (g_unwind) return; /* USER32!UpdateWindow */ RELOAD();
/* dab437: mov edx, dword ptr [0xde8b24] */
  edx = R32((uint32_t)(0xde8b24u));
/* dab43d: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* dab440: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* dab442: mov eax, dword ptr [0xde8b20] */
  eax = R32((uint32_t)(0xde8b20u));
/* dab447: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dab449: jne 0xdab5bc */
  if (!zf) goto L_dab5bc;
L_dab44f: /* dab44f: mov eax, dword ptr [0xde8934] */
  eax = R32((uint32_t)(0xde8934u));
/* dab454: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dab456: jne 0xdab5bc */
  if (!zf) goto L_dab5bc;
L_dab45c: /* dab45c: mov dword ptr [0xde5038], 0x98 */
  W32((uint32_t)(0xde5038u), 0x98u);
/* dab466: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* dab469: mov dword ptr [0xde503c], ecx */
  W32((uint32_t)(0xde503cu), ecx);
/* dab46f: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* dab475: mov dword ptr [0xde5040], ebx */
  W32((uint32_t)(0xde5040u), ebx);
/* dab47b: mov edi, 7 */
  edi = 0x7u;
/* dab480: mov dword ptr [0xde5044], edi */
  W32((uint32_t)(0xde5044u), edi);
/* dab486: mov edx, dword ptr [esi + 0x2c8] */
  edx = R32((uint32_t)(esi + 0x2c8u));
/* dab48c: mov dword ptr [0xde5048], edx */
  W32((uint32_t)(0xde5048u), edx);
/* dab492: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dab494: mov ecx, dword ptr [0xde50e8] */
  ecx = R32((uint32_t)(0xde50e8u));
/* dab49a: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dab49c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* dab49e: je 0xdab4bd */
  if (zf) goto L_dab4bd;
L_dab4a0: /* dab4a0: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* dab4a2: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* dab4a4: and edx, 0x6ed4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* dab4aa: add edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* dab4b0: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* dab4b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab4b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab4b5: call dword ptr [0xde8e44] */
  esp -= 4; W32(esp, 0xdab4bbu); SPILL(); call_ind(R32(0xde8e44u)); if (g_unwind) return; /* USER32!LoadIconW */ RELOAD();
/* dab4bb: jmp 0xdab4d8 */
  goto L_dab4d8;
L_dab4bd: /* dab4bd: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* dab4bf: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* dab4c1: and edx, 0x6ed4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* dab4c7: add edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* dab4cd: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* dab4d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab4d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab4d2: call dword ptr [0xde8ecc] */
  esp -= 4; W32(esp, 0xdab4d8u); SPILL(); call_ind(R32(0xde8eccu)); if (g_unwind) return; /* USER32!LoadIconA */ RELOAD();
L_dab4d8: /* dab4d8: mov edx, dword ptr [0xde88f8] */
  edx = R32((uint32_t)(0xde88f8u));
/* dab4de: mov dword ptr [0xde504c], eax */
  W32((uint32_t)(0xde504cu), eax);
/* dab4e3: mov word ptr [0xde5050], bx */
  W16((uint32_t)(0xde5050u), (ebx & 0xffffu));
/* dab4ea: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dab4ec: je 0xdab599 */
  if (zf) goto L_dab599;
L_dab4f2: /* dab4f2: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* dab4f7: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dab4f9: jne 0xdab599 */
  if (!zf) goto L_dab599;
L_dab4ff: /* dab4ff: mov dword ptr [0xde50f8], 0x58 */
  W32((uint32_t)(0xde50f8u), 0x58u);
/* dab509: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* dab50c: mov dword ptr [0xde50fc], ecx */
  W32((uint32_t)(0xde50fcu), ecx);
/* dab512: mov dword ptr [0xde5100], ebx */
  W32((uint32_t)(0xde5100u), ebx);
/* dab518: mov dword ptr [0xde5104], edi */
  W32((uint32_t)(0xde5104u), edi);
/* dab51e: mov edx, dword ptr [esi + 0x2c8] */
  edx = R32((uint32_t)(esi + 0x2c8u));
/* dab524: mov dword ptr [0xde5108], edx */
  W32((uint32_t)(0xde5108u), edx);
/* dab52a: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dab52c: je 0xdab557 */
  if (zf) goto L_dab557;
L_dab52e: /* dab52e: mov eax, dword ptr [0xde8934] */
  eax = R32((uint32_t)(0xde8934u));
/* dab533: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dab535: mov eax, dword ptr [0xde50e8] */
  eax = R32((uint32_t)(0xde50e8u));
/* dab53a: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* dab53c: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* dab53e: and ecx, 0x6ed4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* dab544: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* dab54a: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* dab54d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dab54e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab54f: call dword ptr [0xde8e44] */
  esp -= 4; W32(esp, 0xdab555u); SPILL(); call_ind(R32(0xde8e44u)); if (g_unwind) return; /* USER32!LoadIconW */ RELOAD();
/* dab555: jmp 0xdab580 */
  goto L_dab580;
L_dab557: /* dab557: mov ecx, dword ptr [0xde8934] */
  ecx = R32((uint32_t)(0xde8934u));
/* dab55d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dab55f: mov ecx, dword ptr [0xde50e8] */
  ecx = R32((uint32_t)(0xde50e8u));
/* dab565: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* dab567: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* dab569: and edx, 0x6ed4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* dab56f: add edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* dab575: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* dab578: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab579: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab57a: call dword ptr [0xde8ecc] */
  esp -= 4; W32(esp, 0xdab580u); SPILL(); call_ind(R32(0xde8eccu)); if (g_unwind) return; /* USER32!LoadIconA */ RELOAD();
L_dab580: /* dab580: push 0xde50f8 */
  { uint32_t v = 0xde50f8u; esp -= 4; W32(esp, v); }
/* dab585: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab586: mov dword ptr [0xde510c], eax */
  W32((uint32_t)(0xde510cu), eax);
/* dab58b: mov byte ptr [0xde5110], bl */
  W8((uint32_t)(0xde5110u), (ebx & 0xffu));
/* dab591: call dword ptr [0xde8dbc] */
  esp -= 4; W32(esp, 0xdab597u); SPILL(); call_ind(R32(0xde8dbcu)); if (g_unwind) return; /* SHELL32!Shell_NotifyIconA */ RELOAD();
/* dab597: jmp 0xdab5a5 */
  goto L_dab5a5;
L_dab599: /* dab599: push 0xde5038 */
  { uint32_t v = 0xde5038u; esp -= 4; W32(esp, v); }
/* dab59e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab59f: call dword ptr [0xde51cc] */
  { uint32_t t = R32((uint32_t)(0xde51ccu)); esp -= 4; W32(esp, 0xdab5a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dab5a5: /* dab5a5: push 0xda1c30 */
  { uint32_t v = 0xda1c30u; esp -= 4; W32(esp, v); }
/* dab5aa: mov dword ptr [0xde51c4], 1 */
  W32((uint32_t)(0xde51c4u), 0x1u);
/* dab5b4: call 0xdb7da7 */
  esp -= 4; W32(esp, 0xdab5b9u); SPILL(); f_db7da7(); if (g_unwind) return; RELOAD();
/* dab5b9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dab5bc: /* dab5bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dab5bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dab5c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dab5c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dab5c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dab5c9: mov esp, ebp */
  esp = ebp;
/* dab5cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dab5cc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_dab5cf(void) {
  LOAD_REGS();
L_dab5cf: /* dab5cf: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* dab5d2: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dab5d7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* dab5da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab5db: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* dab5de: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdab5e3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dab5e3(); return;
}

void f_dab5e3(void) {
  LOAD_REGS();
L_dab5e3: /* dab5e3: push 0xdc4558 */
  { uint32_t v = 0xdc4558u; esp -= 4; W32(esp, v); }
/* dab5e8: push 0xde3ec4 */
  { uint32_t v = 0xde3ec4u; esp -= 4; W32(esp, v); }
/* dab5ed: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdab5f3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dab5f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dab5f6: xor ebx, ebx */
  ebx = 0;
/* dab5f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab5f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab5fa: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdab5ffu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dab5ff: guest_badaddr(0xdab5ff); return;
}

void f_dab690(void) {
  LOAD_REGS();
L_dab690: /* dab690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dab691: mov ebp, esp */
  ebp = esp;
/* dab693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dab695: push 0xdba840 */
  { uint32_t v = 0xdba840u; esp -= 4; W32(esp, v); }
/* dab69a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dab6a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab6a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dab6a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dab6ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab6ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab6ad: mov esi, ecx */
  esi = ecx;
/* dab6af: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* dab6b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab6b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dab6b5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dab6b8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dab6bf: je 0xdab6d9 */
  if (zf) goto L_dab6d9;
L_dab6c1: /* dab6c1: push 0x81e */
  { uint32_t v = 0x81eu; esp -= 4; W32(esp, v); }
/* dab6c6: push 0xde3ff4 */
  { uint32_t v = 0xde3ff4u; esp -= 4; W32(esp, v); }
/* dab6cb: push 0xde4000 */
  { uint32_t v = 0xde4000u; esp -= 4; W32(esp, v); }
/* dab6d0: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xdab6d6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* dab6d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dab6d9: /* dab6d9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dab6db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab6dd: mov ecx, 0xde51e0 */
  ecx = 0xde51e0u;
/* dab6e2: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdab6e8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dab6e8: mov ecx, dword ptr [0xde51e0] */
  ecx = R32((uint32_t)(0xde51e0u));
/* dab6ee: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* dab6f1: mov ecx, dword ptr [0xde51bc] */
  ecx = R32((uint32_t)(0xde51bcu));
/* dab6f7: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* dab6fd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* dab6fe: mov dword ptr [0xde51bc], ecx */
  W32((uint32_t)(0xde51bcu), ecx);
/* dab704: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dab707: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* dab70a: je 0xdab72f */
  if (zf) goto L_dab72f;
L_dab70c: /* dab70c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab70e: je 0xdab715 */
  if (zf) goto L_dab715;
L_dab710: /* dab710: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* dab713: jmp 0xdab717 */
  goto L_dab717;
L_dab715: /* dab715: xor eax, eax */
  eax = 0;
L_dab717: /* dab717: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* dab71a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab71b: push 0xd813b6 */
  { uint32_t v = 0xd813b6u; esp -= 4; W32(esp, v); }
/* dab720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab721: movzx eax, word ptr [esi + 0xc] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* dab725: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab726: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab727: call dword ptr [0xde8eb0] */
  esp -= 4; W32(esp, 0xdab72du); SPILL(); call_ind(R32(0xde8eb0u)); if (g_unwind) return; /* USER32!DialogBoxParamW */ RELOAD();
/* dab72d: jmp 0xdab750 */
  goto L_dab750;
L_dab72f: /* dab72f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab731: je 0xdab738 */
  if (zf) goto L_dab738;
L_dab733: /* dab733: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* dab736: jmp 0xdab73a */
  goto L_dab73a;
L_dab738: /* dab738: xor eax, eax */
  eax = 0;
L_dab73a: /* dab73a: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* dab73e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab73f: push 0xd813b6 */
  { uint32_t v = 0xd813b6u; esp -= 4; W32(esp, v); }
/* dab744: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab745: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* dab748: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dab749: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab74a: call dword ptr [0xde8eac] */
  esp -= 4; W32(esp, 0xdab750u); SPILL(); call_ind(R32(0xde8eacu)); if (g_unwind) return; /* USER32!DialogBoxParamA */ RELOAD();
L_dab750: /* dab750: mov ecx, dword ptr [0xde51bc] */
  ecx = R32((uint32_t)(0xde51bcu));
/* dab756: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* dab757: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dab758: mov dword ptr [0xde51bc], ecx */
  W32((uint32_t)(0xde51bcu), ecx);
/* dab75e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dab761: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dab762: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dab769: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dab76a: mov esp, ebp */
  esp = ebp;
/* dab76c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dab76d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dab770(void) {
  LOAD_REGS();
L_dab770: /* dab770: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* dab773: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dab778: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* dab77b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dab77c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* dab77f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdab784u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dab784(); return;
}

void f_dab784(void) {
  LOAD_REGS();
L_dab784: /* dab784: push 0xdc4580 */
  { uint32_t v = 0xdc4580u; esp -= 4; W32(esp, v); }
/* dab789: push 0xde400c */
  { uint32_t v = 0xde400cu; esp -= 4; W32(esp, v); }
/* dab78e: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdab794u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dab794: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dab797: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dab799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dab79b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdab7a0u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dab7a0: guest_badaddr(0xdab7a0); return;
}

void f_dab800(void) {
  LOAD_REGS();
L_dab800: /* dab800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dab801: mov ebp, esp */
  ebp = esp;
/* dab803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dab805: push 0xdba850 */
  { uint32_t v = 0xdba850u; esp -= 4; W32(esp, v); }
/* dab80a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dab810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dab818: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dab81b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab81c: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* dab822: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab823: mov esi, ecx */
  esi = ecx;
/* dab825: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* dab828: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab82a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dab82b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dab82e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dab835: je 0xdab84b */
  if (zf) goto L_dab84b;
L_dab837: /* dab837: push 0x82a */
  { uint32_t v = 0x82au; esp -= 4; W32(esp, v); }
/* dab83c: push 0xde4014 */
  { uint32_t v = 0xde4014u; esp -= 4; W32(esp, v); }
/* dab841: push 0xde4020 */
  { uint32_t v = 0xde4020u; esp -= 4; W32(esp, v); }
/* dab846: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdab848u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab848: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dab84b: /* dab84b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dab84d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab84f: mov ecx, 0xde51e0 */
  ecx = 0xde51e0u;
/* dab854: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdab85au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dab85a: mov ecx, dword ptr [0xde51e0] */
  ecx = R32((uint32_t)(0xde51e0u));
/* dab860: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* dab863: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* dab866: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab868: je 0xdab87a */
  if (zf) goto L_dab87a;
L_dab86a: /* dab86a: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* dab86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab86e: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* dab871: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab872: call dword ptr [0xde8dfc] */
  esp -= 4; W32(esp, 0xdab878u); SPILL(); call_ind(R32(0xde8dfcu)); if (g_unwind) return; /* USER32!GetDlgItem */ RELOAD();
/* dab878: jmp 0xdab888 */
  goto L_dab888;
L_dab87a: /* dab87a: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* dab87d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab87f: je 0xdab886 */
  if (zf) goto L_dab886;
L_dab881: /* dab881: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* dab884: jmp 0xdab888 */
  goto L_dab888;
L_dab886: /* dab886: xor eax, eax */
  eax = 0;
L_dab888: /* dab888: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* dab88e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dab891: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab892: push 0xd813b6 */
  { uint32_t v = 0xd813b6u; esp -= 4; W32(esp, v); }
/* dab897: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab898: je 0xdab8ad */
  if (zf) goto L_dab8ad;
L_dab89a: /* dab89a: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* dab89e: mov eax, dword ptr [0xde50e8] */
  eax = R32((uint32_t)(0xde50e8u));
/* dab8a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dab8a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab8a5: call dword ptr [0xde8eb8] */
  esp -= 4; W32(esp, 0xdab8abu); SPILL(); call_ind(R32(0xde8eb8u)); if (g_unwind) return; /* USER32!CreateDialogParamW */ RELOAD();
/* dab8ab: jmp 0xdab8bf */
  goto L_dab8bf;
L_dab8ad: /* dab8ad: movzx ecx, word ptr [esi + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* dab8b1: mov edx, dword ptr [0xde50e8] */
  edx = R32((uint32_t)(0xde50e8u));
/* dab8b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab8b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dab8b9: call dword ptr [0xde8eb4] */
  esp -= 4; W32(esp, 0xdab8bfu); SPILL(); call_ind(R32(0xde8eb4u)); if (g_unwind) return; /* USER32!CreateDialogParamA */ RELOAD();
L_dab8bf: /* dab8bf: mov edi, eax */
  edi = eax;
/* dab8c1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dab8c3: jne 0xdab8d9 */
  if (!zf) goto L_dab8d9;
L_dab8c5: /* dab8c5: push 0x82e */
  { uint32_t v = 0x82eu; esp -= 4; W32(esp, v); }
/* dab8ca: push 0xde4028 */
  { uint32_t v = 0xde4028u; esp -= 4; W32(esp, v); }
/* dab8cf: push 0xde4034 */
  { uint32_t v = 0xde4034u; esp -= 4; W32(esp, v); }
/* dab8d4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdab8d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab8d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dab8d9: /* dab8d9: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dab8dc: je 0xdab8f2 */
  if (zf) goto L_dab8f2;
L_dab8de: /* dab8de: push 0x82f */
  { uint32_t v = 0x82fu; esp -= 4; W32(esp, v); }
/* dab8e3: push 0xde4040 */
  { uint32_t v = 0xde4040u; esp -= 4; W32(esp, v); }
/* dab8e8: push 0xde404c */
  { uint32_t v = 0xde404cu; esp -= 4; W32(esp, v); }
/* dab8ed: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdab8efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab8ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dab8f2: /* dab8f2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* dab8f5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* dab8f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab8f8: mov ecx, esi */
  ecx = esi;
/* dab8fa: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xdab8fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dab8fd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dab900: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dab901: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dab902: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dab909: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dab90a: mov esp, ebp */
  esp = ebp;
/* dab90c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dab90d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_dab910(void) {
  LOAD_REGS();
L_dab910: /* dab910: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* dab913: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dab918: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* dab91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab91c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* dab91f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdab924u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dab924(); return;
}

void f_dab924(void) {
  LOAD_REGS();
L_dab924: /* dab924: push 0xdc45a8 */
  { uint32_t v = 0xdc45a8u; esp -= 4; W32(esp, v); }
/* dab929: push 0xde4060 */
  { uint32_t v = 0xde4060u; esp -= 4; W32(esp, v); }
/* dab92e: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdab934u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dab934: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dab937: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dab939: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dab93b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdab940u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dab940: guest_badaddr(0xdab940); return;
}

void f_dab9b0(void) {
  LOAD_REGS();
L_dab9b0: /* dab9b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dab9b1: mov ebp, esp */
  ebp = esp;
/* dab9b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dab9b5: push 0xdba860 */
  { uint32_t v = 0xdba860u; esp -= 4; W32(esp, v); }
/* dab9ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dab9c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab9c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dab9c8: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dab9ce: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* dab9d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dab9d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dab9d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dab9d6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dab9d9: mov edi, ecx */
  edi = ecx;
/* dab9db: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dab9dd: xor ebx, ebx */
  ebx = 0;
/* dab9df: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dab9e1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dab9e3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* dab9e6: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* dab9e8: je 0xdab9ff */
  if (zf) goto L_dab9ff;
L_dab9ea: /* dab9ea: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xdab9f0u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* dab9f0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* dab9f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dab9f4: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* dab9f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dab9f7: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xdab9fdu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* dab9fd: jmp 0xdaba12 */
  goto L_daba12;
L_dab9ff: /* dab9ff: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xdaba05u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* daba05: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* daba08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daba09: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* daba0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daba0c: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xdaba12u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_daba12: /* daba12: cmp ebx, dword ptr [edi + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daba15: jge 0xdabadc */
  if ((sf == of)) goto L_dabadc;
L_daba1b: /* daba1b: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* daba1e: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* daba21: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* daba24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daba26: je 0xdaba40 */
  if (zf) goto L_daba40;
L_daba28: /* daba28: push 0x867 */
  { uint32_t v = 0x867u; esp -= 4; W32(esp, v); }
/* daba2d: push 0xde41d0 */
  { uint32_t v = 0xde41d0u; esp -= 4; W32(esp, v); }
/* daba32: push 0xde41dc */
  { uint32_t v = 0xde41dcu; esp -= 4; W32(esp, v); }
/* daba37: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xdaba3du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* daba3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daba40: /* daba40: movzx ecx, word ptr [esi + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* daba44: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* daba47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daba48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daba49: call dword ptr [0xde8dfc] */
  esp -= 4; W32(esp, 0xdaba4fu); SPILL(); call_ind(R32(0xde8dfcu)); if (g_unwind) return; /* USER32!GetDlgItem */ RELOAD();
/* daba4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daba51: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* daba54: jne 0xdaba6e */
  if (!zf) goto L_daba6e;
L_daba56: /* daba56: push 0x869 */
  { uint32_t v = 0x869u; esp -= 4; W32(esp, v); }
/* daba5b: push 0xde41ec */
  { uint32_t v = 0xde41ecu; esp -= 4; W32(esp, v); }
/* daba60: push 0xde41f8 */
  { uint32_t v = 0xde41f8u; esp -= 4; W32(esp, v); }
/* daba65: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xdaba6bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* daba6b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daba6e: /* daba6e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* daba70: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* daba72: mov ecx, 0xde51e0 */
  ecx = 0xde51e0u;
/* daba77: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdaba7du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* daba7d: mov edx, dword ptr [0xde51e0] */
  edx = R32((uint32_t)(0xde51e0u));
/* daba83: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* daba86: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* daba8b: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* daba8e: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* daba90: je 0xdaba9e */
  if (zf) goto L_daba9e;
L_daba92: /* daba92: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* daba95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daba96: call dword ptr [0xde8f28] */
  esp -= 4; W32(esp, 0xdaba9cu); SPILL(); call_ind(R32(0xde8f28u)); if (g_unwind) return; /* USER32!GetWindowLongW */ RELOAD();
/* daba9c: jmp 0xdabaa8 */
  goto L_dabaa8;
L_daba9e: /* daba9e: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* dabaa1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabaa2: call dword ptr [0xde8f44] */
  esp -= 4; W32(esp, 0xdabaa8u); SPILL(); call_ind(R32(0xde8f44u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
L_dabaa8: /* dabaa8: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dabaab: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* dabab0: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dabab3: push 0xd813b6 */
  { uint32_t v = 0xd813b6u; esp -= 4; W32(esp, v); }
/* dabab8: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* dababa: je 0xdabacc */
  if (zf) goto L_dabacc;
L_dababc: /* dababc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* dababf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dabac0: call dword ptr [0xde8ee0] */
  esp -= 4; W32(esp, 0xdabac6u); SPILL(); call_ind(R32(0xde8ee0u)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* dabac6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* dabac7: jmp 0xdaba12 */
  goto L_daba12;
L_dabacc: /* dabacc: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* dabacf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabad0: call dword ptr [0xde8ee4] */
  esp -= 4; W32(esp, 0xdabad6u); SPILL(); call_ind(R32(0xde8ee4u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
/* dabad6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* dabad7: jmp 0xdaba12 */
  goto L_daba12;
L_dabadc: /* dabadc: xor esi, esi */
  esi = 0;
/* dabade: mov edi, edi */
  edi = edi;
L_dabae0: /* dabae0: cmp esi, dword ptr [edi + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dabae3: jge 0xdabaf6 */
  if ((sf == of)) goto L_dabaf6;
L_dabae5: /* dabae5: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* dabae8: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* dabaeb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dabaed: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xdabaf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dabaf3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* dabaf4: jmp 0xdabae0 */
  goto L_dabae0;
L_dabaf6: /* dabaf6: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* dabaf9: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xdabaffu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* dabaff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabb00: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* dabb06: push 0xde4208 */
  { uint32_t v = 0xde4208u; esp -= 4; W32(esp, v); }
/* dabb0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabb0c: call dword ptr [0xde88d4] */
  esp -= 4; W32(esp, 0xdabb12u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* dabb12: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* dabb14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dabb17: mov ecx, edi */
  ecx = edi;
/* dabb19: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xdabb1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dabb1c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* dabb1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabb1f: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* dabb25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabb26: mov ecx, edi */
  ecx = edi;
/* dabb28: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xdabb2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dabb2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dabb31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dabb32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dabb33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dabb3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dabb3b: mov esp, ebp */
  esp = ebp;
/* dabb3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dabb3e: ret  */
  esp += 4; SPILL(); return;
}

void f_dabb3f(void) {
  LOAD_REGS();
L_dabb3f: /* dabb3f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* dabb42: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dabb47: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* dabb4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabb4b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* dabb4e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdabb53u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dabb53(); return;
}

void f_dabb53(void) {
  LOAD_REGS();
L_dabb53: /* dabb53: push 0xdc45e4 */
  { uint32_t v = 0xdc45e4u; esp -= 4; W32(esp, v); }
/* dabb58: push 0xde4220 */
  { uint32_t v = 0xde4220u; esp -= 4; W32(esp, v); }
/* dabb5d: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdabb63u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dabb63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dabb66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabb68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabb6a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdabb6fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dabb6f: guest_badaddr(0xdabb6f); return;
}

void f_dabbe0(void) {
  LOAD_REGS();
L_dabbe0: /* dabbe0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dabbe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dabbe4: mov esi, ecx */
  esi = ecx;
/* dabbe6: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* dabbe9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dabbeb: je 0xdabc55 */
  if (zf) goto L_dabc55;
L_dabbed: /* dabbed: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* dabbf0: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* dabbf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabbf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dabbf6: call dword ptr [0xde8f1c] */
  esp -= 4; W32(esp, 0xdabbfcu); SPILL(); call_ind(R32(0xde8f1cu)); if (g_unwind) return; /* USER32!GetWindowRect */ RELOAD();
/* dabbfc: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* dabbff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dabc01: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* dabc05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabc06: call 0xd82202 */
  esp -= 4; W32(esp, 0xdabc0bu); SPILL(); f_d82202(); if (g_unwind) return; RELOAD();
/* dabc0b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* dabc0f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* dabc13: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* dabc17: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* dabc19: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* dabc1d: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* dabc1f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* dabc23: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dabc25: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* dabc26: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* dabc28: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* dabc2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dabc2e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* dabc30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabc32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabc34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabc35: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* dabc39: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* dabc3b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* dabc3f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* dabc41: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dabc43: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* dabc44: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* dabc46: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* dabc48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabc49: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* dabc4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabc4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabc4f: call dword ptr [0xde8f08] */
  esp -= 4; W32(esp, 0xdabc55u); SPILL(); call_ind(R32(0xde8f08u)); if (g_unwind) return; /* USER32!SetWindowPos */ RELOAD();
L_dabc55: /* dabc55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dabc56: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dabc59: ret  */
  esp += 4; SPILL(); return;
}

void f_dabc80(void) {
  LOAD_REGS();
L_dabc80: /* dabc80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dabc81: mov ebp, esp */
  ebp = esp;
/* dabc83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dabc85: push 0xdba870 */
  { uint32_t v = 0xdba870u; esp -= 4; W32(esp, v); }
/* dabc8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dabc90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabc91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dabc98: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dabc9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dabc9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dabc9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dabc9e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dabca1: mov esi, ecx */
  esi = ecx;
/* dabca3: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* dabca9: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* dabcac: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* dabcaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dabcb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabcb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabcb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabcb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabcb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabcb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabcbb: push 0x50000000 */
  { uint32_t v = 0x50000000u; esp -= 4; W32(esp, v); }
/* dabcc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabcc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabcc4: mov ecx, esi */
  ecx = esi;
/* dabcc6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dabccd: call 0xd81852 */
  esp -= 4; W32(esp, 0xdabcd2u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* dabcd2: mov ebx, dword ptr [0xde8ee8] */
  ebx = R32((uint32_t)(0xde8ee8u));
/* dabcd8: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* dabcdb: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* dabcde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabcdf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdabce1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dabce1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* dabce4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* dabce7: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* dabcea: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* dabced: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dabcf0: mov edi, dword ptr [0xde8f20] */
  edi = R32((uint32_t)(0xde8f20u));
/* dabcf6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabcf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabcf8: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* dabcfb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdabcfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dabcfd: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* dabd00: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* dabd03: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* dabd06: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dabd09: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* dabd0c: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* dabd0f: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* dabd12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabd13: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* dabd16: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* dabd19: call dword ptr [0xde8e3c] */
  esp -= 4; W32(esp, 0xdabd1fu); SPILL(); call_ind(R32(0xde8e3cu)); if (g_unwind) return; /* USER32!SetCapture */ RELOAD();
/* dabd1f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* dabd22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabd23: call dword ptr [0xde8ed8] */
  esp -= 4; W32(esp, 0xdabd29u); SPILL(); call_ind(R32(0xde8ed8u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* dabd29: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* dabd2c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* dabd2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dabd30: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* dabd33: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdabd35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dabd35: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* dabd38: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* dabd3b: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* dabd3e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* dabd41: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dabd44: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* dabd47: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* dabd4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dabd4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabd4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdabd4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dabd4e: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* dabd51: mov ebx, dword ptr [esi + 0x50] */
  ebx = R32((uint32_t)(esi + 0x50u));
/* dabd54: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* dabd57: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* dabd5a: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* dabd5d: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* dabd5f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* dabd61: mov edi, dword ptr [esi + 0x50] */
  edi = R32((uint32_t)(esi + 0x50u));
/* dabd64: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* dabd66: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* dabd69: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* dabd6b: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* dabd6e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* dabd71: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dabd73: add edx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* dabd76: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* dabd79: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* dabd7b: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* dabd7e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* dabd81: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* dabd84: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* dabd87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dabd88: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* dabd8b: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* dabd8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabd8e: mov ecx, esi */
  ecx = esi;
/* dabd90: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* dabd93: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* dabd96: call 0xd8117c */
  esp -= 4; W32(esp, 0xdabd9bu); SPILL(); f_d8117c(); if (g_unwind) return; RELOAD();
/* dabd9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabd9c: call dword ptr [0xde8e94] */
  esp -= 4; W32(esp, 0xdabda2u); SPILL(); call_ind(R32(0xde8e94u)); if (g_unwind) return; /* USER32!ClipCursor */ RELOAD();
/* dabda2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* dabda4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabda6: mov ecx, esi */
  ecx = esi;
/* dabda8: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0xdabdaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dabdae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dabdb1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dabdb2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dabdb3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dabdba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dabdbb: mov esp, ebp */
  esp = ebp;
/* dabdbd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dabdbe: ret  */
  esp += 4; SPILL(); return;
}

void f_dabdbf(void) {
  LOAD_REGS();
L_dabdbf: /* dabdbf: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* dabdc2: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dabdc7: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* dabdca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabdcb: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* dabdce: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdabdd3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dabdd3(); return;
}

void f_dabdd3(void) {
  LOAD_REGS();
L_dabdd3: /* dabdd3: push 0xdc4618 */
  { uint32_t v = 0xdc4618u; esp -= 4; W32(esp, v); }
/* dabdd8: push 0xde4228 */
  { uint32_t v = 0xde4228u; esp -= 4; W32(esp, v); }
/* dabddd: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdabde3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dabde3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dabde6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabde8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabdea: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdabdefu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dabdef: guest_badaddr(0xdabdef); return;
}

void f_dabe50(void) {
  LOAD_REGS();
L_dabe50: /* dabe50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dabe51: mov ebp, esp */
  ebp = esp;
/* dabe53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dabe55: push 0xdba880 */
  { uint32_t v = 0xdba880u; esp -= 4; W32(esp, v); }
/* dabe5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dabe60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabe61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dabe68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dabe6b: mov eax, dword ptr [0xde5034] */
  eax = R32((uint32_t)(0xde5034u));
/* dabe70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dabe71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dabe72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dabe73: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dabe76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabe77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabe79: mov esi, ecx */
  esi = ecx;
/* dabe7b: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* dabe7e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* dabe81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabe82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabe84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabe86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabe88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabe8a: push 0x50000000 */
  { uint32_t v = 0x50000000u; esp -= 4; W32(esp, v); }
/* dabe8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabe91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabe93: mov ecx, esi */
  ecx = esi;
/* dabe95: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dabe9c: call 0xd81852 */
  esp -= 4; W32(esp, 0xdabea1u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* dabea1: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* dabea6: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dabea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabeab: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* dabead: je 0xdabed3 */
  if (zf) goto L_dabed3;
L_dabeaf: /* dabeaf: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xdabeb5u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* dabeb5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* dabeb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabeb9: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* dabebb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dabebc: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xdabec2u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* dabec2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dabec5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dabecc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dabecd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dabece: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dabecf: mov esp, ebp */
  esp = ebp;
/* dabed1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dabed2: ret  */
  esp += 4; SPILL(); return;
L_dabed3: /* dabed3: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xdabed9u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* dabed9: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* dabedc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabedd: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* dabedf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabee0: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xdabee6u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* dabee6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dabee9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dabeea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dabeeb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dabef2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dabef3: mov esp, ebp */
  esp = ebp;
/* dabef5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dabef6: ret  */
  esp += 4; SPILL(); return;
}

void f_dabef7(void) {
  LOAD_REGS();
L_dabef7: /* dabef7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* dabefa: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dabeff: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* dabf02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dabf03: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* dabf06: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdabf0bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dabf0b(); return;
}

void f_dabf0b(void) {
  LOAD_REGS();
L_dabf0b: /* dabf0b: push 0xdc4660 */
  { uint32_t v = 0xdc4660u; esp -= 4; W32(esp, v); }
/* dabf10: push 0xde4250 */
  { uint32_t v = 0xde4250u; esp -= 4; W32(esp, v); }
/* dabf15: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdabf1bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dabf1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dabf1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabf20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabf22: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdabf27u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dabf27: guest_badaddr(0xdabf27); return;
}

void f_dabf70(void) {
  LOAD_REGS();
L_dabf70: /* dabf70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dabf71: mov ebp, esp */
  ebp = esp;
/* dabf73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dabf75: push 0xdba890 */
  { uint32_t v = 0xdba890u; esp -= 4; W32(esp, v); }
/* dabf7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dabf80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabf81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dabf88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dabf8b: mov eax, dword ptr [0xde5034] */
  eax = R32((uint32_t)(0xde5034u));
/* dabf90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dabf91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dabf92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dabf93: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dabf96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabf97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabf99: mov esi, ecx */
  esi = ecx;
/* dabf9b: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* dabf9e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* dabfa1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabfa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabfa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabfa6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabfa8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabfaa: push 0x50000000 */
  { uint32_t v = 0x50000000u; esp -= 4; W32(esp, v); }
/* dabfaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabfb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabfb3: mov ecx, esi */
  ecx = esi;
/* dabfb5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dabfbc: call 0xd81852 */
  esp -= 4; W32(esp, 0xdabfc1u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* dabfc1: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* dabfc6: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dabfc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dabfcb: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* dabfcd: je 0xdabfe4 */
  if (zf) goto L_dabfe4;
L_dabfcf: /* dabfcf: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xdabfd5u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* dabfd5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* dabfd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabfd9: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* dabfdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dabfdc: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xdabfe2u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* dabfe2: jmp 0xdabff7 */
  goto L_dabff7;
L_dabfe4: /* dabfe4: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xdabfeau); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* dabfea: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* dabfed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dabfee: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* dabff0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dabff1: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xdabff7u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_dabff7: /* dabff7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* dabffa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dabffd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dabffe: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dac001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac002: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dac009: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac00a: mov esp, ebp */
  esp = ebp;
/* dac00c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dac00d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dac010(void) {
  LOAD_REGS();
L_dac010: /* dac010: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* dac013: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dac018: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* dac01b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dac01c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* dac01f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdac024u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dac024(); return;
}

void f_dac024(void) {
  LOAD_REGS();
L_dac024: /* dac024: push 0xdc46a0 */
  { uint32_t v = 0xdc46a0u; esp -= 4; W32(esp, v); }
/* dac029: push 0xde4260 */
  { uint32_t v = 0xde4260u; esp -= 4; W32(esp, v); }
/* dac02e: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdac034u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dac034: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dac037: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac039: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac03b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdac040u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dac040: guest_badaddr(0xdac040); return;
}
