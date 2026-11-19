#include "recomp.h"
#include "rec_mod.h"

void f_10910f7e(void) {
  LOAD_REGS();
L_10910f7e: /* 10910f7e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10910f81: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 10910f86: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 10910f89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910f8a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 10910f8d: call 0x10918770 */
  esp -= 4; W32(esp, 0x10910f92u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10910f92(); return;
}

void f_10910f92(void) {
  LOAD_REGS();
L_10910f92: /* 10910f92: push 0x10921aa4 */
  { uint32_t v = 0x10921aa4u; esp -= 4; W32(esp, v); }
/* 10910f97: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 10910f9c: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10910fa2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10910fa2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910fa5: xor ebx, ebx */
  ebx = 0;
/* 10910fa7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910fa8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910fa9: call 0x10918770 */
  esp -= 4; W32(esp, 0x10910faeu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10910fae: guest_badaddr(0x10910fae); return;
}

void f_10910ff0(void) {
  LOAD_REGS();
L_10910ff0: /* 10910ff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910ff2: push 0x1091c3fb */
  { uint32_t v = 0x1091c3fbu; esp -= 4; W32(esp, v); }
/* 10910ff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10910ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910ffe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10911005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10911006: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 1091100b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1091100d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1091100f: push 0x1092dfb8 */
  { uint32_t v = 0x1092dfb8u; esp -= 4; W32(esp, v); }
/* 10911014: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 10911016: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x10911018u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10911018: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 1091101c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091101e: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 10911026: je 0x1091103e */
  if (zf) goto L_1091103e;
L_10911028: /* 10911028: mov ecx, eax */
  ecx = eax;
/* 1091102a: call 0x109012f8 */
  esp -= 4; W32(esp, 0x1091102fu); SPILL(); f_109012f8(); if (g_unwind) return; RELOAD();
/* 1091102f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 10911033: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1091103a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091103d: ret  */
  esp += 4; SPILL(); return;
L_1091103e: /* 1091103e: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 10911042: xor eax, eax */
  eax = 0;
/* 10911044: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1091104b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091104e: ret  */
  esp += 4; SPILL(); return;
}

void f_10911070(void) {
  LOAD_REGS();
L_10911070: /* 10911070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10911071: mov esi, ecx */
  esi = ecx;
/* 10911073: call 0x109012e4 */
  esp -= 4; W32(esp, 0x10911078u); SPILL(); f_109012e4(); if (g_unwind) return; RELOAD();
/* 10911078: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1091107d: je 0x1091108c */
  if (zf) goto L_1091108c;
L_1091107f: /* 1091107f: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 10911084: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10911086: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10911088: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10911089: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1091108cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1091108c: /* 1091108c: mov eax, esi */
  eax = esi;
/* 1091108e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091108f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_109110b0(void) {
  LOAD_REGS();
L_109110b0: /* 109110b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109110b1: mov ebp, esp */
  ebp = esp;
/* 109110b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 109110b5: push 0x1091c457 */
  { uint32_t v = 0x1091c457u; esp -= 4; W32(esp, v); }
/* 109110ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 109110c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109110c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 109110c8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 109110cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109110cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109110cd: mov esi, ecx */
  esi = ecx;
/* 109110cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109110d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109110d3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 109110d6: mov dword ptr [esi], 0x10921538 */
  W32((uint32_t)(esi), 0x10921538u);
/* 109110dc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 109110e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109110e5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109110e7: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 109110eb: call 0x10901384 */
  esp -= 4; W32(esp, 0x109110f0u); SPILL(); f_10901384(); if (g_unwind) return; RELOAD();
/* 109110f0: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 109110f3: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 109110fa: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10911100u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10911100: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 10911103: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 10911107: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1091110du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1091110d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 10911110: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10911114: call 0x109013d4 */
  esp -= 4; W32(esp, 0x10911119u); SPILL(); f_109013d4(); if (g_unwind) return; RELOAD();
/* 10911119: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1091111c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091111d: mov dword ptr [esi], 0x10920310 */
  W32((uint32_t)(esi), 0x10920310u);
/* 10911123: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10911124: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1091112b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091112c: mov esp, ebp */
  esp = ebp;
/* 1091112e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091112f: ret  */
  esp += 4; SPILL(); return;
}

void f_10911130(void) {
  LOAD_REGS();
L_10911130: /* 10911130: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10911133: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 10911138: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1091113b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091113c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1091113f: call 0x10918770 */
  esp -= 4; W32(esp, 0x10911144u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10911144(); return;
}

void f_10911144(void) {
  LOAD_REGS();
L_10911144: /* 10911144: push 0x10921af0 */
  { uint32_t v = 0x10921af0u; esp -= 4; W32(esp, v); }
/* 10911149: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1091114e: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10911154u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10911154: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911157: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10911159: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1091115b: call 0x10918770 */
  esp -= 4; W32(esp, 0x10911160u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10911160: guest_badaddr(0x10911160); return;
}

void f_109111a0(void) {
  LOAD_REGS();
L_109111a0: /* 109111a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109111a1: mov ebp, esp */
  ebp = esp;
/* 109111a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 109111a5: push 0x1091c4d3 */
  { uint32_t v = 0x1091c4d3u; esp -= 4; W32(esp, v); }
/* 109111aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 109111b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109111b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 109111b8: sub esp, 0x270 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x270u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 109111be: mov eax, dword ptr [0x10959d00] */
  eax = R32((uint32_t)(0x10959d00u));
/* 109111c3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 109111c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109111c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109111c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109111c9: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 109111cf: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109111d2: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 109111d9: mov dword ptr [0x10930f30], ecx */
  W32((uint32_t)(0x10930f30u), ecx);
/* 109111df: call dword ptr [0x10959f74] */
  esp -= 4; W32(esp, 0x109111e5u); SPILL(); call_ind(R32(0x10959f74u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* KERNEL32!GetCommandLineW */ RELOAD();
/* 109111e5: mov ebx, eax */
  ebx = eax;
/* 109111e7: call dword ptr [0x10959cc0] */
  esp -= 4; W32(esp, 0x109111edu); SPILL(); f_4e4214(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appPackage@@YAPBGXZ */ RELOAD();
/* 109111ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109111ee: push 0x10929ae0 */
  { uint32_t v = 0x10929ae0u; esp -= 4; W32(esp, v); }
/* 109111f3: call dword ptr [0x10959d74] */
  esp -= 4; W32(esp, 0x109111f9u); SPILL(); f_4e27d9(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* 109111f9: mov esi, dword ptr [0x10959c04] */
  esi = R32((uint32_t)(0x10959c04u));
/* 109111ff: push 0x10929b60 */
  { uint32_t v = 0x10929b60u; esp -= 4; W32(esp, v); }
/* 10911204: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10911205: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10911207u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911207: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091120a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091120c: jne 0x109113cf */
  if (!zf) goto L_109113cf;
L_10911212: /* 10911212: push 0x10929b74 */
  { uint32_t v = 0x10929b74u; esp -= 4; W32(esp, v); }
/* 10911217: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10911218: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1091121au); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091121a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091121d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091121f: jne 0x109113cf */
  if (!zf) goto L_109113cf;
L_10911225: /* 10911225: push 0x10929b8c */
  { uint32_t v = 0x10929b8cu; esp -= 4; W32(esp, v); }
/* 1091122a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091122b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1091122du); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091122d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911230: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911232: jne 0x109113cf */
  if (!zf) goto L_109113cf;
L_10911238: /* 10911238: lea edx, [ebp - 0x27c] */
  edx = (uint32_t)(ebp + 0xfffffd84u);
/* 1091123e: push 0x10929ba4 */
  { uint32_t v = 0x10929ba4u; esp -= 4; W32(esp, v); }
/* 10911243: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10911244: call 0x1090138e */
  esp -= 4; W32(esp, 0x10911249u); SPILL(); f_1090138e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
/* 10911249: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091124c: xor edi, edi */
  edi = 0;
/* 1091124e: mov edi, edi */
  edi = edi;
L_10911250: /* 10911250: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 10911255: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10911258: je 0x1091126e */
  if (zf) goto L_1091126e;
L_1091125a: /* 1091125a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1091125c: lea ecx, [ebp - 0x27c] */
  ecx = (uint32_t)(ebp + 0xfffffd84u);
/* 10911262: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10911263: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10911265: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10911266: call dword ptr [0x1095a17c] */
  esp -= 4; W32(esp, 0x1091126cu); SPILL(); call_ind(R32(0x1095a17cu)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* USER32!FindWindowExW */ RELOAD();
/* 1091126c: jmp 0x109112d7 */
  goto L_109112d7;
L_1091126e: /* 1091126e: lea edx, [ebp - 0x27c] */
  edx = (uint32_t)(ebp + 0xfffffd84u);
/* 10911274: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10911275: call dword ptr [0x10959d90] */
  esp -= 4; W32(esp, 0x1091127bu); SPILL(); f_4e3e36(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 1091127b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091127e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911280: jne 0x10911286 */
  if (!zf) goto L_10911286;
L_10911282: /* 10911282: xor esi, esi */
  esi = 0;
/* 10911284: jmp 0x109112ac */
  goto L_109112ac;
L_10911286: /* 10911286: lea eax, [ebp - 0x27c] */
  eax = (uint32_t)(ebp + 0xfffffd84u);
/* 1091128c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091128d: call dword ptr [0x10959d90] */
  esp -= 4; W32(esp, 0x10911293u); SPILL(); f_4e3e36(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 10911293: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10911296: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10911299: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091129c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091129f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109112a2: call 0x10918780 */
  esp -= 4; W32(esp, 0x109112a7u); SPILL(); f_10918780(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
/* 109112a7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109112aa: mov esi, esp */
  esi = esp;
L_109112ac: /* 109112ac: lea ecx, [ebp - 0x27c] */
  ecx = (uint32_t)(ebp + 0xfffffd84u);
/* 109112b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109112b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109112b5: call dword ptr [0x10959d90] */
  esp -= 4; W32(esp, 0x109112bbu); SPILL(); f_4e3e36(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 109112bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109112bc: lea edx, [ebp - 0x27c] */
  edx = (uint32_t)(ebp + 0xfffffd84u);
/* 109112c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109112c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109112c4: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x109112cau); SPILL(); f_4e267b(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 109112ca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109112cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109112ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109112d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109112d1: call dword ptr [0x1095a104] */
  esp -= 4; W32(esp, 0x109112d7u); SPILL(); call_ind(R32(0x1095a104u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* USER32!FindWindowExA */ RELOAD();
L_109112d7: /* 109112d7: mov edi, eax */
  edi = eax;
/* 109112d9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109112db: je 0x109113cf */
  if (zf) goto L_109113cf;
L_109112e1: /* 109112e1: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 109112e6: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109112e9: je 0x109112f9 */
  if (zf) goto L_109112f9;
L_109112eb: /* 109112eb: push 0x10929bb0 */
  { uint32_t v = 0x10929bb0u; esp -= 4; W32(esp, v); }
/* 109112f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109112f1: call dword ptr [0x1095a108] */
  esp -= 4; W32(esp, 0x109112f7u); SPILL(); call_ind(R32(0x1095a108u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* USER32!GetPropW */ RELOAD();
/* 109112f7: jmp 0x10911356 */
  goto L_10911356;
L_109112f9: /* 109112f9: push 0x10929bec */
  { uint32_t v = 0x10929becu; esp -= 4; W32(esp, v); }
/* 109112fe: call dword ptr [0x10959d90] */
  esp -= 4; W32(esp, 0x10911304u); SPILL(); f_4e3e36(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 10911304: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911307: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911309: jne 0x1091130f */
  if (!zf) goto L_1091130f;
L_1091130b: /* 1091130b: xor esi, esi */
  esi = 0;
/* 1091130d: jmp 0x10911333 */
  goto L_10911333;
L_1091130f: /* 1091130f: push 0x10929c00 */
  { uint32_t v = 0x10929c00u; esp -= 4; W32(esp, v); }
/* 10911314: call dword ptr [0x10959d90] */
  esp -= 4; W32(esp, 0x1091131au); SPILL(); f_4e3e36(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 1091131a: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091131d: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10911320: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10911323: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911326: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10911329: call 0x10918780 */
  esp -= 4; W32(esp, 0x1091132eu); SPILL(); f_10918780(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
/* 1091132e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10911331: mov esi, esp */
  esi = esp;
L_10911333: /* 10911333: push 0x10929bc4 */
  { uint32_t v = 0x10929bc4u; esp -= 4; W32(esp, v); }
/* 10911338: call dword ptr [0x10959d90] */
  esp -= 4; W32(esp, 0x1091133eu); SPILL(); f_4e3e36(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 1091133e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091133f: push 0x10929bd8 */
  { uint32_t v = 0x10929bd8u; esp -= 4; W32(esp, v); }
/* 10911344: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10911345: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x1091134bu); SPILL(); f_4e267b(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 1091134b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091134e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091134f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10911350: call dword ptr [0x1095a10c] */
  esp -= 4; W32(esp, 0x10911356u); SPILL(); call_ind(R32(0x1095a10cu)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* USER32!GetPropA */ RELOAD();
L_10911356: /* 10911356: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911358: je 0x10911250 */
  if (zf) goto L_10911250;
L_1091135e: /* 1091135e: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 10911361: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 10911364: je 0x10911378 */
  if (zf) goto L_10911378;
L_10911366: /* 10911366: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1091136a: je 0x1091137e */
  if (zf) goto L_1091137e;
L_1091136c: /* 1091136c: mov ax, word ptr [ebx + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x2u))) & 0xffffu);
/* 10911370: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10911373: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 10911376: jne 0x10911366 */
  if (!zf) goto L_10911366;
L_10911378: /* 10911378: cmp word ptr [ebx], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1091137c: jne 0x10911381 */
  if (!zf) goto L_10911381;
L_1091137e: /* 1091137e: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_10911381: /* 10911381: mov ecx, dword ptr [0x1095a404] */
  ecx = R32((uint32_t)(0x1095a404u));
/* 10911387: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10911389: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091138a: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 1091138d: call dword ptr [0x10959d6c] */
  esp -= 4; W32(esp, 0x10911393u); SPILL(); f_4e19f1(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 10911393: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911396: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 10911399: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091139a: push 0x7530 */
  { uint32_t v = 0x7530u; esp -= 4; W32(esp, v); }
/* 1091139f: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 109113a1: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 109113a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109113a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109113a7: push 0x4a */
  { uint32_t v = 0x4au; esp -= 4; W32(esp, v); }
/* 109113a9: lea eax, [eax*4 + 4] */
  eax = (uint32_t)(eax*4 + 0x4u);
/* 109113b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109113b1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 109113b4: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 109113b7: call dword ptr [0x1095a110] */
  esp -= 4; W32(esp, 0x109113bdu); SPILL(); call_ind(R32(0x1095a110u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* USER32!SendMessageTimeoutW */ RELOAD();
/* 109113bd: mov eax, dword ptr [0x10959d00] */
  eax = R32((uint32_t)(0x10959d00u));
/* 109113c2: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 109113c8: xor eax, eax */
  eax = 0;
/* 109113ca: jmp 0x10911c45 */
  goto L_10911c45;
L_109113cf: /* 109113cf: mov ecx, dword ptr [0x10959d24] */
  ecx = R32((uint32_t)(0x10959d24u));
/* 109113d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109113d7: push 0x109013e3 */
  { uint32_t v = 0x109013e3u; esp -= 4; W32(esp, v); }
/* 109113dc: push 0x10952408 */
  { uint32_t v = 0x10952408u; esp -= 4; W32(esp, v); }
/* 109113e1: push 0x109523e8 */
  { uint32_t v = 0x109523e8u; esp -= 4; W32(esp, v); }
/* 109113e6: push 0x10951bcc */
  { uint32_t v = 0x10951bccu; esp -= 4; W32(esp, v); }
/* 109113eb: push 0x10951bd8 */
  { uint32_t v = 0x10951bd8u; esp -= 4; W32(esp, v); }
/* 109113f0: push 0x10931548 */
  { uint32_t v = 0x10931548u; esp -= 4; W32(esp, v); }
/* 109113f5: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 109113fb: mov edx, dword ptr [0x10959cf8] */
  edx = R32((uint32_t)(0x10959cf8u));
/* 10911401: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10911402: push 0x10929ae0 */
  { uint32_t v = 0x10929ae0u; esp -= 4; W32(esp, v); }
/* 10911407: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1091140e: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* 10911414: call dword ptr [0x10959b40] */
  esp -= 4; W32(esp, 0x1091141au); SPILL(); f_4e364d(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appInit@@YAXPBG0PAVFMalloc@@PAVFOutputDevice@@PAVFOutputDeviceError@@PAVFFeedbackContext@@PAVFFileManager@@P6APAVFConfigCache@@XZH@Z */ RELOAD();
/* 1091141a: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091141d: call dword ptr [0x10959ee0] */
  esp -= 4; W32(esp, 0x10911423u); SPILL(); f_d51b22(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* EngineEx!?Bink_Manager_Start_Service@@YAXXZ */ RELOAD();
/* 10911423: mov edi, dword ptr [0x10959b44] */
  edi = R32((uint32_t)(0x10959b44u));
/* 10911429: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1091142bu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091142b: mov esi, dword ptr [0x10959b68] */
  esi = R32((uint32_t)(0x10959b68u));
/* 10911431: push 0x10929c14 */
  { uint32_t v = 0x10929c14u; esp -= 4; W32(esp, v); }
/* 10911436: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911437: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10911439u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911439: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091143c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091143e: je 0x109114a2 */
  if (zf) goto L_109114a2;
L_10911440: /* 10911440: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10911442u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911442: push 0x10929c1c */
  { uint32_t v = 0x10929c1cu; esp -= 4; W32(esp, v); }
/* 10911447: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911448: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1091144au); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091144a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091144d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091144f: jne 0x10911458 */
  if (!zf) goto L_10911458;
L_10911451: /* 10911451: mov eax, 1 */
  eax = 0x1u;
/* 10911456: jmp 0x109114a2 */
  goto L_109114a2;
L_10911458: /* 10911458: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1091145au); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091145a: push 0x10929c24 */
  { uint32_t v = 0x10929c24u; esp -= 4; W32(esp, v); }
/* 1091145f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911460: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10911462u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911462: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911465: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911467: jne 0x10911470 */
  if (!zf) goto L_10911470;
L_10911469: /* 10911469: mov eax, 2 */
  eax = 0x2u;
/* 1091146e: jmp 0x109114a2 */
  goto L_109114a2;
L_10911470: /* 10911470: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10911472u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911472: push 0x10929c2c */
  { uint32_t v = 0x10929c2cu; esp -= 4; W32(esp, v); }
/* 10911477: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911478: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1091147au); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091147a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091147d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091147f: jne 0x10911488 */
  if (!zf) goto L_10911488;
L_10911481: /* 10911481: mov eax, 3 */
  eax = 0x3u;
/* 10911486: jmp 0x109114a2 */
  goto L_109114a2;
L_10911488: /* 10911488: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1091148au); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091148a: push 0x10929c34 */
  { uint32_t v = 0x10929c34u; esp -= 4; W32(esp, v); }
/* 1091148f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911490: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10911492u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911492: xor ecx, ecx */
  ecx = 0;
/* 10911494: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911497: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911499: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 1091149c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1091149d: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109114a0: mov eax, ecx */
  eax = ecx;
L_109114a2: /* 109114a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109114a3: call dword ptr [0x10959ee4] */
  esp -= 4; W32(esp, 0x109114a9u); SPILL(); f_d51aff(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* EngineEx!?Bink_Manager_Set_Language@@YAXH@Z */ RELOAD();
/* 109114a9: mov edx, dword ptr [0x10959b48] */
  edx = R32((uint32_t)(0x10959b48u));
/* 109114af: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109114b2: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* 109114b8: call dword ptr [0x10959d40] */
  esp -= 4; W32(esp, 0x109114beu); SPILL(); f_4e2987(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 109114be: mov ebx, dword ptr [0x10959cb4] */
  ebx = R32((uint32_t)(0x10959cb4u));
/* 109114c4: push 0x10929c3c */
  { uint32_t v = 0x10929c3cu; esp -= 4; W32(esp, v); }
/* 109114c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109114ca: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109114ccu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109114cc: mov edx, dword ptr [0x10959cf8] */
  edx = R32((uint32_t)(0x10959cf8u));
/* 109114d2: mov esi, dword ptr [0x10959d40] */
  esi = R32((uint32_t)(0x10959d40u));
/* 109114d8: xor ecx, ecx */
  ecx = 0;
/* 109114da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109114dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109114df: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 109114e2: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 109114e4: mov eax, dword ptr [0x10959cfc] */
  eax = R32((uint32_t)(0x10959cfcu));
/* 109114e9: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 109114ef: mov ecx, dword ptr [0x10959b4c] */
  ecx = R32((uint32_t)(0x10959b4cu));
/* 109114f5: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 109114fb: mov edx, dword ptr [0x10959cf8] */
  edx = R32((uint32_t)(0x10959cf8u));
/* 10911501: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10911504: je 0x10911517 */
  if (zf) goto L_10911517;
L_10911506: /* 10911506: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10911508u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911508: push 0x10929c4c */
  { uint32_t v = 0x10929c4cu; esp -= 4; W32(esp, v); }
/* 1091150d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091150e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x10911510u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911510: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911513: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911515: je 0x1091151c */
  if (zf) goto L_1091151c;
L_10911517: /* 10911517: mov eax, 1 */
  eax = 0x1u;
L_1091151c: /* 1091151c: mov ecx, dword ptr [0x10959b50] */
  ecx = R32((uint32_t)(0x10959b50u));
/* 10911522: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 10911524: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10911526u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911526: push 0x10929c58 */
  { uint32_t v = 0x10929c58u; esp -= 4; W32(esp, v); }
/* 1091152b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091152c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1091152eu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091152e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911531: push 0x10929c60 */
  { uint32_t v = 0x10929c60u; esp -= 4; W32(esp, v); }
/* 10911536: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 10911539: mov edi, eax */
  edi = eax;
/* 1091153b: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x10911541u); SPILL(); f_4e13de(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 10911541: push 0x10929ae0 */
  { uint32_t v = 0x10929ae0u; esp -= 4; W32(esp, v); }
/* 10911546: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 10911549: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1091154a: mov ecx, eax */
  ecx = eax;
/* 1091154c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 10911550: call dword ptr [0x10959b94] */
  esp -= 4; W32(esp, 0x10911556u); SPILL(); f_4e2c48(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??DFString@@QBE?AV0@PBG@Z */ RELOAD();
/* 10911556: push 0x10929c70 */
  { uint32_t v = 0x10929c70u; esp -= 4; W32(esp, v); }
/* 1091155b: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 1091155e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091155f: mov ecx, eax */
  ecx = eax;
/* 10911561: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 10911565: call dword ptr [0x10959d9c] */
  esp -= 4; W32(esp, 0x1091156bu); SPILL(); f_4e2149(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* 1091156b: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1091156e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 10911572: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10911578u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10911578: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 1091157b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1091157f: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10911585u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10911585: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 10911588: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1091158eu); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1091158e: mov edx, dword ptr [0x10959d98] */
  edx = R32((uint32_t)(0x10959d98u));
/* 10911594: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 10911596: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10911598: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911599: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1091159cu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091159c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1091159e: jge 0x109115ae */
  if ((sf == of)) goto L_109115ae;
L_109115a0: /* 109115a0: push 0x10929c84 */
  { uint32_t v = 0x10929c84u; esp -= 4; W32(esp, v); }
/* 109115a5: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 109115a8: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x109115aeu); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_109115ae: /* 109115ae: call dword ptr [0x10959cc0] */
  esp -= 4; W32(esp, 0x109115b4u); SPILL(); f_4e4214(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appPackage@@YAPBGXZ */ RELOAD();
/* 109115b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109115b5: push 0x10929ae0 */
  { uint32_t v = 0x10929ae0u; esp -= 4; W32(esp, v); }
/* 109115ba: call dword ptr [0x10959d74] */
  esp -= 4; W32(esp, 0x109115c0u); SPILL(); f_4e27d9(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* 109115c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109115c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109115c5: jne 0x109115ff */
  if (!zf) goto L_109115ff;
L_109115c7: /* 109115c7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x109115c9u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109115c9: push 0x10929ca8 */
  { uint32_t v = 0x10929ca8u; esp -= 4; W32(esp, v); }
/* 109115ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109115cf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109115d1u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109115d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109115d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109115d6: jne 0x109115ff */
  if (!zf) goto L_109115ff;
L_109115d8: /* 109115d8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x109115dau); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109115da: push 0x10929cb8 */
  { uint32_t v = 0x10929cb8u; esp -= 4; W32(esp, v); }
/* 109115df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109115e0: call dword ptr [0x10959c04] */
  esp -= 4; W32(esp, 0x109115e6u); SPILL(); f_4e2b76(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appStrfind@@YAPBGPBG0@Z */ RELOAD();
/* 109115e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109115e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109115eb: jne 0x109115ff */
  if (!zf) goto L_109115ff;
L_109115ed: /* 109115ed: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 109115f0: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x109115f6u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 109115f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109115f7: call 0x10901221 */
  esp -= 4; W32(esp, 0x109115fcu); SPILL(); f_10901221(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
/* 109115fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_109115ff: /* 109115ff: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10911604: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 1091160b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1091160d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1091160f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10911611: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 10911614: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911615: push 0x10929cd0 */
  { uint32_t v = 0x10929cd0u; esp -= 4; W32(esp, v); }
/* 1091161a: push 0x10929ce4 */
  { uint32_t v = 0x10929ce4u; esp -= 4; W32(esp, v); }
/* 1091161f: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x10911622u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911622: mov ecx, dword ptr [0x10959cf8] */
  ecx = R32((uint32_t)(0x10959cf8u));
/* 10911628: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091162b: je 0x10911639 */
  if (zf) goto L_10911639;
L_1091162d: /* 1091162d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 10911630: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911632: jne 0x10911639 */
  if (!zf) goto L_10911639;
L_10911634: /* 10911634: call 0x109081c0 */
  esp -= 4; W32(esp, 0x10911639u); SPILL(); f_109081c0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
L_10911639: /* 10911639: mov edx, dword ptr [0x10959b1c] */
  edx = R32((uint32_t)(0x10959b1cu));
/* 1091163f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10911642: je 0x10911669 */
  if (zf) goto L_10911669;
L_10911644: /* 10911644: call 0x10901244 */
  esp -= 4; W32(esp, 0x10911649u); SPILL(); f_10901244(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
/* 10911649: call dword ptr [0x10959b54] */
  esp -= 4; W32(esp, 0x1091164fu); SPILL(); f_4e2969(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appPreExit@@YAXXZ */ RELOAD();
/* 1091164f: call dword ptr [0x10959b58] */
  esp -= 4; W32(esp, 0x10911655u); SPILL(); f_4e1e47(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appExit@@YAXXZ */ RELOAD();
/* 10911655: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 10911658: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1091165c: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10911662u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10911662: xor eax, eax */
  eax = 0;
/* 10911664: jmp 0x10911c45 */
  goto L_10911c45;
L_10911669: /* 10911669: call dword ptr [0x1095a400] */
  esp -= 4; W32(esp, 0x1091166fu); SPILL(); f_d82199(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Window!?InitWindowing@@YAXXZ */ RELOAD();
/* 1091166f: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 10911674: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10911676: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10911678: push 0x1092dfb8 */
  { uint32_t v = 0x1092dfb8u; esp -= 4; W32(esp, v); }
/* 1091167d: push 0x2dc */
  { uint32_t v = 0x2dcu; esp -= 4; W32(esp, v); }
/* 10911682: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x10911684u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911684: mov esi, eax */
  esi = eax;
/* 10911686: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 10911689: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091168b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1091168f: je 0x109116c0 */
  if (zf) goto L_109116c0;
L_10911691: /* 10911691: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10911693: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10911694: mov ecx, esp */
  ecx = esp;
/* 10911696: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 10911699: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1091169b: push 0x10929cf8 */
  { uint32_t v = 0x10929cf8u; esp -= 4; W32(esp, v); }
/* 109116a0: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x109116a6u); SPILL(); f_4e36a7(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 109116a6: push 0x10951bdc */
  { uint32_t v = 0x10951bdcu; esp -= 4; W32(esp, v); }
/* 109116ab: push 0x10951be0 */
  { uint32_t v = 0x10951be0u; esp -= 4; W32(esp, v); }
/* 109116b0: mov ecx, esi */
  ecx = esi;
/* 109116b2: call dword ptr [0x1095a3fc] */
  esp -= 4; W32(esp, 0x109116b8u); SPILL(); f_d814b0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Window!??0WLog@@QAE@PBGAAPAVFArchive@@VFName@@PAVWWindow@@@Z */ RELOAD();
/* 109116b8: mov dword ptr [esi], 0x10921b48 */
  W32((uint32_t)(esi), 0x10921b48u);
/* 109116be: jmp 0x109116c2 */
  goto L_109116c2;
L_109116c0: /* 109116c0: xor esi, esi */
  esi = 0;
L_109116c2: /* 109116c2: mov eax, dword ptr [0x1095a324] */
  eax = R32((uint32_t)(0x1095a324u));
/* 109116c7: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 109116c9: mov ecx, dword ptr [0x1095a324] */
  ecx = R32((uint32_t)(0x1095a324u));
/* 109116cf: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 109116d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109116d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109116d4: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 109116d8: call dword ptr [0x1095a3f8] */
  esp -= 4; W32(esp, 0x109116deu); SPILL(); f_d81681(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Window!?OpenWindow@WLog@@QAEXHH@Z */ RELOAD();
/* 109116de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109116e0: push 0x10929ae0 */
  { uint32_t v = 0x10929ae0u; esp -= 4; W32(esp, v); }
/* 109116e5: push 0x10929d08 */
  { uint32_t v = 0x10929d08u; esp -= 4; W32(esp, v); }
/* 109116ea: call dword ptr [0x10959d88] */
  esp -= 4; W32(esp, 0x109116f0u); SPILL(); f_4e1064(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?LocalizeGeneral@@YAPBGPBG00@Z */ RELOAD();
/* 109116f0: mov edx, dword ptr [0x1095a324] */
  edx = R32((uint32_t)(0x1095a324u));
/* 109116f6: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 109116f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109116fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109116fc: push 0x314 */
  { uint32_t v = 0x314u; esp -= 4; W32(esp, v); }
/* 10911701: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10911704: call dword ptr [0x10959b5c] */
  esp -= 4; W32(esp, 0x1091170au); SPILL(); f_4e2af9(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?Log@FOutputDevice@@QAEXW4EName@@PBG@Z */ RELOAD();
/* 1091170a: mov eax, dword ptr [0x10959cf8] */
  eax = R32((uint32_t)(0x10959cf8u));
/* 1091170f: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10911712: je 0x109117ac */
  if (zf) goto L_109117ac;
L_10911718: /* 10911718: mov ecx, dword ptr [0x10959d60] */
  ecx = R32((uint32_t)(0x10959d60u));
/* 1091171e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10911721: je 0x10911741 */
  if (zf) goto L_10911741;
L_10911723: /* 10911723: mov edx, dword ptr [0x1095a324] */
  edx = R32((uint32_t)(0x1095a324u));
/* 10911729: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1091172b: call dword ptr [0x1095a3b0] */
  esp -= 4; W32(esp, 0x10911731u); SPILL(); f_d8237e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Window!??BWWindow@@QBEPAUHWND__@@XZ */ RELOAD();
/* 10911731: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10911733: push 0x10929d14 */
  { uint32_t v = 0x10929d14u; esp -= 4; W32(esp, v); }
/* 10911738: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911739: call dword ptr [0x1095a114] */
  esp -= 4; W32(esp, 0x1091173fu); SPILL(); call_ind(R32(0x1095a114u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* USER32!SetPropW */ RELOAD();
/* 1091173f: jmp 0x109117ac */
  goto L_109117ac;
L_10911741: /* 10911741: mov edi, dword ptr [0x10959d90] */
  edi = R32((uint32_t)(0x10959d90u));
/* 10911747: push 0x10929d50 */
  { uint32_t v = 0x10929d50u; esp -= 4; W32(esp, v); }
/* 1091174c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1091174eu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091174e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911751: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911753: jne 0x10911759 */
  if (!zf) goto L_10911759;
L_10911755: /* 10911755: xor esi, esi */
  esi = 0;
/* 10911757: jmp 0x10911779 */
  goto L_10911779;
L_10911759: /* 10911759: push 0x10929d64 */
  { uint32_t v = 0x10929d64u; esp -= 4; W32(esp, v); }
/* 1091175e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10911760u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911760: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10911763: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10911766: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10911769: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091176c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091176f: call 0x10918780 */
  esp -= 4; W32(esp, 0x10911774u); SPILL(); f_10918780(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
/* 10911774: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10911777: mov esi, esp */
  esi = esp;
L_10911779: /* 10911779: push 0x10929d28 */
  { uint32_t v = 0x10929d28u; esp -= 4; W32(esp, v); }
/* 1091177e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10911780u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911780: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911784: push 0x10929d3c */
  { uint32_t v = 0x10929d3cu; esp -= 4; W32(esp, v); }
/* 10911789: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091178a: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x10911790u); SPILL(); f_4e267b(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 10911790: mov esi, eax */
  esi = eax;
/* 10911792: mov eax, dword ptr [0x1095a324] */
  eax = R32((uint32_t)(0x1095a324u));
/* 10911797: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10911799: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091179c: call dword ptr [0x1095a3b0] */
  esp -= 4; W32(esp, 0x109117a2u); SPILL(); f_d8237e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Window!??BWWindow@@QBEPAUHWND__@@XZ */ RELOAD();
/* 109117a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109117a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109117a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109117a6: call dword ptr [0x1095a118] */
  esp -= 4; W32(esp, 0x109117acu); SPILL(); call_ind(R32(0x1095a118u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* USER32!SetPropA */ RELOAD();
L_109117ac: /* 109117ac: call dword ptr [0x10959d40] */
  esp -= 4; W32(esp, 0x109117b2u); SPILL(); f_4e2987(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 109117b2: push 0x10929d78 */
  { uint32_t v = 0x10929d78u; esp -= 4; W32(esp, v); }
/* 109117b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109117b8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109117bau); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109117ba: mov ecx, dword ptr [0x10959be0] */
  ecx = R32((uint32_t)(0x10959be0u));
/* 109117c0: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 109117c2: mov edx, dword ptr [0x10959be0] */
  edx = R32((uint32_t)(0x10959be0u));
/* 109117c8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 109117ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109117cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109117cf: je 0x109117f6 */
  if (zf) goto L_109117f6;
L_109117d1: /* 109117d1: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109117d6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109117d8: mov eax, dword ptr [0x10959b60] */
  eax = R32((uint32_t)(0x10959b60u));
/* 109117dd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109117df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109117e0: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x109117e3u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109117e3: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 109117e9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 109117eb: mov eax, dword ptr [0x10959c50] */
  eax = R32((uint32_t)(0x10959c50u));
/* 109117f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109117f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109117f3: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x109117f6u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
L_109117f6: /* 109117f6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 109117f9: call dword ptr [0x10959d7c] */
  esp -= 4; W32(esp, 0x109117ffu); SPILL(); f_4e2d01(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 109117ff: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10911802: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 10911806: call dword ptr [0x10959d7c] */
  esp -= 4; W32(esp, 0x1091180cu); SPILL(); f_4e2d01(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 1091180c: mov edi, dword ptr [0x10959d40] */
  edi = R32((uint32_t)(0x10959d40u));
/* 10911812: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 10911816: xor esi, esi */
  esi = 0;
/* 10911818: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1091181au); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091181a: push 0x10929d8c */
  { uint32_t v = 0x10929d8cu; esp -= 4; W32(esp, v); }
/* 1091181f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911820: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x10911822u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911822: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911827: je 0x1091184a */
  if (zf) goto L_1091184a;
L_10911829: /* 10911829: push 0x10929d9c */
  { uint32_t v = 0x10929d9cu; esp -= 4; W32(esp, v); }
/* 1091182e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 10911831: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x10911837u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 10911837: push 0x10929da4 */
  { uint32_t v = 0x10929da4u; esp -= 4; W32(esp, v); }
/* 1091183c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091183f: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x10911845u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 10911845: mov esi, 1 */
  esi = 0x1u;
L_1091184a: /* 1091184a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1091184cu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091184c: push 0x10929dac */
  { uint32_t v = 0x10929dacu; esp -= 4; W32(esp, v); }
/* 10911851: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911852: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x10911854u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911854: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911857: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911859: je 0x1091187c */
  if (zf) goto L_1091187c;
L_1091185b: /* 1091185b: push 0x10929dbc */
  { uint32_t v = 0x10929dbcu; esp -= 4; W32(esp, v); }
/* 10911860: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 10911863: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x10911869u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 10911869: push 0x10929dc4 */
  { uint32_t v = 0x10929dc4u; esp -= 4; W32(esp, v); }
/* 1091186e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10911871: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x10911877u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 10911877: mov esi, 1 */
  esi = 0x1u;
L_1091187c: /* 1091187c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1091187eu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091187e: push 0x10929dcc */
  { uint32_t v = 0x10929dccu; esp -= 4; W32(esp, v); }
/* 10911883: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911884: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x10911886u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911886: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911889: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091188b: je 0x109118ae */
  if (zf) goto L_109118ae;
L_1091188d: /* 1091188d: push 0x10929ddc */
  { uint32_t v = 0x10929ddcu; esp -= 4; W32(esp, v); }
/* 10911892: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 10911895: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x1091189bu); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 1091189b: push 0x10929de4 */
  { uint32_t v = 0x10929de4u; esp -= 4; W32(esp, v); }
/* 109118a0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 109118a3: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x109118a9u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 109118a9: mov esi, 1 */
  esi = 0x1u;
L_109118ae: /* 109118ae: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x109118b0u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109118b0: push 0x10929dec */
  { uint32_t v = 0x10929decu; esp -= 4; W32(esp, v); }
/* 109118b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109118b6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109118b8u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109118b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109118bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109118bd: je 0x109118e0 */
  if (zf) goto L_109118e0;
L_109118bf: /* 109118bf: push 0x10929dfc */
  { uint32_t v = 0x10929dfcu; esp -= 4; W32(esp, v); }
/* 109118c4: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 109118c7: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x109118cdu); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 109118cd: push 0x10929e04 */
  { uint32_t v = 0x10929e04u; esp -= 4; W32(esp, v); }
/* 109118d2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 109118d5: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x109118dbu); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 109118db: mov esi, 1 */
  esi = 0x1u;
L_109118e0: /* 109118e0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x109118e2u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109118e2: push 0x10929e0c */
  { uint32_t v = 0x10929e0cu; esp -= 4; W32(esp, v); }
/* 109118e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109118e8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109118eau); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109118ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109118ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109118ef: je 0x10911912 */
  if (zf) goto L_10911912;
L_109118f1: /* 109118f1: push 0x10929e20 */
  { uint32_t v = 0x10929e20u; esp -= 4; W32(esp, v); }
/* 109118f6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 109118f9: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x109118ffu); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 109118ff: push 0x10929e2c */
  { uint32_t v = 0x10929e2cu; esp -= 4; W32(esp, v); }
/* 10911904: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10911907: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x1091190du); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 1091190d: mov esi, 1 */
  esi = 0x1u;
L_10911912: /* 10911912: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10911914u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911914: push 0x10929e34 */
  { uint32_t v = 0x10929e34u; esp -= 4; W32(esp, v); }
/* 10911919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091191a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1091191cu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091191c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091191f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911921: je 0x10911944 */
  if (zf) goto L_10911944;
L_10911923: /* 10911923: push 0x10929e48 */
  { uint32_t v = 0x10929e48u; esp -= 4; W32(esp, v); }
/* 10911928: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1091192b: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x10911931u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 10911931: push 0x10929e54 */
  { uint32_t v = 0x10929e54u; esp -= 4; W32(esp, v); }
/* 10911936: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10911939: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x1091193fu); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 1091193f: mov esi, 1 */
  esi = 0x1u;
L_10911944: /* 10911944: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10911946u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911946: push 0x10929e5c */
  { uint32_t v = 0x10929e5cu; esp -= 4; W32(esp, v); }
/* 1091194b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091194c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1091194eu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 1091194e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911951: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911953: je 0x10911976 */
  if (zf) goto L_10911976;
L_10911955: /* 10911955: push 0x10929e70 */
  { uint32_t v = 0x10929e70u; esp -= 4; W32(esp, v); }
/* 1091195a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1091195d: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x10911963u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 10911963: push 0x10929e7c */
  { uint32_t v = 0x10929e7cu; esp -= 4; W32(esp, v); }
/* 10911968: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091196b: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x10911971u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 10911971: mov esi, 1 */
  esi = 0x1u;
L_10911976: /* 10911976: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10911978u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911978: push 0x10929e88 */
  { uint32_t v = 0x10929e88u; esp -= 4; W32(esp, v); }
/* 1091197d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091197e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x10911980u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911980: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911983: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911985: je 0x109119a5 */
  if (zf) goto L_109119a5;
L_10911987: /* 10911987: push 0x10929e9c */
  { uint32_t v = 0x10929e9cu; esp -= 4; W32(esp, v); }
/* 1091198c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1091198f: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x10911995u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 10911995: push 0x10929ea8 */
  { uint32_t v = 0x10929ea8u; esp -= 4; W32(esp, v); }
/* 1091199a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091199d: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x109119a3u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 109119a3: jmp 0x109119a9 */
  goto L_109119a9;
L_109119a5: /* 109119a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109119a7: je 0x109119ef */
  if (zf) goto L_109119ef;
L_109119a9: /* 109119a9: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 109119ac: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x109119b2u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 109119b2: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 109119b8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 109119ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109119bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109119be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109119bf: push 0x10929eb4 */
  { uint32_t v = 0x10929eb4u; esp -= 4; W32(esp, v); }
/* 109119c4: push 0x10929edc */
  { uint32_t v = 0x10929edcu; esp -= 4; W32(esp, v); }
/* 109119c9: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109119ccu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 109119cc: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 109119cf: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x109119d5u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 109119d5: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 109119db: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 109119dd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109119df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109119e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109119e2: push 0x10929f08 */
  { uint32_t v = 0x10929f08u; esp -= 4; W32(esp, v); }
/* 109119e7: push 0x10929f30 */
  { uint32_t v = 0x10929f30u; esp -= 4; W32(esp, v); }
/* 109119ec: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109119efu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
L_109119ef: /* 109119ef: call 0x1090b010 */
  esp -= 4; W32(esp, 0x109119f4u); SPILL(); f_1090b010(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
/* 109119f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109119f6: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 109119f9: je 0x10911b07 */
  if (zf) goto L_10911b07;
L_109119ff: /* 109119ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10911a01: push 0x10929ae0 */
  { uint32_t v = 0x10929ae0u; esp -= 4; W32(esp, v); }
/* 10911a06: push 0x10929f5c */
  { uint32_t v = 0x10929f5cu; esp -= 4; W32(esp, v); }
/* 10911a0b: call dword ptr [0x10959d88] */
  esp -= 4; W32(esp, 0x10911a11u); SPILL(); f_4e1064(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?LocalizeGeneral@@YAPBGPBG00@Z */ RELOAD();
/* 10911a11: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911a14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911a15: mov eax, dword ptr [0x1095a324] */
  eax = R32((uint32_t)(0x1095a324u));
/* 10911a1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10911a1c: push 0x314 */
  { uint32_t v = 0x314u; esp -= 4; W32(esp, v); }
/* 10911a21: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10911a24: call dword ptr [0x10959b5c] */
  esp -= 4; W32(esp, 0x10911a2au); SPILL(); f_4e2af9(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?Log@FOutputDevice@@QAEXW4EName@@PBG@Z */ RELOAD();
/* 10911a2a: call 0x10901244 */
  esp -= 4; W32(esp, 0x10911a2fu); SPILL(); f_10901244(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
/* 10911a2f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 10911a32: call dword ptr [0x10959d7c] */
  esp -= 4; W32(esp, 0x10911a38u); SPILL(); f_4e2d01(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 10911a38: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 10911a3c: call dword ptr [0x10959d40] */
  esp -= 4; W32(esp, 0x10911a42u); SPILL(); f_4e2987(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 10911a42: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 10911a45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10911a46: push 0x10929f64 */
  { uint32_t v = 0x10929f64u; esp -= 4; W32(esp, v); }
/* 10911a4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911a4c: call dword ptr [0x10959bfc] */
  esp -= 4; W32(esp, 0x10911a52u); SPILL(); f_4e1a5a(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?Parse@@YAHPBG0AAVFString@@@Z */ RELOAD();
/* 10911a52: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911a55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911a57: je 0x10911ae8 */
  if (zf) goto L_10911ae8;
L_10911a5d: /* 10911a5d: push 0x10929f70 */
  { uint32_t v = 0x10929f70u; esp -= 4; W32(esp, v); }
/* 10911a62: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 10911a65: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x10911a6bu); SPILL(); f_4e13de(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 10911a6b: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 10911a6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10911a6f: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 10911a72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10911a73: mov bl, 0xa */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xau) & 0xffu);
/* 10911a75: mov ecx, eax */
  ecx = eax;
/* 10911a77: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 10911a7a: call dword ptr [0x10959b64] */
  esp -= 4; W32(esp, 0x10911a80u); SPILL(); f_4e4282(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 10911a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911a81: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 10911a84: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 10911a88: call dword ptr [0x10959ca4] */
  esp -= 4; W32(esp, 0x10911a8eu); SPILL(); f_4e1d20(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 10911a8e: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 10911a91: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 10911a94: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10911a9au); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10911a9a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 10911a9d: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 10911aa1: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10911aa7u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10911aa7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10911aaa: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 10911aad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911aaf: je 0x10911ae8 */
  if (zf) goto L_10911ae8;
L_10911ab1: /* 10911ab1: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 10911ab4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911ab6: je 0x10911ae8 */
  if (zf) goto L_10911ae8;
L_10911ab8: /* 10911ab8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 10911abb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10911abd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911abf: je 0x10911ae8 */
  if (zf) goto L_10911ae8;
L_10911ac1: /* 10911ac1: mov edx, dword ptr [0x1095a324] */
  edx = R32((uint32_t)(0x1095a324u));
/* 10911ac7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 10911ac9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911acb: je 0x10911ad2 */
  if (zf) goto L_10911ad2;
L_10911acd: /* 10911acd: lea edi, [eax + 0x3c] */
  edi = (uint32_t)(eax + 0x3cu);
/* 10911ad0: jmp 0x10911ad4 */
  goto L_10911ad4;
L_10911ad2: /* 10911ad2: xor edi, edi */
  edi = 0;
L_10911ad4: /* 10911ad4: lea esi, [ecx + 0x2c] */
  esi = (uint32_t)(ecx + 0x2cu);
/* 10911ad7: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 10911ada: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x10911ae0u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 10911ae0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10911ae2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10911ae3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911ae4: mov ecx, esi */
  ecx = esi;
/* 10911ae6: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x10911ae8u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
L_10911ae8: /* 10911ae8: mov eax, dword ptr [0x10959b1c] */
  eax = R32((uint32_t)(0x10959b1cu));
/* 10911aed: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10911af0: jne 0x10911afa */
  if (!zf) goto L_10911afa;
L_10911af2: /* 10911af2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10911af5: call 0x1090ce70 */
  esp -= 4; W32(esp, 0x10911afau); SPILL(); f_1090ce70(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
L_10911afa: /* 10911afa: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 10911afd: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 10911b01: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10911b07u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
L_10911b07: /* 10911b07: mov ecx, dword ptr [0x10959d98] */
  ecx = R32((uint32_t)(0x10959d98u));
/* 10911b0d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10911b0f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10911b11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10911b13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10911b15: push 0x10929f7c */
  { uint32_t v = 0x10929f7cu; esp -= 4; W32(esp, v); }
/* 10911b1a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x10911b1du); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911b1d: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 10911b22: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10911b25: je 0x10911b43 */
  if (zf) goto L_10911b43;
L_10911b27: /* 10911b27: mov ecx, dword ptr [0x1095a324] */
  ecx = R32((uint32_t)(0x1095a324u));
/* 10911b2d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10911b2f: call dword ptr [0x1095a3b0] */
  esp -= 4; W32(esp, 0x10911b35u); SPILL(); f_d8237e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Window!??BWWindow@@QBEPAUHWND__@@XZ */ RELOAD();
/* 10911b35: push 0x10929f94 */
  { uint32_t v = 0x10929f94u; esp -= 4; W32(esp, v); }
/* 10911b3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911b3b: call dword ptr [0x1095a11c] */
  esp -= 4; W32(esp, 0x10911b41u); SPILL(); call_ind(R32(0x1095a11cu)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* USER32!RemovePropW */ RELOAD();
/* 10911b41: jmp 0x10911bad */
  goto L_10911bad;
L_10911b43: /* 10911b43: mov edi, dword ptr [0x10959d90] */
  edi = R32((uint32_t)(0x10959d90u));
/* 10911b49: push 0x10929fd0 */
  { uint32_t v = 0x10929fd0u; esp -= 4; W32(esp, v); }
/* 10911b4e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10911b50u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911b50: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911b53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911b55: jne 0x10911b5b */
  if (!zf) goto L_10911b5b;
L_10911b57: /* 10911b57: xor esi, esi */
  esi = 0;
/* 10911b59: jmp 0x10911b7b */
  goto L_10911b7b;
L_10911b5b: /* 10911b5b: push 0x10929fe4 */
  { uint32_t v = 0x10929fe4u; esp -= 4; W32(esp, v); }
/* 10911b60: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10911b62u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911b62: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10911b65: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10911b68: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10911b6b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911b6e: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10911b71: call 0x10918780 */
  esp -= 4; W32(esp, 0x10911b76u); SPILL(); f_10918780(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD();
/* 10911b76: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10911b79: mov esi, esp */
  esi = esp;
L_10911b7b: /* 10911b7b: push 0x10929fa8 */
  { uint32_t v = 0x10929fa8u; esp -= 4; W32(esp, v); }
/* 10911b80: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10911b82u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
/* 10911b82: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911b85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911b86: push 0x10929fbc */
  { uint32_t v = 0x10929fbcu; esp -= 4; W32(esp, v); }
/* 10911b8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10911b8c: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x10911b92u); SPILL(); f_4e267b(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 10911b92: mov edx, dword ptr [0x1095a324] */
  edx = R32((uint32_t)(0x1095a324u));
/* 10911b98: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 10911b9a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911b9d: mov esi, eax */
  esi = eax;
/* 10911b9f: call dword ptr [0x1095a3b0] */
  esp -= 4; W32(esp, 0x10911ba5u); SPILL(); f_d8237e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Window!??BWWindow@@QBEPAUHWND__@@XZ */ RELOAD();
/* 10911ba5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10911ba6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911ba7: call dword ptr [0x1095a120] */
  esp -= 4; W32(esp, 0x10911badu); SPILL(); call_ind(R32(0x1095a120u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* USER32!RemovePropA */ RELOAD();
L_10911bad: /* 10911bad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10911baf: push 0x10929ae0 */
  { uint32_t v = 0x10929ae0u; esp -= 4; W32(esp, v); }
/* 10911bb4: push 0x10929ff8 */
  { uint32_t v = 0x10929ff8u; esp -= 4; W32(esp, v); }
/* 10911bb9: call dword ptr [0x10959d88] */
  esp -= 4; W32(esp, 0x10911bbfu); SPILL(); f_4e1064(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?LocalizeGeneral@@YAPBGPBG00@Z */ RELOAD();
/* 10911bbf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10911bc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10911bc3: mov eax, dword ptr [0x1095a324] */
  eax = R32((uint32_t)(0x1095a324u));
/* 10911bc8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10911bca: push 0x314 */
  { uint32_t v = 0x314u; esp -= 4; W32(esp, v); }
/* 10911bcf: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10911bd2: call dword ptr [0x10959b5c] */
  esp -= 4; W32(esp, 0x10911bd8u); SPILL(); f_4e2af9(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?Log@FOutputDevice@@QAEXW4EName@@PBG@Z */ RELOAD();
/* 10911bd8: mov ecx, dword ptr [0x1095a324] */
  ecx = R32((uint32_t)(0x1095a324u));
/* 10911bde: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10911be0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10911be2: je 0x10911beb */
  if (zf) goto L_10911beb;
L_10911be4: /* 10911be4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10911be6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10911be8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x10911bebu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } RELOAD(); }
L_10911beb: /* 10911beb: call dword ptr [0x10959b54] */
  esp -= 4; W32(esp, 0x10911bf1u); SPILL(); f_4e2969(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appPreExit@@YAXXZ */ RELOAD();
/* 10911bf1: mov eax, dword ptr [0x10959d24] */
  eax = R32((uint32_t)(0x10959d24u));
/* 10911bf6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10911bf9: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 10911bff: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 10911c03: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10911c09u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10911c09: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 10911c0c: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 10911c10: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10911c16u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10911c16: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 10911c19: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10911c1d: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10911c23u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
L_10911c23: /* 10911c23: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 10911c2a: call dword ptr [0x10959ee8] */
  esp -= 4; W32(esp, 0x10911c30u); SPILL(); f_d51537(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* EngineEx!?Bink_Manager_Stop_Service@@YAXXZ */ RELOAD();
/* 10911c30: call dword ptr [0x10959b58] */
  esp -= 4; W32(esp, 0x10911c36u); SPILL(); f_4e1e47(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x10911c23u: guest_unwind_done(); RELOAD(); goto L_10911c23; } return; } /* Core!?appExit@@YAXXZ */ RELOAD();
/* 10911c36: mov ecx, dword ptr [0x10959d00] */
  ecx = R32((uint32_t)(0x10959d00u));
/* 10911c3c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 10911c3f: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
L_10911c45: /* 10911c45: lea esp, [ebp - 0x288] */
  esp = (uint32_t)(ebp + 0xfffffd78u);
/* 10911c4b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10911c4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10911c55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10911c56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10911c57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10911c58: mov esp, ebp */
  esp = ebp;
/* 10911c5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10911c5b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_10911c5e(void) {
  LOAD_REGS();
L_10911c5e: /* 10911c5e: mov ecx, 0x10951bcc */
  ecx = 0x10951bccu;
/* 10911c63: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 10911c6a: call 0x10901131 */
  esp -= 4; W32(esp, 0x10911c6fu); SPILL(); f_10901131(); if (g_unwind) return; RELOAD();
/* 10911c6f: mov eax, 0x10911c23 */
  eax = 0x10911c23u;
/* 10911c74: ret  */
  esp += 4; SPILL(); return;
}

void f_10911f40(void) {
  LOAD_REGS();
L_10911f40: /* 10911f40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10911f41: mov esi, ecx */
  esi = ecx;
/* 10911f43: call dword ptr [0x1095a408] */
  esp -= 4; W32(esp, 0x10911f49u); SPILL(); f_d82743(); if (g_unwind) return; /* Window!??1WLog@@UAE@XZ */ RELOAD();
/* 10911f49: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10911f4e: je 0x10911f5d */
  if (zf) goto L_10911f5d;
L_10911f50: /* 10911f50: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 10911f55: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10911f57: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10911f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10911f5a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x10911f5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_10911f5d: /* 10911f5d: mov eax, esi */
  eax = esi;
/* 10911f5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10911f60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10911f7c(void) {
  LOAD_REGS();
L_10911f7c: /* 10911f7c: jmp dword ptr [0x10959ee8] */
  SPILL(); f_d51537(); return; /* EngineEx!?Bink_Manager_Stop_Service@@YAXXZ */
}

void f_10911f82(void) {
  LOAD_REGS();
L_10911f82: /* 10911f82: jmp dword ptr [0x10959ee4] */
  SPILL(); f_d51aff(); return; /* EngineEx!?Bink_Manager_Set_Language@@YAXH@Z */
}

void f_10911f88(void) {
  LOAD_REGS();
L_10911f88: /* 10911f88: jmp dword ptr [0x10959ee0] */
  SPILL(); f_d51b22(); return; /* EngineEx!?Bink_Manager_Start_Service@@YAXXZ */
}

void f_10911f8e(void) {
  LOAD_REGS();
L_10911f8e: /* 10911f8e: jmp dword ptr [0x1095a264] */
  SPILL(); f_d81d11(); return; /* Window!??1FWindowsBitmap@@QAE@XZ */
}

void f_10911f94(void) {
  LOAD_REGS();
L_10911f94: /* 10911f94: jmp dword ptr [0x1095a260] */
  SPILL(); f_d816c2(); return; /* Window!?GetBitmapHandle@FWindowsBitmap@@QAEPAUHBITMAP__@@XZ */
}

void f_10911f9a(void) {
  LOAD_REGS();
L_10911f9a: /* 10911f9a: jmp dword ptr [0x1095a24c] */
  SPILL(); f_d8197e(); return; /* Window!?LoadFile@FWindowsBitmap@@QAEHPBG@Z */
}

void f_10911fa0(void) {
  LOAD_REGS();
L_10911fa0: /* 10911fa0: jmp dword ptr [0x1095a248] */
  SPILL(); f_d81e3d(); return; /* Window!??0FWindowsBitmap@@QAE@H@Z */
}

void f_10911fa6(void) {
  LOAD_REGS();
L_10911fa6: /* 10911fa6: jmp dword ptr [0x1095a244] */
  SPILL(); f_d81d39(); return; /* Window!?OnCancel@WWizardDialog@@UAEXXZ */
}

void f_10911fac(void) {
  LOAD_REGS();
L_10911fac: /* 10911fac: jmp dword ptr [0x1095a240] */
  SPILL(); f_d8183e(); return; /* Window!?OnFinish@WWizardDialog@@UAEXXZ */
}

void f_10911fb2(void) {
  LOAD_REGS();
L_10911fb2: /* 10911fb2: jmp dword ptr [0x1095a23c] */
  SPILL(); f_d826cb(); return; /* Window!?OnNext@WWizardDialog@@UAEXXZ */
}

void f_10911fb8(void) {
  LOAD_REGS();
L_10911fb8: /* 10911fb8: jmp dword ptr [0x1095a238] */
  SPILL(); f_d81370(); return; /* Window!?OnBack@WWizardDialog@@UAEXXZ */
}

void f_10911fbe(void) {
  LOAD_REGS();
L_10911fbe: /* 10911fbe: jmp dword ptr [0x1095a234] */
  SPILL(); f_d81523(); return; /* Window!?RefreshPage@WWizardDialog@@UAEXXZ */
}

void f_10911fc4(void) {
  LOAD_REGS();
L_10911fc4: /* 10911fc4: jmp dword ptr [0x1095a230] */
  SPILL(); f_d817b2(); return; /* Window!?Advance@WWizardDialog@@UAEXPAVWWizardPage@@@Z */
}

void f_10911fca(void) {
  LOAD_REGS();
L_10911fca: /* 10911fca: jmp dword ptr [0x1095a22c] */
  SPILL(); f_d82252(); return; /* Window!?LocalizeText@WDialog@@UAEXPBG0@Z */
}

void f_10911fd0(void) {
  LOAD_REGS();
L_10911fd0: /* 10911fd0: jmp dword ptr [0x1095a228] */
  SPILL(); f_d823b0(); return; /* Window!?DoModal@WDialog@@UAEHPAUHINSTANCE__@@@Z */
}

void f_10911fd6(void) {
  LOAD_REGS();
L_10911fd6: /* 10911fd6: jmp dword ptr [0x1095a224] */
  SPILL(); f_d81da2(); return; /* Window!?MyDrawEdge@WWindow@@UAEXPAUHDC__@@PAUtagRECT@@H@Z */
}

void f_10911fdc(void) {
  LOAD_REGS();
L_10911fdc: /* 10911fdc: jmp dword ptr [0x1095a220] */
  SPILL(); f_d81299(); return; /* Window!?OnDestroy@WWizardDialog@@UAEXXZ */
}

void f_10911fe2(void) {
  LOAD_REGS();
L_10911fe2: /* 10911fe2: jmp dword ptr [0x1095a21c] */
  SPILL(); f_d818a7(); return; /* Window!?OnClose@WWizardDialog@@UAEHXZ */
}

void f_10911fe8(void) {
  LOAD_REGS();
L_10911fe8: /* 10911fe8: jmp dword ptr [0x1095a218] */
  SPILL(); f_d81e60(); return; /* Window!?OnSetCursor@WWindow@@UAEHXZ */
}

void f_10911fee(void) {
  LOAD_REGS();
L_10911fee: /* 10911fee: jmp dword ptr [0x1095a214] */
  SPILL(); f_d8272a(); return; /* Window!?OnFinishSplitterDrag@WWindow@@UAEXPAVWDragInterceptor@@H@Z */
}

void f_10911ff4(void) {
  LOAD_REGS();
L_10911ff4: /* 10911ff4: jmp dword ptr [0x1095a210] */
  SPILL(); f_d8285b(); return; /* Window!?OnRightButtonUp@WWindow@@UAEXXZ */
}

void f_10911ffa(void) {
  LOAD_REGS();
L_10911ffa: /* 10911ffa: jmp dword ptr [0x1095a40c] */
  SPILL(); f_d812c1(); return; /* Window!?OnLeftButtonUp@WWindow@@UAEXXZ */
}

void f_10912000(void) {
  LOAD_REGS();
L_10912000: /* 10912000: jmp dword ptr [0x1095a208] */
  SPILL(); f_d81352(); return; /* Window!?OnRightButtonDown@WWindow@@UAEXXZ */
}

void f_10912006(void) {
  LOAD_REGS();
L_10912006: /* 10912006: jmp dword ptr [0x1095a204] */
  SPILL(); f_d81dc5(); return; /* Window!?OnRightButtonDoubleClick@WWindow@@UAEXXZ */
}

void f_1091200c(void) {
  LOAD_REGS();
L_1091200c: /* 1091200c: jmp dword ptr [0x1095a200] */
  SPILL(); f_d826f8(); return; /* Window!?OnMiddleButtonDoubleClick@WWindow@@UAEXXZ */
}

void f_10912012(void) {
  LOAD_REGS();
L_10912012: /* 10912012: jmp dword ptr [0x1095a1fc] */
  SPILL(); f_d82810(); return; /* Window!?OnLeftButtonDoubleClick@WWindow@@UAEXXZ */
}

void f_10912018(void) {
  LOAD_REGS();
L_10912018: /* 10912018: jmp dword ptr [0x1095a1f8] */
  SPILL(); f_d81e5b(); return; /* Window!?OnLeftButtonDown@WWindow@@UAEXXZ */
}

void f_1091201e(void) {
  LOAD_REGS();
L_1091201e: /* 1091201e: jmp dword ptr [0x1095a1f4] */
  SPILL(); f_d82171(); return; /* Window!?OnMouseMove@WWindow@@UAEXKUFPoint@@@Z */
}

void f_10912024(void) {
  LOAD_REGS();
L_10912024: /* 10912024: jmp dword ptr [0x1095a1f0] */
  SPILL(); f_d81c6c(); return; /* Window!?OnMdiActivate@WWindow@@UAEXH@Z */
}

void f_1091202a(void) {
  LOAD_REGS();
L_1091202a: /* 1091202a: jmp dword ptr [0x1095a1ec] */
  SPILL(); f_d8283d(); return; /* Window!?OnReleaseCapture@WWindow@@UAEXXZ */
}

void f_10912030(void) {
  LOAD_REGS();
L_10912030: /* 10912030: jmp dword ptr [0x1095a1e8] */
  SPILL(); f_d81f9b(); return; /* Window!?OnTimer@WWindow@@UAEXXZ */
}

void f_10912036(void) {
  LOAD_REGS();
L_10912036: /* 10912036: jmp dword ptr [0x1095a1e4] */
  SPILL(); f_d81087(); return; /* Window!?OnMouseHover@WWindow@@UAEXXZ */
}

void f_1091203c(void) {
  LOAD_REGS();
L_1091203c: /* 1091203c: jmp dword ptr [0x1095a1e0] */
  SPILL(); f_d826c1(); return; /* Window!?OnMouseLeave@WWindow@@UAEXXZ */
}

void f_10912042(void) {
  LOAD_REGS();
L_10912042: /* 10912042: jmp dword ptr [0x1095a1dc] */
  SPILL(); f_d8239c(); return; /* Window!?OnMouseEnter@WWindow@@UAEXXZ */
}

void f_10912048(void) {
  LOAD_REGS();
L_10912048: /* 10912048: jmp dword ptr [0x1095a1d8] */
  SPILL(); f_d81d20(); return; /* Window!?OnEnterIdle@WWindow@@UAEXXZ */
}

void f_1091204e(void) {
  LOAD_REGS();
L_1091204e: /* 1091204e: jmp dword ptr [0x1095a1d4] */
  SPILL(); f_d817f3(); return; /* Window!?OnMeasureItem@WWindow@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z */
}

void f_10912054(void) {
  LOAD_REGS();
L_10912054: /* 10912054: jmp dword ptr [0x1095a1d0] */
  SPILL(); f_d820fe(); return; /* Window!?OnDrawItem@WWindow@@UAEXPAUtagDRAWITEMSTRUCT@@@Z */
}

void f_1091205a(void) {
  LOAD_REGS();
L_1091205a: /* 1091205a: jmp dword ptr [0x1095a1cc] */
  SPILL(); f_d81bb3(); return; /* Window!?OnCreate@WWindow@@UAEXXZ */
}

void f_10912060(void) {
  LOAD_REGS();
L_10912060: /* 10912060: jmp dword ptr [0x1095a1c8] */
  SPILL(); f_d825a4(); return; /* Window!?OnPaint@WWindow@@UAEXXZ */
}

void f_10912066(void) {
  LOAD_REGS();
L_10912066: /* 10912066: jmp dword ptr [0x1095a1c4] */
  SPILL(); f_d820e5(); return; /* Window!?OnKeyUp@WWindow@@UAEXIJ@Z */
}

void f_1091206c(void) {
  LOAD_REGS();
L_1091206c: /* 1091206c: jmp dword ptr [0x1095a274] */
  SPILL(); f_d825cc(); return; /* Window!?OnHScroll@WWindow@@UAEXIJ@Z */
}

void f_10912072(void) {
  LOAD_REGS();
L_10912072: /* 10912072: jmp dword ptr [0x1095a328] */
  SPILL(); f_d8227a(); return; /* Window!?OnVScroll@WWindow@@UAEXIJ@Z */
}

void f_10912078(void) {
  LOAD_REGS();
L_10912078: /* 10912078: jmp dword ptr [0x1095a32c] */
  SPILL(); f_d826e9(); return; /* Window!?OnEraseBkgnd@WWindow@@UAEHXZ */
}

void f_1091207e(void) {
  LOAD_REGS();
L_1091207e: /* 1091207e: jmp dword ptr [0x1095a330] */
  SPILL(); f_d82581(); return; /* Window!?OnUndo@WWindow@@UAEXXZ */
}

void f_10912084(void) {
  LOAD_REGS();
L_10912084: /* 10912084: jmp dword ptr [0x1095a334] */
  SPILL(); f_d81bd6(); return; /* Window!?OnShowWindow@WWindow@@UAEXH@Z */
}

void f_1091208a(void) {
  LOAD_REGS();
L_1091208a: /* 1091208a: jmp dword ptr [0x1095a338] */
  SPILL(); f_d81c3a(); return; /* Window!?OnPaste@WWindow@@UAEXXZ */
}

void f_10912090(void) {
  LOAD_REGS();
L_10912090: /* 10912090: jmp dword ptr [0x1095a33c] */
  SPILL(); f_d81f41(); return; /* Window!?OnCopy@WWindow@@UAEXXZ */
}

void f_10912096(void) {
  LOAD_REGS();
L_10912096: /* 10912096: jmp dword ptr [0x1095a340] */
  SPILL(); f_d816e0(); return; /* Window!?OnCut@WWindow@@UAEXXZ */
}

void f_1091209c(void) {
  LOAD_REGS();
L_1091209c: /* 1091209c: jmp dword ptr [0x1095a344] */
  SPILL(); f_d82315(); return; /* Window!?OnKeyDown@WWindow@@UAEXG@Z */
}

void f_109120a2(void) {
  LOAD_REGS();
L_109120a2: /* 109120a2: jmp dword ptr [0x1095a348] */
  SPILL(); f_d81b68(); return; /* Window!?OnChar@WWindow@@UAEXG@Z */
}

void f_109120a8(void) {
  LOAD_REGS();
L_109120a8: /* 109120a8: jmp dword ptr [0x1095a34c] */
  SPILL(); f_d81898(); return; /* Window!?OnActivate@WWindow@@UAEXH@Z */
}

void f_109120ae(void) {
  LOAD_REGS();
L_109120ae: /* 109120ae: jmp dword ptr [0x1095a350] */
  SPILL(); f_d8142e(); return; /* Window!?OnSysCommand@WWindow@@UAEHH@Z */
}

void f_109120b4(void) {
  LOAD_REGS();
L_109120b4: /* 109120b4: jmp dword ptr [0x1095a354] */
  SPILL(); f_d810ff(); return; /* Window!?OnCommand@WWindow@@UAEXH@Z */
}

void f_109120ba(void) {
  LOAD_REGS();
L_109120ba: /* 109120ba: jmp dword ptr [0x1095a358] */
  SPILL(); f_d82748(); return; /* Window!?OnMove@WWindow@@UAEXHH@Z */
}

void f_109120c0(void) {
  LOAD_REGS();
L_109120c0: /* 109120c0: jmp dword ptr [0x1095a35c] */
  SPILL(); f_d81a87(); return; /* Window!?OnWindowPosChanging@WWindow@@UAEXPAH000@Z */
}

void f_109120c6(void) {
  LOAD_REGS();
L_109120c6: /* 109120c6: jmp dword ptr [0x1095a360] */
  SPILL(); f_d828ba(); return; /* Window!?OnSize@WWindow@@UAEXKHH@Z */
}

void f_109120cc(void) {
  LOAD_REGS();
L_109120cc: /* 109120cc: jmp dword ptr [0x1095a364] */
  SPILL(); f_d82540(); return; /* Window!?OnKillFocus@WWindow@@UAEXPAUHWND__@@@Z */
}

void f_109120d2(void) {
  LOAD_REGS();
L_109120d2: /* 109120d2: jmp dword ptr [0x1095a368] */
  SPILL(); f_d8178f(); return; /* Window!?OnSetFocus@WWindow@@UAEXPAUHWND__@@@Z */
}

void f_109120d8(void) {
  LOAD_REGS();
L_109120d8: /* 109120d8: jmp dword ptr [0x1095a36c] */
  SPILL(); f_d82414(); return; /* Window!?OnCopyData@WWindow@@UAEXPAUHWND__@@PAUtagCOPYDATASTRUCT@@@Z */
}

void f_109120de(void) {
  LOAD_REGS();
L_109120de: /* 109120de: jmp dword ptr [0x1095a370] */
  SPILL(); f_d81177(); return; /* Window!?GetLength@WWindow@@UAEHXZ */
}

void f_109120e4(void) {
  LOAD_REGS();
L_109120e4: /* 109120e4: jmp dword ptr [0x1095a374] */
  SPILL(); f_d82536(); return; /* Window!?SetText@WWindow@@UAEXPBG@Z */
}

void f_109120ea(void) {
  LOAD_REGS();
L_109120ea: /* 109120ea: jmp dword ptr [0x1095a378] */
  SPILL(); f_d82428(); return; /* Window!?GetText@WWindow@@UAE?AVFString@@XZ */
}

void f_109120f0(void) {
  LOAD_REGS();
L_109120f0: /* 109120f0: jmp dword ptr [0x1095a37c] */
  SPILL(); f_d8191f(); return; /* Window!?InterceptControlCommand@WWindow@@UAEHIIJ@Z */
}

void f_109120f6(void) {
  LOAD_REGS();
L_109120f6: /* 109120f6: jmp dword ptr [0x1095a380] */
  SPILL(); f_d8163b(); return; /* Window!?CallDefaultProc@WDialog@@UAEHIIJ@Z */
}

void f_109120fc(void) {
  LOAD_REGS();
L_109120fc: /* 109120fc: jmp dword ptr [0x1095a384] */
  SPILL(); f_d828d8(); return; /* Window!?WndProc@WWindow@@UAEJIIJ@Z */
}

void f_10912102(void) {
  LOAD_REGS();
L_10912102: /* 10912102: jmp dword ptr [0x1095a388] */
  SPILL(); f_d81ebf(); return; /* Window!?DoDestroy@WWindow@@UAEXXZ */
}

void f_10912108(void) {
  LOAD_REGS();
L_10912108: /* 10912108: jmp dword ptr [0x1095a38c] */
  SPILL(); f_d825f4(); return; /* Window!?Serialize@WWindow@@UAEXAAVFArchive@@@Z */
}

void f_1091210e(void) {
  LOAD_REGS();
L_1091210e: /* 1091210e: jmp dword ptr [0x1095a390] */
  SPILL(); f_d81a96(); return; /* Window!?Show@WDialog@@UAEXH@Z */
}

void f_10912114(void) {
  LOAD_REGS();
L_10912114: /* 10912114: jmp dword ptr [0x1095a394] */
  SPILL(); f_d812c6(); return; /* Window!?Unused@FCommandTarget@@UAEXXZ */
}

void f_1091211a(void) {
  LOAD_REGS();
L_1091211a: /* 1091211a: jmp dword ptr [0x1095a398] */
  SPILL(); f_d81a9b(); return; /* Window!??1WWizardDialog@@UAE@XZ */
}

void f_10912120(void) {
  LOAD_REGS();
L_10912120: /* 10912120: jmp dword ptr [0x1095a39c] */
  SPILL(); f_d82662(); return; /* Window!??1WLabel@@UAE@XZ */
}

void f_10912126(void) {
  LOAD_REGS();
L_10912126: /* 10912126: jmp dword ptr [0x1095a3a4] */
  SPILL(); f_d8243c(); return; /* Window!?MaybeDestroy@WWindow@@QAEXXZ */
}

void f_1091212c(void) {
  LOAD_REGS();
L_1091212c: /* 1091212c: jmp dword ptr [0x1095a3a0] */
  SPILL(); f_d8272f(); return; /* Window!??0WLabel@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
}

void f_10912132(void) {
  LOAD_REGS();
L_10912132: /* 10912132: jmp dword ptr [0x1095a3a8] */
  SPILL(); f_d817e9(); return; /* Window!??0WWizardDialog@@QAE@XZ */
}

void f_10912138(void) {
  LOAD_REGS();
L_10912138: /* 10912138: jmp dword ptr [0x1095a3b0] */
  SPILL(); f_d8237e(); return; /* Window!??BWWindow@@QBEPAUHWND__@@XZ */
}

void f_1091213e(void) {
  LOAD_REGS();
L_1091213e: /* 1091213e: jmp dword ptr [0x1095a20c] */
  SPILL(); f_d815e6(); return; /* Window!?OnInitDialog@WWizardDialog@@UAEXXZ */
}

void f_10912144(void) {
  LOAD_REGS();
L_10912144: /* 10912144: jmp dword ptr [0x1095a250] */
  SPILL(); f_d824f0(); return; /* Window!?OnCancel@WWizardPage@@UAEXXZ */
}

void f_1091214a(void) {
  LOAD_REGS();
L_1091214a: /* 1091214a: jmp dword ptr [0x1095a254] */
  SPILL(); f_d81799(); return; /* Window!?GetShow@WWizardPage@@UAEHXZ */
}

void f_10912150(void) {
  LOAD_REGS();
L_10912150: /* 10912150: jmp dword ptr [0x1095a258] */
  SPILL(); f_d823e7(); return; /* Window!?GetCancelText@WWizardPage@@UAEPBGXZ */
}

void f_10912156(void) {
  LOAD_REGS();
L_10912156: /* 10912156: jmp dword ptr [0x1095a25c] */
  SPILL(); f_d81f87(); return; /* Window!?GetFinishText@WWizardPage@@UAEPBGXZ */
}

void f_1091215c(void) {
  LOAD_REGS();
L_1091215c: /* 1091215c: jmp dword ptr [0x1095a268] */
  SPILL(); f_d8103c(); return; /* Window!?GetBackText@WWizardPage@@UAEPBGXZ */
}

void f_10912162(void) {
  LOAD_REGS();
L_10912162: /* 10912162: jmp dword ptr [0x1095a26c] */
  SPILL(); f_d8145b(); return; /* Window!?OnCurrent@WWizardPage@@UAEXXZ */
}

void f_10912168(void) {
  LOAD_REGS();
L_10912168: /* 10912168: jmp dword ptr [0x1095a270] */
  SPILL(); f_d81c58(); return; /* Window!?OnDestroy@WWindow@@UAEXXZ */
}

void f_1091216e(void) {
  LOAD_REGS();
L_1091216e: /* 1091216e: jmp dword ptr [0x1095a3ac] */
  SPILL(); f_d81113(); return; /* Window!?OnClose@WWindow@@UAEHXZ */
}

void f_10912174(void) {
  LOAD_REGS();
L_10912174: /* 10912174: jmp dword ptr [0x1095a278] */
  SPILL(); f_d81bfe(); return; /* Window!??1WButton@@UAE@XZ */
}

void f_1091217a(void) {
  LOAD_REGS();
L_1091217a: /* 1091217a: jmp dword ptr [0x1095a27c] */
  SPILL(); f_d81532(); return; /* Window!??1WWizardPage@@UAE@XZ */
}

void f_10912180(void) {
  LOAD_REGS();
L_10912180: /* 10912180: jmp dword ptr [0x1095a280] */
  SPILL(); f_d81adc(); return; /* Window!??0WButton@@QAE@PAVWWindow@@HUFDelegate@@P6GJPAUHWND__@@IIJ@Z@Z */
}

void f_10912186(void) {
  LOAD_REGS();
L_10912186: /* 10912186: jmp dword ptr [0x1095a284] */
  SPILL(); f_d8235b(); return; /* Window!??0FDelegate@@QAE@PAVFCommandTarget@@P81@AEXXZ@Z */
}

void f_1091218c(void) {
  LOAD_REGS();
L_1091218c: /* 1091218c: jmp dword ptr [0x1095a288] */
  SPILL(); f_d814ba(); return; /* Window!??0WWizardPage@@QAE@PBGHPAVWWizardDialog@@@Z */
}

void f_10912192(void) {
  LOAD_REGS();
L_10912192: /* 10912192: jmp dword ptr [0x1095a28c] */
  SPILL(); f_d81492(); return; /* Window!?OnInitDialog@WDialog@@UAEXXZ */
}

void f_10912198(void) {
  LOAD_REGS();
L_10912198: /* 10912198: jmp dword ptr [0x1095a290] */
  SPILL(); f_d812df(); return; /* Window!?EndDialog@WDialog@@QAEXH@Z */
}

void f_1091219e(void) {
  LOAD_REGS();
L_1091219e: /* 1091219e: jmp dword ptr [0x1095a294] */
  SPILL(); f_d819ab(); return; /* Window!??1WCrashBoxDialog@@UAE@XZ */
}

void f_109121a4(void) {
  LOAD_REGS();
L_109121a4: /* 109121a4: jmp dword ptr [0x1095a29c] */
  SPILL(); f_d827e3(); return; /* Window!??0WCrashBoxDialog@@QAE@PBG0@Z */
}

void f_109121aa(void) {
  LOAD_REGS();
L_109121aa: /* 109121aa: jmp dword ptr [0x1095a2a0] */
  SPILL(); f_d81235(); return; /* Window!?GetNext@WWizardPage@@UAEPAV1@XZ */
}

void f_109121b0(void) {
  LOAD_REGS();
L_109121b0: /* 109121b0: jmp dword ptr [0x1095a2a4] */
  SPILL(); f_d81b90(); return; /* Window!??1WCoolButton@@UAE@XZ */
}

void f_109121b6(void) {
  LOAD_REGS();
L_109121b6: /* 109121b6: jmp dword ptr [0x1095a2a8] */
  SPILL(); f_d821f3(); return; /* Window!??0WCoolButton@@QAE@PAVWWindow@@HUFDelegate@@K@Z */
}

void f_109121bc(void) {
  LOAD_REGS();
L_109121bc: /* 109121bc: jmp dword ptr [0x1095a2ac] */
  SPILL(); f_d815dc(); return; /* Window!?GetRoot@WConfigProperties@@UAEPAVFTreeItem@@XZ */
}

void f_109121c2(void) {
  LOAD_REGS();
L_109121c2: /* 109121c2: jmp dword ptr [0x1095a2b0] */
  SPILL(); f_d82338(); return; /* Window!?GetWindowClassName@WConfigProperties@@UAEXPAG@Z */
}

void f_109121c8(void) {
  LOAD_REGS();
L_109121c8: /* 109121c8: jmp dword ptr [0x1095a2b4] */
  SPILL(); f_d81ac3(); return; /* Window!?GetPackageName@WConfigProperties@@UAEPBGXZ */
}

void f_109121ce(void) {
  LOAD_REGS();
L_109121ce: /* 109121ce: jmp dword ptr [0x1095a2b8] */
  SPILL(); f_d8135c(); return; /* Window!?Show@WWindow@@UAEXH@Z */
}

void f_109121d4(void) {
  LOAD_REGS();
L_109121d4: /* 109121d4: jmp dword ptr [0x1095a2bc] */
  SPILL(); f_d81627(); return; /* Window!?ExpandAll@WProperties@@UAEXXZ */
}

void f_109121da(void) {
  LOAD_REGS();
L_109121da: /* 109121da: jmp dword ptr [0x1095a2c0] */
  SPILL(); f_d81744(); return; /* Window!?SetValue@WProperties@@UAEXPBG@Z */
}

void f_109121e0(void) {
  LOAD_REGS();
L_109121e0: /* 109121e0: jmp dword ptr [0x1095a2c4] */
  SPILL(); f_d815d7(); return; /* Window!?BeginSplitterDrag@WProperties@@UAEXXZ */
}

void f_109121e6(void) {
  LOAD_REGS();
L_109121e6: /* 109121e6: jmp dword ptr [0x1095a2c8] */
  SPILL(); f_d82509(); return; /* Window!?ForceRefresh@WProperties@@UAEXXZ */
}

void f_109121ec(void) {
  LOAD_REGS();
L_109121ec: /* 109121ec: jmp dword ptr [0x1095a2cc] */
  SPILL(); f_d817da(); return; /* Window!?SetItemFocus@WProperties@@UAEXH@Z */
}

void f_109121f2(void) {
  LOAD_REGS();
L_109121f2: /* 109121f2: jmp dword ptr [0x1095a2d0] */
  SPILL(); f_d82333(); return; /* Window!?ResizeList@WProperties@@UAEXXZ */
}

void f_109121f8(void) {
  LOAD_REGS();
L_109121f8: /* 109121f8: jmp dword ptr [0x1095a2d4] */
  SPILL(); f_d81091(); return; /* Window!?GetDividerWidth@WProperties@@UAEHXZ */
}

void f_109121fe(void) {
  LOAD_REGS();
L_109121fe: /* 109121fe: jmp dword ptr [0x1095a2d8] */
  SPILL(); f_d8173f(); return; /* Window!?GetRoot@WObjectProperties@@UAEPAVFTreeItem@@XZ */
}

void f_10912204(void) {
  LOAD_REGS();
L_10912204: /* 10912204: jmp dword ptr [0x1095a2dc] */
  SPILL(); f_d82653(); return; /* Window!?OnDestroy@WProperties@@UAEXXZ */
}

void f_1091220a(void) {
  LOAD_REGS();
L_1091220a: /* 1091220a: jmp dword ptr [0x1095a2e0] */
  SPILL(); f_d8161d(); return; /* Window!?OnSetCursor@WProperties@@UAEHXZ */
}

void f_10912210(void) {
  LOAD_REGS();
L_10912210: /* 10912210: jmp dword ptr [0x1095a2e4] */
  SPILL(); f_d820ea(); return; /* Window!?OnFinishSplitterDrag@WProperties@@UAEXPAVWDragInterceptor@@H@Z */
}

void f_10912216(void) {
  LOAD_REGS();
L_10912216: /* 10912216: jmp dword ptr [0x1095a2e8] */
  SPILL(); f_d8280b(); return; /* Window!?OnInitDialog@WWindow@@UAEXXZ */
}

void f_1091221c(void) {
  LOAD_REGS();
L_1091221c: /* 1091221c: jmp dword ptr [0x1095a2ec] */
  SPILL(); f_d81c8a(); return; /* Window!?OnPaint@WProperties@@UAEXXZ */
}

void f_10912222(void) {
  LOAD_REGS();
L_10912222: /* 10912222: jmp dword ptr [0x1095a2f0] */
  SPILL(); f_d82450(); return; /* Window!?OnActivate@WProperties@@UAEXH@Z */
}

void f_10912228(void) {
  LOAD_REGS();
L_10912228: /* 10912228: jmp dword ptr [0x1095a2f4] */
  SPILL(); f_d814a6(); return; /* Window!?OnSize@WProperties@@UAEXKHH@Z */
}

void f_1091222e(void) {
  LOAD_REGS();
L_1091222e: /* 1091222e: jmp dword ptr [0x1095a2f8] */
  SPILL(); f_d81cb2(); return; /* Window!?CallDefaultProc@WWindow@@UAEHIIJ@Z */
}

void f_10912234(void) {
  LOAD_REGS();
L_10912234: /* 10912234: jmp dword ptr [0x1095a2fc] */
  SPILL(); f_d81a1e(); return; /* Window!?GetWindowClassName@WObjectProperties@@UAEXPAG@Z */
}

void f_1091223a(void) {
  LOAD_REGS();
L_1091223a: /* 1091223a: jmp dword ptr [0x1095a300] */
  SPILL(); f_d816db(); return; /* Window!?DoDestroy@WProperties@@UAEXXZ */
}

void f_10912240(void) {
  LOAD_REGS();
L_10912240: /* 10912240: jmp dword ptr [0x1095a304] */
  SPILL(); f_d81e83(); return; /* Window!?GetPackageName@WObjectProperties@@UAEPBGXZ */
}

void f_10912246(void) {
  LOAD_REGS();
L_10912246: /* 10912246: jmp dword ptr [0x1095a308] */
  SPILL(); f_d823fb(); return; /* Window!?Serialize@WProperties@@UAEXAAVFArchive@@@Z */
}

void f_1091224c(void) {
  LOAD_REGS();
L_1091224c: /* 1091224c: jmp dword ptr [0x1095a30c] */
  SPILL(); f_d81555(); return; /* Window!?Show@WObjectProperties@@UAEXH@Z */
}

void f_10912252(void) {
  LOAD_REGS();
L_10912252: /* 10912252: jmp dword ptr [0x1095a310] */
  SPILL(); f_d81a55(); return; /* Window!?SetNotifyHook@WWindow@@QAEXPAVFNotifyHook@@@Z */
}

void f_10912258(void) {
  LOAD_REGS();
L_10912258: /* 10912258: jmp dword ptr [0x1095a314] */
  SPILL(); f_d82851(); return; /* Window!??0WConfigProperties@@QAE@VFName@@PBG@Z */
}

void f_1091225e(void) {
  LOAD_REGS();
L_1091225e: /* 1091225e: jmp dword ptr [0x1095a318] */
  SPILL(); f_d816a4(); return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */
}

void f_10912264(void) {
  LOAD_REGS();
L_10912264: /* 10912264: jmp dword ptr [0x1095a31c] */
  SPILL(); f_d82347(); return; /* Window!??0WObjectProperties@@QAE@VFName@@KPBGPAVWWindow@@H@Z */
}

void f_1091226a(void) {
  LOAD_REGS();
L_1091226a: /* 1091226a: jmp dword ptr [0x1095a320] */
  SPILL(); f_d81a14(); return; /* Window!?ScrollCaret@WEdit@@QAEXXZ */
}

void f_10912270(void) {
  LOAD_REGS();
L_10912270: /* 10912270: jmp dword ptr [0x1095a3b4] */
  SPILL(); f_d81dca(); return; /* Window!??1WObjectProperties@@UAE@XZ */
}

void f_10912276(void) {
  LOAD_REGS();
L_10912276: /* 10912276: jmp dword ptr [0x1095a3b8] */
  SPILL(); f_d81023(); return; /* Window!??1WConfigProperties@@UAE@XZ */
}

void f_1091227c(void) {
  LOAD_REGS();
L_1091227c: /* 1091227c: jmp dword ptr [0x1095a3bc] */
  SPILL(); f_d814c9(); return; /* Window!?SetExec@WTerminal@@QAEXPAVFExec@@@Z */
}

void f_10912282(void) {
  LOAD_REGS();
L_10912282: /* 10912282: jmp dword ptr [0x1095a3c0] */
  SPILL(); f_d820cc(); return; /* Window!?Paste@WTerminal@@UAEXXZ */
}

void f_10912288(void) {
  LOAD_REGS();
L_10912288: /* 10912288: jmp dword ptr [0x1095a3c4] */
  SPILL(); f_d81442(); return; /* Window!?TypeChar@WTerminal@@UAEXG@Z */
}

void f_1091228e(void) {
  LOAD_REGS();
L_1091228e: /* 1091228e: jmp dword ptr [0x1095a3c8] */
  SPILL(); f_d823f1(); return; /* Window!?OnDestroy@WLog@@UAEXXZ */
}

void f_10912294(void) {
  LOAD_REGS();
L_10912294: /* 10912294: jmp dword ptr [0x1095a3cc] */
  SPILL(); f_d8254f(); return; /* Window!?OnClose@WLog@@UAEHXZ */
}

void f_1091229a(void) {
  LOAD_REGS();
L_1091229a: /* 1091229a: jmp dword ptr [0x1095a3d0] */
  SPILL(); f_d81776(); return; /* Window!?OnCreate@WLog@@UAEXXZ */
}

void f_109122a0(void) {
  LOAD_REGS();
L_109122a0: /* 109122a0: jmp dword ptr [0x1095a3d4] */
  SPILL(); f_d81294(); return; /* Window!?OnShowWindow@WLog@@UAEXH@Z */
}

void f_109122a6(void) {
  LOAD_REGS();
L_109122a6: /* 109122a6: jmp dword ptr [0x1095a3d8] */
  SPILL(); f_d82824(); return; /* Window!?OnCommand@WLog@@UAEXH@Z */
}

void f_109122ac(void) {
  LOAD_REGS();
L_109122ac: /* 109122ac: jmp dword ptr [0x1095a3dc] */
  SPILL(); f_d810cd(); return; /* Window!?OnSize@WTerminal@@UAEXKHH@Z */
}

void f_109122b2(void) {
  LOAD_REGS();
L_109122b2: /* 109122b2: jmp dword ptr [0x1095a3e0] */
  SPILL(); f_d812a3(); return; /* Window!?OnSetFocus@WTerminal@@UAEXPAUHWND__@@@Z */
}

void f_109122b8(void) {
  LOAD_REGS();
L_109122b8: /* 109122b8: jmp dword ptr [0x1095a3e4] */
  SPILL(); f_d81415(); return; /* Window!?OnCopyData@WLog@@UAEXPAUHWND__@@PAUtagCOPYDATASTRUCT@@@Z */
}

void f_109122be(void) {
  LOAD_REGS();
L_109122be: /* 109122be: jmp dword ptr [0x1095a3e8] */
  SPILL(); f_d827ed(); return; /* Window!?SetText@WLog@@UAEXPBG@Z */
}

void f_109122c4(void) {
  LOAD_REGS();
L_109122c4: /* 109122c4: jmp dword ptr [0x1095a3ec] */
  SPILL(); f_d81f05(); return; /* Window!?WndProc@WLog@@UAEJIIJ@Z */
}

void f_109122ca(void) {
  LOAD_REGS();
L_109122ca: /* 109122ca: jmp dword ptr [0x1095a3f0] */
  SPILL(); f_d81b6d(); return; /* Window!?GetWindowClassName@WLog@@UAEXPAG@Z */
}

void f_109122d0(void) {
  LOAD_REGS();
L_109122d0: /* 109122d0: jmp dword ptr [0x1095a3f4] */
  SPILL(); f_d81438(); return; /* Window!?GetPackageName@WLog@@UAEPBGXZ */
}

void f_109122d6(void) {
  LOAD_REGS();
L_109122d6: /* 109122d6: jmp dword ptr [0x1095a3f8] */
  SPILL(); f_d81681(); return; /* Window!?OpenWindow@WLog@@QAEXHH@Z */
}

void f_109122dc(void) {
  LOAD_REGS();
L_109122dc: /* 109122dc: jmp dword ptr [0x1095a3fc] */
  SPILL(); f_d814b0(); return; /* Window!??0WLog@@QAE@PBGAAPAVFArchive@@VFName@@PAVWWindow@@@Z */
}

void f_109122e2(void) {
  LOAD_REGS();
L_109122e2: /* 109122e2: jmp dword ptr [0x1095a400] */
  SPILL(); f_d82199(); return; /* Window!?InitWindowing@@YAXXZ */
}

void f_109122e8(void) {
  LOAD_REGS();
L_109122e8: /* 109122e8: jmp dword ptr [0x1095a408] */
  SPILL(); f_d82743(); return; /* Window!??1WLog@@UAE@XZ */
}

void f_109122ee(void) {
  LOAD_REGS();
L_109122ee: /* 109122ee: jmp dword ptr [0x10959d5c] */
  SPILL(); f_4e3f49(); return; /* Core!?appUnwindf@@YAXPBGZZ */
}

void f_109122f4(void) {
  LOAD_REGS();
L_109122f4: /* 109122f4: jmp dword ptr [0x10959d64] */
  SPILL(); f_4e33a5(); return; /* Core!?appFailAssert@@YAXPBD0H@Z */
}

void f_109122fa(void) {
  LOAD_REGS();
L_109122fa: /* 109122fa: jmp dword ptr [0x10959d68] */
  SPILL(); f_4e26df(); return; /* Core!?appStricmp@@YAHPBG0@Z */
}

void f_10912300(void) {
  LOAD_REGS();
L_10912300: /* 10912300: jmp dword ptr [0x10959d6c] */
  SPILL(); f_4e19f1(); return; /* Core!?appStrlen@@YAHPBG@Z */
}

void f_10912306(void) {
  LOAD_REGS();
L_10912306: /* 10912306: jmp dword ptr [0x10959d70] */
  SPILL(); f_4e161d(); return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */
}

void f_1091230c(void) {
  LOAD_REGS();
L_1091230c: /* 1091230c: jmp dword ptr [0x10959d74] */
  SPILL(); f_4e27d9(); return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */
}

void f_10912312(void) {
  LOAD_REGS();
L_10912312: /* 10912312: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_10912318(void) {
  LOAD_REGS();
L_10912318: /* 10912318: jmp dword ptr [0x10959d7c] */
  SPILL(); f_4e2d01(); return; /* Core!??0FString@@QAE@XZ */
}

void f_1091231e(void) {
  LOAD_REGS();
L_1091231e: /* 1091231e: jmp dword ptr [0x10959d80] */
  SPILL(); f_4e1037(); return; /* Core!??DFString@@QBEPBGXZ */
}

void f_10912324(void) {
  LOAD_REGS();
L_10912324: /* 10912324: jmp dword ptr [0x10959d88] */
  SPILL(); f_4e1064(); return; /* Core!?LocalizeGeneral@@YAPBGPBG00@Z */
}

void f_1091232a(void) {
  LOAD_REGS();
L_1091232a: /* 1091232a: jmp dword ptr [0x10959d8c] */
  SPILL(); f_4e267b(); return; /* Core!?winToANSI@@YAPADPADPBGH@Z */
}

void f_10912330(void) {
  LOAD_REGS();
L_10912330: /* 10912330: jmp dword ptr [0x10959d90] */
  SPILL(); f_4e3e36(); return; /* Core!?winGetSizeANSI@@YAHPBG@Z */
}

void f_10912336(void) {
  LOAD_REGS();
L_10912336: /* 10912336: jmp dword ptr [0x10959d94] */
  SPILL(); f_4e28d3(); return; /* Core!?appBaseDir@@YAPBGXZ */
}

void f_1091233c(void) {
  LOAD_REGS();
L_1091233c: /* 1091233c: jmp dword ptr [0x10959d9c] */
  SPILL(); f_4e2149(); return; /* Core!??HFString@@QAE?AV0@PBG@Z */
}

void f_10912342(void) {
  LOAD_REGS();
L_10912342: /* 10912342: jmp dword ptr [0x10959da0] */
  SPILL(); f_4e13de(); return; /* Core!??0FString@@QAE@PBG@Z */
}

void f_10912348(void) {
  LOAD_REGS();
L_10912348: /* 10912348: jmp dword ptr [0x10959cc0] */
  SPILL(); f_4e4214(); return; /* Core!?appPackage@@YAPBGXZ */
}

void f_1091234e(void) {
  LOAD_REGS();
L_1091234e: /* 1091234e: jmp dword ptr [0x10959b3c] */
  SPILL(); f_4e180c(); return; /* Core!??YFString@@QAEAAV0@PBG@Z */
}

void f_10912354(void) {
  LOAD_REGS();
L_10912354: /* 10912354: jmp dword ptr [0x10959b30] */
  SPILL(); f_4e2ca7(); return; /* Core!?NotifyExec@FNotifyHook@@UAEXPAXPBG@Z */
}

void f_1091235a(void) {
  LOAD_REGS();
L_1091235a: /* 1091235a: jmp dword ptr [0x10959b2c] */
  SPILL(); f_4e3abc(); return; /* Core!?NotifyPostChange@FNotifyHook@@UAEXPAX@Z */
}

void f_10912360(void) {
  LOAD_REGS();
L_10912360: /* 10912360: jmp dword ptr [0x10959b28] */
  SPILL(); f_4e1cdf(); return; /* Core!?NotifyPreChange@FNotifyHook@@UAEXPAX@Z */
}

void f_10912366(void) {
  LOAD_REGS();
L_10912366: /* 10912366: jmp dword ptr [0x10959b24] */
  SPILL(); f_4e1280(); return; /* Core!??0FNotifyHook@@QAE@XZ */
}

void f_1091236c(void) {
  LOAD_REGS();
L_1091236c: /* 1091236c: jmp dword ptr [0x10959b20] */
  SPILL(); f_4e2aef(); return; /* Core!??0FExec@@QAE@XZ */
}

void f_10912372(void) {
  LOAD_REGS();
L_10912372: /* 10912372: jmp dword ptr [0x10959b14] */
  SPILL(); f_4e3558(); return; /* Core!?ReallocContiguous@FMalloc@@UAEPAXPAXKKPBG@Z */
}

void f_10912378(void) {
  LOAD_REGS();
L_10912378: /* 10912378: jmp dword ptr [0x10959b10] */
  SPILL(); f_4e3481(); return; /* Core!??0FMalloc@@QAE@XZ */
}

void f_1091237e(void) {
  LOAD_REGS();
L_1091237e: /* 1091237e: jmp dword ptr [0x10959b08] */
  SPILL(); f_4e22ed(); return; /* Core!??0FOutputDevice@@QAE@XZ */
}

void f_10912384(void) {
  LOAD_REGS();
L_10912384: /* 10912384: jmp dword ptr [0x10959da4] */
  SPILL(); f_4e4183(); return; /* Core!?appSprintf@@YAHPAGPBGZZ */
}

void f_1091238a(void) {
  LOAD_REGS();
L_1091238a: /* 1091238a: jmp dword ptr [0x10959d58] */
  SPILL(); f_4e3b52(); return; /* Core!?SafeString@FName@@SAPBGW4EName@@@Z */
}

void f_10912390(void) {
  LOAD_REGS();
L_10912390: /* 10912390: jmp dword ptr [0x10959d54] */
  SPILL(); f_4e30df(); return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */
}

void f_10912396(void) {
  LOAD_REGS();
L_10912396: /* 10912396: jmp dword ptr [0x10959d50] */
  SPILL(); f_4e1ebf(); return; /* Core!?appTimestamp@@YAPBGXZ */
}

void f_1091239c(void) {
  LOAD_REGS();
L_1091239c: /* 1091239c: jmp dword ptr [0x10959d48] */
  SPILL(); f_4e35ad(); return; /* Core!?appStrcat@@YAPAGPAGPBG@Z */
}

void f_109123a2(void) {
  LOAD_REGS();
L_109123a2: /* 109123a2: jmp dword ptr [0x10959d44] */
  SPILL(); f_4e2e73(); return; /* Core!?Parse@@YAHPBG0PAGH@Z */
}

void f_109123a8(void) {
  LOAD_REGS();
L_109123a8: /* 109123a8: jmp dword ptr [0x10959d40] */
  SPILL(); f_4e2987(); return; /* Core!?appCmdLine@@YAPBGXZ */
}

void f_109123ae(void) {
  LOAD_REGS();
L_109123ae: /* 109123ae: jmp dword ptr [0x10959d3c] */
  SPILL(); f_4e3eae(); return; /* Core!?SafeSuppressed@FName@@SAHW4EName@@@Z */
}

void f_109123b4(void) {
  LOAD_REGS();
L_109123b4: /* 109123b4: jmp dword ptr [0x10959d34] */
  SPILL(); f_4e2a72(); return; /* Core!?Flush@FOutputDevice@@UAEXXZ */
}

void f_109123ba(void) {
  LOAD_REGS();
L_109123ba: /* 109123ba: jmp dword ptr [0x10959d30] */
  SPILL(); f_4e146f(); return; /* Core!??0FOutputDeviceError@@QAE@XZ */
}

void f_109123c0(void) {
  LOAD_REGS();
L_109123c0: /* 109123c0: jmp dword ptr [0x10959d2c] */
  SPILL(); f_4e3201(); return; /* Core!?appRequestExit@@YAXH@Z */
}

void f_109123c6(void) {
  LOAD_REGS();
L_109123c6: /* 109123c6: jmp dword ptr [0x10959d28] */
  SPILL(); f_4e2702(); return; /* Core!?LocalizeError@@YAPBGPBDPBG1@Z */
}

void f_109123cc(void) {
  LOAD_REGS();
L_109123cc: /* 109123cc: jmp dword ptr [0x10959d20] */
  SPILL(); f_4e4287(); return; /* Core!?appStrncat@@YAPAGPAGPBGH@Z */
}

void f_109123d2(void) {
  LOAD_REGS();
L_109123d2: /* 109123d2: jmp dword ptr [0x10959d1c] */
  SPILL(); f_4e2be4(); return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */
}

void f_109123d8(void) {
  LOAD_REGS();
L_109123d8: /* 109123d8: jmp dword ptr [0x10959d14] */
  SPILL(); f_4e1460(); return; /* Core!?StaticShutdownAfterError@UObject@@SAXXZ */
}

void f_109123de(void) {
  LOAD_REGS();
L_109123de: /* 109123de: jmp dword ptr [0x10959d10] */
  SPILL(); f_4e3ada(); return; /* Core!?appGetSystemErrorMessage@@YAPBGH@Z */
}

void f_109123e4(void) {
  LOAD_REGS();
L_109123e4: /* 109123e4: jmp dword ptr [0x10959d08] */
  SPILL(); f_4e1613(); return; /* Core!?LocalizeError@@YAPBGPBG00@Z */
}

void f_109123ea(void) {
  LOAD_REGS();
L_109123ea: /* 109123ea: jmp dword ptr [0x10959cf4] */
  SPILL(); f_4e3076(); return; /* Core!??0FFeedbackContext@@QAE@XZ */
}

void f_109123f0(void) {
  LOAD_REGS();
L_109123f0: /* 109123f0: jmp dword ptr [0x10959cf0] */
  SPILL(); f_4e3693(); return; /* Core!?appGetVarArgs@@YAHPAGHAAPBG@Z */
}

void f_109123f6(void) {
  LOAD_REGS();
L_109123f6: /* 109123f6: jmp dword ptr [0x10959ce4] */
  SPILL(); f_4e28f6(); return; /* Core!?CalcHomeDir@FFileManager@@UAEPBGXZ */
}

void f_109123fc(void) {
  LOAD_REGS();
L_109123fc: /* 109123fc: jmp dword ptr [0x10959ce0] */
  SPILL(); f_4e3aa3(); return; /* Core!?Init@FFileManager@@UAEXH@Z */
}

void f_10912402(void) {
  LOAD_REGS();
L_10912402: /* 10912402: jmp dword ptr [0x10959cdc] */
  SPILL(); f_4e2275(); return; /* Core!??0FFileManager@@QAE@XZ */
}

void f_10912408(void) {
  LOAD_REGS();
L_10912408: /* 10912408: jmp dword ptr [0x10959cd8] */
  SPILL(); f_4e2955(); return; /* Core!?Add@FArray@@QAEHHH@Z */
}

void f_1091240e(void) {
  LOAD_REGS();
L_1091240e: /* 1091240e: jmp dword ptr [0x10959cd4] */
  SPILL(); f_4e2d5b(); return; /* Core!??0FArray@@QAE@XZ */
}

void f_10912414(void) {
  LOAD_REGS();
L_10912414: /* 10912414: jmp dword ptr [0x10959cd0] */
  SPILL(); f_4e157d(); return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */
}

void f_1091241a(void) {
  LOAD_REGS();
L_1091241a: /* 1091241a: jmp dword ptr [0x10959ccc] */
  SPILL(); f_4e335a(); return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */
}

void f_10912420(void) {
  LOAD_REGS();
L_10912420: /* 10912420: jmp dword ptr [0x10959cc4] */
  SPILL(); f_4e280b(); return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */
}

void f_10912426(void) {
  LOAD_REGS();
L_10912426: /* 10912426: jmp dword ptr [0x10959b00] */
  SPILL(); f_4e20e5(); return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */
}

void f_1091242c(void) {
  LOAD_REGS();
L_1091242c: /* 1091242c: jmp dword ptr [0x10959cbc] */
  SPILL(); f_4e2d4c(); return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */
}

void f_10912432(void) {
  LOAD_REGS();
L_10912432: /* 10912432: jmp dword ptr [0x10959cb4] */
  SPILL(); f_4e3387(); return; /* Core!?ParseParam@@YAHPBG0@Z */
}

void f_10912438(void) {
  LOAD_REGS();
L_10912438: /* 10912438: jmp dword ptr [0x10959cb0] */
  SPILL(); f_4e3e5e(); return; /* Core!??4FString@@QAEAAV0@PBG@Z */
}

void f_1091243e(void) {
  LOAD_REGS();
L_1091243e: /* 1091243e: jmp dword ptr [0x10959cac] */
  SPILL(); f_4e2b3a(); return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */
}

void f_10912444(void) {
  LOAD_REGS();
L_10912444: /* 10912444: jmp dword ptr [0x10959ca8] */
  SPILL(); f_4e44a3(); return; /* Core!?IsError@FArchive@@QAEHXZ */
}

void f_1091244a(void) {
  LOAD_REGS();
L_1091244a: /* 1091244a: jmp dword ptr [0x10959ca4] */
  SPILL(); f_4e1d20(); return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */
}

void f_10912450(void) {
  LOAD_REGS();
L_10912450: /* 10912450: jmp dword ptr [0x10959ca0] */
  SPILL(); f_4e1abe(); return; /* Core!?appStrchr@@YAPAGPBGH@Z */
}

void f_10912456(void) {
  LOAD_REGS();
L_10912456: /* 10912456: jmp dword ptr [0x10959c9c] */
  SPILL(); f_4e3f4e(); return; /* Core!?GetError@FArchive@@UAEHXZ */
}

void f_1091245c(void) {
  LOAD_REGS();
L_1091245c: /* 1091245c: jmp dword ptr [0x10959c98] */
  SPILL(); f_4e23e7(); return; /* Core!?Flush@FArchive@@UAEXXZ */
}

void f_10912462(void) {
  LOAD_REGS();
L_10912462: /* 10912462: jmp dword ptr [0x10959c94] */
  SPILL(); f_4e25db(); return; /* Core!?DetachLazyLoader@FArchive@@UAEXPAVFLazyLoader@@@Z */
}

void f_10912468(void) {
  LOAD_REGS();
L_10912468: /* 10912468: jmp dword ptr [0x10959c90] */
  SPILL(); f_4e41d3(); return; /* Core!?AttachLazyLoader@FArchive@@UAEXPAVFLazyLoader@@@Z */
}

void f_1091246e(void) {
  LOAD_REGS();
L_1091246e: /* 1091246e: jmp dword ptr [0x10959c8c] */
  SPILL(); f_4e2f04(); return; /* Core!?SetStopper@FArchive@@UAEXH@Z */
}

void f_10912474(void) {
  LOAD_REGS();
L_10912474: /* 10912474: jmp dword ptr [0x10959c88] */
  SPILL(); f_4e2289(); return; /* Core!?AtStopper@FArchive@@UAEHXZ */
}

void f_1091247a(void) {
  LOAD_REGS();
L_1091247a: /* 1091247a: jmp dword ptr [0x10959c84] */
  SPILL(); f_4e1ab4(); return; /* Core!?AtEnd@FArchive@@UAEHXZ */
}

void f_10912480(void) {
  LOAD_REGS();
L_10912480: /* 10912480: jmp dword ptr [0x10959c80] */
  SPILL(); f_4e33b9(); return; /* Core!?MapObject@FArchive@@UAEHPAVUObject@@@Z */
}

void f_10912486(void) {
  LOAD_REGS();
L_10912486: /* 10912486: jmp dword ptr [0x10959c7c] */
  SPILL(); f_4e13b1(); return; /* Core!?MapName@FArchive@@UAEHPAVFName@@@Z */
}

void f_1091248c(void) {
  LOAD_REGS();
L_1091248c: /* 1091248c: jmp dword ptr [0x10959c78] */
  SPILL(); f_4e4539(); return; /* Core!??6FArchive@@UAEAAV0@AAVFName@@@Z */
}

void f_10912492(void) {
  LOAD_REGS();
L_10912492: /* 10912492: jmp dword ptr [0x10959c74] */
  SPILL(); f_4e34b3(); return; /* Core!??6FArchive@@UAEAAV0@AAPAVUObject@@@Z */
}

void f_10912498(void) {
  LOAD_REGS();
L_10912498: /* 10912498: jmp dword ptr [0x10959c70] */
  SPILL(); f_4e10f0(); return; /* Core!?CountBytes@FArchive@@UAEXKK@Z */
}

void f_1091249e(void) {
  LOAD_REGS();
L_1091249e: /* 1091249e: jmp dword ptr [0x10959c6c] */
  SPILL(); f_4e1118(); return; /* Core!?Preload@FArchive@@UAEXPAVUObject@@@Z */
}

void f_109124a4(void) {
  LOAD_REGS();
L_109124a4: /* 109124a4: jmp dword ptr [0x10959c68] */
  SPILL(); f_4e1f64(); return; /* Core!?SerializeInt@FArchive@@UAEXAAKK@Z */
}

void f_109124aa(void) {
  LOAD_REGS();
L_109124aa: /* 109124aa: jmp dword ptr [0x10959c64] */
  SPILL(); f_4e409d(); return; /* Core!?SerializeBits@FArchive@@UAEXPAXH@Z */
}

void f_109124b0(void) {
  LOAD_REGS();
L_109124b0: /* 109124b0: jmp dword ptr [0x10959c60] */
  SPILL(); f_4e4552(); return; /* Core!??1FArchive@@UAE@XZ */
}

void f_109124b6(void) {
  LOAD_REGS();
L_109124b6: /* 109124b6: jmp dword ptr [0x10959c5c] */
  SPILL(); f_4e2306(); return; /* Core!??0FArchive@@QAE@XZ */
}

void f_109124bc(void) {
  LOAD_REGS();
L_109124bc: /* 109124bc: jmp dword ptr [0x10959c58] */
  SPILL(); f_4e1e33(); return; /* Core!?Precache@FArchive@@UAEXH@Z */
}

void f_109124c2(void) {
  LOAD_REGS();
L_109124c2: /* 109124c2: jmp dword ptr [0x10959c54] */
  SPILL(); f_4e1cc6(); return; /* Core!?TotalSize@FArchive@@UAEHXZ */
}

void f_109124c8(void) {
  LOAD_REGS();
L_109124c8: /* 109124c8: jmp dword ptr [0x10959c4c] */
  SPILL(); f_4e438b(); return; /* Core!?Remove@FArray@@QAEXHHH@Z */
}

void f_109124ce(void) {
  LOAD_REGS();
L_109124ce: /* 109124ce: jmp dword ptr [0x10959c48] */
  SPILL(); f_4e303f(); return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */
}

void f_109124d4(void) {
  LOAD_REGS();
L_109124d4: /* 109124d4: jmp dword ptr [0x10959c44] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_109124da(void) {
  LOAD_REGS();
L_109124da: /* 109124da: jmp dword ptr [0x10959c40] */
  SPILL(); f_4e3242(); return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */
}

void f_109124e0(void) {
  LOAD_REGS();
L_109124e0: /* 109124e0: jmp dword ptr [0x10959c3c] */
  SPILL(); f_4e12c6(); return; /* Core!??DFName@@QBEPBGXZ */
}

void f_109124e6(void) {
  LOAD_REGS();
L_109124e6: /* 109124e6: jmp dword ptr [0x10959c38] */
  SPILL(); f_4e2351(); return; /* Core!?GetName@UObject@@QBEPBGXZ */
}

void f_109124ec(void) {
  LOAD_REGS();
L_109124ec: /* 109124ec: jmp dword ptr [0x10959c34] */
  SPILL(); f_4e3f67(); return; /* Core!?Parse@@YAHPBG0AAVFName@@@Z */
}

void f_109124f2(void) {
  LOAD_REGS();
L_109124f2: /* 109124f2: jmp dword ptr [0x10959c30] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_109124f8(void) {
  LOAD_REGS();
L_109124f8: /* 109124f8: jmp dword ptr [0x10959c2c] */
  SPILL(); f_4e31cf(); return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */
}

void f_109124fe(void) {
  LOAD_REGS();
L_109124fe: /* 109124fe: jmp dword ptr [0x10959c28] */
  SPILL(); f_4e15eb(); return; /* Core!?appClipboardCopy@@YAXPBG@Z */
}

void f_10912504(void) {
  LOAD_REGS();
L_10912504: /* 10912504: jmp dword ptr [0x10959c24] */
  SPILL(); f_4e4499(); return; /* Core!?ExportToOutputDevice@UExporter@@SAXPAVUObject@@PAV1@AAVFOutputDevice@@PBGH@Z */
}

void f_1091250a(void) {
  LOAD_REGS();
L_1091250a: /* 1091250a: jmp dword ptr [0x10959c20] */
  SPILL(); f_4e302b(); return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */
}

void f_10912510(void) {
  LOAD_REGS();
L_10912510: /* 10912510: jmp dword ptr [0x10959c1c] */
  SPILL(); f_4e36a7(); return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */
}

void f_10912516(void) {
  LOAD_REGS();
L_10912516: /* 10912516: jmp dword ptr [0x10959c18] */
  SPILL(); f_4e255e(); return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */
}

void f_1091251c(void) {
  LOAD_REGS();
L_1091251c: /* 1091251c: jmp dword ptr [0x10959c14] */
  SPILL(); f_4e194c(); return; /* Core!?ParseObject@@YAHPBG0PAVUClass@@AAPAVUObject@@PAV2@@Z */
}

void f_10912522(void) {
  LOAD_REGS();
L_10912522: /* 10912522: jmp dword ptr [0x10959c10] */
  SPILL(); f_4e1415(); return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */
}

void f_10912528(void) {
  LOAD_REGS();
L_10912528: /* 10912528: jmp dword ptr [0x10959c0c] */
  SPILL(); f_4e32ec(); return; /* Core!?ParseCommand@@YAHPAPBGPBG@Z */
}

void f_1091252e(void) {
  LOAD_REGS();
L_1091252e: /* 1091252e: jmp dword ptr [0x10959c08] */
  SPILL(); f_4e3cd3(); return; /* Core!?appSqrt@@YANN@Z */
}

void f_10912534(void) {
  LOAD_REGS();
L_10912534: /* 10912534: jmp dword ptr [0x10959c04] */
  SPILL(); f_4e2b76(); return; /* Core!?appStrfind@@YAPBGPBG0@Z */
}

void f_1091253a(void) {
  LOAD_REGS();
L_1091253a: /* 1091253a: jmp dword ptr [0x10959c00] */
  SPILL(); f_4e2ee1(); return; /* Core!??0FName@@QAE@W4EName@@@Z */
}

void f_10912540(void) {
  LOAD_REGS();
L_10912540: /* 10912540: jmp dword ptr [0x10959bfc] */
  SPILL(); f_4e1a5a(); return; /* Core!?Parse@@YAHPBG0AAVFString@@@Z */
}

void f_10912546(void) {
  LOAD_REGS();
L_10912546: /* 10912546: jmp dword ptr [0x10959bf8] */
  SPILL(); f_4e17e4(); return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */
}

void f_1091254c(void) {
  LOAD_REGS();
L_1091254c: /* 1091254c: jmp dword ptr [0x10959bf4] */
  SPILL(); f_4e3fe9(); return; /* Core!?appAtoi@@YAHPBG@Z */
}

void f_10912552(void) {
  LOAD_REGS();
L_10912552: /* 10912552: jmp dword ptr [0x10959bec] */
  SPILL(); f_4e2ee6(); return; /* Core!?appMsgf@@YA?BHHPBGZZ */
}

void f_10912558(void) {
  LOAD_REGS();
L_10912558: /* 10912558: jmp dword ptr [0x10959be8] */
  SPILL(); f_4e144c(); return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */
}

void f_1091255e(void) {
  LOAD_REGS();
L_1091255e: /* 1091255e: jmp dword ptr [0x10959be4] */
  SPILL(); f_4e1b2c(); return; /* Core!?appRandInit@@YAXH@Z */
}

void f_10912564(void) {
  LOAD_REGS();
L_10912564: /* 10912564: jmp dword ptr [0x10959bdc] */
  SPILL(); f_4e43fe(); return; /* Core!?Parse@@YAHPBG0AAH@Z */
}

void f_1091256a(void) {
  LOAD_REGS();
L_1091256a: /* 1091256a: jmp dword ptr [0x10959bd4] */
  SPILL(); f_4e3e22(); return; /* Core!?appSleep@@YAXM@Z */
}

void f_10912570(void) {
  LOAD_REGS();
L_10912570: /* 10912570: jmp dword ptr [0x10959bcc] */
  SPILL(); f_4e3c24(); return; /* Core!?appLoadFileToString@@YAHAAVFString@@PBGPAVFFileManager@@@Z */
}

void f_10912576(void) {
  LOAD_REGS();
L_10912576: /* 10912576: jmp dword ptr [0x10959bc8] */
  SPILL(); f_4e1d39(); return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */
}

void f_1091257c(void) {
  LOAD_REGS();
L_1091257c: /* 1091257c: jmp dword ptr [0x10959bc4] */
  SPILL(); f_4e3d0f(); return; /* Core!?appRand@@YAHXZ */
}

void f_10912582(void) {
  LOAD_REGS();
L_10912582: /* 10912582: jmp dword ptr [0x10959bc0] */
  SPILL(); f_4e44a8(); return; /* Core!?Parse@@YAHPBG0AAM@Z */
}

void f_10912588(void) {
  LOAD_REGS();
L_10912588: /* 10912588: jmp dword ptr [0x10959bbc] */
  SPILL(); f_4e3792(); return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */
}

void f_1091258e(void) {
  LOAD_REGS();
L_1091258e: /* 1091258e: jmp dword ptr [0x10959bb8] */
  SPILL(); f_4e3fc1(); return; /* Core!??0FString@@QAE@ABV0@@Z */
}

void f_10912594(void) {
  LOAD_REGS();
L_10912594: /* 10912594: jmp dword ptr [0x10959ba4] */
  SPILL(); f_4e3e31(); return; /* Core!?appSystemTime@@YAXAAH0000000@Z */
}

void f_1091259a(void) {
  LOAD_REGS();
L_1091259a: /* 1091259a: jmp dword ptr [0x10959ba0] */
  SPILL(); f_4e4052(); return; /* Core!?LeftChop@FString@@QBE?AV1@H@Z */
}

void f_109125a0(void) {
  LOAD_REGS();
L_109125a0: /* 109125a0: jmp dword ptr [0x10959b9c] */
  SPILL(); f_4e2cde(); return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */
}

void f_109125a6(void) {
  LOAD_REGS();
L_109125a6: /* 109125a6: jmp dword ptr [0x10959b98] */
  SPILL(); f_4e3594(); return; /* Core!??DFString@@QBE?AV0@ABV0@@Z */
}

void f_109125ac(void) {
  LOAD_REGS();
L_109125ac: /* 109125ac: jmp dword ptr [0x10959b94] */
  SPILL(); f_4e2c48(); return; /* Core!??DFString@@QBE?AV0@PBG@Z */
}

void f_109125b2(void) {
  LOAD_REGS();
L_109125b2: /* 109125b2: jmp dword ptr [0x10959b90] */
  SPILL(); f_4e2d79(); return; /* Core!?Empty@FArray@@QAEXHH@Z */
}

void f_109125b8(void) {
  LOAD_REGS();
L_109125b8: /* 109125b8: jmp dword ptr [0x10959b8c] */
  SPILL(); f_4e2a27(); return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */
}

void f_109125be(void) {
  LOAD_REGS();
L_109125be: /* 109125be: jmp dword ptr [0x10959b88] */
  SPILL(); f_4e3c9c(); return; /* Core!?winGetSizeUNICODE@@YAHPBD@Z */
}

void f_109125c4(void) {
  LOAD_REGS();
L_109125c4: /* 109125c4: jmp dword ptr [0x10959b84] */
  SPILL(); f_4e3869(); return; /* Core!??0FArray@@IAE@HH@Z */
}

void f_109125ca(void) {
  LOAD_REGS();
L_109125ca: /* 109125ca: jmp dword ptr [0x10959b80] */
  SPILL(); f_4e292d(); return; /* Core!?appStaticString1024@@YAPAGXZ */
}

void f_109125d0(void) {
  LOAD_REGS();
L_109125d0: /* 109125d0: jmp dword ptr [0x10959b7c] */
  SPILL(); f_4e3d69(); return; /* Core!?appAtof@@YAMPBG@Z */
}

void f_109125d6(void) {
  LOAD_REGS();
L_109125d6: /* 109125d6: jmp dword ptr [0x10959b78] */
  SPILL(); f_4e35da(); return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */
}

void f_109125dc(void) {
  LOAD_REGS();
L_109125dc: /* 109125dc: jmp dword ptr [0x10959b74] */
  SPILL(); f_4e414c(); return; /* Core!??8FString@@QBEHPBG@Z */
}

void f_109125e2(void) {
  LOAD_REGS();
L_109125e2: /* 109125e2: jmp dword ptr [0x10959b70] */
  SPILL(); f_4e3b43(); return; /* Core!??8FString@@QBEHABV0@@Z */
}

void f_109125e8(void) {
  LOAD_REGS();
L_109125e8: /* 109125e8: jmp dword ptr [0x10959b6c] */
  SPILL(); f_4e2220(); return; /* Core!?appStrstr@@YAPAGPBG0@Z */
}

void f_109125ee(void) {
  LOAD_REGS();
L_109125ee: /* 109125ee: jmp dword ptr [0x10959b68] */
  SPILL(); f_4e4192(); return; /* Core!?appStrcmp@@YAHPBG0@Z */
}

void f_109125f4(void) {
  LOAD_REGS();
L_109125f4: /* 109125f4: jmp dword ptr [0x10959b64] */
  SPILL(); f_4e4282(); return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */
}

void f_109125fa(void) {
  LOAD_REGS();
L_109125fa: /* 109125fa: jmp dword ptr [0x10959b5c] */
  SPILL(); f_4e2af9(); return; /* Core!?Log@FOutputDevice@@QAEXW4EName@@PBG@Z */
}

void f_10912600(void) {
  LOAD_REGS();
L_10912600: /* 10912600: jmp dword ptr [0x10959b58] */
  SPILL(); f_4e1e47(); return; /* Core!?appExit@@YAXXZ */
}

void f_10912606(void) {
  LOAD_REGS();
L_10912606: /* 10912606: jmp dword ptr [0x10959b54] */
  SPILL(); f_4e2969(); return; /* Core!?appPreExit@@YAXXZ */
}

void f_1091260c(void) {
  LOAD_REGS();
L_1091260c: /* 1091260c: jmp dword ptr [0x10959b44] */
  SPILL(); f_4e3ddc(); return; /* Core!?GetLanguage@UObject@@SAPBGXZ */
}

void f_10912612(void) {
  LOAD_REGS();
L_10912612: /* 10912612: jmp dword ptr [0x10959b40] */
  SPILL(); f_4e364d(); return; /* Core!?appInit@@YAXPBG0PAVFMalloc@@PAVFOutputDevice@@PAVFOutputDeviceError@@PAVFFeedbackContext@@PAVFFileManager@@P6APAVFConfigCache@@XZH@Z */
}

void f_10912618(void) {
  LOAD_REGS();
L_10912618: /* 10912618: jmp dword ptr [0x10959ea8] */
  SPILL(); f_6cbb86(); return; /* Engine!?StaticClass@URenderDevice@@SAPAVUClass@@XZ */
}

void f_1091261e(void) {
  LOAD_REGS();
L_1091261e: /* 1091261e: jmp dword ptr [0x10959e98] */
  SPILL(); f_6cb49c(); return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */
}

void f_10912624(void) {
  LOAD_REGS();
L_10912624: /* 10912624: jmp dword ptr [0x10959e8c] */
  SPILL(); f_6c8094(); return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */
}

void f_1091262a(void) {
  LOAD_REGS();
L_1091262a: /* 1091262a: jmp dword ptr [0x10959e90] */
  SPILL(); f_6c62fd(); return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */
}

void f_10912630(void) {
  LOAD_REGS();
L_10912630: /* 10912630: jmp dword ptr [0x10959e94] */
  SPILL(); f_6c2efa(); return; /* Engine!?StaticClass@UGameEngine@@SAPAVUClass@@XZ */
}

void f_10912636(void) {
  LOAD_REGS();
L_10912636: /* 10912636: jmp dword ptr [0x10959eac] */
  SPILL(); f_6c7c3e(); return; /* Engine!?UpdateString@FStats@@QAEXAAVFString@@H@Z */
}

void f_1091263c(void) {
  LOAD_REGS();
L_1091263c: /* 1091263c: jmp dword ptr [0x10959ea0] */
  SPILL(); f_6c7b0d(); return; /* Engine!?Clear@FStats@@QAEXXZ */
}

void f_10912650(void) {
  LOAD_REGS();
L_10912650: /* 10912650: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10912653: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10912657: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 1091265b: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 1091265f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10912660: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 10912664: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 10912666: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 1091266a: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 1091266e: push 0x1092f4e4 */
  { uint32_t v = 0x1092f4e4u; esp -= 4; W32(esp, v); }
/* 10912673: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 10912677: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 1091267b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1091267d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091267e: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 10912682: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10912683: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 10912687: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 1091268f: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 10912697: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 1091269f: call 0x109140c0 */
  esp -= 4; W32(esp, 0x109126a4u); SPILL(); f_109140c0(); if (g_unwind) return; RELOAD();
/* 109126a4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109126a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109126a9: jne 0x109126f4 */
  if (!zf) goto L_109126f4;
L_109126ab: /* 109126ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109126ac: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 109126b0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 109126b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109126b3: call 0x10912950 */
  esp -= 4; W32(esp, 0x109126b8u); SPILL(); f_10912950(); if (g_unwind) return; RELOAD();
/* 109126b8: mov esi, eax */
  esi = eax;
/* 109126ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109126bd: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109126c0: je 0x109126e0 */
  if (zf) goto L_109126e0;
L_109126c2: /* 109126c2: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 109126c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109126c7: call 0x10912bd0 */
  esp -= 4; W32(esp, 0x109126ccu); SPILL(); f_10912bd0(); if (g_unwind) return; RELOAD();
/* 109126cc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109126cf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109126d1: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 109126d6: je 0x109126f3 */
  if (zf) goto L_109126f3;
L_109126d8: /* 109126d8: mov eax, esi */
  eax = esi;
/* 109126da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109126db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109126dc: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109126df: ret  */
  esp += 4; SPILL(); return;
L_109126e0: /* 109126e0: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 109126e4: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 109126e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109126e9: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 109126eb: call 0x10912bd0 */
  esp -= 4; W32(esp, 0x109126f0u); SPILL(); f_10912bd0(); if (g_unwind) return; RELOAD();
/* 109126f0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_109126f3: /* 109126f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_109126f4: /* 109126f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109126f5: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109126f8: ret  */
  esp += 4; SPILL(); return;
}

void f_10912700(void) {
  LOAD_REGS();
L_10912700: /* 10912700: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10912704: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 10912708: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 1091270c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1091270e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091270f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 10912713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10912714: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10912715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10912716: call 0x10912650 */
  esp -= 4; W32(esp, 0x1091271bu); SPILL(); f_10912650(); if (g_unwind) return; RELOAD();
/* 1091271b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091271e: ret  */
  esp += 4; SPILL(); return;
}

void f_10912720(void) {
  LOAD_REGS();
L_10912720: /* 10912720: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10912723: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10912727: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 1091272b: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 1091272f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10912730: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 10912734: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 10912736: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 1091273a: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 1091273e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 10912740: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 10912744: push 0x1092f4ec */
  { uint32_t v = 0x1092f4ecu; esp -= 4; W32(esp, v); }
/* 10912749: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091274a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1091274e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10912752: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 1091275a: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 10912762: call 0x10914290 */
  esp -= 4; W32(esp, 0x10912767u); SPILL(); f_10914290(); if (g_unwind) return; RELOAD();
/* 10912767: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091276a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091276c: jne 0x109127b7 */
  if (!zf) goto L_109127b7;
L_1091276e: /* 1091276e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091276f: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 10912773: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 10912775: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10912776: call 0x109142b0 */
  esp -= 4; W32(esp, 0x1091277bu); SPILL(); f_109142b0(); if (g_unwind) return; RELOAD();
/* 1091277b: mov esi, eax */
  esi = eax;
/* 1091277d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10912780: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912783: je 0x109127a3 */
  if (zf) goto L_109127a3;
L_10912785: /* 10912785: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 10912789: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091278a: call 0x10914140 */
  esp -= 4; W32(esp, 0x1091278fu); SPILL(); f_10914140(); if (g_unwind) return; RELOAD();
/* 1091278f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10912792: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912794: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10912799: je 0x109127b6 */
  if (zf) goto L_109127b6;
L_1091279b: /* 1091279b: mov eax, esi */
  eax = esi;
/* 1091279d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091279e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091279f: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109127a2: ret  */
  esp += 4; SPILL(); return;
L_109127a3: /* 109127a3: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 109127a7: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 109127ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109127ac: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 109127ae: call 0x10914140 */
  esp -= 4; W32(esp, 0x109127b3u); SPILL(); f_10914140(); if (g_unwind) return; RELOAD();
/* 109127b3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_109127b6: /* 109127b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_109127b7: /* 109127b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109127b8: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109127bb: ret  */
  esp += 4; SPILL(); return;
}

void f_109127c0(void) {
  LOAD_REGS();
L_109127c0: /* 109127c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 109127c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109127c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109127c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109127c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109127c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109127ca: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 109127ce: mov ebp, edi */
  ebp = edi;
/* 109127d0: je 0x109128a4 */
  if (zf) goto L_109128a4;
L_109127d6: /* 109127d6: mov ebx, dword ptr [eax + 0x1c] */
  ebx = R32((uint32_t)(eax + 0x1cu));
/* 109127d9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109127db: je 0x109128a4 */
  if (zf) goto L_109128a4;
L_109127e1: /* 109127e1: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 109127e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109127e7: je 0x109128a4 */
  if (zf) goto L_109128a4;
L_109127ed: /* 109127ed: cmp dword ptr [ebx + 4], 0x2a */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109127f1: jne 0x109128a4 */
  if (!zf) goto L_109128a4;
L_109127f7: /* 109127f7: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 109127fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109127fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109127fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109127fd: call 0x10914840 */
  esp -= 4; W32(esp, 0x10912802u); SPILL(); f_10914840(); if (g_unwind) return; RELOAD();
/* 10912802: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10912806: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10912809: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091280c: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 1091280f: jb 0x1091289d */
  if (cf) goto L_1091289d;
L_10912815: /* 10912815: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 10912818: add eax, 0xfffffefa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffefau);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091281d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091281f: jbe 0x10912827 */
  if ((cf | zf)) goto L_10912827;
L_10912821: /* 10912821: mov ebp, eax */
  ebp = eax;
/* 10912823: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10912825: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_10912827: /* 10912827: mov edi, dword ptr [ebx + 0x30] */
  edi = R32((uint32_t)(ebx + 0x30u));
/* 1091282a: mov ecx, ebp */
  ecx = ebp;
/* 1091282c: mov edx, ecx */
  edx = ecx;
/* 1091282e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10912831: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 10912833: mov ecx, edx */
  ecx = edx;
/* 10912835: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 10912838: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 1091283a: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 1091283d: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 10912840: mov dword ptr [ebx + 0x64], ebp */
  W32((uint32_t)(ebx + 0x64u), ebp);
/* 10912843: mov dword ptr [ebx + 0x54], ebp */
  W32((uint32_t)(ebx + 0x54u), ebp);
/* 10912846: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 10912849: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 1091284c: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1091284e: movzx ecx, byte ptr [edx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 10912852: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 10912854: and eax, dword ptr [ebx + 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4cu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10912857: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 1091285a: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 1091285c: lea esi, [ebp - 3] */
  esi = (uint32_t)(ebp + 0xfffffffdu);
/* 1091285f: nop  */
L_10912860: /* 10912860: mov edi, dword ptr [ebx + 0x40] */
  edi = R32((uint32_t)(ebx + 0x40u));
/* 10912863: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 10912866: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 10912869: movzx eax, byte ptr [eax + edx + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx + 0x2u)));
/* 1091286e: mov ebp, dword ptr [ebx + 0x38] */
  ebp = R32((uint32_t)(ebx + 0x38u));
/* 10912871: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10912873: mov ecx, dword ptr [ebx + 0x4c] */
  ecx = R32((uint32_t)(ebx + 0x4cu));
/* 10912876: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 10912878: mov edi, dword ptr [ebx + 0x2c] */
  edi = R32((uint32_t)(ebx + 0x2cu));
/* 1091287b: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091287d: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 10912880: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 10912883: mov ax, word ptr [ecx + eax*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax*2))) & 0xffffu);
/* 10912887: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 10912889: mov word ptr [ebp + edi*2], ax */
  W16((uint32_t)(ebp + edi*2), (eax & 0xffffu));
/* 1091288e: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 10912891: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 10912894: mov word ptr [eax + ecx*2], dx */
  W16((uint32_t)(eax + ecx*2), (edx & 0xffffu));
/* 10912898: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912899: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091289b: jbe 0x10912860 */
  if ((cf | zf)) goto L_10912860;
L_1091289d: /* 1091289d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091289e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091289f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109128a0: xor eax, eax */
  eax = 0;
/* 109128a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109128a3: ret  */
  esp += 4; SPILL(); return;
L_109128a4: /* 109128a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109128a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109128a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109128a7: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 109128ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109128ad: ret  */
  esp += 4; SPILL(); return;
}

void f_109128b0(void) {
  LOAD_REGS();
L_109128b0: /* 109128b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109128b1: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 109128b4: mov edx, ecx */
  edx = ecx;
/* 109128b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109128b7: mov edi, dword ptr [eax + 0x14] */
  edi = R32((uint32_t)(eax + 0x14u));
/* 109128ba: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 109128bd: mov byte ptr [esi + edi], dl */
  W8((uint32_t)(esi + edi), (edx & 0xffu));
/* 109128c0: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109128c3: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 109128c6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109128c7: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109128ca: mov byte ptr [edx + esi], cl */
  W8((uint32_t)(edx + esi), (ecx & 0xffu));
/* 109128cd: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109128d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109128d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109128d2: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109128d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109128d6: ret  */
  esp += 4; SPILL(); return;
}

void f_109128e0(void) {
  LOAD_REGS();
L_109128e0: /* 109128e0: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 109128e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109128e4: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 109128e7: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 109128ea: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109128ec: jbe 0x109128f0 */
  if ((cf | zf)) goto L_109128f0;
L_109128ee: /* 109128ee: mov edx, ecx */
  edx = ecx;
L_109128f0: /* 109128f0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109128f2: je 0x10912942 */
  if (zf) goto L_10912942;
L_109128f4: /* 109128f4: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 109128f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109128f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109128f9: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 109128fc: mov ecx, edx */
  ecx = edx;
/* 109128fe: mov ebx, ecx */
  ebx = ecx;
/* 10912900: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10912903: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 10912905: mov ecx, ebx */
  ecx = ebx;
/* 10912907: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1091290a: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 1091290c: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 1091290f: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 10912912: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10912914: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 10912917: add dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 1091291a: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 1091291d: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* 10912920: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 10912923: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10912925: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 10912928: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1091292a: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 1091292d: sub dword ptr [ecx + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x14u), r);
  }
/* 10912930: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 10912933: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10912936: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912938: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912939: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091293a: jne 0x10912942 */
  if (!zf) goto L_10912942;
L_1091293c: /* 1091293c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1091293f: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_10912942: /* 10912942: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912943: ret  */
  esp += 4; SPILL(); return;
}

void f_10912950(void) {
  LOAD_REGS();
L_10912950: /* 10912950: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10912951: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 10912955: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912957: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10912958: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10912959: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091295a: je 0x10912bbe */
  if (zf) goto L_10912bbe;
L_10912960: /* 10912960: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* 10912963: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912965: je 0x10912bbe */
  if (zf) goto L_10912bbe;
L_1091296b: /* 1091296b: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1091296f: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10912972: jg 0x10912bbe */
  if ((!zf && sf == of)) goto L_10912bbe;
L_10912978: /* 10912978: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1091297a: jl 0x10912bbe */
  if ((sf != of)) goto L_10912bbe;
L_10912980: /* 10912980: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 10912983: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912985: je 0x10912bb6 */
  if (zf) goto L_10912bb6;
L_1091298b: /* 1091298b: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091298e: jne 0x1091299b */
  if (!zf) goto L_1091299b;
L_10912990: /* 10912990: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10912993: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912995: jne 0x10912bb6 */
  if (!zf) goto L_10912bb6;
L_1091299b: /* 1091299b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1091299e: cmp eax, 0x29a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x29au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109129a3: jne 0x109129ae */
  if (!zf) goto L_109129ae;
L_109129a5: /* 109129a5: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109129a8: jne 0x10912bb6 */
  if (!zf) goto L_10912bb6;
L_109129ae: /* 109129ae: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 109129b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109129b3: je 0x10912a95 */
  if (zf) goto L_10912a95;
L_109129b9: /* 109129b9: cmp eax, 0x2a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109129bc: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 109129bf: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 109129c1: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109129c5: mov dword ptr [esi + 0x20], ebp */
  W32((uint32_t)(esi + 0x20u), ebp);
/* 109129c8: jne 0x10912a3c */
  if (!zf) goto L_10912a3c;
L_109129ca: /* 109129ca: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 109129cd: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 109129d0: sub ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109129d3: shl ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 109129d6: add ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109129dc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109129dd: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 109129df: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109129e2: jbe 0x109129e9 */
  if ((cf | zf)) goto L_109129e9;
L_109129e4: /* 109129e4: mov eax, 3 */
  eax = 0x3u;
L_109129e9: /* 109129e9: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 109129ec: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 109129ee: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 109129f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109129f3: je 0x109129f8 */
  if (zf) goto L_109129f8;
L_109129f5: /* 109129f5: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_109129f8: /* 109129f8: mov eax, ecx */
  eax = ecx;
/* 109129fa: xor edx, edx */
  edx = 0;
/* 109129fc: mov edi, 0x1f */
  edi = 0x1fu;
/* 10912a01: div edi */
  { uint32_t d = edi; if (!d) d = guest_divzero(0x10912a01);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 10912a03: mov eax, esi */
  eax = esi;
/* 10912a05: mov dword ptr [esi + 4], 0x71 */
  W32((uint32_t)(esi + 0x4u), 0x71u);
/* 10912a0c: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10912a0e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10912a10: call 0x109128b0 */
  esp -= 4; W32(esp, 0x10912a15u); SPILL(); f_109128b0(); if (g_unwind) return; RELOAD();
/* 10912a15: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 10912a18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912a1a: je 0x10912a35 */
  if (zf) goto L_10912a35;
L_10912a1c: /* 10912a1c: movzx ecx, word ptr [ebx + 0x32] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x32u)));
/* 10912a20: mov eax, esi */
  eax = esi;
/* 10912a22: call 0x109128b0 */
  esp -= 4; W32(esp, 0x10912a27u); SPILL(); f_109128b0(); if (g_unwind) return; RELOAD();
/* 10912a27: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 10912a2a: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10912a30: call 0x109128b0 */
  esp -= 4; W32(esp, 0x10912a35u); SPILL(); f_109128b0(); if (g_unwind) return; RELOAD();
L_10912a35: /* 10912a35: mov dword ptr [ebx + 0x30], 1 */
  W32((uint32_t)(ebx + 0x30u), 0x1u);
L_10912a3c: /* 10912a3c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 10912a3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912a41: je 0x10912a5f */
  if (zf) goto L_10912a5f;
L_10912a43: /* 10912a43: mov eax, ebx */
  eax = ebx;
/* 10912a45: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10912a4au); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
/* 10912a4a: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 10912a4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912a4f: jne 0x10912a84 */
  if (!zf) goto L_10912a84;
L_10912a51: /* 10912a51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912a52: mov dword ptr [esi + 0x20], 0xffffffff */
  W32((uint32_t)(esi + 0x20u), 0xffffffffu);
/* 10912a59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912a5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912a5b: xor eax, eax */
  eax = 0;
/* 10912a5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912a5e: ret  */
  esp += 4; SPILL(); return;
L_10912a5f: /* 10912a5f: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10912a62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912a64: jne 0x10912a84 */
  if (!zf) goto L_10912a84;
L_10912a66: /* 10912a66: cmp ebp, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10912a6a: jg 0x10912a84 */
  if ((!zf && sf == of)) goto L_10912a84;
L_10912a6c: /* 10912a6c: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912a6f: je 0x10912a84 */
  if (zf) goto L_10912a84;
L_10912a71: /* 10912a71: mov edx, dword ptr [0x1092f650] */
  edx = R32((uint32_t)(0x1092f650u));
/* 10912a77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912a78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912a79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912a7a: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 10912a7d: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10912a82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912a83: ret  */
  esp += 4; SPILL(); return;
L_10912a84: /* 10912a84: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10912a87: cmp eax, 0x29a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x29au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912a8c: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 10912a8f: jne 0x10912aa7 */
  if (!zf) goto L_10912aa7;
L_10912a91: /* 10912a91: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912a93: je 0x10912aab */
  if (zf) goto L_10912aab;
L_10912a95: /* 10912a95: mov eax, dword ptr [0x1092f650] */
  eax = R32((uint32_t)(0x1092f650u));
/* 10912a9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912a9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912a9c: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 10912a9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912aa0: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10912aa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912aa6: ret  */
  esp += 4; SPILL(); return;
L_10912aa7: /* 10912aa7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912aa9: jne 0x10912ac5 */
  if (!zf) goto L_10912ac5;
L_10912aab: /* 10912aab: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 10912aae: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912ab0: jne 0x10912ac5 */
  if (!zf) goto L_10912ac5;
L_10912ab2: /* 10912ab2: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912ab4: je 0x10912b55 */
  if (zf) goto L_10912b55;
L_10912aba: /* 10912aba: cmp eax, 0x29a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x29au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912abf: je 0x10912b55 */
  if (zf) goto L_10912b55;
L_10912ac5: /* 10912ac5: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 10912ac8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10912ac9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 10912acc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10912acd: call dword ptr [ecx*4 + 0x10921ca8] */
  { uint32_t t = R32((uint32_t)(ecx*4 + 0x10921ca8u)); esp -= 4; W32(esp, 0x10912ad4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912ad4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10912ad7: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912ada: je 0x10912ae1 */
  if (zf) goto L_10912ae1;
L_10912adc: /* 10912adc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912adf: jne 0x10912ae8 */
  if (!zf) goto L_10912ae8;
L_10912ae1: /* 10912ae1: mov dword ptr [esi + 4], 0x29a */
  W32((uint32_t)(esi + 0x4u), 0x29au);
L_10912ae8: /* 10912ae8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912aea: je 0x10912ba1 */
  if (zf) goto L_10912ba1;
L_10912af0: /* 10912af0: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912af3: je 0x10912ba1 */
  if (zf) goto L_10912ba1;
L_10912af9: /* 10912af9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912afc: jne 0x10912b55 */
  if (!zf) goto L_10912b55;
L_10912afe: /* 10912afe: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912b00: jne 0x10912b0d */
  if (!zf) goto L_10912b0d;
L_10912b02: /* 10912b02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10912b03: call 0x10916030 */
  esp -= 4; W32(esp, 0x10912b08u); SPILL(); f_10916030(); if (g_unwind) return; RELOAD();
/* 10912b08: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10912b0b: jmp 0x10912b47 */
  goto L_10912b47;
L_10912b0d: /* 10912b0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10912b0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10912b11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10912b13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10912b14: call 0x10915f90 */
  esp -= 4; W32(esp, 0x10912b19u); SPILL(); f_10915f90(); if (g_unwind) return; RELOAD();
/* 10912b19: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10912b1c: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912b1f: jne 0x10912b47 */
  if (!zf) goto L_10912b47;
L_10912b21: /* 10912b21: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 10912b24: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 10912b27: mov word ptr [eax + edx*2 - 2], 0 */
  W16((uint32_t)(eax + edx*2 + 0xfffffffeu), 0x0u);
/* 10912b2e: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 10912b31: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* 10912b34: lea ecx, [ecx + ecx - 2] */
  ecx = (uint32_t)(ecx + ecx + 0xfffffffeu);
/* 10912b38: mov edx, ecx */
  edx = ecx;
/* 10912b3a: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10912b3d: xor eax, eax */
  eax = 0;
/* 10912b3f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10912b41: mov ecx, edx */
  ecx = edx;
/* 10912b43: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10912b45: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_10912b47: /* 10912b47: mov eax, ebx */
  eax = ebx;
/* 10912b49: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10912b4eu); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
/* 10912b4e: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 10912b51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912b53: je 0x10912ba8 */
  if (zf) goto L_10912ba8;
L_10912b55: /* 10912b55: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912b58: jne 0x10912baf */
  if (!zf) goto L_10912baf;
L_10912b5a: /* 10912b5a: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 10912b5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912b5f: je 0x10912b6b */
  if (zf) goto L_10912b6b;
L_10912b61: /* 10912b61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912b62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912b63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912b64: mov eax, 1 */
  eax = 0x1u;
/* 10912b69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912b6a: ret  */
  esp += 4; SPILL(); return;
L_10912b6b: /* 10912b6b: movzx ecx, word ptr [ebx + 0x32] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x32u)));
/* 10912b6f: mov eax, esi */
  eax = esi;
/* 10912b71: call 0x109128b0 */
  esp -= 4; W32(esp, 0x10912b76u); SPILL(); f_109128b0(); if (g_unwind) return; RELOAD();
/* 10912b76: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 10912b79: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10912b7f: call 0x109128b0 */
  esp -= 4; W32(esp, 0x10912b84u); SPILL(); f_109128b0(); if (g_unwind) return; RELOAD();
/* 10912b84: mov eax, ebx */
  eax = ebx;
/* 10912b86: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10912b8bu); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
/* 10912b8b: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 10912b8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912b8f: mov dword ptr [esi + 0x18], 0xffffffff */
  W32((uint32_t)(esi + 0x18u), 0xffffffffu);
/* 10912b96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912b97: xor eax, eax */
  eax = 0;
/* 10912b99: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912b9b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912b9c: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10912b9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912ba0: ret  */
  esp += 4; SPILL(); return;
L_10912ba1: /* 10912ba1: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 10912ba4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912ba6: jne 0x10912baf */
  if (!zf) goto L_10912baf;
L_10912ba8: /* 10912ba8: mov dword ptr [esi + 0x20], 0xffffffff */
  W32((uint32_t)(esi + 0x20u), 0xffffffffu);
L_10912baf: /* 10912baf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912bb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912bb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912bb2: xor eax, eax */
  eax = 0;
/* 10912bb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912bb5: ret  */
  esp += 4; SPILL(); return;
L_10912bb6: /* 10912bb6: mov eax, dword ptr [0x1092f644] */
  eax = R32((uint32_t)(0x1092f644u));
/* 10912bbb: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
L_10912bbe: /* 10912bbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912bbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912bc0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912bc1: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10912bc6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912bc7: ret  */
  esp += 4; SPILL(); return;
}

void f_10912bd0(void) {
  LOAD_REGS();
L_10912bd0: /* 10912bd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10912bd1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 10912bd5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912bd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10912bd8: je 0x10912c73 */
  if (zf) goto L_10912c73;
L_10912bde: /* 10912bde: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10912be1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912be3: je 0x10912c73 */
  if (zf) goto L_10912c73;
L_10912be9: /* 10912be9: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 10912bec: cmp edi, 0x2a */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912bef: je 0x10912bfe */
  if (zf) goto L_10912bfe;
L_10912bf1: /* 10912bf1: cmp edi, 0x71 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x71u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912bf4: je 0x10912bfe */
  if (zf) goto L_10912bfe;
L_10912bf6: /* 10912bf6: cmp edi, 0x29a */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x29au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912bfc: jne 0x10912c73 */
  if (!zf) goto L_10912c73;
L_10912bfe: /* 10912bfe: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 10912c01: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912c03: je 0x10912c10 */
  if (zf) goto L_10912c10;
L_10912c05: /* 10912c05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10912c06: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 10912c09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10912c0a: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10912c0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912c0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10912c10: /* 10912c10: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 10912c13: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 10912c16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912c18: je 0x10912c25 */
  if (zf) goto L_10912c25;
L_10912c1a: /* 10912c1a: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 10912c1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10912c1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10912c1f: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10912c22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912c22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10912c25: /* 10912c25: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10912c28: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 10912c2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912c2d: je 0x10912c3a */
  if (zf) goto L_10912c3a;
L_10912c2f: /* 10912c2f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10912c32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10912c33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10912c34: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10912c37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912c37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10912c3a: /* 10912c3a: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 10912c3d: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 10912c40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912c42: je 0x10912c4f */
  if (zf) goto L_10912c4f;
L_10912c44: /* 10912c44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10912c45: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 10912c48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10912c49: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10912c4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912c4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10912c4f: /* 10912c4f: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 10912c52: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 10912c55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10912c56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10912c57: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10912c5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912c5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10912c5d: xor eax, eax */
  eax = 0;
/* 10912c5f: cmp edi, 0x71 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x71u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10912c62: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 10912c65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912c66: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* 10912c6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912c6e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10912c6f: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10912c72: ret  */
  esp += 4; SPILL(); return;
L_10912c73: /* 10912c73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912c74: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10912c79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912c7a: ret  */
  esp += 4; SPILL(); return;
}

void f_10912c80(void) {
  LOAD_REGS();
L_10912c80: /* 10912c80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10912c81: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10912c82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10912c83: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 10912c87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912c89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10912c8a: je 0x10912e1f */
  if (zf) goto L_10912e1f;
L_10912c90: /* 10912c90: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10912c94: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912c96: je 0x10912e1f */
  if (zf) goto L_10912e1f;
L_10912c9c: /* 10912c9c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10912c9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912ca1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10912ca5: je 0x10912e1f */
  if (zf) goto L_10912e1f;
L_10912cab: /* 10912cab: mov ecx, 0xe */
  ecx = 0xeu;
/* 10912cb0: mov edi, ebp */
  edi = ebp;
/* 10912cb2: push 0x16b8 */
  { uint32_t v = 0x16b8u; esp -= 4; W32(esp, v); }
/* 10912cb7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 10912cb9: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 10912cbc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10912cbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10912cbf: call dword ptr [ebp + 0x20] */
  { uint32_t t = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, 0x10912cc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912cc2: mov ebx, eax */
  ebx = eax;
/* 10912cc4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10912cc7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912cc9: je 0x10912e15 */
  if (zf) goto L_10912e15;
L_10912ccf: /* 10912ccf: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 10912cd3: mov dword ptr [ebp + 0x1c], ebx */
  W32((uint32_t)(ebp + 0x1cu), ebx);
/* 10912cd6: mov ecx, 0x5ae */
  ecx = 0x5aeu;
/* 10912cdb: mov edi, ebx */
  edi = ebx;
/* 10912cdd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 10912cdf: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 10912ce2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 10912ce4: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 10912ce6: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 10912ce9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10912cea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10912ceb: call dword ptr [ebp + 0x20] */
  { uint32_t t = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, 0x10912ceeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912cee: mov dword ptr [ebx + 0x30], eax */
  W32((uint32_t)(ebx + 0x30u), eax);
/* 10912cf1: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 10912cf4: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 10912cf7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 10912cf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10912cfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10912cfb: call dword ptr [ebp + 0x20] */
  { uint32_t t = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, 0x10912cfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912cfe: mov edx, dword ptr [ebx + 0x44] */
  edx = R32((uint32_t)(ebx + 0x44u));
/* 10912d01: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 10912d03: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* 10912d06: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 10912d09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10912d0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10912d0b: call dword ptr [ebp + 0x20] */
  { uint32_t t = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, 0x10912d0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912d0e: mov ecx, dword ptr [ebx + 0x1694] */
  ecx = R32((uint32_t)(ebx + 0x1694u));
/* 10912d14: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 10912d16: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
/* 10912d19: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 10912d1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10912d1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10912d1e: call dword ptr [ebp + 0x20] */
  { uint32_t t = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, 0x10912d21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10912d21: mov edi, dword ptr [ebx + 0x30] */
  edi = R32((uint32_t)(ebx + 0x30u));
/* 10912d24: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10912d27: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912d29: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 10912d2c: je 0x10912e0c */
  if (zf) goto L_10912e0c;
L_10912d32: /* 10912d32: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 10912d35: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912d37: je 0x10912e0c */
  if (zf) goto L_10912e0c;
L_10912d3d: /* 10912d3d: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 10912d40: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912d42: je 0x10912e0c */
  if (zf) goto L_10912e0c;
L_10912d48: /* 10912d48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912d4a: je 0x10912e0c */
  if (zf) goto L_10912e0c;
L_10912d50: /* 10912d50: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 10912d53: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10912d57: mov esi, dword ptr [edx + 0x30] */
  esi = R32((uint32_t)(edx + 0x30u));
/* 10912d5a: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10912d5c: mov ebp, ecx */
  ebp = ecx;
/* 10912d5e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10912d61: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 10912d63: mov ecx, ebp */
  ecx = ebp;
/* 10912d65: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10912d68: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 10912d6a: mov esi, dword ptr [edx + 0x38] */
  esi = R32((uint32_t)(edx + 0x38u));
/* 10912d6d: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 10912d70: mov edi, dword ptr [ebx + 0x38] */
  edi = R32((uint32_t)(ebx + 0x38u));
/* 10912d73: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10912d75: mov ebp, ecx */
  ebp = ecx;
/* 10912d77: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10912d7a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 10912d7c: mov ecx, ebp */
  ecx = ebp;
/* 10912d7e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10912d81: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 10912d83: mov esi, dword ptr [edx + 0x3c] */
  esi = R32((uint32_t)(edx + 0x3cu));
/* 10912d86: mov ecx, dword ptr [ebx + 0x44] */
  ecx = R32((uint32_t)(ebx + 0x44u));
/* 10912d89: mov edi, dword ptr [ebx + 0x3c] */
  edi = R32((uint32_t)(ebx + 0x3cu));
/* 10912d8c: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10912d8e: mov ebp, ecx */
  ebp = ecx;
/* 10912d90: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10912d93: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 10912d95: mov ecx, ebp */
  ecx = ebp;
/* 10912d97: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10912d9a: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 10912d9c: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 10912d9f: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10912da2: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 10912da5: mov ebp, ecx */
  ebp = ecx;
/* 10912da7: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10912daa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 10912dac: mov ecx, ebp */
  ecx = ebp;
/* 10912dae: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10912db1: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 10912db3: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 10912db6: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 10912db9: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 10912dbc: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10912dbe: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10912dc0: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 10912dc3: mov ecx, dword ptr [ebx + 0x1694] */
  ecx = R32((uint32_t)(ebx + 0x1694u));
/* 10912dc9: mov edx, ecx */
  edx = ecx;
/* 10912dcb: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10912dcd: lea eax, [eax + edx*2] */
  eax = (uint32_t)(eax + edx*2);
/* 10912dd0: lea edx, [esi + ecx*2] */
  edx = (uint32_t)(esi + ecx*2);
/* 10912dd3: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10912dd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912dd6: mov dword ptr [ebx + 0x169c], eax */
  W32((uint32_t)(ebx + 0x169cu), eax);
/* 10912ddc: mov dword ptr [ebx + 0x1690], ecx */
  W32((uint32_t)(ebx + 0x1690u), ecx);
/* 10912de2: lea eax, [ebx + 0x8c] */
  eax = (uint32_t)(ebx + 0x8cu);
/* 10912de8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912de9: lea ecx, [ebx + 0x980] */
  ecx = (uint32_t)(ebx + 0x980u);
/* 10912def: lea edx, [ebx + 0xa74] */
  edx = (uint32_t)(ebx + 0xa74u);
/* 10912df5: mov dword ptr [ebx + 0xb10], eax */
  W32((uint32_t)(ebx + 0xb10u), eax);
/* 10912dfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912dfc: mov dword ptr [ebx + 0xb1c], ecx */
  W32((uint32_t)(ebx + 0xb1cu), ecx);
/* 10912e02: mov dword ptr [ebx + 0xb28], edx */
  W32((uint32_t)(ebx + 0xb28u), edx);
/* 10912e08: xor eax, eax */
  eax = 0;
/* 10912e0a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912e0b: ret  */
  esp += 4; SPILL(); return;
L_10912e0c: /* 10912e0c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10912e0d: call 0x10912bd0 */
  esp -= 4; W32(esp, 0x10912e12u); SPILL(); f_10912bd0(); if (g_unwind) return; RELOAD();
/* 10912e12: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10912e15: /* 10912e15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912e16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912e17: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912e18: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10912e1d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912e1e: ret  */
  esp += 4; SPILL(); return;
L_10912e1f: /* 10912e1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912e20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912e21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912e22: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10912e27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912e28: ret  */
  esp += 4; SPILL(); return;
}

void f_10912e30(void) {
  LOAD_REGS();
L_10912e30: /* 10912e30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10912e31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10912e32: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 10912e36: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 10912e39: mov ebx, eax */
  ebx = eax;
/* 10912e3b: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10912e3d: jbe 0x10912e41 */
  if ((cf | zf)) goto L_10912e41;
L_10912e3f: /* 10912e3f: mov ebx, ecx */
  ebx = ecx;
L_10912e41: /* 10912e41: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912e43: jne 0x10912e4a */
  if (!zf) goto L_10912e4a;
L_10912e45: /* 10912e45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912e46: xor eax, eax */
  eax = 0;
/* 10912e48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912e49: ret  */
  esp += 4; SPILL(); return;
L_10912e4a: /* 10912e4a: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10912e4c: mov dword ptr [ebp + 4], eax */
  W32((uint32_t)(ebp + 0x4u), eax);
/* 10912e4f: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 10912e52: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 10912e55: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10912e57: jne 0x10912e6d */
  if (!zf) goto L_10912e6d;
L_10912e59: /* 10912e59: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 10912e5c: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 10912e5f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10912e60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10912e61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10912e62: call 0x10914840 */
  esp -= 4; W32(esp, 0x10912e67u); SPILL(); f_10914840(); if (g_unwind) return; RELOAD();
/* 10912e67: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10912e6a: mov dword ptr [ebp + 0x30], eax */
  W32((uint32_t)(ebp + 0x30u), eax);
L_10912e6d: /* 10912e6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10912e6e: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 10912e71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10912e72: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 10912e76: mov ecx, ebx */
  ecx = ebx;
/* 10912e78: mov eax, ecx */
  eax = ecx;
/* 10912e7a: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10912e7d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 10912e7f: mov ecx, eax */
  ecx = eax;
/* 10912e81: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10912e84: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 10912e86: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 10912e89: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 10912e8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912e8d: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10912e8f: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10912e91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912e92: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 10912e95: mov dword ptr [ebp], ecx */
  W32((uint32_t)(ebp), ecx);
/* 10912e98: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10912e99: mov eax, ebx */
  eax = ebx;
/* 10912e9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912e9c: ret  */
  esp += 4; SPILL(); return;
}

void f_10912ea0(void) {
  LOAD_REGS();
L_10912ea0: /* 10912ea0: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* 10912ea3: mov ecx, dword ptr [edx + 0x44] */
  ecx = R32((uint32_t)(edx + 0x44u));
/* 10912ea6: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10912ea8: mov dword ptr [edx + 0x34], eax */
  W32((uint32_t)(edx + 0x34u), eax);
/* 10912eab: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 10912eae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10912eaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10912eb0: xor esi, esi */
  esi = 0;
/* 10912eb2: mov word ptr [eax + ecx*2 - 2], si */
  W16((uint32_t)(eax + ecx*2 + 0xfffffffeu), (esi & 0xffffu));
/* 10912eb7: mov ecx, dword ptr [edx + 0x44] */
  ecx = R32((uint32_t)(edx + 0x44u));
/* 10912eba: lea ecx, [ecx + ecx - 2] */
  ecx = (uint32_t)(ecx + ecx + 0xfffffffeu);
/* 10912ebe: mov ebx, ecx */
  ebx = ecx;
/* 10912ec0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10912ec1: mov edi, dword ptr [edx + 0x3c] */
  edi = R32((uint32_t)(edx + 0x3cu));
/* 10912ec4: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10912ec7: xor eax, eax */
  eax = 0;
/* 10912ec9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10912ecb: mov ecx, ebx */
  ecx = ebx;
/* 10912ecd: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10912ed0: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 10912ed2: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* 10912ed5: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 10912ed8: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10912edb: movzx ecx, word ptr [eax + 0x10921ca2] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x10921ca2u)));
/* 10912ee2: mov dword ptr [edx + 0x78], ecx */
  W32((uint32_t)(edx + 0x78u), ecx);
/* 10912ee5: movzx ecx, word ptr [eax + 0x10921ca0] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x10921ca0u)));
/* 10912eec: mov dword ptr [edx + 0x84], ecx */
  W32((uint32_t)(edx + 0x84u), ecx);
/* 10912ef2: movzx ecx, word ptr [eax + 0x10921ca4] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x10921ca4u)));
/* 10912ef9: mov dword ptr [edx + 0x88], ecx */
  W32((uint32_t)(edx + 0x88u), ecx);
/* 10912eff: movzx eax, word ptr [eax + 0x10921ca6] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x10921ca6u)));
/* 10912f06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10912f07: mov dword ptr [edx + 0x74], eax */
  W32((uint32_t)(edx + 0x74u), eax);
/* 10912f0a: mov dword ptr [edx + 0x64], esi */
  W32((uint32_t)(edx + 0x64u), esi);
/* 10912f0d: mov dword ptr [edx + 0x54], esi */
  W32((uint32_t)(edx + 0x54u), esi);
/* 10912f10: mov dword ptr [edx + 0x6c], esi */
  W32((uint32_t)(edx + 0x6cu), esi);
/* 10912f13: mov eax, 2 */
  eax = 0x2u;
/* 10912f18: mov dword ptr [edx + 0x60], esi */
  W32((uint32_t)(edx + 0x60u), esi);
/* 10912f1b: mov dword ptr [edx + 0x40], esi */
  W32((uint32_t)(edx + 0x40u), esi);
/* 10912f1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10912f1f: mov dword ptr [edx + 0x70], eax */
  W32((uint32_t)(edx + 0x70u), eax);
/* 10912f22: mov dword ptr [edx + 0x58], eax */
  W32((uint32_t)(edx + 0x58u), eax);
/* 10912f25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10912f26: ret  */
  esp += 4; SPILL(); return;
}

void f_10912f30(void) {
  LOAD_REGS();
L_10912f30: /* 10912f30: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10912f33: mov ecx, dword ptr [esi + 0x74] */
  ecx = R32((uint32_t)(esi + 0x74u));
/* 10912f36: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 10912f39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10912f3a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10912f3b: mov ebp, dword ptr [esi + 0x70] */
  ebp = R32((uint32_t)(esi + 0x70u));
/* 10912f3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10912f3f: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 10912f45: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10912f49: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 10912f4c: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 10912f50: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* 10912f53: lea ebx, [edi - 0x106] */
  ebx = (uint32_t)(edi + 0xfffffefau);
/* 10912f59: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10912f5b: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10912f5d: jbe 0x10912f6d */
  if ((cf | zf)) goto L_10912f6d;
L_10912f5f: /* 10912f5f: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10912f61: add edx, 0x106 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10912f67: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 10912f6b: jmp 0x10912f75 */
  goto L_10912f75;
L_10912f6d: /* 10912f6d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_10912f75: /* 10912f75: mov dl, byte ptr [ecx + ebp - 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp + 0xffffffffu))) & 0xffu);
/* 10912f79: mov byte ptr [esp + 0xe], dl */
  W8((uint32_t)(esp + 0xeu), (edx & 0xffu));
/* 10912f7d: mov dl, byte ptr [ecx + ebp] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp))) & 0xffu);
/* 10912f80: mov byte ptr [esp + 0xf], dl */
  W8((uint32_t)(esp + 0xfu), (edx & 0xffu));
/* 10912f84: cmp ebp, dword ptr [esi + 0x84] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x84u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10912f8a: lea edi, [ecx + 0x102] */
  edi = (uint32_t)(ecx + 0x102u);
/* 10912f90: jb 0x10912f97 */
  if (cf) goto L_10912f97;
L_10912f92: /* 10912f92: shr dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_10912f97: /* 10912f97: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 10912f9a: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10912f9e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10912fa2: jbe 0x10912fb0 */
  if ((cf | zf)) goto L_10912fb0;
L_10912fa4: /* 10912fa4: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 10912fa8: jmp 0x10912fb0 */
  goto L_10912fb0;
L_10912fb0: /* 10912fb0: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 10912fb3: mov bl, byte ptr [esp + 0xf] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
/* 10912fb7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10912fb9: cmp byte ptr [edx + ebp], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ebp))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fbc: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fc2: /* 10912fc2: mov bl, byte ptr [esp + 0xe] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xeu))) & 0xffu);
/* 10912fc6: cmp byte ptr [edx + ebp - 1], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ebp + 0xffffffffu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fca: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fd0: /* 10912fd0: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 10912fd2: cmp bl, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fd4: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fda: /* 10912fda: mov bl, byte ptr [edx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x1u))) & 0xffu);
/* 10912fdd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912fde: cmp bl, byte ptr [ecx + 1] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fe1: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fe7: /* 10912fe7: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10912fea: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912feb: jmp 0x10912ff0 */
  goto L_10912ff0;
L_10912ff0: /* 10912ff0: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10912ff3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10912ff4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912ff5: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912ff7: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10912ff9: /* 10912ff9: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10912ffc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10912ffd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912ffe: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913000: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913002: /* 10913002: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913005: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913006: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913007: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913009: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_1091300b: /* 1091300b: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 1091300e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091300f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913010: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913012: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913014: /* 10913014: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913017: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913018: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913019: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 1091301b: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_1091301d: /* 1091301d: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913020: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913021: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913022: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913024: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913026: /* 10913026: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913029: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091302a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091302b: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 1091302d: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_1091302f: /* 1091302f: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913032: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913033: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913034: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913036: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913038: /* 10913038: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091303a: jb 0x10912ff0 */
  if (cf) goto L_10912ff0;
L_1091303c: /* 1091303c: mov edx, ecx */
  edx = ecx;
/* 1091303e: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10913040: add edx, 0x102 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x102u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10913046: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913048: lea ecx, [edi - 0x102] */
  ecx = (uint32_t)(edi + 0xfffffefeu);
/* 1091304e: jle 0x1091306a */
  if ((zf || sf != of)) goto L_1091306a;
L_10913050: /* 10913050: cmp edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913054: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 10913057: mov ebp, edx */
  ebp = edx;
/* 10913059: jge 0x10913086 */
  if ((sf == of)) goto L_10913086;
L_1091305b: /* 1091305b: mov bl, byte ptr [edx + ecx - 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xffffffffu))) & 0xffu);
/* 1091305f: mov dl, byte ptr [edx + ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx))) & 0xffu);
/* 10913062: mov byte ptr [esp + 0xe], bl */
  W8((uint32_t)(esp + 0xeu), (ebx & 0xffu));
/* 10913066: mov byte ptr [esp + 0xf], dl */
  W8((uint32_t)(esp + 0xfu), (edx & 0xffu));
L_1091306a: /* 1091306a: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 1091306d: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1091306f: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 10913072: movzx eax, word ptr [eax + edx*2] */
  eax = (uint32_t)(R16((uint32_t)(eax + edx*2)));
/* 10913076: cmp eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091307a: jbe 0x10913086 */
  if ((cf | zf)) goto L_10913086;
L_1091307c: /* 1091307c: dec dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 10913080: jne 0x10912fb0 */
  if (!zf) goto L_10912fb0;
L_10913086: /* 10913086: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1091308a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091308c: ja 0x10913090 */
  if ((!cf && !zf)) goto L_10913090;
L_1091308e: /* 1091308e: mov eax, ebp */
  eax = ebp;
L_10913090: /* 10913090: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913091: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10913092: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10913093: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913096: ret  */
  esp += 4; SPILL(); return;
}

void f_10912faa(void) {
  LOAD_REGS();
L_10912faa: /* 10912faa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10912fb0: /* 10912fb0: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 10912fb3: mov bl, byte ptr [esp + 0xf] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
/* 10912fb7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10912fb9: cmp byte ptr [edx + ebp], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ebp))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fbc: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fc2: /* 10912fc2: mov bl, byte ptr [esp + 0xe] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xeu))) & 0xffu);
/* 10912fc6: cmp byte ptr [edx + ebp - 1], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ebp + 0xffffffffu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fca: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fd0: /* 10912fd0: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 10912fd2: cmp bl, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fd4: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fda: /* 10912fda: mov bl, byte ptr [edx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x1u))) & 0xffu);
/* 10912fdd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912fde: cmp bl, byte ptr [ecx + 1] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fe1: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fe7: /* 10912fe7: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10912fea: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912feb: jmp 0x10912ff0 */
  goto L_10912ff0;
L_10912ff0: /* 10912ff0: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10912ff3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10912ff4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912ff5: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912ff7: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10912ff9: /* 10912ff9: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10912ffc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10912ffd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912ffe: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913000: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913002: /* 10913002: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913005: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913006: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913007: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913009: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_1091300b: /* 1091300b: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 1091300e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091300f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913010: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913012: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913014: /* 10913014: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913017: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913018: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913019: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 1091301b: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_1091301d: /* 1091301d: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913020: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913021: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913022: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913024: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913026: /* 10913026: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913029: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091302a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091302b: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 1091302d: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_1091302f: /* 1091302f: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913032: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913033: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913034: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913036: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913038: /* 10913038: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091303a: jb 0x10912ff0 */
  if (cf) goto L_10912ff0;
L_1091303c: /* 1091303c: mov edx, ecx */
  edx = ecx;
/* 1091303e: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10913040: add edx, 0x102 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x102u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10913046: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913048: lea ecx, [edi - 0x102] */
  ecx = (uint32_t)(edi + 0xfffffefeu);
/* 1091304e: jle 0x1091306a */
  if ((zf || sf != of)) goto L_1091306a;
L_10913050: /* 10913050: cmp edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913054: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 10913057: mov ebp, edx */
  ebp = edx;
/* 10913059: jge 0x10913086 */
  if ((sf == of)) goto L_10913086;
L_1091305b: /* 1091305b: mov bl, byte ptr [edx + ecx - 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xffffffffu))) & 0xffu);
/* 1091305f: mov dl, byte ptr [edx + ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx))) & 0xffu);
/* 10913062: mov byte ptr [esp + 0xe], bl */
  W8((uint32_t)(esp + 0xeu), (ebx & 0xffu));
/* 10913066: mov byte ptr [esp + 0xf], dl */
  W8((uint32_t)(esp + 0xfu), (edx & 0xffu));
L_1091306a: /* 1091306a: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 1091306d: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1091306f: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 10913072: movzx eax, word ptr [eax + edx*2] */
  eax = (uint32_t)(R16((uint32_t)(eax + edx*2)));
/* 10913076: cmp eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091307a: jbe 0x10913086 */
  if ((cf | zf)) goto L_10913086;
L_1091307c: /* 1091307c: dec dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 10913080: jne 0x10912fb0 */
  if (!zf) goto L_10912fb0;
L_10913086: /* 10913086: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1091308a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091308c: ja 0x10913090 */
  if ((!cf && !zf)) goto L_10913090;
L_1091308e: /* 1091308e: mov eax, ebp */
  eax = ebp;
L_10913090: /* 10913090: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913091: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10913092: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10913093: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913096: ret  */
  esp += 4; SPILL(); return;
}

void f_10912fed(void) {
  LOAD_REGS();
  goto L_10912fed;
L_10912fb0: /* 10912fb0: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 10912fb3: mov bl, byte ptr [esp + 0xf] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
/* 10912fb7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10912fb9: cmp byte ptr [edx + ebp], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ebp))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fbc: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fc2: /* 10912fc2: mov bl, byte ptr [esp + 0xe] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xeu))) & 0xffu);
/* 10912fc6: cmp byte ptr [edx + ebp - 1], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ebp + 0xffffffffu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fca: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fd0: /* 10912fd0: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 10912fd2: cmp bl, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fd4: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fda: /* 10912fda: mov bl, byte ptr [edx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x1u))) & 0xffu);
/* 10912fdd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912fde: cmp bl, byte ptr [ecx + 1] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912fe1: jne 0x1091306a */
  if (!zf) goto L_1091306a;
L_10912fe7: /* 10912fe7: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10912fea: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912feb: jmp 0x10912ff0 */
  goto L_10912ff0;
L_10912fed: /* 10912fed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10912ff0: /* 10912ff0: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10912ff3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10912ff4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912ff5: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10912ff7: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10912ff9: /* 10912ff9: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10912ffc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10912ffd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10912ffe: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913000: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913002: /* 10913002: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913005: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913006: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913007: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913009: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_1091300b: /* 1091300b: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 1091300e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091300f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913010: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913012: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913014: /* 10913014: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913017: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913018: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913019: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 1091301b: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_1091301d: /* 1091301d: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913020: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913021: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913022: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913024: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913026: /* 10913026: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913029: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091302a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091302b: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 1091302d: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_1091302f: /* 1091302f: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 10913032: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913033: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913034: cmp bl, byte ptr [edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913036: jne 0x1091303c */
  if (!zf) goto L_1091303c;
L_10913038: /* 10913038: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091303a: jb 0x10912ff0 */
  if (cf) goto L_10912ff0;
L_1091303c: /* 1091303c: mov edx, ecx */
  edx = ecx;
/* 1091303e: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10913040: add edx, 0x102 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x102u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10913046: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913048: lea ecx, [edi - 0x102] */
  ecx = (uint32_t)(edi + 0xfffffefeu);
/* 1091304e: jle 0x1091306a */
  if ((zf || sf != of)) goto L_1091306a;
L_10913050: /* 10913050: cmp edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913054: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 10913057: mov ebp, edx */
  ebp = edx;
/* 10913059: jge 0x10913086 */
  if ((sf == of)) goto L_10913086;
L_1091305b: /* 1091305b: mov bl, byte ptr [edx + ecx - 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0xffffffffu))) & 0xffu);
/* 1091305f: mov dl, byte ptr [edx + ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx))) & 0xffu);
/* 10913062: mov byte ptr [esp + 0xe], bl */
  W8((uint32_t)(esp + 0xeu), (ebx & 0xffu));
/* 10913066: mov byte ptr [esp + 0xf], dl */
  W8((uint32_t)(esp + 0xfu), (edx & 0xffu));
L_1091306a: /* 1091306a: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 1091306d: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1091306f: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 10913072: movzx eax, word ptr [eax + edx*2] */
  eax = (uint32_t)(R16((uint32_t)(eax + edx*2)));
/* 10913076: cmp eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091307a: jbe 0x10913086 */
  if ((cf | zf)) goto L_10913086;
L_1091307c: /* 1091307c: dec dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 10913080: jne 0x10912fb0 */
  if (!zf) goto L_10912fb0;
L_10913086: /* 10913086: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1091308a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091308c: ja 0x10913090 */
  if ((!cf && !zf)) goto L_10913090;
L_1091308e: /* 1091308e: mov eax, ebp */
  eax = ebp;
L_10913090: /* 10913090: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913091: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10913092: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10913093: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913096: ret  */
  esp += 4; SPILL(); return;
}

void f_109130a0(void) {
  LOAD_REGS();
L_109130a0: /* 109130a0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 109130a3: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 109130a6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109130a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109130a8: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 109130ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109130ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_109130b0: /* 109130b0: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 109130b3: mov edx, dword ptr [ebx + 0x34] */
  edx = R32((uint32_t)(ebx + 0x34u));
/* 109130b6: mov esi, dword ptr [ebx + 0x6c] */
  esi = R32((uint32_t)(ebx + 0x6cu));
/* 109130b9: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109130bb: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 109130bd: jne 0x109130ce */
  if (!zf) goto L_109130ce;
L_109130bf: /* 109130bf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109130c1: jne 0x109130dd */
  if (!zf) goto L_109130dd;
L_109130c3: /* 109130c3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109130c5: jne 0x109130dd */
  if (!zf) goto L_109130dd;
L_109130c7: /* 109130c7: mov edx, eax */
  edx = eax;
/* 109130c9: jmp 0x1091315a */
  goto L_1091315a;
L_109130ce: /* 109130ce: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109130d1: jne 0x109130dd */
  if (!zf) goto L_109130dd;
L_109130d3: /* 109130d3: mov edx, 0xfffffffe */
  edx = 0xfffffffeu;
/* 109130d8: jmp 0x1091315a */
  goto L_1091315a;
L_109130dd: /* 109130dd: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* 109130e0: lea esi, [eax + esi - 0x106] */
  esi = (uint32_t)(eax + esi + 0xfffffefau);
/* 109130e7: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109130e9: jb 0x1091315a */
  if (cf) goto L_1091315a;
L_109130eb: /* 109130eb: mov edi, dword ptr [ebx + 0x30] */
  edi = R32((uint32_t)(ebx + 0x30u));
/* 109130ee: mov ecx, eax */
  ecx = eax;
/* 109130f0: mov ebp, ecx */
  ebp = ecx;
/* 109130f2: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 109130f5: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 109130f8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 109130fa: mov ecx, ebp */
  ecx = ebp;
/* 109130fc: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109130ff: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 10913101: mov edi, dword ptr [ebx + 0x68] */
  edi = R32((uint32_t)(ebx + 0x68u));
/* 10913104: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 10913107: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* 1091310a: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1091310c: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1091310e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10913110: mov dword ptr [ebx + 0x68], edi */
  W32((uint32_t)(ebx + 0x68u), edi);
/* 10913113: mov edi, dword ptr [ebx + 0x44] */
  edi = R32((uint32_t)(ebx + 0x44u));
/* 10913116: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 10913119: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 1091311c: mov dword ptr [ebx + 0x64], esi */
  W32((uint32_t)(ebx + 0x64u), esi);
/* 1091311f: lea esi, [ecx + edi*2] */
  esi = (uint32_t)(ecx + edi*2);
L_10913122: /* 10913122: movzx ecx, word ptr [esi - 2] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0xfffffffeu)));
/* 10913126: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10913129: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091312b: jb 0x10913131 */
  if (cf) goto L_10913131;
L_1091312d: /* 1091312d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1091312f: jmp 0x10913133 */
  goto L_10913133;
L_10913131: /* 10913131: xor ecx, ecx */
  ecx = 0;
L_10913133: /* 10913133: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10913134: mov word ptr [esi], cx */
  W16((uint32_t)(esi), (ecx & 0xffffu));
/* 10913137: jne 0x10913122 */
  if (!zf) goto L_10913122;
L_10913139: /* 10913139: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 1091313c: mov edi, eax */
  edi = eax;
/* 1091313e: lea esi, [ecx + eax*2] */
  esi = (uint32_t)(ecx + eax*2);
L_10913141: /* 10913141: movzx ecx, word ptr [esi - 2] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0xfffffffeu)));
/* 10913145: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10913148: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091314a: jb 0x10913150 */
  if (cf) goto L_10913150;
L_1091314c: /* 1091314c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1091314e: jmp 0x10913152 */
  goto L_10913152;
L_10913150: /* 10913150: xor ecx, ecx */
  ecx = 0;
L_10913152: /* 10913152: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10913153: mov word ptr [esi], cx */
  W16((uint32_t)(esi), (ecx & 0xffffu));
/* 10913156: jne 0x10913141 */
  if (!zf) goto L_10913141;
L_10913158: /* 10913158: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_1091315a: /* 1091315a: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 1091315c: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 1091315f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913161: je 0x10913221 */
  if (zf) goto L_10913221;
L_10913167: /* 10913167: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 1091316a: mov edi, dword ptr [ebx + 0x6c] */
  edi = R32((uint32_t)(ebx + 0x6cu));
/* 1091316d: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 10913170: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10913172: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10913174: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 10913177: mov esi, ecx */
  esi = ecx;
/* 10913179: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091317b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 1091317f: jbe 0x10913187 */
  if ((cf | zf)) goto L_10913187;
L_10913181: /* 10913181: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 10913185: mov esi, edx */
  esi = edx;
L_10913187: /* 10913187: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913189: jne 0x1091318f */
  if (!zf) goto L_1091318f;
L_1091318b: /* 1091318b: xor ecx, ecx */
  ecx = 0;
/* 1091318d: jmp 0x109131dd */
  goto L_109131dd;
L_1091318f: /* 1091318f: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 10913192: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10913194: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 10913197: mov ecx, dword ptr [edx + 0x18] */
  ecx = R32((uint32_t)(edx + 0x18u));
/* 1091319a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091319c: jne 0x109131b6 */
  if (!zf) goto L_109131b6;
L_1091319e: /* 1091319e: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 109131a1: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 109131a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109131a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109131a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109131a7: call 0x10914840 */
  esp -= 4; W32(esp, 0x109131acu); SPILL(); f_10914840(); if (g_unwind) return; RELOAD();
/* 109131ac: mov dword ptr [ebp + 0x30], eax */
  W32((uint32_t)(ebp + 0x30u), eax);
/* 109131af: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 109131b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_109131b6: /* 109131b6: mov ecx, esi */
  ecx = esi;
/* 109131b8: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 109131bb: mov edx, ecx */
  edx = ecx;
/* 109131bd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 109131c0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 109131c2: mov ecx, edx */
  ecx = edx;
/* 109131c4: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109131c7: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 109131c9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 109131cd: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 109131d0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 109131d3: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 109131d5: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109131d7: mov dword ptr [ebp], esi */
  W32((uint32_t)(ebp), esi);
/* 109131da: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_109131dd: /* 109131dd: mov edx, dword ptr [ebx + 0x6c] */
  edx = R32((uint32_t)(ebx + 0x6cu));
/* 109131e0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109131e2: mov edi, edx */
  edi = edx;
/* 109131e4: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109131e7: mov dword ptr [ebx + 0x6c], edx */
  W32((uint32_t)(ebx + 0x6cu), edx);
/* 109131ea: jb 0x1091320c */
  if (cf) goto L_1091320c;
L_109131ec: /* 109131ec: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 109131ef: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 109131f2: lea esi, [ecx + edx] */
  esi = (uint32_t)(ecx + edx);
/* 109131f5: movzx edx, byte ptr [esi] */
  edx = (uint32_t)(R8((uint32_t)(esi)));
/* 109131f8: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 109131fb: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
/* 109131fe: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10913200: movzx ecx, byte ptr [esi + 1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 10913204: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 10913206: and edx, dword ptr [ebx + 0x4c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4cu)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10913209: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
L_1091320c: /* 1091320c: cmp edi, 0x106 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10913212: jae 0x10913221 */
  if (!cf) goto L_10913221;
L_10913214: /* 10913214: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 10913216: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 10913219: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091321b: jne 0x109130b0 */
  if (!zf) goto L_109130b0;
L_10913221: /* 10913221: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913222: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913223: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10913224: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913227: ret  */
  esp += 4; SPILL(); return;
}

void f_10913230(void) {
  LOAD_REGS();
L_10913230: /* 10913230: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10913231: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10913232: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 10913236: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 10913239: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1091323a: add eax, -5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091323d: cmp eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10913242: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10913243: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10913244: mov dword ptr [esp + 0x10], 0xffff */
  W32((uint32_t)(esp + 0x10u), 0xffffu);
/* 1091324c: jae 0x10913252 */
  if (!cf) goto L_10913252;
L_1091324e: /* 1091324e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_10913252: /* 10913252: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 10913255: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10913258: ja 0x1091326a */
  if ((!cf && !zf)) goto L_1091326a;
L_1091325a: /* 1091325a: call 0x109130a0 */
  esp -= 4; W32(esp, 0x1091325fu); SPILL(); f_109130a0(); if (g_unwind) return; RELOAD();
/* 1091325f: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 10913262: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913264: je 0x109133d2 */
  if (zf) goto L_109133d2;
L_1091326a: /* 1091326a: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 1091326d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ecx = r;
  }
/* 1091326f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10913273: mov dword ptr [ebx + 0x64], ecx */
  W32((uint32_t)(ebx + 0x64u), ecx);
/* 10913276: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* 10913279: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 1091327c: mov dword ptr [ebx + 0x6c], 0 */
  W32((uint32_t)(ebx + 0x6cu), 0x0u);
/* 10913283: lea eax, [ecx + eax] */
  eax = (uint32_t)(ecx + eax);
/* 10913286: je 0x10913290 */
  if (zf) goto L_10913290;
L_10913288: /* 10913288: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091328a: jb 0x10913326 */
  if (cf) goto L_10913326;
L_10913290: /* 10913290: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10913292: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10913294: mov dword ptr [ebx + 0x6c], edx */
  W32((uint32_t)(ebx + 0x6cu), edx);
/* 10913297: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* 1091329a: jl 0x109132a3 */
  if ((sf != of)) goto L_109132a3;
L_1091329c: /* 1091329c: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 1091329f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109132a1: jmp 0x109132a5 */
  goto L_109132a5;
L_109132a3: /* 109132a3: xor edx, edx */
  edx = 0;
L_109132a5: /* 109132a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109132a7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109132a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109132aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109132ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109132ac: call 0x10916230 */
  esp -= 4; W32(esp, 0x109132b1u); SPILL(); f_10916230(); if (g_unwind) return; RELOAD();
/* 109132b1: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 109132b4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 109132b6: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 109132b9: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 109132bc: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 109132bf: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 109132c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109132c5: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109132c7: jbe 0x109132cb */
  if ((cf | zf)) goto L_109132cb;
L_109132c9: /* 109132c9: mov edx, ecx */
  edx = ecx;
L_109132cb: /* 109132cb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109132cd: je 0x10913319 */
  if (zf) goto L_10913319;
L_109132cf: /* 109132cf: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 109132d2: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 109132d5: mov ecx, edx */
  ecx = edx;
/* 109132d7: mov ebp, ecx */
  ebp = ecx;
/* 109132d9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 109132dc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 109132de: mov ecx, ebp */
  ecx = ebp;
/* 109132e0: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109132e3: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 109132e5: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 109132e8: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 109132eb: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109132ed: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 109132f0: add dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 109132f3: mov ebp, dword ptr [eax + 0x14] */
  ebp = R32((uint32_t)(eax + 0x14u));
/* 109132f6: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* 109132f9: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 109132fc: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 109132fe: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 10913301: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10913303: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 10913306: sub dword ptr [ecx + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x14u), r);
  }
/* 10913309: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 1091330c: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091330f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913311: jne 0x10913319 */
  if (!zf) goto L_10913319;
L_10913313: /* 10913313: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10913316: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
L_10913319: /* 10913319: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1091331b: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 1091331e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913320: je 0x109133ca */
  if (zf) goto L_109133ca;
L_10913326: /* 10913326: mov edx, dword ptr [ebx + 0x54] */
  edx = R32((uint32_t)(ebx + 0x54u));
/* 10913329: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 1091332c: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 1091332f: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10913331: sub eax, 0x106 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10913336: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10913338: jb 0x10913252 */
  if (cf) goto L_10913252;
L_1091333e: /* 1091333e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10913340: jl 0x10913349 */
  if ((sf != of)) goto L_10913349;
L_10913342: /* 10913342: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 10913345: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10913347: jmp 0x1091334b */
  goto L_1091334b;
L_10913349: /* 10913349: xor eax, eax */
  eax = 0;
L_1091334b: /* 1091334b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1091334d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091334e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091334f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10913350: call 0x10916230 */
  esp -= 4; W32(esp, 0x10913355u); SPILL(); f_10916230(); if (g_unwind) return; RELOAD();
/* 10913355: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 10913358: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1091335a: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 1091335d: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 10913360: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 10913363: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 10913366: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913369: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091336b: jbe 0x1091336f */
  if ((cf | zf)) goto L_1091336f;
L_1091336d: /* 1091336d: mov edx, ecx */
  edx = ecx;
L_1091336f: /* 1091336f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913371: je 0x109133bd */
  if (zf) goto L_109133bd;
L_10913373: /* 10913373: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 10913376: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 10913379: mov ecx, edx */
  ecx = edx;
/* 1091337b: mov ebp, ecx */
  ebp = ecx;
/* 1091337d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10913380: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 10913382: mov ecx, ebp */
  ecx = ebp;
/* 10913384: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10913387: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 10913389: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 1091338c: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 1091338f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10913391: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 10913394: add dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 10913397: mov ebp, dword ptr [eax + 0x14] */
  ebp = R32((uint32_t)(eax + 0x14u));
/* 1091339a: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* 1091339d: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 109133a0: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 109133a2: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 109133a5: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 109133a7: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 109133aa: sub dword ptr [ecx + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x14u), r);
  }
/* 109133ad: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 109133b0: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109133b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109133b5: jne 0x109133bd */
  if (!zf) goto L_109133bd;
L_109133b7: /* 109133b7: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109133ba: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
L_109133bd: /* 109133bd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 109133bf: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 109133c2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109133c4: jne 0x10913252 */
  if (!zf) goto L_10913252;
L_109133ca: /* 109133ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109133cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109133cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109133cd: xor eax, eax */
  eax = 0;
/* 109133cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109133d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 109133d1: ret  */
  esp += 4; SPILL(); return;
L_109133d2: /* 109133d2: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 109133d6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109133d8: je 0x109133ca */
  if (zf) goto L_109133ca;
L_109133da: /* 109133da: mov esi, dword ptr [ebx + 0x54] */
  esi = R32((uint32_t)(ebx + 0x54u));
/* 109133dd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 109133df: jl 0x109133e8 */
  if ((sf != of)) goto L_109133e8;
L_109133e1: /* 109133e1: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 109133e4: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109133e6: jmp 0x109133ea */
  goto L_109133ea;
L_109133e8: /* 109133e8: xor eax, eax */
  eax = 0;
L_109133ea: /* 109133ea: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 109133ed: xor ecx, ecx */
  ecx = 0;
/* 109133ef: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109133f2: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 109133f5: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109133f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109133f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109133f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109133fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109133fb: call 0x10916230 */
  esp -= 4; W32(esp, 0x10913400u); SPILL(); f_10916230(); if (g_unwind) return; RELOAD();
/* 10913400: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 10913403: mov dword ptr [ebx + 0x54], eax */
  W32((uint32_t)(ebx + 0x54u), eax);
/* 10913406: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 10913408: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091340b: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10913410u); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
/* 10913410: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 10913412: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 10913415: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913417: jne 0x1091342b */
  if (!zf) goto L_1091342b;
L_10913419: /* 10913419: xor eax, eax */
  eax = 0;
/* 1091341b: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091341e: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 10913421: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913422: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913423: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10913424: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10913425: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10913426: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10913429: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091342a: ret  */
  esp += 4; SPILL(); return;
L_1091342b: /* 1091342b: xor eax, eax */
  eax = 0;
/* 1091342d: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913430: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10913433: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913434: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913435: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10913436: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10913437: lea eax, [eax + eax + 1] */
  eax = (uint32_t)(eax + eax + 0x1u);
/* 1091343b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091343c: ret  */
  esp += 4; SPILL(); return;
}

void f_10913440(void) {
  LOAD_REGS();
L_10913440: /* 10913440: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10913441: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10913442: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 10913446: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10913447: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10913448: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10913449: xor edi, edi */
  edi = 0;
/* 1091344b: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_1091344f: /* 1091344f: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
L_10913453: /* 10913453: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 10913456: cmp eax, 0x106 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091345b: jae 0x1091347c */
  if (!cf) goto L_1091347c;
L_1091345d: /* 1091345d: call 0x109130a0 */
  esp -= 4; W32(esp, 0x10913462u); SPILL(); f_109130a0(); if (g_unwind) return; RELOAD();
/* 10913462: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 10913465: cmp eax, 0x106 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091346a: jae 0x10913474 */
  if (!cf) goto L_10913474;
L_1091346c: /* 1091346c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091346e: je 0x10913738 */
  if (zf) goto L_10913738;
L_10913474: /* 10913474: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913476: je 0x10913740 */
  if (zf) goto L_10913740;
L_1091347c: /* 1091347c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091347f: jb 0x109134c3 */
  if (cf) goto L_109134c3;
L_10913481: /* 10913481: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* 10913484: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 10913487: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 1091348a: mov esi, dword ptr [ebx + 0x4c] */
  esi = R32((uint32_t)(ebx + 0x4cu));
/* 1091348d: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1091348f: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 10913492: movzx ecx, byte ptr [ecx + edx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + edx + 0x2u)));
/* 10913497: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 10913499: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 1091349c: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091349e: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 109134a1: movzx edi, word ptr [ecx + eax*2] */
  edi = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* 109134a5: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 109134a8: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 109134ab: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109134ad: mov word ptr [ecx + eax*2], di */
  W16((uint32_t)(ecx + eax*2), (edi & 0xffffu));
/* 109134b1: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* 109134b4: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 109134b7: mov cx, word ptr [ebx + 0x64] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x64u))) & 0xffffu);
/* 109134bb: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 109134bf: mov word ptr [eax + edx*2], cx */
  W16((uint32_t)(eax + edx*2), (ecx & 0xffffu));
L_109134c3: /* 109134c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109134c5: je 0x109134ed */
  if (zf) goto L_109134ed;
L_109134c7: /* 109134c7: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 109134ca: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 109134cd: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109134cf: sub eax, 0x106 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109134d4: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109134d6: ja 0x109134ed */
  if ((!cf && !zf)) goto L_109134ed;
L_109134d8: /* 109134d8: cmp dword ptr [ebx + 0x80], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x80u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109134df: je 0x109134ed */
  if (zf) goto L_109134ed;
L_109134e1: /* 109134e1: mov eax, edi */
  eax = edi;
/* 109134e3: mov esi, ebx */
  esi = ebx;
/* 109134e5: call 0x10912f30 */
  esp -= 4; W32(esp, 0x109134eau); SPILL(); f_10912f30(); if (g_unwind) return; RELOAD();
/* 109134ea: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
L_109134ed: /* 109134ed: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 109134f0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109134f3: jb 0x1091362f */
  if (cf) goto L_1091362f;
L_109134f9: /* 109134f9: mov edx, dword ptr [ebx + 0x1698] */
  edx = R32((uint32_t)(ebx + 0x1698u));
/* 109134ff: mov esi, dword ptr [ebx + 0x169c] */
  esi = R32((uint32_t)(ebx + 0x169cu));
/* 10913505: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 10913507: mov ax, word ptr [ebx + 0x64] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x64u))) & 0xffffu);
/* 1091350b: sub ax, word ptr [ebx + 0x68] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0x68u)));
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 1091350f: sub cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10913512: mov word ptr [esi + edx*2], ax */
  W16((uint32_t)(esi + edx*2), (eax & 0xffffu));
/* 10913516: mov edx, dword ptr [ebx + 0x1690] */
  edx = R32((uint32_t)(ebx + 0x1690u));
/* 1091351c: mov esi, dword ptr [ebx + 0x1698] */
  esi = R32((uint32_t)(ebx + 0x1698u));
/* 10913522: mov byte ptr [edx + esi], cl */
  W8((uint32_t)(edx + esi), (ecx & 0xffu));
/* 10913525: mov edx, dword ptr [ebx + 0x1698] */
  edx = R32((uint32_t)(ebx + 0x1698u));
/* 1091352b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091352c: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 1091352f: mov dword ptr [ebx + 0x1698], edx */
  W32((uint32_t)(ebx + 0x1698u), edx);
/* 10913535: movzx edx, byte ptr [ecx + 0x10922568] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x10922568u)));
/* 1091353c: add eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10913541: inc word ptr [ebx + edx*4 + 0x490] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + edx*4 + 0x490u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ebx + edx*4 + 0x490u), r);
  }
/* 10913549: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 1091354d: lea ecx, [ebx + edx*4 + 0x490] */
  ecx = (uint32_t)(ebx + edx*4 + 0x490u);
/* 10913554: jae 0x10913562 */
  if (!cf) goto L_10913562;
L_10913556: /* 10913556: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 10913559: movzx eax, byte ptr [eax + 0x10922368] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x10922368u)));
/* 10913560: jmp 0x1091356f */
  goto L_1091356f;
L_10913562: /* 10913562: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 10913565: shr ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10913568: movzx eax, byte ptr [ecx + 0x10922468] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x10922468u)));
L_1091356f: /* 1091356f: inc word ptr [ebx + eax*4 + 0x980] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + eax*4 + 0x980u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ebx + eax*4 + 0x980u), r);
  }
/* 10913577: mov edx, dword ptr [ebx + 0x1694] */
  edx = R32((uint32_t)(ebx + 0x1694u));
/* 1091357d: mov esi, dword ptr [ebx + 0x1698] */
  esi = R32((uint32_t)(ebx + 0x1698u));
/* 10913583: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 10913586: xor eax, eax */
  eax = 0;
/* 10913588: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10913589: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091358b: mov edx, dword ptr [ebx + 0x78] */
  edx = R32((uint32_t)(ebx + 0x78u));
/* 1091358e: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10913591: mov esi, eax */
  esi = eax;
/* 10913593: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 10913596: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10913598: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091359a: mov dword ptr [ebx + 0x6c], ecx */
  W32((uint32_t)(ebx + 0x6cu), ecx);
/* 1091359d: ja 0x10913602 */
  if ((!cf && !zf)) goto L_10913602;
L_1091359f: /* 1091359f: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109135a2: jb 0x10913602 */
  if (cf) goto L_10913602;
L_109135a4: /* 109135a4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109135a5: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* 109135a8: jmp 0x109135b0 */
  goto L_109135b0;
L_109135b0: /* 109135b0: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 109135b3: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 109135b6: mov edi, dword ptr [ebx + 0x40] */
  edi = R32((uint32_t)(ebx + 0x40u));
/* 109135b9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 109135ba: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* 109135bd: movzx eax, byte ptr [edx + ecx + 2] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx + 0x2u)));
/* 109135c2: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 109135c5: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 109135c7: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 109135ca: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 109135cc: and eax, dword ptr [ebx + 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4cu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109135cf: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 109135d2: movzx edi, word ptr [ecx + eax*2] */
  edi = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* 109135d6: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 109135d9: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 109135dc: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  edx = r;
  }
/* 109135de: mov word ptr [eax + edx*2], di */
  W16((uint32_t)(eax + edx*2), (edi & 0xffffu));
/* 109135e2: mov ax, word ptr [ebx + 0x64] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x64u))) & 0xffffu);
/* 109135e6: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 109135e9: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* 109135ec: mov word ptr [edx + ecx*2], ax */
  W16((uint32_t)(edx + ecx*2), (eax & 0xffffu));
/* 109135f0: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 109135f3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 109135f4: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 109135f8: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* 109135fb: jne 0x109135b0 */
  if (!zf) goto L_109135b0;
L_109135fd: /* 109135fd: jmp 0x10913695 */
  goto L_10913695;
L_10913602: /* 10913602: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 10913605: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 10913608: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091360a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  edx = r;
  }
/* 1091360c: mov dword ptr [ebx + 0x64], ecx */
  W32((uint32_t)(ebx + 0x64u), ecx);
/* 1091360f: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 10913612: mov dword ptr [ebx + 0x58], 0 */
  W32((uint32_t)(ebx + 0x58u), 0x0u);
/* 10913619: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 1091361c: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 1091361f: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10913621: movzx ecx, byte ptr [edx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 10913625: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 10913627: and eax, dword ptr [ebx + 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4cu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091362a: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 1091362d: jmp 0x10913698 */
  goto L_10913698;
L_1091362f: /* 1091362f: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 10913632: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 10913635: mov al, byte ptr [edx + eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax))) & 0xffu);
/* 10913638: mov ecx, dword ptr [ebx + 0x1698] */
  ecx = R32((uint32_t)(ebx + 0x1698u));
/* 1091363e: mov edx, dword ptr [ebx + 0x169c] */
  edx = R32((uint32_t)(ebx + 0x169cu));
/* 10913644: mov word ptr [edx + ecx*2], 0 */
  W16((uint32_t)(edx + ecx*2), 0x0u);
/* 1091364a: mov edx, dword ptr [ebx + 0x1698] */
  edx = R32((uint32_t)(ebx + 0x1698u));
/* 10913650: mov ecx, dword ptr [ebx + 0x1690] */
  ecx = R32((uint32_t)(ebx + 0x1690u));
/* 10913656: mov byte ptr [ecx + edx], al */
  W8((uint32_t)(ecx + edx), (eax & 0xffu));
/* 10913659: mov edx, dword ptr [ebx + 0x1698] */
  edx = R32((uint32_t)(ebx + 0x1698u));
/* 1091365f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913660: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 10913663: mov dword ptr [ebx + 0x1698], edx */
  W32((uint32_t)(ebx + 0x1698u), edx);
/* 10913669: inc word ptr [ebx + eax*4 + 0x8c] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + eax*4 + 0x8cu)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ebx + eax*4 + 0x8cu), r);
  }
/* 10913671: mov ecx, dword ptr [ebx + 0x1694] */
  ecx = R32((uint32_t)(ebx + 0x1694u));
/* 10913677: mov esi, dword ptr [ebx + 0x1698] */
  esi = R32((uint32_t)(ebx + 0x1698u));
/* 1091367d: lea eax, [ebx + eax*4 + 0x8c] */
  eax = (uint32_t)(ebx + eax*4 + 0x8cu);
/* 10913684: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10913685: xor edx, edx */
  edx = 0;
/* 10913687: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913689: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 1091368c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 1091368f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10913690: mov dword ptr [ebx + 0x6c], ecx */
  W32((uint32_t)(ebx + 0x6cu), ecx);
/* 10913693: mov esi, edx */
  esi = edx;
L_10913695: /* 10913695: inc dword ptr [ebx + 0x64] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x64u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x64u), r);
  }
L_10913698: /* 10913698: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091369a: je 0x10913453 */
  if (zf) goto L_10913453;
L_109136a0: /* 109136a0: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* 109136a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 109136a5: jl 0x109136ae */
  if ((sf != of)) goto L_109136ae;
L_109136a7: /* 109136a7: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 109136aa: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109136ac: jmp 0x109136b0 */
  goto L_109136b0;
L_109136ae: /* 109136ae: xor eax, eax */
  eax = 0;
L_109136b0: /* 109136b0: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 109136b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109136b5: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109136b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109136b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109136b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109136ba: call 0x10916230 */
  esp -= 4; W32(esp, 0x109136bfu); SPILL(); f_10916230(); if (g_unwind) return; RELOAD();
/* 109136bf: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 109136c2: mov dword ptr [ebx + 0x54], eax */
  W32((uint32_t)(ebx + 0x54u), eax);
/* 109136c5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 109136c7: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 109136ca: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 109136cd: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 109136d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109136d3: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109136d5: jbe 0x109136d9 */
  if ((cf | zf)) goto L_109136d9;
L_109136d7: /* 109136d7: mov edx, ecx */
  edx = ecx;
L_109136d9: /* 109136d9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109136db: je 0x1091372b */
  if (zf) goto L_1091372b;
L_109136dd: /* 109136dd: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 109136e0: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 109136e3: mov ecx, edx */
  ecx = edx;
/* 109136e5: mov ebp, ecx */
  ebp = ecx;
/* 109136e7: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 109136ea: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 109136ec: mov ecx, ebp */
  ecx = ebp;
/* 109136ee: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109136f1: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 109136f3: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 109136f6: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 109136f9: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109136fb: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 109136fe: add dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 10913701: mov ebp, dword ptr [eax + 0x14] */
  ebp = R32((uint32_t)(eax + 0x14u));
/* 10913704: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* 10913707: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 1091370a: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1091370c: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 1091370f: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 10913713: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10913715: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 10913718: sub dword ptr [ecx + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x14u), r);
  }
/* 1091371b: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 1091371e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10913721: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913723: jne 0x1091372b */
  if (!zf) goto L_1091372b;
L_10913725: /* 10913725: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10913728: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_1091372b: /* 1091372b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 1091372d: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 10913730: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913732: jne 0x1091344f */
  if (!zf) goto L_1091344f;
L_10913738: /* 10913738: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091373a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091373b: xor eax, eax */
  eax = 0;
/* 1091373d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091373e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091373f: ret  */
  esp += 4; SPILL(); return;
L_10913740: /* 10913740: mov esi, dword ptr [ebx + 0x54] */
  esi = R32((uint32_t)(ebx + 0x54u));
/* 10913743: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10913745: jl 0x1091374e */
  if ((sf != of)) goto L_1091374e;
L_10913747: /* 10913747: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 1091374a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091374c: jmp 0x10913750 */
  goto L_10913750;
L_1091374e: /* 1091374e: xor eax, eax */
  eax = 0;
L_10913750: /* 10913750: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 10913753: xor ecx, ecx */
  ecx = 0;
/* 10913755: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913758: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 1091375b: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091375d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091375e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1091375f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10913760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10913761: call 0x10916230 */
  esp -= 4; W32(esp, 0x10913766u); SPILL(); f_10916230(); if (g_unwind) return; RELOAD();
/* 10913766: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 10913769: mov dword ptr [ebx + 0x54], eax */
  W32((uint32_t)(ebx + 0x54u), eax);
/* 1091376c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1091376e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913771: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10913776u); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
/* 10913776: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 10913778: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 1091377b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091377d: jne 0x10913791 */
  if (!zf) goto L_10913791;
L_1091377f: /* 1091377f: xor eax, eax */
  eax = 0;
/* 10913781: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913784: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 10913787: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913788: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913789: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091378a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091378b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091378c: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091378f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10913790: ret  */
  esp += 4; SPILL(); return;
L_10913791: /* 10913791: xor eax, eax */
  eax = 0;
/* 10913793: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913796: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10913799: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091379a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091379b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091379c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091379d: lea eax, [eax + eax + 1] */
  eax = (uint32_t)(eax + eax + 0x1u);
/* 109137a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 109137a2: ret  */
  esp += 4; SPILL(); return;
}

void f_109135aa(void) {
  LOAD_REGS();
  goto L_109135aa;
L_1091344f: /* 1091344f: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
L_10913453: /* 10913453: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 10913456: cmp eax, 0x106 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091345b: jae 0x1091347c */
  if (!cf) goto L_1091347c;
L_1091345d: /* 1091345d: call 0x109130a0 */
  esp -= 4; W32(esp, 0x10913462u); SPILL(); f_109130a0(); if (g_unwind) return; RELOAD();
/* 10913462: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 10913465: cmp eax, 0x106 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091346a: jae 0x10913474 */
  if (!cf) goto L_10913474;
L_1091346c: /* 1091346c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091346e: je 0x10913738 */
  if (zf) goto L_10913738;
L_10913474: /* 10913474: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913476: je 0x10913740 */
  if (zf) goto L_10913740;
L_1091347c: /* 1091347c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091347f: jb 0x109134c3 */
  if (cf) goto L_109134c3;
L_10913481: /* 10913481: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* 10913484: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 10913487: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 1091348a: mov esi, dword ptr [ebx + 0x4c] */
  esi = R32((uint32_t)(ebx + 0x4cu));
/* 1091348d: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1091348f: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 10913492: movzx ecx, byte ptr [ecx + edx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + edx + 0x2u)));
/* 10913497: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 10913499: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 1091349c: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091349e: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 109134a1: movzx edi, word ptr [ecx + eax*2] */
  edi = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* 109134a5: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 109134a8: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 109134ab: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109134ad: mov word ptr [ecx + eax*2], di */
  W16((uint32_t)(ecx + eax*2), (edi & 0xffffu));
/* 109134b1: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* 109134b4: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 109134b7: mov cx, word ptr [ebx + 0x64] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x64u))) & 0xffffu);
/* 109134bb: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 109134bf: mov word ptr [eax + edx*2], cx */
  W16((uint32_t)(eax + edx*2), (ecx & 0xffffu));
L_109134c3: /* 109134c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109134c5: je 0x109134ed */
  if (zf) goto L_109134ed;
L_109134c7: /* 109134c7: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 109134ca: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 109134cd: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109134cf: sub eax, 0x106 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109134d4: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109134d6: ja 0x109134ed */
  if ((!cf && !zf)) goto L_109134ed;
L_109134d8: /* 109134d8: cmp dword ptr [ebx + 0x80], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x80u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109134df: je 0x109134ed */
  if (zf) goto L_109134ed;
L_109134e1: /* 109134e1: mov eax, edi */
  eax = edi;
/* 109134e3: mov esi, ebx */
  esi = ebx;
/* 109134e5: call 0x10912f30 */
  esp -= 4; W32(esp, 0x109134eau); SPILL(); f_10912f30(); if (g_unwind) return; RELOAD();
/* 109134ea: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
L_109134ed: /* 109134ed: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 109134f0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109134f3: jb 0x1091362f */
  if (cf) goto L_1091362f;
L_109134f9: /* 109134f9: mov edx, dword ptr [ebx + 0x1698] */
  edx = R32((uint32_t)(ebx + 0x1698u));
/* 109134ff: mov esi, dword ptr [ebx + 0x169c] */
  esi = R32((uint32_t)(ebx + 0x169cu));
/* 10913505: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 10913507: mov ax, word ptr [ebx + 0x64] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x64u))) & 0xffffu);
/* 1091350b: sub ax, word ptr [ebx + 0x68] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0x68u)));
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 1091350f: sub cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10913512: mov word ptr [esi + edx*2], ax */
  W16((uint32_t)(esi + edx*2), (eax & 0xffffu));
/* 10913516: mov edx, dword ptr [ebx + 0x1690] */
  edx = R32((uint32_t)(ebx + 0x1690u));
/* 1091351c: mov esi, dword ptr [ebx + 0x1698] */
  esi = R32((uint32_t)(ebx + 0x1698u));
/* 10913522: mov byte ptr [edx + esi], cl */
  W8((uint32_t)(edx + esi), (ecx & 0xffu));
/* 10913525: mov edx, dword ptr [ebx + 0x1698] */
  edx = R32((uint32_t)(ebx + 0x1698u));
/* 1091352b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091352c: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 1091352f: mov dword ptr [ebx + 0x1698], edx */
  W32((uint32_t)(ebx + 0x1698u), edx);
/* 10913535: movzx edx, byte ptr [ecx + 0x10922568] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x10922568u)));
/* 1091353c: add eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10913541: inc word ptr [ebx + edx*4 + 0x490] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + edx*4 + 0x490u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ebx + edx*4 + 0x490u), r);
  }
/* 10913549: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 1091354d: lea ecx, [ebx + edx*4 + 0x490] */
  ecx = (uint32_t)(ebx + edx*4 + 0x490u);
/* 10913554: jae 0x10913562 */
  if (!cf) goto L_10913562;
L_10913556: /* 10913556: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 10913559: movzx eax, byte ptr [eax + 0x10922368] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x10922368u)));
/* 10913560: jmp 0x1091356f */
  goto L_1091356f;
L_10913562: /* 10913562: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 10913565: shr ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10913568: movzx eax, byte ptr [ecx + 0x10922468] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x10922468u)));
L_1091356f: /* 1091356f: inc word ptr [ebx + eax*4 + 0x980] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + eax*4 + 0x980u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ebx + eax*4 + 0x980u), r);
  }
/* 10913577: mov edx, dword ptr [ebx + 0x1694] */
  edx = R32((uint32_t)(ebx + 0x1694u));
/* 1091357d: mov esi, dword ptr [ebx + 0x1698] */
  esi = R32((uint32_t)(ebx + 0x1698u));
/* 10913583: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 10913586: xor eax, eax */
  eax = 0;
/* 10913588: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10913589: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091358b: mov edx, dword ptr [ebx + 0x78] */
  edx = R32((uint32_t)(ebx + 0x78u));
/* 1091358e: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10913591: mov esi, eax */
  esi = eax;
/* 10913593: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 10913596: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10913598: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091359a: mov dword ptr [ebx + 0x6c], ecx */
  W32((uint32_t)(ebx + 0x6cu), ecx);
/* 1091359d: ja 0x10913602 */
  if ((!cf && !zf)) goto L_10913602;
L_1091359f: /* 1091359f: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109135a2: jb 0x10913602 */
  if (cf) goto L_10913602;
L_109135a4: /* 109135a4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109135a5: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* 109135a8: jmp 0x109135b0 */
  goto L_109135b0;
L_109135aa: /* 109135aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_109135b0: /* 109135b0: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 109135b3: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 109135b6: mov edi, dword ptr [ebx + 0x40] */
  edi = R32((uint32_t)(ebx + 0x40u));
/* 109135b9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 109135ba: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* 109135bd: movzx eax, byte ptr [edx + ecx + 2] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx + 0x2u)));
/* 109135c2: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 109135c5: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 109135c7: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 109135ca: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 109135cc: and eax, dword ptr [ebx + 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4cu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109135cf: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 109135d2: movzx edi, word ptr [ecx + eax*2] */
  edi = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* 109135d6: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 109135d9: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 109135dc: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  edx = r;
  }
/* 109135de: mov word ptr [eax + edx*2], di */
  W16((uint32_t)(eax + edx*2), (edi & 0xffffu));
/* 109135e2: mov ax, word ptr [ebx + 0x64] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x64u))) & 0xffffu);
/* 109135e6: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 109135e9: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* 109135ec: mov word ptr [edx + ecx*2], ax */
  W16((uint32_t)(edx + ecx*2), (eax & 0xffffu));
/* 109135f0: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 109135f3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 109135f4: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 109135f8: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* 109135fb: jne 0x109135b0 */
  if (!zf) goto L_109135b0;
L_109135fd: /* 109135fd: jmp 0x10913695 */
  goto L_10913695;
L_10913602: /* 10913602: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 10913605: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 10913608: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091360a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  edx = r;
  }
/* 1091360c: mov dword ptr [ebx + 0x64], ecx */
  W32((uint32_t)(ebx + 0x64u), ecx);
/* 1091360f: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 10913612: mov dword ptr [ebx + 0x58], 0 */
  W32((uint32_t)(ebx + 0x58u), 0x0u);
/* 10913619: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 1091361c: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 1091361f: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10913621: movzx ecx, byte ptr [edx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 10913625: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 10913627: and eax, dword ptr [ebx + 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4cu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091362a: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 1091362d: jmp 0x10913698 */
  goto L_10913698;
L_1091362f: /* 1091362f: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 10913632: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 10913635: mov al, byte ptr [edx + eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax))) & 0xffu);
/* 10913638: mov ecx, dword ptr [ebx + 0x1698] */
  ecx = R32((uint32_t)(ebx + 0x1698u));
/* 1091363e: mov edx, dword ptr [ebx + 0x169c] */
  edx = R32((uint32_t)(ebx + 0x169cu));
/* 10913644: mov word ptr [edx + ecx*2], 0 */
  W16((uint32_t)(edx + ecx*2), 0x0u);
/* 1091364a: mov edx, dword ptr [ebx + 0x1698] */
  edx = R32((uint32_t)(ebx + 0x1698u));
/* 10913650: mov ecx, dword ptr [ebx + 0x1690] */
  ecx = R32((uint32_t)(ebx + 0x1690u));
/* 10913656: mov byte ptr [ecx + edx], al */
  W8((uint32_t)(ecx + edx), (eax & 0xffu));
/* 10913659: mov edx, dword ptr [ebx + 0x1698] */
  edx = R32((uint32_t)(ebx + 0x1698u));
/* 1091365f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913660: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 10913663: mov dword ptr [ebx + 0x1698], edx */
  W32((uint32_t)(ebx + 0x1698u), edx);
/* 10913669: inc word ptr [ebx + eax*4 + 0x8c] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + eax*4 + 0x8cu)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ebx + eax*4 + 0x8cu), r);
  }
/* 10913671: mov ecx, dword ptr [ebx + 0x1694] */
  ecx = R32((uint32_t)(ebx + 0x1694u));
/* 10913677: mov esi, dword ptr [ebx + 0x1698] */
  esi = R32((uint32_t)(ebx + 0x1698u));
/* 1091367d: lea eax, [ebx + eax*4 + 0x8c] */
  eax = (uint32_t)(ebx + eax*4 + 0x8cu);
/* 10913684: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10913685: xor edx, edx */
  edx = 0;
/* 10913687: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913689: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 1091368c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 1091368f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10913690: mov dword ptr [ebx + 0x6c], ecx */
  W32((uint32_t)(ebx + 0x6cu), ecx);
/* 10913693: mov esi, edx */
  esi = edx;
L_10913695: /* 10913695: inc dword ptr [ebx + 0x64] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x64u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x64u), r);
  }
L_10913698: /* 10913698: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091369a: je 0x10913453 */
  if (zf) goto L_10913453;
L_109136a0: /* 109136a0: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* 109136a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 109136a5: jl 0x109136ae */
  if ((sf != of)) goto L_109136ae;
L_109136a7: /* 109136a7: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 109136aa: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109136ac: jmp 0x109136b0 */
  goto L_109136b0;
L_109136ae: /* 109136ae: xor eax, eax */
  eax = 0;
L_109136b0: /* 109136b0: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 109136b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109136b5: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109136b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109136b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109136b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109136ba: call 0x10916230 */
  esp -= 4; W32(esp, 0x109136bfu); SPILL(); f_10916230(); if (g_unwind) return; RELOAD();
/* 109136bf: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 109136c2: mov dword ptr [ebx + 0x54], eax */
  W32((uint32_t)(ebx + 0x54u), eax);
/* 109136c5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 109136c7: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 109136ca: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 109136cd: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 109136d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109136d3: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109136d5: jbe 0x109136d9 */
  if ((cf | zf)) goto L_109136d9;
L_109136d7: /* 109136d7: mov edx, ecx */
  edx = ecx;
L_109136d9: /* 109136d9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109136db: je 0x1091372b */
  if (zf) goto L_1091372b;
L_109136dd: /* 109136dd: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 109136e0: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 109136e3: mov ecx, edx */
  ecx = edx;
/* 109136e5: mov ebp, ecx */
  ebp = ecx;
/* 109136e7: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 109136ea: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 109136ec: mov ecx, ebp */
  ecx = ebp;
/* 109136ee: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109136f1: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 109136f3: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 109136f6: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 109136f9: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109136fb: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 109136fe: add dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 10913701: mov ebp, dword ptr [eax + 0x14] */
  ebp = R32((uint32_t)(eax + 0x14u));
/* 10913704: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* 10913707: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 1091370a: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1091370c: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 1091370f: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 10913713: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10913715: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 10913718: sub dword ptr [ecx + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x14u), r);
  }
/* 1091371b: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 1091371e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10913721: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913723: jne 0x1091372b */
  if (!zf) goto L_1091372b;
L_10913725: /* 10913725: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10913728: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_1091372b: /* 1091372b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 1091372d: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 10913730: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913732: jne 0x1091344f */
  if (!zf) goto L_1091344f;
L_10913738: /* 10913738: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091373a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091373b: xor eax, eax */
  eax = 0;
/* 1091373d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091373e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091373f: ret  */
  esp += 4; SPILL(); return;
L_10913740: /* 10913740: mov esi, dword ptr [ebx + 0x54] */
  esi = R32((uint32_t)(ebx + 0x54u));
/* 10913743: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10913745: jl 0x1091374e */
  if ((sf != of)) goto L_1091374e;
L_10913747: /* 10913747: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 1091374a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091374c: jmp 0x10913750 */
  goto L_10913750;
L_1091374e: /* 1091374e: xor eax, eax */
  eax = 0;
L_10913750: /* 10913750: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 10913753: xor ecx, ecx */
  ecx = 0;
/* 10913755: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913758: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 1091375b: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091375d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091375e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1091375f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10913760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10913761: call 0x10916230 */
  esp -= 4; W32(esp, 0x10913766u); SPILL(); f_10916230(); if (g_unwind) return; RELOAD();
/* 10913766: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 10913769: mov dword ptr [ebx + 0x54], eax */
  W32((uint32_t)(ebx + 0x54u), eax);
/* 1091376c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1091376e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913771: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10913776u); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
/* 10913776: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 10913778: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 1091377b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091377d: jne 0x10913791 */
  if (!zf) goto L_10913791;
L_1091377f: /* 1091377f: xor eax, eax */
  eax = 0;
/* 10913781: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913784: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 10913787: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913788: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913789: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091378a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091378b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091378c: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091378f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10913790: ret  */
  esp += 4; SPILL(); return;
L_10913791: /* 10913791: xor eax, eax */
  eax = 0;
/* 10913793: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913796: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10913799: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091379a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091379b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091379c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091379d: lea eax, [eax + eax + 1] */
  eax = (uint32_t)(eax + eax + 0x1u);
/* 109137a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 109137a2: ret  */
  esp += 4; SPILL(); return;
}

void f_109137b0(void) {
  LOAD_REGS();
L_109137b0: /* 109137b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109137b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109137b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109137b3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 109137b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109137b8: xor ebp, ebp */
  ebp = 0;
/* 109137ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_109137c0: /* 109137c0: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 109137c3: cmp eax, 0x106 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109137c8: jae 0x109137ef */
  if (!cf) goto L_109137ef;
L_109137ca: /* 109137ca: mov ebx, esi */
  ebx = esi;
/* 109137cc: call 0x109130a0 */
  esp -= 4; W32(esp, 0x109137d1u); SPILL(); f_109130a0(); if (g_unwind) return; RELOAD();
/* 109137d1: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 109137d4: cmp eax, 0x106 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109137d9: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 109137dd: jae 0x109137e7 */
  if (!cf) goto L_109137e7;
L_109137df: /* 109137df: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109137e1: je 0x10913a13 */
  if (zf) goto L_10913a13;
L_109137e7: /* 109137e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109137e9: je 0x10913ade */
  if (zf) goto L_10913ade;
L_109137ef: /* 109137ef: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109137f2: jb 0x10913832 */
  if (cf) goto L_10913832;
L_109137f4: /* 109137f4: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 109137f7: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 109137fa: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 109137fd: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 10913800: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10913802: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 10913805: movzx ecx, byte ptr [ecx + edx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + edx + 0x2u)));
/* 1091380a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1091380c: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 1091380f: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10913811: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 10913814: movzx ebp, word ptr [ecx + eax*2] */
  ebp = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* 10913818: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 1091381b: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 1091381e: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10913820: mov word ptr [ecx + eax*2], bp */
  W16((uint32_t)(ecx + eax*2), (ebp & 0xffffu));
/* 10913824: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 10913827: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 1091382a: mov cx, word ptr [esi + 0x64] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x64u))) & 0xffffu);
/* 1091382e: mov word ptr [eax + edx*2], cx */
  W16((uint32_t)(eax + edx*2), (ecx & 0xffffu));
L_10913832: /* 10913832: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913834: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 10913837: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 1091383a: mov edi, 2 */
  edi = 0x2u;
/* 1091383f: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 10913842: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 10913845: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* 10913848: je 0x1091389d */
  if (zf) goto L_1091389d;
L_1091384a: /* 1091384a: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 1091384d: mov ecx, edx */
  ecx = edx;
/* 1091384f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10913851: jae 0x1091389d */
  if (!cf) goto L_1091389d;
L_10913853: /* 10913853: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 10913856: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 10913859: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091385b: sub eax, 0x106 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10913860: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10913862: ja 0x1091389d */
  if ((!cf && !zf)) goto L_1091389d;
L_10913864: /* 10913864: cmp dword ptr [esi + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091386a: je 0x10913876 */
  if (zf) goto L_10913876;
L_1091386c: /* 1091386c: mov eax, ebp */
  eax = ebp;
/* 1091386e: call 0x10912f30 */
  esp -= 4; W32(esp, 0x10913873u); SPILL(); f_10912f30(); if (g_unwind) return; RELOAD();
/* 10913873: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
L_10913876: /* 10913876: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 10913879: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091387c: ja 0x1091389d */
  if ((!cf && !zf)) goto L_1091389d;
L_1091387e: /* 1091387e: cmp dword ptr [esi + 0x80], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913885: je 0x1091389a */
  if (zf) goto L_1091389a;
L_10913887: /* 10913887: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091388a: jne 0x1091389d */
  if (!zf) goto L_1091389d;
L_1091388c: /* 1091388c: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 1091388f: sub ecx, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10913892: cmp ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10913898: jbe 0x1091389d */
  if ((cf | zf)) goto L_1091389d;
L_1091389a: /* 1091389a: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
L_1091389d: /* 1091389d: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* 109138a0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109138a3: jb 0x10913a1a */
  if (cf) goto L_10913a1a;
L_109138a9: /* 109138a9: cmp dword ptr [esi + 0x58], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109138ac: ja 0x10913a1a */
  if ((!cf && !zf)) goto L_10913a1a;
L_109138b2: /* 109138b2: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 109138b5: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 109138b8: mov cl, byte ptr [esi + 0x70] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x70u))) & 0xffu);
/* 109138bb: mov ebx, dword ptr [esi + 0x169c] */
  ebx = R32((uint32_t)(esi + 0x169cu));
/* 109138c1: lea edi, [edx + eax - 3] */
  edi = (uint32_t)(edx + eax + 0xfffffffdu);
/* 109138c5: xor eax, eax */
  eax = 0;
/* 109138c7: mov ax, dx */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 109138ca: sub ax, word ptr [esi + 0x5c] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi + 0x5cu)));
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 109138ce: mov edx, dword ptr [esi + 0x1698] */
  edx = R32((uint32_t)(esi + 0x1698u));
/* 109138d4: sub cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109138d7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109138d8: mov word ptr [ebx + edx*2], ax */
  W16((uint32_t)(ebx + edx*2), (eax & 0xffffu));
/* 109138dc: mov edx, dword ptr [esi + 0x1690] */
  edx = R32((uint32_t)(esi + 0x1690u));
/* 109138e2: mov ebx, dword ptr [esi + 0x1698] */
  ebx = R32((uint32_t)(esi + 0x1698u));
/* 109138e8: mov byte ptr [edx + ebx], cl */
  W8((uint32_t)(edx + ebx), (ecx & 0xffu));
/* 109138eb: mov edx, dword ptr [esi + 0x1698] */
  edx = R32((uint32_t)(esi + 0x1698u));
/* 109138f1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109138f2: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 109138f5: mov dword ptr [esi + 0x1698], edx */
  W32((uint32_t)(esi + 0x1698u), edx);
/* 109138fb: movzx edx, byte ptr [ecx + 0x10922568] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x10922568u)));
/* 10913902: add eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10913907: inc word ptr [esi + edx*4 + 0x490] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + edx*4 + 0x490u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(esi + edx*4 + 0x490u), r);
  }
/* 1091390f: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 10913913: lea ecx, [esi + edx*4 + 0x490] */
  ecx = (uint32_t)(esi + edx*4 + 0x490u);
/* 1091391a: jae 0x10913928 */
  if (!cf) goto L_10913928;
L_1091391c: /* 1091391c: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 1091391f: movzx eax, byte ptr [eax + 0x10922368] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x10922368u)));
/* 10913926: jmp 0x10913935 */
  goto L_10913935;
L_10913928: /* 10913928: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 1091392b: shr ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1091392e: movzx eax, byte ptr [ecx + 0x10922468] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x10922468u)));
L_10913935: /* 10913935: inc word ptr [esi + eax*4 + 0x980] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*4 + 0x980u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(esi + eax*4 + 0x980u), r);
  }
/* 1091393d: mov edx, dword ptr [esi + 0x1694] */
  edx = R32((uint32_t)(esi + 0x1694u));
/* 10913943: mov eax, dword ptr [esi + 0x1698] */
  eax = R32((uint32_t)(esi + 0x1698u));
/* 10913949: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1091394a: xor ebx, ebx */
  ebx = 0;
/* 1091394c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091394e: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* 10913951: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 10913954: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10913957: mov ecx, 1 */
  ecx = 0x1u;
/* 1091395c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1091395e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10913960: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10913963: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 10913966: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 10913969: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10913970: /* 10913970: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 10913973: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913974: mov edx, ecx */
  edx = ecx;
/* 10913976: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913978: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 1091397b: ja 0x109139b8 */
  if ((!cf && !zf)) goto L_109139b8;
L_1091397d: /* 1091397d: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 10913980: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 10913983: mov ebp, dword ptr [esi + 0x4c] */
  ebp = R32((uint32_t)(esi + 0x4cu));
/* 10913986: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10913988: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 1091398b: movzx ecx, byte ptr [ecx + edx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + edx + 0x2u)));
/* 10913990: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 10913992: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 10913995: and eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10913997: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 1091399a: movzx ebp, word ptr [ecx + eax*2] */
  ebp = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* 1091399e: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 109139a1: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 109139a4: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109139a6: mov word ptr [ecx + eax*2], bp */
  W16((uint32_t)(ecx + eax*2), (ebp & 0xffffu));
/* 109139aa: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 109139ad: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 109139b0: mov cx, word ptr [esi + 0x64] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x64u))) & 0xffffu);
/* 109139b4: mov word ptr [eax + edx*2], cx */
  W16((uint32_t)(eax + edx*2), (ecx & 0xffffu));
L_109139b8: /* 109139b8: dec dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esi + 0x70u), r);
  }
/* 109139bb: jne 0x10913970 */
  if (!zf) goto L_10913970;
L_109139bd: /* 109139bd: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 109139c0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109139c1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109139c3: mov dword ptr [esi + 0x60], 0 */
  W32((uint32_t)(esi + 0x60u), 0x0u);
/* 109139ca: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 109139d1: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 109139d4: je 0x109137c0 */
  if (zf) goto L_109137c0;
L_109139da: /* 109139da: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 109139dd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 109139df: jl 0x109139e8 */
  if ((sf != of)) goto L_109139e8;
L_109139e1: /* 109139e1: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 109139e4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109139e6: jmp 0x109139ea */
  goto L_109139ea;
L_109139e8: /* 109139e8: xor eax, eax */
  eax = 0;
L_109139ea: /* 109139ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109139ec: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109139ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109139ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109139f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109139f1: call 0x10916230 */
  esp -= 4; W32(esp, 0x109139f6u); SPILL(); f_10916230(); if (g_unwind) return; RELOAD();
/* 109139f6: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 109139f9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 109139fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109139fe: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 10913a01: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10913a06u); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
/* 10913a06: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10913a08: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 10913a0b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_10913a0d: /* 10913a0d: jne 0x109137c0 */
  if (!zf) goto L_109137c0;
L_10913a13: /* 10913a13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913a14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913a15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10913a16: xor eax, eax */
  eax = 0;
/* 10913a18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10913a19: ret  */
  esp += 4; SPILL(); return;
L_10913a1a: /* 10913a1a: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 10913a1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913a1f: je 0x10913ac4 */
  if (zf) goto L_10913ac4;
L_10913a25: /* 10913a25: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 10913a28: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 10913a2b: mov al, byte ptr [ecx + edx - 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx + 0xffffffffu))) & 0xffu);
/* 10913a2f: mov ecx, dword ptr [esi + 0x1698] */
  ecx = R32((uint32_t)(esi + 0x1698u));
/* 10913a35: mov edx, dword ptr [esi + 0x169c] */
  edx = R32((uint32_t)(esi + 0x169cu));
/* 10913a3b: mov word ptr [edx + ecx*2], 0 */
  W16((uint32_t)(edx + ecx*2), 0x0u);
/* 10913a41: mov ecx, dword ptr [esi + 0x1690] */
  ecx = R32((uint32_t)(esi + 0x1690u));
/* 10913a47: mov edx, dword ptr [esi + 0x1698] */
  edx = R32((uint32_t)(esi + 0x1698u));
/* 10913a4d: mov byte ptr [ecx + edx], al */
  W8((uint32_t)(ecx + edx), (eax & 0xffu));
/* 10913a50: mov ebx, dword ptr [esi + 0x1698] */
  ebx = R32((uint32_t)(esi + 0x1698u));
/* 10913a56: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 10913a59: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10913a5a: lea eax, [esi + eax*4 + 0x8c] */
  eax = (uint32_t)(esi + eax*4 + 0x8cu);
/* 10913a61: mov dword ptr [esi + 0x1698], ebx */
  W32((uint32_t)(esi + 0x1698u), ebx);
/* 10913a67: inc word ptr [eax] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax), r);
  }
/* 10913a6a: mov ecx, dword ptr [esi + 0x1694] */
  ecx = R32((uint32_t)(esi + 0x1694u));
/* 10913a70: mov eax, dword ptr [esi + 0x1698] */
  eax = R32((uint32_t)(esi + 0x1698u));
/* 10913a76: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10913a77: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913a79: jne 0x10913aaa */
  if (!zf) goto L_10913aaa;
L_10913a7b: /* 10913a7b: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 10913a7e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10913a80: jl 0x10913a89 */
  if ((sf != of)) goto L_10913a89;
L_10913a82: /* 10913a82: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 10913a85: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10913a87: jmp 0x10913a8b */
  goto L_10913a8b;
L_10913a89: /* 10913a89: xor eax, eax */
  eax = 0;
L_10913a8b: /* 10913a8b: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 10913a8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10913a90: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10913a92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10913a93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10913a94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10913a95: call 0x10916230 */
  esp -= 4; W32(esp, 0x10913a9au); SPILL(); f_10916230(); if (g_unwind) return; RELOAD();
/* 10913a9a: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 10913a9d: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 10913aa0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10913aa2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913aa5: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10913aaau); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
L_10913aaa: /* 10913aaa: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 10913aad: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 10913ab0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913ab1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10913ab2: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 10913ab5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10913ab7: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 10913aba: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 10913abd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913abf: jmp 0x10913a0d */
  goto L_10913a0d;
L_10913ac4: /* 10913ac4: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 10913ac7: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 10913aca: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10913acb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10913acc: mov dword ptr [esi + 0x60], 1 */
  W32((uint32_t)(esi + 0x60u), 0x1u);
/* 10913ad3: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 10913ad6: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 10913ad9: jmp 0x109137c0 */
  goto L_109137c0;
L_10913ade: /* 10913ade: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 10913ae1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913ae3: je 0x10913b31 */
  if (zf) goto L_10913b31;
L_10913ae5: /* 10913ae5: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 10913ae8: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 10913aeb: mov al, byte ptr [edx + eax - 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax + 0xffffffffu))) & 0xffu);
/* 10913aef: mov ecx, dword ptr [esi + 0x1698] */
  ecx = R32((uint32_t)(esi + 0x1698u));
/* 10913af5: mov edx, dword ptr [esi + 0x169c] */
  edx = R32((uint32_t)(esi + 0x169cu));
/* 10913afb: mov word ptr [edx + ecx*2], 0 */
  W16((uint32_t)(edx + ecx*2), 0x0u);
/* 10913b01: mov edx, dword ptr [esi + 0x1698] */
  edx = R32((uint32_t)(esi + 0x1698u));
/* 10913b07: mov ecx, dword ptr [esi + 0x1690] */
  ecx = R32((uint32_t)(esi + 0x1690u));
/* 10913b0d: mov byte ptr [ecx + edx], al */
  W8((uint32_t)(ecx + edx), (eax & 0xffu));
/* 10913b10: mov edx, dword ptr [esi + 0x1698] */
  edx = R32((uint32_t)(esi + 0x1698u));
/* 10913b16: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 10913b19: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10913b1a: lea eax, [esi + eax*4 + 0x8c] */
  eax = (uint32_t)(esi + eax*4 + 0x8cu);
/* 10913b21: mov dword ptr [esi + 0x1698], edx */
  W32((uint32_t)(esi + 0x1698u), edx);
/* 10913b27: inc word ptr [eax] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax), r);
  }
/* 10913b2a: mov dword ptr [esi + 0x60], 0 */
  W32((uint32_t)(esi + 0x60u), 0x0u);
L_10913b31: /* 10913b31: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 10913b34: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10913b36: jl 0x10913b3f */
  if ((sf != of)) goto L_10913b3f;
L_10913b38: /* 10913b38: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 10913b3b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10913b3d: jmp 0x10913b41 */
  goto L_10913b41;
L_10913b3f: /* 10913b3f: xor eax, eax */
  eax = 0;
L_10913b41: /* 10913b41: xor edx, edx */
  edx = 0;
/* 10913b43: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913b46: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10913b49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10913b4a: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 10913b4d: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10913b4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10913b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10913b51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10913b52: call 0x10916230 */
  esp -= 4; W32(esp, 0x10913b57u); SPILL(); f_10916230(); if (g_unwind) return; RELOAD();
/* 10913b57: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 10913b5a: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 10913b5d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10913b5f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913b62: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10913b67u); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
/* 10913b67: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10913b69: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 10913b6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913b6e: jne 0x10913b81 */
  if (!zf) goto L_10913b81;
L_10913b70: /* 10913b70: xor eax, eax */
  eax = 0;
/* 10913b72: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913b75: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 10913b78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913b79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913b7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10913b7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10913b7c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10913b7d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10913b80: ret  */
  esp += 4; SPILL(); return;
L_10913b81: /* 10913b81: xor eax, eax */
  eax = 0;
/* 10913b83: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913b86: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10913b89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913b8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913b8b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10913b8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10913b8d: lea eax, [eax + eax + 1] */
  eax = (uint32_t)(eax + eax + 0x1u);
/* 10913b91: ret  */
  esp += 4; SPILL(); return;
}

void f_10913ba0(void) {
  LOAD_REGS();
L_10913ba0: /* 10913ba0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10913ba4: xor ecx, ecx */
  ecx = 0;
/* 10913ba6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913ba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10913ba9: je 0x10913c0b */
  if (zf) goto L_10913c0b;
L_10913bab: /* 10913bab: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 10913bae: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913bb0: je 0x10913c0b */
  if (zf) goto L_10913c0b;
L_10913bb2: /* 10913bb2: cmp dword ptr [eax + 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913bb5: je 0x10913c0b */
  if (zf) goto L_10913c0b;
L_10913bb7: /* 10913bb7: cmp dword ptr [eax + 0x24], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913bba: je 0x10913c0b */
  if (zf) goto L_10913c0b;
L_10913bbc: /* 10913bbc: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10913bbf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 10913bc2: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 10913bc5: mov dword ptr [eax + 0x2c], 2 */
  W32((uint32_t)(eax + 0x2cu), 0x2u);
/* 10913bcc: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10913bcf: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 10913bd2: cmp dword ptr [esi + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913bd5: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 10913bd8: jge 0x10913bdd */
  if ((sf == of)) goto L_10913bdd;
L_10913bda: /* 10913bda: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
L_10913bdd: /* 10913bdd: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 10913be0: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 10913be2: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 10913be4: and edx, 0x47 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x47u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10913be7: add edx, 0x2a */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10913bea: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10913bed: mov dword ptr [eax + 0x30], 1 */
  W32((uint32_t)(eax + 0x30u), 0x1u);
/* 10913bf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10913bf5: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 10913bf8: call 0x10915c30 */
  esp -= 4; W32(esp, 0x10913bfdu); SPILL(); f_10915c30(); if (g_unwind) return; RELOAD();
/* 10913bfd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913c00: mov edx, esi */
  edx = esi;
/* 10913c02: call 0x10912ea0 */
  esp -= 4; W32(esp, 0x10913c07u); SPILL(); f_10912ea0(); if (g_unwind) return; RELOAD();
/* 10913c07: xor eax, eax */
  eax = 0;
/* 10913c09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913c0a: ret  */
  esp += 4; SPILL(); return;
L_10913c0b: /* 10913c0b: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10913c10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913c11: ret  */
  esp += 4; SPILL(); return;
}

void f_10913c20(void) {
  LOAD_REGS();
L_10913c20: /* 10913c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10913c21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10913c22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 10913c26: xor eax, eax */
  eax = 0;
/* 10913c28: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913c2a: je 0x10913e8f */
  if (zf) goto L_10913e8f;
L_10913c30: /* 10913c30: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
/* 10913c33: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913c35: je 0x10913e8f */
  if (zf) goto L_10913e8f;
L_10913c3b: /* 10913c3b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10913c3f: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913c42: jne 0x10913c4e */
  if (!zf) goto L_10913c4e;
L_10913c44: /* 10913c44: mov dword ptr [esp + 0x10], 6 */
  W32((uint32_t)(esp + 0x10u), 0x6u);
/* 10913c4c: jmp 0x10913c5f */
  goto L_10913c5f;
L_10913c4e: /* 10913c4e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10913c50: jl 0x10913e8f */
  if ((sf != of)) goto L_10913e8f;
L_10913c56: /* 10913c56: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913c59: jg 0x10913e8f */
  if ((!zf && sf == of)) goto L_10913e8f;
L_10913c5f: /* 10913c5f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10913c63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10913c65: jl 0x10913e8f */
  if ((sf != of)) goto L_10913e8f;
L_10913c6b: /* 10913c6b: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913c6e: jg 0x10913e8f */
  if ((!zf && sf == of)) goto L_10913e8f;
L_10913c74: /* 10913c74: mov ecx, dword ptr [esi + 0x7c] */
  ecx = R32((uint32_t)(esi + 0x7cu));
/* 10913c77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10913c78: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10913c79: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10913c7d: lea ebp, [ebp + ebp*2] */
  ebp = (uint32_t)(ebp + ebp*2);
/* 10913c81: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 10913c84: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 10913c87: mov edx, dword ptr [ecx*4 + 0x10921ca8] */
  edx = R32((uint32_t)(ecx*4 + 0x10921ca8u));
/* 10913c8e: cmp edx, dword ptr [ebp + 0x10921ca8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10921ca8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913c94: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 10913c98: je 0x10913e46 */
  if (zf) goto L_10913e46;
L_10913c9e: /* 10913c9e: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 10913ca1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913ca3: je 0x10913e46 */
  if (zf) goto L_10913e46;
L_10913ca9: /* 10913ca9: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 10913cac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913cae: je 0x10913e38 */
  if (zf) goto L_10913e38;
L_10913cb4: /* 10913cb4: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913cb7: jne 0x10913cc4 */
  if (!zf) goto L_10913cc4;
L_10913cb9: /* 10913cb9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 10913cbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913cbe: jne 0x10913e38 */
  if (!zf) goto L_10913e38;
L_10913cc4: /* 10913cc4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10913cc7: cmp eax, 0x29a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x29au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913ccc: je 0x10913e38 */
  if (zf) goto L_10913e38;
L_10913cd2: /* 10913cd2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 10913cd5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913cd7: jne 0x10913ceb */
  if (!zf) goto L_10913ceb;
L_10913cd9: /* 10913cd9: mov eax, dword ptr [0x1092f650] */
  eax = R32((uint32_t)(0x1092f650u));
/* 10913cde: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 10913ce1: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10913ce6: jmp 0x10913e46 */
  goto L_10913e46;
L_10913ceb: /* 10913ceb: cmp eax, 0x2a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913cee: mov ebx, dword ptr [esi + 0x20] */
  ebx = R32((uint32_t)(esi + 0x20u));
/* 10913cf1: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10913cf3: mov dword ptr [esi + 0x20], 1 */
  W32((uint32_t)(esi + 0x20u), 0x1u);
/* 10913cfa: jne 0x10913d72 */
  if (!zf) goto L_10913d72;
L_10913cfc: /* 10913cfc: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10913cff: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 10913d02: sub ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10913d05: shl ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10913d08: add ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10913d0e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10913d0f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 10913d11: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10913d14: jbe 0x10913d1b */
  if ((cf | zf)) goto L_10913d1b;
L_10913d16: /* 10913d16: mov eax, 3 */
  eax = 0x3u;
L_10913d1b: /* 10913d1b: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10913d1e: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 10913d20: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 10913d23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913d25: je 0x10913d2a */
  if (zf) goto L_10913d2a;
L_10913d27: /* 10913d27: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_10913d2a: /* 10913d2a: mov eax, ecx */
  eax = ecx;
/* 10913d2c: xor edx, edx */
  edx = 0;
/* 10913d2e: mov ebp, 0x1f */
  ebp = 0x1fu;
/* 10913d33: div ebp */
  { uint32_t d = ebp; if (!d) d = guest_divzero(0x10913d33);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 10913d35: mov eax, esi */
  eax = esi;
/* 10913d37: mov dword ptr [esi + 4], 0x71 */
  W32((uint32_t)(esi + 0x4u), 0x71u);
/* 10913d3e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10913d40: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10913d42: call 0x109128b0 */
  esp -= 4; W32(esp, 0x10913d47u); SPILL(); f_109128b0(); if (g_unwind) return; RELOAD();
/* 10913d47: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 10913d4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913d4c: je 0x10913d67 */
  if (zf) goto L_10913d67;
L_10913d4e: /* 10913d4e: movzx ecx, word ptr [edi + 0x32] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x32u)));
/* 10913d52: mov eax, esi */
  eax = esi;
/* 10913d54: call 0x109128b0 */
  esp -= 4; W32(esp, 0x10913d59u); SPILL(); f_109128b0(); if (g_unwind) return; RELOAD();
/* 10913d59: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 10913d5c: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10913d62: call 0x109128b0 */
  esp -= 4; W32(esp, 0x10913d67u); SPILL(); f_109128b0(); if (g_unwind) return; RELOAD();
L_10913d67: /* 10913d67: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10913d6b: mov dword ptr [edi + 0x30], 1 */
  W32((uint32_t)(edi + 0x30u), 0x1u);
L_10913d72: /* 10913d72: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 10913d75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913d77: je 0x10913d95 */
  if (zf) goto L_10913d95;
L_10913d79: /* 10913d79: mov eax, edi */
  eax = edi;
/* 10913d7b: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10913d80u); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
/* 10913d80: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 10913d83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913d85: jne 0x10913db1 */
  if (!zf) goto L_10913db1;
L_10913d87: /* 10913d87: mov dword ptr [esi + 0x20], 0xffffffff */
  W32((uint32_t)(esi + 0x20u), 0xffffffffu);
/* 10913d8e: xor eax, eax */
  eax = 0;
/* 10913d90: jmp 0x10913e46 */
  goto L_10913e46;
L_10913d95: /* 10913d95: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 10913d98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913d9a: jne 0x10913db1 */
  if (!zf) goto L_10913db1;
L_10913d9c: /* 10913d9c: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913d9f: jl 0x10913db1 */
  if ((sf != of)) goto L_10913db1;
L_10913da1: /* 10913da1: mov ecx, dword ptr [0x1092f650] */
  ecx = R32((uint32_t)(0x1092f650u));
/* 10913da7: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10913dac: jmp 0x10913e43 */
  goto L_10913e43;
L_10913db1: /* 10913db1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10913db4: cmp eax, 0x29a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x29au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913db9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 10913dbc: jne 0x10913dd2 */
  if (!zf) goto L_10913dd2;
L_10913dbe: /* 10913dbe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913dc0: je 0x10913dd6 */
  if (zf) goto L_10913dd6;
L_10913dc2: /* 10913dc2: mov edx, dword ptr [0x1092f650] */
  edx = R32((uint32_t)(0x1092f650u));
/* 10913dc8: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
/* 10913dcb: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 10913dd0: jmp 0x10913e46 */
  goto L_10913e46;
L_10913dd2: /* 10913dd2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913dd4: jne 0x10913de4 */
  if (!zf) goto L_10913de4;
L_10913dd6: /* 10913dd6: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 10913dd9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913ddb: jne 0x10913de4 */
  if (!zf) goto L_10913de4;
L_10913ddd: /* 10913ddd: cmp eax, 0x29a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x29au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913de2: je 0x10913e34 */
  if (zf) goto L_10913e34;
L_10913de4: /* 10913de4: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 10913de7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10913de9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 10913dec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10913ded: call dword ptr [eax*4 + 0x10921ca8] */
  { uint32_t t = R32((uint32_t)(eax*4 + 0x10921ca8u)); esp -= 4; W32(esp, 0x10913df4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10913df4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913df7: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913dfa: je 0x10913e01 */
  if (zf) goto L_10913e01;
L_10913dfc: /* 10913dfc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913dff: jne 0x10913e08 */
  if (!zf) goto L_10913e08;
L_10913e01: /* 10913e01: mov dword ptr [esi + 4], 0x29a */
  W32((uint32_t)(esi + 0x4u), 0x29au);
L_10913e08: /* 10913e08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913e0a: je 0x10913e26 */
  if (zf) goto L_10913e26;
L_10913e0c: /* 10913e0c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913e0f: je 0x10913e26 */
  if (zf) goto L_10913e26;
L_10913e11: /* 10913e11: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913e14: jne 0x10913e34 */
  if (!zf) goto L_10913e34;
L_10913e16: /* 10913e16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10913e17: call 0x10916030 */
  esp -= 4; W32(esp, 0x10913e1cu); SPILL(); f_10916030(); if (g_unwind) return; RELOAD();
/* 10913e1c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913e1f: mov eax, edi */
  eax = edi;
/* 10913e21: call 0x109128e0 */
  esp -= 4; W32(esp, 0x10913e26u); SPILL(); f_109128e0(); if (g_unwind) return; RELOAD();
L_10913e26: /* 10913e26: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 10913e29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10913e2b: jne 0x10913e34 */
  if (!zf) goto L_10913e34;
L_10913e2d: /* 10913e2d: mov dword ptr [esi + 0x20], 0xffffffff */
  W32((uint32_t)(esi + 0x20u), 0xffffffffu);
L_10913e34: /* 10913e34: xor eax, eax */
  eax = 0;
/* 10913e36: jmp 0x10913e46 */
  goto L_10913e46;
L_10913e38: /* 10913e38: mov ecx, dword ptr [0x1092f644] */
  ecx = R32((uint32_t)(0x1092f644u));
/* 10913e3e: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
L_10913e43: /* 10913e43: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
L_10913e46: /* 10913e46: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10913e4a: cmp dword ptr [esi + 0x7c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x7cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913e4d: je 0x10913e80 */
  if (zf) goto L_10913e80;
L_10913e4f: /* 10913e4f: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 10913e52: movzx edx, word ptr [ebp + 0x10921ca2] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0x10921ca2u)));
/* 10913e59: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 10913e5c: movzx ecx, word ptr [ebp + 0x10921ca0] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0x10921ca0u)));
/* 10913e63: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 10913e69: movzx edx, word ptr [ebp + 0x10921ca4] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0x10921ca4u)));
/* 10913e70: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 10913e76: movzx ecx, word ptr [ebp + 0x10921ca6] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0x10921ca6u)));
/* 10913e7d: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
L_10913e80: /* 10913e80: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10913e84: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10913e85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10913e86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913e87: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 10913e8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913e8e: ret  */
  esp += 4; SPILL(); return;
L_10913e8f: /* 10913e8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10913e90: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10913e95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10913e96: ret  */
  esp += 4; SPILL(); return;
}

void f_10913ea0(void) {
  LOAD_REGS();
L_10913ea0: /* 10913ea0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10913ea4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10913ea5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10913ea6: xor edx, edx */
  edx = 0;
/* 10913ea8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10913ea9: xor ebp, ebp */
  ebp = 0;
/* 10913eab: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913ead: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10913eae: je 0x109140ab */
  if (zf) goto L_109140ab;
L_10913eb4: /* 10913eb4: mov ecx, dword ptr [0x1092f4fc] */
  ecx = R32((uint32_t)(0x1092f4fcu));
/* 10913eba: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 10913ebc: cmp al, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10913ebe: jne 0x109140ab */
  if (!zf) goto L_109140ab;
L_10913ec4: /* 10913ec4: cmp dword ptr [esp + 0x30], 0x38 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913ec9: jne 0x109140ab */
  if (!zf) goto L_109140ab;
L_10913ecf: /* 10913ecf: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 10913ed3: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913ed5: je 0x109140a1 */
  if (zf) goto L_109140a1;
L_10913edb: /* 10913edb: cmp dword ptr [edi + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913ede: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
/* 10913ee1: jne 0x10913eed */
  if (!zf) goto L_10913eed;
L_10913ee3: /* 10913ee3: mov dword ptr [edi + 0x20], 0x10916450 */
  W32((uint32_t)(edi + 0x20u), 0x10916450u);
/* 10913eea: mov dword ptr [edi + 0x28], edx */
  W32((uint32_t)(edi + 0x28u), edx);
L_10913eed: /* 10913eed: cmp dword ptr [edi + 0x24], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x24u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913ef0: jne 0x10913ef9 */
  if (!zf) goto L_10913ef9;
L_10913ef2: /* 10913ef2: mov dword ptr [edi + 0x24], 0x10916470 */
  W32((uint32_t)(edi + 0x24u), 0x10916470u);
L_10913ef9: /* 10913ef9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10913efd: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913f00: jne 0x10913f0e */
  if (!zf) goto L_10913f0e;
L_10913f02: /* 10913f02: mov dword ptr [esp + 0x18], 6 */
  W32((uint32_t)(esp + 0x18u), 0x6u);
/* 10913f0a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_10913f0e: /* 10913f0e: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 10913f12: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913f14: jge 0x10913f1d */
  if ((sf == of)) goto L_10913f1d;
L_10913f16: /* 10913f16: mov ebp, 1 */
  ebp = 0x1u;
/* 10913f1b: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
L_10913f1d: /* 10913f1d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 10913f21: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913f24: jl 0x109140a1 */
  if ((sf != of)) goto L_109140a1;
L_10913f2a: /* 10913f2a: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913f2d: jg 0x109140a1 */
  if ((!zf && sf == of)) goto L_109140a1;
L_10913f33: /* 10913f33: cmp dword ptr [esp + 0x1c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10913f38: jne 0x109140a1 */
  if (!zf) goto L_109140a1;
L_10913f3e: /* 10913f3e: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913f41: jl 0x109140a1 */
  if ((sf != of)) goto L_109140a1;
L_10913f47: /* 10913f47: cmp ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913f4a: jg 0x109140a1 */
  if ((!zf && sf == of)) goto L_109140a1;
L_10913f50: /* 10913f50: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913f52: jl 0x109140a1 */
  if ((sf != of)) goto L_109140a1;
L_10913f58: /* 10913f58: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913f5b: jg 0x109140a1 */
  if ((!zf && sf == of)) goto L_109140a1;
L_10913f61: /* 10913f61: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10913f65: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913f67: jl 0x109140a1 */
  if ((sf != of)) goto L_109140a1;
L_10913f6d: /* 10913f6d: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10913f70: jg 0x109140a1 */
  if ((!zf && sf == of)) goto L_109140a1;
L_10913f76: /* 10913f76: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 10913f79: push 0x16b8 */
  { uint32_t v = 0x16b8u; esp -= 4; W32(esp, v); }
/* 10913f7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10913f80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10913f81: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x10913f84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10913f84: mov esi, eax */
  esi = eax;
/* 10913f86: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10913f89: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10913f8b: je 0x10914097 */
  if (zf) goto L_10914097;
L_10913f91: /* 10913f91: mov dword ptr [edi + 0x1c], esi */
  W32((uint32_t)(edi + 0x1cu), esi);
/* 10913f94: mov dword ptr [esi + 0x18], ebp */
  W32((uint32_t)(esi + 0x18u), ebp);
/* 10913f97: mov ecx, ebx */
  ecx = ebx;
/* 10913f99: mov ebp, 1 */
  ebp = 0x1u;
/* 10913f9e: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebp = r;
  }
  }
/* 10913fa0: mov dword ptr [esi + 0x28], ebx */
  W32((uint32_t)(esi + 0x28u), ebx);
/* 10913fa3: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 10913fa7: lea ecx, [ebx + 7] */
  ecx = (uint32_t)(ebx + 0x7u);
/* 10913faa: lea eax, [ebp - 1] */
  eax = (uint32_t)(ebp + 0xffffffffu);
/* 10913fad: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 10913fb0: mov eax, 1 */
  eax = 0x1u;
/* 10913fb5: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10913fb7: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 10913fba: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10913fbd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 10913fbf: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 10913fc2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10913fc3: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 10913fc6: mov eax, 0xaaaaaaab */
  eax = 0xaaaaaaabu;
/* 10913fcb: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 10913fcd: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10913fcf: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10913fd1: mov dword ptr [esi + 0x24], ebp */
  W32((uint32_t)(esi + 0x24u), ebp);
/* 10913fd4: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 10913fd7: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 10913fda: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10913fdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10913fdc: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x10913fdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10913fdf: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 10913fe2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 10913fe4: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 10913fe7: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 10913fea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10913feb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10913fec: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x10913fefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10913fef: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 10913ff2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 10913ff4: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 10913ff7: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 10913ffa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10913ffb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10913ffc: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x10913fffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10913fff: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 10914002: lea ecx, [ebx + 6] */
  ecx = (uint32_t)(ebx + 0x6u);
/* 10914005: mov eax, 1 */
  eax = 0x1u;
/* 1091400a: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1091400c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1091400e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091400f: mov dword ptr [esi + 0x1694], eax */
  W32((uint32_t)(esi + 0x1694u), eax);
/* 10914015: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 10914018: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10914019: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x1091401cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1091401c: mov ecx, dword ptr [esi + 0x1694] */
  ecx = R32((uint32_t)(esi + 0x1694u));
/* 10914022: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 10914029: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 1091402c: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 1091402f: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10914032: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914034: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10914037: je 0x10914086 */
  if (zf) goto L_10914086;
L_10914039: /* 10914039: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 1091403c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091403e: je 0x10914086 */
  if (zf) goto L_10914086;
L_10914040: /* 10914040: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 10914043: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914045: je 0x10914086 */
  if (zf) goto L_10914086;
L_10914047: /* 10914047: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914049: je 0x10914086 */
  if (zf) goto L_10914086;
L_1091404b: /* 1091404b: mov edx, ecx */
  edx = ecx;
/* 1091404d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1091404f: lea edx, [eax + edx*2] */
  edx = (uint32_t)(eax + edx*2);
/* 10914052: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 10914055: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914057: mov dword ptr [esi + 0x169c], edx */
  W32((uint32_t)(esi + 0x169cu), edx);
/* 1091405d: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10914061: mov dword ptr [esi + 0x1690], ecx */
  W32((uint32_t)(esi + 0x1690u), ecx);
/* 10914067: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1091406b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091406c: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 1091406f: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 10914075: mov byte ptr [esi + 0x1d], 8 */
  W8((uint32_t)(esi + 0x1du), 0x8u);
/* 10914079: call 0x10913ba0 */
  esp -= 4; W32(esp, 0x1091407eu); SPILL(); f_10913ba0(); if (g_unwind) return; RELOAD();
/* 1091407e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10914081: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914082: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914083: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914084: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914085: ret  */
  esp += 4; SPILL(); return;
L_10914086: /* 10914086: mov eax, dword ptr [0x1092f64c] */
  eax = R32((uint32_t)(0x1092f64cu));
/* 1091408b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091408c: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 1091408f: call 0x10912bd0 */
  esp -= 4; W32(esp, 0x10914094u); SPILL(); f_10912bd0(); if (g_unwind) return; RELOAD();
/* 10914094: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10914097: /* 10914097: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914098: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914099: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091409a: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 1091409f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109140a0: ret  */
  esp += 4; SPILL(); return;
L_109140a1: /* 109140a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109140a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109140a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109140a4: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 109140a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109140aa: ret  */
  esp += 4; SPILL(); return;
L_109140ab: /* 109140ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109140ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109140ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109140ae: mov eax, 0xfffffffa */
  eax = 0xfffffffau;
/* 109140b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109140b4: ret  */
  esp += 4; SPILL(); return;
}

void f_109140c0(void) {
  LOAD_REGS();
L_109140c0: /* 109140c0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109140c4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 109140c8: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 109140cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109140cd: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 109140d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109140d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109140d4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 109140d6: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 109140d8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 109140da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109140db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109140dc: call 0x10913ea0 */
  esp -= 4; W32(esp, 0x109140e1u); SPILL(); f_10913ea0(); if (g_unwind) return; RELOAD();
/* 109140e1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109140e4: ret  */
  esp += 4; SPILL(); return;
}

void f_109140f0(void) {
  LOAD_REGS();
L_109140f0: /* 109140f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 109140f4: xor edx, edx */
  edx = 0;
/* 109140f6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109140f8: je 0x1091412c */
  if (zf) goto L_1091412c;
L_109140fa: /* 109140fa: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 109140fd: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109140ff: je 0x1091412c */
  if (zf) goto L_1091412c;
L_10914101: /* 10914101: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914102: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10914105: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 10914108: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 1091410b: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* 1091410e: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 10914110: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 10914112: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10914113: and esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 10914116: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 10914118: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10914119: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 1091411c: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091411f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10914120: call 0x10916480 */
  esp -= 4; W32(esp, 0x10914125u); SPILL(); f_10916480(); if (g_unwind) return; RELOAD();
/* 10914125: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10914128: xor eax, eax */
  eax = 0;
/* 1091412a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091412b: ret  */
  esp += 4; SPILL(); return;
L_1091412c: /* 1091412c: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10914131: ret  */
  esp += 4; SPILL(); return;
}

void f_10914140(void) {
  LOAD_REGS();
L_10914140: /* 10914140: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914141: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 10914145: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914147: je 0x10914181 */
  if (zf) goto L_10914181;
L_10914149: /* 10914149: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091414c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091414e: je 0x10914181 */
  if (zf) goto L_10914181;
L_10914150: /* 10914150: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 10914153: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914155: je 0x10914181 */
  if (zf) goto L_10914181;
L_10914157: /* 10914157: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 1091415a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091415c: je 0x10914168 */
  if (zf) goto L_10914168;
L_1091415e: /* 1091415e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091415f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10914160: call 0x10917110 */
  esp -= 4; W32(esp, 0x10914165u); SPILL(); f_10917110(); if (g_unwind) return; RELOAD();
/* 10914165: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10914168: /* 10914168: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091416b: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 1091416e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091416f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10914170: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10914173u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10914173: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10914176: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* 1091417d: xor eax, eax */
  eax = 0;
/* 1091417f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914180: ret  */
  esp += 4; SPILL(); return;
L_10914181: /* 10914181: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10914186: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914187: ret  */
  esp += 4; SPILL(); return;
}

void f_10914190(void) {
  LOAD_REGS();
L_10914190: /* 10914190: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 10914194: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914195: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10914196: xor edi, edi */
  edi = 0;
/* 10914198: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091419a: je 0x10914288 */
  if (zf) goto L_10914288;
L_109141a0: /* 109141a0: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 109141a2: cmp al, byte ptr [0x1092f500] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(0x1092f500u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 109141a8: jne 0x10914288 */
  if (!zf) goto L_10914288;
L_109141ae: /* 109141ae: cmp dword ptr [esp + 0x18], 0x38 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109141b3: jne 0x10914288 */
  if (!zf) goto L_10914288;
L_109141b9: /* 109141b9: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 109141bd: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109141bf: je 0x10914280 */
  if (zf) goto L_10914280;
L_109141c5: /* 109141c5: cmp dword ptr [esi + 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x20u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109141c8: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 109141cb: jne 0x109141d7 */
  if (!zf) goto L_109141d7;
L_109141cd: /* 109141cd: mov dword ptr [esi + 0x20], 0x10916450 */
  W32((uint32_t)(esi + 0x20u), 0x10916450u);
/* 109141d4: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
L_109141d7: /* 109141d7: cmp dword ptr [esi + 0x24], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109141da: jne 0x109141e3 */
  if (!zf) goto L_109141e3;
L_109141dc: /* 109141dc: mov dword ptr [esi + 0x24], 0x10916470 */
  W32((uint32_t)(esi + 0x24u), 0x10916470u);
L_109141e3: /* 109141e3: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 109141e6: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 109141e8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109141ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109141eb: call dword ptr [esi + 0x20] */
  { uint32_t t = R32((uint32_t)(esi + 0x20u)); esp -= 4; W32(esp, 0x109141eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109141ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109141f1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109141f3: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 109141f6: je 0x10914262 */
  if (zf) goto L_10914262;
L_109141f8: /* 109141f8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109141fc: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109141fe: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
/* 10914201: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 10914204: mov dword ptr [edx + 0xc], edi */
  W32((uint32_t)(edx + 0xcu), edi);
/* 10914207: jge 0x10914215 */
  if ((sf == of)) goto L_10914215;
L_10914209: /* 10914209: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091420c: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 1091420e: mov dword ptr [eax + 0xc], 1 */
  W32((uint32_t)(eax + 0xcu), 0x1u);
L_10914215: /* 10914215: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914218: jl 0x10914277 */
  if ((sf != of)) goto L_10914277;
L_1091421a: /* 1091421a: cmp ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091421d: jg 0x10914277 */
  if ((!zf && sf == of)) goto L_10914277;
L_1091421f: /* 1091421f: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 10914222: mov dword ptr [edx + 0x10], ecx */
  W32((uint32_t)(edx + 0x10u), ecx);
/* 10914225: mov eax, 1 */
  eax = 0x1u;
/* 1091422a: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1091422c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1091422f: xor edx, edx */
  edx = 0;
/* 10914231: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10914232: cmp dword ptr [ecx + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914235: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 10914238: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10914239: and edx, 0x10914840 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10914840u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1091423f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10914240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914241: call 0x10916500 */
  esp -= 4; W32(esp, 0x10914246u); SPILL(); f_10916500(); if (g_unwind) return; RELOAD();
/* 10914246: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 10914249: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 1091424c: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 1091424f: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 10914252: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10914255: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914257: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914258: jne 0x1091426a */
  if (!zf) goto L_1091426a;
L_1091425a: /* 1091425a: call 0x10914140 */
  esp -= 4; W32(esp, 0x1091425fu); SPILL(); f_10914140(); if (g_unwind) return; RELOAD();
/* 1091425f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10914262: /* 10914262: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914263: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* 10914268: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914269: ret  */
  esp += 4; SPILL(); return;
L_1091426a: /* 1091426a: call 0x109140f0 */
  esp -= 4; W32(esp, 0x1091426fu); SPILL(); f_109140f0(); if (g_unwind) return; RELOAD();
/* 1091426f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10914272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914273: xor eax, eax */
  eax = 0;
/* 10914275: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914276: ret  */
  esp += 4; SPILL(); return;
L_10914277: /* 10914277: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914278: call 0x10914140 */
  esp -= 4; W32(esp, 0x1091427du); SPILL(); f_10914140(); if (g_unwind) return; RELOAD();
/* 1091427d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10914280: /* 10914280: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914281: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10914286: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914287: ret  */
  esp += 4; SPILL(); return;
L_10914288: /* 10914288: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914289: mov eax, 0xfffffffa */
  eax = 0xfffffffau;
/* 1091428e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091428f: ret  */
  esp += 4; SPILL(); return;
}

void f_10914290(void) {
  LOAD_REGS();
L_10914290: /* 10914290: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 10914294: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10914298: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 1091429c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091429d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091429e: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 109142a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109142a1: call 0x10914190 */
  esp -= 4; W32(esp, 0x109142a6u); SPILL(); f_10914190(); if (g_unwind) return; RELOAD();
/* 109142a6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109142a9: ret  */
  esp += 4; SPILL(); return;
}

void f_109142b0(void) {
  LOAD_REGS();
L_109142b0: /* 109142b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109142b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109142b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109142b3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 109142b7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109142b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109142ba: je 0x10914548 */
  if (zf) goto L_10914548;
L_109142c0: /* 109142c0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109142c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109142c5: je 0x10914548 */
  if (zf) goto L_10914548;
L_109142cb: /* 109142cb: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109142ce: je 0x10914548 */
  if (zf) goto L_10914548;
L_109142d4: /* 109142d4: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 109142d8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 109142da: xor ecx, ecx */
  ecx = 0;
/* 109142dc: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109142df: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 109142e2: mov edi, 0xfffffffb */
  edi = 0xfffffffbu;
/* 109142e7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109142e8: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109142eb: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109142ee: mov ebp, ecx */
  ebp = ecx;
/* 109142f0: ja 0x10914548 */
  if ((!cf && !zf)) goto L_10914548;
L_109142f6: /* 109142f6: mov ebx, 5 */
  ebx = 0x5u;
/* 109142fb: jmp 0x10914300 */
  goto L_10914300;
L_10914300: /* 10914300: jmp dword ptr [eax*4 + 0x1091466c] */
  switch (R32((uint32_t)(eax*4 + 0x1091466cu))) {
    case 0x10914307u: goto L_10914307;
    case 0x1091437du: goto L_1091437d;
    case 0x109143e8u: goto L_109143e8;
    case 0x10914458u: goto L_10914458;
    case 0x1091448cu: goto L_1091448c;
    case 0x109144c1u: goto L_109144c1;
    case 0x109144f7u: goto L_109144f7;
    case 0x10914562u: goto L_10914562;
    case 0x10914592u: goto L_10914592;
    case 0x109145c4u: goto L_109145c4;
    case 0x109145eeu: goto L_109145ee;
    case 0x1091462au: goto L_1091462a;
    case 0x10914657u: goto L_10914657;
    case 0x10914661u: goto L_10914661;
    default: guest_badjump(0x10914300, R32((uint32_t)(eax*4 + 0x1091466cu))); return;
  }
L_10914307: /* 10914307: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1091430a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091430c: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914312: /* 10914312: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10914315: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 10914318: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914319: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091431a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 1091431d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1091431f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10914322: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 10914325: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 10914328: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091432b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1091432e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10914330: and dl, 0xf */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914333: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914334: cmp dl, 8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10914337: mov edi, ebp */
  edi = ebp;
/* 10914339: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 1091433b: je 0x10914355 */
  if (zf) goto L_10914355;
L_1091433d: /* 1091433d: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 10914343: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914346: mov dword ptr [esi + 0x18], 0x1092f508 */
  W32((uint32_t)(esi + 0x18u), 0x1092f508u);
/* 1091434d: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 10914350: jmp 0x1091453a */
  goto L_1091453a;
L_10914355: /* 10914355: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 10914358: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 1091435b: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1091435e: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914361: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10914363: jbe 0x10914377 */
  if ((cf | zf)) goto L_10914377;
L_10914365: /* 10914365: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 1091436b: mov dword ptr [esi + 0x18], 0x1092f524 */
  W32((uint32_t)(esi + 0x18u), 0x1092f524u);
/* 10914372: jmp 0x10914534 */
  goto L_10914534;
L_10914377: /* 10914377: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_1091437d: /* 1091437d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10914380: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914382: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914388: /* 10914388: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1091438b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091438c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 1091438f: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 10914392: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10914394: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 10914397: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10914398: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1091439a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1091439d: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 109143a0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109143a2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 109143a6: xor edx, edx */
  edx = 0;
/* 109143a8: mov ebx, 0x1f */
  ebx = 0x1fu;
/* 109143ad: div ebx */
  { uint32_t d = ebx; if (!d) d = guest_divzero(0x109143ad);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 109143af: mov edi, ebp */
  edi = ebp;
/* 109143b1: mov ebx, 5 */
  ebx = 0x5u;
/* 109143b6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109143b8: je 0x109143d2 */
  if (zf) goto L_109143d2;
L_109143ba: /* 109143ba: mov dword ptr [ecx], 0xd */
  W32((uint32_t)(ecx), 0xdu);
/* 109143c0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109143c3: mov dword ptr [esi + 0x18], 0x1092f538 */
  W32((uint32_t)(esi + 0x18u), 0x1092f538u);
/* 109143ca: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 109143cd: jmp 0x1091453a */
  goto L_1091453a;
L_109143d2: /* 109143d2: test byte ptr [esp + 0x14], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x14u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109143d7: jne 0x10914559 */
  if (!zf) goto L_10914559;
L_109143dd: /* 109143dd: mov dword ptr [ecx], 7 */
  W32((uint32_t)(ecx), 0x7u);
/* 109143e3: jmp 0x1091453a */
  goto L_1091453a;
L_109143e8: /* 109143e8: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 109143eb: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 109143ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109143ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109143f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109143f1: call 0x109165a0 */
  esp -= 4; W32(esp, 0x109143f6u); SPILL(); f_109165a0(); if (g_unwind) return; RELOAD();
/* 109143f6: mov edi, eax */
  edi = eax;
/* 109143f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109143fb: cmp edi, -3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109143fe: jne 0x10914418 */
  if (!zf) goto L_10914418;
L_10914400: /* 10914400: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914403: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 10914409: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1091440c: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 10914413: jmp 0x1091453a */
  goto L_1091453a;
L_10914418: /* 10914418: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091441a: jne 0x1091441e */
  if (!zf) goto L_1091441e;
L_1091441c: /* 1091441c: mov edi, ebp */
  edi = ebp;
L_1091441e: /* 1091441e: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914421: jne 0x10914552 */
  if (!zf) goto L_10914552;
L_10914427: /* 10914427: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091442a: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 1091442d: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 10914430: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10914431: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914432: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10914433: mov edi, ebp */
  edi = ebp;
/* 10914435: call 0x10916480 */
  esp -= 4; W32(esp, 0x1091443au); SPILL(); f_10916480(); if (g_unwind) return; RELOAD();
/* 1091443a: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091443d: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 10914440: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10914443: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914445: je 0x10914452 */
  if (zf) goto L_10914452;
L_10914447: /* 10914447: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 1091444d: jmp 0x1091453a */
  goto L_1091453a;
L_10914452: /* 10914452: mov dword ptr [eax], 8 */
  W32((uint32_t)(eax), 0x8u);
L_10914458: /* 10914458: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1091445b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091445d: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914463: /* 10914463: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10914466: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10914468: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914469: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 1091446c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091446f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914470: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10914473: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 10914476: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10914479: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 1091447c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1091447e: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 10914481: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10914482: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 10914484: mov edi, ebp */
  edi = ebp;
/* 10914486: mov dword ptr [ecx], 9 */
  W32((uint32_t)(ecx), 0x9u);
L_1091448c: /* 1091448c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1091448f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914491: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914497: /* 10914497: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10914499: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091449a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 1091449d: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 109144a0: movzx ecx, byte ptr [edx] */
  ecx = (uint32_t)(R8((uint32_t)(edx)));
/* 109144a3: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109144a6: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109144a9: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 109144ac: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109144ae: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 109144b1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 109144b3: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 109144b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 109144b7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 109144b9: mov edi, ebp */
  edi = ebp;
/* 109144bb: mov dword ptr [edx], 0xa */
  W32((uint32_t)(edx), 0xau);
L_109144c1: /* 109144c1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 109144c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109144c6: je 0x10914552 */
  if (zf) goto L_10914552;
L_109144cc: /* 109144cc: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 109144cf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109144d1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109144d2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 109144d5: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109144d8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109144d9: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 109144dc: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 109144df: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109144e2: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 109144e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109144e7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 109144ea: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 109144ec: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109144ef: mov edi, ebp */
  edi = ebp;
/* 109144f1: mov dword ptr [eax], 0xb */
  W32((uint32_t)(eax), 0xbu);
L_109144f7: /* 109144f7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 109144fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109144fc: je 0x10914552 */
  if (zf) goto L_10914552;
L_109144fe: /* 109144fe: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10914501: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10914503: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914504: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10914507: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091450a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091450b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 1091450e: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 10914511: add dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 10914514: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 10914516: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914519: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1091451c: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091451f: mov edi, ebp */
  edi = ebp;
/* 10914521: je 0x1091464e */
  if (zf) goto L_1091464e;
L_10914527: /* 10914527: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 1091452d: mov dword ptr [esi + 0x18], 0x1092f560 */
  W32((uint32_t)(esi + 0x18u), 0x1092f560u);
L_10914534: /* 10914534: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 10914537: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
L_1091453a: /* 1091453a: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091453d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1091453f: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10914542: jbe 0x10914300 */
  if ((cf | zf)) goto L_10914300;
L_10914548: /* 10914548: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914549: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091454a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091454b: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10914550: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914551: ret  */
  esp += 4; SPILL(); return;
L_10914552: /* 10914552: mov eax, edi */
  eax = edi;
/* 10914554: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914555: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914556: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914557: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914558: ret  */
  esp += 4; SPILL(); return;
L_10914559: /* 10914559: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1091455c: mov dword ptr [ecx], 2 */
  W32((uint32_t)(ecx), 0x2u);
L_10914562: /* 10914562: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10914565: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914567: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914569: /* 10914569: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 1091456c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1091456f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914570: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914571: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10914574: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10914576: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10914579: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 1091457c: shl eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1091457f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 10914582: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10914584: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 10914587: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10914588: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1091458a: mov edi, ebp */
  edi = ebp;
/* 1091458c: mov dword ptr [edx], 3 */
  W32((uint32_t)(edx), 0x3u);
L_10914592: /* 10914592: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10914595: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914597: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914599: /* 10914599: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 1091459c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1091459e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091459f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 109145a2: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109145a5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109145a6: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 109145a9: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 109145ac: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109145af: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 109145b2: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109145b4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 109145b7: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 109145b9: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109145bc: mov edi, ebp */
  edi = ebp;
/* 109145be: mov dword ptr [eax], 4 */
  W32((uint32_t)(eax), 0x4u);
L_109145c4: /* 109145c4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 109145c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109145c9: je 0x10914552 */
  if (zf) goto L_10914552;
L_109145cb: /* 109145cb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109145cd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109145ce: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 109145d1: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 109145d4: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 109145d7: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109145da: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109145dd: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 109145e0: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109145e2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 109145e5: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 109145e7: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109145ea: mov edi, ebp */
  edi = ebp;
/* 109145ec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_109145ee: /* 109145ee: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 109145f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109145f3: je 0x10914552 */
  if (zf) goto L_10914552;
L_109145f9: /* 109145f9: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 109145fc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109145fe: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109145ff: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10914602: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914605: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914606: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10914609: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 1091460c: add dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 1091460f: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 10914611: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914614: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914617: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914618: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 1091461b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091461c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091461d: mov dword ptr [eax], 6 */
  W32((uint32_t)(eax), 0x6u);
/* 10914623: mov eax, 2 */
  eax = 0x2u;
/* 10914628: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914629: ret  */
  esp += 4; SPILL(); return;
L_1091462a: /* 1091462a: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 1091462d: mov dword ptr [edx], 0xd */
  W32((uint32_t)(edx), 0xdu);
/* 10914633: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914636: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914637: mov dword ptr [esi + 0x18], 0x1092f550 */
  W32((uint32_t)(esi + 0x18u), 0x1092f550u);
/* 1091463e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091463f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914640: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 10914647: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 1091464c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091464d: ret  */
  esp += 4; SPILL(); return;
L_1091464e: /* 1091464e: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 10914651: mov dword ptr [ecx], 0xc */
  W32((uint32_t)(ecx), 0xcu);
L_10914657: /* 10914657: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914658: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914659: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091465a: mov eax, 1 */
  eax = 0x1u;
/* 1091465f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914660: ret  */
  esp += 4; SPILL(); return;
L_10914661: /* 10914661: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914662: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914663: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914664: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10914669: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091466a: ret  */
  esp += 4; SPILL(); return;
}

void f_109142fd(void) {
  LOAD_REGS();
L_109142fd: /* 109142fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10914300: /* 10914300: jmp dword ptr [eax*4 + 0x1091466c] */
  switch (R32((uint32_t)(eax*4 + 0x1091466cu))) {
    case 0x10914307u: goto L_10914307;
    case 0x1091437du: goto L_1091437d;
    case 0x109143e8u: goto L_109143e8;
    case 0x10914458u: goto L_10914458;
    case 0x1091448cu: goto L_1091448c;
    case 0x109144c1u: goto L_109144c1;
    case 0x109144f7u: goto L_109144f7;
    case 0x10914562u: goto L_10914562;
    case 0x10914592u: goto L_10914592;
    case 0x109145c4u: goto L_109145c4;
    case 0x109145eeu: goto L_109145ee;
    case 0x1091462au: goto L_1091462a;
    case 0x10914657u: goto L_10914657;
    case 0x10914661u: goto L_10914661;
    default: guest_badjump(0x10914300, R32((uint32_t)(eax*4 + 0x1091466cu))); return;
  }
L_10914307: /* 10914307: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1091430a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091430c: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914312: /* 10914312: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10914315: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 10914318: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914319: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091431a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 1091431d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1091431f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10914322: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 10914325: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 10914328: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091432b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1091432e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10914330: and dl, 0xf */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914333: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914334: cmp dl, 8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10914337: mov edi, ebp */
  edi = ebp;
/* 10914339: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 1091433b: je 0x10914355 */
  if (zf) goto L_10914355;
L_1091433d: /* 1091433d: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 10914343: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914346: mov dword ptr [esi + 0x18], 0x1092f508 */
  W32((uint32_t)(esi + 0x18u), 0x1092f508u);
/* 1091434d: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 10914350: jmp 0x1091453a */
  goto L_1091453a;
L_10914355: /* 10914355: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 10914358: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 1091435b: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1091435e: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914361: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10914363: jbe 0x10914377 */
  if ((cf | zf)) goto L_10914377;
L_10914365: /* 10914365: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 1091436b: mov dword ptr [esi + 0x18], 0x1092f524 */
  W32((uint32_t)(esi + 0x18u), 0x1092f524u);
/* 10914372: jmp 0x10914534 */
  goto L_10914534;
L_10914377: /* 10914377: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_1091437d: /* 1091437d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10914380: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914382: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914388: /* 10914388: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1091438b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091438c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 1091438f: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 10914392: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10914394: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 10914397: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10914398: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1091439a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1091439d: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 109143a0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109143a2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 109143a6: xor edx, edx */
  edx = 0;
/* 109143a8: mov ebx, 0x1f */
  ebx = 0x1fu;
/* 109143ad: div ebx */
  { uint32_t d = ebx; if (!d) d = guest_divzero(0x109143ad);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 109143af: mov edi, ebp */
  edi = ebp;
/* 109143b1: mov ebx, 5 */
  ebx = 0x5u;
/* 109143b6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109143b8: je 0x109143d2 */
  if (zf) goto L_109143d2;
L_109143ba: /* 109143ba: mov dword ptr [ecx], 0xd */
  W32((uint32_t)(ecx), 0xdu);
/* 109143c0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109143c3: mov dword ptr [esi + 0x18], 0x1092f538 */
  W32((uint32_t)(esi + 0x18u), 0x1092f538u);
/* 109143ca: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 109143cd: jmp 0x1091453a */
  goto L_1091453a;
L_109143d2: /* 109143d2: test byte ptr [esp + 0x14], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x14u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109143d7: jne 0x10914559 */
  if (!zf) goto L_10914559;
L_109143dd: /* 109143dd: mov dword ptr [ecx], 7 */
  W32((uint32_t)(ecx), 0x7u);
/* 109143e3: jmp 0x1091453a */
  goto L_1091453a;
L_109143e8: /* 109143e8: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 109143eb: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 109143ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109143ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109143f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109143f1: call 0x109165a0 */
  esp -= 4; W32(esp, 0x109143f6u); SPILL(); f_109165a0(); if (g_unwind) return; RELOAD();
/* 109143f6: mov edi, eax */
  edi = eax;
/* 109143f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109143fb: cmp edi, -3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109143fe: jne 0x10914418 */
  if (!zf) goto L_10914418;
L_10914400: /* 10914400: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914403: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 10914409: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1091440c: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 10914413: jmp 0x1091453a */
  goto L_1091453a;
L_10914418: /* 10914418: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091441a: jne 0x1091441e */
  if (!zf) goto L_1091441e;
L_1091441c: /* 1091441c: mov edi, ebp */
  edi = ebp;
L_1091441e: /* 1091441e: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914421: jne 0x10914552 */
  if (!zf) goto L_10914552;
L_10914427: /* 10914427: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091442a: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 1091442d: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 10914430: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10914431: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914432: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10914433: mov edi, ebp */
  edi = ebp;
/* 10914435: call 0x10916480 */
  esp -= 4; W32(esp, 0x1091443au); SPILL(); f_10916480(); if (g_unwind) return; RELOAD();
/* 1091443a: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091443d: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 10914440: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10914443: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914445: je 0x10914452 */
  if (zf) goto L_10914452;
L_10914447: /* 10914447: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 1091444d: jmp 0x1091453a */
  goto L_1091453a;
L_10914452: /* 10914452: mov dword ptr [eax], 8 */
  W32((uint32_t)(eax), 0x8u);
L_10914458: /* 10914458: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1091445b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091445d: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914463: /* 10914463: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10914466: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10914468: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914469: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 1091446c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091446f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914470: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10914473: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 10914476: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10914479: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 1091447c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1091447e: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 10914481: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10914482: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 10914484: mov edi, ebp */
  edi = ebp;
/* 10914486: mov dword ptr [ecx], 9 */
  W32((uint32_t)(ecx), 0x9u);
L_1091448c: /* 1091448c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1091448f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914491: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914497: /* 10914497: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10914499: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091449a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 1091449d: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 109144a0: movzx ecx, byte ptr [edx] */
  ecx = (uint32_t)(R8((uint32_t)(edx)));
/* 109144a3: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109144a6: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109144a9: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 109144ac: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109144ae: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 109144b1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 109144b3: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 109144b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 109144b7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 109144b9: mov edi, ebp */
  edi = ebp;
/* 109144bb: mov dword ptr [edx], 0xa */
  W32((uint32_t)(edx), 0xau);
L_109144c1: /* 109144c1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 109144c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109144c6: je 0x10914552 */
  if (zf) goto L_10914552;
L_109144cc: /* 109144cc: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 109144cf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109144d1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109144d2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 109144d5: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109144d8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109144d9: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 109144dc: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 109144df: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109144e2: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 109144e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109144e7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 109144ea: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 109144ec: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109144ef: mov edi, ebp */
  edi = ebp;
/* 109144f1: mov dword ptr [eax], 0xb */
  W32((uint32_t)(eax), 0xbu);
L_109144f7: /* 109144f7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 109144fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109144fc: je 0x10914552 */
  if (zf) goto L_10914552;
L_109144fe: /* 109144fe: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10914501: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10914503: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914504: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10914507: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091450a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091450b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 1091450e: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 10914511: add dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 10914514: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 10914516: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914519: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1091451c: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091451f: mov edi, ebp */
  edi = ebp;
/* 10914521: je 0x1091464e */
  if (zf) goto L_1091464e;
L_10914527: /* 10914527: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 1091452d: mov dword ptr [esi + 0x18], 0x1092f560 */
  W32((uint32_t)(esi + 0x18u), 0x1092f560u);
L_10914534: /* 10914534: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 10914537: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
L_1091453a: /* 1091453a: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1091453d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1091453f: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10914542: jbe 0x10914300 */
  if ((cf | zf)) goto L_10914300;
L_10914548: /* 10914548: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914549: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091454a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091454b: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10914550: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914551: ret  */
  esp += 4; SPILL(); return;
L_10914552: /* 10914552: mov eax, edi */
  eax = edi;
/* 10914554: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914555: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914556: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914557: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914558: ret  */
  esp += 4; SPILL(); return;
L_10914559: /* 10914559: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1091455c: mov dword ptr [ecx], 2 */
  W32((uint32_t)(ecx), 0x2u);
L_10914562: /* 10914562: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10914565: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914567: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914569: /* 10914569: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 1091456c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1091456f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914570: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914571: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10914574: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10914576: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10914579: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 1091457c: shl eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1091457f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 10914582: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10914584: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 10914587: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10914588: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1091458a: mov edi, ebp */
  edi = ebp;
/* 1091458c: mov dword ptr [edx], 3 */
  W32((uint32_t)(edx), 0x3u);
L_10914592: /* 10914592: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10914595: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914597: je 0x10914552 */
  if (zf) goto L_10914552;
L_10914599: /* 10914599: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 1091459c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1091459e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091459f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 109145a2: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109145a5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109145a6: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 109145a9: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 109145ac: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109145af: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 109145b2: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109145b4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 109145b7: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 109145b9: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109145bc: mov edi, ebp */
  edi = ebp;
/* 109145be: mov dword ptr [eax], 4 */
  W32((uint32_t)(eax), 0x4u);
L_109145c4: /* 109145c4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 109145c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109145c9: je 0x10914552 */
  if (zf) goto L_10914552;
L_109145cb: /* 109145cb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109145cd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109145ce: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 109145d1: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 109145d4: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 109145d7: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109145da: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109145dd: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 109145e0: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109145e2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 109145e5: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 109145e7: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109145ea: mov edi, ebp */
  edi = ebp;
/* 109145ec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_109145ee: /* 109145ee: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 109145f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109145f3: je 0x10914552 */
  if (zf) goto L_10914552;
L_109145f9: /* 109145f9: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 109145fc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109145fe: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109145ff: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10914602: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914605: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914606: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10914609: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 1091460c: add dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 1091460f: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 10914611: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914614: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914617: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914618: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 1091461b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091461c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091461d: mov dword ptr [eax], 6 */
  W32((uint32_t)(eax), 0x6u);
/* 10914623: mov eax, 2 */
  eax = 0x2u;
/* 10914628: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914629: ret  */
  esp += 4; SPILL(); return;
L_1091462a: /* 1091462a: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 1091462d: mov dword ptr [edx], 0xd */
  W32((uint32_t)(edx), 0xdu);
/* 10914633: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914636: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914637: mov dword ptr [esi + 0x18], 0x1092f550 */
  W32((uint32_t)(esi + 0x18u), 0x1092f550u);
/* 1091463e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091463f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914640: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 10914647: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 1091464c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091464d: ret  */
  esp += 4; SPILL(); return;
L_1091464e: /* 1091464e: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 10914651: mov dword ptr [ecx], 0xc */
  W32((uint32_t)(ecx), 0xcu);
L_10914657: /* 10914657: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914658: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914659: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091465a: mov eax, 1 */
  eax = 0x1u;
/* 1091465f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914660: ret  */
  esp += 4; SPILL(); return;
L_10914661: /* 10914661: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914662: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914663: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914664: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 10914669: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091466a: ret  */
  esp += 4; SPILL(); return;
}

void f_109146b0(void) {
  LOAD_REGS();
L_109146b0: /* 109146b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109146b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109146b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109146b3: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 109146b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109146b8: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 109146bc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109146be: mov ebx, esi */
  ebx = esi;
/* 109146c0: je 0x10914728 */
  if (zf) goto L_10914728;
L_109146c2: /* 109146c2: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 109146c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109146c7: je 0x10914728 */
  if (zf) goto L_10914728;
L_109146c9: /* 109146c9: cmp dword ptr [eax], 6 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109146cc: jne 0x10914728 */
  if (!zf) goto L_10914728;
L_109146ce: /* 109146ce: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 109146d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109146d3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109146d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109146d6: call 0x10914840 */
  esp -= 4; W32(esp, 0x109146dbu); SPILL(); f_10914840(); if (g_unwind) return; RELOAD();
/* 109146db: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 109146de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109146e1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109146e3: je 0x109146ef */
  if (zf) goto L_109146ef;
L_109146e5: /* 109146e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109146e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109146e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109146e8: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 109146ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109146ee: ret  */
  esp += 4; SPILL(); return;
L_109146ef: /* 109146ef: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 109146f2: mov eax, 1 */
  eax = 0x1u;
/* 109146f7: mov dword ptr [edi + 0x30], eax */
  W32((uint32_t)(edi + 0x30u), eax);
/* 109146fa: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 109146fd: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 109146ff: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10914701: jb 0x1091470a */
  if (cf) goto L_1091470a;
L_10914703: /* 10914703: lea ebx, [eax - 1] */
  ebx = (uint32_t)(eax + 0xffffffffu);
/* 10914706: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10914708: add ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
L_1091470a: /* 1091470a: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 1091470d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091470e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1091470f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10914710: call 0x10917150 */
  esp -= 4; W32(esp, 0x10914715u); SPILL(); f_10917150(); if (g_unwind) return; RELOAD();
/* 10914715: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 10914718: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091471b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091471c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091471d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091471e: mov dword ptr [ecx], 7 */
  W32((uint32_t)(ecx), 0x7u);
/* 10914724: xor eax, eax */
  eax = 0;
/* 10914726: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914727: ret  */
  esp += 4; SPILL(); return;
L_10914728: /* 10914728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091472a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091472b: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10914730: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914731: ret  */
  esp += 4; SPILL(); return;
}

void f_10914740(void) {
  LOAD_REGS();
L_10914740: /* 10914740: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10914741: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10914742: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914743: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 10914747: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914749: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091474a: je 0x109147ff */
  if (zf) goto L_109147ff;
L_10914750: /* 10914750: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914753: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914755: je 0x109147ff */
  if (zf) goto L_109147ff;
L_1091475b: /* 1091475b: cmp dword ptr [eax], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091475e: je 0x10914770 */
  if (zf) goto L_10914770;
L_10914760: /* 10914760: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 10914766: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10914769: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
L_10914770: /* 10914770: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 10914773: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914775: jne 0x10914781 */
  if (!zf) goto L_10914781;
L_10914777: /* 10914777: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914778: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914779: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091477a: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* 1091477f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914780: ret  */
  esp += 4; SPILL(); return;
L_10914781: /* 10914781: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 10914783: mov ebx, dword ptr [esi + 0x1c] */
  ebx = R32((uint32_t)(esi + 0x1cu));
/* 10914786: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10914789: mov ecx, edi */
  ecx = edi;
/* 1091478b: jmp 0x10914790 */
  goto L_10914790;
L_10914790: /* 10914790: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10914793: jae 0x109147b7 */
  if (!cf) goto L_109147b7;
L_10914795: /* 10914795: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 10914797: cmp dl, byte ptr [eax + 0x10921d18] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x10921d18u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 1091479d: jne 0x109147a2 */
  if (!zf) goto L_109147a2;
L_1091479f: /* 1091479f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 109147a0: jmp 0x109147b3 */
  goto L_109147b3;
L_109147a2: /* 109147a2: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109147a4: je 0x109147aa */
  if (zf) goto L_109147aa;
L_109147a6: /* 109147a6: xor eax, eax */
  eax = 0;
/* 109147a8: jmp 0x109147b3 */
  goto L_109147b3;
L_109147aa: /* 109147aa: mov edx, 4 */
  edx = 0x4u;
/* 109147af: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109147b1: mov eax, edx */
  eax = edx;
L_109147b3: /* 109147b3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109147b4: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 109147b5: jne 0x10914790 */
  if (!zf) goto L_10914790;
L_109147b7: /* 109147b7: mov edx, ecx */
  edx = ecx;
/* 109147b9: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109147bb: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 109147be: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109147c0: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109147c3: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 109147c6: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 109147c8: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 109147cb: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 109147ce: je 0x109147da */
  if (zf) goto L_109147da;
L_109147d0: /* 109147d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109147d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109147d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109147d3: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 109147d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109147d9: ret  */
  esp += 4; SPILL(); return;
L_109147da: /* 109147da: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 109147dd: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 109147e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109147e1: call 0x109140f0 */
  esp -= 4; W32(esp, 0x109147e6u); SPILL(); f_109140f0(); if (g_unwind) return; RELOAD();
/* 109147e6: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109147e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109147ec: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 109147ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109147f0: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 109147f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109147f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109147f5: mov dword ptr [eax], 7 */
  W32((uint32_t)(eax), 0x7u);
/* 109147fb: xor eax, eax */
  eax = 0;
/* 109147fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109147fe: ret  */
  esp += 4; SPILL(); return;
L_109147ff: /* 109147ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914800: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914801: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914802: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10914807: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914808: ret  */
  esp += 4; SPILL(); return;
}

void f_1091478d(void) {
  LOAD_REGS();
L_1091478d: /* 1091478d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10914790: /* 10914790: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10914793: jae 0x109147b7 */
  if (!cf) goto L_109147b7;
L_10914795: /* 10914795: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 10914797: cmp dl, byte ptr [eax + 0x10921d18] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x10921d18u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 1091479d: jne 0x109147a2 */
  if (!zf) goto L_109147a2;
L_1091479f: /* 1091479f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 109147a0: jmp 0x109147b3 */
  goto L_109147b3;
L_109147a2: /* 109147a2: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109147a4: je 0x109147aa */
  if (zf) goto L_109147aa;
L_109147a6: /* 109147a6: xor eax, eax */
  eax = 0;
/* 109147a8: jmp 0x109147b3 */
  goto L_109147b3;
L_109147aa: /* 109147aa: mov edx, 4 */
  edx = 0x4u;
/* 109147af: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109147b1: mov eax, edx */
  eax = edx;
L_109147b3: /* 109147b3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109147b4: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 109147b5: jne 0x10914790 */
  if (!zf) goto L_10914790;
L_109147b7: /* 109147b7: mov edx, ecx */
  edx = ecx;
/* 109147b9: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109147bb: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 109147be: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109147c0: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109147c3: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 109147c6: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 109147c8: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 109147cb: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 109147ce: je 0x109147da */
  if (zf) goto L_109147da;
L_109147d0: /* 109147d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109147d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109147d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109147d3: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 109147d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109147d9: ret  */
  esp += 4; SPILL(); return;
L_109147da: /* 109147da: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 109147dd: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 109147e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109147e1: call 0x109140f0 */
  esp -= 4; W32(esp, 0x109147e6u); SPILL(); f_109140f0(); if (g_unwind) return; RELOAD();
/* 109147e6: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 109147e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109147ec: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 109147ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109147f0: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 109147f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109147f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109147f5: mov dword ptr [eax], 7 */
  W32((uint32_t)(eax), 0x7u);
/* 109147fb: xor eax, eax */
  eax = 0;
/* 109147fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109147fe: ret  */
  esp += 4; SPILL(); return;
}

void f_10914810(void) {
  LOAD_REGS();
L_10914810: /* 10914810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10914814: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914816: je 0x1091482f */
  if (zf) goto L_1091482f;
L_10914818: /* 10914818: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 1091481b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091481d: je 0x1091482f */
  if (zf) goto L_1091482f;
L_1091481f: /* 1091481f: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 10914822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914824: je 0x1091482f */
  if (zf) goto L_1091482f;
L_10914826: /* 10914826: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 1091482a: jmp 0x10917190 */
  goto L_10917190;
L_1091482f: /* 1091482f: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 10914834: ret  */
  esp += 4; SPILL(); return;
L_10917190: /* 10917190: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 10917194: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10917196: xor eax, eax */
  eax = 0;
/* 10917198: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091719b: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 1091719e: ret  */
  esp += 4; SPILL(); return;
}

void f_10914840(void) {
  LOAD_REGS();
L_10914840: /* 10914840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914841: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 10914845: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10914846: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 1091484a: mov ecx, edi */
  ecx = edi;
/* 1091484c: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10914852: shr edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 10914855: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914857: jne 0x10914861 */
  if (!zf) goto L_10914861;
L_10914859: /* 10914859: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091485a: mov eax, 1 */
  eax = 0x1u;
/* 1091485f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914860: ret  */
  esp += 4; SPILL(); return;
L_10914861: /* 10914861: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10914862: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 10914866: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10914868: jbe 0x1091495e */
  if ((cf | zf)) goto L_1091495e;
L_1091486e: /* 1091486e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1091486f: nop  */
L_10914870: /* 10914870: cmp ebx, 0x15b0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x15b0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10914876: mov eax, ebx */
  eax = ebx;
/* 10914878: jb 0x1091487f */
  if (cf) goto L_1091487f;
L_1091487a: /* 1091487a: mov eax, 0x15b0 */
  eax = 0x15b0u;
L_1091487f: /* 1091487f: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10914881: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914884: jl 0x10914929 */
  if ((sf != of)) goto L_10914929;
L_1091488a: /* 1091488a: mov edx, eax */
  edx = eax;
/* 1091488c: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1091488f: mov ebp, edx */
  ebp = edx;
/* 10914891: neg ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(0 - a);
  ebp = r;
  }
/* 10914893: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 10914896: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10914898: jmp 0x109148a0 */
  goto L_109148a0;
L_109148a0: /* 109148a0: movzx ebp, byte ptr [esi] */
  ebp = (uint32_t)(R8((uint32_t)(esi)));
/* 109148a3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148a5: movzx ebp, byte ptr [esi + 1] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 109148a9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148ab: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148ad: movzx ebp, byte ptr [esi + 2] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x2u)));
/* 109148b1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148b3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148b5: movzx ebp, byte ptr [esi + 3] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x3u)));
/* 109148b9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148bb: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148bd: movzx ebp, byte ptr [esi + 4] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x4u)));
/* 109148c1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148c3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148c5: movzx ebp, byte ptr [esi + 5] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x5u)));
/* 109148c9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148cb: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148cd: movzx ebp, byte ptr [esi + 6] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x6u)));
/* 109148d1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148d3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148d5: movzx ebp, byte ptr [esi + 7] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x7u)));
/* 109148d9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148db: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148dd: movzx ebp, byte ptr [esi + 8] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x8u)));
/* 109148e1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148e3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148e5: movzx ebp, byte ptr [esi + 9] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x9u)));
/* 109148e9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148eb: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148ed: movzx ebp, byte ptr [esi + 0xa] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xau)));
/* 109148f1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148f3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148f5: movzx ebp, byte ptr [esi + 0xb] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xbu)));
/* 109148f9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148fb: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148fd: movzx ebp, byte ptr [esi + 0xc] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xcu)));
/* 10914901: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10914903: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914905: movzx ebp, byte ptr [esi + 0xd] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xdu)));
/* 10914909: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1091490b: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091490d: movzx ebp, byte ptr [esi + 0xe] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xeu)));
/* 10914911: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10914913: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914915: movzx ebp, byte ptr [esi + 0xf] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xfu)));
/* 10914919: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1091491b: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091491d: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1091491f: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10914922: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10914923: jne 0x109148a0 */
  if (!zf) goto L_109148a0;
L_10914929: /* 10914929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091492b: je 0x1091493b */
  if (zf) goto L_1091493b;
L_1091492d: /* 1091492d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10914930: /* 10914930: movzx edx, byte ptr [esi] */
  edx = (uint32_t)(R8((uint32_t)(esi)));
/* 10914933: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914935: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10914936: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10914938: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10914939: jne 0x10914930 */
  if (!zf) goto L_10914930;
L_1091493b: /* 1091493b: mov eax, ecx */
  eax = ecx;
/* 1091493d: xor edx, edx */
  edx = 0;
/* 1091493f: mov ecx, 0xfff1 */
  ecx = 0xfff1u;
/* 10914944: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x10914944);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 10914946: mov eax, edi */
  eax = edi;
/* 10914948: mov edi, 0xfff1 */
  edi = 0xfff1u;
/* 1091494d: mov ecx, edx */
  ecx = edx;
/* 1091494f: xor edx, edx */
  edx = 0;
/* 10914951: div edi */
  { uint32_t d = edi; if (!d) d = guest_divzero(0x10914951);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 10914953: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10914955: mov edi, edx */
  edi = edx;
/* 10914957: ja 0x10914870 */
  if ((!cf && !zf)) goto L_10914870;
L_1091495d: /* 1091495d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_1091495e: /* 1091495e: mov eax, edi */
  eax = edi;
/* 10914960: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914961: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10914964: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914965: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10914967: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914968: ret  */
  esp += 4; SPILL(); return;
}

void f_1091489a(void) {
  LOAD_REGS();
  goto L_1091489a;
L_10914870: /* 10914870: cmp ebx, 0x15b0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x15b0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10914876: mov eax, ebx */
  eax = ebx;
/* 10914878: jb 0x1091487f */
  if (cf) goto L_1091487f;
L_1091487a: /* 1091487a: mov eax, 0x15b0 */
  eax = 0x15b0u;
L_1091487f: /* 1091487f: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10914881: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914884: jl 0x10914929 */
  if ((sf != of)) goto L_10914929;
L_1091488a: /* 1091488a: mov edx, eax */
  edx = eax;
/* 1091488c: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1091488f: mov ebp, edx */
  ebp = edx;
/* 10914891: neg ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(0 - a);
  ebp = r;
  }
/* 10914893: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 10914896: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10914898: jmp 0x109148a0 */
  goto L_109148a0;
L_1091489a: /* 1091489a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_109148a0: /* 109148a0: movzx ebp, byte ptr [esi] */
  ebp = (uint32_t)(R8((uint32_t)(esi)));
/* 109148a3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148a5: movzx ebp, byte ptr [esi + 1] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* 109148a9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148ab: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148ad: movzx ebp, byte ptr [esi + 2] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x2u)));
/* 109148b1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148b3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148b5: movzx ebp, byte ptr [esi + 3] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x3u)));
/* 109148b9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148bb: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148bd: movzx ebp, byte ptr [esi + 4] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x4u)));
/* 109148c1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148c3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148c5: movzx ebp, byte ptr [esi + 5] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x5u)));
/* 109148c9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148cb: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148cd: movzx ebp, byte ptr [esi + 6] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x6u)));
/* 109148d1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148d3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148d5: movzx ebp, byte ptr [esi + 7] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x7u)));
/* 109148d9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148db: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148dd: movzx ebp, byte ptr [esi + 8] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x8u)));
/* 109148e1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148e3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148e5: movzx ebp, byte ptr [esi + 9] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x9u)));
/* 109148e9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148eb: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148ed: movzx ebp, byte ptr [esi + 0xa] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xau)));
/* 109148f1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148f3: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148f5: movzx ebp, byte ptr [esi + 0xb] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xbu)));
/* 109148f9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 109148fb: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109148fd: movzx ebp, byte ptr [esi + 0xc] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xcu)));
/* 10914901: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10914903: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914905: movzx ebp, byte ptr [esi + 0xd] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xdu)));
/* 10914909: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1091490b: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091490d: movzx ebp, byte ptr [esi + 0xe] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xeu)));
/* 10914911: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10914913: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914915: movzx ebp, byte ptr [esi + 0xf] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0xfu)));
/* 10914919: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1091491b: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091491d: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1091491f: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10914922: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10914923: jne 0x109148a0 */
  if (!zf) goto L_109148a0;
L_10914929: /* 10914929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091492b: je 0x1091493b */
  if (zf) goto L_1091493b;
L_1091492d: /* 1091492d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10914930: /* 10914930: movzx edx, byte ptr [esi] */
  edx = (uint32_t)(R8((uint32_t)(esi)));
/* 10914933: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914935: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10914936: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10914938: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10914939: jne 0x10914930 */
  if (!zf) goto L_10914930;
L_1091493b: /* 1091493b: mov eax, ecx */
  eax = ecx;
/* 1091493d: xor edx, edx */
  edx = 0;
/* 1091493f: mov ecx, 0xfff1 */
  ecx = 0xfff1u;
/* 10914944: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x10914944);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 10914946: mov eax, edi */
  eax = edi;
/* 10914948: mov edi, 0xfff1 */
  edi = 0xfff1u;
/* 1091494d: mov ecx, edx */
  ecx = edx;
/* 1091494f: xor edx, edx */
  edx = 0;
/* 10914951: div edi */
  { uint32_t d = edi; if (!d) d = guest_divzero(0x10914951);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 10914953: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10914955: mov edi, edx */
  edi = edx;
/* 10914957: ja 0x10914870 */
  if ((!cf && !zf)) goto L_10914870;
L_1091495d: /* 1091495d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091495e: mov eax, edi */
  eax = edi;
/* 10914960: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914961: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10914964: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914965: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10914967: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914968: ret  */
  esp += 4; SPILL(); return;
}

void f_10914970(void) {
  LOAD_REGS();
L_10914970: /* 10914970: ret  */
  esp += 4; SPILL(); return;
}

void f_10914980(void) {
  LOAD_REGS();
L_10914980: /* 10914980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914981: lea eax, [edx + 0x8c] */
  eax = (uint32_t)(edx + 0x8cu);
/* 10914987: mov ecx, 0x11e */
  ecx = 0x11eu;
/* 1091498c: xor esi, esi */
  esi = 0;
/* 1091498e: mov edi, edi */
  edi = edi;
L_10914990: /* 10914990: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 10914993: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10914996: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 10914997: jne 0x10914990 */
  if (!zf) goto L_10914990;
L_10914999: /* 10914999: lea eax, [edx + 0x980] */
  eax = (uint32_t)(edx + 0x980u);
/* 1091499f: mov ecx, 0x1e */
  ecx = 0x1eu;
L_109149a4: /* 109149a4: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 109149a7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109149aa: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 109149ab: jne 0x109149a4 */
  if (!zf) goto L_109149a4;
L_109149ad: /* 109149ad: lea eax, [edx + 0xa74] */
  eax = (uint32_t)(edx + 0xa74u);
/* 109149b3: mov ecx, 0x13 */
  ecx = 0x13u;
L_109149b8: /* 109149b8: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 109149bb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109149be: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 109149bf: jne 0x109149b8 */
  if (!zf) goto L_109149b8;
L_109149c1: /* 109149c1: mov dword ptr [edx + 0x16a4], esi */
  W32((uint32_t)(edx + 0x16a4u), esi);
/* 109149c7: mov dword ptr [edx + 0x16a0], esi */
  W32((uint32_t)(edx + 0x16a0u), esi);
/* 109149cd: mov dword ptr [edx + 0x16a8], esi */
  W32((uint32_t)(edx + 0x16a8u), esi);
/* 109149d3: mov dword ptr [edx + 0x1698], esi */
  W32((uint32_t)(edx + 0x1698u), esi);
/* 109149d9: mov word ptr [edx + 0x48c], 1 */
  W16((uint32_t)(edx + 0x48cu), 0x1u);
/* 109149e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109149e3: ret  */
  esp += 4; SPILL(); return;
}

void f_109149f0(void) {
  LOAD_REGS();
L_109149f0: /* 109149f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109149f1: mov edx, dword ptr [eax + 0x1448] */
  edx = R32((uint32_t)(eax + 0x1448u));
/* 109149f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109149f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109149f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109149fa: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 109149fe: mov ebp, dword ptr [eax + esi*4 + 0xb54] */
  ebp = R32((uint32_t)(eax + esi*4 + 0xb54u));
/* 10914a05: lea ecx, [esi + esi] */
  ecx = (uint32_t)(esi + esi);
/* 10914a08: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914a0a: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 10914a0e: jg 0x10914aa9 */
  if ((!zf && sf == of)) goto L_10914aa9;
L_10914a14: /* 10914a14: jge 0x10914a48 */
  if ((sf == of)) goto L_10914a48;
L_10914a16: /* 10914a16: mov esi, dword ptr [eax + ecx*4 + 0xb58] */
  esi = R32((uint32_t)(eax + ecx*4 + 0xb58u));
/* 10914a1d: mov ebp, dword ptr [eax + ecx*4 + 0xb54] */
  ebp = R32((uint32_t)(eax + ecx*4 + 0xb54u));
/* 10914a24: mov dx, word ptr [edi + esi*4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + esi*4))) & 0xffffu);
/* 10914a28: mov bx, word ptr [edi + ebp*4] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + ebp*4))) & 0xffffu);
/* 10914a2c: cmp dx, bx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10914a2f: jb 0x10914a43 */
  if (cf) goto L_10914a43;
L_10914a31: /* 10914a31: jne 0x10914a44 */
  if (!zf) goto L_10914a44;
L_10914a33: /* 10914a33: mov dl, byte ptr [esi + eax + 0x1450] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + eax + 0x1450u))) & 0xffu);
/* 10914a3a: cmp dl, byte ptr [eax + ebp + 0x1450] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + ebp + 0x1450u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10914a41: ja 0x10914a44 */
  if ((!cf && !zf)) goto L_10914a44;
L_10914a43: /* 10914a43: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_10914a44: /* 10914a44: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
L_10914a48: /* 10914a48: mov esi, dword ptr [eax + ecx*4 + 0xb54] */
  esi = R32((uint32_t)(eax + ecx*4 + 0xb54u));
/* 10914a4f: mov dx, word ptr [edi + ebp*4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + ebp*4))) & 0xffffu);
/* 10914a53: mov bx, word ptr [edi + esi*4] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + esi*4))) & 0xffffu);
/* 10914a57: cmp dx, bx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10914a5a: jb 0x10914a89 */
  if (cf) goto L_10914a89;
L_10914a5c: /* 10914a5c: jne 0x10914a6e */
  if (!zf) goto L_10914a6e;
L_10914a5e: /* 10914a5e: mov dl, byte ptr [eax + ebp + 0x1450] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0x1450u))) & 0xffu);
/* 10914a65: cmp dl, byte ptr [esi + eax + 0x1450] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + eax + 0x1450u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10914a6c: jbe 0x10914a99 */
  if ((cf | zf)) goto L_10914a99;
L_10914a6e: /* 10914a6e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10914a72: mov dword ptr [eax + edx*4 + 0xb54], esi */
  W32((uint32_t)(eax + edx*4 + 0xb54u), esi);
/* 10914a79: mov edx, dword ptr [eax + 0x1448] */
  edx = R32((uint32_t)(eax + 0x1448u));
/* 10914a7f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10914a83: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10914a85: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914a87: jle 0x10914a14 */
  if ((zf || sf != of)) goto L_10914a14;
L_10914a89: /* 10914a89: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10914a8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914a8e: mov dword ptr [eax + ecx*4 + 0xb54], ebp */
  W32((uint32_t)(eax + ecx*4 + 0xb54u), ebp);
/* 10914a95: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914a96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914a97: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10914a98: ret  */
  esp += 4; SPILL(); return;
L_10914a99: /* 10914a99: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10914a9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914a9e: mov dword ptr [eax + edx*4 + 0xb54], ebp */
  W32((uint32_t)(eax + edx*4 + 0xb54u), ebp);
/* 10914aa5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914aa6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914aa7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10914aa8: ret  */
  esp += 4; SPILL(); return;
L_10914aa9: /* 10914aa9: mov dword ptr [eax + esi*4 + 0xb54], ebp */
  W32((uint32_t)(eax + esi*4 + 0xb54u), ebp);
/* 10914ab0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914ab1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914ab2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914ab3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10914ab4: ret  */
  esp += 4; SPILL(); return;
}

void f_10914ac0(void) {
  LOAD_REGS();
L_10914ac0: /* 10914ac0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10914ac3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 10914ac6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10914ac7: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 10914ac9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 10914acc: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10914ad0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 10914ad3: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10914ad7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914ada: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10914adb: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 10914add: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10914ae1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914ae2: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 10914ae5: xor eax, eax */
  eax = 0;
/* 10914ae7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10914ae8: lea edi, [edx + 0xb34] */
  edi = (uint32_t)(edx + 0xb34u);
/* 10914aee: mov ecx, 8 */
  ecx = 0x8u;
/* 10914af3: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10914af5: mov eax, dword ptr [edx + 0x144c] */
  eax = R32((uint32_t)(edx + 0x144cu));
/* 10914afb: mov ecx, dword ptr [edx + eax*4 + 0xb54] */
  ecx = R32((uint32_t)(edx + eax*4 + 0xb54u));
/* 10914b02: mov word ptr [ebx + ecx*4 + 2], 0 */
  W16((uint32_t)(ebx + ecx*4 + 0x2u), 0x0u);
/* 10914b09: mov ecx, dword ptr [edx + 0x144c] */
  ecx = R32((uint32_t)(edx + 0x144cu));
/* 10914b0f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914b10: cmp ecx, 0x23d */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x23du);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914b16: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 10914b1a: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 10914b22: jge 0x10914cbc */
  if ((sf == of)) goto L_10914cbc;
L_10914b28: /* 10914b28: lea eax, [edx + ecx*4 + 0xb54] */
  eax = (uint32_t)(edx + ecx*4 + 0xb54u);
/* 10914b2f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10914b33: mov eax, 0x23d */
  eax = 0x23du;
/* 10914b38: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10914b3a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914b3c: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10914b40: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_10914b44: /* 10914b44: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10914b48: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10914b4a: movzx eax, word ptr [ebx + ecx*4 + 2] */
  eax = (uint32_t)(R16((uint32_t)(ebx + ecx*4 + 0x2u)));
/* 10914b4f: movzx eax, word ptr [ebx + eax*4 + 2] */
  eax = (uint32_t)(R16((uint32_t)(ebx + eax*4 + 0x2u)));
/* 10914b54: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10914b55: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914b57: jle 0x10914b64 */
  if ((zf || sf != of)) goto L_10914b64;
L_10914b59: /* 10914b59: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 10914b5d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10914b5e: mov eax, esi */
  eax = esi;
/* 10914b60: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_10914b64: /* 10914b64: cmp ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914b68: mov word ptr [ebx + ecx*4 + 2], ax */
  W16((uint32_t)(ebx + ecx*4 + 0x2u), (eax & 0xffffu));
/* 10914b6d: jg 0x10914bbb */
  if ((!zf && sf == of)) goto L_10914bbb;
L_10914b6f: /* 10914b6f: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 10914b73: inc word ptr [edx + eax*2 + 0xb34] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*2 + 0xb34u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(edx + eax*2 + 0xb34u), r);
  }
/* 10914b7b: xor esi, esi */
  esi = 0;
/* 10914b7d: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914b7f: jl 0x10914b8c */
  if ((sf != of)) goto L_10914b8c;
L_10914b81: /* 10914b81: mov esi, ecx */
  esi = ecx;
/* 10914b83: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10914b85: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 10914b89: mov esi, dword ptr [edi + esi*4] */
  esi = R32((uint32_t)(edi + esi*4));
L_10914b8c: /* 10914b8c: movzx edi, word ptr [ebx + ecx*4] */
  edi = (uint32_t)(R16((uint32_t)(ebx + ecx*4)));
/* 10914b90: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10914b92: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 10914b95: add dword ptr [edx + 0x16a0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x16a0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx + 0x16a0u), r);
  }
/* 10914b9b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914b9d: je 0x10914bb7 */
  if (zf) goto L_10914bb7;
L_10914b9f: /* 10914b9f: movzx ecx, word ptr [ebp + ecx*4 + 2] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + ecx*4 + 0x2u)));
/* 10914ba4: mov eax, dword ptr [edx + 0x16a4] */
  eax = R32((uint32_t)(edx + 0x16a4u));
/* 10914baa: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914bac: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 10914baf: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10914bb1: mov dword ptr [edx + 0x16a4], eax */
  W32((uint32_t)(edx + 0x16a4u), eax);
L_10914bb7: /* 10914bb7: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
L_10914bbb: /* 10914bbb: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10914bbf: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10914bc3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10914bc6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10914bc7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10914bcb: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10914bcf: jne 0x10914b44 */
  if (!zf) goto L_10914b44;
L_10914bd5: /* 10914bd5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10914bd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914bdb: je 0x10914cbc */
  if (zf) goto L_10914cbc;
L_10914be1: /* 10914be1: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
/* 10914be4: lea esi, [edx + esi*2 + 0xb34] */
  esi = (uint32_t)(edx + esi*2 + 0xb34u);
/* 10914beb: jmp 0x10914bf0 */
  goto L_10914bf0;
L_10914bf0: /* 10914bf0: mov eax, edi */
  eax = edi;
/* 10914bf2: cmp word ptr [edx + eax*2 + 0xb34], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*2 + 0xb34u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 10914bfb: lea ecx, [edx + eax*2 + 0xb34] */
  ecx = (uint32_t)(edx + eax*2 + 0xb34u);
/* 10914c02: jne 0x10914c0e */
  if (!zf) goto L_10914c0e;
L_10914c04: /* 10914c04: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10914c07: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914c08: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 10914c0c: je 0x10914c04 */
  if (zf) goto L_10914c04;
L_10914c0e: /* 10914c0e: dec word ptr [edx + eax*2 + 0xb34] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*2 + 0xb34u)));
  uint16_t r = (uint16_t)(a - 1);
  W16((uint32_t)(edx + eax*2 + 0xb34u), r);
  }
/* 10914c16: add word ptr [edx + eax*2 + 0xb36], 2 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*2 + 0xb36u))); uint16_t b = (uint16_t)(0x2u);
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(edx + eax*2 + 0xb36u), r);
  }
/* 10914c1f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10914c23: dec word ptr [esi] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi)));
  uint16_t r = (uint16_t)(a - 1);
  W16((uint32_t)(esi), r);
  }
/* 10914c26: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10914c29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10914c2b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10914c2f: jg 0x10914bf0 */
  if ((!zf && sf == of)) goto L_10914bf0;
L_10914c31: /* 10914c31: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10914c35: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914c37: je 0x10914cbc */
  if (zf) goto L_10914cbc;
L_10914c3d: /* 10914c3d: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
L_10914c41: /* 10914c41: movzx esi, word ptr [esi] */
  esi = (uint32_t)(R16((uint32_t)(esi)));
/* 10914c44: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914c46: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 10914c4a: je 0x10914cac */
  if (zf) goto L_10914cac;
L_10914c4c: /* 10914c4c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10914c50: lea ebp, [edx + eax*4 + 0xb54] */
  ebp = (uint32_t)(edx + eax*4 + 0xb54u);
L_10914c57: /* 10914c57: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10914c5b: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10914c5e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 10914c5f: sub ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10914c62: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10914c66: cmp eax, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914c6a: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10914c6e: jg 0x10914ca8 */
  if ((!zf && sf == of)) goto L_10914ca8;
L_10914c70: /* 10914c70: movzx edi, word ptr [ebx + eax*4 + 2] */
  edi = (uint32_t)(R16((uint32_t)(ebx + eax*4 + 0x2u)));
/* 10914c75: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914c77: lea esi, [ebx + eax*4 + 2] */
  esi = (uint32_t)(ebx + eax*4 + 0x2u);
/* 10914c7b: je 0x10914c9d */
  if (zf) goto L_10914c9d;
L_10914c7d: /* 10914c7d: movzx eax, word ptr [ebx + eax*4] */
  eax = (uint32_t)(R16((uint32_t)(ebx + eax*4)));
/* 10914c81: mov ebp, ecx */
  ebp = ecx;
/* 10914c83: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10914c85: imul ebp, eax */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(eax);
  ebp = (uint32_t)r;
  }
/* 10914c88: mov eax, dword ptr [edx + 0x16a0] */
  eax = R32((uint32_t)(edx + 0x16a0u));
/* 10914c8e: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10914c90: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 10914c94: mov dword ptr [edx + 0x16a0], eax */
  W32((uint32_t)(edx + 0x16a0u), eax);
/* 10914c9a: mov word ptr [esi], cx */
  W16((uint32_t)(esi), (ecx & 0xffffu));
L_10914c9d: /* 10914c9d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10914ca1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914ca2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10914ca6: mov esi, eax */
  esi = eax;
L_10914ca8: /* 10914ca8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914caa: jne 0x10914c57 */
  if (!zf) goto L_10914c57;
L_10914cac: /* 10914cac: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914cb0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10914cb1: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10914cb4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914cb6: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10914cba: jne 0x10914c41 */
  if (!zf) goto L_10914c41;
L_10914cbc: /* 10914cbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914cbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914cbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914cbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914cc0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10914cc3: ret  */
  esp += 4; SPILL(); return;
}

void f_10914bed(void) {
  LOAD_REGS();
L_10914bed: /* 10914bed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10914bf0: /* 10914bf0: mov eax, edi */
  eax = edi;
/* 10914bf2: cmp word ptr [edx + eax*2 + 0xb34], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*2 + 0xb34u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 10914bfb: lea ecx, [edx + eax*2 + 0xb34] */
  ecx = (uint32_t)(edx + eax*2 + 0xb34u);
/* 10914c02: jne 0x10914c0e */
  if (!zf) goto L_10914c0e;
L_10914c04: /* 10914c04: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10914c07: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914c08: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 10914c0c: je 0x10914c04 */
  if (zf) goto L_10914c04;
L_10914c0e: /* 10914c0e: dec word ptr [edx + eax*2 + 0xb34] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*2 + 0xb34u)));
  uint16_t r = (uint16_t)(a - 1);
  W16((uint32_t)(edx + eax*2 + 0xb34u), r);
  }
/* 10914c16: add word ptr [edx + eax*2 + 0xb36], 2 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*2 + 0xb36u))); uint16_t b = (uint16_t)(0x2u);
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(edx + eax*2 + 0xb36u), r);
  }
/* 10914c1f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10914c23: dec word ptr [esi] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi)));
  uint16_t r = (uint16_t)(a - 1);
  W16((uint32_t)(esi), r);
  }
/* 10914c26: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10914c29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10914c2b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10914c2f: jg 0x10914bf0 */
  if ((!zf && sf == of)) goto L_10914bf0;
L_10914c31: /* 10914c31: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10914c35: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914c37: je 0x10914cbc */
  if (zf) goto L_10914cbc;
L_10914c3d: /* 10914c3d: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
L_10914c41: /* 10914c41: movzx esi, word ptr [esi] */
  esi = (uint32_t)(R16((uint32_t)(esi)));
/* 10914c44: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914c46: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 10914c4a: je 0x10914cac */
  if (zf) goto L_10914cac;
L_10914c4c: /* 10914c4c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10914c50: lea ebp, [edx + eax*4 + 0xb54] */
  ebp = (uint32_t)(edx + eax*4 + 0xb54u);
L_10914c57: /* 10914c57: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10914c5b: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10914c5e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 10914c5f: sub ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10914c62: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10914c66: cmp eax, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914c6a: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10914c6e: jg 0x10914ca8 */
  if ((!zf && sf == of)) goto L_10914ca8;
L_10914c70: /* 10914c70: movzx edi, word ptr [ebx + eax*4 + 2] */
  edi = (uint32_t)(R16((uint32_t)(ebx + eax*4 + 0x2u)));
/* 10914c75: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914c77: lea esi, [ebx + eax*4 + 2] */
  esi = (uint32_t)(ebx + eax*4 + 0x2u);
/* 10914c7b: je 0x10914c9d */
  if (zf) goto L_10914c9d;
L_10914c7d: /* 10914c7d: movzx eax, word ptr [ebx + eax*4] */
  eax = (uint32_t)(R16((uint32_t)(ebx + eax*4)));
/* 10914c81: mov ebp, ecx */
  ebp = ecx;
/* 10914c83: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10914c85: imul ebp, eax */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(eax);
  ebp = (uint32_t)r;
  }
/* 10914c88: mov eax, dword ptr [edx + 0x16a0] */
  eax = R32((uint32_t)(edx + 0x16a0u));
/* 10914c8e: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10914c90: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 10914c94: mov dword ptr [edx + 0x16a0], eax */
  W32((uint32_t)(edx + 0x16a0u), eax);
/* 10914c9a: mov word ptr [esi], cx */
  W16((uint32_t)(esi), (ecx & 0xffffu));
L_10914c9d: /* 10914c9d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10914ca1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10914ca2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10914ca6: mov esi, eax */
  esi = eax;
L_10914ca8: /* 10914ca8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914caa: jne 0x10914c57 */
  if (!zf) goto L_10914c57;
L_10914cac: /* 10914cac: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914cb0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10914cb1: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10914cb4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914cb6: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10914cba: jne 0x10914c41 */
  if (!zf) goto L_10914c41;
L_10914cbc: /* 10914cbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914cbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914cbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914cbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914cc0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10914cc3: ret  */
  esp += 4; SPILL(); return;
}

void f_10914cd0(void) {
  LOAD_REGS();
L_10914cd0: /* 10914cd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10914cd1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10914cd2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10914cd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914cd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10914cd5: movzx edi, word ptr [eax + 2] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 10914cd9: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 10914cdc: xor esi, esi */
  esi = 0;
/* 10914cde: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914ce0: mov ebx, ecx */
  ebx = ecx;
/* 10914ce2: mov ecx, 7 */
  ecx = 0x7u;
/* 10914ce7: mov edx, 4 */
  edx = 0x4u;
/* 10914cec: jne 0x10914cf8 */
  if (!zf) goto L_10914cf8;
L_10914cee: /* 10914cee: mov ecx, 0x8a */
  ecx = 0x8au;
/* 10914cf3: mov edx, 3 */
  edx = 0x3u;
L_10914cf8: /* 10914cf8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10914cfa: mov word ptr [eax + ebx*4 + 6], 0xffff */
  W16((uint32_t)(eax + ebx*4 + 0x6u), 0xffffu);
/* 10914d01: jl 0x10914da2 */
  if ((sf != of)) goto L_10914da2;
L_10914d07: /* 10914d07: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10914d0a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10914d0e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10914d0f: nop  */
L_10914d10: /* 10914d10: mov eax, edi */
  eax = edi;
/* 10914d12: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 10914d16: movzx edi, word ptr [edi] */
  edi = (uint32_t)(R16((uint32_t)(edi)));
/* 10914d19: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10914d1a: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914d1c: jge 0x10914d22 */
  if ((sf == of)) goto L_10914d22;
L_10914d1e: /* 10914d1e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914d20: je 0x10914d90 */
  if (zf) goto L_10914d90;
L_10914d22: /* 10914d22: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914d24: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10914d28: jge 0x10914d34 */
  if ((sf == of)) goto L_10914d34;
L_10914d2a: /* 10914d2a: add word ptr [ecx + eax*4 + 0xa74], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + eax*4 + 0xa74u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + eax*4 + 0xa74u), r);
  }
/* 10914d32: jmp 0x10914d62 */
  goto L_10914d62;
L_10914d34: /* 10914d34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914d36: je 0x10914d4d */
  if (zf) goto L_10914d4d;
L_10914d38: /* 10914d38: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914d3a: je 0x10914d44 */
  if (zf) goto L_10914d44;
L_10914d3c: /* 10914d3c: inc word ptr [ecx + eax*4 + 0xa74] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + eax*4 + 0xa74u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ecx + eax*4 + 0xa74u), r);
  }
L_10914d44: /* 10914d44: inc word ptr [ecx + 0xab4] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0xab4u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ecx + 0xab4u), r);
  }
/* 10914d4b: jmp 0x10914d62 */
  goto L_10914d62;
L_10914d4d: /* 10914d4d: cmp esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914d50: jg 0x10914d5b */
  if ((!zf && sf == of)) goto L_10914d5b;
L_10914d52: /* 10914d52: inc word ptr [ecx + 0xab8] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0xab8u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ecx + 0xab8u), r);
  }
/* 10914d59: jmp 0x10914d62 */
  goto L_10914d62;
L_10914d5b: /* 10914d5b: inc word ptr [ecx + 0xabc] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0xabcu)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ecx + 0xabcu), r);
  }
L_10914d62: /* 10914d62: xor esi, esi */
  esi = 0;
/* 10914d64: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914d66: mov ebp, eax */
  ebp = eax;
/* 10914d68: jne 0x10914d76 */
  if (!zf) goto L_10914d76;
L_10914d6a: /* 10914d6a: mov ecx, 0x8a */
  ecx = 0x8au;
/* 10914d6f: mov edx, 3 */
  edx = 0x3u;
/* 10914d74: jmp 0x10914d90 */
  goto L_10914d90;
L_10914d76: /* 10914d76: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914d78: jne 0x10914d86 */
  if (!zf) goto L_10914d86;
L_10914d7a: /* 10914d7a: mov ecx, 6 */
  ecx = 0x6u;
/* 10914d7f: mov edx, 3 */
  edx = 0x3u;
/* 10914d84: jmp 0x10914d90 */
  goto L_10914d90;
L_10914d86: /* 10914d86: mov ecx, 7 */
  ecx = 0x7u;
/* 10914d8b: mov edx, 4 */
  edx = 0x4u;
L_10914d90: /* 10914d90: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10914d94: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10914d97: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 10914d98: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10914d9c: jne 0x10914d10 */
  if (!zf) goto L_10914d10;
L_10914da2: /* 10914da2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10914da3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10914da4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10914da5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10914da6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10914da7: ret  */
  esp += 4; SPILL(); return;
}

void f_10914db0(void) {
  LOAD_REGS();
L_10914db0: /* 10914db0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10914db3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10914db4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10914db5: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10914db9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10914dba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10914dbb: mov edi, ecx */
  edi = ecx;
/* 10914dbd: movzx ecx, word ptr [edi + 2] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x2u)));
/* 10914dc1: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10914dc5: xor esi, esi */
  esi = 0;
/* 10914dc7: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 10914dca: cmp dword ptr [esp + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914dce: mov ecx, 7 */
  ecx = 0x7u;
/* 10914dd3: mov edx, 4 */
  edx = 0x4u;
/* 10914dd8: jne 0x10914de4 */
  if (!zf) goto L_10914de4;
L_10914dda: /* 10914dda: mov ecx, 0x8a */
  ecx = 0x8au;
/* 10914ddf: mov edx, 3 */
  edx = 0x3u;
L_10914de4: /* 10914de4: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10914de6: jl 0x109152b2 */
  if ((sf != of)) goto L_109152b2;
L_10914dec: /* 10914dec: add edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10914def: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10914df0: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 10914df4: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10914df8: jmp 0x10914e00 */
  goto L_10914e00;
L_10914e00: /* 10914e00: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 10914e04: movzx edi, word ptr [edi] */
  edi = (uint32_t)(R16((uint32_t)(edi)));
/* 10914e07: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 10914e0b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10914e0c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914e0e: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 10914e12: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10914e16: jge 0x10914e20 */
  if ((sf == of)) goto L_10914e20;
L_10914e18: /* 10914e18: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914e1a: je 0x10915298 */
  if (zf) goto L_10915298;
L_10914e20: /* 10914e20: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914e22: jge 0x10914ecf */
  if ((sf == of)) goto L_10914ecf;
L_10914e28: /* 10914e28: jmp 0x10914e30 */
  goto L_10914e30;
L_10914e30: /* 10914e30: movzx edi, word ptr [eax + ebp*4 + 0xa76] */
  edi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa76u)));
/* 10914e38: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10914e3e: mov edx, 0x10 */
  edx = 0x10u;
/* 10914e43: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10914e45: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914e47: jle 0x10914ea5 */
  if ((zf || sf != of)) goto L_10914ea5;
L_10914e49: /* 10914e49: movzx esi, word ptr [eax + ebp*4 + 0xa74] */
  esi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u)));
/* 10914e51: mov edx, esi */
  edx = esi;
/* 10914e53: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10914e55: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914e58: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914e5f: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914e62: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10914e68: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914e6b: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914e6e: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10914e74: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914e75: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10914e78: mov ecx, edx */
  ecx = edx;
/* 10914e7a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10914e7d: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914e80: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10914e83: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10914e89: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914e8a: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10914e8d: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10914e8f: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914e91: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914e94: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 10914e98: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10914e9f: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914ea3: jmp 0x10914eb9 */
  goto L_10914eb9;
L_10914ea5: /* 10914ea5: mov dx, word ptr [eax + ebp*4 + 0xa74] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u))) & 0xffffu);
/* 10914ead: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914eb0: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914eb7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10914eb9: /* 10914eb9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10914eba: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10914ec0: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10914ec4: jne 0x10914e30 */
  if (!zf) goto L_10914e30;
L_10914eca: /* 10914eca: jmp 0x10915266 */
  goto L_10915266;
L_10914ecf: /* 10914ecf: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914ed1: je 0x10915070 */
  if (zf) goto L_10915070;
L_10914ed7: /* 10914ed7: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914ed9: je 0x10914f73 */
  if (zf) goto L_10914f73;
L_10914edf: /* 10914edf: movzx edi, word ptr [eax + ebp*4 + 0xa76] */
  edi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa76u)));
/* 10914ee7: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10914eed: mov edx, 0x10 */
  edx = 0x10u;
/* 10914ef2: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10914ef4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914ef6: jle 0x10914f54 */
  if ((zf || sf != of)) goto L_10914f54;
L_10914ef8: /* 10914ef8: movzx esi, word ptr [eax + ebp*4 + 0xa74] */
  esi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u)));
/* 10914f00: mov edx, esi */
  edx = esi;
/* 10914f02: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10914f04: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914f07: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914f0e: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914f11: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10914f17: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914f1a: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914f1d: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10914f23: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914f24: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10914f27: mov ecx, edx */
  ecx = edx;
/* 10914f29: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10914f2c: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914f2f: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10914f32: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10914f38: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914f39: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10914f3c: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10914f3e: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914f40: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914f43: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 10914f47: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10914f4e: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914f52: jmp 0x10914f68 */
  goto L_10914f68;
L_10914f54: /* 10914f54: mov dx, word ptr [eax + ebp*4 + 0xa74] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u))) & 0xffffu);
/* 10914f5c: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914f5f: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914f66: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10914f68: /* 10914f68: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 10914f69: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10914f6f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
L_10914f73: /* 10914f73: movzx edi, word ptr [eax + 0xab6] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0xab6u)));
/* 10914f7a: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10914f80: mov edx, 0x10 */
  edx = 0x10u;
/* 10914f85: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10914f87: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914f89: jle 0x10914fe6 */
  if ((zf || sf != of)) goto L_10914fe6;
L_10914f8b: /* 10914f8b: movzx esi, word ptr [eax + 0xab4] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0xab4u)));
/* 10914f92: mov edx, esi */
  edx = esi;
/* 10914f94: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10914f96: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914f99: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914fa0: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914fa3: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10914fa9: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914fac: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914faf: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10914fb5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914fb6: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10914fb9: mov ecx, edx */
  ecx = edx;
/* 10914fbb: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10914fbe: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914fc1: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10914fc4: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10914fca: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914fcb: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10914fce: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10914fd0: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914fd2: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914fd5: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 10914fd9: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10914fe0: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914fe4: jmp 0x10914ff9 */
  goto L_10914ff9;
L_10914fe6: /* 10914fe6: mov dx, word ptr [eax + 0xab4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xab4u))) & 0xffffu);
/* 10914fed: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914ff0: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914ff7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10914ff9: /* 10914ff9: add esi, -3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10914ffc: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914fff: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10915005: jle 0x1091505f */
  if ((zf || sf != of)) goto L_1091505f;
L_10915007: /* 10915007: mov edx, esi */
  edx = esi;
/* 10915009: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091500b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1091500e: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915015: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915018: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 1091501e: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915021: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915024: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 1091502a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091502b: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 1091502e: mov ecx, edx */
  ecx = edx;
/* 10915030: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915033: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915036: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915039: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 1091503f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915040: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915043: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10915045: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915047: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 1091504a: add edx, -0xe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1091504d: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 10915053: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 1091505a: jmp 0x10915266 */
  goto L_10915266;
L_1091505f: /* 1091505f: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10915061: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915068: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091506b: jmp 0x10915260 */
  goto L_10915260;
L_10915070: /* 10915070: cmp esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915073: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915079: mov edx, 0x10 */
  edx = 0x10u;
/* 1091507e: jg 0x10915176 */
  if ((!zf && sf == of)) goto L_10915176;
L_10915084: /* 10915084: movzx edi, word ptr [eax + 0xaba] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0xabau)));
/* 1091508b: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091508d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091508f: jle 0x109150ec */
  if ((zf || sf != of)) goto L_109150ec;
L_10915091: /* 10915091: movzx esi, word ptr [eax + 0xab8] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0xab8u)));
/* 10915098: mov edx, esi */
  edx = esi;
/* 1091509a: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091509c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1091509f: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109150a6: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109150a9: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109150af: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109150b2: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109150b5: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109150bb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109150bc: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109150bf: mov ecx, edx */
  ecx = edx;
/* 109150c1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109150c4: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109150c7: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109150ca: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109150d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109150d1: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109150d4: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109150d6: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109150d8: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109150db: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 109150df: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109150e6: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 109150ea: jmp 0x109150ff */
  goto L_109150ff;
L_109150ec: /* 109150ec: mov dx, word ptr [eax + 0xab8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xab8u))) & 0xffffu);
/* 109150f3: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109150f6: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109150fd: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109150ff: /* 109150ff: add esi, -3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10915102: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915105: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 1091510b: jle 0x10915165 */
  if ((zf || sf != of)) goto L_10915165;
L_1091510d: /* 1091510d: mov edx, esi */
  edx = esi;
/* 1091510f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915111: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915114: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091511b: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091511e: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915124: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915127: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091512a: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915130: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915131: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915134: mov ecx, edx */
  ecx = edx;
/* 10915136: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915139: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091513c: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091513f: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915145: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915146: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915149: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091514b: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091514d: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915150: add edx, -0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10915153: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 10915159: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915160: jmp 0x10915266 */
  goto L_10915266;
L_10915165: /* 10915165: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10915167: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091516e: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10915171: jmp 0x10915260 */
  goto L_10915260;
L_10915176: /* 10915176: movzx edi, word ptr [eax + 0xabe] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0xabeu)));
/* 1091517d: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091517f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915181: jle 0x109151de */
  if ((zf || sf != of)) goto L_109151de;
L_10915183: /* 10915183: movzx esi, word ptr [eax + 0xabc] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0xabcu)));
/* 1091518a: mov edx, esi */
  edx = esi;
/* 1091518c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091518e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915191: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915198: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091519b: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109151a1: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109151a4: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109151a7: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109151ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109151ae: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109151b1: mov ecx, edx */
  ecx = edx;
/* 109151b3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109151b6: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109151b9: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109151bc: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109151c2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109151c3: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109151c6: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109151c8: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109151ca: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109151cd: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 109151d1: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109151d8: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 109151dc: jmp 0x109151f1 */
  goto L_109151f1;
L_109151de: /* 109151de: mov dx, word ptr [eax + 0xabc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xabcu))) & 0xffffu);
/* 109151e5: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109151e8: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109151ef: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109151f1: /* 109151f1: add esi, -0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff5u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 109151f4: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109151f7: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 109151fd: jle 0x10915254 */
  if ((zf || sf != of)) goto L_10915254;
L_109151ff: /* 109151ff: mov edx, esi */
  edx = esi;
/* 10915201: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915203: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915206: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091520d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915210: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915216: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915219: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091521c: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915222: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915223: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915226: mov ecx, edx */
  ecx = edx;
/* 10915228: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 1091522b: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091522e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915231: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915237: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915238: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 1091523b: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091523d: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091523f: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915242: add edx, -9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10915245: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 1091524b: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915252: jmp 0x10915266 */
  goto L_10915266;
L_10915254: /* 10915254: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10915256: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091525d: add ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10915260: /* 10915260: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_10915266: /* 10915266: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1091526a: xor esi, esi */
  esi = 0;
/* 1091526c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091526e: mov ebx, ebp */
  ebx = ebp;
/* 10915270: jne 0x1091527e */
  if (!zf) goto L_1091527e;
L_10915272: /* 10915272: mov ecx, 0x8a */
  ecx = 0x8au;
/* 10915277: mov edx, 3 */
  edx = 0x3u;
/* 1091527c: jmp 0x10915298 */
  goto L_10915298;
L_1091527e: /* 1091527e: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10915280: jne 0x1091528e */
  if (!zf) goto L_1091528e;
L_10915282: /* 10915282: mov ecx, 6 */
  ecx = 0x6u;
/* 10915287: mov edx, 3 */
  edx = 0x3u;
/* 1091528c: jmp 0x10915298 */
  goto L_10915298;
L_1091528e: /* 1091528e: mov ecx, 7 */
  ecx = 0x7u;
/* 10915293: mov edx, 4 */
  edx = 0x4u;
L_10915298: /* 10915298: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1091529c: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 109152a0: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 109152a3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 109152a4: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 109152a8: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 109152ac: jne 0x10914e00 */
  if (!zf) goto L_10914e00;
L_109152b2: /* 109152b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109152b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109152b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109152b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109152b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109152b9: ret  */
  esp += 4; SPILL(); return;
}

void f_10914dfa(void) {
  LOAD_REGS();
L_10914dfa: /* 10914dfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10914e00: /* 10914e00: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 10914e04: movzx edi, word ptr [edi] */
  edi = (uint32_t)(R16((uint32_t)(edi)));
/* 10914e07: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 10914e0b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10914e0c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914e0e: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 10914e12: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10914e16: jge 0x10914e20 */
  if ((sf == of)) goto L_10914e20;
L_10914e18: /* 10914e18: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914e1a: je 0x10915298 */
  if (zf) goto L_10915298;
L_10914e20: /* 10914e20: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914e22: jge 0x10914ecf */
  if ((sf == of)) goto L_10914ecf;
L_10914e28: /* 10914e28: jmp 0x10914e30 */
  goto L_10914e30;
L_10914e30: /* 10914e30: movzx edi, word ptr [eax + ebp*4 + 0xa76] */
  edi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa76u)));
/* 10914e38: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10914e3e: mov edx, 0x10 */
  edx = 0x10u;
/* 10914e43: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10914e45: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914e47: jle 0x10914ea5 */
  if ((zf || sf != of)) goto L_10914ea5;
L_10914e49: /* 10914e49: movzx esi, word ptr [eax + ebp*4 + 0xa74] */
  esi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u)));
/* 10914e51: mov edx, esi */
  edx = esi;
/* 10914e53: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10914e55: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914e58: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914e5f: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914e62: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10914e68: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914e6b: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914e6e: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10914e74: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914e75: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10914e78: mov ecx, edx */
  ecx = edx;
/* 10914e7a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10914e7d: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914e80: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10914e83: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10914e89: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914e8a: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10914e8d: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10914e8f: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914e91: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914e94: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 10914e98: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10914e9f: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914ea3: jmp 0x10914eb9 */
  goto L_10914eb9;
L_10914ea5: /* 10914ea5: mov dx, word ptr [eax + ebp*4 + 0xa74] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u))) & 0xffffu);
/* 10914ead: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914eb0: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914eb7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10914eb9: /* 10914eb9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10914eba: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10914ec0: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10914ec4: jne 0x10914e30 */
  if (!zf) goto L_10914e30;
L_10914eca: /* 10914eca: jmp 0x10915266 */
  goto L_10915266;
L_10914ecf: /* 10914ecf: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914ed1: je 0x10915070 */
  if (zf) goto L_10915070;
L_10914ed7: /* 10914ed7: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914ed9: je 0x10914f73 */
  if (zf) goto L_10914f73;
L_10914edf: /* 10914edf: movzx edi, word ptr [eax + ebp*4 + 0xa76] */
  edi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa76u)));
/* 10914ee7: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10914eed: mov edx, 0x10 */
  edx = 0x10u;
/* 10914ef2: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10914ef4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914ef6: jle 0x10914f54 */
  if ((zf || sf != of)) goto L_10914f54;
L_10914ef8: /* 10914ef8: movzx esi, word ptr [eax + ebp*4 + 0xa74] */
  esi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u)));
/* 10914f00: mov edx, esi */
  edx = esi;
/* 10914f02: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10914f04: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914f07: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914f0e: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914f11: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10914f17: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914f1a: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914f1d: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10914f23: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914f24: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10914f27: mov ecx, edx */
  ecx = edx;
/* 10914f29: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10914f2c: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914f2f: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10914f32: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10914f38: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914f39: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10914f3c: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10914f3e: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914f40: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914f43: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 10914f47: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10914f4e: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914f52: jmp 0x10914f68 */
  goto L_10914f68;
L_10914f54: /* 10914f54: mov dx, word ptr [eax + ebp*4 + 0xa74] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u))) & 0xffffu);
/* 10914f5c: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914f5f: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914f66: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10914f68: /* 10914f68: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 10914f69: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10914f6f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
L_10914f73: /* 10914f73: movzx edi, word ptr [eax + 0xab6] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0xab6u)));
/* 10914f7a: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10914f80: mov edx, 0x10 */
  edx = 0x10u;
/* 10914f85: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10914f87: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914f89: jle 0x10914fe6 */
  if ((zf || sf != of)) goto L_10914fe6;
L_10914f8b: /* 10914f8b: movzx esi, word ptr [eax + 0xab4] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0xab4u)));
/* 10914f92: mov edx, esi */
  edx = esi;
/* 10914f94: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10914f96: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914f99: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914fa0: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914fa3: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10914fa9: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914fac: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914faf: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10914fb5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914fb6: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10914fb9: mov ecx, edx */
  ecx = edx;
/* 10914fbb: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10914fbe: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914fc1: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10914fc4: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10914fca: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914fcb: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10914fce: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10914fd0: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914fd2: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914fd5: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 10914fd9: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10914fe0: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914fe4: jmp 0x10914ff9 */
  goto L_10914ff9;
L_10914fe6: /* 10914fe6: mov dx, word ptr [eax + 0xab4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xab4u))) & 0xffffu);
/* 10914fed: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914ff0: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914ff7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10914ff9: /* 10914ff9: add esi, -3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10914ffc: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914fff: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10915005: jle 0x1091505f */
  if ((zf || sf != of)) goto L_1091505f;
L_10915007: /* 10915007: mov edx, esi */
  edx = esi;
/* 10915009: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091500b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1091500e: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915015: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915018: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 1091501e: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915021: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915024: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 1091502a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091502b: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 1091502e: mov ecx, edx */
  ecx = edx;
/* 10915030: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915033: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915036: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915039: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 1091503f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915040: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915043: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10915045: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915047: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 1091504a: add edx, -0xe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1091504d: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 10915053: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 1091505a: jmp 0x10915266 */
  goto L_10915266;
L_1091505f: /* 1091505f: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10915061: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915068: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091506b: jmp 0x10915260 */
  goto L_10915260;
L_10915070: /* 10915070: cmp esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915073: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915079: mov edx, 0x10 */
  edx = 0x10u;
/* 1091507e: jg 0x10915176 */
  if ((!zf && sf == of)) goto L_10915176;
L_10915084: /* 10915084: movzx edi, word ptr [eax + 0xaba] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0xabau)));
/* 1091508b: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091508d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091508f: jle 0x109150ec */
  if ((zf || sf != of)) goto L_109150ec;
L_10915091: /* 10915091: movzx esi, word ptr [eax + 0xab8] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0xab8u)));
/* 10915098: mov edx, esi */
  edx = esi;
/* 1091509a: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091509c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1091509f: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109150a6: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109150a9: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109150af: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109150b2: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109150b5: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109150bb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109150bc: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109150bf: mov ecx, edx */
  ecx = edx;
/* 109150c1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109150c4: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109150c7: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109150ca: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109150d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109150d1: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109150d4: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109150d6: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109150d8: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109150db: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 109150df: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109150e6: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 109150ea: jmp 0x109150ff */
  goto L_109150ff;
L_109150ec: /* 109150ec: mov dx, word ptr [eax + 0xab8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xab8u))) & 0xffffu);
/* 109150f3: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109150f6: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109150fd: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109150ff: /* 109150ff: add esi, -3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10915102: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915105: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 1091510b: jle 0x10915165 */
  if ((zf || sf != of)) goto L_10915165;
L_1091510d: /* 1091510d: mov edx, esi */
  edx = esi;
/* 1091510f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915111: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915114: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091511b: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091511e: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915124: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915127: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091512a: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915130: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915131: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915134: mov ecx, edx */
  ecx = edx;
/* 10915136: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915139: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091513c: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091513f: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915145: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915146: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915149: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091514b: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091514d: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915150: add edx, -0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10915153: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 10915159: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915160: jmp 0x10915266 */
  goto L_10915266;
L_10915165: /* 10915165: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10915167: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091516e: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10915171: jmp 0x10915260 */
  goto L_10915260;
L_10915176: /* 10915176: movzx edi, word ptr [eax + 0xabe] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0xabeu)));
/* 1091517d: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091517f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915181: jle 0x109151de */
  if ((zf || sf != of)) goto L_109151de;
L_10915183: /* 10915183: movzx esi, word ptr [eax + 0xabc] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0xabcu)));
/* 1091518a: mov edx, esi */
  edx = esi;
/* 1091518c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091518e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915191: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915198: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091519b: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109151a1: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109151a4: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109151a7: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109151ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109151ae: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109151b1: mov ecx, edx */
  ecx = edx;
/* 109151b3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109151b6: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109151b9: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109151bc: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109151c2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109151c3: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109151c6: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109151c8: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109151ca: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109151cd: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 109151d1: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109151d8: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 109151dc: jmp 0x109151f1 */
  goto L_109151f1;
L_109151de: /* 109151de: mov dx, word ptr [eax + 0xabc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xabcu))) & 0xffffu);
/* 109151e5: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109151e8: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109151ef: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109151f1: /* 109151f1: add esi, -0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff5u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 109151f4: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109151f7: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 109151fd: jle 0x10915254 */
  if ((zf || sf != of)) goto L_10915254;
L_109151ff: /* 109151ff: mov edx, esi */
  edx = esi;
/* 10915201: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915203: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915206: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091520d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915210: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915216: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915219: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091521c: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915222: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915223: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915226: mov ecx, edx */
  ecx = edx;
/* 10915228: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 1091522b: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091522e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915231: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915237: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915238: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 1091523b: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091523d: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091523f: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915242: add edx, -9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10915245: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 1091524b: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915252: jmp 0x10915266 */
  goto L_10915266;
L_10915254: /* 10915254: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10915256: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091525d: add ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10915260: /* 10915260: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_10915266: /* 10915266: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1091526a: xor esi, esi */
  esi = 0;
/* 1091526c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091526e: mov ebx, ebp */
  ebx = ebp;
/* 10915270: jne 0x1091527e */
  if (!zf) goto L_1091527e;
L_10915272: /* 10915272: mov ecx, 0x8a */
  ecx = 0x8au;
/* 10915277: mov edx, 3 */
  edx = 0x3u;
/* 1091527c: jmp 0x10915298 */
  goto L_10915298;
L_1091527e: /* 1091527e: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10915280: jne 0x1091528e */
  if (!zf) goto L_1091528e;
L_10915282: /* 10915282: mov ecx, 6 */
  ecx = 0x6u;
/* 10915287: mov edx, 3 */
  edx = 0x3u;
/* 1091528c: jmp 0x10915298 */
  goto L_10915298;
L_1091528e: /* 1091528e: mov ecx, 7 */
  ecx = 0x7u;
/* 10915293: mov edx, 4 */
  edx = 0x4u;
L_10915298: /* 10915298: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1091529c: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 109152a0: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 109152a3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 109152a4: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 109152a8: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 109152ac: jne 0x10914e00 */
  if (!zf) goto L_10914e00;
L_109152b2: /* 109152b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109152b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109152b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109152b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109152b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109152b9: ret  */
  esp += 4; SPILL(); return;
}
